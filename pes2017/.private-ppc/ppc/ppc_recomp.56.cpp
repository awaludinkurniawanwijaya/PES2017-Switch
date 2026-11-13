#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8260BFB8"))) PPC_WEAK_FUNC(sub_8260BFB8);
PPC_FUNC_IMPL(__imp__sub_8260BFB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260BFBC"))) PPC_WEAK_FUNC(sub_8260BFBC);
PPC_FUNC_IMPL(__imp__sub_8260BFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260BFC0"))) PPC_WEAK_FUNC(sub_8260BFC0);
PPC_FUNC_IMPL(__imp__sub_8260BFC0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3568
	ctx.r10.s64 = ctx.r11.s64 + -3568;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8260b538
	ctx.lr = 0x8260BFEC;
	sub_8260B538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8260BFF4;
	sub_82627660(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260c00c
	if (cr6.eq) goto loc_8260C00C;
	// bl 0x82416268
	ctx.lr = 0x8260C008;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8260C00C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260C024"))) PPC_WEAK_FUNC(sub_8260C024);
PPC_FUNC_IMPL(__imp__sub_8260C024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260C028"))) PPC_WEAK_FUNC(sub_8260C028);
PPC_FUNC_IMPL(__imp__sub_8260C028) {
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
	// bl 0x82624ae8
	ctx.lr = 0x8260C040;
	sub_82624AE8(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r31,1012
	ctx.r11.s64 = ctx.r31.s64 + 1012;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8260C054:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8260c054
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8260C054;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r9,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r9.u32);
	// stw r9,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// bl 0x82628208
	ctx.lr = 0x8260C074;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_8260C088"))) PPC_WEAK_FUNC(sub_8260C088);
PPC_FUNC_IMPL(__imp__sub_8260C088) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82624cf8
	ctx.lr = 0x8260C0A4;
	sub_82624CF8(ctx, base);
	// addi r30,r31,1012
	ctx.r30.s64 = ctx.r31.s64 + 1012;
	// li r31,16
	ctx.r31.s64 = 16;
loc_8260C0AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264fdf8
	ctx.lr = 0x8260C0B4;
	sub_8264FDF8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8260c0ac
	if (!cr0.eq) goto loc_8260C0AC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260C0D8"))) PPC_WEAK_FUNC(sub_8260C0D8);
PPC_FUNC_IMPL(__imp__sub_8260C0D8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82624490
	ctx.lr = 0x8260C0F8;
	sub_82624490(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r30,1012
	ctx.r30.s64 = ctx.r30.s64 + 1012;
loc_8260C100:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82650570
	ctx.lr = 0x8260C110;
	sub_82650570(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(ctx.r31.s32, 16, xer);
	// blt cr6,0x8260c100
	if (cr6.lt) goto loc_8260C100;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260C138"))) PPC_WEAK_FUNC(sub_8260C138);
PPC_FUNC_IMPL(__imp__sub_8260C138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8260C140;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260c1c4
	if (cr6.eq) goto loc_8260C1C4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260c1c4
	if (cr6.eq) goto loc_8260C1C4;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260c1c4
	if (cr6.eq) goto loc_8260C1C4;
	// bl 0x82624f78
	ctx.lr = 0x8260C168;
	sub_82624F78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260C170;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260C178;
	sub_82A2E7C0(ctx, base);
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,125
	ctx.r5.u64 = ctx.r5.u64 | 125;
	// bl 0x82a18350
	ctx.lr = 0x8260C18C;
	sub_82A18350(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260C194;
	sub_82A2E7C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r3.u32);
	// li r29,11
	ctx.r29.s64 = 11;
	// stw r11,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r11.u32);
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
loc_8260C1A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a193b0
	ctx.lr = 0x8260C1B8;
	sub_82A193B0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// blt cr6,0x8260c1a8
	if (cr6.lt) goto loc_8260C1A8;
loc_8260C1C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260C1CC"))) PPC_WEAK_FUNC(sub_8260C1CC);
PPC_FUNC_IMPL(__imp__sub_8260C1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260C1D0"))) PPC_WEAK_FUNC(sub_8260C1D0);
PPC_FUNC_IMPL(__imp__sub_8260C1D0) {
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
	// bl 0x826249d8
	ctx.lr = 0x8260C1E8;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260c22c
	if (cr6.eq) goto loc_8260C22C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249e8
	ctx.lr = 0x8260C1FC;
	sub_826249E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8260c22c
	if (!cr6.eq) goto loc_8260C22C;
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260C210;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260C22C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260C22C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b08
	ctx.lr = 0x8260C234;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260c254
	if (!cr6.eq) goto loc_8260C254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x8260C248;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260c30c
	if (cr6.eq) goto loc_8260C30C;
loc_8260C254:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e58
	ctx.lr = 0x8260C25C;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260c2cc
	if (cr6.eq) goto loc_8260C2CC;
	// bl 0x82624ae0
	ctx.lr = 0x8260C270;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x8260C27C;
	sub_82628658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x8260C284;
	sub_82624A08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b10
	ctx.lr = 0x8260C28C;
	sub_82624B10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8260c30c
	if (cr6.eq) goto loc_8260C30C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b10
	ctx.lr = 0x8260C29C;
	sub_82624B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260C2A8;
	sub_825832F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82627d48
	ctx.lr = 0x8260C2B8;
	sub_82627D48(ctx, base);
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
loc_8260C2CC:
	// bl 0x82624a60
	ctx.lr = 0x8260C2D0;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260c30c
	if (!cr6.eq) goto loc_8260C30C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b10
	ctx.lr = 0x8260C2E4;
	sub_82624B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260C2F0;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260C30C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260C30C:
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

__attribute__((alias("__imp__sub_8260C320"))) PPC_WEAK_FUNC(sub_8260C320);
PPC_FUNC_IMPL(__imp__sub_8260C320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x8260C328;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260c4cc
	if (cr6.eq) goto loc_8260C4CC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260c4cc
	if (cr6.eq) goto loc_8260C4CC;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260c4cc
	if (cr6.eq) goto loc_8260C4CC;
	// bl 0x82624608
	ctx.lr = 0x8260C350;
	sub_82624608(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260C358;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a2e880
	ctx.lr = 0x8260C360;
	sub_82A2E880(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260c46c
	if (cr6.eq) goto loc_8260C46C;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r24,3
	ctx.r24.s64 = 3;
	// addi r31,r21,1012
	ctx.r31.s64 = ctx.r21.s64 + 1012;
loc_8260C378:
	// addi r26,r29,1
	ctx.r26.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r26,r23
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, xer);
	// bge cr6,0x8260c45c
	if (!cr6.lt) goto loc_8260C45C;
	// cmpwi cr6,r24,16
	cr6.compare<int32_t>(ctx.r24.s32, 16, xer);
	// bge cr6,0x8260c45c
	if (!cr6.lt) goto loc_8260C45C;
	// addi r28,r29,-1
	ctx.r28.s64 = ctx.r29.s64 + -1;
	// lwz r25,0(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r27,r29,-2
	ctx.r27.s64 = ctx.r29.s64 + -2;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260C3A4;
	sub_82A2E8A0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260C3B4;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x8264fb38
	ctx.lr = 0x8260C3C4;
	sub_8264FB38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// lwzu r25,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r25.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260C3D8;
	sub_82A2E8A0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260C3E8;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x8264fb38
	ctx.lr = 0x8260C3F8;
	sub_8264FB38(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r28.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260C408;
	sub_82A2E8A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260C418;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8264fb38
	ctx.lr = 0x8260C428;
	sub_8264FB38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r28.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260C438;
	sub_82A2E8A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260C448;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8264fb38
	ctx.lr = 0x8260C458;
	sub_8264FB38(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8260C45C:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// blt cr6,0x8260c378
	if (cr6.lt) goto loc_8260C378;
loc_8260C46C:
	// bl 0x8264f4d8
	ctx.lr = 0x8260C470;
	sub_8264F4D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8260C478:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a18368
	ctx.lr = 0x8260C484;
	sub_82A18368(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x8260c478
	if (cr6.lt) goto loc_8260C478;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82624a50
	ctx.lr = 0x8260C498;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260c4cc
	if (!cr6.eq) goto loc_8260C4CC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82624a60
	ctx.lr = 0x8260C4AC;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260c4cc
	if (!cr6.eq) goto loc_8260C4CC;
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,125
	ctx.r5.u64 = ctx.r5.u64 | 125;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a18350
	ctx.lr = 0x8260C4CC;
	sub_82A18350(ctx, base);
loc_8260C4CC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260C4D4"))) PPC_WEAK_FUNC(sub_8260C4D4);
PPC_FUNC_IMPL(__imp__sub_8260C4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260C4D8"))) PPC_WEAK_FUNC(sub_8260C4D8);
PPC_FUNC_IMPL(__imp__sub_8260C4D8) {
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
	// bl 0x82628820
	ctx.lr = 0x8260C4F0;
	sub_82628820(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-3216
	ctx.r10.s64 = ctx.r11.s64 + -3216;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82624ae8
	ctx.lr = 0x8260C504;
	sub_82624AE8(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r31,1012
	ctx.r11.s64 = ctx.r31.s64 + 1012;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8260C518:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8260c518
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8260C518;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r9,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r9.u32);
	// stw r9,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// bl 0x82628208
	ctx.lr = 0x8260C538;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_8260C550"))) PPC_WEAK_FUNC(sub_8260C550);
PPC_FUNC_IMPL(__imp__sub_8260C550) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3216
	ctx.r10.s64 = ctx.r11.s64 + -3216;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8260c088
	ctx.lr = 0x8260C574;
	sub_8260C088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8260C57C;
	sub_82627660(ctx, base);
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

__attribute__((alias("__imp__sub_8260C590"))) PPC_WEAK_FUNC(sub_8260C590);
PPC_FUNC_IMPL(__imp__sub_8260C590) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260c678
	if (cr6.eq) goto loc_8260C678;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260c678
	if (cr6.eq) goto loc_8260C678;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8260c678
	if (cr6.eq) goto loc_8260C678;
	// bl 0x82624b08
	ctx.lr = 0x8260C5CC;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260c5ec
	if (!cr6.eq) goto loc_8260C5EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a58
	ctx.lr = 0x8260C5E0;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260c678
	if (cr6.eq) goto loc_8260C678;
loc_8260C5EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e58
	ctx.lr = 0x8260C5F4;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260c630
	if (cr6.eq) goto loc_8260C630;
	// bl 0x82624ae0
	ctx.lr = 0x8260C608;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x8260C614;
	sub_82628658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x8260C61C;
	sub_82624A08(ctx, base);
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
loc_8260C630:
	// bl 0x82624a58
	ctx.lr = 0x8260C634;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260c648
	if (cr6.eq) goto loc_8260C648;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x8260c654
	goto loc_8260C654;
loc_8260C648:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b10
	ctx.lr = 0x8260C650;
	sub_82624B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8260C654:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260C65C;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260C678;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260C678:
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

__attribute__((alias("__imp__sub_8260C68C"))) PPC_WEAK_FUNC(sub_8260C68C);
PPC_FUNC_IMPL(__imp__sub_8260C68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260C690"))) PPC_WEAK_FUNC(sub_8260C690);
PPC_FUNC_IMPL(__imp__sub_8260C690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8260C698;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,8144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8144);
	// lwz r9,8148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8148);
	// lwz r27,8152(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82a2b4e0
	ctx.lr = 0x8260C6C8;
	sub_82A2B4E0(ctx, base);
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// bne cr6,0x8260c6f0
	if (!cr6.eq) goto loc_8260C6F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-3380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3380);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8260c6f0
	if (!cr6.gt) goto loc_8260C6F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8260C6F0:
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82a181b8
	ctx.lr = 0x8260C6FC;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x82a2e880
	ctx.lr = 0x8260C708;
	sub_82A2E880(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260c7a8
	if (cr6.eq) goto loc_8260C7A8;
	// ld r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r31,3
	ctx.r31.s64 = 3;
loc_8260C71C:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x8260c788
	if (!cr6.lt) goto loc_8260C788;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260C730;
	sub_82A2E8A0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260C740;
	sub_82A2E8A0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r31,-2
	ctx.r4.s64 = ctx.r31.s64 + -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260C750;
	sub_82A2E8A0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r31,-3
	ctx.r4.s64 = ctx.r31.s64 + -3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260C760;
	sub_82A2E8A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rldicr r4,r27,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// bl 0x8264fe78
	ctx.lr = 0x8260C77C;
	sub_8264FE78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260c7a4
	if (!cr6.eq) goto loc_8260C7A4;
loc_8260C788:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r31,-3
	ctx.r11.s64 = ctx.r31.s64 + -3;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// blt cr6,0x8260c71c
	if (cr6.lt) goto loc_8260C71C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8260C7A4:
	// li r26,0
	ctx.r26.s64 = 0;
loc_8260C7A8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260C7B4"))) PPC_WEAK_FUNC(sub_8260C7B4);
PPC_FUNC_IMPL(__imp__sub_8260C7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260C7B8"))) PPC_WEAK_FUNC(sub_8260C7B8);
PPC_FUNC_IMPL(__imp__sub_8260C7B8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3216
	ctx.r10.s64 = ctx.r11.s64 + -3216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8260c088
	ctx.lr = 0x8260C7E4;
	sub_8260C088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8260C7EC;
	sub_82627660(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260c804
	if (cr6.eq) goto loc_8260C804;
	// bl 0x82416268
	ctx.lr = 0x8260C800;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8260C804:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260C81C"))) PPC_WEAK_FUNC(sub_8260C81C);
PPC_FUNC_IMPL(__imp__sub_8260C81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260C820"))) PPC_WEAK_FUNC(sub_8260C820);
PPC_FUNC_IMPL(__imp__sub_8260C820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8260C828;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 448);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,444
	ctx.r30.s64 = ctx.r3.s64 + 444;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260c848
	if (!cr6.eq) goto loc_8260C848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825aa080
	ctx.lr = 0x8260C848;
	sub_825AA080(ctx, base);
loc_8260C848:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260c868
	if (!cr6.eq) goto loc_8260C868;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-10208
	ctx.r9.s64 = ctx.r9.s64 + -10208;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
loc_8260C868:
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260C874;
	sub_82A181B8(ctx, base);
	// bl 0x82a2ee50
	ctx.lr = 0x8260C878;
	sub_82A2EE50(ctx, base);
	// lwz r9,1000(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bgt cr6,0x8260c8b8
	if (cr6.gt) goto loc_8260C8B8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8260c8b0
	if (cr6.eq) goto loc_8260C8B0;
	// bdz 0x8260c8a8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8260C8A8;
	// bdz 0x8260c8a0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8260C8A0;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_8260C8A0:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8260C8A8:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8260C8B0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8260C8B8:
	// lwz r10,1004(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1004);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x8260c914
	if (!cr6.eq) goto loc_8260C914;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bgt cr6,0x8260c908
	if (cr6.gt) goto loc_8260C908;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8260c8e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8260C8E8;
	// bdzf 4*cr6+eq,0x8260c8f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8260C8F0;
	// bne cr6,0x8260c8f8
	if (!cr6.eq) goto loc_8260C8F8;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8260c8fc
	goto loc_8260C8FC;
loc_8260C8E8:
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x8260c8fc
	goto loc_8260C8FC;
loc_8260C8F0:
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8260c8fc
	goto loc_8260C8FC;
loc_8260C8F8:
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_8260C8FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a193b0
	ctx.lr = 0x8260C908;
	sub_82A193B0(ctx, base);
loc_8260C908:
	// lwz r11,1000(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1000(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1000, ctx.r11.u32);
loc_8260C914:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260c930
	if (cr6.eq) goto loc_8260C930;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825a8ca0
	ctx.lr = 0x8260C928;
	sub_825A8CA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_8260C930:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260C938"))) PPC_WEAK_FUNC(sub_8260C938);
PPC_FUNC_IMPL(__imp__sub_8260C938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8260C940;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260ca7c
	if (cr6.eq) goto loc_8260CA7C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260ca7c
	if (cr6.eq) goto loc_8260CA7C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260ca7c
	if (cr6.eq) goto loc_8260CA7C;
	// bl 0x82a181b8
	ctx.lr = 0x8260C974;
	sub_82A181B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x8260C97C;
	sub_82A2E7E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8260c98c
	if (!cr6.lt) goto loc_8260C98C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8260c9b4
	goto loc_8260C9B4;
loc_8260C98C:
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bge cr6,0x8260c99c
	if (!cr6.lt) goto loc_8260C99C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8260c9b4
	goto loc_8260C9B4;
loc_8260C99C:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r9,r11,r3
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r30,r7,31
	ctx.r30.u64 = ctx.r7.u32 & 0x1;
loc_8260C9B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8264f538
	ctx.lr = 0x8260C9BC;
	sub_8264F538(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// beq cr6,0x8260c9d8
	if (cr6.eq) goto loc_8260C9D8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260C9D0;
	sub_82624AF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8260C9D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8264f470
	ctx.lr = 0x8260C9E0;
	sub_8264F470(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8264f710
	ctx.lr = 0x8260C9EC;
	sub_8264F710(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8260ca10
	if (cr6.eq) goto loc_8260CA10;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8260ca10
	if (cr6.eq) goto loc_8260CA10;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260CA08;
	sub_82624AF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8260CA10:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260c690
	ctx.lr = 0x8260CA1C;
	sub_8260C690(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ca3c
	if (cr6.eq) goto loc_8260CA3C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260CA34;
	sub_82624AF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8260CA3C:
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x8260ca7c
	if (cr6.eq) goto loc_8260CA7C;
	// lwz r11,1004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r11.u32);
	// bl 0x8260c820
	ctx.lr = 0x8260CA5C;
	sub_8260C820(ctx, base);
	// stw r30,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260CA68;
	sub_82A2EE50(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82627ef8
	ctx.lr = 0x8260CA7C;
	sub_82627EF8(ctx, base);
loc_8260CA7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260CA84"))) PPC_WEAK_FUNC(sub_8260CA84);
PPC_FUNC_IMPL(__imp__sub_8260CA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260CA88"))) PPC_WEAK_FUNC(sub_8260CA88);
PPC_FUNC_IMPL(__imp__sub_8260CA88) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,1000(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1000, ctx.r11.u8);
	// stb r11,1001(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1001, ctx.r11.u8);
	// bl 0x82627e68
	ctx.lr = 0x8260CAAC;
	sub_82627E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x8260CAB4;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_8260CAC8"))) PPC_WEAK_FUNC(sub_8260CAC8);
PPC_FUNC_IMPL(__imp__sub_8260CAC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1000(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1000, ctx.r11.u8);
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260CAD4"))) PPC_WEAK_FUNC(sub_8260CAD4);
PPC_FUNC_IMPL(__imp__sub_8260CAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260CAD8"))) PPC_WEAK_FUNC(sub_8260CAD8);
PPC_FUNC_IMPL(__imp__sub_8260CAD8) {
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
	// bl 0x82624ed8
	ctx.lr = 0x8260CAF8;
	sub_82624ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826250b8
	ctx.lr = 0x8260CB04;
	sub_826250B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260CB1C"))) PPC_WEAK_FUNC(sub_8260CB1C);
PPC_FUNC_IMPL(__imp__sub_8260CB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260CB20"))) PPC_WEAK_FUNC(sub_8260CB20);
PPC_FUNC_IMPL(__imp__sub_8260CB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8260CB28;
	__savegprlr_27(ctx, base);
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
	// bl 0x82624970
	ctx.lr = 0x8260CB40;
	sub_82624970(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260CB4C;
	sub_82A181B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2f4e8
	ctx.lr = 0x8260CB54;
	sub_82A2F4E8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627b88
	ctx.lr = 0x8260CB68;
	sub_82627B88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628110
	ctx.lr = 0x8260CB70;
	sub_82628110(ctx, base);
	// stb r3,1001(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1001, ctx.r3.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260CB7C"))) PPC_WEAK_FUNC(sub_8260CB7C);
PPC_FUNC_IMPL(__imp__sub_8260CB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260CB80"))) PPC_WEAK_FUNC(sub_8260CB80);
PPC_FUNC_IMPL(__imp__sub_8260CB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8260CB88;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260cbec
	if (cr6.eq) goto loc_8260CBEC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260cbec
	if (cr6.eq) goto loc_8260CBEC;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260cbec
	if (cr6.eq) goto loc_8260CBEC;
	// bl 0x82624f78
	ctx.lr = 0x8260CBB8;
	sub_82624F78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260CBD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x8260CBE0;
	sub_82624AE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x8260CBEC;
	sub_82624B18(ctx, base);
loc_8260CBEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260CBF4"))) PPC_WEAK_FUNC(sub_8260CBF4);
PPC_FUNC_IMPL(__imp__sub_8260CBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260CBF8"))) PPC_WEAK_FUNC(sub_8260CBF8);
PPC_FUNC_IMPL(__imp__sub_8260CBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8260CC00;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260cccc
	if (cr6.eq) goto loc_8260CCCC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260cccc
	if (cr6.eq) goto loc_8260CCCC;
	// bl 0x82624b08
	ctx.lr = 0x8260CC20;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260cc3c
	if (cr6.eq) goto loc_8260CC3C;
	// bl 0x82624b10
	ctx.lr = 0x8260CC34;
	sub_82624B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8260cca8
	goto loc_8260CCA8;
loc_8260CC3C:
	// bl 0x826249f0
	ctx.lr = 0x8260CC40;
	sub_826249F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a00
	ctx.lr = 0x8260CC4C;
	sub_82624A00(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260cc90
	if (!cr6.eq) goto loc_8260CC90;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8260cc90
	if (!cr6.eq) goto loc_8260CC90;
	// lbz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1000);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260cccc
	if (cr6.eq) goto loc_8260CCCC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82626258
	ctx.lr = 0x8260CC7C;
	sub_82626258(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260cccc
	if (cr6.eq) goto loc_8260CCCC;
loc_8260CC88:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8260cca8
	goto loc_8260CCA8;
loc_8260CC90:
	// lbz r10,1000(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1000);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8260cc88
	if (!cr6.eq) goto loc_8260CC88;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260cccc
	if (cr6.eq) goto loc_8260CCCC;
	// li r4,2
	ctx.r4.s64 = 2;
loc_8260CCA8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260CCB0;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260CCCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260CCCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260CCD4"))) PPC_WEAK_FUNC(sub_8260CCD4);
PPC_FUNC_IMPL(__imp__sub_8260CCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260CCD8"))) PPC_WEAK_FUNC(sub_8260CCD8);
PPC_FUNC_IMPL(__imp__sub_8260CCD8) {
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
	// bl 0x82624a58
	ctx.lr = 0x8260CCF0;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260cd20
	if (!cr6.eq) goto loc_8260CD20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260CD10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260cd24
	if (cr6.eq) goto loc_8260CD24;
loc_8260CD20:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8260CD24:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8260CD3C"))) PPC_WEAK_FUNC(sub_8260CD3C);
PPC_FUNC_IMPL(__imp__sub_8260CD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260CD40"))) PPC_WEAK_FUNC(sub_8260CD40);
PPC_FUNC_IMPL(__imp__sub_8260CD40) {
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
	// bl 0x82624a68
	ctx.lr = 0x8260CD58;
	sub_82624A68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260cd8c
	if (!cr6.eq) goto loc_8260CD8C;
	// lbz r11,1001(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1001);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260cd84
	if (cr6.eq) goto loc_8260CD84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x8260CD78;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260cd8c
	if (!cr6.eq) goto loc_8260CD8C;
loc_8260CD84:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8260cd90
	goto loc_8260CD90;
loc_8260CD8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8260CD90:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8260CDA8"))) PPC_WEAK_FUNC(sub_8260CDA8);
PPC_FUNC_IMPL(__imp__sub_8260CDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8260cdbc
	if (!cr6.eq) goto loc_8260CDBC;
	// cmpwi cr6,r5,16
	cr6.compare<int32_t>(ctx.r5.s32, 16, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8260cdc0
	if (cr6.eq) goto loc_8260CDC0;
loc_8260CDBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260CDC0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260CDC8"))) PPC_WEAK_FUNC(sub_8260CDC8);
PPC_FUNC_IMPL(__imp__sub_8260CDC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// addi r11,r4,-11
	ctx.r11.s64 = ctx.r4.s64 + -11;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260CDD8"))) PPC_WEAK_FUNC(sub_8260CDD8);
PPC_FUNC_IMPL(__imp__sub_8260CDD8) {
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
	// bl 0x82628820
	ctx.lr = 0x8260CDF0;
	sub_82628820(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-2864
	ctx.r9.s64 = ctx.r10.s64 + -2864;
	// stb r11,1000(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1000, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r11,1001(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1001, ctx.r11.u8);
	// bl 0x82627e68
	ctx.lr = 0x8260CE10;
	sub_82627E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x8260CE18;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_8260CE30"))) PPC_WEAK_FUNC(sub_8260CE30);
PPC_FUNC_IMPL(__imp__sub_8260CE30) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-2864
	ctx.r10.s64 = ctx.r11.s64 + -2864;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x8260CE54;
	sub_82624CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8260CE5C;
	sub_82627660(ctx, base);
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

__attribute__((alias("__imp__sub_8260CE70"))) PPC_WEAK_FUNC(sub_8260CE70);
PPC_FUNC_IMPL(__imp__sub_8260CE70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8260CE78;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260d080
	if (cr6.eq) goto loc_8260D080;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260d080
	if (cr6.eq) goto loc_8260D080;
	// lis r25,-31763
	ctx.r25.s64 = -2081619968;
	// lwz r11,-3564(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260d080
	if (cr6.eq) goto loc_8260D080;
	// lwz r10,6112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8260d080
	if (cr6.eq) goto loc_8260D080;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8260d080
	if (cr6.eq) goto loc_8260D080;
	// bl 0x82a181b8
	ctx.lr = 0x8260CEC8;
	sub_82A181B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260CED0;
	sub_82A2E7C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260cee8
	if (cr6.lt) goto loc_8260CEE8;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260ceec
	if (cr6.lt) goto loc_8260CEEC;
loc_8260CEE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260CEEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260d080
	if (cr6.eq) goto loc_8260D080;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8260cf48
	if (cr6.eq) goto loc_8260CF48;
	// lbz r11,1000(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1000);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260cf48
	if (!cr6.eq) goto loc_8260CF48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x8260CF20;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8260cf48
	if (!cr6.eq) goto loc_8260CF48;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// srawi r10,r11,9
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 9;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260cf48
	if (cr6.eq) goto loc_8260CF48;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1000(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1000, ctx.r11.u8);
loc_8260CF48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260CF50;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260cfe8
	if (cr6.eq) goto loc_8260CFE8;
	// lbz r11,1000(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1000);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260cfb4
	if (cr6.eq) goto loc_8260CFB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260CF70;
	sub_82A2EE50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82627ef8
	ctx.lr = 0x8260CF84;
	sub_82627EF8(ctx, base);
	// lbz r10,1001(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1001);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8260d080
	if (cr6.eq) goto loc_8260D080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260CF98;
	sub_82A2EE50(ctx, base);
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82627f98
	ctx.lr = 0x8260CFAC;
	sub_82627F98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8260CFB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826249e8
	ctx.lr = 0x8260CFBC;
	sub_826249E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8260cfd8
	if (!cr6.eq) goto loc_8260CFD8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82624af8
	ctx.lr = 0x8260CFD0;
	sub_82624AF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8260CFD8:
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82624af8
	ctx.lr = 0x8260CFE0;
	sub_82624AF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8260CFE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,568
	ctx.r10.s64 = ctx.r30.s64 + 568;
loc_8260CFF0:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260d00c
	if (cr6.eq) goto loc_8260D00C;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r8,584(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 584);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8260d01c
	if (!cr6.eq) goto loc_8260D01C;
loc_8260D00C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8260cff0
	if (cr6.lt) goto loc_8260CFF0;
	// b 0x8260d028
	goto loc_8260D028;
loc_8260D01C:
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260D028;
	sub_82624AF8(ctx, base);
loc_8260D028:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624b08
	ctx.lr = 0x8260D030;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260d080
	if (!cr6.eq) goto loc_8260D080;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x8260D048;
	sub_82A0C738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x8260D058;
	sub_82A22B40(ctx, base);
	// ld r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2a378
	ctx.lr = 0x8260D064;
	sub_82A2A378(ctx, base);
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x8260d080
	if (cr6.eq) goto loc_8260D080;
	// cmpw cr6,r3,r26
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, xer);
	// beq cr6,0x8260d080
	if (cr6.eq) goto loc_8260D080;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260D080;
	sub_82624AF8(ctx, base);
loc_8260D080:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260D088"))) PPC_WEAK_FUNC(sub_8260D088);
PPC_FUNC_IMPL(__imp__sub_8260D088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8260D090;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260d214
	if (cr6.eq) goto loc_8260D214;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260d214
	if (cr6.eq) goto loc_8260D214;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260d214
	if (cr6.eq) goto loc_8260D214;
	// bl 0x82624608
	ctx.lr = 0x8260D0C0;
	sub_82624608(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260D0E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lwz r11,-3564(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// lwz r8,6112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8260d214
	if (cr6.eq) goto loc_8260D214;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260D0FC;
	sub_82A181B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260D104;
	sub_82A2E7C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260d11c
	if (cr6.lt) goto loc_8260D11C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260d120
	if (cr6.lt) goto loc_8260D120;
loc_8260D11C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260D120:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260d214
	if (cr6.eq) goto loc_8260D214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x8260D134;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260d154
	if (!cr6.eq) goto loc_8260D154;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x8260D148;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260d1a4
	if (cr6.eq) goto loc_8260D1A4;
loc_8260D154:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260D168;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260d1a4
	if (cr6.eq) goto loc_8260D1A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8260D17C;
	sub_82624AE0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2f370
	ctx.lr = 0x8260D188;
	sub_82A2F370(ctx, base);
	// cmplw cr6,r25,r3
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, xer);
	// blt cr6,0x8260d1a4
	if (cr6.lt) goto loc_8260D1A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8260D198;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x8260D1A4;
	sub_82628658(ctx, base);
loc_8260D1A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260D1AC;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260d1c8
	if (cr6.eq) goto loc_8260D1C8;
	// lbz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1000);
	// li r4,6
	ctx.r4.s64 = 6;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260d1cc
	if (cr6.eq) goto loc_8260D1CC;
loc_8260D1C8:
	// li r4,29
	ctx.r4.s64 = 29;
loc_8260D1CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dad048
	ctx.lr = 0x8260D1D4;
	sub_82DAD048(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624608
	ctx.lr = 0x8260D1E8;
	sub_82624608(ctx, base);
	// lbz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1000);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8260d210
	if (!cr6.eq) goto loc_8260D210;
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// ori r5,r5,433
	ctx.r5.u64 = ctx.r5.u64 | 433;
	// bl 0x82a18350
	ctx.lr = 0x8260D208;
	sub_82A18350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8260D210:
	// bl 0x82a18368
	ctx.lr = 0x8260D214;
	sub_82A18368(ctx, base);
loc_8260D214:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260D21C"))) PPC_WEAK_FUNC(sub_8260D21C);
PPC_FUNC_IMPL(__imp__sub_8260D21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260D220"))) PPC_WEAK_FUNC(sub_8260D220);
PPC_FUNC_IMPL(__imp__sub_8260D220) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-2864
	ctx.r10.s64 = ctx.r11.s64 + -2864;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x8260D24C;
	sub_82624CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8260D254;
	sub_82627660(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260d26c
	if (cr6.eq) goto loc_8260D26C;
	// bl 0x82416268
	ctx.lr = 0x8260D268;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8260D26C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260D284"))) PPC_WEAK_FUNC(sub_8260D284);
PPC_FUNC_IMPL(__imp__sub_8260D284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260D288"))) PPC_WEAK_FUNC(sub_8260D288);
PPC_FUNC_IMPL(__imp__sub_8260D288) {
	PPC_FUNC_PROLOGUE();
	// b 0x82624cf8
	sub_82624CF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260D28C"))) PPC_WEAK_FUNC(sub_8260D28C);
PPC_FUNC_IMPL(__imp__sub_8260D28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260D290"))) PPC_WEAK_FUNC(sub_8260D290);
PPC_FUNC_IMPL(__imp__sub_8260D290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8260D298;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260d39c
	if (cr6.eq) goto loc_8260D39C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260d39c
	if (cr6.eq) goto loc_8260D39C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260d39c
	if (cr6.eq) goto loc_8260D39C;
	// bl 0x82624f78
	ctx.lr = 0x8260D2C8;
	sub_82624F78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260D2E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260D2F0;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260D2F8;
	sub_82A2E7C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x8260D304;
	sub_82A2E7E0(ctx, base);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82650108
	ctx.lr = 0x8260D318;
	sub_82650108(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82650138
	ctx.lr = 0x8260D324;
	sub_82650138(ctx, base);
	// addi r29,r31,212
	ctx.r29.s64 = ctx.r31.s64 + 212;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826501e8
	ctx.lr = 0x8260D330;
	sub_826501E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x826501d8
	ctx.lr = 0x8260D340;
	sub_826501D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826501d8
	ctx.lr = 0x8260D350;
	sub_826501D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x8260D358;
	sub_82624AE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x8260D364;
	sub_82624B18(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// stb r29,1008(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1008, ctx.r29.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ori r5,r5,129
	ctx.r5.u64 = ctx.r5.u64 | 129;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18350
	ctx.lr = 0x8260D380;
	sub_82A18350(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a193b0
	ctx.lr = 0x8260D390;
	sub_82A193B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18af0
	ctx.lr = 0x8260D398;
	sub_82A18AF0(ctx, base);
	// stb r29,1009(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1009, ctx.r29.u8);
loc_8260D39C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260D3A4"))) PPC_WEAK_FUNC(sub_8260D3A4);
PPC_FUNC_IMPL(__imp__sub_8260D3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260D3A8"))) PPC_WEAK_FUNC(sub_8260D3A8);
PPC_FUNC_IMPL(__imp__sub_8260D3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8260D3B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r29,1000(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1000);
	// bl 0x82a181b8
	ctx.lr = 0x8260D3D0;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f510
	ctx.lr = 0x8260D3D4;
	sub_82A2F510(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// bge cr6,0x8260d400
	if (!cr6.lt) goto loc_8260D400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260D3E4;
	sub_82A181B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a2f4e8
	ctx.lr = 0x8260D3EC;
	sub_82A2F4E8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82627b88
	ctx.lr = 0x8260D400;
	sub_82627B88(ctx, base);
loc_8260D400:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260D408"))) PPC_WEAK_FUNC(sub_8260D408);
PPC_FUNC_IMPL(__imp__sub_8260D408) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-2512
	ctx.r10.s64 = ctx.r11.s64 + -2512;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x8260D42C;
	sub_82624CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8260D434;
	sub_82627660(ctx, base);
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

__attribute__((alias("__imp__sub_8260D448"))) PPC_WEAK_FUNC(sub_8260D448);
PPC_FUNC_IMPL(__imp__sub_8260D448) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-2512
	ctx.r10.s64 = ctx.r11.s64 + -2512;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x8260D474;
	sub_82624CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8260D47C;
	sub_82627660(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260d494
	if (cr6.eq) goto loc_8260D494;
	// bl 0x82416268
	ctx.lr = 0x8260D490;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8260D494:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260D4AC"))) PPC_WEAK_FUNC(sub_8260D4AC);
PPC_FUNC_IMPL(__imp__sub_8260D4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260D4B0"))) PPC_WEAK_FUNC(sub_8260D4B0);
PPC_FUNC_IMPL(__imp__sub_8260D4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8260D4B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8260d57c
	if (cr6.eq) goto loc_8260D57C;
	// lbz r11,1009(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1009);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260d4f8
	if (!cr6.eq) goto loc_8260D4F8;
	// lwz r11,4476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4476);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1009(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1009, ctx.r10.u8);
	// stw r11,1004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1004, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8260D4F8:
	// addi r29,r31,444
	ctx.r29.s64 = ctx.r31.s64 + 444;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825bb510
	ctx.lr = 0x8260D504;
	sub_825BB510(ctx, base);
	// lwz r11,4476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4476);
	// lwz r10,1004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrldi r30,r9,32
	ctx.r30.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// bl 0x82a181b8
	ctx.lr = 0x8260D51C;
	sub_82A181B8(ctx, base);
	// bl 0x82a2ee50
	ctx.lr = 0x8260D520;
	sub_82A2EE50(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f13,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-23488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r30,r7
	cr6.compare<uint64_t>(ctx.r30.u64, ctx.r7.u64, xer);
	// blt cr6,0x8260d560
	if (cr6.lt) goto loc_8260D560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260D54C;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x8260D550;
	sub_82A2E7C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a193b0
	ctx.lr = 0x8260D560;
	sub_82A193B0(ctx, base);
loc_8260D560:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260d57c
	if (cr6.eq) goto loc_8260D57C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x825a8ca0
	ctx.lr = 0x8260D574;
	sub_825A8CA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_8260D57C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260D584"))) PPC_WEAK_FUNC(sub_8260D584);
PPC_FUNC_IMPL(__imp__sub_8260D584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260D588"))) PPC_WEAK_FUNC(sub_8260D588);
PPC_FUNC_IMPL(__imp__sub_8260D588) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82624a58
	ctx.lr = 0x8260D5A0;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260d61c
	if (!cr6.eq) goto loc_8260D61C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-24636
	ctx.r9.s64 = ctx.r10.s64 + -24636;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x825aa080
	ctx.lr = 0x8260D5D0;
	sub_825AA080(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8260d5ec
	if (!cr6.eq) goto loc_8260D5EC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_8260D5EC:
	// bl 0x82a181b8
	ctx.lr = 0x8260D5F0;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f510
	ctx.lr = 0x8260D5F4;
	sub_82A2F510(ctx, base);
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// blt cr6,0x8260d634
	if (cr6.lt) goto loc_8260D634;
	// bl 0x825a8d40
	ctx.lr = 0x8260D61C;
	sub_825A8D40(ctx, base);
loc_8260D61C:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_8260D634:
	// bl 0x825a8d40
	ctx.lr = 0x8260D638;
	sub_825A8D40(ctx, base);
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
}

__attribute__((alias("__imp__sub_8260D650"))) PPC_WEAK_FUNC(sub_8260D650);
PPC_FUNC_IMPL(__imp__sub_8260D650) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-24636
	ctx.r10.s64 = ctx.r11.s64 + -24636;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x825aa080
	ctx.lr = 0x8260D68C;
	sub_825AA080(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8260d6ac
	if (!cr6.eq) goto loc_8260D6AC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// addi r3,r3,-10208
	ctx.r3.s64 = ctx.r3.s64 + -10208;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
loc_8260D6AC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260D6B4;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7e0
	ctx.lr = 0x8260D6B8;
	sub_82A2E7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18368
	ctx.lr = 0x8260D6C4;
	sub_82A18368(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260d6dc
	if (cr6.eq) goto loc_8260D6DC;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825a8ca0
	ctx.lr = 0x8260D6D8;
	sub_825A8CA0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_8260D6DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x8260D6F0;
	sub_825E0CF8(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260d710
	if (cr6.eq) goto loc_8260D710;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8260D710;
	sub_8353F3B8(ctx, base);
loc_8260D710:
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

__attribute__((alias("__imp__sub_8260D728"))) PPC_WEAK_FUNC(sub_8260D728);
PPC_FUNC_IMPL(__imp__sub_8260D728) {
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
	// bl 0x82624ae8
	ctx.lr = 0x8260D740;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82624b18
	ctx.lr = 0x8260D74C;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e68
	ctx.lr = 0x8260D754;
	sub_82627E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260d650
	ctx.lr = 0x8260D75C;
	sub_8260D650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1008(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1008, ctx.r11.u8);
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// stb r11,1009(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1009, ctx.r11.u8);
	// stw r11,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r11.u32);
	// bl 0x82628208
	ctx.lr = 0x8260D778;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_8260D78C"))) PPC_WEAK_FUNC(sub_8260D78C);
PPC_FUNC_IMPL(__imp__sub_8260D78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260D790"))) PPC_WEAK_FUNC(sub_8260D790);
PPC_FUNC_IMPL(__imp__sub_8260D790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8260D798;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260daec
	if (cr6.eq) goto loc_8260DAEC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260daec
	if (cr6.eq) goto loc_8260DAEC;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r25,432(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8260daec
	if (cr6.eq) goto loc_8260DAEC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260D7D4;
	sub_82A181B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264f470
	ctx.lr = 0x8260D7E0;
	sub_8264F470(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260d86c
	if (cr6.lt) goto loc_8260D86C;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x8260d86c
	if (cr6.lt) goto loc_8260D86C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bge cr6,0x8260d86c
	if (!cr6.lt) goto loc_8260D86C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82626788
	ctx.lr = 0x8260D808;
	sub_82626788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260d87c
	if (!cr6.eq) goto loc_8260D87C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260D81C;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260d87c
	if (!cr6.eq) goto loc_8260D87C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a2a620
	ctx.lr = 0x8260D834;
	sub_82A2A620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260d858
	if (cr6.eq) goto loc_8260D858;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82624af8
	ctx.lr = 0x8260D84C;
	sub_82624AF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8260D858:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82624af8
	ctx.lr = 0x8260D860;
	sub_82624AF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8260D86C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624b28
	ctx.lr = 0x8260D87C;
	sub_82624B28(ctx, base);
loc_8260D87C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624b98
	ctx.lr = 0x8260D88C;
	sub_82624B98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260d8b0
	if (!cr6.eq) goto loc_8260D8B0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82624af8
	ctx.lr = 0x8260D8A4;
	sub_82624AF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8260D8B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8260d4b0
	ctx.lr = 0x8260D8B8;
	sub_8260D4B0(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f31,8148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8148);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82a2e7e0
	ctx.lr = 0x8260D8CC;
	sub_82A2E7E0(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bne cr6,0x8260d8dc
	if (!cr6.eq) goto loc_8260D8DC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8260d650
	ctx.lr = 0x8260D8DC;
	sub_8260D650(ctx, base);
loc_8260D8DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260D8E4;
	sub_82A2E7C0(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bne cr6,0x8260d914
	if (!cr6.eq) goto loc_8260D914;
	// lbz r11,1008(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1008);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260d930
	if (!cr6.eq) goto loc_8260D930;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8260d94c
	if (!cr6.gt) goto loc_8260D94C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1008(r27)
	PPC_STORE_U8(ctx.r27.u32 + 1008, ctx.r11.u8);
	// b 0x8260d94c
	goto loc_8260D94C;
loc_8260D914:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x8260D91C;
	sub_82A2E7E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264f608
	ctx.lr = 0x8260D928;
	sub_8264F608(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// beq cr6,0x8260d94c
	if (cr6.eq) goto loc_8260D94C;
loc_8260D930:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-2676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2676);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8260d94c
	if (cr6.gt) goto loc_8260D94C;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260D94C;
	sub_82624AF8(ctx, base);
loc_8260D94C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624b08
	ctx.lr = 0x8260D954;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260daec
	if (!cr6.eq) goto loc_8260DAEC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260D968;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260daec
	if (cr6.eq) goto loc_8260DAEC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8260d9d8
	if (cr6.eq) goto loc_8260D9D8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8260D990:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x8260D99C;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x8260d9c4
	if (cr6.eq) goto loc_8260D9C4;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x8260d9c4
	if (cr6.eq) goto loc_8260D9C4;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// beq cr6,0x8260d9c4
	if (cr6.eq) goto loc_8260D9C4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8260d9d8
	if (!cr6.eq) goto loc_8260D9D8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8260D9C4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x8260d990
	if (cr6.lt) goto loc_8260D990;
loc_8260D9D8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260dac4
	if (cr6.eq) goto loc_8260DAC4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a2ea90
	ctx.lr = 0x8260D9F0;
	sub_82A2EA90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260da94
	if (cr6.eq) goto loc_8260DA94;
loc_8260D9F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a18ac0
	ctx.lr = 0x8260DA04;
	sub_82A18AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260da28
	if (!cr6.eq) goto loc_8260DA28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82a2ea90
	ctx.lr = 0x8260DA1C;
	sub_82A2EA90(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x8260d9f8
	if (cr6.lt) goto loc_8260D9F8;
	// b 0x8260da94
	goto loc_8260DA94;
loc_8260DA28:
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bgt cr6,0x8260da94
	if (cr6.gt) goto loc_8260DA94;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8260da5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8260DA5C;
	// bdzf 4*cr6+eq,0x8260da6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8260DA6C;
	// bne cr6,0x8260da7c
	if (!cr6.eq) goto loc_8260DA7C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260DA50;
	sub_82A2EE50(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8260da88
	goto loc_8260DA88;
loc_8260DA5C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260DA64;
	sub_82A2EE50(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8260da88
	goto loc_8260DA88;
loc_8260DA6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260DA74;
	sub_82A2EE50(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8260da88
	goto loc_8260DA88;
loc_8260DA7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260DA84;
	sub_82A2EE50(ctx, base);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8260DA88:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82627ef8
	ctx.lr = 0x8260DA94;
	sub_82627EF8(ctx, base);
loc_8260DA94:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260daec
	if (!cr6.eq) goto loc_8260DAEC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260DAA8;
	sub_82A2EE50(ctx, base);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82627ef8
	ctx.lr = 0x8260DAB8;
	sub_82627EF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8260DAC4:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260DAD0;
	sub_825832F8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260DAEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260DAEC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260DAF8"))) PPC_WEAK_FUNC(sub_8260DAF8);
PPC_FUNC_IMPL(__imp__sub_8260DAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8260DB00;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260dca4
	if (cr6.eq) goto loc_8260DCA4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260dca4
	if (cr6.eq) goto loc_8260DCA4;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82a181b8
	ctx.lr = 0x8260DB30;
	sub_82A181B8(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,132(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8260db94
	if (cr6.eq) goto loc_8260DB94;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8260DB4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x8260DB58;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x8260db80
	if (cr6.eq) goto loc_8260DB80;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x8260db80
	if (cr6.eq) goto loc_8260DB80;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// beq cr6,0x8260db80
	if (cr6.eq) goto loc_8260DB80;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8260db94
	if (!cr6.eq) goto loc_8260DB94;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8260DB80:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x8260db4c
	if (cr6.lt) goto loc_8260DB4C;
loc_8260DB94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260DB9C;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260dbd0
	if (cr6.eq) goto loc_8260DBD0;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260dbd0
	if (cr6.eq) goto loc_8260DBD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624a08
	ctx.lr = 0x8260DBBC;
	sub_82624A08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8260d650
	ctx.lr = 0x8260DBC4;
	sub_8260D650(ctx, base);
	// lwz r11,1000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1000);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1000(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1000, ctx.r11.u32);
loc_8260DBD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624a50
	ctx.lr = 0x8260DBD8;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260dc20
	if (!cr6.eq) goto loc_8260DC20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624a60
	ctx.lr = 0x8260DBEC;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260dc20
	if (!cr6.eq) goto loc_8260DC20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624b20
	ctx.lr = 0x8260DC00;
	sub_82624B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260dc20
	if (!cr6.eq) goto loc_8260DC20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624b08
	ctx.lr = 0x8260DC14;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260dca4
	if (cr6.eq) goto loc_8260DCA4;
loc_8260DC20:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260DC34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260dca4
	if (cr6.eq) goto loc_8260DCA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8260d650
	ctx.lr = 0x8260DC48;
	sub_8260D650(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260DC50;
	sub_82A2EE50(ctx, base);
	// lfs f1,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82627f98
	ctx.lr = 0x8260DC64;
	sub_82627F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82627e58
	ctx.lr = 0x8260DC6C;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260dc9c
	if (cr6.eq) goto loc_8260DC9C;
	// bl 0x82624ae0
	ctx.lr = 0x8260DC80;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82628658
	ctx.lr = 0x8260DC8C;
	sub_82628658(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624a08
	ctx.lr = 0x8260DC94;
	sub_82624A08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8260DC9C:
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82624af8
	ctx.lr = 0x8260DCA4;
	sub_82624AF8(ctx, base);
loc_8260DCA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260DCAC"))) PPC_WEAK_FUNC(sub_8260DCAC);
PPC_FUNC_IMPL(__imp__sub_8260DCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260DCB0"))) PPC_WEAK_FUNC(sub_8260DCB0);
PPC_FUNC_IMPL(__imp__sub_8260DCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8260DCB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260de48
	if (cr6.eq) goto loc_8260DE48;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260de48
	if (cr6.eq) goto loc_8260DE48;
	// bl 0x82624b08
	ctx.lr = 0x8260DCD8;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260dd14
	if (cr6.eq) goto loc_8260DD14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b10
	ctx.lr = 0x8260DCEC;
	sub_82624B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260DCF8;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260DD14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260DD14:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82a181b8
	ctx.lr = 0x8260DD24;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8264f470
	ctx.lr = 0x8260DD30;
	sub_8264F470(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249f0
	ctx.lr = 0x8260DD3C;
	sub_826249F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8260dd84
	if (cr6.eq) goto loc_8260DD84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260DD50;
	sub_82A2E7C0(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8260dd64
	if (cr6.eq) goto loc_8260DD64;
	// li r4,5
	ctx.r4.s64 = 5;
loc_8260DD64:
	// bl 0x825832f8
	ctx.lr = 0x8260DD68;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260DD84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260DD84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a00
	ctx.lr = 0x8260DD8C;
	sub_82624A00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ddd0
	if (cr6.eq) goto loc_8260DDD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260DDA0;
	sub_82A2E7C0(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, xer);
	// beq cr6,0x8260ddd0
	if (cr6.eq) goto loc_8260DDD0;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260DDB4;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260DDD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260DDD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x8260DDD8;
	sub_82A2E7E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8264f608
	ctx.lr = 0x8260DDE4;
	sub_8264F608(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// bne cr6,0x8260de2c
	if (!cr6.eq) goto loc_8260DE2C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82626258
	ctx.lr = 0x8260DDF8;
	sub_82626258(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260de2c
	if (cr6.eq) goto loc_8260DE2C;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260DE10;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260DE2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260DE2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x8260DE34;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260de48
	if (cr6.eq) goto loc_8260DE48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260d650
	ctx.lr = 0x8260DE48;
	sub_8260D650(ctx, base);
loc_8260DE48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260DE50"))) PPC_WEAK_FUNC(sub_8260DE50);
PPC_FUNC_IMPL(__imp__sub_8260DE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8260DE58;
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260df34
	if (cr6.eq) goto loc_8260DF34;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260df34
	if (cr6.eq) goto loc_8260DF34;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260df34
	if (cr6.eq) goto loc_8260DF34;
	// bl 0x82624608
	ctx.lr = 0x8260DE88;
	sub_82624608(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260DEA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260DEB0;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x8260DEBC;
	sub_82624A50(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8260dedc
	if (!cr6.eq) goto loc_8260DEDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x8260DED0;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260df34
	if (cr6.eq) goto loc_8260DF34;
loc_8260DEDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260DEF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260df34
	if (cr6.eq) goto loc_8260DF34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260d650
	ctx.lr = 0x8260DF04;
	sub_8260D650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8260DF0C;
	sub_82624AE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2f370
	ctx.lr = 0x8260DF18;
	sub_82A2F370(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// blt cr6,0x8260df34
	if (cr6.lt) goto loc_8260DF34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8260DF28;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x8260DF34;
	sub_82628658(ctx, base);
loc_8260DF34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260DF3C"))) PPC_WEAK_FUNC(sub_8260DF3C);
PPC_FUNC_IMPL(__imp__sub_8260DF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260DF40"))) PPC_WEAK_FUNC(sub_8260DF40);
PPC_FUNC_IMPL(__imp__sub_8260DF40) {
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
	// bl 0x82628820
	ctx.lr = 0x8260DF58;
	sub_82628820(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-2512
	ctx.r10.s64 = ctx.r11.s64 + -2512;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82624ae8
	ctx.lr = 0x8260DF6C;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82624b18
	ctx.lr = 0x8260DF78;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e68
	ctx.lr = 0x8260DF80;
	sub_82627E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260d650
	ctx.lr = 0x8260DF88;
	sub_8260D650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1008(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1008, ctx.r11.u8);
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// stb r11,1009(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1009, ctx.r11.u8);
	// stw r11,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r11.u32);
	// bl 0x82628208
	ctx.lr = 0x8260DFA4;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_8260DFBC"))) PPC_WEAK_FUNC(sub_8260DFBC);
PPC_FUNC_IMPL(__imp__sub_8260DFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260DFC0"))) PPC_WEAK_FUNC(sub_8260DFC0);
PPC_FUNC_IMPL(__imp__sub_8260DFC0) {
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
	// bl 0x82624ae8
	ctx.lr = 0x8260DFD8;
	sub_82624AE8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f0,1152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// stfs f0,1156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1156, temp.u32);
	// stb r11,1164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1164, ctx.r11.u8);
	// stb r11,1165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1165, ctx.r11.u8);
	// stb r11,1166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1166, ctx.r11.u8);
	// stb r11,1167(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1167, ctx.r11.u8);
	// stb r11,1168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1168, ctx.r11.u8);
	// stb r11,1169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1169, ctx.r11.u8);
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// bl 0x82628208
	ctx.lr = 0x8260E018;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_8260E02C"))) PPC_WEAK_FUNC(sub_8260E02C);
PPC_FUNC_IMPL(__imp__sub_8260E02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E030"))) PPC_WEAK_FUNC(sub_8260E030);
PPC_FUNC_IMPL(__imp__sub_8260E030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8260E038;
	__savegprlr_27(ctx, base);
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
	// bl 0x82624970
	ctx.lr = 0x8260E050;
	sub_82624970(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260E05C;
	sub_82A181B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2f4e8
	ctx.lr = 0x8260E064;
	sub_82A2F4E8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627b88
	ctx.lr = 0x8260E078;
	sub_82627B88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628110
	ctx.lr = 0x8260E080;
	sub_82628110(ctx, base);
	// stb r3,1169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1169, ctx.r3.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260E08C"))) PPC_WEAK_FUNC(sub_8260E08C);
PPC_FUNC_IMPL(__imp__sub_8260E08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E090"))) PPC_WEAK_FUNC(sub_8260E090);
PPC_FUNC_IMPL(__imp__sub_8260E090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8260E098;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260e210
	if (cr6.eq) goto loc_8260E210;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260e210
	if (cr6.eq) goto loc_8260E210;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260e210
	if (cr6.eq) goto loc_8260E210;
	// bl 0x82624608
	ctx.lr = 0x8260E0C8;
	sub_82624608(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260E0E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624a50
	ctx.lr = 0x8260E0F0;
	sub_82624A50(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8260e210
	if (!cr6.eq) goto loc_8260E210;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624a60
	ctx.lr = 0x8260E104;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260e210
	if (!cr6.eq) goto loc_8260E210;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260E118;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260E120;
	sub_82A2EE50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260E12C;
	sub_82A2E7C0(ctx, base);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8264f4d8
	ctx.lr = 0x8260E138;
	sub_8264F4D8(ctx, base);
	// lwz r11,1160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1160);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8260e1c0
	if (cr6.lt) goto loc_8260E1C0;
	// bne cr6,0x8260e210
	if (!cr6.eq) goto loc_8260E210;
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, xer);
	// bne cr6,0x8260e210
	if (!cr6.eq) goto loc_8260E210;
	// lbz r11,1165(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1165);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260e17c
	if (cr6.eq) goto loc_8260E17C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18368
	ctx.lr = 0x8260E168;
	sub_82A18368(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18368
	ctx.lr = 0x8260E174;
	sub_82A18368(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8260E17C:
	// lbz r11,1166(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1166);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260e1b0
	if (cr6.eq) goto loc_8260E1B0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18368
	ctx.lr = 0x8260E194;
	sub_82A18368(ctx, base);
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r5,r5,129
	ctx.r5.u64 = ctx.r5.u64 | 129;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18350
	ctx.lr = 0x8260E1A8;
	sub_82A18350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8260E1B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1160, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8260E1C0:
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8260e1f8
	if (!cr6.eq) goto loc_8260E1F8;
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// ori r5,r5,123
	ctx.r5.u64 = ctx.r5.u64 | 123;
	// bl 0x82a18350
	ctx.lr = 0x8260E1DC;
	sub_82A18350(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18368
	ctx.lr = 0x8260E1E8;
	sub_82A18368(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1160, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8260E1F8:
	// bl 0x82a18368
	ctx.lr = 0x8260E1FC;
	sub_82A18368(ctx, base);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r5,r5,432
	ctx.r5.u64 = ctx.r5.u64 | 432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18350
	ctx.lr = 0x8260E210;
	sub_82A18350(ctx, base);
loc_8260E210:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260E218"))) PPC_WEAK_FUNC(sub_8260E218);
PPC_FUNC_IMPL(__imp__sub_8260E218) {
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
	// bl 0x82624a68
	ctx.lr = 0x8260E230;
	sub_82624A68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260e264
	if (!cr6.eq) goto loc_8260E264;
	// lbz r11,1169(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1169);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260e25c
	if (cr6.eq) goto loc_8260E25C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x8260E250;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260e264
	if (!cr6.eq) goto loc_8260E264;
loc_8260E25C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8260e268
	goto loc_8260E268;
loc_8260E264:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8260E268:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8260E280"))) PPC_WEAK_FUNC(sub_8260E280);
PPC_FUNC_IMPL(__imp__sub_8260E280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8264ecf8
	ctx.lr = 0x8260E29C;
	sub_8264ECF8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2120
	ctx.r9.s64 = ctx.r11.s64 + -2120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r11,r31,1148
	ctx.r11.s64 = ctx.r31.s64 + 1148;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,1148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f31,1152(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// stfs f31,1156(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1156, temp.u32);
	// bl 0x82624ae8
	ctx.lr = 0x8260E2C8;
	sub_82624AE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// stfs f31,1148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f31,1152(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// stfs f31,1156(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1156, temp.u32);
	// stb r11,1164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1164, ctx.r11.u8);
	// stb r11,1165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1165, ctx.r11.u8);
	// stb r11,1166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1166, ctx.r11.u8);
	// stb r11,1167(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1167, ctx.r11.u8);
	// stb r11,1168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1168, ctx.r11.u8);
	// stb r11,1169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1169, ctx.r11.u8);
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// bl 0x82628208
	ctx.lr = 0x8260E300;
	sub_82628208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260E31C"))) PPC_WEAK_FUNC(sub_8260E31C);
PPC_FUNC_IMPL(__imp__sub_8260E31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E320"))) PPC_WEAK_FUNC(sub_8260E320);
PPC_FUNC_IMPL(__imp__sub_8260E320) {
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
	// bl 0x82624cf8
	ctx.lr = 0x8260E33C;
	sub_82624CF8(ctx, base);
	// lwz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260e388
	if (cr6.eq) goto loc_8260E388;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8260E35C;
	sub_82595150(ctx, base);
	// lwz r3,1144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260e37c
	if (cr6.eq) goto loc_8260E37C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260E37C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260E37C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8260E384;
	sub_82595170(ctx, base);
	// stw r30,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r30.u32);
loc_8260E388:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260E3A0"))) PPC_WEAK_FUNC(sub_8260E3A0);
PPC_FUNC_IMPL(__imp__sub_8260E3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8260E3A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260e4e4
	if (cr6.eq) goto loc_8260E4E4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260e4e4
	if (cr6.eq) goto loc_8260E4E4;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260e4e4
	if (cr6.eq) goto loc_8260E4E4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260E3DC;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260E3E4;
	sub_82A2EE50(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260E3F0;
	sub_82A2E7C0(ctx, base);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r26,0(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82650108
	ctx.lr = 0x8260E408;
	sub_82650108(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82650138
	ctx.lr = 0x8260E414;
	sub_82650138(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82650138
	ctx.lr = 0x8260E420;
	sub_82650138(ctx, base);
	// addi r29,r31,316
	ctx.r29.s64 = ctx.r31.s64 + 316;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826501e8
	ctx.lr = 0x8260E42C;
	sub_826501E8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x826501d8
	ctx.lr = 0x8260E43C;
	sub_826501D8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826501d8
	ctx.lr = 0x8260E44C;
	sub_826501D8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624f78
	ctx.lr = 0x8260E460;
	sub_82624F78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260E480;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-3564(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lfs f0,8144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// lfs f13,8148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// lfs f12,8152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1156(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1156, temp.u32);
	// stb r11,1164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1164, ctx.r11.u8);
	// stb r11,1165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1165, ctx.r11.u8);
	// stb r11,1166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1166, ctx.r11.u8);
	// stb r11,1167(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1167, ctx.r11.u8);
	// stb r11,1168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1168, ctx.r11.u8);
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// bl 0x82624ae8
	ctx.lr = 0x8260E4C8;
	sub_82624AE8(ctx, base);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// ori r5,r5,432
	ctx.r5.u64 = ctx.r5.u64 | 432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18350
	ctx.lr = 0x8260E4DC;
	sub_82A18350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18af0
	ctx.lr = 0x8260E4E4;
	sub_82A18AF0(ctx, base);
loc_8260E4E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260E4EC"))) PPC_WEAK_FUNC(sub_8260E4EC);
PPC_FUNC_IMPL(__imp__sub_8260E4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E4F0"))) PPC_WEAK_FUNC(sub_8260E4F0);
PPC_FUNC_IMPL(__imp__sub_8260E4F0) {
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
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260e5a0
	if (cr6.eq) goto loc_8260E5A0;
	// bl 0x82a181b8
	ctx.lr = 0x8260E51C;
	sub_82A181B8(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c710
	ctx.lr = 0x8260E530;
	sub_82A0C710(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x8260E53C;
	sub_82A2E7E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260e57c
	if (cr6.lt) goto loc_8260E57C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bge cr6,0x8260e57c
	if (!cr6.lt) goto loc_8260E57C;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r3,r10
	ctx.r9.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r11,r7,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r7.s64;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8260e590
	if (!cr6.lt) goto loc_8260E590;
	// addi r11,r11,9778
	ctx.r11.s64 = ctx.r11.s64 + 9778;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// b 0x8260e594
	goto loc_8260E594;
loc_8260E57C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r11,r11,9778
	ctx.r11.s64 = ctx.r11.s64 + 9778;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// b 0x8260e594
	goto loc_8260E594;
loc_8260E590:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260E594:
	// addi r11,r11,-35
	ctx.r11.s64 = ctx.r11.s64 + -35;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8260E5A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260E5B8"))) PPC_WEAK_FUNC(sub_8260E5B8);
PPC_FUNC_IMPL(__imp__sub_8260E5B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8260E5C0;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260e6ec
	if (cr6.eq) goto loc_8260E6EC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260e6ec
	if (cr6.eq) goto loc_8260E6EC;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8260e6ec
	if (cr6.eq) goto loc_8260E6EC;
	// bl 0x82624b08
	ctx.lr = 0x8260E5F8;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260e6ec
	if (!cr6.eq) goto loc_8260E6EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260E60C;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260e6ec
	if (cr6.eq) goto loc_8260E6EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249e8
	ctx.lr = 0x8260E620;
	sub_826249E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8260e6ec
	if (!cr6.eq) goto loc_8260E6EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x8260E630;
	sub_82624A08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628110
	ctx.lr = 0x8260E638;
	sub_82628110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260e68c
	if (cr6.eq) goto loc_8260E68C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260E64C;
	sub_82A181B8(ctx, base);
	// bl 0x82a2ee50
	ctx.lr = 0x8260E650;
	sub_82A2EE50(ctx, base);
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627f98
	ctx.lr = 0x8260E664;
	sub_82627F98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8260E66C;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x8260E678;
	sub_82628658(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624c98
	ctx.lr = 0x8260E684;
	sub_82624C98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8260E68C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a58
	ctx.lr = 0x8260E694;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260e6e0
	if (cr6.eq) goto loc_8260E6E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8260E6A8;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82627dd8
	ctx.lr = 0x8260E6B8;
	sub_82627DD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260e6e0
	if (cr6.eq) goto loc_8260E6E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8260E6CC;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x8260E6D8;
	sub_82628658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x8260E6E0;
	sub_82624A08(ctx, base);
loc_8260E6E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624c98
	ctx.lr = 0x8260E6EC;
	sub_82624C98(ctx, base);
loc_8260E6EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260E6F4"))) PPC_WEAK_FUNC(sub_8260E6F4);
PPC_FUNC_IMPL(__imp__sub_8260E6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E6F8"))) PPC_WEAK_FUNC(sub_8260E6F8);
PPC_FUNC_IMPL(__imp__sub_8260E6F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260e868
	if (cr6.eq) goto loc_8260E868;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260e868
	if (cr6.eq) goto loc_8260E868;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82a181b8
	ctx.lr = 0x8260E730;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x8260E73C;
	sub_82624A60(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8260e75c
	if (!cr6.eq) goto loc_8260E75C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b08
	ctx.lr = 0x8260E750;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260e868
	if (cr6.eq) goto loc_8260E868;
loc_8260E75C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260E764;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260e7c8
	if (cr6.eq) goto loc_8260E7C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x8260E778;
	sub_82A2E7E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8260e788
	if (!cr6.lt) goto loc_8260E788;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8260e7b0
	goto loc_8260E7B0;
loc_8260E788:
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bge cr6,0x8260e798
	if (!cr6.lt) goto loc_8260E798;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8260e7b0
	goto loc_8260E7B0;
loc_8260E798:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r9,r11,r3
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r30,r7,31
	ctx.r30.u64 = ctx.r7.u32 & 0x1;
loc_8260E7B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249e8
	ctx.lr = 0x8260E7B8;
	sub_826249E8(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// beq cr6,0x8260e7c8
	if (cr6.eq) goto loc_8260E7C8;
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x8260e844
	goto loc_8260E844;
loc_8260E7C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a58
	ctx.lr = 0x8260E7D0;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260e828
	if (cr6.eq) goto loc_8260E828;
	// bl 0x82624ae0
	ctx.lr = 0x8260E7E4;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82627dd8
	ctx.lr = 0x8260E7F4;
	sub_82627DD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260e820
	if (cr6.eq) goto loc_8260E820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8260E808;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x8260E814;
	sub_82628658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x8260E81C;
	sub_82624A08(ctx, base);
	// b 0x8260e868
	goto loc_8260E868;
loc_8260E820:
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x8260e844
	goto loc_8260E844;
loc_8260E828:
	// bl 0x82624a60
	ctx.lr = 0x8260E82C;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260e868
	if (!cr6.eq) goto loc_8260E868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b10
	ctx.lr = 0x8260E840;
	sub_82624B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8260E844:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260E84C;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260E868;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260E868:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260E880"))) PPC_WEAK_FUNC(sub_8260E880);
PPC_FUNC_IMPL(__imp__sub_8260E880) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-2120
	ctx.r10.s64 = ctx.r11.s64 + -2120;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8260e320
	ctx.lr = 0x8260E8A4;
	sub_8260E320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264f1c0
	ctx.lr = 0x8260E8AC;
	sub_8264F1C0(ctx, base);
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

__attribute__((alias("__imp__sub_8260E8C0"))) PPC_WEAK_FUNC(sub_8260E8C0);
PPC_FUNC_IMPL(__imp__sub_8260E8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x8260E8C8;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260ee54
	if (cr6.eq) goto loc_8260EE54;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260ee54
	if (cr6.eq) goto loc_8260EE54;
	// lis r17,-31763
	ctx.r17.s64 = -2081619968;
	// lwz r11,-3564(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3564);
	// lwz r31,432(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8260ee54
	if (cr6.eq) goto loc_8260EE54;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8264f470
	ctx.lr = 0x8260E900;
	sub_8264F470(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260e918
	if (cr6.lt) goto loc_8260E918;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x8260e918
	if (cr6.lt) goto loc_8260E918;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// blt cr6,0x8260e934
	if (cr6.lt) goto loc_8260E934;
loc_8260E918:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624b28
	ctx.lr = 0x8260E928;
	sub_82624B28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ee54
	if (cr6.eq) goto loc_8260EE54;
loc_8260E934:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624c08
	ctx.lr = 0x8260E940;
	sub_82624C08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ee54
	if (cr6.eq) goto loc_8260EE54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r26,255
	ctx.r26.s64 = 255;
	// li r25,255
	ctx.r25.s64 = 255;
	// bl 0x82a181b8
	ctx.lr = 0x8260E95C;
	sub_82A181B8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260E964;
	sub_82A2EE50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8264f470
	ctx.lr = 0x8260E970;
	sub_8264F470(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a2b4e0
	ctx.lr = 0x8260E984;
	sub_82A2B4E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x8260E990;
	sub_82A2E7E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8264f4d8
	ctx.lr = 0x8260E998;
	sub_8264F4D8(ctx, base);
	// lbz r10,1166(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1166);
	// lwz r24,0(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r19,1
	ctx.r19.s64 = 1;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8260e9c4
	if (!cr6.eq) goto loc_8260E9C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8264f470
	ctx.lr = 0x8260E9B8;
	sub_8264F470(ctx, base);
	// cmpw cr6,r3,r24
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, xer);
	// bne cr6,0x8260e9c4
	if (!cr6.eq) goto loc_8260E9C4;
	// stb r19,1166(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1166, ctx.r19.u8);
loc_8260E9C4:
	// addi r18,r30,4
	ctx.r18.s64 = ctx.r30.s64 + 4;
	// lwz r22,0(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82650190
	ctx.lr = 0x8260E9D4;
	sub_82650190(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260e9f0
	if (!cr6.eq) goto loc_8260E9F0;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmpw cr6,r20,r22
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r22.s32, xer);
	// beq cr6,0x8260e9f0
	if (cr6.eq) goto loc_8260E9F0;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_8260E9F0:
	// lwz r11,-3564(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3564);
	// cmpw cr6,r23,r24
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r24.s32, xer);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,8144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8144);
	// lwz r9,8148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8148);
	// lwz r8,8152(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bne cr6,0x8260ea60
	if (!cr6.eq) goto loc_8260EA60;
	// lbz r11,1056(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1056);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ea60
	if (cr6.eq) goto loc_8260EA60;
	// lbz r11,1164(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260ea60
	if (!cr6.eq) goto loc_8260EA60;
	// addi r4,r30,1148
	ctx.r4.s64 = ctx.r30.s64 + 1148;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264ec78
	ctx.lr = 0x8260EA40;
	sub_8264EC78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ea60
	if (cr6.eq) goto loc_8260EA60;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82627ef8
	ctx.lr = 0x8260EA5C;
	sub_82627EF8(ctx, base);
	// stb r19,1164(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1164, ctx.r19.u8);
loc_8260EA60:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,1148(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1148, temp.u32);
	// stfs f13,1152(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1152, temp.u32);
	// stfs f12,1156(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1156, temp.u32);
	// lbz r11,1167(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1167);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260eb40
	if (!cr6.eq) goto loc_8260EB40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8260EA90;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260ee54
	if (cr6.eq) goto loc_8260EE54;
	// lwz r11,-3564(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3564);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ee54
	if (cr6.eq) goto loc_8260EE54;
	// lwz r8,1380(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1380);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,8144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8144);
	// lwz r7,8152(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	// lwz r6,1388(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1388);
	// lwz r5,8148(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8148);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lwz r4,1384(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1384);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,21708(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f0
	cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// ble cr6,0x8260eb40
	if (!cr6.gt) goto loc_8260EB40;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260eb34
	if (cr6.eq) goto loc_8260EB34;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a22b40
	ctx.lr = 0x8260EB20;
	sub_82A22B40(ctx, base);
	// ld r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2b388
	ctx.lr = 0x8260EB2C;
	sub_82A2B388(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x8260ee48
	if (!cr6.eq) goto loc_8260EE48;
loc_8260EB34:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260EB40;
	sub_82624AF8(ctx, base);
loc_8260EB40:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x8260eb54
	if (cr6.lt) goto loc_8260EB54;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// blt cr6,0x8260eb58
	if (cr6.lt) goto loc_8260EB58;
loc_8260EB54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260EB58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260eb78
	if (cr6.eq) goto loc_8260EB78;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82650160
	ctx.lr = 0x8260EB6C;
	sub_82650160(ctx, base);
	// cmpw cr6,r3,r22
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r22.s32, xer);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// beq cr6,0x8260eb7c
	if (cr6.eq) goto loc_8260EB7C;
loc_8260EB78:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8260EB7C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82628020
	ctx.lr = 0x8260EB90;
	sub_82628020(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8260e4f0
	ctx.lr = 0x8260EB9C;
	sub_8260E4F0(ctx, base);
	// lbz r11,1167(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1167);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260ebd0
	if (!cr6.eq) goto loc_8260EBD0;
	// cmpw cr6,r23,r24
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r24.s32, xer);
	// bne cr6,0x8260ebd0
	if (!cr6.eq) goto loc_8260EBD0;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260ebcc
	if (!cr6.eq) goto loc_8260EBCC;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260EBCC;
	sub_82624AF8(ctx, base);
loc_8260EBCC:
	// stb r19,1167(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1167, ctx.r19.u8);
loc_8260EBD0:
	// lbz r11,1168(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260ebf8
	if (!cr6.eq) goto loc_8260EBF8;
	// cmpw cr6,r23,r24
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r24.s32, xer);
	// beq cr6,0x8260ebf4
	if (cr6.eq) goto loc_8260EBF4;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x825832e0
	ctx.lr = 0x8260EBEC;
	sub_825832E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260ebf8
	if (cr6.eq) goto loc_8260EBF8;
loc_8260EBF4:
	// stb r31,1168(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1168, ctx.r31.u8);
loc_8260EBF8:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82650190
	ctx.lr = 0x8260EC00;
	sub_82650190(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ec2c
	if (cr6.eq) goto loc_8260EC2C;
	// lbz r11,1168(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260ec2c
	if (!cr6.eq) goto loc_8260EC2C;
loc_8260EC18:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260EC24;
	sub_82624AF8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8260EC2C:
	// cmpw cr6,r20,r22
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r22.s32, xer);
	// bne cr6,0x8260ec5c
	if (!cr6.eq) goto loc_8260EC5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82a2b4e0
	ctx.lr = 0x8260EC40;
	sub_82A2B4E0(ctx, base);
	// cmpw cr6,r3,r22
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r22.s32, xer);
	// bne cr6,0x8260ec5c
	if (!cr6.eq) goto loc_8260EC5C;
loc_8260EC48:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260EC54;
	sub_82624AF8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8260EC5C:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82650190
	ctx.lr = 0x8260EC64;
	sub_82650190(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ecbc
	if (cr6.eq) goto loc_8260ECBC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260ecbc
	if (cr6.eq) goto loc_8260ECBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a22b40
	ctx.lr = 0x8260EC88;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8260ec9c
	if (!cr6.eq) goto loc_8260EC9C;
	// stb r19,1165(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1165, ctx.r19.u8);
	// b 0x8260ecbc
	goto loc_8260ECBC;
loc_8260EC9C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8260ec48
	if (cr6.eq) goto loc_8260EC48;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8260ec48
	if (cr6.eq) goto loc_8260EC48;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x8260ec48
	if (cr6.eq) goto loc_8260EC48;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x8260ec48
	if (cr6.eq) goto loc_8260EC48;
loc_8260ECBC:
	// lbz r11,1165(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1165);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ed08
	if (cr6.eq) goto loc_8260ED08;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82650b40
	ctx.lr = 0x8260ECD0;
	sub_82650B40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ed08
	if (cr6.eq) goto loc_8260ED08;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82626258
	ctx.lr = 0x8260ECE8;
	sub_82626258(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ed08
	if (cr6.eq) goto loc_8260ED08;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260ED00;
	sub_82624AF8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8260ED08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260ED10;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ee18
	if (cr6.eq) goto loc_8260EE18;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82650190
	ctx.lr = 0x8260ED24;
	sub_82650190(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ec48
	if (cr6.eq) goto loc_8260EC48;
	// lbz r11,1165(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1165);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ec18
	if (cr6.eq) goto loc_8260EC18;
	// lwz r11,-3564(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3564);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,8152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	// ld r5,8144(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8144);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82650060
	ctx.lr = 0x8260ED5C;
	sub_82650060(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x8260edf8
	if (cr6.gt) goto loc_8260EDF8;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8260ed98
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8260ED98;
	// bdzf 4*cr6+eq,0x8260edb8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8260EDB8;
	// bne cr6,0x8260edd8
	if (!cr6.eq) goto loc_8260EDD8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260ED80;
	sub_82A2EE50(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82627ef8
	ctx.lr = 0x8260ED90;
	sub_82627EF8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8260ED98:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260EDA0;
	sub_82A2EE50(ctx, base);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82627ef8
	ctx.lr = 0x8260EDB0;
	sub_82627EF8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8260EDB8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260EDC0;
	sub_82A2EE50(ctx, base);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82627ef8
	ctx.lr = 0x8260EDD0;
	sub_82627EF8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8260EDD8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260EDE0;
	sub_82A2EE50(ctx, base);
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82627ef8
	ctx.lr = 0x8260EDF0;
	sub_82627EF8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8260EDF8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260EE00;
	sub_82A2EE50(ctx, base);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82627ef8
	ctx.lr = 0x8260EE10;
	sub_82627EF8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8260EE18:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82a2b4e0
	ctx.lr = 0x8260EE24;
	sub_82A2B4E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260ee54
	if (cr6.lt) goto loc_8260EE54;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x8260ee54
	if (cr6.lt) goto loc_8260EE54;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bge cr6,0x8260ee54
	if (!cr6.lt) goto loc_8260EE54;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// li r4,6
	ctx.r4.s64 = 6;
	// beq cr6,0x8260ee4c
	if (cr6.eq) goto loc_8260EE4C;
loc_8260EE48:
	// li r4,16
	ctx.r4.s64 = 16;
loc_8260EE4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260EE54;
	sub_82624AF8(ctx, base);
loc_8260EE54:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260EE5C"))) PPC_WEAK_FUNC(sub_8260EE5C);
PPC_FUNC_IMPL(__imp__sub_8260EE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260EE60"))) PPC_WEAK_FUNC(sub_8260EE60);
PPC_FUNC_IMPL(__imp__sub_8260EE60) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-2120
	ctx.r10.s64 = ctx.r11.s64 + -2120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8260e320
	ctx.lr = 0x8260EE8C;
	sub_8260E320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264f1c0
	ctx.lr = 0x8260EE94;
	sub_8264F1C0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260eeac
	if (cr6.eq) goto loc_8260EEAC;
	// bl 0x82416268
	ctx.lr = 0x8260EEA8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8260EEAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260EEC4"))) PPC_WEAK_FUNC(sub_8260EEC4);
PPC_FUNC_IMPL(__imp__sub_8260EEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260EEC8"))) PPC_WEAK_FUNC(sub_8260EEC8);
PPC_FUNC_IMPL(__imp__sub_8260EEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8260EED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82624490
	ctx.lr = 0x8260EEE4;
	sub_82624490(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260EEFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260EF04;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e880
	ctx.lr = 0x8260EF08;
	sub_82A2E880(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r9,1144(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bne cr6,0x8260efb4
	if (!cr6.eq) goto loc_8260EFB4;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8260EF64;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260ef74
	if (cr6.eq) goto loc_8260EF74;
	// bl 0x837a5d00
	ctx.lr = 0x8260EF70;
	sub_837A5D00(ctx, base);
	// b 0x8260ef78
	goto loc_8260EF78;
loc_8260EF74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8260EF78:
	// stw r3,1144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1144, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260efb4
	if (cr6.eq) goto loc_8260EFB4;
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r10,-2248
	ctx.r4.s64 = ctx.r10.s64 + -2248;
	// bl 0x8259d6c0
	ctx.lr = 0x8260EF9C;
	sub_8259D6C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,1144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// bl 0x837a5d28
	ctx.lr = 0x8260EFA8;
	sub_837A5D28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// bl 0x837a5ea8
	ctx.lr = 0x8260EFB4;
	sub_837A5EA8(ctx, base);
loc_8260EFB4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d8190
	ctx.lr = 0x8260EFBC;
	sub_825D8190(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260EFC4"))) PPC_WEAK_FUNC(sub_8260EFC4);
PPC_FUNC_IMPL(__imp__sub_8260EFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260EFC8"))) PPC_WEAK_FUNC(sub_8260EFC8);
PPC_FUNC_IMPL(__imp__sub_8260EFC8) {
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
	// bl 0x82624ae8
	ctx.lr = 0x8260EFE0;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82624b18
	ctx.lr = 0x8260EFEC;
	sub_82624B18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// stb r11,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r11.u8);
	// stb r11,1146(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1146, ctx.r11.u8);
	// bl 0x82627e68
	ctx.lr = 0x8260F004;
	sub_82627E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x8260F00C;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_8260F020"))) PPC_WEAK_FUNC(sub_8260F020);
PPC_FUNC_IMPL(__imp__sub_8260F020) {
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
	// bl 0x82624ae8
	ctx.lr = 0x8260F038;
	sub_82624AE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x8260F044;
	sub_82624B18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r11.u8);
	// stb r11,1146(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1146, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8260F064"))) PPC_WEAK_FUNC(sub_8260F064);
PPC_FUNC_IMPL(__imp__sub_8260F064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F068"))) PPC_WEAK_FUNC(sub_8260F068);
PPC_FUNC_IMPL(__imp__sub_8260F068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8260F070;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260f0e0
	if (cr6.eq) goto loc_8260F0E0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260f0e0
	if (cr6.eq) goto loc_8260F0E0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260f0e0
	if (cr6.eq) goto loc_8260F0E0;
	// bl 0x82624f78
	ctx.lr = 0x8260F0A0;
	sub_82624F78(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260F0C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260F0C8;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7e0
	ctx.lr = 0x8260F0CC;
	sub_82A2E7E0(ctx, base);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,431
	ctx.r5.u64 = ctx.r5.u64 | 431;
	// bl 0x82a18350
	ctx.lr = 0x8260F0E0;
	sub_82A18350(ctx, base);
loc_8260F0E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260F0E8"))) PPC_WEAK_FUNC(sub_8260F0E8);
PPC_FUNC_IMPL(__imp__sub_8260F0E8) {
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
	// lbz r11,1145(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1145);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f138
	if (cr6.eq) goto loc_8260F138;
	// lbz r11,1146(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1146);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f138
	if (cr6.eq) goto loc_8260F138;
	// bl 0x82624ae8
	ctx.lr = 0x8260F118;
	sub_82624AE8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x8260F124;
	sub_82624B18(ctx, base);
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
loc_8260F138:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826285d8
	ctx.lr = 0x8260F140;
	sub_826285D8(ctx, base);
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

__attribute__((alias("__imp__sub_8260F154"))) PPC_WEAK_FUNC(sub_8260F154);
PPC_FUNC_IMPL(__imp__sub_8260F154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F158"))) PPC_WEAK_FUNC(sub_8260F158);
PPC_FUNC_IMPL(__imp__sub_8260F158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8260F160;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260f220
	if (cr6.eq) goto loc_8260F220;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260f220
	if (cr6.eq) goto loc_8260F220;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260f220
	if (cr6.eq) goto loc_8260F220;
	// bl 0x82624608
	ctx.lr = 0x8260F190;
	sub_82624608(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260F1B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260F1B8;
	sub_82A181B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r31,568
	ctx.r26.s64 = ctx.r31.s64 + 568;
	// addi r29,r31,504
	ctx.r29.s64 = ctx.r31.s64 + 504;
loc_8260F1C8:
	// lbzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f1ec
	if (cr6.eq) goto loc_8260F1EC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f1ec
	if (cr6.eq) goto loc_8260F1EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2ea60
	ctx.lr = 0x8260F1EC;
	sub_82A2EA60(ctx, base);
loc_8260F1EC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// blt cr6,0x8260f1c8
	if (cr6.lt) goto loc_8260F1C8;
	// lbz r11,1145(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1145);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f220
	if (cr6.eq) goto loc_8260F220;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260F210;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x8260F214;
	sub_82A2E7C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18368
	ctx.lr = 0x8260F220;
	sub_82A18368(ctx, base);
loc_8260F220:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260F228"))) PPC_WEAK_FUNC(sub_8260F228);
PPC_FUNC_IMPL(__imp__sub_8260F228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f23c
	if (cr6.eq) goto loc_8260F23C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8260F23C:
	// b 0x82624a68
	sub_82624A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260F240"))) PPC_WEAK_FUNC(sub_8260F240);
PPC_FUNC_IMPL(__imp__sub_8260F240) {
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
	// bl 0x82624a58
	ctx.lr = 0x8260F258;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260f270
	if (!cr6.eq) goto loc_8260F270;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f29c
	if (cr6.eq) goto loc_8260F29C;
loc_8260F270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8260F278;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x8260F284;
	sub_82628658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e58
	ctx.lr = 0x8260F28C;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260f2a0
	if (!cr6.eq) goto loc_8260F2A0;
loc_8260F29C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260F2A0:
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

__attribute__((alias("__imp__sub_8260F2B4"))) PPC_WEAK_FUNC(sub_8260F2B4);
PPC_FUNC_IMPL(__imp__sub_8260F2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F2B8"))) PPC_WEAK_FUNC(sub_8260F2B8);
PPC_FUNC_IMPL(__imp__sub_8260F2B8) {
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
	// bl 0x8264ecf8
	ctx.lr = 0x8260F2D0;
	sub_8264ECF8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-1768
	ctx.r10.s64 = ctx.r11.s64 + -1768;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82624ae8
	ctx.lr = 0x8260F2E4;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82624b18
	ctx.lr = 0x8260F2F0;
	sub_82624B18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// stb r11,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r11.u8);
	// stb r11,1146(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1146, ctx.r11.u8);
	// bl 0x82627e68
	ctx.lr = 0x8260F308;
	sub_82627E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x8260F310;
	sub_82628208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x8260F318;
	sub_82624AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8260F330"))) PPC_WEAK_FUNC(sub_8260F330);
PPC_FUNC_IMPL(__imp__sub_8260F330) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1768
	ctx.r10.s64 = ctx.r11.s64 + -1768;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8264ed98
	ctx.lr = 0x8260F354;
	sub_8264ED98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264f1c0
	ctx.lr = 0x8260F35C;
	sub_8264F1C0(ctx, base);
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

__attribute__((alias("__imp__sub_8260F370"))) PPC_WEAK_FUNC(sub_8260F370);
PPC_FUNC_IMPL(__imp__sub_8260F370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8260F378;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260f4fc
	if (cr6.eq) goto loc_8260F4FC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260f4fc
	if (cr6.eq) goto loc_8260F4FC;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260f4fc
	if (cr6.eq) goto loc_8260F4FC;
	// lwz r28,32(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8260f4fc
	if (cr6.eq) goto loc_8260F4FC;
	// bl 0x82a181b8
	ctx.lr = 0x8260F3BC;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x8260F3C0;
	sub_82A2E7C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260f3d8
	if (cr6.lt) goto loc_8260F3D8;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260f3dc
	if (cr6.lt) goto loc_8260F3DC;
loc_8260F3D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260F3DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f4fc
	if (cr6.eq) goto loc_8260F4FC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8260f4fc
	if (cr6.eq) goto loc_8260F4FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8264f470
	ctx.lr = 0x8260F400;
	sub_8264F470(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22b40
	ctx.lr = 0x8260F410;
	sub_82A22B40(ctx, base);
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, xer);
	// bne cr6,0x8260f4f0
	if (!cr6.eq) goto loc_8260F4F0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8260f430
	if (!cr6.gt) goto loc_8260F430;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8260f434
	if (!cr6.gt) goto loc_8260F434;
loc_8260F430:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260F434:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f4f0
	if (cr6.eq) goto loc_8260F4F0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x8260f4c4
	if (!cr6.eq) goto loc_8260F4C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,8144(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,8148(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f11,8152(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8152);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f10,8268(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8268);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x8260f4e8
	if (cr6.lt) goto loc_8260F4E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8264eb28
	ctx.lr = 0x8260F490;
	sub_8264EB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f4ac
	if (cr6.eq) goto loc_8260F4AC;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8260F4AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260F4B8;
	sub_82624AF8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8260F4C4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8260f4f0
	if (cr6.eq) goto loc_8260F4F0;
	// cmpwi cr6,r10,17
	cr6.compare<int32_t>(ctx.r10.s32, 17, xer);
	// beq cr6,0x8260f4f0
	if (cr6.eq) goto loc_8260F4F0;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// beq cr6,0x8260f4f0
	if (cr6.eq) goto loc_8260F4F0;
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// beq cr6,0x8260f4f0
	if (cr6.eq) goto loc_8260F4F0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8260F4E8:
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82624af8
	ctx.lr = 0x8260F4F0;
	sub_82624AF8(ctx, base);
loc_8260F4F0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8260F4FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260F508"))) PPC_WEAK_FUNC(sub_8260F508);
PPC_FUNC_IMPL(__imp__sub_8260F508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8260F510;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260f6e4
	if (cr6.eq) goto loc_8260F6E4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260f6e4
	if (cr6.eq) goto loc_8260F6E4;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260f6e4
	if (cr6.eq) goto loc_8260F6E4;
	// bl 0x82a181b8
	ctx.lr = 0x8260F548;
	sub_82A181B8(ctx, base);
	// lbz r11,1145(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1145);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260f570
	if (!cr6.eq) goto loc_8260F570;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260f370
	ctx.lr = 0x8260F568;
	sub_8260F370(ctx, base);
	// stb r3,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r3.u8);
	// b 0x8260f5b8
	goto loc_8260F5B8;
loc_8260F570:
	// lbz r11,1146(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1146);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260f5b8
	if (!cr6.eq) goto loc_8260F5B8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264efe8
	ctx.lr = 0x8260F58C;
	sub_8264EFE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,1146(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1146, ctx.r3.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f5b8
	if (cr6.eq) goto loc_8260F5B8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260F5A4;
	sub_82A2EE50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82627ef8
	ctx.lr = 0x8260F5B8;
	sub_82627EF8(ctx, base);
loc_8260F5B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260F5C0;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f630
	if (cr6.eq) goto loc_8260F630;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249e8
	ctx.lr = 0x8260F5D4;
	sub_826249E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8260f624
	if (!cr6.eq) goto loc_8260F624;
	// lbz r11,1145(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1145);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f61c
	if (cr6.eq) goto loc_8260F61C;
	// lbz r11,1146(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1146);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f61c
	if (cr6.eq) goto loc_8260F61C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x8260F600;
	sub_82624B18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260F608;
	sub_82A2EE50(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82627ef8
	ctx.lr = 0x8260F618;
	sub_82627EF8(ctx, base);
	// b 0x8260f630
	goto loc_8260F630;
loc_8260F61C:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8260f628
	goto loc_8260F628;
loc_8260F624:
	// li r4,19
	ctx.r4.s64 = 19;
loc_8260F628:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260F630;
	sub_82624AF8(ctx, base);
loc_8260F630:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b20
	ctx.lr = 0x8260F638;
	sub_82624B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260f6e4
	if (!cr6.eq) goto loc_8260F6E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
loc_8260F64C:
	// lbzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8260f668
	if (cr6.eq) goto loc_8260F668;
	// add r10,r4,r31
	ctx.r10.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lbz r9,584(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 584);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8260f67c
	if (!cr6.eq) goto loc_8260F67C;
loc_8260F668:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x8260f64c
	if (cr6.lt) goto loc_8260F64C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8260F67C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ea60
	ctx.lr = 0x8260F684;
	sub_82A2EA60(ctx, base);
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f6dc
	if (cr6.eq) goto loc_8260F6DC;
	// lbz r11,1145(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1145);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f6cc
	if (cr6.eq) goto loc_8260F6CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82624b18
	ctx.lr = 0x8260F6A8;
	sub_82624B18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260F6B0;
	sub_82A2EE50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82627ef8
	ctx.lr = 0x8260F6C4;
	sub_82627EF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8260F6CC:
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82624af8
	ctx.lr = 0x8260F6D4;
	sub_82624AF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8260F6DC:
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82624af8
	ctx.lr = 0x8260F6E4;
	sub_82624AF8(ctx, base);
loc_8260F6E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260F6EC"))) PPC_WEAK_FUNC(sub_8260F6EC);
PPC_FUNC_IMPL(__imp__sub_8260F6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F6F0"))) PPC_WEAK_FUNC(sub_8260F6F0);
PPC_FUNC_IMPL(__imp__sub_8260F6F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8260F6F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,1144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1144, ctx.r10.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260f740
	if (cr6.eq) goto loc_8260F740;
	// bl 0x82a181b8
	ctx.lr = 0x8260F728;
	sub_82A181B8(ctx, base);
	// bl 0x82a2ee50
	ctx.lr = 0x8260F72C;
	sub_82A2EE50(ctx, base);
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627f98
	ctx.lr = 0x8260F740;
	sub_82627F98(ctx, base);
loc_8260F740:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260F748"))) PPC_WEAK_FUNC(sub_8260F748);
PPC_FUNC_IMPL(__imp__sub_8260F748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8260F750;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260f7c4
	if (cr6.eq) goto loc_8260F7C4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260f7c4
	if (cr6.eq) goto loc_8260F7C4;
	// bl 0x82624b20
	ctx.lr = 0x8260F774;
	sub_82624B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f7c4
	if (cr6.eq) goto loc_8260F7C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x8260F788;
	sub_82624A08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628110
	ctx.lr = 0x8260F790;
	sub_82628110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f7b4
	if (cr6.eq) goto loc_8260F7B4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8260f6f0
	ctx.lr = 0x8260F7AC;
	sub_8260F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8260F7B4:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82624c98
	ctx.lr = 0x8260F7C4;
	sub_82624C98(ctx, base);
loc_8260F7C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260F7CC"))) PPC_WEAK_FUNC(sub_8260F7CC);
PPC_FUNC_IMPL(__imp__sub_8260F7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F7D0"))) PPC_WEAK_FUNC(sub_8260F7D0);
PPC_FUNC_IMPL(__imp__sub_8260F7D0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1768
	ctx.r10.s64 = ctx.r11.s64 + -1768;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8264ed98
	ctx.lr = 0x8260F7FC;
	sub_8264ED98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264f1c0
	ctx.lr = 0x8260F804;
	sub_8264F1C0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260f81c
	if (cr6.eq) goto loc_8260F81C;
	// bl 0x82416268
	ctx.lr = 0x8260F818;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8260F81C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260F834"))) PPC_WEAK_FUNC(sub_8260F834);
PPC_FUNC_IMPL(__imp__sub_8260F834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F838"))) PPC_WEAK_FUNC(sub_8260F838);
PPC_FUNC_IMPL(__imp__sub_8260F838) {
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
	// bl 0x82624ae8
	ctx.lr = 0x8260F850;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82624b18
	ctx.lr = 0x8260F85C;
	sub_82624B18(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1156, ctx.r11.u8);
	// stb r11,1157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1157, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,1158(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1158, ctx.r11.u8);
	// stb r11,1159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1159, ctx.r11.u8);
	// stfs f0,1144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// stfs f0,1148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f0,1152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// bl 0x82627e68
	ctx.lr = 0x8260F88C;
	sub_82627E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x8260F894;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_8260F8A8"))) PPC_WEAK_FUNC(sub_8260F8A8);
PPC_FUNC_IMPL(__imp__sub_8260F8A8) {
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
	// bl 0x82624ae8
	ctx.lr = 0x8260F8C0;
	sub_82624AE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x8260F8CC;
	sub_82624B18(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1157, ctx.r11.u8);
	// stb r11,1158(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1158, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,1159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1159, ctx.r11.u8);
	// stfs f0,1144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// stfs f0,1148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f0,1152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
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

__attribute__((alias("__imp__sub_8260F904"))) PPC_WEAK_FUNC(sub_8260F904);
PPC_FUNC_IMPL(__imp__sub_8260F904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F908"))) PPC_WEAK_FUNC(sub_8260F908);
PPC_FUNC_IMPL(__imp__sub_8260F908) {
	PPC_FUNC_PROLOGUE();
	// b 0x8264ed98
	sub_8264ED98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260F90C"))) PPC_WEAK_FUNC(sub_8260F90C);
PPC_FUNC_IMPL(__imp__sub_8260F90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F910"))) PPC_WEAK_FUNC(sub_8260F910);
PPC_FUNC_IMPL(__imp__sub_8260F910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8260F918;
	__savegprlr_27(ctx, base);
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
	// bl 0x82624970
	ctx.lr = 0x8260F930;
	sub_82624970(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260F93C;
	sub_82A181B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2f4e8
	ctx.lr = 0x8260F944;
	sub_82A2F4E8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627b88
	ctx.lr = 0x8260F958;
	sub_82627B88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260F960"))) PPC_WEAK_FUNC(sub_8260F960);
PPC_FUNC_IMPL(__imp__sub_8260F960) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260f9c4
	if (cr6.eq) goto loc_8260F9C4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260f9c4
	if (cr6.eq) goto loc_8260F9C4;
	// bl 0x82624b08
	ctx.lr = 0x8260F988;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260f9c4
	if (cr6.eq) goto loc_8260F9C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b10
	ctx.lr = 0x8260F99C;
	sub_82624B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260F9A8;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260F9C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260F9C4:
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

__attribute__((alias("__imp__sub_8260F9D8"))) PPC_WEAK_FUNC(sub_8260F9D8);
PPC_FUNC_IMPL(__imp__sub_8260F9D8) {
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
	// lbz r11,1157(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1157);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260fa28
	if (cr6.eq) goto loc_8260FA28;
	// lbz r11,1159(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1159);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260fa28
	if (cr6.eq) goto loc_8260FA28;
	// bl 0x82624ae8
	ctx.lr = 0x8260FA08;
	sub_82624AE8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x8260FA14;
	sub_82624B18(ctx, base);
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
loc_8260FA28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826285d8
	ctx.lr = 0x8260FA30;
	sub_826285D8(ctx, base);
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

__attribute__((alias("__imp__sub_8260FA44"))) PPC_WEAK_FUNC(sub_8260FA44);
PPC_FUNC_IMPL(__imp__sub_8260FA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260FA48"))) PPC_WEAK_FUNC(sub_8260FA48);
PPC_FUNC_IMPL(__imp__sub_8260FA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8260FA50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260fb10
	if (cr6.eq) goto loc_8260FB10;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260fb10
	if (cr6.eq) goto loc_8260FB10;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260fb10
	if (cr6.eq) goto loc_8260FB10;
	// bl 0x82624608
	ctx.lr = 0x8260FA80;
	sub_82624608(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260FAA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260FAA8;
	sub_82A181B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r31,568
	ctx.r26.s64 = ctx.r31.s64 + 568;
	// addi r29,r31,504
	ctx.r29.s64 = ctx.r31.s64 + 504;
loc_8260FAB8:
	// lbzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260fadc
	if (cr6.eq) goto loc_8260FADC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260fadc
	if (cr6.eq) goto loc_8260FADC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2ea60
	ctx.lr = 0x8260FADC;
	sub_82A2EA60(ctx, base);
loc_8260FADC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// blt cr6,0x8260fab8
	if (cr6.lt) goto loc_8260FAB8;
	// lbz r11,1157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260fb10
	if (cr6.eq) goto loc_8260FB10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260FB00;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x8260FB04;
	sub_82A2E7C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18368
	ctx.lr = 0x8260FB10;
	sub_82A18368(ctx, base);
loc_8260FB10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260FB18"))) PPC_WEAK_FUNC(sub_8260FB18);
PPC_FUNC_IMPL(__imp__sub_8260FB18) {
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
	// bl 0x8264ecf8
	ctx.lr = 0x8260FB30;
	sub_8264ECF8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-1416
	ctx.r9.s64 = ctx.r11.s64 + -1416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// stfs f0,1148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f0,1152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// bl 0x8260f838
	ctx.lr = 0x8260FB58;
	sub_8260F838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x8260FB60;
	sub_82624AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8260FB78"))) PPC_WEAK_FUNC(sub_8260FB78);
PPC_FUNC_IMPL(__imp__sub_8260FB78) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1416
	ctx.r10.s64 = ctx.r11.s64 + -1416;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8264ed98
	ctx.lr = 0x8260FB9C;
	sub_8264ED98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264f1c0
	ctx.lr = 0x8260FBA4;
	sub_8264F1C0(ctx, base);
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

__attribute__((alias("__imp__sub_8260FBB8"))) PPC_WEAK_FUNC(sub_8260FBB8);
PPC_FUNC_IMPL(__imp__sub_8260FBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8260FBC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260fc5c
	if (cr6.eq) goto loc_8260FC5C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260fc5c
	if (cr6.eq) goto loc_8260FC5C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260fc5c
	if (cr6.eq) goto loc_8260FC5C;
	// bl 0x82624f78
	ctx.lr = 0x8260FBF0;
	sub_82624F78(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260FC10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260FC18;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7e0
	ctx.lr = 0x8260FC1C;
	sub_82A2E7E0(ctx, base);
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,123
	ctx.r5.u64 = ctx.r5.u64 | 123;
	// bl 0x82a18350
	ctx.lr = 0x8260FC30;
	sub_82A18350(ctx, base);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lwz r11,-3564(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260fc5c
	if (cr6.eq) goto loc_8260FC5C;
	// lfs f0,8144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1144(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1144, temp.u32);
	// lfs f13,8148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1148(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1148, temp.u32);
	// lfs f12,8152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1152(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1152, temp.u32);
loc_8260FC5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260FC64"))) PPC_WEAK_FUNC(sub_8260FC64);
PPC_FUNC_IMPL(__imp__sub_8260FC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260FC68"))) PPC_WEAK_FUNC(sub_8260FC68);
PPC_FUNC_IMPL(__imp__sub_8260FC68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8260FC70;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260fdf4
	if (cr6.eq) goto loc_8260FDF4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260fdf4
	if (cr6.eq) goto loc_8260FDF4;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260fdf4
	if (cr6.eq) goto loc_8260FDF4;
	// lwz r28,32(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8260fdf4
	if (cr6.eq) goto loc_8260FDF4;
	// bl 0x82a181b8
	ctx.lr = 0x8260FCB4;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x8260FCB8;
	sub_82A2E7C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260fcd0
	if (cr6.lt) goto loc_8260FCD0;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260fcd4
	if (cr6.lt) goto loc_8260FCD4;
loc_8260FCD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260FCD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260fdf4
	if (cr6.eq) goto loc_8260FDF4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8260fdf4
	if (cr6.eq) goto loc_8260FDF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8264f470
	ctx.lr = 0x8260FCF8;
	sub_8264F470(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22b40
	ctx.lr = 0x8260FD08;
	sub_82A22B40(ctx, base);
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, xer);
	// bne cr6,0x8260fde8
	if (!cr6.eq) goto loc_8260FDE8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8260fd28
	if (!cr6.gt) goto loc_8260FD28;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8260fd2c
	if (!cr6.gt) goto loc_8260FD2C;
loc_8260FD28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260FD2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260fde8
	if (cr6.eq) goto loc_8260FDE8;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x8260fdbc
	if (!cr6.eq) goto loc_8260FDBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,8144(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,8148(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f11,8152(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8152);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f10,8268(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8268);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x8260fde0
	if (cr6.gt) goto loc_8260FDE0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8264eb28
	ctx.lr = 0x8260FD88;
	sub_8264EB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260fda4
	if (cr6.eq) goto loc_8260FDA4;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8260FDA4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260FDB0;
	sub_82624AF8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8260FDBC:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8260fde8
	if (cr6.eq) goto loc_8260FDE8;
	// cmpwi cr6,r10,17
	cr6.compare<int32_t>(ctx.r10.s32, 17, xer);
	// beq cr6,0x8260fde8
	if (cr6.eq) goto loc_8260FDE8;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// beq cr6,0x8260fde8
	if (cr6.eq) goto loc_8260FDE8;
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// beq cr6,0x8260fde8
	if (cr6.eq) goto loc_8260FDE8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8260FDE0:
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82624af8
	ctx.lr = 0x8260FDE8;
	sub_82624AF8(ctx, base);
loc_8260FDE8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8260FDF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260FE00"))) PPC_WEAK_FUNC(sub_8260FE00);
PPC_FUNC_IMPL(__imp__sub_8260FE00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8260FE08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826100b8
	if (cr6.eq) goto loc_826100B8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826100b8
	if (cr6.eq) goto loc_826100B8;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x826100b8
	if (cr6.eq) goto loc_826100B8;
	// bl 0x8264f118
	ctx.lr = 0x8260FE40;
	sub_8264F118(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260fe88
	if (cr6.eq) goto loc_8260FE88;
	// lbz r11,1157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260fe7c
	if (cr6.eq) goto loc_8260FE7C;
	// lbz r11,1159(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1159);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260fe7c
	if (cr6.eq) goto loc_8260FE7C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82626788
	ctx.lr = 0x8260FE70;
	sub_82626788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260fe88
	if (!cr6.eq) goto loc_8260FE88;
loc_8260FE7C:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260FE88;
	sub_82624AF8(ctx, base);
loc_8260FE88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260FE90;
	sub_82A181B8(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lbz r10,1157(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1157);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bne cr6,0x8260fec0
	if (!cr6.eq) goto loc_8260FEC0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260fc68
	ctx.lr = 0x8260FEB8;
	sub_8260FC68(ctx, base);
	// stb r3,1157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1157, ctx.r3.u8);
	// b 0x8260ff18
	goto loc_8260FF18;
loc_8260FEC0:
	// lbz r11,1158(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1158);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260ff18
	if (!cr6.eq) goto loc_8260FF18;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8260ff18
	if (cr6.eq) goto loc_8260FF18;
	// addi r5,r30,8144
	ctx.r5.s64 = ctx.r30.s64 + 8144;
	// addi r4,r31,1144
	ctx.r4.s64 = ctx.r31.s64 + 1144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264ec78
	ctx.lr = 0x8260FEE4;
	sub_8264EC78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,1158(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1158, ctx.r3.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ff18
	if (cr6.eq) goto loc_8260FF18;
	// lbz r11,1056(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1056);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ff18
	if (cr6.eq) goto loc_8260FF18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260FF08;
	sub_82A2EE50(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82627ef8
	ctx.lr = 0x8260FF18;
	sub_82627EF8(ctx, base);
loc_8260FF18:
	// lbz r11,1157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ff6c
	if (cr6.eq) goto loc_8260FF6C;
	// lbz r11,1159(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1159);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260ff6c
	if (!cr6.eq) goto loc_8260FF6C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264efe8
	ctx.lr = 0x8260FF40;
	sub_8264EFE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,1159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1159, ctx.r3.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ff6c
	if (cr6.eq) goto loc_8260FF6C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260FF58;
	sub_82A2EE50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82627ef8
	ctx.lr = 0x8260FF6C;
	sub_82627EF8(ctx, base);
loc_8260FF6C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8260ff8c
	if (cr6.eq) goto loc_8260FF8C;
	// lfs f0,8144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// lfs f13,8148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// lfs f12,8152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1152(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
loc_8260FF8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260FF94;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610004
	if (cr6.eq) goto loc_82610004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249e8
	ctx.lr = 0x8260FFA8;
	sub_826249E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8260fff8
	if (!cr6.eq) goto loc_8260FFF8;
	// lbz r11,1157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260fff0
	if (cr6.eq) goto loc_8260FFF0;
	// lbz r11,1159(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1159);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260fff0
	if (cr6.eq) goto loc_8260FFF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x8260FFD4;
	sub_82624B18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260FFDC;
	sub_82A2EE50(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82627ef8
	ctx.lr = 0x8260FFEC;
	sub_82627EF8(ctx, base);
	// b 0x82610004
	goto loc_82610004;
loc_8260FFF0:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8260fffc
	goto loc_8260FFFC;
loc_8260FFF8:
	// li r4,19
	ctx.r4.s64 = 19;
loc_8260FFFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624af8
	ctx.lr = 0x82610004;
	sub_82624AF8(ctx, base);
loc_82610004:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b20
	ctx.lr = 0x8261000C;
	sub_82624B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826100b8
	if (!cr6.eq) goto loc_826100B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
loc_82610020:
	// lbzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8261003c
	if (cr6.eq) goto loc_8261003C;
	// add r10,r4,r31
	ctx.r10.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lbz r9,584(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 584);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82610050
	if (!cr6.eq) goto loc_82610050;
loc_8261003C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x82610020
	if (cr6.lt) goto loc_82610020;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82610050:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ea60
	ctx.lr = 0x82610058;
	sub_82A2EA60(ctx, base);
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826100b0
	if (cr6.eq) goto loc_826100B0;
	// lbz r11,1157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826100a0
	if (cr6.eq) goto loc_826100A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82624b18
	ctx.lr = 0x8261007C;
	sub_82624B18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82610084;
	sub_82A2EE50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82627ef8
	ctx.lr = 0x82610098;
	sub_82627EF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_826100A0:
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82624af8
	ctx.lr = 0x826100A8;
	sub_82624AF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_826100B0:
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82624af8
	ctx.lr = 0x826100B8;
	sub_82624AF8(ctx, base);
loc_826100B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826100C0"))) PPC_WEAK_FUNC(sub_826100C0);
PPC_FUNC_IMPL(__imp__sub_826100C0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1416
	ctx.r10.s64 = ctx.r11.s64 + -1416;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8264ed98
	ctx.lr = 0x826100EC;
	sub_8264ED98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264f1c0
	ctx.lr = 0x826100F4;
	sub_8264F1C0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8261010c
	if (cr6.eq) goto loc_8261010C;
	// bl 0x82416268
	ctx.lr = 0x82610108;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8261010C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82610124"))) PPC_WEAK_FUNC(sub_82610124);
PPC_FUNC_IMPL(__imp__sub_82610124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82610128"))) PPC_WEAK_FUNC(sub_82610128);
PPC_FUNC_IMPL(__imp__sub_82610128) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1144, temp.u32);
	// stfs f0,1148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1148, temp.u32);
	// stfs f0,1152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1152, temp.u32);
	// stb r11,1157(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1157, ctx.r11.u8);
	// stb r11,1156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1156, ctx.r11.u8);
	// stb r11,1158(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1158, ctx.r11.u8);
	// stb r11,1159(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1159, ctx.r11.u8);
	// stb r11,1160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1160, ctx.r11.u8);
	// bl 0x82624ae8
	ctx.lr = 0x8261016C;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x82610174;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_82610188"))) PPC_WEAK_FUNC(sub_82610188);
PPC_FUNC_IMPL(__imp__sub_82610188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82610190;
	__savegprlr_29(ctx, base);
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826102d8
	if (cr6.eq) goto loc_826102D8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826102d8
	if (cr6.eq) goto loc_826102D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,568
	ctx.r10.s64 = ctx.r3.s64 + 568;
loc_826101B8:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826101d4
	if (cr6.eq) goto loc_826101D4;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r8,584(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 584);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82610228
	if (!cr6.eq) goto loc_82610228;
loc_826101D4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x826101b8
	if (cr6.lt) goto loc_826101B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x826101E8;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82610230
	if (!cr6.eq) goto loc_82610230;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249d8
	ctx.lr = 0x826101FC;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610230
	if (cr6.eq) goto loc_82610230;
	// lbz r11,1158(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1158);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610220
	if (cr6.eq) goto loc_82610220;
	// lbz r11,1160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82610230
	if (!cr6.eq) goto loc_82610230;
loc_82610220:
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x826102b4
	goto loc_826102B4;
loc_82610228:
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x826102b4
	goto loc_826102B4;
loc_82610230:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a2b4e0
	ctx.lr = 0x8261023C;
	sub_82A2B4E0(ctx, base);
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x82610264
	if (cr6.eq) goto loc_82610264;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82610264
	if (cr6.lt) goto loc_82610264;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x82610264
	if (cr6.lt) goto loc_82610264;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bge cr6,0x82610264
	if (!cr6.lt) goto loc_82610264;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x826102b4
	goto loc_826102B4;
loc_82610264:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82626408
	ctx.lr = 0x82610274;
	sub_82626408(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610288
	if (cr6.eq) goto loc_82610288;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x826102b4
	goto loc_826102B4;
loc_82610288:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a58
	ctx.lr = 0x82610290;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826102d8
	if (cr6.eq) goto loc_826102D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e58
	ctx.lr = 0x826102A4;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826102d8
	if (!cr6.eq) goto loc_826102D8;
	// li r4,8
	ctx.r4.s64 = 8;
loc_826102B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x826102BC;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826102D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826102D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826102E0"))) PPC_WEAK_FUNC(sub_826102E0);
PPC_FUNC_IMPL(__imp__sub_826102E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x826102E8;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8261045c
	if (cr6.eq) goto loc_8261045C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8261045c
	if (cr6.eq) goto loc_8261045C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8261045c
	if (cr6.eq) goto loc_8261045C;
	// bl 0x82624608
	ctx.lr = 0x82610318;
	sub_82624608(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82610338;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x82610340;
	sub_82624A50(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82610360
	if (!cr6.eq) goto loc_82610360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x82610354;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826103a8
	if (cr6.eq) goto loc_826103A8;
loc_82610360:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82610374;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826103a8
	if (cr6.eq) goto loc_826103A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e58
	ctx.lr = 0x82610388;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826103a8
	if (cr6.eq) goto loc_826103A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8261039C;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x826103A8;
	sub_82628658(ctx, base);
loc_826103A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x826103B0;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a2e760
	ctx.lr = 0x826103B8;
	sub_82A2E760(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8261045c
	if (cr6.eq) goto loc_8261045C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x826103CC;
	sub_82A2E7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826103e4
	if (cr6.lt) goto loc_826103E4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x826103e8
	if (cr6.lt) goto loc_826103E8;
loc_826103E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826103E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8261045c
	if (cr6.eq) goto loc_8261045C;
	// lbz r11,1157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610424
	if (cr6.eq) goto loc_82610424;
	// lbz r11,1158(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1158);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82610424
	if (!cr6.eq) goto loc_82610424;
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r5,r5,133
	ctx.r5.u64 = ctx.r5.u64 | 133;
	// bl 0x82a18350
	ctx.lr = 0x8261041C;
	sub_82A18350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82610424:
	// lbz r11,1158(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1158);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610454
	if (cr6.eq) goto loc_82610454;
	// lbz r11,1160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82610454
	if (!cr6.eq) goto loc_82610454;
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r5,r5,129
	ctx.r5.u64 = ctx.r5.u64 | 129;
	// bl 0x82a18350
	ctx.lr = 0x8261044C;
	sub_82A18350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82610454:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18368
	ctx.lr = 0x8261045C;
	sub_82A18368(ctx, base);
loc_8261045C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82610464"))) PPC_WEAK_FUNC(sub_82610464);
PPC_FUNC_IMPL(__imp__sub_82610464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82610468"))) PPC_WEAK_FUNC(sub_82610468);
PPC_FUNC_IMPL(__imp__sub_82610468) {
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
	// bl 0x82624a68
	ctx.lr = 0x82610480;
	sub_82624A68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826104b4
	if (!cr6.eq) goto loc_826104B4;
	// lbz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826104ac
	if (cr6.eq) goto loc_826104AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x826104A0;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826104b4
	if (!cr6.eq) goto loc_826104B4;
loc_826104AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826104b8
	goto loc_826104B8;
loc_826104B4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_826104B8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_826104D0"))) PPC_WEAK_FUNC(sub_826104D0);
PPC_FUNC_IMPL(__imp__sub_826104D0) {
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
	// bl 0x8264ecf8
	ctx.lr = 0x826104E8;
	sub_8264ECF8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,-1064
	ctx.r8.s64 = ctx.r11.s64 + -1064;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r31,1144
	ctx.r10.s64 = ctx.r31.s64 + 1144;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// stfs f0,1148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f0,1152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// stfs f0,1144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// stfs f0,1148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f0,1152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// stb r11,1157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1157, ctx.r11.u8);
	// stb r11,1156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1156, ctx.r11.u8);
	// stb r11,1158(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1158, ctx.r11.u8);
	// stb r11,1159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1159, ctx.r11.u8);
	// stb r11,1160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1160, ctx.r11.u8);
	// bl 0x82624ae8
	ctx.lr = 0x82610538;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x82610540;
	sub_82628208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x82610548;
	sub_82624AE8(ctx, base);
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

__attribute__((alias("__imp__sub_82610560"))) PPC_WEAK_FUNC(sub_82610560);
PPC_FUNC_IMPL(__imp__sub_82610560) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1064
	ctx.r10.s64 = ctx.r11.s64 + -1064;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8264ed98
	ctx.lr = 0x82610584;
	sub_8264ED98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264f1c0
	ctx.lr = 0x8261058C;
	sub_8264F1C0(ctx, base);
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

__attribute__((alias("__imp__sub_826105A0"))) PPC_WEAK_FUNC(sub_826105A0);
PPC_FUNC_IMPL(__imp__sub_826105A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x826105A8;
	__savegprlr_27(ctx, base);
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
	// bl 0x82624970
	ctx.lr = 0x826105C0;
	sub_82624970(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x826105CC;
	sub_82A181B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2f4e8
	ctx.lr = 0x826105D4;
	sub_82A2F4E8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627b88
	ctx.lr = 0x826105E8;
	sub_82627B88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628110
	ctx.lr = 0x826105F0;
	sub_82628110(ctx, base);
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r3,1156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1156, ctx.r3.u8);
	// stb r11,1157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1157, ctx.r11.u8);
	// stb r11,1158(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1158, ctx.r11.u8);
	// stb r11,1159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1159, ctx.r11.u8);
	// stb r11,1160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1160, ctx.r11.u8);
	// lwz r11,-3564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,8144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// lfs f13,8148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// lfs f12,8152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1152(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82610634"))) PPC_WEAK_FUNC(sub_82610634);
PPC_FUNC_IMPL(__imp__sub_82610634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82610638"))) PPC_WEAK_FUNC(sub_82610638);
PPC_FUNC_IMPL(__imp__sub_82610638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82610640;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82610790
	if (cr6.eq) goto loc_82610790;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82610790
	if (cr6.eq) goto loc_82610790;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82610790
	if (cr6.eq) goto loc_82610790;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82610790
	if (cr6.eq) goto loc_82610790;
	// bl 0x82a181b8
	ctx.lr = 0x82610680;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x82610688;
	sub_82A2E7E0(ctx, base);
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c760
	ctx.lr = 0x82610698;
	sub_82A0C760(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,1280
	ctx.r9.s64 = 83886080;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwinm r7,r8,0,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lfs f13,8144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lfs f12,8148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8148);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r28,r5,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f11,8152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8152);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8264eb28
	ctx.lr = 0x826106F0;
	sub_8264EB28(ctx, base);
	// lbz r4,1158(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1158);
	// stb r3,1157(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1157, ctx.r3.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82610740
	if (!cr6.eq) goto loc_82610740;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610778
	if (cr6.eq) goto loc_82610778;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610778
	if (cr6.eq) goto loc_82610778;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82610720;
	sub_82A2EE50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82627ef8
	ctx.lr = 0x82610734;
	sub_82627EF8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1158(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1158, ctx.r10.u8);
	// b 0x82610778
	goto loc_82610778;
loc_82610740:
	// lbz r11,1160(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82610778
	if (!cr6.eq) goto loc_82610778;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82610778
	if (cr6.eq) goto loc_82610778;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a22b40
	ctx.lr = 0x82610764;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82610778
	if (!cr6.eq) goto loc_82610778;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1160(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1160, ctx.r11.u8);
loc_82610778:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,1144(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1144, temp.u32);
	// stfs f13,1148(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1148, temp.u32);
	// stfs f12,1152(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1152, temp.u32);
loc_82610790:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82610798"))) PPC_WEAK_FUNC(sub_82610798);
PPC_FUNC_IMPL(__imp__sub_82610798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x826107A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82610870
	if (cr6.eq) goto loc_82610870;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82610870
	if (cr6.eq) goto loc_82610870;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,432(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82610870
	if (cr6.eq) goto loc_82610870;
	// bl 0x82624a60
	ctx.lr = 0x826107D8;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82610870
	if (!cr6.eq) goto loc_82610870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249d8
	ctx.lr = 0x826107EC;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610870
	if (cr6.eq) goto loc_82610870;
	// lbz r11,1158(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1158);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610870
	if (cr6.eq) goto loc_82610870;
	// lbz r11,1160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610870
	if (cr6.eq) goto loc_82610870;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82610818;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x82610824;
	sub_82624A08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8261082C;
	sub_82A2EE50(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82627ef8
	ctx.lr = 0x8261083C;
	sub_82627EF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624c98
	ctx.lr = 0x82610848;
	sub_82624C98(ctx, base);
	// lbz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610870
	if (cr6.eq) goto loc_82610870;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8261085C;
	sub_82A2EE50(ctx, base);
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627f98
	ctx.lr = 0x82610870;
	sub_82627F98(ctx, base);
loc_82610870:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82610878"))) PPC_WEAK_FUNC(sub_82610878);
PPC_FUNC_IMPL(__imp__sub_82610878) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1064
	ctx.r10.s64 = ctx.r11.s64 + -1064;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8264ed98
	ctx.lr = 0x826108A4;
	sub_8264ED98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264f1c0
	ctx.lr = 0x826108AC;
	sub_8264F1C0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826108c4
	if (cr6.eq) goto loc_826108C4;
	// bl 0x82416268
	ctx.lr = 0x826108C0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826108C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826108DC"))) PPC_WEAK_FUNC(sub_826108DC);
PPC_FUNC_IMPL(__imp__sub_826108DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826108E0"))) PPC_WEAK_FUNC(sub_826108E0);
PPC_FUNC_IMPL(__imp__sub_826108E0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,1036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1036, ctx.r11.u32);
	// stw r11,1040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1040, ctx.r11.u32);
	// stw r11,1044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1044, ctx.r11.u32);
	// stw r11,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r11.u32);
	// stw r11,1004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1004, ctx.r11.u32);
	// stb r11,1048(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1048, ctx.r11.u8);
	// stw r11,1008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1008, ctx.r11.u32);
	// stb r11,1049(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1049, ctx.r11.u8);
	// stb r11,1050(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1050, ctx.r11.u8);
	// bl 0x82624ae8
	ctx.lr = 0x82610920;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82624b18
	ctx.lr = 0x8261092C;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x82610934;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_82610948"))) PPC_WEAK_FUNC(sub_82610948);
PPC_FUNC_IMPL(__imp__sub_82610948) {
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
	// bl 0x82624cf8
	ctx.lr = 0x82610960;
	sub_82624CF8(ctx, base);
	// addi r3,r31,1040
	ctx.r3.s64 = ctx.r31.s64 + 1040;
	// bl 0x8264fdf8
	ctx.lr = 0x82610968;
	sub_8264FDF8(ctx, base);
	// addi r3,r31,1044
	ctx.r3.s64 = ctx.r31.s64 + 1044;
	// bl 0x8264fdf8
	ctx.lr = 0x82610970;
	sub_8264FDF8(ctx, base);
	// addi r3,r31,1036
	ctx.r3.s64 = ctx.r31.s64 + 1036;
	// bl 0x8264fdf8
	ctx.lr = 0x82610978;
	sub_8264FDF8(ctx, base);
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

__attribute__((alias("__imp__sub_8261098C"))) PPC_WEAK_FUNC(sub_8261098C);
PPC_FUNC_IMPL(__imp__sub_8261098C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82610990"))) PPC_WEAK_FUNC(sub_82610990);
PPC_FUNC_IMPL(__imp__sub_82610990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82610998;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82624490
	ctx.lr = 0x826109AC;
	sub_82624490(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x826109B4;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2e880
	ctx.lr = 0x826109BC;
	sub_82A2E880(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x826109C8;
	sub_82A2EE50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1036
	ctx.r3.s64 = ctx.r31.s64 + 1036;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r10.u32);
	// stw r9,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r9.u32);
	// bl 0x82650570
	ctx.lr = 0x826109EC;
	sub_82650570(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// addi r3,r31,1040
	ctx.r3.s64 = ctx.r31.s64 + 1040;
	// bl 0x82650480
	ctx.lr = 0x826109FC;
	sub_82650480(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// addi r3,r31,1044
	ctx.r3.s64 = ctx.r31.s64 + 1044;
	// bl 0x82650480
	ctx.lr = 0x82610A0C;
	sub_82650480(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82610A14"))) PPC_WEAK_FUNC(sub_82610A14);
PPC_FUNC_IMPL(__imp__sub_82610A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82610A18"))) PPC_WEAK_FUNC(sub_82610A18);
PPC_FUNC_IMPL(__imp__sub_82610A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82610A20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82610ae8
	if (cr6.eq) goto loc_82610AE8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82610ae8
	if (cr6.eq) goto loc_82610AE8;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82610ae8
	if (cr6.eq) goto loc_82610AE8;
	// bl 0x82624f78
	ctx.lr = 0x82610A48;
	sub_82624F78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82610A50;
	sub_82A181B8(ctx, base);
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stw r10,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r10.u32);
	// blt cr6,0x82610aa0
	if (cr6.lt) goto loc_82610AA0;
	// beq cr6,0x82610a88
	if (cr6.eq) goto loc_82610A88;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82610ab8
	if (!cr6.lt) goto loc_82610AB8;
	// bl 0x82a2ee50
	ctx.lr = 0x82610A78;
	sub_82A2EE50(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,1000(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
loc_82610A88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82610A90;
	sub_82A2EE50(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,1000(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
loc_82610AA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82610AA8;
	sub_82A2EE50(ctx, base);
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
loc_82610AB8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x82610AC4;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x82610ACC;
	sub_82624AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x82610AD4;
	sub_82A2E7E0(ctx, base);
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,139
	ctx.r5.u64 = ctx.r5.u64 | 139;
	// bl 0x82a18350
	ctx.lr = 0x82610AE8;
	sub_82A18350(ctx, base);
loc_82610AE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82610AF0"))) PPC_WEAK_FUNC(sub_82610AF0);
PPC_FUNC_IMPL(__imp__sub_82610AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82610AF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r29,1008(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1008);
	// bl 0x82a181b8
	ctx.lr = 0x82610B18;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f510
	ctx.lr = 0x82610B1C;
	sub_82A2F510(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, xer);
	// bge cr6,0x82610b48
	if (!cr6.lt) goto loc_82610B48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82610B2C;
	sub_82A181B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a2f4e8
	ctx.lr = 0x82610B34;
	sub_82A2F4E8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82627b88
	ctx.lr = 0x82610B48;
	sub_82627B88(ctx, base);
loc_82610B48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82610B50"))) PPC_WEAK_FUNC(sub_82610B50);
PPC_FUNC_IMPL(__imp__sub_82610B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82610B60"))) PPC_WEAK_FUNC(sub_82610B60);
PPC_FUNC_IMPL(__imp__sub_82610B60) {
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
	// bl 0x82628820
	ctx.lr = 0x82610B78;
	sub_82628820(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-696
	ctx.r9.s64 = ctx.r11.s64 + -696;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1012, temp.u32);
	// stfs f0,1016(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
	// stfs f0,1020(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1020, temp.u32);
	// stfs f0,1024(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1024, temp.u32);
	// stfs f0,1028(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1028, temp.u32);
	// stfs f0,1032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1032, temp.u32);
	// stw r11,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r11.u32);
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r11.u32);
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// stw r11,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r11.u32);
	// stb r11,1048(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1048, ctx.r11.u8);
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// stb r11,1049(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1049, ctx.r11.u8);
	// stb r11,1050(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1050, ctx.r11.u8);
	// bl 0x82624ae8
	ctx.lr = 0x82610BD4;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82624b18
	ctx.lr = 0x82610BE0;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x82610BE8;
	sub_82628208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x82610BF0;
	sub_82624AE8(ctx, base);
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

__attribute__((alias("__imp__sub_82610C08"))) PPC_WEAK_FUNC(sub_82610C08);
PPC_FUNC_IMPL(__imp__sub_82610C08) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-696
	ctx.r10.s64 = ctx.r11.s64 + -696;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x82610C2C;
	sub_82624CF8(ctx, base);
	// addi r3,r31,1040
	ctx.r3.s64 = ctx.r31.s64 + 1040;
	// bl 0x8264fdf8
	ctx.lr = 0x82610C34;
	sub_8264FDF8(ctx, base);
	// addi r3,r31,1044
	ctx.r3.s64 = ctx.r31.s64 + 1044;
	// bl 0x8264fdf8
	ctx.lr = 0x82610C3C;
	sub_8264FDF8(ctx, base);
	// addi r3,r31,1036
	ctx.r3.s64 = ctx.r31.s64 + 1036;
	// bl 0x8264fdf8
	ctx.lr = 0x82610C44;
	sub_8264FDF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x82610C4C;
	sub_82627660(ctx, base);
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

__attribute__((alias("__imp__sub_82610C60"))) PPC_WEAK_FUNC(sub_82610C60);
PPC_FUNC_IMPL(__imp__sub_82610C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82610C68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82610de8
	if (cr6.eq) goto loc_82610DE8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82610de8
	if (cr6.eq) goto loc_82610DE8;
	// bl 0x82624b20
	ctx.lr = 0x82610C84;
	sub_82624B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610de8
	if (cr6.eq) goto loc_82610DE8;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r28,432(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82610de8
	if (cr6.eq) goto loc_82610DE8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82610CAC;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82610CB4;
	sub_82A2EE50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b20
	ctx.lr = 0x82610CC0;
	sub_82624B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610de8
	if (cr6.eq) goto loc_82610DE8;
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82610cf4
	if (cr6.lt) goto loc_82610CF4;
	// beq cr6,0x82610cec
	if (cr6.eq) goto loc_82610CEC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82610d04
	if (!cr6.lt) goto loc_82610D04;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// b 0x82610cf8
	goto loc_82610CF8;
loc_82610CEC:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// b 0x82610cf8
	goto loc_82610CF8;
loc_82610CF4:
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_82610CF8:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627ef8
	ctx.lr = 0x82610D04;
	sub_82627EF8(ctx, base);
loc_82610D04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a58
	ctx.lr = 0x82610D0C;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82610d30
	if (!cr6.eq) goto loc_82610D30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2f510
	ctx.lr = 0x82610D20;
	sub_82A2F510(ctx, base);
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82610da0
	if (!cr6.eq) goto loc_82610DA0;
loc_82610D30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a58
	ctx.lr = 0x82610D38;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82610d8c
	if (!cr6.eq) goto loc_82610D8C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18220
	ctx.lr = 0x82610D4C;
	sub_82A18220(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lfs f13,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f0,23372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82627ef8
	ctx.lr = 0x82610D8C;
	sub_82627EF8(ctx, base);
loc_82610D8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x82610D94;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x82610DA0;
	sub_82628658(ctx, base);
loc_82610DA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a58
	ctx.lr = 0x82610DA8;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610dd4
	if (cr6.eq) goto loc_82610DD4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82610DBC;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f510
	ctx.lr = 0x82610DC0;
	sub_82A2F510(ctx, base);
	// stw r3,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x82610DCC;
	sub_82624A08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82610DD4:
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// bl 0x82624a08
	ctx.lr = 0x82610DE8;
	sub_82624A08(ctx, base);
loc_82610DE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82610DF0"))) PPC_WEAK_FUNC(sub_82610DF0);
PPC_FUNC_IMPL(__imp__sub_82610DF0) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82610ee0
	if (cr6.eq) goto loc_82610EE0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82610ee0
	if (cr6.eq) goto loc_82610EE0;
	// bl 0x826249f0
	ctx.lr = 0x82610E18;
	sub_826249F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82610e5c
	if (!cr6.eq) goto loc_82610E5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249d8
	ctx.lr = 0x82610E2C;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82610e5c
	if (!cr6.eq) goto loc_82610E5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b08
	ctx.lr = 0x82610E40;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610ee0
	if (cr6.eq) goto loc_82610EE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b10
	ctx.lr = 0x82610E54;
	sub_82624B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82610ebc
	goto loc_82610EBC;
loc_82610E5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e58
	ctx.lr = 0x82610E64;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610eb8
	if (cr6.eq) goto loc_82610EB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x82610E78;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x82610E84;
	sub_82628658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x82610E8C;
	sub_82624A08(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82a181b8
	ctx.lr = 0x82610E9C;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f510
	ctx.lr = 0x82610EA0;
	sub_82A2F510(ctx, base);
	// stw r3,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r3.u32);
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
loc_82610EB8:
	// li r4,2
	ctx.r4.s64 = 2;
loc_82610EBC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x82610EC4;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82610EE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82610EE0:
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

__attribute__((alias("__imp__sub_82610EF4"))) PPC_WEAK_FUNC(sub_82610EF4);
PPC_FUNC_IMPL(__imp__sub_82610EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82610EF8"))) PPC_WEAK_FUNC(sub_82610EF8);
PPC_FUNC_IMPL(__imp__sub_82610EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82610F00;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82611120
	if (cr6.eq) goto loc_82611120;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82611120
	if (cr6.eq) goto loc_82611120;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82611120
	if (cr6.eq) goto loc_82611120;
	// bl 0x82624608
	ctx.lr = 0x82610F28;
	sub_82624608(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82610F30;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b20
	ctx.lr = 0x82610F3C;
	sub_82624B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82610f74
	if (cr6.eq) goto loc_82610F74;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	// bl 0x8264f320
	ctx.lr = 0x82610F54;
	sub_8264F320(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	// bl 0x8264f320
	ctx.lr = 0x82610F60;
	sub_8264F320(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// bl 0x8264f320
	ctx.lr = 0x82610F6C;
	sub_8264F320(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82610F74:
	// lwz r11,1004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// bl 0x82a2e8a0
	ctx.lr = 0x82610F88;
	sub_82A2E8A0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// bl 0x82a2e8a0
	ctx.lr = 0x82610FB0;
	sub_82A2E8A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bl 0x8264fb38
	ctx.lr = 0x82610FDC;
	sub_8264FB38(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x8264f7d0
	ctx.lr = 0x82611010;
	sub_8264F7D0(ctx, base);
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bee188
	ctx.lr = 0x82611028;
	sub_82BEE188(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r5,r5,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,1040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8264f9e8
	ctx.lr = 0x8261104C;
	sub_8264F9E8(ctx, base);
	// lwz r11,1004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r29,r4,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// bl 0x82a2e880
	ctx.lr = 0x82611064;
	sub_82A2E880(ctx, base);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// bge cr6,0x82611120
	if (!cr6.lt) goto loc_82611120;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x82611078;
	sub_82A2E8A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// bl 0x82a2e8a0
	ctx.lr = 0x826110A0;
	sub_82A2E8A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// bl 0x8264f7d0
	ctx.lr = 0x826110D0;
	sub_8264F7D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x826110D8;
	sub_82A2EE50(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f4,52(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cd6c48
	ctx.lr = 0x826110F4;
	sub_82CD6C48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rldicr r5,r6,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,1044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8264f9e8
	ctx.lr = 0x82611120;
	sub_8264F9E8(ctx, base);
loc_82611120:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82611128"))) PPC_WEAK_FUNC(sub_82611128);
PPC_FUNC_IMPL(__imp__sub_82611128) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-696
	ctx.r10.s64 = ctx.r11.s64 + -696;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x82611154;
	sub_82624CF8(ctx, base);
	// addi r3,r31,1040
	ctx.r3.s64 = ctx.r31.s64 + 1040;
	// bl 0x8264fdf8
	ctx.lr = 0x8261115C;
	sub_8264FDF8(ctx, base);
	// addi r3,r31,1044
	ctx.r3.s64 = ctx.r31.s64 + 1044;
	// bl 0x8264fdf8
	ctx.lr = 0x82611164;
	sub_8264FDF8(ctx, base);
	// addi r3,r31,1036
	ctx.r3.s64 = ctx.r31.s64 + 1036;
	// bl 0x8264fdf8
	ctx.lr = 0x8261116C;
	sub_8264FDF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x82611174;
	sub_82627660(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8261118c
	if (cr6.eq) goto loc_8261118C;
	// bl 0x82416268
	ctx.lr = 0x82611188;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8261118C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826111A4"))) PPC_WEAK_FUNC(sub_826111A4);
PPC_FUNC_IMPL(__imp__sub_826111A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826111A8"))) PPC_WEAK_FUNC(sub_826111A8);
PPC_FUNC_IMPL(__imp__sub_826111A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x826111B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82624b20
	ctx.lr = 0x826111C4;
	sub_82624B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82611410
	if (!cr6.eq) goto loc_82611410;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82611410
	if (cr6.eq) goto loc_82611410;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82611410
	if (cr6.eq) goto loc_82611410;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82611410
	if (cr6.eq) goto loc_82611410;
	// bl 0x82a181b8
	ctx.lr = 0x826111F8;
	sub_82A181B8(ctx, base);
	// addi r30,r31,444
	ctx.r30.s64 = ctx.r31.s64 + 444;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bb510
	ctx.lr = 0x82611208;
	sub_825BB510(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x82611214;
	sub_82A2E7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a18368
	ctx.lr = 0x82611220;
	sub_82A18368(ctx, base);
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8261123c
	if (cr6.eq) goto loc_8261123C;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825a8ca0
	ctx.lr = 0x82611238;
	sub_825A8CA0(ctx, base);
	// stw r25,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r25.u32);
loc_8261123C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x82611244;
	sub_82A2E7C0(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c788
	ctx.lr = 0x82611254;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82611410
	if (cr6.eq) goto loc_82611410;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// addi r29,r3,1380
	ctx.r29.s64 = ctx.r3.s64 + 1380;
	// lbz r10,1048(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1048);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r26,r11,8144
	ctx.r26.s64 = ctx.r11.s64 + 8144;
	// bne cr6,0x8261128c
	if (!cr6.eq) goto loc_8261128C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r25,1049(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1049, ctx.r25.u8);
	// stb r25,1050(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1050, ctx.r25.u8);
	// stb r11,1048(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1048, ctx.r11.u8);
	// b 0x826113e0
	goto loc_826113E0;
loc_8261128C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,1004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// bl 0x82a22b40
	ctx.lr = 0x826112A8;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x826112c4
	if (cr6.eq) goto loc_826112C4;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x826112c4
	if (cr6.eq) goto loc_826112C4;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x82611360
	if (!cr6.eq) goto loc_82611360;
loc_826112C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x826112D0;
	sub_82A2E8A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bl 0x82a2e8a0
	ctx.lr = 0x826112F8;
	sub_82A2E8A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,1012
	ctx.r5.s64 = ctx.r31.s64 + 1012;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8264f910
	ctx.lr = 0x82611328;
	sub_8264F910(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8261133c
	if (cr6.eq) goto loc_8261133C;
	// stb r30,1050(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1050, ctx.r30.u8);
loc_8261133C:
	// addi r5,r31,1024
	ctx.r5.s64 = ctx.r31.s64 + 1024;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8264f910
	ctx.lr = 0x82611350;
	sub_8264F910(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82611360
	if (cr6.eq) goto loc_82611360;
	// stb r30,1049(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1049, ctx.r30.u8);
loc_82611360:
	// lbz r11,1049(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1049);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826113e0
	if (cr6.eq) goto loc_826113E0;
	// lbz r11,1050(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1050);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826113e0
	if (cr6.eq) goto loc_826113E0;
	// lwz r11,1004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r11.u32);
	// bl 0x82a2ee50
	ctx.lr = 0x8261138C;
	sub_82A2EE50(ctx, base);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82627ef8
	ctx.lr = 0x8261139C;
	sub_82627EF8(ctx, base);
	// lwz r10,1004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// lwz r9,1000(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826113b8
	if (!cr6.eq) goto loc_826113B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x826113B8;
	sub_82624B18(ctx, base);
loc_826113B8:
	// stb r25,1049(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1049, ctx.r25.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r25,1050(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1050, ctx.r25.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,-800
	ctx.r3.s64 = ctx.r11.s64 + -800;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x826113E0;
	sub_830EAB70(ctx, base);
loc_826113E0:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1012, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1016(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1020(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1020, temp.u32);
	// lfs f11,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1024(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1024, temp.u32);
	// lfs f10,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1028(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1028, temp.u32);
	// lfs f9,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1032(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1032, temp.u32);
loc_82611410:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82611418"))) PPC_WEAK_FUNC(sub_82611418);
PPC_FUNC_IMPL(__imp__sub_82611418) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82624a60
	ctx.lr = 0x82611434;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82611448
	if (cr6.eq) goto loc_82611448;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826114c8
	goto loc_826114C8;
loc_82611448:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-24636
	ctx.r9.s64 = ctx.r10.s64 + -24636;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x825aa080
	ctx.lr = 0x82611474;
	sub_825AA080(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82611490
	if (!cr6.eq) goto loc_82611490;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_82611490:
	// bl 0x82a181b8
	ctx.lr = 0x82611494;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f510
	ctx.lr = 0x82611498;
	sub_82A2F510(ctx, base);
	// lwz r11,1008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1008);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// blt cr6,0x826114a8
	if (cr6.lt) goto loc_826114A8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_826114A8:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x825a8d40
	ctx.lr = 0x826114C4;
	sub_825A8D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826114C8:
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

__attribute__((alias("__imp__sub_826114E0"))) PPC_WEAK_FUNC(sub_826114E0);
PPC_FUNC_IMPL(__imp__sub_826114E0) {
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
	// li r10,12
	ctx.r10.s64 = 12;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r3,1004
	ctx.r11.s64 = ctx.r3.s64 + 1004;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82611510:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82611510
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82611510;
	// stw r30,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r30.u32);
	// addi r11,r31,1052
	ctx.r11.s64 = ctx.r31.s64 + 1052;
	// stw r30,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r30.u32);
	// bl 0x82624ae8
	ctx.lr = 0x82611530;
	sub_82624AE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x8261153C;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e68
	ctx.lr = 0x82611544;
	sub_82627E68(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r30,1065(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1065, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,1064(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1064, ctx.r30.u8);
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// bl 0x82628208
	ctx.lr = 0x8261155C;
	sub_82628208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82611574"))) PPC_WEAK_FUNC(sub_82611574);
PPC_FUNC_IMPL(__imp__sub_82611574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82611578"))) PPC_WEAK_FUNC(sub_82611578);
PPC_FUNC_IMPL(__imp__sub_82611578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82611580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82624cf8
	ctx.lr = 0x8261158C;
	sub_82624CF8(ctx, base);
	// addi r30,r29,1004
	ctx.r30.s64 = ctx.r29.s64 + 1004;
	// li r31,12
	ctx.r31.s64 = 12;
loc_82611594:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264fdf8
	ctx.lr = 0x8261159C;
	sub_8264FDF8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82611594
	if (!cr0.eq) goto loc_82611594;
	// addi r30,r29,1052
	ctx.r30.s64 = ctx.r29.s64 + 1052;
	// li r31,3
	ctx.r31.s64 = 3;
loc_826115B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264fdf8
	ctx.lr = 0x826115B8;
	sub_8264FDF8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x826115b0
	if (!cr0.eq) goto loc_826115B0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826115CC"))) PPC_WEAK_FUNC(sub_826115CC);
PPC_FUNC_IMPL(__imp__sub_826115CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826115D0"))) PPC_WEAK_FUNC(sub_826115D0);
PPC_FUNC_IMPL(__imp__sub_826115D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x826115D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82624490
	ctx.lr = 0x826115E8;
	sub_82624490(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,1004
	ctx.r30.s64 = ctx.r29.s64 + 1004;
loc_826115F0:
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r31,67
	ctx.r4.s64 = ctx.r31.s64 + 67;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82650570
	ctx.lr = 0x82611600;
	sub_82650570(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,12
	cr6.compare<int32_t>(ctx.r31.s32, 12, xer);
	// blt cr6,0x826115f0
	if (cr6.lt) goto loc_826115F0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,1052
	ctx.r30.s64 = ctx.r29.s64 + 1052;
loc_82611618:
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r31,79
	ctx.r4.s64 = ctx.r31.s64 + 79;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82650570
	ctx.lr = 0x82611628;
	sub_82650570(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// blt cr6,0x82611618
	if (cr6.lt) goto loc_82611618;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82611640"))) PPC_WEAK_FUNC(sub_82611640);
PPC_FUNC_IMPL(__imp__sub_82611640) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82611708
	if (cr6.eq) goto loc_82611708;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82611708
	if (cr6.eq) goto loc_82611708;
	// bl 0x826249f0
	ctx.lr = 0x82611668;
	sub_826249F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82611680
	if (cr6.eq) goto loc_82611680;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624af8
	ctx.lr = 0x82611680;
	sub_82624AF8(ctx, base);
loc_82611680:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b08
	ctx.lr = 0x82611688;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82611708
	if (cr6.eq) goto loc_82611708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a58
	ctx.lr = 0x8261169C;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826116d8
	if (cr6.eq) goto loc_826116D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e58
	ctx.lr = 0x826116B0;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826116d8
	if (cr6.eq) goto loc_826116D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x826116C4;
	sub_82624A08(ctx, base);
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
loc_826116D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b10
	ctx.lr = 0x826116E0;
	sub_82624B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x826116EC;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82611708;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82611708:
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

__attribute__((alias("__imp__sub_8261171C"))) PPC_WEAK_FUNC(sub_8261171C);
PPC_FUNC_IMPL(__imp__sub_8261171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82611720"))) PPC_WEAK_FUNC(sub_82611720);
PPC_FUNC_IMPL(__imp__sub_82611720) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a2e880
	ctx.lr = 0x8261173C;
	sub_82A2E880(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,32384
	ctx.r11.s64 = ctx.r11.s64 + 32384;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// bge cr6,0x82611788
	if (!cr6.lt) goto loc_82611788;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bge cr6,0x82611788
	if (!cr6.lt) goto loc_82611788;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bge cr6,0x82611788
	if (!cr6.lt) goto loc_82611788;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// blt cr6,0x8261178c
	if (cr6.lt) goto loc_8261178C;
loc_82611788:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8261178C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_826117A4"))) PPC_WEAK_FUNC(sub_826117A4);
PPC_FUNC_IMPL(__imp__sub_826117A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826117A8"))) PPC_WEAK_FUNC(sub_826117A8);
PPC_FUNC_IMPL(__imp__sub_826117A8) {
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
	// bl 0x82628820
	ctx.lr = 0x826117C0;
	sub_82628820(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-344
	ctx.r10.s64 = ctx.r11.s64 + -344;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x826114e0
	ctx.lr = 0x826117D4;
	sub_826114E0(ctx, base);
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

__attribute__((alias("__imp__sub_826117EC"))) PPC_WEAK_FUNC(sub_826117EC);
PPC_FUNC_IMPL(__imp__sub_826117EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826117F0"))) PPC_WEAK_FUNC(sub_826117F0);
PPC_FUNC_IMPL(__imp__sub_826117F0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-344
	ctx.r10.s64 = ctx.r11.s64 + -344;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82611578
	ctx.lr = 0x82611814;
	sub_82611578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8261181C;
	sub_82627660(ctx, base);
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

__attribute__((alias("__imp__sub_82611830"))) PPC_WEAK_FUNC(sub_82611830);
PPC_FUNC_IMPL(__imp__sub_82611830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82611838;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82611a78
	if (cr6.eq) goto loc_82611A78;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82611a78
	if (cr6.eq) goto loc_82611A78;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82611a78
	if (cr6.eq) goto loc_82611A78;
	// bl 0x82624608
	ctx.lr = 0x82611860;
	sub_82624608(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82611868;
	sub_82A181B8(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,2
	ctx.r23.s64 = 2;
	// addi r28,r27,1004
	ctx.r28.s64 = ctx.r27.s64 + 1004;
	// addi r30,r11,32384
	ctx.r30.s64 = ctx.r11.s64 + 32384;
loc_82611880:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82611720
	ctx.lr = 0x82611890;
	sub_82611720(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826119e0
	if (cr6.eq) goto loc_826119E0;
	// cmplwi cr6,r24,2
	cr6.compare<uint32_t>(ctx.r24.u32, 2, xer);
	// beq cr6,0x8261195c
	if (cr6.eq) goto loc_8261195C;
	// cmpwi cr6,r23,12
	cr6.compare<int32_t>(ctx.r23.s32, 12, xer);
	// bge cr6,0x826119e0
	if (!cr6.lt) goto loc_826119E0;
	// rlwinm r29,r24,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r26,0(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// bl 0x82a2e8a0
	ctx.lr = 0x826118C8;
	sub_82A2E8A0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwzx r4,r29,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x826118D8;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8264fb38
	ctx.lr = 0x826118E8;
	sub_8264FB38(ctx, base);
	// addi r26,r30,8
	ctx.r26.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r23,r23,3
	ctx.r23.s64 = ctx.r23.s64 + 3;
	// lwzx r4,r29,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// lwzu r25,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r25.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x82a2e8a0
	ctx.lr = 0x82611900;
	sub_82A2E8A0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwzx r4,r29,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x82611910;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x8264fb38
	ctx.lr = 0x82611920;
	sub_8264FB38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r29,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// lwzu r26,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r26.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x82a2e8a0
	ctx.lr = 0x82611930;
	sub_82A2E8A0(ctx, base);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r29,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// bl 0x82a2e8a0
	ctx.lr = 0x82611944;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8264fb38
	ctx.lr = 0x82611954;
	sub_8264FB38(ctx, base);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x826119e0
	goto loc_826119E0;
loc_8261195C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82a2e8a0
	ctx.lr = 0x82611968;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82a2e8a0
	ctx.lr = 0x82611978;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1052(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1052);
	// bl 0x8264fb38
	ctx.lr = 0x82611988;
	sub_8264FB38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82a2e8a0
	ctx.lr = 0x82611994;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82a2e8a0
	ctx.lr = 0x826119A4;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1056(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1056);
	// bl 0x8264fb38
	ctx.lr = 0x826119B4;
	sub_8264FB38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82a2e8a0
	ctx.lr = 0x826119C0;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x82a2e8a0
	ctx.lr = 0x826119D0;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1060(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1060);
	// bl 0x8264fb38
	ctx.lr = 0x826119E0;
	sub_8264FB38(ctx, base);
loc_826119E0:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplwi cr6,r24,7
	cr6.compare<uint32_t>(ctx.r24.u32, 7, xer);
	// blt cr6,0x82611880
	if (cr6.lt) goto loc_82611880;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624a50
	ctx.lr = 0x826119F4;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82611a14
	if (!cr6.eq) goto loc_82611A14;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624a60
	ctx.lr = 0x82611A08;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82611a78
	if (cr6.eq) goto loc_82611A78;
loc_82611A14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x82611A1C;
	sub_82A2E7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a18368
	ctx.lr = 0x82611A28;
	sub_82A18368(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82611A3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82611a78
	if (cr6.eq) goto loc_82611A78;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624ae0
	ctx.lr = 0x82611A50;
	sub_82624AE0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82627e58
	ctx.lr = 0x82611A58;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82611a78
	if (cr6.eq) goto loc_82611A78;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624ae0
	ctx.lr = 0x82611A6C;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82628658
	ctx.lr = 0x82611A78;
	sub_82628658(ctx, base);
loc_82611A78:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82611A80"))) PPC_WEAK_FUNC(sub_82611A80);
PPC_FUNC_IMPL(__imp__sub_82611A80) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82611ac0
	if (!cr6.eq) goto loc_82611AC0;
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
loc_82611AC0:
	// bl 0x82a181b8
	ctx.lr = 0x82611AC4;
	sub_82A181B8(ctx, base);
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// bgt cr6,0x82611bb0
	if (cr6.gt) goto loc_82611BB0;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82611b08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82611B08;
	// bdzf 4*cr6+eq,0x82611b24
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82611B24;
	// bdzf 4*cr6+eq,0x82611b40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82611B40;
	// bdzf 4*cr6+eq,0x82611b5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82611B5C;
	// bdzf 4*cr6+eq,0x82611b78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82611B78;
	// bne cr6,0x82611b94
	if (!cr6.eq) goto loc_82611B94;
	// bl 0x82a2ee50
	ctx.lr = 0x82611AF0;
	sub_82A2EE50(ctx, base);
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
loc_82611B08:
	// bl 0x82a2ee50
	ctx.lr = 0x82611B0C;
	sub_82A2EE50(ctx, base);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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
loc_82611B24:
	// bl 0x82a2ee50
	ctx.lr = 0x82611B28;
	sub_82A2EE50(ctx, base);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
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
loc_82611B40:
	// bl 0x82a2ee50
	ctx.lr = 0x82611B44;
	sub_82A2EE50(ctx, base);
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
loc_82611B5C:
	// bl 0x82a2ee50
	ctx.lr = 0x82611B60;
	sub_82A2EE50(ctx, base);
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
loc_82611B78:
	// bl 0x82a2ee50
	ctx.lr = 0x82611B7C;
	sub_82A2EE50(ctx, base);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
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
loc_82611B94:
	// bl 0x82a2ee50
	ctx.lr = 0x82611B98;
	sub_82A2EE50(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
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
loc_82611BB0:
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

__attribute__((alias("__imp__sub_82611BC8"))) PPC_WEAK_FUNC(sub_82611BC8);
PPC_FUNC_IMPL(__imp__sub_82611BC8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-344
	ctx.r10.s64 = ctx.r11.s64 + -344;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82611578
	ctx.lr = 0x82611BF4;
	sub_82611578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x82611BFC;
	sub_82627660(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82611c14
	if (cr6.eq) goto loc_82611C14;
	// bl 0x82416268
	ctx.lr = 0x82611C10;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82611C14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82611C2C"))) PPC_WEAK_FUNC(sub_82611C2C);
PPC_FUNC_IMPL(__imp__sub_82611C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82611C30"))) PPC_WEAK_FUNC(sub_82611C30);
PPC_FUNC_IMPL(__imp__sub_82611C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82611C38;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82611ce0
	if (cr6.eq) goto loc_82611CE0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82611ce0
	if (cr6.eq) goto loc_82611CE0;
	// bl 0x82624b08
	ctx.lr = 0x82611C5C;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82611ce0
	if (!cr6.eq) goto loc_82611CE0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82626408
	ctx.lr = 0x82611C78;
	sub_82626408(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82611c90
	if (cr6.eq) goto loc_82611C90;
	// lbz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1064);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82611ca4
	if (!cr6.eq) goto loc_82611CA4;
loc_82611C90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b20
	ctx.lr = 0x82611C98;
	sub_82624B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82611ce0
	if (cr6.eq) goto loc_82611CE0;
loc_82611CA4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,1000(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82611a80
	ctx.lr = 0x82611CB4;
	sub_82611A80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82627ef8
	ctx.lr = 0x82611CC4;
	sub_82627EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x82611CCC;
	sub_82624A08(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82624c98
	ctx.lr = 0x82611CE0;
	sub_82624C98(ctx, base);
loc_82611CE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82611CE8"))) PPC_WEAK_FUNC(sub_82611CE8);
PPC_FUNC_IMPL(__imp__sub_82611CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-24636
	ctx.r9.s64 = ctx.r10.s64 + -24636;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825aa080
	ctx.lr = 0x82611D2C;
	sub_825AA080(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82611d4c
	if (!cr6.eq) goto loc_82611D4C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r3,r10,4
	xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r3.s64 = ctx.r10.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// beq 0x82611d7c
	if (cr0.eq) goto loc_82611D7C;
loc_82611D4C:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82611d6c
	if (cr6.lt) goto loc_82611D6C;
	// bl 0x82a181b8
	ctx.lr = 0x82611D58;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x82611D5C;
	sub_82A2E7C0(ctx, base);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82611D6C:
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 & ctx.r3.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
loc_82611D7C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82611D90;
	sub_825E0CF8(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82611db0
	if (cr6.eq) goto loc_82611DB0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82611DB0;
	sub_8353F3B8(ctx, base);
loc_82611DB0:
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

__attribute__((alias("__imp__sub_82611DCC"))) PPC_WEAK_FUNC(sub_82611DCC);
PPC_FUNC_IMPL(__imp__sub_82611DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82611DD0"))) PPC_WEAK_FUNC(sub_82611DD0);
PPC_FUNC_IMPL(__imp__sub_82611DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82611DD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 448);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r29,r3,444
	ctx.r29.s64 = ctx.r3.s64 + 444;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82611df8
	if (!cr6.eq) goto loc_82611DF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825aa080
	ctx.lr = 0x82611DF8;
	sub_825AA080(ctx, base);
loc_82611DF8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82611e18
	if (!cr6.eq) goto loc_82611E18;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-10208
	ctx.r9.s64 = ctx.r9.s64 + -10208;
	// stw r9,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r9.u32);
loc_82611E18:
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82611E24;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7e0
	ctx.lr = 0x82611E28;
	sub_82A2E7E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82611E30:
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// beq cr6,0x82611e48
	if (cr6.eq) goto loc_82611E48;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a193b0
	ctx.lr = 0x82611E48;
	sub_82A193B0(ctx, base);
loc_82611E48:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82611e30
	if (cr6.lt) goto loc_82611E30;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82611ec0
	if (cr6.eq) goto loc_82611EC0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_82611E6C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82611e6c
	if (!cr0.eq) goto loc_82611E6C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82611eb8
	if (!cr6.eq) goto loc_82611EB8;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x82611E98;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-29960
	ctx.r5.s64 = ctx.r11.s64 + -29960;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82611EB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82611EB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_82611EC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82611EC8"))) PPC_WEAK_FUNC(sub_82611EC8);
PPC_FUNC_IMPL(__imp__sub_82611EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82611ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82624a58
	ctx.lr = 0x82611EDC;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82611ef4
	if (cr6.eq) goto loc_82611EF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82611EF4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-24636
	ctx.r9.s64 = ctx.r10.s64 + -24636;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825aa080
	ctx.lr = 0x82611F1C;
	sub_825AA080(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82611f38
	if (!cr6.eq) goto loc_82611F38;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_82611F38:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82611F40;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f510
	ctx.lr = 0x82611F44;
	sub_82A2F510(ctx, base);
	// addi r29,r3,-1
	ctx.r29.s64 = ctx.r3.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82611F50;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f4d8
	ctx.lr = 0x82611F54;
	sub_82A2F4D8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// rlwinm r31,r7,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// bl 0x82624b08
	ctx.lr = 0x82611F7C;
	sub_82624B08(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82611fb0
	if (cr6.eq) goto loc_82611FB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624a58
	ctx.lr = 0x82611F90;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82611fb0
	if (!cr6.eq) goto loc_82611FB0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a8d40
	ctx.lr = 0x82611FA4;
	sub_825A8D40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82611FB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a8d40
	ctx.lr = 0x82611FB8;
	sub_825A8D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82611FC4"))) PPC_WEAK_FUNC(sub_82611FC4);
PPC_FUNC_IMPL(__imp__sub_82611FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82611FC8"))) PPC_WEAK_FUNC(sub_82611FC8);
PPC_FUNC_IMPL(__imp__sub_82611FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82611FD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82612078
	if (cr6.eq) goto loc_82612078;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82612078
	if (cr6.eq) goto loc_82612078;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82612078
	if (cr6.eq) goto loc_82612078;
	// bl 0x82624f78
	ctx.lr = 0x82611FF8;
	sub_82624F78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82612000;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x82612008;
	sub_82A2E7C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x82612014;
	sub_82A2E7E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x82612024;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x8261202C;
	sub_82624AE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,1064(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1064, ctx.r11.u8);
	// addi r30,r31,212
	ctx.r30.s64 = ctx.r31.s64 + 212;
	// stw r10,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r10.u32);
	// stb r11,1065(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1065, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826501e8
	ctx.lr = 0x8261204C;
	sub_826501E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x826501d8
	ctx.lr = 0x8261205C;
	sub_826501D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826501d8
	ctx.lr = 0x8261206C;
	sub_826501D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82611dd0
	ctx.lr = 0x82612078;
	sub_82611DD0(ctx, base);
loc_82612078:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82612080"))) PPC_WEAK_FUNC(sub_82612080);
PPC_FUNC_IMPL(__imp__sub_82612080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82612088;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce774
	ctx.lr = 0x82612090;
	__savefpr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82612638
	if (cr6.eq) goto loc_82612638;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82612638
	if (cr6.eq) goto loc_82612638;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82612638
	if (cr6.eq) goto loc_82612638;
	// bl 0x82a181b8
	ctx.lr = 0x826120C8;
	sub_82A181B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8264f470
	ctx.lr = 0x826120D4;
	sub_8264F470(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x826120E0;
	sub_82A2E7E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82624b98
	ctx.lr = 0x826120F4;
	sub_82624B98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8261211c
	if (!cr6.eq) goto loc_8261211C;
loc_82612104:
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82624af8
	ctx.lr = 0x8261210C;
	sub_82624AF8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7c0
	ctx.lr = 0x82612118;
	__restfpr_27(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8261211C:
	// bl 0x826249d8
	ctx.lr = 0x82612120;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612164
	if (cr6.eq) goto loc_82612164;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x82612134;
	sub_82A2E7E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8264f470
	ctx.lr = 0x82612140;
	sub_8264F470(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// bne cr6,0x82612164
	if (!cr6.eq) goto loc_82612164;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82624af8
	ctx.lr = 0x82612154;
	sub_82624AF8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7c0
	ctx.lr = 0x82612160;
	__restfpr_27(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82612164:
	// lbz r11,1064(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 1064);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82612268
	if (!cr6.eq) goto loc_82612268;
	// cmpw cr6,r24,r25
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r25.s32, xer);
	// bne cr6,0x82612184
	if (!cr6.eq) goto loc_82612184;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1064(r23)
	PPC_STORE_U8(ctx.r23.u32 + 1064, ctx.r11.u8);
	// b 0x82612234
	goto loc_82612234;
loc_82612184:
	// cmpwi cr6,r24,255
	cr6.compare<int32_t>(ctx.r24.s32, 255, xer);
	// beq cr6,0x82612234
	if (cr6.eq) goto loc_82612234;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82612198;
	sub_82A0C788(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82612638
	if (cr6.eq) goto loc_82612638;
	// lwz r10,-3564(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lfs f31,1380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1380);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,1388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lfs f29,8144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8144);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,8152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x82a2ee50
	ctx.lr = 0x826121C4;
	sub_82A2EE50(ctx, base);
	// addi r30,r3,76
	ctx.r30.s64 = ctx.r3.s64 + 76;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x826121D0;
	sub_82A2EE50(ctx, base);
	// addi r31,r23,444
	ctx.r31.s64 = ctx.r23.s64 + 444;
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x825bb510
	ctx.lr = 0x826121E8;
	sub_825BB510(ctx, base);
	// fsubs f12,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// fsubs f11,f28,f30
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f27
	cr6.compare(ctx.f9.f64, ctx.f27.f64);
	// bge cr6,0x82612214
	if (!cr6.lt) goto loc_82612214;
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// ori r5,r5,129
	ctx.r5.u64 = ctx.r5.u64 | 129;
	// bl 0x82a18350
	ctx.lr = 0x82612210;
	sub_82A18350(ctx, base);
	// b 0x82612218
	goto loc_82612218;
loc_82612214:
	// bl 0x82a18368
	ctx.lr = 0x82612218;
	sub_82A18368(ctx, base);
loc_82612218:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612234
	if (cr6.eq) goto loc_82612234;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825a8ca0
	ctx.lr = 0x8261222C;
	sub_825A8CA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82612234:
	// cmpw cr6,r24,r25
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r25.s32, xer);
	// beq cr6,0x82612638
	if (cr6.eq) goto loc_82612638;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x82612244;
	sub_82A2E7C0(ctx, base);
	// cmpw cr6,r24,r3
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r3.s32, xer);
	// beq cr6,0x82612638
	if (cr6.eq) goto loc_82612638;
loc_8261224C:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82624af8
	ctx.lr = 0x82612258;
	sub_82624AF8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7c0
	ctx.lr = 0x82612264;
	__restfpr_27(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82612268:
	// lbz r11,1065(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 1065);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826123cc
	if (!cr6.eq) goto loc_826123CC;
	// cmpw cr6,r24,r25
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r25.s32, xer);
	// beq cr6,0x8261228c
	if (cr6.eq) goto loc_8261228C;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82624af8
	ctx.lr = 0x82612288;
	sub_82624AF8(ctx, base);
	// b 0x826122b4
	goto loc_826122B4;
loc_8261228C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8264f710
	ctx.lr = 0x82612298;
	sub_8264F710(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x826122b4
	if (!cr6.eq) goto loc_826122B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,1065(r23)
	PPC_STORE_U8(ctx.r23.u32 + 1065, ctx.r11.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82611dd0
	ctx.lr = 0x826122B4;
	sub_82611DD0(ctx, base);
loc_826122B4:
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r10,32384
	ctx.r29.s64 = ctx.r10.s64 + 32384;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// lfs f0,8144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_826122F0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82611720
	ctx.lr = 0x82612300;
	sub_82611720(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612370
	if (cr6.eq) goto loc_82612370;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a2e8a0
	ctx.lr = 0x82612318;
	sub_82A2E8A0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a2e8a0
	ctx.lr = 0x82612328;
	sub_82A2E8A0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x82a2e8a0
	ctx.lr = 0x82612338;
	sub_82A2E8A0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82a2e8a0
	ctx.lr = 0x82612348;
	sub_82A2E8A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rldicr r4,r27,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// bl 0x8264fe78
	ctx.lr = 0x82612364;
	sub_8264FE78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82612394
	if (!cr6.eq) goto loc_82612394;
loc_82612370:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r11,r29,120
	ctx.r11.s64 = ctx.r29.s64 + 120;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x826122f0
	if (cr6.lt) goto loc_826122F0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7c0
	ctx.lr = 0x82612390;
	__restfpr_27(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82612394:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82624b98
	ctx.lr = 0x826123A4;
	sub_82624B98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612104
	if (cr6.eq) goto loc_82612104;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82624af8
	ctx.lr = 0x826123BC;
	sub_82624AF8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7c0
	ctx.lr = 0x826123C8;
	__restfpr_27(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_826123CC:
	// addi r31,r23,444
	ctx.r31.s64 = ctx.r23.s64 + 444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bb510
	ctx.lr = 0x826123D8;
	sub_825BB510(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82a18368
	ctx.lr = 0x826123E0;
	sub_82A18368(ctx, base);
	// lwz r11,460(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 460);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826123fc
	if (cr6.eq) goto loc_826123FC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825a8ca0
	ctx.lr = 0x826123F4;
	sub_825A8CA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_826123FC:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bge cr6,0x8261240c
	if (!cr6.lt) goto loc_8261240C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82612434
	goto loc_82612434;
loc_8261240C:
	// cmpwi cr6,r24,11
	cr6.compare<int32_t>(ctx.r24.s32, 11, xer);
	// bge cr6,0x8261241c
	if (!cr6.lt) goto loc_8261241C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82612434
	goto loc_82612434;
loc_8261241C:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r24
	xer.ca = ctx.r24.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	// eqv r9,r11,r24
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r24.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
loc_82612434:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x82612444
	if (!cr6.lt) goto loc_82612444;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8261246c
	goto loc_8261246C;
loc_82612444:
	// cmpwi cr6,r25,11
	cr6.compare<int32_t>(ctx.r25.s32, 11, xer);
	// bge cr6,0x82612454
	if (!cr6.lt) goto loc_82612454;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8261246c
	goto loc_8261246C;
loc_82612454:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r25
	xer.ca = ctx.r25.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r25.s64 - ctx.r11.s64;
	// eqv r8,r11,r25
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r25.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_8261246C:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x8261224c
	if (!cr6.eq) goto loc_8261224C;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r10,32384
	ctx.r29.s64 = ctx.r10.s64 + 32384;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// lfs f13,8152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,8144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_826124B0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82611720
	ctx.lr = 0x826124C0;
	sub_82611720(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612530
	if (cr6.eq) goto loc_82612530;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a2e8a0
	ctx.lr = 0x826124D8;
	sub_82A2E8A0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a2e8a0
	ctx.lr = 0x826124E8;
	sub_82A2E8A0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x82a2e8a0
	ctx.lr = 0x826124F8;
	sub_82A2E8A0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82a2e8a0
	ctx.lr = 0x82612508;
	sub_82A2E8A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rldicr r4,r27,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// bl 0x8264fe78
	ctx.lr = 0x82612524;
	sub_8264FE78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82612554
	if (!cr6.eq) goto loc_82612554;
loc_82612530:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r11,r29,120
	ctx.r11.s64 = ctx.r29.s64 + 120;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x826124b0
	if (cr6.lt) goto loc_826124B0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7c0
	ctx.lr = 0x82612550;
	__restfpr_27(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82612554:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82624b18
	ctx.lr = 0x82612560;
	sub_82624B18(ctx, base);
	// stw r30,1000(r23)
	PPC_STORE_U32(ctx.r23.u32 + 1000, ctx.r30.u32);
	// cmpw cr6,r24,r25
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r25.s32, xer);
	// beq cr6,0x826125fc
	if (cr6.eq) goto loc_826125FC;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bge cr6,0x8261257c
	if (!cr6.lt) goto loc_8261257C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x826125a4
	goto loc_826125A4;
loc_8261257C:
	// cmpwi cr6,r24,11
	cr6.compare<int32_t>(ctx.r24.s32, 11, xer);
	// bge cr6,0x8261258c
	if (!cr6.lt) goto loc_8261258C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x826125a4
	goto loc_826125A4;
loc_8261258C:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r24
	xer.ca = ctx.r24.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	// eqv r9,r11,r24
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r24.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
loc_826125A4:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x826125b4
	if (!cr6.lt) goto loc_826125B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826125dc
	goto loc_826125DC;
loc_826125B4:
	// cmpwi cr6,r25,11
	cr6.compare<int32_t>(ctx.r25.s32, 11, xer);
	// bge cr6,0x826125c4
	if (!cr6.lt) goto loc_826125C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826125dc
	goto loc_826125DC;
loc_826125C4:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r25
	xer.ca = ctx.r25.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r25.s64 - ctx.r11.s64;
	// eqv r8,r11,r25
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r25.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_826125DC:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x826125fc
	if (!cr6.eq) goto loc_826125FC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x826125EC;
	sub_82A2EE50(ctx, base);
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82627ef8
	ctx.lr = 0x826125FC;
	sub_82627EF8(ctx, base);
loc_826125FC:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82612610;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82612638
	if (cr6.eq) goto loc_82612638;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82612624;
	sub_82A2EE50(ctx, base);
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82627f98
	ctx.lr = 0x82612638;
	sub_82627F98(ctx, base);
loc_82612638:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7c0
	ctx.lr = 0x82612644;
	__restfpr_27(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82612648"))) PPC_WEAK_FUNC(sub_82612648);
PPC_FUNC_IMPL(__imp__sub_82612648) {
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
	// bl 0x82624ae8
	ctx.lr = 0x82612660;
	sub_82624AE8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1014(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1014, ctx.r11.u8);
	// stb r11,1012(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1012, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,1013(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1013, ctx.r11.u8);
	// stfs f0,1000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// stfs f0,1004(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1004, temp.u32);
	// stfs f0,1008(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1008, temp.u32);
	// bl 0x82627e68
	ctx.lr = 0x8261268C;
	sub_82627E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x82612694;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_826126A8"))) PPC_WEAK_FUNC(sub_826126A8);
PPC_FUNC_IMPL(__imp__sub_826126A8) {
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
	// bl 0x82624ae8
	ctx.lr = 0x826126C0;
	sub_82624AE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1012(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1012, ctx.r11.u8);
	// stb r11,1013(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1013, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_826126E0"))) PPC_WEAK_FUNC(sub_826126E0);
PPC_FUNC_IMPL(__imp__sub_826126E0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826127ec
	if (cr6.eq) goto loc_826127EC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826127ec
	if (cr6.eq) goto loc_826127EC;
	// bl 0x82624b08
	ctx.lr = 0x82612710;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8261272c
	if (cr6.eq) goto loc_8261272C;
	// bl 0x82624b10
	ctx.lr = 0x82612724;
	sub_82624B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826127c8
	goto loc_826127C8;
loc_8261272C:
	// bl 0x826249f0
	ctx.lr = 0x82612730;
	sub_826249F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8261275c
	if (cr6.eq) goto loc_8261275C;
	// lbz r11,1013(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1013);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826127c4
	if (!cr6.eq) goto loc_826127C4;
	// lbz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1012);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826127c4
	if (!cr6.eq) goto loc_826127C4;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x826127c8
	goto loc_826127C8;
loc_8261275C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a00
	ctx.lr = 0x82612764;
	sub_82624A00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbz r11,1013(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1013);
	// beq cr6,0x82612784
	if (cr6.eq) goto loc_82612784;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826127c4
	if (!cr6.eq) goto loc_826127C4;
	// lbz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1012);
	// b 0x826127bc
	goto loc_826127BC;
loc_82612784:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82612798
	if (!cr6.eq) goto loc_82612798;
	// lbz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1012);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826127ec
	if (cr6.eq) goto loc_826127EC;
loc_82612798:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82650b40
	ctx.lr = 0x826127A0;
	sub_82650B40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826127ec
	if (cr6.eq) goto loc_826127EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82626258
	ctx.lr = 0x826127B8;
	sub_82626258(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_826127BC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826127ec
	if (cr6.eq) goto loc_826127EC;
loc_826127C4:
	// li r4,5
	ctx.r4.s64 = 5;
loc_826127C8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x826127D0;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826127EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826127EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82612804"))) PPC_WEAK_FUNC(sub_82612804);
PPC_FUNC_IMPL(__imp__sub_82612804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82612808"))) PPC_WEAK_FUNC(sub_82612808);
PPC_FUNC_IMPL(__imp__sub_82612808) {
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
	// bl 0x82624a68
	ctx.lr = 0x82612820;
	sub_82624A68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82612854
	if (!cr6.eq) goto loc_82612854;
	// lbz r11,1014(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1014);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8261284c
	if (cr6.eq) goto loc_8261284C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x82612840;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82612854
	if (!cr6.eq) goto loc_82612854;
loc_8261284C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82612858
	goto loc_82612858;
loc_82612854:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82612858:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82612870"))) PPC_WEAK_FUNC(sub_82612870);
PPC_FUNC_IMPL(__imp__sub_82612870) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82628820
	ctx.lr = 0x82612890;
	sub_82628820(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r31,1000
	ctx.r11.s64 = ctx.r31.s64 + 1000;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,1000(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// stfs f31,1004(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1004, temp.u32);
	// stfs f31,1008(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1008, temp.u32);
	// stb r30,1012(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1012, ctx.r30.u8);
	// bl 0x82624ae8
	ctx.lr = 0x826128C4;
	sub_82624AE8(ctx, base);
	// stb r30,1014(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1014, ctx.r30.u8);
	// stb r30,1012(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1012, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,1013(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1013, ctx.r30.u8);
	// stfs f31,1000(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// stfs f31,1004(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1004, temp.u32);
	// stfs f31,1008(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1008, temp.u32);
	// bl 0x82627e68
	ctx.lr = 0x826128E4;
	sub_82627E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x826128EC;
	sub_82628208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261290C"))) PPC_WEAK_FUNC(sub_8261290C);
PPC_FUNC_IMPL(__imp__sub_8261290C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82612910"))) PPC_WEAK_FUNC(sub_82612910);
PPC_FUNC_IMPL(__imp__sub_82612910) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x82612934;
	sub_82624CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8261293C;
	sub_82627660(ctx, base);
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

__attribute__((alias("__imp__sub_82612950"))) PPC_WEAK_FUNC(sub_82612950);
PPC_FUNC_IMPL(__imp__sub_82612950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82612958;
	__savegprlr_27(ctx, base);
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82624970
	ctx.lr = 0x82612970;
	sub_82624970(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8261297C;
	sub_82A181B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2f4e8
	ctx.lr = 0x82612984;
	sub_82A2F4E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627b88
	ctx.lr = 0x82612998;
	sub_82627B88(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,6112(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82612a38
	if (cr6.eq) goto loc_82612A38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x826129B4;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x826129B8;
	sub_82A2E7C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826129cc
	if (cr6.lt) goto loc_826129CC;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x826129d0
	if (cr6.lt) goto loc_826129D0;
loc_826129CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826129D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612a38
	if (cr6.eq) goto loc_82612A38;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826129f4
	if (cr6.lt) goto loc_826129F4;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x826129f4
	if (cr6.lt) goto loc_826129F4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// blt cr6,0x82612a10
	if (cr6.lt) goto loc_82612A10;
loc_826129F4:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1004(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1004, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// b 0x82612a28
	goto loc_82612A28;
loc_82612A10:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,1000(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// lfs f12,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1004(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1004, temp.u32);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
loc_82612A28:
	// stfs f11,1008(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1008, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628110
	ctx.lr = 0x82612A34;
	sub_82628110(ctx, base);
	// stb r3,1014(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1014, ctx.r3.u8);
loc_82612A38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82612A40"))) PPC_WEAK_FUNC(sub_82612A40);
PPC_FUNC_IMPL(__imp__sub_82612A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82612A48;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82612d74
	if (cr6.eq) goto loc_82612D74;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82612d74
	if (cr6.eq) goto loc_82612D74;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r27,432(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82612d74
	if (cr6.eq) goto loc_82612D74;
	// lwz r10,6112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82612d74
	if (cr6.eq) goto loc_82612D74;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82612d74
	if (cr6.eq) goto loc_82612D74;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82612A9C;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x82612AA4;
	sub_82A2E7C0(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82612abc
	if (cr6.lt) goto loc_82612ABC;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x82612ac0
	if (cr6.lt) goto loc_82612AC0;
loc_82612ABC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82612AC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612d74
	if (cr6.eq) goto loc_82612D74;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82612AE0;
	sub_82A22B40(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82612b60
	if (cr6.eq) goto loc_82612B60;
	// lbz r11,1012(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1012);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82612b60
	if (!cr6.eq) goto loc_82612B60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82612b2c
	if (!cr6.eq) goto loc_82612B2C;
	// stb r26,1013(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1013, ctx.r26.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82612b60
	if (!cr6.eq) goto loc_82612B60;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// srawi r10,r11,11
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 11;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82612b60
	if (cr6.eq) goto loc_82612B60;
	// stb r26,1012(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1012, ctx.r26.u8);
	// b 0x82612b60
	goto loc_82612B60;
loc_82612B2C:
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x82612b3c
	if (!cr6.eq) goto loc_82612B3C;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x82612b58
	goto loc_82612B58;
loc_82612B3C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82612b54
	if (cr6.eq) goto loc_82612B54;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82612b54
	if (cr6.eq) goto loc_82612B54;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82612b60
	if (!cr6.eq) goto loc_82612B60;
loc_82612B54:
	// li r4,9
	ctx.r4.s64 = 9;
loc_82612B58:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82624af8
	ctx.lr = 0x82612B60;
	sub_82624AF8(ctx, base);
loc_82612B60:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lbz r10,1013(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1013);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne cr6,0x82612bbc
	if (!cr6.eq) goto loc_82612BBC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a38be0
	ctx.lr = 0x82612B88;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612bbc
	if (cr6.eq) goto loc_82612BBC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a38be0
	ctx.lr = 0x82612BA4;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612bbc
	if (cr6.eq) goto loc_82612BBC;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82624af8
	ctx.lr = 0x82612BBC;
	sub_82624AF8(ctx, base);
loc_82612BBC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826249d8
	ctx.lr = 0x82612BC4;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612cf8
	if (cr6.eq) goto loc_82612CF8;
	// lbz r11,1012(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1012);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612ce4
	if (cr6.eq) goto loc_82612CE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a2ea90
	ctx.lr = 0x82612BEC;
	sub_82A2EA90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82612c90
	if (cr6.eq) goto loc_82612C90;
loc_82612BF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a18ac0
	ctx.lr = 0x82612C00;
	sub_82A18AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82612c24
	if (!cr6.eq) goto loc_82612C24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82a2ea90
	ctx.lr = 0x82612C18;
	sub_82A2EA90(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82612bf4
	if (cr6.lt) goto loc_82612BF4;
	// b 0x82612c90
	goto loc_82612C90;
loc_82612C24:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bgt cr6,0x82612c90
	if (cr6.gt) goto loc_82612C90;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82612c58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82612C58;
	// bdzf 4*cr6+eq,0x82612c68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82612C68;
	// bne cr6,0x82612c78
	if (!cr6.eq) goto loc_82612C78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82612C4C;
	sub_82A2EE50(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82612c84
	goto loc_82612C84;
loc_82612C58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82612C60;
	sub_82A2EE50(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82612c84
	goto loc_82612C84;
loc_82612C68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82612C70;
	sub_82A2EE50(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82612c84
	goto loc_82612C84;
loc_82612C78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82612C80;
	sub_82A2EE50(ctx, base);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_82612C84:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82627ef8
	ctx.lr = 0x82612C90;
	sub_82627EF8(ctx, base);
loc_82612C90:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82612cb4
	if (!cr6.eq) goto loc_82612CB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82612CA4;
	sub_82A2EE50(ctx, base);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82627ef8
	ctx.lr = 0x82612CB4;
	sub_82627EF8(ctx, base);
loc_82612CB4:
	// lbz r11,1014(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1014);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612d74
	if (cr6.eq) goto loc_82612D74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82612CC8;
	sub_82A2EE50(ctx, base);
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82627f98
	ctx.lr = 0x82612CDC;
	sub_82627F98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82612CE4:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82624af8
	ctx.lr = 0x82612CF0;
	sub_82624AF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82612CF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r28,568
	ctx.r10.s64 = ctx.r28.s64 + 568;
loc_82612D00:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82612d1c
	if (cr6.eq) goto loc_82612D1C;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r8,584(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 584);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82612d2c
	if (!cr6.eq) goto loc_82612D2C;
loc_82612D1C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82612d00
	if (cr6.lt) goto loc_82612D00;
	// b 0x82612d38
	goto loc_82612D38;
loc_82612D2C:
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82624af8
	ctx.lr = 0x82612D38;
	sub_82624AF8(ctx, base);
loc_82612D38:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82a2b4e0
	ctx.lr = 0x82612D44;
	sub_82A2B4E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82612d74
	if (cr6.lt) goto loc_82612D74;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x82612d74
	if (cr6.lt) goto loc_82612D74;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bge cr6,0x82612d74
	if (!cr6.lt) goto loc_82612D74;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// li r4,6
	ctx.r4.s64 = 6;
	// beq cr6,0x82612d6c
	if (cr6.eq) goto loc_82612D6C;
	// li r4,16
	ctx.r4.s64 = 16;
loc_82612D6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82624af8
	ctx.lr = 0x82612D74;
	sub_82624AF8(ctx, base);
loc_82612D74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82612D7C"))) PPC_WEAK_FUNC(sub_82612D7C);
PPC_FUNC_IMPL(__imp__sub_82612D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82612D80"))) PPC_WEAK_FUNC(sub_82612D80);
PPC_FUNC_IMPL(__imp__sub_82612D80) {
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
	// beq cr6,0x82612df4
	if (cr6.eq) goto loc_82612DF4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82612df4
	if (cr6.eq) goto loc_82612DF4;
	// bl 0x82624b08
	ctx.lr = 0x82612DA8;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82612df4
	if (!cr6.eq) goto loc_82612DF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249d8
	ctx.lr = 0x82612DBC;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612df4
	if (cr6.eq) goto loc_82612DF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249e8
	ctx.lr = 0x82612DD0;
	sub_826249E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82612df4
	if (!cr6.eq) goto loc_82612DF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x82612DE0;
	sub_82624A08(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82624c98
	ctx.lr = 0x82612DF4;
	sub_82624C98(ctx, base);
loc_82612DF4:
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

__attribute__((alias("__imp__sub_82612E08"))) PPC_WEAK_FUNC(sub_82612E08);
PPC_FUNC_IMPL(__imp__sub_82612E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82612E10;
	__savegprlr_27(ctx, base);
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82612f58
	if (cr6.eq) goto loc_82612F58;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82612f58
	if (cr6.eq) goto loc_82612F58;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82612f58
	if (cr6.eq) goto loc_82612F58;
	// bl 0x82624608
	ctx.lr = 0x82612E40;
	sub_82624608(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82612E60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lwz r11,-3564(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// lwz r8,6112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82612f58
	if (cr6.eq) goto loc_82612F58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82612E7C;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x82612E80;
	sub_82A2E7C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82612e98
	if (cr6.lt) goto loc_82612E98;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82612e9c
	if (cr6.lt) goto loc_82612E9C;
loc_82612E98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82612E9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612f58
	if (cr6.eq) goto loc_82612F58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x82612EB0;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82612ed0
	if (!cr6.eq) goto loc_82612ED0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x82612EC4;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612f18
	if (cr6.eq) goto loc_82612F18;
loc_82612ED0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82612EE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82612f18
	if (cr6.eq) goto loc_82612F18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e58
	ctx.lr = 0x82612EF8;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82612f18
	if (cr6.eq) goto loc_82612F18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x82612F0C;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x82612F18;
	sub_82628658(ctx, base);
loc_82612F18:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624608
	ctx.lr = 0x82612F2C;
	sub_82624608(ctx, base);
	// lbz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1012);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82612f54
	if (!cr6.eq) goto loc_82612F54;
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// ori r5,r5,434
	ctx.r5.u64 = ctx.r5.u64 | 434;
	// bl 0x82a18350
	ctx.lr = 0x82612F4C;
	sub_82A18350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82612F54:
	// bl 0x82a18368
	ctx.lr = 0x82612F58;
	sub_82A18368(ctx, base);
loc_82612F58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82612F60"))) PPC_WEAK_FUNC(sub_82612F60);
PPC_FUNC_IMPL(__imp__sub_82612F60) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x82612F8C;
	sub_82624CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x82612F94;
	sub_82627660(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82612fac
	if (cr6.eq) goto loc_82612FAC;
	// bl 0x82416268
	ctx.lr = 0x82612FA8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82612FAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82612FC4"))) PPC_WEAK_FUNC(sub_82612FC4);
PPC_FUNC_IMPL(__imp__sub_82612FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82612FC8"))) PPC_WEAK_FUNC(sub_82612FC8);
PPC_FUNC_IMPL(__imp__sub_82612FC8) {
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
	// bl 0x82624ae8
	ctx.lr = 0x82612FE0;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82624b18
	ctx.lr = 0x82612FEC;
	sub_82624B18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,1148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1148, ctx.r11.u8);
	// stb r10,1149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1149, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1150(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1150, ctx.r11.u8);
	// stb r11,1151(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1151, ctx.r11.u8);
	// stw r9,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r9.u32);
	// bl 0x82628208
	ctx.lr = 0x82613014;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_82613028"))) PPC_WEAK_FUNC(sub_82613028);
PPC_FUNC_IMPL(__imp__sub_82613028) {
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
	// bl 0x82624ae8
	ctx.lr = 0x82613040;
	sub_82624AE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x8261304C;
	sub_82624B18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,1150(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1150, ctx.r11.u8);
	// stb r10,1149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1149, ctx.r10.u8);
	// stb r11,1151(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1151, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82613074"))) PPC_WEAK_FUNC(sub_82613074);
PPC_FUNC_IMPL(__imp__sub_82613074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82613078"))) PPC_WEAK_FUNC(sub_82613078);
PPC_FUNC_IMPL(__imp__sub_82613078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82613080;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82613100
	if (cr6.eq) goto loc_82613100;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82613100
	if (cr6.eq) goto loc_82613100;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82613100
	if (cr6.eq) goto loc_82613100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a47fd0
	ctx.lr = 0x826130A8;
	sub_82A47FD0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_826130AC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x826130bc
	if (cr6.lt) goto loc_826130BC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_826130BC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8357ece0
	ctx.lr = 0x826130CC;
	sub_8357ECE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x831ce980
	ctx.lr = 0x826130DC;
	sub_831CE980(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a47d88
	ctx.lr = 0x826130E8;
	sub_82A47D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a322e8
	ctx.lr = 0x826130F4;
	sub_82A322E8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x826130ac
	if (cr6.lt) goto loc_826130AC;
loc_82613100:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82613108"))) PPC_WEAK_FUNC(sub_82613108);
PPC_FUNC_IMPL(__imp__sub_82613108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82613110;
	__savegprlr_27(ctx, base);
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82624970
	ctx.lr = 0x82613128;
	sub_82624970(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82613134;
	sub_82A181B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2f4e8
	ctx.lr = 0x8261313C;
	sub_82A2F4E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82627b88
	ctx.lr = 0x82613150;
	sub_82627B88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624970
	ctx.lr = 0x82613158;
	sub_82624970(ctx, base);
	// cmplwi cr6,r3,9
	cr6.compare<uint32_t>(ctx.r3.u32, 9, xer);
	// bgt cr6,0x826131c0
	if (cr6.gt) goto loc_826131C0;
	// lis r12,-32159
	ctx.r12.s64 = -2107572224;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,12664
	ctx.r12.s64 = ctx.r12.s64 + 12664;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_826131A0;
	case 1:
		goto loc_826131A0;
	case 2:
		goto loc_826131A0;
	case 3:
		goto loc_826131A0;
	case 4:
		goto loc_826131A8;
	case 5:
		goto loc_826131A8;
	case 6:
		goto loc_826131B0;
	case 7:
		goto loc_826131B0;
	case 8:
		goto loc_826131B8;
	case 9:
		goto loc_826131B8;
	default:
		return;
	}
	// lwz r19,12704(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12704);
	// lwz r19,12704(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12704);
	// lwz r19,12704(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12704);
	// lwz r19,12704(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12704);
	// lwz r19,12712(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12712);
	// lwz r19,12712(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12712);
	// lwz r19,12720(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12720);
	// lwz r19,12720(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12720);
	// lwz r19,12728(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12728);
	// lwz r19,12728(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12728);
loc_826131A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826131bc
	goto loc_826131BC;
loc_826131A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826131bc
	goto loc_826131BC;
loc_826131B0:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x826131bc
	goto loc_826131BC;
loc_826131B8:
	// li r11,3
	ctx.r11.s64 = 3;
loc_826131BC:
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
loc_826131C0:
	// lwz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x826131dc
	if (!cr6.eq) goto loc_826131DC;
	// bl 0x824eecc0
	ctx.lr = 0x826131D4;
	sub_824EECC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_826131DC:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,272
	ctx.r8.s64 = ctx.r10.s64 + 272;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x825832f8
	ctx.lr = 0x826131F0;
	sub_825832F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826131F8"))) PPC_WEAK_FUNC(sub_826131F8);
PPC_FUNC_IMPL(__imp__sub_826131F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82613200;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8261325c
	if (cr6.eq) goto loc_8261325C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8261325c
	if (cr6.eq) goto loc_8261325C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8261325c
	if (cr6.eq) goto loc_8261325C;
	// bl 0x82624f78
	ctx.lr = 0x82613230;
	sub_82624F78(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82613250;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18b20
	ctx.lr = 0x8261325C;
	sub_82A18B20(ctx, base);
loc_8261325C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82613264"))) PPC_WEAK_FUNC(sub_82613264);
PPC_FUNC_IMPL(__imp__sub_82613264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82613268"))) PPC_WEAK_FUNC(sub_82613268);
PPC_FUNC_IMPL(__imp__sub_82613268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1148(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8261327c
	if (cr6.eq) goto loc_8261327C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8261327C:
	// b 0x82624a68
	sub_82624A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82613280"))) PPC_WEAK_FUNC(sub_82613280);
PPC_FUNC_IMPL(__imp__sub_82613280) {
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
	// bl 0x82624a58
	ctx.lr = 0x82613298;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826132b0
	if (!cr6.eq) goto loc_826132B0;
	// lbz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826132dc
	if (cr6.eq) goto loc_826132DC;
loc_826132B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x826132B8;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x826132C4;
	sub_82628658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e58
	ctx.lr = 0x826132CC;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826132e0
	if (!cr6.eq) goto loc_826132E0;
loc_826132DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826132E0:
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

__attribute__((alias("__imp__sub_826132F4"))) PPC_WEAK_FUNC(sub_826132F4);
PPC_FUNC_IMPL(__imp__sub_826132F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826132F8"))) PPC_WEAK_FUNC(sub_826132F8);
PPC_FUNC_IMPL(__imp__sub_826132F8) {
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
	// bl 0x8264ecf8
	ctx.lr = 0x82613310;
	sub_8264ECF8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,376
	ctx.r10.s64 = ctx.r11.s64 + 376;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82624ae8
	ctx.lr = 0x82613324;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82624b18
	ctx.lr = 0x82613330;
	sub_82624B18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r11,1148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1148, ctx.r11.u8);
	// stb r9,1149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1149, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1150(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1150, ctx.r11.u8);
	// stb r11,1151(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1151, ctx.r11.u8);
	// stw r8,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r8.u32);
	// bl 0x82628208
	ctx.lr = 0x82613358;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_82613370"))) PPC_WEAK_FUNC(sub_82613370);
PPC_FUNC_IMPL(__imp__sub_82613370) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,376
	ctx.r10.s64 = ctx.r11.s64 + 376;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8264ed98
	ctx.lr = 0x82613394;
	sub_8264ED98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264f1c0
	ctx.lr = 0x8261339C;
	sub_8264F1C0(ctx, base);
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

__attribute__((alias("__imp__sub_826133B0"))) PPC_WEAK_FUNC(sub_826133B0);
PPC_FUNC_IMPL(__imp__sub_826133B0) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82613504
	if (cr6.eq) goto loc_82613504;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82613504
	if (cr6.eq) goto loc_82613504;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,432(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82613504
	if (cr6.eq) goto loc_82613504;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82613504
	if (cr6.eq) goto loc_82613504;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a22b40
	ctx.lr = 0x82613404;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82613428
	if (!cr6.gt) goto loc_82613428;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x82613420
	if (!cr6.gt) goto loc_82613420;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x82613428
	if (!cr6.eq) goto loc_82613428;
loc_82613420:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8261342c
	goto loc_8261342C;
loc_82613428:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8261342C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8261345c
	if (!cr6.eq) goto loc_8261345C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8261344c
	if (!cr6.gt) goto loc_8261344C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82613450
	if (!cr6.gt) goto loc_82613450;
loc_8261344C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82613450:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82613504
	if (cr6.eq) goto loc_82613504;
loc_8261345C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18b18
	ctx.lr = 0x82613464;
	sub_82A18B18(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x826134f8
	if (cr6.eq) goto loc_826134F8;
	// lwz r10,1144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x826134f8
	if (cr6.gt) goto loc_826134F8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x826134a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826134A8;
	// bdzf 4*cr6+eq,0x826134e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826134E0;
	// bne cr6,0x826134c0
	if (!cr6.eq) goto loc_826134C0;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(ctx.r11.s32, 20, xer);
	// beq cr6,0x826134a0
	if (cr6.eq) goto loc_826134A0;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, xer);
	// bne cr6,0x826134f8
	if (!cr6.eq) goto loc_826134F8;
loc_826134A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82613508
	goto loc_82613508;
loc_826134A8:
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// beq cr6,0x826134b8
	if (cr6.eq) goto loc_826134B8;
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// bne cr6,0x826134f8
	if (!cr6.eq) goto loc_826134F8;
loc_826134B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82613508
	goto loc_82613508;
loc_826134C0:
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(ctx.r11.s32, 20, xer);
	// beq cr6,0x826134f0
	if (cr6.eq) goto loc_826134F0;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, xer);
	// beq cr6,0x826134f0
	if (cr6.eq) goto loc_826134F0;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// beq cr6,0x826134f0
	if (cr6.eq) goto loc_826134F0;
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// beq cr6,0x826134f0
	if (cr6.eq) goto loc_826134F0;
loc_826134E0:
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(ctx.r11.s32, 21, xer);
	// beq cr6,0x826134f0
	if (cr6.eq) goto loc_826134F0;
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// bne cr6,0x826134f8
	if (!cr6.eq) goto loc_826134F8;
loc_826134F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82613508
	goto loc_82613508;
loc_826134F8:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624af8
	ctx.lr = 0x82613504;
	sub_82624AF8(ctx, base);
loc_82613504:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82613508:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82613520"))) PPC_WEAK_FUNC(sub_82613520);
PPC_FUNC_IMPL(__imp__sub_82613520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82613528;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8261373c
	if (cr6.eq) goto loc_8261373C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8261373c
	if (cr6.eq) goto loc_8261373C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8261373c
	if (cr6.eq) goto loc_8261373C;
	// bl 0x82a181b8
	ctx.lr = 0x82613560;
	sub_82A181B8(ctx, base);
	// lbz r11,1150(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1150);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82613588
	if (!cr6.eq) goto loc_82613588;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826133b0
	ctx.lr = 0x82613580;
	sub_826133B0(ctx, base);
	// stb r3,1150(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1150, ctx.r3.u8);
	// b 0x826135d0
	goto loc_826135D0;
loc_82613588:
	// lbz r11,1151(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1151);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826135d0
	if (!cr6.eq) goto loc_826135D0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264efe8
	ctx.lr = 0x826135A4;
	sub_8264EFE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,1151(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1151, ctx.r3.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826135d0
	if (cr6.eq) goto loc_826135D0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x826135BC;
	sub_82A2EE50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82627ef8
	ctx.lr = 0x826135D0;
	sub_82627EF8(ctx, base);
loc_826135D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249d8
	ctx.lr = 0x826135D8;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82613654
	if (cr6.eq) goto loc_82613654;
	// bl 0x826249e8
	ctx.lr = 0x826135EC;
	sub_826249E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82613644
	if (!cr6.eq) goto loc_82613644;
	// lbz r11,1150(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1150);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82613634
	if (cr6.eq) goto loc_82613634;
	// lbz r11,1151(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1151);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82613634
	if (cr6.eq) goto loc_82613634;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x82613618;
	sub_82624B18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82613620;
	sub_82A2EE50(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82627ef8
	ctx.lr = 0x82613630;
	sub_82627EF8(ctx, base);
	// b 0x82613688
	goto loc_82613688;
loc_82613634:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624af8
	ctx.lr = 0x82613640;
	sub_82624AF8(ctx, base);
	// b 0x82613688
	goto loc_82613688;
loc_82613644:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624af8
	ctx.lr = 0x82613650;
	sub_82624AF8(ctx, base);
	// b 0x82613688
	goto loc_82613688;
loc_82613654:
	// bl 0x826249f0
	ctx.lr = 0x82613658;
	sub_826249F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82613688
	if (cr6.eq) goto loc_82613688;
	// lbz r11,1151(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1151);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82613680
	if (!cr6.eq) goto loc_82613680;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82624af8
	ctx.lr = 0x8261367C;
	sub_82624AF8(ctx, base);
	// b 0x82613688
	goto loc_82613688;
loc_82613680:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82624b18
	ctx.lr = 0x82613688;
	sub_82624B18(ctx, base);
loc_82613688:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b20
	ctx.lr = 0x82613690;
	sub_82624B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8261373c
	if (!cr6.eq) goto loc_8261373C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
loc_826136A4:
	// lbzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826136c0
	if (cr6.eq) goto loc_826136C0;
	// add r10,r4,r31
	ctx.r10.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lbz r9,584(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 584);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826136d4
	if (!cr6.eq) goto loc_826136D4;
loc_826136C0:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x826136a4
	if (cr6.lt) goto loc_826136A4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_826136D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ea60
	ctx.lr = 0x826136DC;
	sub_82A2EA60(ctx, base);
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82613734
	if (cr6.eq) goto loc_82613734;
	// lbz r11,1150(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1150);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82613724
	if (cr6.eq) goto loc_82613724;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82624b18
	ctx.lr = 0x82613700;
	sub_82624B18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82613708;
	sub_82A2EE50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82627ef8
	ctx.lr = 0x8261371C;
	sub_82627EF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82613724:
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82624af8
	ctx.lr = 0x8261372C;
	sub_82624AF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82613734:
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82624af8
	ctx.lr = 0x8261373C;
	sub_82624AF8(ctx, base);
loc_8261373C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82613744"))) PPC_WEAK_FUNC(sub_82613744);
PPC_FUNC_IMPL(__imp__sub_82613744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82613748"))) PPC_WEAK_FUNC(sub_82613748);
PPC_FUNC_IMPL(__imp__sub_82613748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82613750;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,1148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1148, ctx.r10.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82613798
	if (cr6.eq) goto loc_82613798;
	// bl 0x82a181b8
	ctx.lr = 0x82613780;
	sub_82A181B8(ctx, base);
	// bl 0x82a2ee50
	ctx.lr = 0x82613784;
	sub_82A2EE50(ctx, base);
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627f98
	ctx.lr = 0x82613798;
	sub_82627F98(ctx, base);
loc_82613798:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826137A0"))) PPC_WEAK_FUNC(sub_826137A0);
PPC_FUNC_IMPL(__imp__sub_826137A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x826137A8;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8261381c
	if (cr6.eq) goto loc_8261381C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8261381c
	if (cr6.eq) goto loc_8261381C;
	// bl 0x82624b20
	ctx.lr = 0x826137CC;
	sub_82624B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8261381c
	if (cr6.eq) goto loc_8261381C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x826137E0;
	sub_82624A08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628110
	ctx.lr = 0x826137E8;
	sub_82628110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8261380c
	if (cr6.eq) goto loc_8261380C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82613748
	ctx.lr = 0x82613804;
	sub_82613748(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8261380C:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82624c98
	ctx.lr = 0x8261381C;
	sub_82624C98(ctx, base);
loc_8261381C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82613824"))) PPC_WEAK_FUNC(sub_82613824);
PPC_FUNC_IMPL(__imp__sub_82613824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82613828"))) PPC_WEAK_FUNC(sub_82613828);
PPC_FUNC_IMPL(__imp__sub_82613828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82613830;
	__savegprlr_29(ctx, base);
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826138f8
	if (cr6.eq) goto loc_826138F8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826138f8
	if (cr6.eq) goto loc_826138F8;
	// bl 0x82624b08
	ctx.lr = 0x82613854;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82613890
	if (cr6.eq) goto loc_82613890;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b10
	ctx.lr = 0x82613868;
	sub_82624B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x82613874;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82613890;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82613890:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x82613898;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826138f8
	if (cr6.eq) goto loc_826138F8;
	// lbz r11,1150(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1150);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826138f8
	if (cr6.eq) goto loc_826138F8;
	// lbz r11,1151(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1151);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826138f8
	if (cr6.eq) goto loc_826138F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628110
	ctx.lr = 0x826138C4;
	sub_82628110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826138e8
	if (cr6.eq) goto loc_826138E8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82613748
	ctx.lr = 0x826138E0;
	sub_82613748(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_826138E8:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82624c98
	ctx.lr = 0x826138F8;
	sub_82624C98(ctx, base);
loc_826138F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82613900"))) PPC_WEAK_FUNC(sub_82613900);
PPC_FUNC_IMPL(__imp__sub_82613900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82613908;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82613ae8
	if (cr6.eq) goto loc_82613AE8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82613ae8
	if (cr6.eq) goto loc_82613AE8;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82613ae8
	if (cr6.eq) goto loc_82613AE8;
	// bl 0x82624608
	ctx.lr = 0x82613938;
	sub_82624608(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82613958;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82613960;
	sub_82A181B8(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r26,r31,568
	ctx.r26.s64 = ctx.r31.s64 + 568;
	// addi r28,r31,504
	ctx.r28.s64 = ctx.r31.s64 + 504;
loc_82613974:
	// lbzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826139b0
	if (cr6.eq) goto loc_826139B0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826139b0
	if (cr6.eq) goto loc_826139B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a2ea60
	ctx.lr = 0x82613998;
	sub_82A2EA60(ctx, base);
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826139b0
	if (cr6.eq) goto loc_826139B0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a18960
	ctx.lr = 0x826139B0;
	sub_82A18960(ctx, base);
loc_826139B0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// blt cr6,0x82613974
	if (cr6.lt) goto loc_82613974;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x826139C8;
	sub_82A2E7C0(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,52(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x825ca6b8
	ctx.lr = 0x826139E4;
	sub_825CA6B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x82613a28
	if (!cr6.lt) goto loc_82613A28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a31458
	ctx.lr = 0x826139F8;
	sub_82A31458(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82613a28
	if (cr6.eq) goto loc_82613A28;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x82613a28
	if (!cr6.lt) goto loc_82613A28;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82613a28
	if (cr6.eq) goto loc_82613A28;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,83
	cr6.compare<uint32_t>(ctx.r11.u32, 83, xer);
	// bne cr6,0x82613a28
	if (!cr6.eq) goto loc_82613A28;
	// stb r24,1149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1149, ctx.r24.u8);
loc_82613A28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a58
	ctx.lr = 0x82613A30;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82613a40
	if (cr6.eq) goto loc_82613A40;
	// stb r24,1149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1149, ctx.r24.u8);
loc_82613A40:
	// lbz r11,1149(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1149);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82613ad0
	if (cr6.eq) goto loc_82613AD0;
	// lwz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82613aac
	if (cr6.lt) goto loc_82613AAC;
	// beq cr6,0x82613a88
	if (cr6.eq) goto loc_82613A88;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82613ad0
	if (!cr6.lt) goto loc_82613AD0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x82613A6C;
	sub_82A2E7E0(ctx, base);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r5,r5,437
	ctx.r5.u64 = ctx.r5.u64 | 437;
	// bl 0x82a18350
	ctx.lr = 0x82613A80;
	sub_82A18350(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82613A88:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x82613A90;
	sub_82A2E7E0(ctx, base);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r5,r5,435
	ctx.r5.u64 = ctx.r5.u64 | 435;
	// bl 0x82a18350
	ctx.lr = 0x82613AA4;
	sub_82A18350(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82613AAC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x82613AB4;
	sub_82A2E7E0(ctx, base);
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r5,r5,125
	ctx.r5.u64 = ctx.r5.u64 | 125;
	// bl 0x82a18350
	ctx.lr = 0x82613AC8;
	sub_82A18350(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82613AD0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82613AD8;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x82613ADC;
	sub_82A2E7C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a18368
	ctx.lr = 0x82613AE8;
	sub_82A18368(ctx, base);
loc_82613AE8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82613AF0"))) PPC_WEAK_FUNC(sub_82613AF0);
PPC_FUNC_IMPL(__imp__sub_82613AF0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,376
	ctx.r10.s64 = ctx.r11.s64 + 376;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8264ed98
	ctx.lr = 0x82613B1C;
	sub_8264ED98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264f1c0
	ctx.lr = 0x82613B24;
	sub_8264F1C0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82613b3c
	if (cr6.eq) goto loc_82613B3C;
	// bl 0x82416268
	ctx.lr = 0x82613B38;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82613B3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82613B54"))) PPC_WEAK_FUNC(sub_82613B54);
PPC_FUNC_IMPL(__imp__sub_82613B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82613B58"))) PPC_WEAK_FUNC(sub_82613B58);
PPC_FUNC_IMPL(__imp__sub_82613B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,1004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1004, ctx.r30.u32);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1008, ctx.r30.u32);
	// stfs f0,1012(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1012, temp.u32);
	// stfs f0,1016(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1016, temp.u32);
	// stfs f0,1020(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1020, temp.u32);
	// stfs f0,1024(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1024, temp.u32);
	// stfs f0,1028(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1028, temp.u32);
	// stfs f0,1032(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1032, temp.u32);
	// stb r30,1036(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1036, ctx.r30.u8);
	// stb r30,1037(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1037, ctx.r30.u8);
	// stw r30,1040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1040, ctx.r30.u32);
	// stw r30,1044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1044, ctx.r30.u32);
	// stw r30,1052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1052, ctx.r30.u32);
	// stw r30,1056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1056, ctx.r30.u32);
	// stw r10,1048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1048, ctx.r10.u32);
	// bl 0x82627e68
	ctx.lr = 0x82613BC4;
	sub_82627E68(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r31,1060
	ctx.r11.s64 = ctx.r31.s64 + 1060;
	// stb r30,1038(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1038, ctx.r30.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82613BDC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82613bdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82613BDC;
	// stw r30,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r30.u32);
	// addi r11,r31,1088
	ctx.r11.s64 = ctx.r31.s64 + 1088;
	// stw r30,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r30.u32);
	// bl 0x82628208
	ctx.lr = 0x82613BFC;
	sub_82628208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82613C14"))) PPC_WEAK_FUNC(sub_82613C14);
PPC_FUNC_IMPL(__imp__sub_82613C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82613C18"))) PPC_WEAK_FUNC(sub_82613C18);
PPC_FUNC_IMPL(__imp__sub_82613C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r11.u32);
	// stw r11,1004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1004, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,1008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1008, ctx.r11.u32);
	// stfs f0,1012(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1012, temp.u32);
	// stfs f0,1016(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1016, temp.u32);
	// stfs f0,1020(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1020, temp.u32);
	// stfs f0,1024(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1024, temp.u32);
	// stfs f0,1028(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1028, temp.u32);
	// stfs f0,1032(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1032, temp.u32);
	// stb r11,1036(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1036, ctx.r11.u8);
	// stb r11,1037(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1037, ctx.r11.u8);
	// stw r11,1040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1040, ctx.r11.u32);
	// stw r11,1044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1044, ctx.r11.u32);
	// stw r11,1052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1052, ctx.r11.u32);
	// stw r9,1048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1048, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82613C68"))) PPC_WEAK_FUNC(sub_82613C68);
PPC_FUNC_IMPL(__imp__sub_82613C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82613C70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82624cf8
	ctx.lr = 0x82613C7C;
	sub_82624CF8(ctx, base);
	// addi r30,r29,1060
	ctx.r30.s64 = ctx.r29.s64 + 1060;
	// li r31,7
	ctx.r31.s64 = 7;
loc_82613C84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264fdf8
	ctx.lr = 0x82613C8C;
	sub_8264FDF8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82613c84
	if (!cr0.eq) goto loc_82613C84;
	// addi r30,r29,1088
	ctx.r30.s64 = ctx.r29.s64 + 1088;
	// li r31,3
	ctx.r31.s64 = 3;
loc_82613CA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264fdf8
	ctx.lr = 0x82613CA8;
	sub_8264FDF8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82613ca0
	if (!cr0.eq) goto loc_82613CA0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82613CBC"))) PPC_WEAK_FUNC(sub_82613CBC);
PPC_FUNC_IMPL(__imp__sub_82613CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82613CC0"))) PPC_WEAK_FUNC(sub_82613CC0);
PPC_FUNC_IMPL(__imp__sub_82613CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82613CC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82624490
	ctx.lr = 0x82613CDC;
	sub_82624490(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82613CE4;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e880
	ctx.lr = 0x82613CE8;
	sub_82A2E880(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r28,1060
	ctx.r30.s64 = ctx.r28.s64 + 1060;
loc_82613CF4:
	// li r5,3
	ctx.r5.s64 = 3;
	// add r4,r31,r29
	ctx.r4.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82650570
	ctx.lr = 0x82613D04;
	sub_82650570(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(ctx.r31.s32, 7, xer);
	// blt cr6,0x82613cf4
	if (cr6.lt) goto loc_82613CF4;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,7
	ctx.r29.s64 = ctx.r29.s64 + 7;
	// addi r30,r28,1088
	ctx.r30.s64 = ctx.r28.s64 + 1088;
loc_82613D20:
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82650570
	ctx.lr = 0x82613D30;
	sub_82650570(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// blt cr6,0x82613d20
	if (cr6.lt) goto loc_82613D20;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82613D48"))) PPC_WEAK_FUNC(sub_82613D48);
PPC_FUNC_IMPL(__imp__sub_82613D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82613D50;
	__savegprlr_27(ctx, base);
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
	// bl 0x82624970
	ctx.lr = 0x82613D68;
	sub_82624970(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82613D74;
	sub_82A181B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2f4e8
	ctx.lr = 0x82613D7C;
	sub_82A2F4E8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627b88
	ctx.lr = 0x82613D90;
	sub_82627B88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628110
	ctx.lr = 0x82613D98;
	sub_82628110(ctx, base);
	// stb r3,1038(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1038, ctx.r3.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82613DA4"))) PPC_WEAK_FUNC(sub_82613DA4);
PPC_FUNC_IMPL(__imp__sub_82613DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82613DA8"))) PPC_WEAK_FUNC(sub_82613DA8);
PPC_FUNC_IMPL(__imp__sub_82613DA8) {
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
	// bl 0x82624a68
	ctx.lr = 0x82613DC0;
	sub_82624A68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82613df4
	if (!cr6.eq) goto loc_82613DF4;
	// lbz r11,1038(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1038);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82613dec
	if (cr6.eq) goto loc_82613DEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x82613DE0;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82613df4
	if (!cr6.eq) goto loc_82613DF4;
loc_82613DEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82613df8
	goto loc_82613DF8;
loc_82613DF4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82613DF8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82613E10"))) PPC_WEAK_FUNC(sub_82613E10);
PPC_FUNC_IMPL(__imp__sub_82613E10) {
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
	// bl 0x82628820
	ctx.lr = 0x82613E28;
	sub_82628820(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,728
	ctx.r9.s64 = ctx.r11.s64 + 728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1012, temp.u32);
	// stfs f0,1016(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
	// stfs f0,1020(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1020, temp.u32);
	// stfs f0,1024(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1024, temp.u32);
	// stfs f0,1028(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1028, temp.u32);
	// stfs f0,1032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1032, temp.u32);
	// bl 0x82613b58
	ctx.lr = 0x82613E5C;
	sub_82613B58(ctx, base);
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

__attribute__((alias("__imp__sub_82613E74"))) PPC_WEAK_FUNC(sub_82613E74);
PPC_FUNC_IMPL(__imp__sub_82613E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82613E78"))) PPC_WEAK_FUNC(sub_82613E78);
PPC_FUNC_IMPL(__imp__sub_82613E78) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,728
	ctx.r10.s64 = ctx.r11.s64 + 728;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82613c68
	ctx.lr = 0x82613E9C;
	sub_82613C68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x82613EA4;
	sub_82627660(ctx, base);
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

__attribute__((alias("__imp__sub_82613EB8"))) PPC_WEAK_FUNC(sub_82613EB8);
PPC_FUNC_IMPL(__imp__sub_82613EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82613EC0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,8144(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-31779
	ctx.r9.s64 = -2082668544;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,8152(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8152);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r9,-32656
	ctx.r11.s64 = ctx.r9.s64 + -32656;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82613EFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r26,-8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r25,-4(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r24,0(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a2e8a0
	ctx.lr = 0x82613F14;
	sub_82A2E8A0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x82613F24;
	sub_82A2E8A0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x82613F34;
	sub_82A2E8A0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x82613F44;
	sub_82A2E8A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// bl 0x8264fe78
	ctx.lr = 0x82613F60;
	sub_8264FE78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82613f88
	if (!cr6.eq) goto loc_82613F88;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82613efc
	if (cr6.lt) goto loc_82613EFC;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82613F88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82613F94"))) PPC_WEAK_FUNC(sub_82613F94);
PPC_FUNC_IMPL(__imp__sub_82613F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82613F98"))) PPC_WEAK_FUNC(sub_82613F98);
PPC_FUNC_IMPL(__imp__sub_82613F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82613FA0;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826140a0
	if (cr6.eq) goto loc_826140A0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826140a0
	if (cr6.eq) goto loc_826140A0;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r28,432(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x826140a0
	if (cr6.eq) goto loc_826140A0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82613FDC;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82613FE4;
	sub_82A2EE50(ctx, base);
	// lbz r11,1036(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1036);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826140a0
	if (cr6.eq) goto loc_826140A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b9d8
	ctx.lr = 0x82613FFC;
	sub_8312B9D8(ctx, base);
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
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
	// bne cr6,0x8261403c
	if (!cr6.eq) goto loc_8261403C;
	// lwz r10,1004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// ble cr6,0x82614034
	if (!cr6.gt) goto loc_82614034;
	// lwz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x826140a0
	if (!cr6.eq) goto loc_826140A0;
loc_82614034:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8261404c
	if (cr6.eq) goto loc_8261404C;
loc_8261403C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627ef8
	ctx.lr = 0x8261404C;
	sub_82627EF8(ctx, base);
loc_8261404C:
	// lwz r4,1052(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x82614064
	if (!cr6.gt) goto loc_82614064;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627ef8
	ctx.lr = 0x82614064;
	sub_82627EF8(ctx, base);
loc_82614064:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x8261406C;
	sub_82624A08(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624c98
	ctx.lr = 0x82614078;
	sub_82624C98(ctx, base);
	// lbz r11,1038(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1038);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826140a0
	if (cr6.eq) goto loc_826140A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8261408C;
	sub_82A2EE50(ctx, base);
	// lfs f1,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627f98
	ctx.lr = 0x826140A0;
	sub_82627F98(ctx, base);
loc_826140A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826140A8"))) PPC_WEAK_FUNC(sub_826140A8);
PPC_FUNC_IMPL(__imp__sub_826140A8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826141e8
	if (cr6.eq) goto loc_826141E8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826141e8
	if (cr6.eq) goto loc_826141E8;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826141e8
	if (cr6.eq) goto loc_826141E8;
	// lwz r10,6112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826141e8
	if (cr6.eq) goto loc_826141E8;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x826141e8
	if (cr6.eq) goto loc_826141E8;
	// bl 0x82a181b8
	ctx.lr = 0x82614100;
	sub_82A181B8(ctx, base);
	// bl 0x82a2ee50
	ctx.lr = 0x82614104;
	sub_82A2EE50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249d8
	ctx.lr = 0x82614110;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82614134
	if (cr6.eq) goto loc_82614134;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82627ef8
	ctx.lr = 0x8261412C;
	sub_82627EF8(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x826141c4
	goto loc_826141C4;
loc_82614134:
	// bl 0x826249f8
	ctx.lr = 0x82614138;
	sub_826249F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8261414c
	if (cr6.eq) goto loc_8261414C;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x826141c4
	goto loc_826141C4;
loc_8261414C:
	// lbz r11,1037(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1037);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82614188
	if (cr6.eq) goto loc_82614188;
	// lbz r11,1036(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82614188
	if (!cr6.eq) goto loc_82614188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b9d8
	ctx.lr = 0x8261416C;
	sub_8312B9D8(ctx, base);
	// lwz r10,1008(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82614188
	if (cr6.gt) goto loc_82614188;
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x826141c4
	goto loc_826141C4;
loc_82614188:
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826141a8
	if (cr6.eq) goto loc_826141A8;
	// lbz r11,1036(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826141a8
	if (!cr6.eq) goto loc_826141A8;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x826141c4
	goto loc_826141C4;
loc_826141A8:
	// lwz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x826141e8
	if (!cr6.eq) goto loc_826141E8;
	// lbz r11,1036(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826141e8
	if (!cr6.eq) goto loc_826141E8;
	// li r4,1
	ctx.r4.s64 = 1;
loc_826141C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x826141CC;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826141E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826141E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82614200"))) PPC_WEAK_FUNC(sub_82614200);
PPC_FUNC_IMPL(__imp__sub_82614200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82614208;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82614534
	if (cr6.eq) goto loc_82614534;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82614534
	if (cr6.eq) goto loc_82614534;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82614534
	if (cr6.eq) goto loc_82614534;
	// bl 0x82624608
	ctx.lr = 0x82614230;
	sub_82624608(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82614238;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a2e760
	ctx.lr = 0x82614240;
	sub_82A2E760(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82614534
	if (cr6.eq) goto loc_82614534;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x82614254;
	sub_82A2E7E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8261426c
	if (cr6.lt) goto loc_8261426C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82614270
	if (cr6.lt) goto loc_82614270;
loc_8261426C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82614270:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82614534
	if (cr6.eq) goto loc_82614534;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82614534
	if (cr6.eq) goto loc_82614534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x82614298;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826142b8
	if (!cr6.eq) goto loc_826142B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x826142AC;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82614308
	if (cr6.eq) goto loc_82614308;
loc_826142B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826142CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82614308
	if (cr6.eq) goto loc_82614308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e58
	ctx.lr = 0x826142E0;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82614308
	if (cr6.eq) goto loc_82614308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x826142F4;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x82614300;
	sub_82628658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x82614308;
	sub_82624A08(ctx, base);
loc_82614308:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a18368
	ctx.lr = 0x82614314;
	sub_82A18368(ctx, base);
	// lbz r11,1037(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1037);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82614344
	if (!cr6.eq) goto loc_82614344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b9d8
	ctx.lr = 0x82614328;
	sub_8312B9D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82614344
	if (cr6.eq) goto loc_82614344;
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r5,r5,126
	ctx.r5.u64 = ctx.r5.u64 | 126;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a18350
	ctx.lr = 0x82614344;
	sub_82A18350(ctx, base);
loc_82614344:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x82614350;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x82614360;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	// bl 0x8264fb38
	ctx.lr = 0x82614370;
	sub_8264FB38(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8261437C;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8261438C;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1068);
	// bl 0x8264fb38
	ctx.lr = 0x8261439C;
	sub_8264FB38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x826143A8;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x826143B8;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// bl 0x8264fb38
	ctx.lr = 0x826143C8;
	sub_8264FB38(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x826143D4;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x826143E4;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1076);
	// bl 0x8264fb38
	ctx.lr = 0x826143F4;
	sub_8264FB38(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x82614400;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x82614410;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// bl 0x8264fb38
	ctx.lr = 0x82614420;
	sub_8264FB38(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8261442C;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8261443C;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// bl 0x8264fb38
	ctx.lr = 0x8261444C;
	sub_8264FB38(ctx, base);
	// lwz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x826144a4
	if (!cr6.eq) goto loc_826144A4;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x82614464;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x82614474;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// bl 0x8264fb38
	ctx.lr = 0x82614484;
	sub_8264FB38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// bl 0x8264f320
	ctx.lr = 0x82614490;
	sub_8264F320(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// bl 0x8264f320
	ctx.lr = 0x8261449C;
	sub_8264F320(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_826144A4:
	// lwz r3,1088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x826144f8
	if (!cr6.eq) goto loc_826144F8;
	// bl 0x8264f320
	ctx.lr = 0x826144B8;
	sub_8264F320(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x826144C4;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x826144D4;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// bl 0x8264fb38
	ctx.lr = 0x826144E4;
	sub_8264FB38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// bl 0x8264f320
	ctx.lr = 0x826144F0;
	sub_8264F320(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_826144F8:
	// bl 0x8264f320
	ctx.lr = 0x826144FC;
	sub_8264F320(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// bl 0x8264f320
	ctx.lr = 0x82614508;
	sub_8264F320(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x82614514;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x82614524;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// bl 0x8264fb38
	ctx.lr = 0x82614534;
	sub_8264FB38(ctx, base);
loc_82614534:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261453C"))) PPC_WEAK_FUNC(sub_8261453C);
PPC_FUNC_IMPL(__imp__sub_8261453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82614540"))) PPC_WEAK_FUNC(sub_82614540);
PPC_FUNC_IMPL(__imp__sub_82614540) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,728
	ctx.r10.s64 = ctx.r11.s64 + 728;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82613c68
	ctx.lr = 0x8261456C;
	sub_82613C68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x82614574;
	sub_82627660(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8261458c
	if (cr6.eq) goto loc_8261458C;
	// bl 0x82416268
	ctx.lr = 0x82614588;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8261458C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826145A4"))) PPC_WEAK_FUNC(sub_826145A4);
PPC_FUNC_IMPL(__imp__sub_826145A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826145A8"))) PPC_WEAK_FUNC(sub_826145A8);
PPC_FUNC_IMPL(__imp__sub_826145A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x826145B0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82614920
	if (cr6.eq) goto loc_82614920;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82614920
	if (cr6.eq) goto loc_82614920;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82614920
	if (cr6.eq) goto loc_82614920;
	// lwz r24,32(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82614920
	if (cr6.eq) goto loc_82614920;
	// bl 0x82a181b8
	ctx.lr = 0x826145F0;
	sub_82A181B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x826145F8;
	sub_82A2EE50(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x82614604;
	sub_82A2E7E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x82614610;
	sub_82A2E7C0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a2b4e0
	ctx.lr = 0x82614624;
	sub_82A2B4E0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// bne cr6,0x82614650
	if (!cr6.eq) goto loc_82614650;
	// lwz r11,1000(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1000);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82614654
	if (!cr6.eq) goto loc_82614654;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8312b9d8
	ctx.lr = 0x82614648;
	sub_8312B9D8(ctx, base);
	// stw r3,1000(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1000, ctx.r3.u32);
	// b 0x82614654
	goto loc_82614654;
loc_82614650:
	// stw r20,1000(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1000, ctx.r20.u32);
loc_82614654:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82614660;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c788
	ctx.lr = 0x82614674;
	sub_82A0C788(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82614920
	if (cr6.eq) goto loc_82614920;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82614920
	if (cr6.eq) goto loc_82614920;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82614698
	if (!cr6.lt) goto loc_82614698;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// b 0x826146c0
	goto loc_826146C0;
loc_82614698:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x826146a8
	if (!cr6.lt) goto loc_826146A8;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// b 0x826146c0
	goto loc_826146C0;
loc_826146A8:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r21,r7,31
	ctx.r21.u64 = ctx.r7.u32 & 0x1;
loc_826146C0:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x826146CC;
	sub_82A0C738(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82614920
	if (cr6.eq) goto loc_82614920;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a161a8
	ctx.lr = 0x826146DC;
	sub_82A161A8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r25,132(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82614920
	if (cr6.eq) goto loc_82614920;
	// lfs f0,1380(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1380);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f0,1012(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1012, temp.u32);
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lfs f13,1384(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1384);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1016(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1016, temp.u32);
	// lfs f12,1388(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1388);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1020(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1020, temp.u32);
	// lfs f11,1380(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1380);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1024(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1024, temp.u32);
	// lfs f10,1384(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1384);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1028(r26)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1028, temp.u32);
	// lfs f9,1388(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1388);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1032(r26)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1032, temp.u32);
	// bl 0x82a0c7b0
	ctx.lr = 0x8261472C;
	sub_82A0C7B0(ctx, base);
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c760
	ctx.lr = 0x82614740;
	sub_82A0C760(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82613eb8
	ctx.lr = 0x82614754;
	sub_82613EB8(ctx, base);
	// lbz r11,1037(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1037);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r3,1048(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1048, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82614790
	if (!cr6.eq) goto loc_82614790;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x82614780
	if (cr6.eq) goto loc_82614780;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x82614790
	if (!cr6.eq) goto loc_82614790;
loc_82614780:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8312b9d8
	ctx.lr = 0x82614788;
	sub_8312B9D8(ctx, base);
	// stw r3,1008(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1008, ctx.r3.u32);
	// stb r30,1037(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1037, ctx.r30.u8);
loc_82614790:
	// lbz r11,1036(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82614904
	if (!cr6.eq) goto loc_82614904;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a22860
	ctx.lr = 0x826147A4;
	sub_82A22860(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82614904
	if (!cr6.gt) goto loc_82614904;
loc_826147B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a236f8
	ctx.lr = 0x826147C0;
	sub_82A236F8(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x826147ec
	if (cr6.lt) goto loc_826147EC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x826147ec
	if (!cr6.lt) goto loc_826147EC;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x826147ec
	if (cr6.lt) goto loc_826147EC;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt cr6,0x826147f0
	if (cr6.lt) goto loc_826147F0;
loc_826147EC:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826147F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82614800
	if (cr6.eq) goto loc_82614800;
	// stw r30,1056(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1056, ctx.r30.u32);
loc_82614800:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x826148c4
	if (!cr6.eq) goto loc_826148C4;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x82614824
	if (cr6.eq) goto loc_82614824;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x82614828
	if (!cr6.eq) goto loc_82614828;
loc_82614824:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82614828:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r21,2
	cr6.compare<int32_t>(ctx.r21.s32, 2, xer);
	// beq cr6,0x82614844
	if (cr6.eq) goto loc_82614844;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x82614848
	if (cr6.eq) goto loc_82614848;
loc_82614844:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82614848:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r23,255
	cr6.compare<int32_t>(ctx.r23.s32, 255, xer);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// beq cr6,0x82614868
	if (cr6.eq) goto loc_82614868;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x8261486c
	if (cr6.eq) goto loc_8261486C;
loc_82614868:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8261486C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826148c4
	if (cr6.eq) goto loc_826148C4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a366c8
	ctx.lr = 0x82614884;
	sub_82A366C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826148c4
	if (cr6.eq) goto loc_826148C4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x826148a8
	if (cr6.eq) goto loc_826148A8;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x826148c4
	if (!cr6.eq) goto loc_826148C4;
loc_826148A8:
	// stb r30,1036(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1036, ctx.r30.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8312b9d8
	ctx.lr = 0x826148B4;
	sub_8312B9D8(ctx, base);
	// lwz r11,1048(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1048);
	// stw r3,1004(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1004, ctx.r3.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x826148d4
	if (!cr6.eq) goto loc_826148D4;
loc_826148C4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x826147b4
	if (cr6.lt) goto loc_826147B4;
	// b 0x82614904
	goto loc_82614904;
loc_826148D4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x826148e4
	if (!cr6.eq) goto loc_826148E4;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// b 0x82614900
	goto loc_82614900;
loc_826148E4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x826148f4
	if (!cr6.eq) goto loc_826148F4;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// b 0x82614900
	goto loc_82614900;
loc_826148F4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82614904
	if (!cr6.eq) goto loc_82614904;
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
loc_82614900:
	// stw r11,1052(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1052, ctx.r11.u32);
loc_82614904:
	// lbz r11,1036(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82614920
	if (cr6.eq) goto loc_82614920;
	// cmpw cr6,r17,r19
	cr6.compare<int32_t>(ctx.r17.s32, ctx.r19.s32, xer);
	// bne cr6,0x82614920
	if (!cr6.eq) goto loc_82614920;
	// stb r20,1036(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1036, ctx.r20.u8);
	// stw r20,1044(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1044, ctx.r20.u32);
loc_82614920:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82614928"))) PPC_WEAK_FUNC(sub_82614928);
PPC_FUNC_IMPL(__imp__sub_82614928) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,1004(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1004, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r11.u32);
	// bl 0x82624b18
	ctx.lr = 0x82614950;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x82614958;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x82614960;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_82614974"))) PPC_WEAK_FUNC(sub_82614974);
PPC_FUNC_IMPL(__imp__sub_82614974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82614978"))) PPC_WEAK_FUNC(sub_82614978);
PPC_FUNC_IMPL(__imp__sub_82614978) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82624b18
	ctx.lr = 0x8261499C;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x826149A4;
	sub_82624AE8(ctx, base);
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

__attribute__((alias("__imp__sub_826149B8"))) PPC_WEAK_FUNC(sub_826149B8);
PPC_FUNC_IMPL(__imp__sub_826149B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826149C8"))) PPC_WEAK_FUNC(sub_826149C8);
PPC_FUNC_IMPL(__imp__sub_826149C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x826149D0;
	__savegprlr_27(ctx, base);
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
	// bl 0x82624970
	ctx.lr = 0x826149E8;
	sub_82624970(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x826149F4;
	sub_82A181B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2f4e8
	ctx.lr = 0x826149FC;
	sub_82A2F4E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628110
	ctx.lr = 0x82614A04;
	sub_82628110(ctx, base);
	// stb r3,1004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1004, ctx.r3.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627b88
	ctx.lr = 0x82614A1C;
	sub_82627B88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82614A24"))) PPC_WEAK_FUNC(sub_82614A24);
PPC_FUNC_IMPL(__imp__sub_82614A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82614A28"))) PPC_WEAK_FUNC(sub_82614A28);
PPC_FUNC_IMPL(__imp__sub_82614A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82614A30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82614b78
	if (cr6.eq) goto loc_82614B78;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82614b78
	if (cr6.eq) goto loc_82614B78;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82614b78
	if (cr6.eq) goto loc_82614B78;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82614A60;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x82614A64;
	sub_82A2E7C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82614a7c
	if (cr6.lt) goto loc_82614A7C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82614a80
	if (cr6.lt) goto loc_82614A80;
loc_82614A7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82614A80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82614b78
	if (cr6.eq) goto loc_82614B78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x82614A94;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82614ab4
	if (!cr6.eq) goto loc_82614AB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x82614AA8;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82614afc
	if (cr6.eq) goto loc_82614AFC;
loc_82614AB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82614AC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82614afc
	if (cr6.eq) goto loc_82614AFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e58
	ctx.lr = 0x82614ADC;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82614afc
	if (cr6.eq) goto loc_82614AFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x82614AF0;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x82614AFC;
	sub_82628658(ctx, base);
loc_82614AFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x82614B04;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82614b78
	if (!cr6.eq) goto loc_82614B78;
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82614b68
	if (cr6.lt) goto loc_82614B68;
	// beq cr6,0x82614b34
	if (cr6.eq) goto loc_82614B34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82614B28:
	// bl 0x82a18368
	ctx.lr = 0x82614B2C;
	sub_82A18368(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82614B34:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82a22410
	ctx.lr = 0x82614B40;
	sub_82A22410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82614b28
	if (cr6.eq) goto loc_82614B28;
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// ori r5,r5,129
	ctx.r5.u64 = ctx.r5.u64 | 129;
	// bl 0x82a18350
	ctx.lr = 0x82614B60;
	sub_82A18350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82614B68:
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,450
	ctx.r5.u64 = ctx.r5.u64 | 450;
	// bl 0x82a18350
	ctx.lr = 0x82614B78;
	sub_82A18350(ctx, base);
loc_82614B78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82614B80"))) PPC_WEAK_FUNC(sub_82614B80);
PPC_FUNC_IMPL(__imp__sub_82614B80) {
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
	// bl 0x82624a68
	ctx.lr = 0x82614B98;
	sub_82624A68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82614bcc
	if (!cr6.eq) goto loc_82614BCC;
	// lbz r11,1004(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1004);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82614bc4
	if (cr6.eq) goto loc_82614BC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x82614BB8;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82614bcc
	if (!cr6.eq) goto loc_82614BCC;
loc_82614BC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82614bd0
	goto loc_82614BD0;
loc_82614BCC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82614BD0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82614BE8"))) PPC_WEAK_FUNC(sub_82614BE8);
PPC_FUNC_IMPL(__imp__sub_82614BE8) {
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
	// bl 0x82628820
	ctx.lr = 0x82614C00;
	sub_82628820(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1080
	ctx.r9.s64 = ctx.r10.s64 + 1080;
	// stb r11,1004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1004, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// bl 0x82624b18
	ctx.lr = 0x82614C24;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x82614C2C;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x82614C34;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_82614C4C"))) PPC_WEAK_FUNC(sub_82614C4C);
PPC_FUNC_IMPL(__imp__sub_82614C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82614C50"))) PPC_WEAK_FUNC(sub_82614C50);
PPC_FUNC_IMPL(__imp__sub_82614C50) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,1080
	ctx.r10.s64 = ctx.r11.s64 + 1080;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x82614C74;
	sub_82624CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x82614C7C;
	sub_82627660(ctx, base);
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

__attribute__((alias("__imp__sub_82614C90"))) PPC_WEAK_FUNC(sub_82614C90);
PPC_FUNC_IMPL(__imp__sub_82614C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82614C98;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82614ea4
	if (cr6.eq) goto loc_82614EA4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82614ea4
	if (cr6.eq) goto loc_82614EA4;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82614ea4
	if (cr6.eq) goto loc_82614EA4;
	// bl 0x82a181b8
	ctx.lr = 0x82614CCC;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x82614CD0;
	sub_82A2E7C0(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a0c788
	ctx.lr = 0x82614CE4;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82614ea4
	if (cr6.eq) goto loc_82614EA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a2b4e0
	ctx.lr = 0x82614CF8;
	sub_82A2B4E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82614d3c
	if (cr6.lt) goto loc_82614D3C;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x82614d3c
	if (cr6.lt) goto loc_82614D3C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bge cr6,0x82614d3c
	if (!cr6.lt) goto loc_82614D3C;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82614d2c
	if (!cr6.eq) goto loc_82614D2C;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82624af8
	ctx.lr = 0x82614D24;
	sub_82624AF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82614D2C:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82624af8
	ctx.lr = 0x82614D34;
	sub_82624AF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82614D3C:
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r29,52(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x825ca6b8
	ctx.lr = 0x82614D54;
	sub_825CA6B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x82614ea4
	if (!cr6.lt) goto loc_82614EA4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a31458
	ctx.lr = 0x82614D68;
	sub_82A31458(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c760
	ctx.lr = 0x82614D7C;
	sub_82A0C760(ctx, base);
	// lwz r11,1000(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82614db4
	if (cr6.lt) goto loc_82614DB4;
	// bne cr6,0x82614ea4
	if (!cr6.eq) goto loc_82614EA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,2560
	ctx.r10.s64 = 167772160;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x82614ea4
	if (!cr6.eq) goto loc_82614EA4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1000(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1000, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82614DB4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82614e84
	if (cr6.eq) goto loc_82614E84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a30088
	ctx.lr = 0x82614DC4;
	sub_82A30088(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x82614dfc
	if (cr6.lt) goto loc_82614DFC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82614DFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-50
	ctx.r11.s64 = ctx.r11.s64 + -50;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, xer);
	// bgt cr6,0x82614e84
	if (cr6.gt) goto loc_82614E84;
	// lis r12,-32159
	ctx.r12.s64 = -2107572224;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20004
	ctx.r12.s64 = ctx.r12.s64 + 20004;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82614E7C;
	case 1:
		goto loc_82614E84;
	case 2:
		goto loc_82614E84;
	case 3:
		goto loc_82614E84;
	case 4:
		goto loc_82614E7C;
	case 5:
		goto loc_82614E7C;
	case 6:
		goto loc_82614E84;
	case 7:
		goto loc_82614E84;
	case 8:
		goto loc_82614E84;
	case 9:
		goto loc_82614E84;
	case 10:
		goto loc_82614E84;
	case 11:
		goto loc_82614E84;
	case 12:
		goto loc_82614E84;
	case 13:
		goto loc_82614E84;
	case 14:
		goto loc_82614E84;
	case 15:
		goto loc_82614E84;
	case 16:
		goto loc_82614E84;
	case 17:
		goto loc_82614E7C;
	case 18:
		goto loc_82614E7C;
	case 19:
		goto loc_82614E84;
	case 20:
		goto loc_82614E84;
	case 21:
		goto loc_82614E7C;
	default:
		return;
	}
	// lwz r19,20092(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20092);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20092(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20092);
	// lwz r19,20092(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20092);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20092(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20092);
	// lwz r19,20092(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20092);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20100);
	// lwz r19,20092(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20092);
loc_82614E7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1000(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1000, ctx.r11.u32);
loc_82614E84:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,2560
	ctx.r10.s64 = 167772160;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x82614ea4
	if (!cr6.eq) goto loc_82614EA4;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82624af8
	ctx.lr = 0x82614EA4;
	sub_82624AF8(ctx, base);
loc_82614EA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82614EAC"))) PPC_WEAK_FUNC(sub_82614EAC);
PPC_FUNC_IMPL(__imp__sub_82614EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82614EB0"))) PPC_WEAK_FUNC(sub_82614EB0);
PPC_FUNC_IMPL(__imp__sub_82614EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82614EB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82614f6c
	if (cr6.eq) goto loc_82614F6C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82614f6c
	if (cr6.eq) goto loc_82614F6C;
	// bl 0x826249d8
	ctx.lr = 0x82614EDC;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82614f6c
	if (cr6.eq) goto loc_82614F6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249e8
	ctx.lr = 0x82614EF0;
	sub_826249E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82614f6c
	if (!cr6.eq) goto loc_82614F6C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,432(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82614F0C;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82614F14;
	sub_82A2EE50(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82627ef8
	ctx.lr = 0x82614F28;
	sub_82627EF8(ctx, base);
	// lbz r9,1004(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1004);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82614f50
	if (cr6.eq) goto loc_82614F50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82614F3C;
	sub_82A2EE50(ctx, base);
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627f98
	ctx.lr = 0x82614F50;
	sub_82627F98(ctx, base);
loc_82614F50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x82614F58;
	sub_82624A08(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624c98
	ctx.lr = 0x82614F64;
	sub_82624C98(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
loc_82614F6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82614F74"))) PPC_WEAK_FUNC(sub_82614F74);
PPC_FUNC_IMPL(__imp__sub_82614F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

