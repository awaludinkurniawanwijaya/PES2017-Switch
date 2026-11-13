#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_837CA69C"))) PPC_WEAK_FUNC(sub_837CA69C);
PPC_FUNC_IMPL(__imp__sub_837CA69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA6A0"))) PPC_WEAK_FUNC(sub_837CA6A0);
PPC_FUNC_IMPL(__imp__sub_837CA6A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837CA6A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82efe820
	ctx.lr = 0x837CA6B4;
	sub_82EFE820(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ca740
	if (cr6.eq) goto loc_837CA740;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r11,-3224
	ctx.r30.s64 = ctx.r11.s64 + -3224;
loc_837CA6CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82efe8d8
	ctx.lr = 0x837CA6D8;
	sub_82EFE8D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ca730
	if (cr6.eq) goto loc_837CA730;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82efe958
	ctx.lr = 0x837CA6F0;
	sub_82EFE958(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ca730
	if (cr6.eq) goto loc_837CA730;
loc_837CA700:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82efe928
	ctx.lr = 0x837CA710;
	sub_82EFE928(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ca724
	if (cr6.eq) goto loc_837CA724;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// beq cr6,0x837ca744
	if (cr6.eq) goto loc_837CA744;
loc_837CA724:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x837ca700
	if (cr6.lt) goto loc_837CA700;
loc_837CA730:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r27,8
	cr6.compare<uint32_t>(ctx.r27.u32, 8, xer);
	// blt cr6,0x837ca6cc
	if (cr6.lt) goto loc_837CA6CC;
loc_837CA740:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837CA744:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA74C"))) PPC_WEAK_FUNC(sub_837CA74C);
PPC_FUNC_IMPL(__imp__sub_837CA74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA750"))) PPC_WEAK_FUNC(sub_837CA750);
PPC_FUNC_IMPL(__imp__sub_837CA750) {
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
	// bl 0x837ca6a0
	ctx.lr = 0x837CA768;
	sub_837CA6A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837ca784
	if (!cr6.eq) goto loc_837CA784;
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
loc_837CA784:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837ca7a0
	if (cr6.lt) goto loc_837CA7A0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x837ca7a4
	goto loc_837CA7A4;
loc_837CA7A0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_837CA7A4:
	// addi r4,r3,104
	ctx.r4.s64 = ctx.r3.s64 + 104;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837CA7B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837ca7b0
	if (!cr6.eq) goto loc_837CA7B0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837CA7D4;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_837CA7EC"))) PPC_WEAK_FUNC(sub_837CA7EC);
PPC_FUNC_IMPL(__imp__sub_837CA7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA7F0"))) PPC_WEAK_FUNC(sub_837CA7F0);
PPC_FUNC_IMPL(__imp__sub_837CA7F0) {
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
	// bl 0x837ca6a0
	ctx.lr = 0x837CA808;
	sub_837CA6A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837ca824
	if (!cr6.eq) goto loc_837CA824;
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
loc_837CA824:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837ca840
	if (cr6.lt) goto loc_837CA840;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x837ca844
	goto loc_837CA844;
loc_837CA840:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_837CA844:
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837CA850:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837ca850
	if (!cr6.eq) goto loc_837CA850;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837CA874;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_837CA88C"))) PPC_WEAK_FUNC(sub_837CA88C);
PPC_FUNC_IMPL(__imp__sub_837CA88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA890"))) PPC_WEAK_FUNC(sub_837CA890);
PPC_FUNC_IMPL(__imp__sub_837CA890) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837ca8c8
	if (cr6.lt) goto loc_837CA8C8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x837ca8cc
	goto loc_837CA8CC;
loc_837CA8C8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_837CA8CC:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r30,r11,-3312
	ctx.r30.s64 = ctx.r11.s64 + -3312;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// bl 0x837b96e8
	ctx.lr = 0x837CA8E8;
	sub_837B96E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x837CA8F8;
	sub_8259CC28(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837CA900:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837ca900
	if (!cr6.eq) goto loc_837CA900;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x837CA928;
	sub_825A1EB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_837CA944"))) PPC_WEAK_FUNC(sub_837CA944);
PPC_FUNC_IMPL(__imp__sub_837CA944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA948"))) PPC_WEAK_FUNC(sub_837CA948);
PPC_FUNC_IMPL(__imp__sub_837CA948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837CA950;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82efe820
	ctx.lr = 0x837CA95C;
	sub_82EFE820(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ca9e8
	if (cr6.eq) goto loc_837CA9E8;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r11,-3072
	ctx.r30.s64 = ctx.r11.s64 + -3072;
loc_837CA974:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82efe8d8
	ctx.lr = 0x837CA980;
	sub_82EFE8D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ca9d8
	if (cr6.eq) goto loc_837CA9D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82efe958
	ctx.lr = 0x837CA998;
	sub_82EFE958(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ca9d8
	if (cr6.eq) goto loc_837CA9D8;
loc_837CA9A8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82efe928
	ctx.lr = 0x837CA9B8;
	sub_82EFE928(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ca9cc
	if (cr6.eq) goto loc_837CA9CC;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// beq cr6,0x837ca9ec
	if (cr6.eq) goto loc_837CA9EC;
loc_837CA9CC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x837ca9a8
	if (cr6.lt) goto loc_837CA9A8;
loc_837CA9D8:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r27,8
	cr6.compare<uint32_t>(ctx.r27.u32, 8, xer);
	// blt cr6,0x837ca974
	if (cr6.lt) goto loc_837CA974;
loc_837CA9E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837CA9EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA9F4"))) PPC_WEAK_FUNC(sub_837CA9F4);
PPC_FUNC_IMPL(__imp__sub_837CA9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA9F8"))) PPC_WEAK_FUNC(sub_837CA9F8);
PPC_FUNC_IMPL(__imp__sub_837CA9F8) {
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
	// bl 0x837ca948
	ctx.lr = 0x837CAA10;
	sub_837CA948(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837caa2c
	if (!cr6.eq) goto loc_837CAA2C;
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
loc_837CAA2C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837caa48
	if (cr6.lt) goto loc_837CAA48;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x837caa4c
	goto loc_837CAA4C;
loc_837CAA48:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_837CAA4C:
	// addi r4,r3,204
	ctx.r4.s64 = ctx.r3.s64 + 204;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837CAA58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837caa58
	if (!cr6.eq) goto loc_837CAA58;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837CAA7C;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_837CAA94"))) PPC_WEAK_FUNC(sub_837CAA94);
PPC_FUNC_IMPL(__imp__sub_837CAA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CAA98"))) PPC_WEAK_FUNC(sub_837CAA98);
PPC_FUNC_IMPL(__imp__sub_837CAA98) {
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
	// bl 0x837ca948
	ctx.lr = 0x837CAAB0;
	sub_837CA948(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837caacc
	if (!cr6.eq) goto loc_837CAACC;
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
loc_837CAACC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837caae8
	if (cr6.lt) goto loc_837CAAE8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x837caaec
	goto loc_837CAAEC;
loc_837CAAE8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_837CAAEC:
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837CAAF8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837caaf8
	if (!cr6.eq) goto loc_837CAAF8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837CAB1C;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_837CAB34"))) PPC_WEAK_FUNC(sub_837CAB34);
PPC_FUNC_IMPL(__imp__sub_837CAB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CAB38"))) PPC_WEAK_FUNC(sub_837CAB38);
PPC_FUNC_IMPL(__imp__sub_837CAB38) {
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
	// bl 0x837ca948
	ctx.lr = 0x837CAB50;
	sub_837CA948(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837cab6c
	if (!cr6.eq) goto loc_837CAB6C;
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
loc_837CAB6C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837cab88
	if (cr6.lt) goto loc_837CAB88;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x837cab8c
	goto loc_837CAB8C;
loc_837CAB88:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_837CAB8C:
	// addi r4,r3,104
	ctx.r4.s64 = ctx.r3.s64 + 104;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837CAB98:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cab98
	if (!cr6.eq) goto loc_837CAB98;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837CABBC;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_837CABD4"))) PPC_WEAK_FUNC(sub_837CABD4);
PPC_FUNC_IMPL(__imp__sub_837CABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CABD8"))) PPC_WEAK_FUNC(sub_837CABD8);
PPC_FUNC_IMPL(__imp__sub_837CABD8) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837cac10
	if (cr6.lt) goto loc_837CAC10;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x837cac14
	goto loc_837CAC14;
loc_837CAC10:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_837CAC14:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r30,r11,-3160
	ctx.r30.s64 = ctx.r11.s64 + -3160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// bl 0x837b96e8
	ctx.lr = 0x837CAC30;
	sub_837B96E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x837CAC40;
	sub_8259CC28(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837CAC48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837cac48
	if (!cr6.eq) goto loc_837CAC48;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x837CAC70;
	sub_825A1EB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_837CAC8C"))) PPC_WEAK_FUNC(sub_837CAC8C);
PPC_FUNC_IMPL(__imp__sub_837CAC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CAC90"))) PPC_WEAK_FUNC(sub_837CAC90);
PPC_FUNC_IMPL(__imp__sub_837CAC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837CAC98;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-8888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8888);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// bne cr6,0x837cacc4
	if (!cr6.eq) goto loc_837CACC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837CACC4:
	// li r25,0
	ctx.r25.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stb r11,99(r30)
	PPC_STORE_U8(ctx.r30.u32 + 99, ctx.r11.u8);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r27,r30,124
	ctx.r27.s64 = ctx.r30.s64 + 124;
loc_837CACDC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837ce198
	ctx.lr = 0x837CACEC;
	sub_837CE198(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r26,r29,35
	ctx.r26.s64 = ctx.r29.s64 + 35;
	// rlwimi r10,r11,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
loc_837CAD14:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r25.u32);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x837ce2b0
	ctx.lr = 0x837CAD34;
	sub_837CE2B0(ctx, base);
	// add r9,r26,r31
	ctx.r9.u64 = ctx.r26.u64 + ctx.r31.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// stwx r3,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r3.u32);
	// blt cr6,0x837cad14
	if (cr6.lt) goto loc_837CAD14;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// blt cr6,0x837cacdc
	if (cr6.lt) goto loc_837CACDC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CAD6C"))) PPC_WEAK_FUNC(sub_837CAD6C);
PPC_FUNC_IMPL(__imp__sub_837CAD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CAD70"))) PPC_WEAK_FUNC(sub_837CAD70);
PPC_FUNC_IMPL(__imp__sub_837CAD70) {
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
	// lbz r11,99(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 99);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cada0
	if (!cr6.eq) goto loc_837CADA0;
	// lbz r11,101(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 101);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837cada4
	if (cr6.eq) goto loc_837CADA4;
loc_837CADA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CADA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cadc8
	if (!cr6.eq) goto loc_837CADC8;
	// lwz r4,104(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837cadc8
	if (cr6.eq) goto loc_837CADC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837ce198
	ctx.lr = 0x837CADC4;
	sub_837CE198(ctx, base);
	// b 0x837cadd4
	goto loc_837CADD4;
loc_837CADC8:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lwz r11,-2564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2564);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_837CADD4:
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

__attribute__((alias("__imp__sub_837CADEC"))) PPC_WEAK_FUNC(sub_837CADEC);
PPC_FUNC_IMPL(__imp__sub_837CADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CADF0"))) PPC_WEAK_FUNC(sub_837CADF0);
PPC_FUNC_IMPL(__imp__sub_837CADF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,99(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 99);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cae0c
	if (!cr6.eq) goto loc_837CAE0C;
	// lbz r11,101(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 101);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837cae10
	if (cr6.eq) goto loc_837CAE10;
loc_837CAE0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CAE10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cae2c
	if (!cr6.eq) goto loc_837CAE2C;
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cae2c
	if (cr6.eq) goto loc_837CAE2C;
	// b 0x837ce3b0
	sub_837CE3B0(ctx, base);
	return;
loc_837CAE2C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x837cae3c
	if (cr6.eq) goto loc_837CAE3C;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_837CAE3C:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x837cae48
	if (cr6.eq) goto loc_837CAE48;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_837CAE48:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x837cae54
	if (cr6.eq) goto loc_837CAE54;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_837CAE54:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CAE60"))) PPC_WEAK_FUNC(sub_837CAE60);
PPC_FUNC_IMPL(__imp__sub_837CAE60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// addi r9,r10,-2932
	ctx.r9.s64 = ctx.r10.s64 + -2932;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82596f90
	sub_82596F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CAE78"))) PPC_WEAK_FUNC(sub_837CAE78);
PPC_FUNC_IMPL(__imp__sub_837CAE78) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837caeb4
	if (cr6.eq) goto loc_837CAEB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CAEB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_837CAEB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CAED4"))) PPC_WEAK_FUNC(sub_837CAED4);
PPC_FUNC_IMPL(__imp__sub_837CAED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CAED8"))) PPC_WEAK_FUNC(sub_837CAED8);
PPC_FUNC_IMPL(__imp__sub_837CAED8) {
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
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bge cr6,0x837caf08
	if (!cr6.lt) goto loc_837CAF08;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837caf08
	if (cr6.eq) goto loc_837CAF08;
	// bl 0x837cad70
	ctx.lr = 0x837CAF04;
	sub_837CAD70(ctx, base);
	// b 0x837caf14
	goto loc_837CAF14;
loc_837CAF08:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lwz r11,-2564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2564);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_837CAF14:
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

__attribute__((alias("__imp__sub_837CAF2C"))) PPC_WEAK_FUNC(sub_837CAF2C);
PPC_FUNC_IMPL(__imp__sub_837CAF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CAF30"))) PPC_WEAK_FUNC(sub_837CAF30);
PPC_FUNC_IMPL(__imp__sub_837CAF30) {
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
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x837cafa4
	if (!cr6.lt) goto loc_837CAFA4;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bge cr6,0x837cafa4
	if (!cr6.lt) goto loc_837CAFA4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cafa4
	if (cr6.eq) goto loc_837CAFA4;
	// lbz r10,99(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 99);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837caf74
	if (!cr6.eq) goto loc_837CAF74;
	// lbz r10,101(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 101);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x837caf78
	if (cr6.eq) goto loc_837CAF78;
loc_837CAF74:
	// li r10,0
	ctx.r10.s64 = 0;
loc_837CAF78:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cafa4
	if (!cr6.eq) goto loc_837CAFA4;
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cafa4
	if (cr6.eq) goto loc_837CAFA4;
	// bl 0x837ce2b0
	ctx.lr = 0x837CAF94;
	sub_837CE2B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_837CAFA4:
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CAFB8"))) PPC_WEAK_FUNC(sub_837CAFB8);
PPC_FUNC_IMPL(__imp__sub_837CAFB8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837caff0
	if (cr6.eq) goto loc_837CAFF0;
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cb000
	if (cr6.eq) goto loc_837CB000;
loc_837CAFDC:
	// bl 0x837ce098
	ctx.lr = 0x837CAFE0;
	sub_837CE098(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_837CAFF0:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-8888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8888);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837cafdc
	if (!cr6.eq) goto loc_837CAFDC;
loc_837CB000:
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

__attribute__((alias("__imp__sub_837CB014"))) PPC_WEAK_FUNC(sub_837CB014);
PPC_FUNC_IMPL(__imp__sub_837CB014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CB018"))) PPC_WEAK_FUNC(sub_837CB018);
PPC_FUNC_IMPL(__imp__sub_837CB018) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cb050
	if (cr6.eq) goto loc_837CB050;
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cb060
	if (cr6.eq) goto loc_837CB060;
loc_837CB03C:
	// bl 0x837ce0c0
	ctx.lr = 0x837CB040;
	sub_837CE0C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_837CB050:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-8888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8888);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837cb03c
	if (!cr6.eq) goto loc_837CB03C;
loc_837CB060:
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

__attribute__((alias("__imp__sub_837CB074"))) PPC_WEAK_FUNC(sub_837CB074);
PPC_FUNC_IMPL(__imp__sub_837CB074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CB078"))) PPC_WEAK_FUNC(sub_837CB078);
PPC_FUNC_IMPL(__imp__sub_837CB078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cb08c
	if (!cr6.eq) goto loc_837CB08C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_837CB08C:
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
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

__attribute__((alias("__imp__sub_837CB0A0"))) PPC_WEAK_FUNC(sub_837CB0A0);
PPC_FUNC_IMPL(__imp__sub_837CB0A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r4,118
	ctx.r10.s64 = ctx.r4.s64 + 118;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stbx r9,r8,r5
	PPC_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CB0C4"))) PPC_WEAK_FUNC(sub_837CB0C4);
PPC_FUNC_IMPL(__imp__sub_837CB0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CB0C8"))) PPC_WEAK_FUNC(sub_837CB0C8);
PPC_FUNC_IMPL(__imp__sub_837CB0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r4,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r4.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// stb r4,97(r11)
	PPC_STORE_U8(ctx.r11.u32 + 97, ctx.r4.u8);
	// lwz r3,-8888(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8888);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x837ce010
	sub_837CE010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CB0FC"))) PPC_WEAK_FUNC(sub_837CB0FC);
PPC_FUNC_IMPL(__imp__sub_837CB0FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CB100"))) PPC_WEAK_FUNC(sub_837CB100);
PPC_FUNC_IMPL(__imp__sub_837CB100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r4,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r4.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r4,98(r11)
	PPC_STORE_U8(ctx.r11.u32 + 98, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CB118"))) PPC_WEAK_FUNC(sub_837CB118);
PPC_FUNC_IMPL(__imp__sub_837CB118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837CB120;
	__savegprlr_29(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// ori r6,r10,65535
	ctx.r6.u64 = ctx.r10.u64 | 65535;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
loc_837CB140:
	// lwz r9,-2564(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -2564);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r30,r9,0,0,13
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r30.u64 & 0xFFFFFFFF0003FFFF);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r9,-2564(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -2564);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// rlwimi r29,r9,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
loc_837CB17C:
	// add r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r4.u32);
	// bdnz 0x837cb17c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837CB17C;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r5,8
	cr6.compare<int32_t>(ctx.r5.s32, 8, xer);
	// blt cr6,0x837cb140
	if (cr6.lt) goto loc_837CB140;
	// stb r31,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r31.u8);
	// stb r31,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r31.u8);
	// stb r31,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r31.u8);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CB1B0"))) PPC_WEAK_FUNC(sub_837CB1B0);
PPC_FUNC_IMPL(__imp__sub_837CB1B0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cb200
	if (cr6.eq) goto loc_837CB200;
	// bl 0x837cb118
	ctx.lr = 0x837CB1D4;
	sub_837CB118(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cb1fc
	if (cr6.eq) goto loc_837CB1FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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
loc_837CB1FC:
	// bl 0x837cae78
	ctx.lr = 0x837CB200;
	sub_837CAE78(ctx, base);
loc_837CB200:
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

__attribute__((alias("__imp__sub_837CB214"))) PPC_WEAK_FUNC(sub_837CB214);
PPC_FUNC_IMPL(__imp__sub_837CB214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CB218"))) PPC_WEAK_FUNC(sub_837CB218);
PPC_FUNC_IMPL(__imp__sub_837CB218) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x837cb2cc
	if (!cr6.lt) goto loc_837CB2CC;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bge cr6,0x837cb2cc
	if (!cr6.lt) goto loc_837CB2CC;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// beq cr6,0x837cb268
	if (cr6.eq) goto loc_837CB268;
	// stwx r6,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_837CB268:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cb2c0
	if (cr6.eq) goto loc_837CB2C0;
	// lbz r11,99(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 99);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cb290
	if (!cr6.eq) goto loc_837CB290;
	// lbz r11,101(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 101);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837cb294
	if (cr6.eq) goto loc_837CB294;
loc_837CB290:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CB294:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cb2b4
	if (!cr6.eq) goto loc_837CB2B4;
	// lwz r3,104(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cb2b4
	if (cr6.eq) goto loc_837CB2B4;
	// bl 0x837ce2b0
	ctx.lr = 0x837CB2B0;
	sub_837CE2B0(ctx, base);
	// b 0x837cb2b8
	goto loc_837CB2B8;
loc_837CB2B4:
	// li r3,9
	ctx.r3.s64 = 9;
loc_837CB2B8:
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x837cb2c4
	if (cr6.eq) goto loc_837CB2C4;
loc_837CB2C0:
	// li r30,1
	ctx.r30.s64 = 1;
loc_837CB2C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x837cb2d0
	goto loc_837CB2D0;
loc_837CB2CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837CB2D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CB2E8"))) PPC_WEAK_FUNC(sub_837CB2E8);
PPC_FUNC_IMPL(__imp__sub_837CB2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837CB2F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-2904
	ctx.r4.s64 = ctx.r11.s64 + -2904;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x83103328
	ctx.lr = 0x837CB310;
	sub_83103328(ctx, base);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r29,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r29.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r27,98(r31)
	PPC_STORE_U8(ctx.r31.u32 + 98, ctx.r27.u8);
	// addi r9,r10,-2928
	ctx.r9.s64 = ctx.r10.s64 + -2928;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r29,r31,132
	ctx.r29.s64 = ctx.r31.s64 + 132;
	// std r30,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r30.u64);
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// stb r30,99(r31)
	PPC_STORE_U8(ctx.r31.u32 + 99, ctx.r30.u8);
	// stb r28,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r28.u8);
	// stb r30,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r30.u8);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r11,r31,124
	ctx.r11.s64 = ctx.r31.s64 + 124;
	// stw r8,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// bl 0x831021a0
	ctx.lr = 0x837CB374;
	sub_831021A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cb38c
	if (cr6.eq) goto loc_837CB38C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x837CB384;
	sub_82DA45F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837cb3a0
	if (!cr6.eq) goto loc_837CB3A0;
loc_837CB38C:
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837CB3A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x837CB3A8;
	sub_83103100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cac90
	ctx.lr = 0x837CB3B0;
	sub_837CAC90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cb3e0
	if (cr6.eq) goto loc_837CB3E0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r28,99(r31)
	PPC_STORE_U8(ctx.r31.u32 + 99, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837CB3E0:
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r8,39
	ctx.r8.s64 = 39;
	// addi r27,r31,197
	ctx.r27.s64 = ctx.r31.s64 + 197;
	// lis r28,-31769
	ctx.r28.s64 = -2082013184;
	// ori r4,r10,65535
	ctx.r4.u64 = ctx.r10.u64 | 65535;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r29,9
	ctx.r29.s64 = 9;
loc_837CB400:
	// lwz r7,-2564(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2564);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r27,r8
	ctx.r3.u64 = ctx.r27.u64 + ctx.r8.u64;
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// addi r7,r8,-39
	ctx.r7.s64 = ctx.r8.s64 + -39;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r10,-2564(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2564);
	// rlwimi r5,r10,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r5.u32);
	// stw r4,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r4.u32);
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
loc_837CB474:
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r6,27
	ctx.r6.s64 = ctx.r6.s64 + 27;
	// addi r5,r5,35
	ctx.r5.s64 = ctx.r5.s64 + 35;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r30.u32);
	// stwx r29,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r29.u32);
	// stwx r29,r26,r31
	PPC_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r29.u32);
	// stbx r30,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r30.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x837cb474
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837CB474;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r8,43
	cr6.compare<int32_t>(ctx.r8.s32, 43, xer);
	// blt cr6,0x837cb400
	if (cr6.lt) goto loc_837CB400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CB4C8"))) PPC_WEAK_FUNC(sub_837CB4C8);
PPC_FUNC_IMPL(__imp__sub_837CB4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stb r6,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r6.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// stb r6,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r6.u8);
	// stb r9,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r9.u8);
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// ori r5,r10,65535
	ctx.r5.u64 = ctx.r10.u64 | 65535;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_837CB510:
	// lwz r9,-2564(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -2564);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r31,-48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -48);
	// rlwimi r31,r9,0,0,13
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r31.u64 & 0xFFFFFFFF0003FFFF);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r31,-48(r11)
	PPC_STORE_U32(ctx.r11.u32 + -48, ctx.r31.u32);
	// lwz r9,-2564(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -2564);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// rlwimi r30,r9,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r30,-48(r11)
	PPC_STORE_U32(ctx.r11.u32 + -48, ctx.r30.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r5,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r5.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// stw r8,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r8.u32);
loc_837CB54C:
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r6.u32);
	// bdnz 0x837cb54c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837CB54C;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// blt cr6,0x837cb510
	if (cr6.lt) goto loc_837CB510;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CB57C"))) PPC_WEAK_FUNC(sub_837CB57C);
PPC_FUNC_IMPL(__imp__sub_837CB57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CB580"))) PPC_WEAK_FUNC(sub_837CB580);
PPC_FUNC_IMPL(__imp__sub_837CB580) {
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
	// bl 0x8378cba8
	ctx.lr = 0x837CB594;
	sub_8378CBA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cb600
	if (cr6.eq) goto loc_837CB600;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8378cc08
	ctx.lr = 0x837CB5A8;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cb600
	if (cr6.eq) goto loc_837CB600;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8378cc08
	ctx.lr = 0x837CB5C0;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cb600
	if (cr6.eq) goto loc_837CB600;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8378cc08
	ctx.lr = 0x837CB5D8;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cb600
	if (cr6.eq) goto loc_837CB600;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8378cc08
	ctx.lr = 0x837CB5F0;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cb604
	if (!cr6.eq) goto loc_837CB604;
loc_837CB600:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837CB604:
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

__attribute__((alias("__imp__sub_837CB618"))) PPC_WEAK_FUNC(sub_837CB618);
PPC_FUNC_IMPL(__imp__sub_837CB618) {
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
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// bl 0x837cdf90
	ctx.lr = 0x837CB634;
	sub_837CDF90(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x837cdfa8
	ctx.lr = 0x837CB63C;
	sub_837CDFA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cb660
	if (!cr6.eq) goto loc_837CB660;
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
loc_837CB660:
	// lbz r11,99(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 99);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cb6a4
	if (!cr6.eq) goto loc_837CB6A4;
	// lbz r11,101(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 101);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cb690
	if (cr6.eq) goto loc_837CB690;
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cb690
	if (!cr6.eq) goto loc_837CB690;
	// bl 0x8379efd8
	ctx.lr = 0x837CB68C;
	sub_8379EFD8(ctx, base);
	// b 0x837cb694
	goto loc_837CB694;
loc_837CB690:
	// bl 0x8379f080
	ctx.lr = 0x837CB694;
	sub_8379F080(ctx, base);
loc_837CB694:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x837ce028
	ctx.lr = 0x837CB69C;
	sub_837CE028(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r11.u8);
loc_837CB6A4:
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
}

__attribute__((alias("__imp__sub_837CB6BC"))) PPC_WEAK_FUNC(sub_837CB6BC);
PPC_FUNC_IMPL(__imp__sub_837CB6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CB6C0"))) PPC_WEAK_FUNC(sub_837CB6C0);
PPC_FUNC_IMPL(__imp__sub_837CB6C0) {
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
	// bl 0x837cb580
	ctx.lr = 0x837CB6D8;
	sub_837CB580(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cb6fc
	if (!cr6.eq) goto loc_837CB6FC;
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
loc_837CB6FC:
	// bl 0x83a7d958
	ctx.lr = 0x837CB700;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x837CB704;
	sub_83524138(ctx, base);
	// std r3,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r3.u64);
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
}

__attribute__((alias("__imp__sub_837CB720"))) PPC_WEAK_FUNC(sub_837CB720);
PPC_FUNC_IMPL(__imp__sub_837CB720) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-2928
	ctx.r10.s64 = ctx.r11.s64 + -2928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x831032a0
	ctx.lr = 0x837CB74C;
	sub_831032A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837cb764
	if (cr6.eq) goto loc_837CB764;
	// bl 0x82416268
	ctx.lr = 0x837CB760;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837CB764:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CB77C"))) PPC_WEAK_FUNC(sub_837CB77C);
PPC_FUNC_IMPL(__imp__sub_837CB77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CB780"))) PPC_WEAK_FUNC(sub_837CB780);
PPC_FUNC_IMPL(__imp__sub_837CB780) {
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
	// lbz r11,99(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 99);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cb83c
	if (!cr6.eq) goto loc_837CB83C;
	// lbz r11,101(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 101);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r10,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r10.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cb7e4
	if (cr6.eq) goto loc_837CB7E4;
	// lbz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbz r11,98(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 98);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x837cb7dc
	if (cr6.eq) goto loc_837CB7DC;
	// bl 0x8379f080
	ctx.lr = 0x837CB7D8;
	sub_8379F080(ctx, base);
	// b 0x837cb7e0
	goto loc_837CB7E0;
loc_837CB7DC:
	// bl 0x8379efd8
	ctx.lr = 0x837CB7E0;
	sub_8379EFD8(ctx, base);
loc_837CB7E0:
	// stb r30,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r30.u8);
loc_837CB7E4:
	// lbz r11,98(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 98);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cb83c
	if (!cr6.eq) goto loc_837CB83C;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cb83c
	if (cr6.eq) goto loc_837CB83C;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837CB810;
	sub_82595150(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cb830
	if (cr6.eq) goto loc_837CB830;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CB830;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837CB830:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837CB838;
	sub_82595170(ctx, base);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
loc_837CB83C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CB854"))) PPC_WEAK_FUNC(sub_837CB854);
PPC_FUNC_IMPL(__imp__sub_837CB854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CB858"))) PPC_WEAK_FUNC(sub_837CB858);
PPC_FUNC_IMPL(__imp__sub_837CB858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x837CB860;
	__savegprlr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837cb880
	if (!cr6.eq) goto loc_837CB880;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_837CB880:
	// li r17,1
	ctx.r17.s64 = 1;
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
	// bl 0x837cdf90
	ctx.lr = 0x837CB88C;
	sub_837CDF90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837cb580
	ctx.lr = 0x837CB894;
	sub_837CB580(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cb9cc
	if (cr6.eq) goto loc_837CB9CC;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r23,27
	ctx.r23.s64 = 27;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r28,r30,172
	ctx.r28.s64 = ctx.r30.s64 + 172;
	// ori r25,r10,40
	ctx.r25.u64 = ctx.r10.u64 | 40;
	// addi r26,r11,21716
	ctx.r26.s64 = ctx.r11.s64 + 21716;
loc_837CB8C0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x837cdfe0
	ctx.lr = 0x837CB8CC;
	sub_837CDFE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cb8e0
	if (!cr6.eq) goto loc_837CB8E0;
	// mr r16,r24
	ctx.r16.u64 = ctx.r24.u64;
	// b 0x837cb954
	goto loc_837CB954;
loc_837CB8E0:
	// lwz r22,-48(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + -48);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lwz r21,0(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r20,8(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r19,16(r28)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r18,24(r28)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
loc_837CB8F8:
	// add r11,r23,r31
	ctx.r11.u64 = ctx.r23.u64 + ctx.r31.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cb948
	if (cr6.eq) goto loc_837CB948;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x837cb984
	if (!cr6.eq) goto loc_837CB984;
	// rlwinm r11,r27,1,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x2;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// or r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 | ctx.r31.u64;
	// stb r17,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r17.u8);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831036c0
	ctx.lr = 0x837CB940;
	sub_831036C0(ctx, base);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stwx r24,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r24.u32);
loc_837CB948:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x837cb8f8
	if (cr6.lt) goto loc_837CB8F8;
loc_837CB954:
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r23,31
	cr6.compare<int32_t>(ctx.r23.s32, 31, xer);
	// blt cr6,0x837cb8c0
	if (cr6.lt) goto loc_837CB8C0;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_837CB984:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// addi r6,r11,27
	ctx.r6.s64 = ctx.r11.s64 + 27;
	// addi r5,r11,35
	ctx.r5.s64 = ctx.r11.s64 + 35;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stwx r7,r4,r30
	PPC_STORE_U32(ctx.r4.u32 + ctx.r30.u32, ctx.r7.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwzx r7,r11,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x837ce060
	ctx.lr = 0x837CB9CC;
	sub_837CE060(ctx, base);
loc_837CB9CC:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CB9D8"))) PPC_WEAK_FUNC(sub_837CB9D8);
PPC_FUNC_IMPL(__imp__sub_837CB9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x837CB9E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837cba00
	if (!cr6.eq) goto loc_837CBA00;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_837CBA00:
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// bl 0x837cdf90
	ctx.lr = 0x837CBA0C;
	sub_837CDF90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cb580
	ctx.lr = 0x837CBA14;
	sub_837CB580(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cbb14
	if (cr6.eq) goto loc_837CBB14;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r24,27
	ctx.r24.s64 = 27;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// ori r27,r10,40
	ctx.r27.u64 = ctx.r10.u64 | 40;
	// addi r28,r11,21716
	ctx.r28.s64 = ctx.r11.s64 + 21716;
loc_837CBA3C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x837cdfe0
	ctx.lr = 0x837CBA48;
	sub_837CDFE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cba5c
	if (!cr6.eq) goto loc_837CBA5C;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// b 0x837cbabc
	goto loc_837CBABC;
loc_837CBA5C:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_837CBA60:
	// add r11,r24,r29
	ctx.r11.u64 = ctx.r24.u64 + ctx.r29.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cbab0
	if (cr6.eq) goto loc_837CBAB0;
	// rlwinm r10,r25,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0x2;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// or r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 | ctx.r29.u64;
	// bne cr6,0x837cbae8
	if (!cr6.eq) goto loc_837CBAE8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r23,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r23.u8);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x831036c0
	ctx.lr = 0x837CBAA8;
	sub_831036C0(ctx, base);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stwx r26,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r26.u32);
loc_837CBAB0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x837cba60
	if (cr6.lt) goto loc_837CBA60;
loc_837CBABC:
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r24,31
	cr6.compare<int32_t>(ctx.r24.s32, 31, xer);
	// blt cr6,0x837cba3c
	if (cr6.lt) goto loc_837CBA3C;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 5;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_837CBAE8:
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r9,r11,27
	ctx.r9.s64 = ctx.r11.s64 + 27;
	// addi r8,r11,35
	ctx.r8.s64 = ctx.r11.s64 + 35;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x837ce040
	ctx.lr = 0x837CBB14;
	sub_837CE040(ctx, base);
loc_837CBB14:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CBB20"))) PPC_WEAK_FUNC(sub_837CBB20);
PPC_FUNC_IMPL(__imp__sub_837CBB20) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x837cb580
	ctx.lr = 0x837CBB3C;
	sub_837CB580(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cbb50
	if (!cr6.eq) goto loc_837CBB50;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x837cbbac
	goto loc_837CBBAC;
loc_837CBB50:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,40
	ctx.r8.u64 = ctx.r10.u64 | 40;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stb r7,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831036c0
	ctx.lr = 0x837CBB8C;
	sub_831036C0(ctx, base);
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// rlwinm r4,r5,0,31,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// bl 0x83a7d958
	ctx.lr = 0x837CBBA0;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x837CBBA4;
	sub_83524138(ctx, base);
	// std r3,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r3.u64);
	// li r3,7
	ctx.r3.s64 = 7;
loc_837CBBAC:
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

__attribute__((alias("__imp__sub_837CBBC4"))) PPC_WEAK_FUNC(sub_837CBBC4);
PPC_FUNC_IMPL(__imp__sub_837CBBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CBBC8"))) PPC_WEAK_FUNC(sub_837CBBC8);
PPC_FUNC_IMPL(__imp__sub_837CBBC8) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-2932
	ctx.r9.s64 = ctx.r11.s64 + -2932;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stb r10,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r10.u8);
	// stb r10,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r10.u8);
	// stb r10,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r10.u8);
	// bl 0x82596fa8
	ctx.lr = 0x837CBC14;
	sub_82596FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cb118
	ctx.lr = 0x837CBC1C;
	sub_837CB118(ctx, base);
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

__attribute__((alias("__imp__sub_837CBC30"))) PPC_WEAK_FUNC(sub_837CBC30);
PPC_FUNC_IMPL(__imp__sub_837CBC30) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// addi r10,r11,-2932
	ctx.r10.s64 = ctx.r11.s64 + -2932;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82596f90
	ctx.lr = 0x837CBC60;
	sub_82596F90(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837cbc80
	if (cr6.eq) goto loc_837CBC80;
	// bl 0x82595188
	ctx.lr = 0x837CBC70;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837CBC80;
	sub_825952B8(ctx, base);
loc_837CBC80:
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

__attribute__((alias("__imp__sub_837CBC9C"))) PPC_WEAK_FUNC(sub_837CBC9C);
PPC_FUNC_IMPL(__imp__sub_837CBC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CBCA0"))) PPC_WEAK_FUNC(sub_837CBCA0);
PPC_FUNC_IMPL(__imp__sub_837CBCA0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cbcd8
	if (cr6.eq) goto loc_837CBCD8;
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
loc_837CBCD8:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,240
	ctx.r4.s64 = 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837CBCF0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cbd0c
	if (cr6.eq) goto loc_837CBD0C;
	// lbz r6,66(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 66);
	// lbz r5,65(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// lbz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// bl 0x837cb2e8
	ctx.lr = 0x837CBD08;
	sub_837CB2E8(ctx, base);
	// b 0x837cbd10
	goto loc_837CBD10;
loc_837CBD0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837CBD10:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cbd48
	if (cr6.eq) goto loc_837CBD48;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x837cbd48
	if (cr6.eq) goto loc_837CBD48;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
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
loc_837CBD48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cae78
	ctx.lr = 0x837CBD50;
	sub_837CAE78(ctx, base);
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
}

__attribute__((alias("__imp__sub_837CBD68"))) PPC_WEAK_FUNC(sub_837CBD68);
PPC_FUNC_IMPL(__imp__sub_837CBD68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837CBD70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,68
	ctx.r26.s64 = ctx.r3.s64 + 68;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// bl 0x82596fe8
	ctx.lr = 0x837CBD90;
	sub_82596FE8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x837cbdb0
	if (cr6.lt) goto loc_837CBDB0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82597088
	ctx.lr = 0x837CBDA4;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837CBDB0:
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// rlwinm r28,r30,14,18,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// bne cr6,0x837cbde0
	if (!cr6.eq) goto loc_837CBDE0;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837cbde4
	if (cr6.eq) goto loc_837CBDE4;
loc_837CBDE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CBDE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cbdf8
	if (!cr6.eq) goto loc_837CBDF8;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u32);
	// li r27,1
	ctx.r27.s64 = 1;
loc_837CBDF8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837cbe48
	if (cr6.eq) goto loc_837CBE48;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837cad70
	ctx.lr = 0x837CBE10;
	sub_837CAD70(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bne cr6,0x837cbe34
	if (!cr6.eq) goto loc_837CBE34;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cbe38
	if (cr6.eq) goto loc_837CBE38;
loc_837CBE34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CBE38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x837cbe4c
	if (!cr6.eq) goto loc_837CBE4C;
loc_837CBE48:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837CBE4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cbe5c
	if (cr6.eq) goto loc_837CBE5C;
	// li r27,1
	ctx.r27.s64 = 1;
loc_837CBE5C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82597088
	ctx.lr = 0x837CBE64;
	sub_82597088(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CBE70"))) PPC_WEAK_FUNC(sub_837CBE70);
PPC_FUNC_IMPL(__imp__sub_837CBE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837CBE78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,68
	ctx.r31.s64 = ctx.r3.s64 + 68;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837CBE98;
	sub_82596FE8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837cb218
	ctx.lr = 0x837CBEAC;
	sub_837CB218(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837CBEB8;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CBEC4"))) PPC_WEAK_FUNC(sub_837CBEC4);
PPC_FUNC_IMPL(__imp__sub_837CBEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CBEC8"))) PPC_WEAK_FUNC(sub_837CBEC8);
PPC_FUNC_IMPL(__imp__sub_837CBEC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837CBED0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,68
	ctx.r24.s64 = ctx.r3.s64 + 68;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837CBEF8;
	sub_82596FE8(ctx, base);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x837cbf14
	if (cr6.lt) goto loc_837CBF14;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82597088
	ctx.lr = 0x837CBF08;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_837CBF14:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bne cr6,0x837cbf68
	if (!cr6.eq) goto loc_837CBF68;
	// addi r10,r30,10
	ctx.r10.s64 = ctx.r30.s64 + 10;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpw cr6,r8,r28
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, xer);
	// bne cr6,0x837cbf68
	if (!cr6.eq) goto loc_837CBF68;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpw cr6,r8,r26
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r26.s32, xer);
	// bne cr6,0x837cbf68
	if (!cr6.eq) goto loc_837CBF68;
	// addi r10,r30,14
	ctx.r10.s64 = ctx.r30.s64 + 14;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpw cr6,r8,r25
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r25.s32, xer);
	// beq cr6,0x837cbf94
	if (cr6.eq) goto loc_837CBF94;
loc_837CBF68:
	// addi r10,r30,10
	ctx.r10.s64 = ctx.r30.s64 + 10;
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,14
	ctx.r8.s64 = ctx.r30.s64 + 14;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,1
	ctx.r27.s64 = 1;
	// stwx r28,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r28.u32);
	// stwx r26,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r26.u32);
	// stwx r25,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r25.u32);
loc_837CBF94:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cbfe0
	if (cr6.eq) goto loc_837CBFE0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837cadf0
	ctx.lr = 0x837CBFB4;
	sub_837CADF0(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// bne cr6,0x837cbfe0
	if (!cr6.eq) goto loc_837CBFE0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x837cbfe0
	if (!cr6.eq) goto loc_837CBFE0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// bne cr6,0x837cbfe0
	if (!cr6.eq) goto loc_837CBFE0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// beq cr6,0x837cbfe4
	if (cr6.eq) goto loc_837CBFE4;
loc_837CBFE0:
	// li r27,1
	ctx.r27.s64 = 1;
loc_837CBFE4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82597088
	ctx.lr = 0x837CBFEC;
	sub_82597088(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CBFF8"))) PPC_WEAK_FUNC(sub_837CBFF8);
PPC_FUNC_IMPL(__imp__sub_837CBFF8) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x837cc028
	if (cr6.eq) goto loc_837CC028;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// bl 0x837cb780
	ctx.lr = 0x837CC01C;
	sub_837CB780(ctx, base);
	// bl 0x82aacdd8
	ctx.lr = 0x837CC020;
	sub_82AACDD8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837cb1b0
	ctx.lr = 0x837CC028;
	sub_837CB1B0(ctx, base);
loc_837CC028:
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

__attribute__((alias("__imp__sub_837CC03C"))) PPC_WEAK_FUNC(sub_837CC03C);
PPC_FUNC_IMPL(__imp__sub_837CC03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CC040"))) PPC_WEAK_FUNC(sub_837CC040);
PPC_FUNC_IMPL(__imp__sub_837CC040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837CC048;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82aacdd8
	ctx.lr = 0x837CC060;
	sub_82AACDD8(ctx, base);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x837cc078
	if (cr6.lt) goto loc_837CC078;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CC078:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837cc090
	if (cr6.eq) goto loc_837CC090;
	// addi r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_837CC090:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837cc0a8
	if (cr6.eq) goto loc_837CC0A8;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_837CC0A8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x837cc0c0
	if (cr6.eq) goto loc_837CC0C0;
	// addi r11,r31,14
	ctx.r11.s64 = ctx.r31.s64 + 14;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_837CC0C0:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CC0D4"))) PPC_WEAK_FUNC(sub_837CC0D4);
PPC_FUNC_IMPL(__imp__sub_837CC0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CC0D8"))) PPC_WEAK_FUNC(sub_837CC0D8);
PPC_FUNC_IMPL(__imp__sub_837CC0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837CC0E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837CC0F8;
	sub_82596FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cbca0
	ctx.lr = 0x837CC100;
	sub_837CBCA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cc120
	if (!cr6.eq) goto loc_837CC120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837CC114;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837CC120:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83103100
	ctx.lr = 0x837CC12C;
	sub_83103100(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837CC134;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CC140"))) PPC_WEAK_FUNC(sub_837CC140);
PPC_FUNC_IMPL(__imp__sub_837CC140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x837CC148;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// lwz r15,80(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r11,-1792
	ctx.r31.s64 = ctx.r11.s64 + -1792;
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// std r5,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r5.u64);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// li r14,0
	ctx.r14.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r21,39
	ctx.r21.s64 = 39;
	// addi r20,r31,40
	ctx.r20.s64 = ctx.r31.s64 + 40;
	// addi r23,r3,132
	ctx.r23.s64 = ctx.r3.s64 + 132;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// li r24,-1
	ctx.r24.s64 = -1;
	// lis r28,-31762
	ctx.r28.s64 = -2081554432;
	// addi r25,r11,-2932
	ctx.r25.s64 = ctx.r11.s64 + -2932;
loc_837CC198:
	// lwz r11,-1692(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1692);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cc208
	if (!cr6.eq) goto loc_837CC208;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// oris r11,r11,65532
	ctx.r11.u64 = ctx.r11.u64 | 4294705152;
	// stw r10,-1692(r28)
	PPC_STORE_U32(ctx.r28.u32 + -1692, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stb r10,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r10.u8);
	// stb r9,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r9.u8);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stb r8,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r8.u8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82596fa8
	ctx.lr = 0x837CC1F4;
	sub_82596FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cb118
	ctx.lr = 0x837CC1FC;
	sub_837CB118(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,-17840
	ctx.r3.s64 = ctx.r9.s64 + -17840;
	// bl 0x831cdcc8
	ctx.lr = 0x837CC208;
	sub_831CDCC8(ctx, base);
loc_837CC208:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// cmpwi cr6,r19,2
	cr6.compare<int32_t>(ctx.r19.s32, 2, xer);
	// lwz r10,-2564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2564);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bge cr6,0x837cc220
	if (!cr6.lt) goto loc_837CC220;
	// lwz r30,-32(r20)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32);
loc_837CC220:
	// lbz r11,99(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 99);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cc23c
	if (!cr6.eq) goto loc_837CC23C;
	// lbz r11,101(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 101);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837cc240
	if (cr6.eq) goto loc_837CC240;
loc_837CC23C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CC240:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cc268
	if (!cr6.eq) goto loc_837CC268;
	// lwz r4,104(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837cc268
	if (cr6.eq) goto loc_837CC268;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837ce198
	ctx.lr = 0x837CC264;
	sub_837CE198(ctx, base);
	// b 0x837cc26c
	goto loc_837CC26C;
loc_837CC268:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_837CC26C:
	// lwz r11,-1692(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1692);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cc2dc
	if (!cr6.eq) goto loc_837CC2DC;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// oris r11,r11,65532
	ctx.r11.u64 = ctx.r11.u64 | 4294705152;
	// stw r10,-1692(r28)
	PPC_STORE_U32(ctx.r28.u32 + -1692, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stb r10,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r10.u8);
	// stb r9,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r9.u8);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stb r8,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r8.u8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82596fa8
	ctx.lr = 0x837CC2C8;
	sub_82596FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cb118
	ctx.lr = 0x837CC2D0;
	sub_837CB118(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,-17840
	ctx.r3.s64 = ctx.r9.s64 + -17840;
	// bl 0x831cdcc8
	ctx.lr = 0x837CC2DC;
	sub_831CDCC8(ctx, base);
loc_837CC2DC:
	// cmpwi cr6,r19,2
	cr6.compare<int32_t>(ctx.r19.s32, 2, xer);
	// blt cr6,0x837cc2f0
	if (cr6.lt) goto loc_837CC2F0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// b 0x837cc300
	goto loc_837CC300;
loc_837CC2F0:
	// lwz r17,0(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r16,8(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r15,16(r20)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// lwz r9,-8(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8);
loc_837CC300:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x837cc3b0
	if (cr6.eq) goto loc_837CC3B0;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// xor r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x837cc334
	if (!cr6.eq) goto loc_837CC334;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837cc338
	if (cr6.eq) goto loc_837CC338;
loc_837CC334:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CC338:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cc34c
	if (!cr6.eq) goto loc_837CC34C;
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
loc_837CC34C:
	// lwz r11,72(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 72);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x837cc360
	if (cr6.eq) goto loc_837CC360;
	// stw r9,72(r23)
	PPC_STORE_U32(ctx.r23.u32 + 72, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
loc_837CC360:
	// lwz r11,80(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 80);
	// cmpw cr6,r11,r17
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, xer);
	// beq cr6,0x837cc374
	if (cr6.eq) goto loc_837CC374;
	// stw r17,80(r23)
	PPC_STORE_U32(ctx.r23.u32 + 80, ctx.r17.u32);
	// li r10,1
	ctx.r10.s64 = 1;
loc_837CC374:
	// lwz r11,88(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// cmpw cr6,r11,r16
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, xer);
	// beq cr6,0x837cc388
	if (cr6.eq) goto loc_837CC388;
	// stw r16,88(r23)
	PPC_STORE_U32(ctx.r23.u32 + 88, ctx.r16.u32);
	// li r10,1
	ctx.r10.s64 = 1;
loc_837CC388:
	// lwz r11,96(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 96);
	// cmpw cr6,r11,r15
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r15.s32, xer);
	// beq cr6,0x837cc39c
	if (cr6.eq) goto loc_837CC39C;
	// stw r15,96(r23)
	PPC_STORE_U32(ctx.r23.u32 + 96, ctx.r15.u32);
	// li r10,1
	ctx.r10.s64 = 1;
loc_837CC39C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cc3b0
	if (cr6.eq) goto loc_837CC3B0;
	// ld r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// std r11,0(r18)
	PPC_STORE_U64(ctx.r18.u32 + 0, ctx.r11.u64);
loc_837CC3B0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xor r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// rlwinm r8,r10,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837cc3d8
	if (!cr6.eq) goto loc_837CC3D8;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cc3dc
	if (cr6.eq) goto loc_837CC3DC;
loc_837CC3D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CC3DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cc3ec
	if (!cr6.eq) goto loc_837CC3EC;
	// li r14,1
	ctx.r14.s64 = 1;
loc_837CC3EC:
	// lwz r11,40(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 40);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837cc41c
	if (!cr6.eq) goto loc_837CC41C;
	// lwz r11,48(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// cmpw cr6,r11,r17
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, xer);
	// bne cr6,0x837cc41c
	if (!cr6.eq) goto loc_837CC41C;
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// cmpw cr6,r11,r16
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, xer);
	// bne cr6,0x837cc41c
	if (!cr6.eq) goto loc_837CC41C;
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// cmpw cr6,r11,r15
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r15.s32, xer);
	// beq cr6,0x837cc420
	if (cr6.eq) goto loc_837CC420;
loc_837CC41C:
	// li r14,1
	ctx.r14.s64 = 1;
loc_837CC420:
	// addi r11,r22,197
	ctx.r11.s64 = ctx.r22.s64 + 197;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r26,r11,r21
	ctx.r26.u64 = ctx.r11.u64 + ctx.r21.u64;
loc_837CC42C:
	// lbz r11,99(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 99);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cc448
	if (!cr6.eq) goto loc_837CC448;
	// lbz r11,101(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 101);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837cc44c
	if (cr6.eq) goto loc_837CC44C;
loc_837CC448:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CC44C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cc478
	if (!cr6.eq) goto loc_837CC478;
	// lwz r3,104(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cc478
	if (cr6.eq) goto loc_837CC478;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x837ce2b0
	ctx.lr = 0x837CC470;
	sub_837CE2B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x837cc47c
	goto loc_837CC47C;
loc_837CC478:
	// li r29,9
	ctx.r29.s64 = 9;
loc_837CC47C:
	// lwz r11,-1692(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1692);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cc4ec
	if (!cr6.eq) goto loc_837CC4EC;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// oris r11,r11,65532
	ctx.r11.u64 = ctx.r11.u64 | 4294705152;
	// stw r10,-1692(r28)
	PPC_STORE_U32(ctx.r28.u32 + -1692, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stb r10,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r10.u8);
	// stb r9,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r9.u8);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stb r8,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r8.u8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82596fa8
	ctx.lr = 0x837CC4D8;
	sub_82596FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cb118
	ctx.lr = 0x837CC4E0;
	sub_837CB118(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,-17840
	ctx.r3.s64 = ctx.r9.s64 + -17840;
	// bl 0x831cdcc8
	ctx.lr = 0x837CC4EC;
	sub_831CDCC8(ctx, base);
loc_837CC4EC:
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// cmpw cr6,r20,r11
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, xer);
	// bge cr6,0x837cc518
	if (!cr6.lt) goto loc_837CC518;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// bge cr6,0x837cc518
	if (!cr6.lt) goto loc_837CC518;
	// add r11,r21,r30
	ctx.r11.u64 = ctx.r21.u64 + ctx.r30.u64;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// addi r9,r11,-39
	ctx.r9.s64 = ctx.r11.s64 + -39;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// b 0x837cc51c
	goto loc_837CC51C;
loc_837CC518:
	// li r11,9
	ctx.r11.s64 = 9;
loc_837CC51C:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x837cc544
	if (cr6.eq) goto loc_837CC544;
	// add r10,r21,r30
	ctx.r10.u64 = ctx.r21.u64 + ctx.r30.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// beq cr6,0x837cc544
	if (cr6.eq) goto loc_837CC544;
	// ld r9,272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// stwx r11,r10,r22
	PPC_STORE_U32(ctx.r10.u32 + ctx.r22.u32, ctx.r11.u32);
	// std r9,0(r18)
	PPC_STORE_U64(ctx.r18.u32 + 0, ctx.r9.u64);
loc_837CC544:
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// beq cr6,0x837cc550
	if (cr6.eq) goto loc_837CC550;
	// li r14,1
	ctx.r14.s64 = 1;
loc_837CC550:
	// lbzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cc560
	if (cr6.eq) goto loc_837CC560;
	// li r14,1
	ctx.r14.s64 = 1;
loc_837CC560:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x837cc42c
	if (cr6.lt) goto loc_837CC42C;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r21,r21,2
	ctx.r21.s64 = ctx.r21.s64 + 2;
	// cmpw cr6,r20,r11
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, xer);
	// blt cr6,0x837cc198
	if (cr6.lt) goto loc_837CC198;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CC594"))) PPC_WEAK_FUNC(sub_837CC594);
PPC_FUNC_IMPL(__imp__sub_837CC594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CC598"))) PPC_WEAK_FUNC(sub_837CC598);
PPC_FUNC_IMPL(__imp__sub_837CC598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x837CC5A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cc5c0
	if (!cr6.eq) goto loc_837CC5C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_837CC5C0:
	// subfic r10,r19,-209
	xer.ca = ctx.r19.u32 <= 4294967087;
	ctx.r10.s64 = -209 - ctx.r19.s64;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r31,r11,-1792
	ctx.r31.s64 = ctx.r11.s64 + -1792;
	// lwz r14,96(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subfic r9,r19,-236
	xer.ca = ctx.r19.u32 <= 4294967060;
	ctx.r9.s64 = -236 - ctx.r19.s64;
	// lwz r15,96(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r16,r22
	ctx.r16.u64 = ctx.r22.u64;
	// addi r18,r31,40
	ctx.r18.s64 = ctx.r31.s64 + 40;
	// addi r20,r19,236
	ctx.r20.s64 = ctx.r19.s64 + 236;
	// addi r21,r19,172
	ctx.r21.s64 = ctx.r19.s64 + 172;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r17,1
	ctx.r17.s64 = 1;
	// lis r28,-31762
	ctx.r28.s64 = -2081554432;
	// addi r26,r11,-2932
	ctx.r26.s64 = ctx.r11.s64 + -2932;
loc_837CC614:
	// lwz r11,-1692(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1692);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cc684
	if (!cr6.eq) goto loc_837CC684;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// oris r11,r11,65532
	ctx.r11.u64 = ctx.r11.u64 | 4294705152;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// stb r22,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r22.u8);
	// stw r10,-1692(r28)
	PPC_STORE_U32(ctx.r28.u32 + -1692, ctx.r10.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stb r22,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r22.u8);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stb r22,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r22.u8);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// bl 0x82596fa8
	ctx.lr = 0x837CC670;
	sub_82596FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cb118
	ctx.lr = 0x837CC678;
	sub_837CB118(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,-17840
	ctx.r3.s64 = ctx.r9.s64 + -17840;
	// bl 0x831cdcc8
	ctx.lr = 0x837CC684;
	sub_831CDCC8(ctx, base);
loc_837CC684:
	// cmpwi cr6,r16,2
	cr6.compare<int32_t>(ctx.r16.s32, 2, xer);
	// blt cr6,0x837cc698
	if (cr6.lt) goto loc_837CC698;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lwz r27,-2564(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2564);
	// b 0x837cc69c
	goto loc_837CC69C;
loc_837CC698:
	// lwz r27,-32(r18)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32);
loc_837CC69C:
	// lbz r11,99(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 99);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cc6b8
	if (!cr6.eq) goto loc_837CC6B8;
	// lbz r11,101(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 101);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// beq cr6,0x837cc6bc
	if (cr6.eq) goto loc_837CC6BC;
loc_837CC6B8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_837CC6BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cc6e4
	if (!cr6.eq) goto loc_837CC6E4;
	// lwz r4,104(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837cc6e4
	if (cr6.eq) goto loc_837CC6E4;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x837ce198
	ctx.lr = 0x837CC6E0;
	sub_837CE198(ctx, base);
	// b 0x837cc6f0
	goto loc_837CC6F0;
loc_837CC6E4:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lwz r11,-2564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2564);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_837CC6F0:
	// lwz r11,-1692(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1692);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cc760
	if (!cr6.eq) goto loc_837CC760;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// oris r11,r11,65532
	ctx.r11.u64 = ctx.r11.u64 | 4294705152;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// stb r22,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r22.u8);
	// stw r10,-1692(r28)
	PPC_STORE_U32(ctx.r28.u32 + -1692, ctx.r10.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stb r22,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r22.u8);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stb r22,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r22.u8);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// bl 0x82596fa8
	ctx.lr = 0x837CC74C;
	sub_82596FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cb118
	ctx.lr = 0x837CC754;
	sub_837CB118(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,-17840
	ctx.r3.s64 = ctx.r9.s64 + -17840;
	// bl 0x831cdcc8
	ctx.lr = 0x837CC760;
	sub_831CDCC8(ctx, base);
loc_837CC760:
	// cmpwi cr6,r16,2
	cr6.compare<int32_t>(ctx.r16.s32, 2, xer);
	// blt cr6,0x837cc774
	if (cr6.lt) goto loc_837CC774;
	// lis r29,0
	ctx.r29.s64 = 0;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
	// b 0x837cc788
	goto loc_837CC788;
loc_837CC774:
	// lwz r11,16(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// lwz r15,0(r18)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r14,8(r18)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// lwz r29,-8(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + -8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_837CC788:
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cc810
	if (!cr6.eq) goto loc_837CC810;
	// lbz r11,1(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cc810
	if (!cr6.eq) goto loc_837CC810;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// xor r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r27.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837cc7c8
	if (!cr6.eq) goto loc_837CC7C8;
	// xor r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r27.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cc7cc
	if (cr6.eq) goto loc_837CC7CC;
loc_837CC7C8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_837CC7CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cc85c
	if (cr6.eq) goto loc_837CC85C;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x837cc85c
	if (!cr6.eq) goto loc_837CC85C;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmpw cr6,r11,r15
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r15.s32, xer);
	// bne cr6,0x837cc85c
	if (!cr6.eq) goto loc_837CC85C;
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// cmpw cr6,r11,r14
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r14.s32, xer);
	// bne cr6,0x837cc85c
	if (!cr6.eq) goto loc_837CC85C;
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x837cc85c
	if (!cr6.eq) goto loc_837CC85C;
	// b 0x837cc9e0
	goto loc_837CC9E0;
loc_837CC810:
	// lbz r11,97(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cc85c
	if (cr6.eq) goto loc_837CC85C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,104(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 104);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x837ce0c0
	ctx.lr = 0x837CC82C;
	sub_837CE0C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cc83c
	if (cr6.eq) goto loc_837CC83C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837cd278
	ctx.lr = 0x837CC83C;
	sub_837CD278(ctx, base);
loc_837CC83C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,104(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 104);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x837ce0c0
	ctx.lr = 0x837CC84C;
	sub_837CE0C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cc85c
	if (cr6.eq) goto loc_837CC85C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837cd278
	ctx.lr = 0x837CC85C;
	sub_837CD278(ctx, base);
loc_837CC85C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r27,-48(r21)
	PPC_STORE_U32(ctx.r21.u32 + -48, ctx.r27.u32);
	// add r24,r10,r20
	ctx.r24.u64 = ctx.r10.u64 + ctx.r20.u64;
	// stw r29,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r29.u32);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stb r17,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r17.u8);
	// add r23,r9,r20
	ctx.r23.u64 = ctx.r9.u64 + ctx.r20.u64;
	// stw r15,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r15.u32);
	// stw r14,16(r21)
	PPC_STORE_U32(ctx.r21.u32 + 16, ctx.r14.u32);
	// stw r11,24(r21)
	PPC_STORE_U32(ctx.r21.u32 + 24, ctx.r11.u32);
loc_837CC88C:
	// lwz r11,-1692(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1692);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cc8fc
	if (!cr6.eq) goto loc_837CC8FC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// oris r10,r10,65532
	ctx.r10.u64 = ctx.r10.u64 | 4294705152;
	// stw r11,-1692(r28)
	PPC_STORE_U32(ctx.r28.u32 + -1692, ctx.r11.u32);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// or r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 | ctx.r30.u64;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// stb r22,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r22.u8);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stb r22,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r22.u8);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stb r22,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r22.u8);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82596fa8
	ctx.lr = 0x837CC8E4;
	sub_82596FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cb118
	ctx.lr = 0x837CC8EC;
	sub_837CB118(ctx, base);
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17840
	ctx.r3.s64 = ctx.r11.s64 + -17840;
	// bl 0x831cdcc8
	ctx.lr = 0x837CC8F8;
	sub_831CDCC8(ctx, base);
	// lwz r11,-1692(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1692);
loc_837CC8FC:
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// cmpw cr6,r18,r10
	cr6.compare<int32_t>(ctx.r18.s32, ctx.r10.s32, xer);
	// bge cr6,0x837cc924
	if (!cr6.lt) goto loc_837CC924;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// bge cr6,0x837cc924
	if (!cr6.lt) goto loc_837CC924;
	// add r10,r24,r29
	ctx.r10.u64 = ctx.r24.u64 + ctx.r29.u64;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x837cc928
	goto loc_837CC928;
loc_837CC924:
	// li r10,9
	ctx.r10.s64 = 9;
loc_837CC928:
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// bne cr6,0x837cc9b4
	if (!cr6.eq) goto loc_837CC9B4;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cc9a0
	if (!cr6.eq) goto loc_837CC9A0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// oris r10,r10,65532
	ctx.r10.u64 = ctx.r10.u64 | 4294705152;
	// stw r11,-1692(r28)
	PPC_STORE_U32(ctx.r28.u32 + -1692, ctx.r11.u32);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// or r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 | ctx.r30.u64;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// stb r22,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r22.u8);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stb r22,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r22.u8);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stb r22,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r22.u8);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82596fa8
	ctx.lr = 0x837CC98C;
	sub_82596FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cb118
	ctx.lr = 0x837CC994;
	sub_837CB118(ctx, base);
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17840
	ctx.r3.s64 = ctx.r11.s64 + -17840;
	// bl 0x831cdcc8
	ctx.lr = 0x837CC9A0;
	sub_831CDCC8(ctx, base);
loc_837CC9A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x837cb218
	ctx.lr = 0x837CC9B4;
	sub_837CB218(ctx, base);
loc_837CC9B4:
	// add r11,r24,r29
	ctx.r11.u64 = ctx.r24.u64 + ctx.r29.u64;
	// add r10,r23,r29
	ctx.r10.u64 = ctx.r23.u64 + ctx.r29.u64;
	// addi r9,r11,35
	ctx.r9.s64 = ctx.r11.s64 + 35;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r17,r8,r19
	PPC_STORE_U32(ctx.r8.u32 + ctx.r19.u32, ctx.r17.u32);
	// stwx r27,r7,r19
	PPC_STORE_U32(ctx.r7.u32 + ctx.r19.u32, ctx.r27.u32);
	// stbx r22,r20,r29
	PPC_STORE_U8(ctx.r20.u32 + ctx.r29.u32, ctx.r22.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x837cc88c
	if (cr6.lt) goto loc_837CC88C;
loc_837CC9E0:
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// addi r20,r20,2
	ctx.r20.s64 = ctx.r20.s64 + 2;
	// cmpw cr6,r18,r11
	cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, xer);
	// blt cr6,0x837cc614
	if (cr6.lt) goto loc_837CC614;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CCA08"))) PPC_WEAK_FUNC(sub_837CCA08);
PPC_FUNC_IMPL(__imp__sub_837CCA08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x837CCA10;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cca30
	if (!cr6.eq) goto loc_837CCA30;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_837CCA30:
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r27,35
	ctx.r27.s64 = 35;
	// ori r29,r9,65535
	ctx.r29.u64 = ctx.r9.u64 | 65535;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r23,1
	ctx.r23.s64 = 1;
	// lis r30,-31762
	ctx.r30.s64 = -2081554432;
	// addi r26,r10,-2932
	ctx.r26.s64 = ctx.r10.s64 + -2932;
	// addi r31,r11,-1792
	ctx.r31.s64 = ctx.r11.s64 + -1792;
loc_837CCA5C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_837CCA60:
	// lwz r11,-1692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1692);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837ccad0
	if (!cr6.eq) goto loc_837CCAD0;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// oris r11,r11,65532
	ctx.r11.u64 = ctx.r11.u64 | 4294705152;
	// stw r10,-1692(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1692, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// stb r10,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r10.u8);
	// stb r9,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r9.u8);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stb r8,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r8.u8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82596fa8
	ctx.lr = 0x837CCABC;
	sub_82596FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cb118
	ctx.lr = 0x837CCAC4;
	sub_837CB118(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,-17840
	ctx.r3.s64 = ctx.r9.s64 + -17840;
	// bl 0x831cdcc8
	ctx.lr = 0x837CCAD0;
	sub_831CDCC8(ctx, base);
loc_837CCAD0:
	// cmpwi cr6,r27,39
	cr6.compare<int32_t>(ctx.r27.s32, 39, xer);
	// bge cr6,0x837ccb28
	if (!cr6.lt) goto loc_837CCB28;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// bge cr6,0x837ccb28
	if (!cr6.lt) goto loc_837CCB28;
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// addi r9,r11,-35
	ctx.r9.s64 = ctx.r11.s64 + -35;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x837ccb28
	if (cr6.eq) goto loc_837CCB28;
	// add r10,r27,r28
	ctx.r10.u64 = ctx.r27.u64 + ctx.r28.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// beq cr6,0x837ccb28
	if (cr6.eq) goto loc_837CCB28;
	// add r9,r27,r28
	ctx.r9.u64 = ctx.r27.u64 + ctx.r28.u64;
	// stwx r11,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r11.u32);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r23.u32);
loc_837CCB28:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// blt cr6,0x837cca60
	if (cr6.lt) goto loc_837CCA60;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmpwi cr6,r27,39
	cr6.compare<int32_t>(ctx.r27.s32, 39, xer);
	// blt cr6,0x837cca5c
	if (cr6.lt) goto loc_837CCA5C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CCB4C"))) PPC_WEAK_FUNC(sub_837CCB4C);
PPC_FUNC_IMPL(__imp__sub_837CCB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CCB50"))) PPC_WEAK_FUNC(sub_837CCB50);
PPC_FUNC_IMPL(__imp__sub_837CCB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x837CCB58;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x837cac90
	ctx.lr = 0x837CCB64;
	sub_837CAC90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ccb90
	if (cr6.eq) goto loc_837CCB90;
	// lwz r11,72(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 72);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// stb r10,99(r23)
	PPC_STORE_U8(ctx.r23.u32 + 99, ctx.r10.u8);
	// stw r9,72(r23)
	PPC_STORE_U32(ctx.r23.u32 + 72, ctx.r9.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_837CCB90:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837cb4c8
	ctx.lr = 0x837CCB98;
	sub_837CB4C8(ctx, base);
	// bl 0x82aacdd8
	ctx.lr = 0x837CCB9C;
	sub_82AACDD8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82aacdd8
	ctx.lr = 0x837CCBA8;
	sub_82AACDD8(ctx, base);
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r8,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// lwz r10,-2564(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -2564);
	// rlwinm r6,r9,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// rlwimi r11,r8,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// rlwinm r8,r10,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x837ccbec
	if (!cr6.eq) goto loc_837CCBEC;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r7,r9,14
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x837ccbf0
	if (cr6.eq) goto loc_837CCBF0;
loc_837CCBEC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_837CCBF0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837ccc38
	if (cr6.eq) goto loc_837CCC38;
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x837ccc1c
	if (!cr6.eq) goto loc_837CCC1C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837ccc20
	if (cr6.eq) goto loc_837CCC20;
loc_837CCC1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CCC20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ccc38
	if (cr6.eq) goto loc_837CCC38;
loc_837CCC2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_837CCC38:
	// lbz r11,96(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 96);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r24,r1,144
	ctx.r24.s64 = ctx.r1.s64 + 144;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r7,97(r23)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r23.u32 + 97);
	// lbz r6,100(r23)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r23.u32 + 100);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// subfe r5,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// lis r10,-31762
	ctx.r10.s64 = -2081554432;
	// stb r7,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r7.u8);
	// stb r6,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r6.u8);
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// lis r28,-31762
	ctx.r28.s64 = -2081554432;
	// addi r27,r11,-2932
	ctx.r27.s64 = ctx.r11.s64 + -2932;
	// addi r31,r10,-1792
	ctx.r31.s64 = ctx.r10.s64 + -1792;
loc_837CCC88:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x837cc040
	ctx.lr = 0x837CCCA0;
	sub_837CC040(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r25,r22,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,-8(r24)
	PPC_STORE_U32(ctx.r24.u32 + -8, ctx.r3.u32);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r10,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r10.u32);
	// stw r9,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r9.u32);
loc_837CCCC4:
	// lwz r10,-1692(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1692);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ccd30
	if (!cr6.eq) goto loc_837CCD30;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// oris r11,r11,65532
	ctx.r11.u64 = ctx.r11.u64 | 4294705152;
	// stw r10,-1692(r28)
	PPC_STORE_U32(ctx.r28.u32 + -1692, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// stb r10,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r10.u8);
	// stb r9,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r9.u8);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stb r8,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r8.u8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82596fa8
	ctx.lr = 0x837CCD1C;
	sub_82596FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cb118
	ctx.lr = 0x837CCD24;
	sub_837CB118(ctx, base);
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17840
	ctx.r3.s64 = ctx.r11.s64 + -17840;
	// bl 0x831cdcc8
	ctx.lr = 0x837CCD30;
	sub_831CDCC8(ctx, base);
loc_837CCD30:
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(ctx.r22.s32, 2, xer);
	// bge cr6,0x837ccd54
	if (!cr6.lt) goto loc_837CCD54;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// bge cr6,0x837ccd54
	if (!cr6.lt) goto loc_837CCD54;
	// add r11,r25,r29
	ctx.r11.u64 = ctx.r25.u64 + ctx.r29.u64;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x837ccd58
	goto loc_837CCD58;
loc_837CCD54:
	// li r11,9
	ctx.r11.s64 = 9;
loc_837CCD58:
	// add r10,r25,r29
	ctx.r10.u64 = ctx.r25.u64 + ctx.r29.u64;
	// add r9,r25,r29
	ctx.r9.u64 = ctx.r25.u64 + ctx.r29.u64;
	// addi r8,r10,35
	ctx.r8.s64 = ctx.r10.s64 + 35;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// stwx r11,r6,r23
	PPC_STORE_U32(ctx.r6.u32 + ctx.r23.u32, ctx.r11.u32);
	// stwx r11,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r11.u32);
	// blt cr6,0x837cccc4
	if (cr6.lt) goto loc_837CCCC4;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(ctx.r22.s32, 2, xer);
	// blt cr6,0x837ccc88
	if (cr6.lt) goto loc_837CCC88;
	// lwz r11,104(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 104);
	// li r31,32
	ctx.r31.s64 = 32;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ccde4
	if (cr6.eq) goto loc_837CCDE4;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x837CCDB4;
	sub_82595150(ctx, base);
	// lwz r3,104(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ccdd4
	if (cr6.eq) goto loc_837CCDD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CCDD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837CCDD4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x837CCDDC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r23)
	PPC_STORE_U32(ctx.r23.u32 + 104, ctx.r11.u32);
loc_837CCDE4:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x837CCDF8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cce0c
	if (cr6.eq) goto loc_837CCE0C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x837cea90
	ctx.lr = 0x837CCE08;
	sub_837CEA90(ctx, base);
	// b 0x837cce10
	goto loc_837CCE10;
loc_837CCE0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837CCE10:
	// stw r3,104(r23)
	PPC_STORE_U32(ctx.r23.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ccc2c
	if (cr6.eq) goto loc_837CCC2C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,124(r23)
	PPC_STORE_U32(ctx.r23.u32 + 124, ctx.r11.u32);
	// stw r10,128(r23)
	PPC_STORE_U32(ctx.r23.u32 + 128, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CCE38"))) PPC_WEAK_FUNC(sub_837CCE38);
PPC_FUNC_IMPL(__imp__sub_837CCE38) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x837ccec8
	if (!cr6.eq) goto loc_837CCEC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837cc140
	ctx.lr = 0x837CCE68;
	sub_837CC140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ccec8
	if (!cr6.eq) goto loc_837CCEC8;
	// bl 0x8378cba8
	ctx.lr = 0x837CCE78;
	sub_8378CBA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ccec8
	if (cr6.eq) goto loc_837CCEC8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CCE98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ccec8
	if (cr6.eq) goto loc_837CCEC8;
	// lbz r11,99(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 99);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cceb8
	if (!cr6.eq) goto loc_837CCEB8;
	// lbz r11,101(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 101);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ccec8
	if (cr6.eq) goto loc_837CCEC8;
loc_837CCEB8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378cc08
	ctx.lr = 0x837CCEC4;
	sub_8378CC08(ctx, base);
	// b 0x837ccecc
	goto loc_837CCECC;
loc_837CCEC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837CCECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CCEE4"))) PPC_WEAK_FUNC(sub_837CCEE4);
PPC_FUNC_IMPL(__imp__sub_837CCEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CCEE8"))) PPC_WEAK_FUNC(sub_837CCEE8);
PPC_FUNC_IMPL(__imp__sub_837CCEE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837ccef8
	if (!cr6.eq) goto loc_837CCEF8;
	// blr 
	return;
loc_837CCEF8:
	// b 0x837cce38
	sub_837CCE38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CCEFC"))) PPC_WEAK_FUNC(sub_837CCEFC);
PPC_FUNC_IMPL(__imp__sub_837CCEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CCF00"))) PPC_WEAK_FUNC(sub_837CCF00);
PPC_FUNC_IMPL(__imp__sub_837CCF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837CCF08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82aacdd8
	ctx.lr = 0x837CCF14;
	sub_82AACDD8(ctx, base);
	// addi r28,r3,68
	ctx.r28.s64 = ctx.r3.s64 + 68;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837CCF20;
	sub_82596FE8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x837cd1b0
	if (cr6.eq) goto loc_837CD1B0;
	// bl 0x83a7d958
	ctx.lr = 0x837CCF30;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x837CCF34;
	sub_83524138(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837ccf50
	if (cr6.eq) goto loc_837CCF50;
	// std r3,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r3.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x837ccf68
	goto loc_837CCF68;
loc_837CCF50:
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpldi cr6,r10,400
	cr6.compare<uint64_t>(ctx.r10.u64, 400, xer);
	// ble cr6,0x837ccf68
	if (!cr6.gt) goto loc_837CCF68;
	// li r11,1
	ctx.r11.s64 = 1;
loc_837CCF68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ccfc0
	if (cr6.eq) goto loc_837CCFC0;
	// lbz r11,98(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 98);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ccf94
	if (cr6.eq) goto loc_837CCF94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cce38
	ctx.lr = 0x837CCF88;
	sub_837CCE38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ccfc0
	if (cr6.eq) goto loc_837CCFC0;
loc_837CCF94:
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x837cb780
	ctx.lr = 0x837CCFA4;
	sub_837CB780(ctx, base);
	// bl 0x82aacdd8
	ctx.lr = 0x837CCFA8;
	sub_82AACDD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837cb1b0
	ctx.lr = 0x837CCFB0;
	sub_837CB1B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837CCFB8;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CCFC0:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x837cd1b0
	if (cr6.gt) goto loc_837CD1B0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837cd030
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837CD030;
	// bdzf 4*cr6+eq,0x837cd04c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837CD04C;
	// bdzf 4*cr6+eq,0x837cd068
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837CD068;
	// bdzf 4*cr6+eq,0x837cd16c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837CD16C;
	// bdzf 4*cr6+eq,0x837cd188
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837CD188;
	// bdzf 4*cr6+eq,0x837cd1a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837CD1A4;
	// bne cr6,0x837cd084
	if (!cr6.eq) goto loc_837CD084;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cc140
	ctx.lr = 0x837CD000;
	sub_837CC140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cd1b0
	if (cr6.eq) goto loc_837CD1B0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// bl 0x82597088
	ctx.lr = 0x837CD028;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CD030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837ccb50
	ctx.lr = 0x837CD038;
	sub_837CCB50(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837CD044;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CD04C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cb618
	ctx.lr = 0x837CD054;
	sub_837CB618(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837CD060;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CD068:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cbb20
	ctx.lr = 0x837CD070;
	sub_837CBB20(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837CD07C;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CD084:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cd0ec
	if (!cr6.eq) goto loc_837CD0EC;
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cc140
	ctx.lr = 0x837CD0A8;
	sub_837CC140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cd0bc
	if (!cr6.eq) goto loc_837CD0BC;
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// b 0x837cd0d4
	goto loc_837CD0D4;
loc_837CD0BC:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpldi cr6,r10,300
	cr6.compare<uint64_t>(ctx.r10.u64, 300, xer);
	// ble cr6,0x837cd0d4
	if (!cr6.gt) goto loc_837CD0D4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_837CD0D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cd0ec
	if (cr6.eq) goto loc_837CD0EC;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_837CD0EC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cd1b0
	if (cr6.eq) goto loc_837CD1B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cc598
	ctx.lr = 0x837CD104;
	sub_837CC598(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cd134
	if (cr6.eq) goto loc_837CD134;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// bl 0x82597088
	ctx.lr = 0x837CD12C;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CD134:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cca08
	ctx.lr = 0x837CD13C;
	sub_837CCA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cd150
	if (cr6.eq) goto loc_837CD150;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_837CD150:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// bl 0x82597088
	ctx.lr = 0x837CD164;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CD16C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cb858
	ctx.lr = 0x837CD174;
	sub_837CB858(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837CD180;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CD188:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cb9d8
	ctx.lr = 0x837CD190;
	sub_837CB9D8(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837CD19C;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CD1A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cb6c0
	ctx.lr = 0x837CD1AC;
	sub_837CB6C0(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
loc_837CD1B0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837CD1B8;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CD1C0"))) PPC_WEAK_FUNC(sub_837CD1C0);
PPC_FUNC_IMPL(__imp__sub_837CD1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837CD1C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r9,14
	ctx.r9.s64 = 14;
	// addi r10,r11,14016
	ctx.r10.s64 = ctx.r11.s64 + 14016;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x825749e0
	ctx.lr = 0x837CD1F8;
	sub_825749E0(ctx, base);
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r7,r8,-2740
	ctx.r7.s64 = ctx.r8.s64 + -2740;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x82596fa8
	ctx.lr = 0x837CD214;
	sub_82596FA8(ctx, base);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// stb r30,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CD228"))) PPC_WEAK_FUNC(sub_837CD228);
PPC_FUNC_IMPL(__imp__sub_837CD228) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-2720
	ctx.r9.s64 = ctx.r10.s64 + -2720;
	// li r8,600
	ctx.r8.s64 = 600;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CD250"))) PPC_WEAK_FUNC(sub_837CD250);
PPC_FUNC_IMPL(__imp__sub_837CD250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CD278"))) PPC_WEAK_FUNC(sub_837CD278);
PPC_FUNC_IMPL(__imp__sub_837CD278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837CD280;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r28,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r28.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cd31c
	if (!cr6.eq) goto loc_837CD31C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cd2dc
	if (cr6.eq) goto loc_837CD2DC;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r29,21944(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837cd2d8
	if (cr6.eq) goto loc_837CD2D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8308bad8
	ctx.lr = 0x837CD2C4;
	sub_8308BAD8(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x837cd2d8
	if (cr6.eq) goto loc_837CD2D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8308b438
	ctx.lr = 0x837CD2D8;
	sub_8308B438(ctx, base);
loc_837CD2D8:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_837CD2DC:
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837cd310
	if (cr6.eq) goto loc_837CD310;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x837CD2F0;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x837cd30c
	if (cr6.gt) goto loc_837CD30C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CD30C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837CD30C:
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_837CD310:
	// li r11,600
	ctx.r11.s64 = 600;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_837CD31C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CD324"))) PPC_WEAK_FUNC(sub_837CD324);
PPC_FUNC_IMPL(__imp__sub_837CD324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CD328"))) PPC_WEAK_FUNC(sub_837CD328);
PPC_FUNC_IMPL(__imp__sub_837CD328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CD340"))) PPC_WEAK_FUNC(sub_837CD340);
PPC_FUNC_IMPL(__imp__sub_837CD340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-2720
	ctx.r10.s64 = ctx.r11.s64 + -2720;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x837cd278
	sub_837CD278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CD354"))) PPC_WEAK_FUNC(sub_837CD354);
PPC_FUNC_IMPL(__imp__sub_837CD354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CD358"))) PPC_WEAK_FUNC(sub_837CD358);
PPC_FUNC_IMPL(__imp__sub_837CD358) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-2740
	ctx.r9.s64 = ctx.r11.s64 + -2740;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x837cd3b0
	if (cr6.eq) goto loc_837CD3B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837CD398;
	sub_82595150(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82416268
	ctx.lr = 0x837CD3A0;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837CD3A8;
	sub_82595170(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_837CD3B0:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82596f90
	ctx.lr = 0x837CD3B8;
	sub_82596F90(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,-32552
	ctx.r10.s64 = ctx.r11.s64 + -32552;
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

__attribute__((alias("__imp__sub_837CD3D8"))) PPC_WEAK_FUNC(sub_837CD3D8);
PPC_FUNC_IMPL(__imp__sub_837CD3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837CD3E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,20
	ctx.r28.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837CD3F4;
	sub_82596FE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cd42c
	if (cr6.eq) goto loc_837CD42C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837CD418;
	sub_82595150(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82416268
	ctx.lr = 0x837CD420;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837CD428;
	sub_82595170(ctx, base);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_837CD42C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stb r30,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r30.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// beq cr6,0x837cd444
	if (cr6.eq) goto loc_837CD444;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_837CD444:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837CD44C;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CD458"))) PPC_WEAK_FUNC(sub_837CD458);
PPC_FUNC_IMPL(__imp__sub_837CD458) {
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
	// bl 0x837cd358
	ctx.lr = 0x837CD478;
	sub_837CD358(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cd498
	if (cr6.eq) goto loc_837CD498;
	// bl 0x82595188
	ctx.lr = 0x837CD488;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837CD498;
	sub_825952B8(ctx, base);
loc_837CD498:
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

__attribute__((alias("__imp__sub_837CD4B4"))) PPC_WEAK_FUNC(sub_837CD4B4);
PPC_FUNC_IMPL(__imp__sub_837CD4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CD4B8"))) PPC_WEAK_FUNC(sub_837CD4B8);
PPC_FUNC_IMPL(__imp__sub_837CD4B8) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-2720
	ctx.r10.s64 = ctx.r11.s64 + -2720;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x837cd278
	ctx.lr = 0x837CD4E8;
	sub_837CD278(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837cd500
	if (cr6.eq) goto loc_837CD500;
	// bl 0x82416268
	ctx.lr = 0x837CD4FC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837CD500:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CD518"))) PPC_WEAK_FUNC(sub_837CD518);
PPC_FUNC_IMPL(__imp__sub_837CD518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837CD520;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r28,21944(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x837cd6e4
	if (cr6.eq) goto loc_837CD6E4;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-2460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2460);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837cd580
	if (!cr6.eq) goto loc_837CD580;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837cd584
	if (cr6.eq) goto loc_837CD584;
loc_837CD580:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CD584:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cd6e4
	if (!cr6.eq) goto loc_837CD6E4;
	// clrlwi r11,r10,14
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplwi cr6,r11,140
	cr6.compare<uint32_t>(ctx.r11.u32, 140, xer);
	// beq cr6,0x837cd6e4
	if (cr6.eq) goto loc_837CD6E4;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_837CD5AC:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x837cd5ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837CD5AC;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// bl 0x837b9858
	ctx.lr = 0x837CD5D4;
	sub_837B9858(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cd6e4
	if (cr6.eq) goto loc_837CD6E4;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cd6e4
	if (cr6.eq) goto loc_837CD6E4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r31,r11,11,21,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7FF;
	// cmplwi cr6,r31,600
	cr6.compare<uint32_t>(ctx.r31.u32, 600, xer);
	// bge cr6,0x837cd6e4
	if (!cr6.lt) goto loc_837CD6E4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x837cd6e4
	if (cr6.eq) goto loc_837CD6E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837cd278
	ctx.lr = 0x837CD614;
	sub_837CD278(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// bne cr6,0x837cd664
	if (!cr6.eq) goto loc_837CD664;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82595718
	ctx.lr = 0x837CD640;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cd654
	if (cr6.eq) goto loc_837CD654;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837cd1c0
	ctx.lr = 0x837CD650;
	sub_837CD1C0(ctx, base);
	// b 0x837cd658
	goto loc_837CD658;
loc_837CD654:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837CD658:
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cd6c4
	if (cr6.eq) goto loc_837CD6C4;
loc_837CD664:
	// li r29,10
	ctx.r29.s64 = 10;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595718
	ctx.lr = 0x837CD680;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cd6c4
	if (cr6.eq) goto loc_837CD6C4;
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8308f290
	ctx.lr = 0x837CD6A8;
	sub_8308F290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// bne cr6,0x837cd6d0
	if (!cr6.eq) goto loc_837CD6D0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x837CD6C4;
	sub_825952B8(ctx, base);
loc_837CD6C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CD6D0:
	// stw r29,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8308cf58
	ctx.lr = 0x837CD6E4;
	sub_8308CF58(ctx, base);
loc_837CD6E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CD6F0"))) PPC_WEAK_FUNC(sub_837CD6F0);
PPC_FUNC_IMPL(__imp__sub_837CD6F0) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837cd75c
	if (!cr6.eq) goto loc_837CD75C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837CD724;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cd758
	if (cr6.eq) goto loc_837CD758;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837CD73C:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x837cd73c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837CD73C;
	// stbx r9,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_837CD758:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837CD75C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CD76C"))) PPC_WEAK_FUNC(sub_837CD76C);
PPC_FUNC_IMPL(__imp__sub_837CD76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CD770"))) PPC_WEAK_FUNC(sub_837CD770);
PPC_FUNC_IMPL(__imp__sub_837CD770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837CD778;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,20
	ctx.r27.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837CD794;
	sub_82596FE8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x837cd6f0
	ctx.lr = 0x837CD7A4;
	sub_837CD6F0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cd7d8
	if (cr6.eq) goto loc_837CD7D8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x837CD7BC;
	sub_831CE980(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cd7cc
	if (cr6.eq) goto loc_837CD7CC;
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
loc_837CD7CC:
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r26,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r26.u8);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
loc_837CD7D8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x837CD7E0;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CD7EC"))) PPC_WEAK_FUNC(sub_837CD7EC);
PPC_FUNC_IMPL(__imp__sub_837CD7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CD7F0"))) PPC_WEAK_FUNC(sub_837CD7F0);
PPC_FUNC_IMPL(__imp__sub_837CD7F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837CD7F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x837d33e8
	ctx.lr = 0x837CD818;
	sub_837D33E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// and r27,r7,r31
	ctx.r27.u64 = ctx.r7.u64 & ctx.r31.u64;
	// bl 0x837d3118
	ctx.lr = 0x837CD838;
	sub_837D3118(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r3,r27
	ctx.r29.u64 = ctx.r3.u64 & ctx.r27.u64;
loc_837CD850:
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// bl 0x837cd250
	ctx.lr = 0x837CD86C;
	sub_837CD250(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 & ctx.r29.u64;
	// blt cr6,0x837cd850
	if (cr6.lt) goto loc_837CD850;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CD894"))) PPC_WEAK_FUNC(sub_837CD894);
PPC_FUNC_IMPL(__imp__sub_837CD894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CD898"))) PPC_WEAK_FUNC(sub_837CD898);
PPC_FUNC_IMPL(__imp__sub_837CD898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837CD8A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// bl 0x8378cba8
	ctx.lr = 0x837CD8B0;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cd8c8
	if (cr6.eq) goto loc_837CD8C8;
	// bl 0x8378cd40
	ctx.lr = 0x837CD8BC;
	sub_8378CD40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cd8cc
	if (!cr6.eq) goto loc_837CD8CC;
loc_837CD8C8:
	// li r25,0
	ctx.r25.s64 = 0;
loc_837CD8CC:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r28,176
	ctx.r26.s64 = ctx.r28.s64 + 176;
	// addi r27,r28,112
	ctx.r27.s64 = ctx.r28.s64 + 112;
loc_837CD8D8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x837d33e8
	ctx.lr = 0x837CD8E4;
	sub_837D33E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r8,r31
	ctx.r30.u64 = ctx.r8.u64 & ctx.r31.u64;
	// bl 0x837d3118
	ctx.lr = 0x837CD8FC;
	sub_837D3118(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r4,r30
	ctx.r30.u64 = ctx.r4.u64 & ctx.r30.u64;
loc_837CD910:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// bl 0x837cd250
	ctx.lr = 0x837CD92C;
	sub_837CD250(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 & ctx.r30.u64;
	// blt cr6,0x837cd910
	if (cr6.lt) goto loc_837CD910;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// and r25,r8,r25
	ctx.r25.u64 = ctx.r8.u64 & ctx.r25.u64;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// blt cr6,0x837cd8d8
	if (cr6.lt) goto loc_837CD8D8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CD978"))) PPC_WEAK_FUNC(sub_837CD978);
PPC_FUNC_IMPL(__imp__sub_837CD978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x837CD980;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8378cba8
	ctx.lr = 0x837CD98C;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cdb64
	if (cr6.eq) goto loc_837CDB64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8378cc08
	ctx.lr = 0x837CD99C;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cdb64
	if (cr6.eq) goto loc_837CDB64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r29,80
	ctx.r28.s64 = ctx.r29.s64 + 80;
	// li r27,1
	ctx.r27.s64 = 1;
loc_837CD9B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cd9fc
	if (cr6.eq) goto loc_837CD9FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837cd7f0
	ctx.lr = 0x837CD9CC;
	sub_837CD7F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cd9fc
	if (cr6.eq) goto loc_837CD9FC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
loc_837CD9E0:
	// slw r25,r27,r30
	ctx.r25.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// and r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 & ctx.r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cda18
	if (!cr6.eq) goto loc_837CDA18;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x837cd9e0
	if (cr6.lt) goto loc_837CD9E0;
loc_837CD9FC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x837cd9b4
	if (cr6.lt) goto loc_837CD9B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837CDA18:
	// addi r11,r31,26
	ctx.r11.s64 = ctx.r31.s64 + 26;
	// lis r23,-31769
	ctx.r23.s64 = -2082013184;
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-2332(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2332);
	// lwzx r26,r24,r29
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r29.u32);
	// xor r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 ^ ctx.r11.u64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837cda90
	if (!cr6.eq) goto loc_837CDA90;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r27,r11,304
	ctx.r27.s64 = ctx.r11.s64 + 304;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837cd328
	ctx.lr = 0x837CDA60;
	sub_837CD328(ctx, base);
	// addi r10,r31,11
	ctx.r10.s64 = ctx.r31.s64 + 11;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwimi r9,r31,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r31.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r3,r9,30
	ctx.r3.u64 = ctx.r9.u32 & 0x3;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x8379f228
	ctx.lr = 0x837CDA8C;
	sub_8379F228(ctx, base);
	// b 0x837cdb14
	goto loc_837CDB14;
loc_837CDA90:
	// addi r10,r31,11
	ctx.r10.s64 = ctx.r31.s64 + 11;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r31,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r27,r11,304
	ctx.r27.s64 = ctx.r11.s64 + 304;
	// add r28,r9,r29
	ctx.r28.u64 = ctx.r9.u64 + ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r22,r9,r29
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwz r21,236(r7)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r7.u32 + 236);
	// bl 0x837cd328
	ctx.lr = 0x837CDAD0;
	sub_837CD328(ctx, base);
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r30,140(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r26,119(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 119);
	// lwz r22,120(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lbz r10,118(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 118);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// stb r22,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r22.u8);
	// bl 0x8379f2e8
	ctx.lr = 0x837CDB14;
	sub_8379F2E8(ctx, base);
loc_837CDB14:
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// li r10,9
	ctx.r10.s64 = 9;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// andc r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r25.u64;
	// stwx r8,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837cdb64
	if (!cr6.eq) goto loc_837CDB64;
	// lwz r11,-2332(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2332);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r10,r24,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r29.u32);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stwx r10,r24,r29
	PPC_STORE_U32(ctx.r24.u32 + ctx.r29.u32, ctx.r10.u32);
	// lwz r11,-2332(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2332);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stwx r9,r24,r29
	PPC_STORE_U32(ctx.r24.u32 + ctx.r29.u32, ctx.r9.u32);
	// lbz r4,68(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 68);
	// bl 0x837cd278
	ctx.lr = 0x837CDB64;
	sub_837CD278(ctx, base);
loc_837CDB64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CDB70"))) PPC_WEAK_FUNC(sub_837CDB70);
PPC_FUNC_IMPL(__imp__sub_837CDB70) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x837cdbb4
	if (cr6.lt) goto loc_837CDBB4;
	// bne cr6,0x837cdbd0
	if (!cr6.eq) goto loc_837CDBD0;
	// bl 0x837cd978
	ctx.lr = 0x837CDB98;
	sub_837CD978(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
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
loc_837CDBB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cd898
	ctx.lr = 0x837CDBBC;
	sub_837CD898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cdbd0
	if (cr6.eq) goto loc_837CDBD0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_837CDBD0:
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

__attribute__((alias("__imp__sub_837CDBE4"))) PPC_WEAK_FUNC(sub_837CDBE4);
PPC_FUNC_IMPL(__imp__sub_837CDBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CDBE8"))) PPC_WEAK_FUNC(sub_837CDBE8);
PPC_FUNC_IMPL(__imp__sub_837CDBE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x837CDBF0;
	__savegprlr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r3,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// addi r3,r3,304
	ctx.r3.s64 = ctx.r3.s64 + 304;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r26,120(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r30,152(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r25,124(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r24,156(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lbz r23,118(r31)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r31.u32 + 118);
	// lbz r22,119(r31)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r31.u32 + 119);
	// lbz r21,150(r31)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r31.u32 + 150);
	// lbz r20,151(r31)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r31.u32 + 151);
	// lwz r19,140(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r18,172(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r17,236(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r16,300(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// stw r8,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
	// stb r10,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r10.u8);
	// stw r6,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// bl 0x837cd328
	ctx.lr = 0x837CDC64;
	sub_837CD328(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// bl 0x837cd328
	ctx.lr = 0x837CDC70;
	sub_837CD328(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// bl 0x837cd328
	ctx.lr = 0x837CDC7C;
	sub_837CD328(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// bl 0x837cd328
	ctx.lr = 0x837CDC8C;
	sub_837CD328(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r30,404(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lbz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r6,216(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lbz r29,60(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// stw r14,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r14.u32);
	// stw r15,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r15.u32);
	// stw r16,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r16.u32);
	// stw r17,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r17.u32);
	// stb r29,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r29.u8);
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r19.u32);
	// stb r20,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r20.u8);
	// stb r11,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r11.u8);
	// stb r21,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r21.u8);
	// stb r22,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r22.u8);
	// stb r26,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r26.u8);
	// stb r23,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r23.u8);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x8379f118
	ctx.lr = 0x837CDD00;
	sub_8379F118(ctx, base);
	// lbz r10,69(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cdd10
	if (cr6.eq) goto loc_837CDD10;
	// bl 0x8379f048
	ctx.lr = 0x837CDD10;
	sub_8379F048(ctx, base);
loc_837CDD10:
	// li r29,0
	ctx.r29.s64 = 0;
loc_837CDD14:
	// li r31,0
	ctx.r31.s64 = 0;
loc_837CDD18:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// bl 0x837cd278
	ctx.lr = 0x837CDD38;
	sub_837CD278(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x837cdd18
	if (cr6.lt) goto loc_837CDD18;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// blt cr6,0x837cdd14
	if (cr6.lt) goto loc_837CDD14;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CDD58"))) PPC_WEAK_FUNC(sub_837CDD58);
PPC_FUNC_IMPL(__imp__sub_837CDD58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837CDD60;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// addi r9,r4,10
	ctx.r9.s64 = ctx.r4.s64 + 10;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r9,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r5,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r5.u32);
	// stwx r6,r26,r31
	PPC_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r6.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r7,r25,r31
	PPC_STORE_U32(ctx.r25.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r8,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r27,r11,112
	ctx.r27.s64 = ctx.r11.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837d3478
	ctx.lr = 0x837CDDB0;
	sub_837D3478(ctx, base);
	// lwzx r7,r29,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r7,65535
	cr6.compare<uint32_t>(ctx.r7.u32, 65535, xer);
	// bne cr6,0x837cddc4
	if (!cr6.eq) goto loc_837CDDC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x837cddf4
	goto loc_837CDDF4;
loc_837CDDC4:
	// lwzx r11,r26,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x837cddd8
	if (!cr6.lt) goto loc_837CDDD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x837cddf4
	goto loc_837CDDF4;
loc_837CDDD8:
	// lwzx r11,r25,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x837cddec
	if (!cr6.lt) goto loc_837CDDEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x837cddf4
	goto loc_837CDDF4;
loc_837CDDEC:
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_837CDDF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cde20
	if (cr6.eq) goto loc_837CDE20;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x837d36a8
	ctx.lr = 0x837CDE18;
	sub_837D36A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837CDE20:
	// lwzx r11,r25,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// lwzx r10,r26,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwzx r6,r28,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// subfe r5,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r4,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x837d35d0
	ctx.lr = 0x837CDE40;
	sub_837D35D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CDE48"))) PPC_WEAK_FUNC(sub_837CDE48);
PPC_FUNC_IMPL(__imp__sub_837CDE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837CDE50;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r4,68(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r26,r11,304
	ctx.r26.s64 = ctx.r11.s64 + 304;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x837cd278
	ctx.lr = 0x837CDE90;
	sub_837CD278(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x837cd518
	ctx.lr = 0x837CDEAC;
	sub_837CD518(ctx, base);
	// addi r10,r30,11
	ctx.r10.s64 = ctx.r30.s64 + 11;
	// addi r9,r28,2
	ctx.r9.s64 = ctx.r28.s64 + 2;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r25.u32);
	// stwx r25,r8,r27
	PPC_STORE_U32(ctx.r8.u32 + ctx.r27.u32, ctx.r25.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// slw r3,r4,r29
	ctx.r3.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// or r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CDEF0"))) PPC_WEAK_FUNC(sub_837CDEF0);
PPC_FUNC_IMPL(__imp__sub_837CDEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837CDEF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// addi r6,r5,1
	ctx.r6.s64 = ctx.r5.s64 + 1;
	// rlwinm r11,r5,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,176
	ctx.r29.s64 = ctx.r11.s64 + 176;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stwx r4,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x837d3238
	ctx.lr = 0x837CDF3C;
	sub_837D3238(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837d32c8
	ctx.lr = 0x837CDF48;
	sub_837D32C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x837cdd58
	ctx.lr = 0x837CDF64;
	sub_837CDD58(ctx, base);
	// addi r5,r31,26
	ctx.r5.s64 = ctx.r31.s64 + 26;
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x837cde48
	ctx.lr = 0x837CDF88;
	sub_837CDE48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CDF90"))) PPC_WEAK_FUNC(sub_837CDF90);
PPC_FUNC_IMPL(__imp__sub_837CDF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837cdb70
	sub_837CDB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CDFA0"))) PPC_WEAK_FUNC(sub_837CDFA0);
PPC_FUNC_IMPL(__imp__sub_837CDFA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CDFA4"))) PPC_WEAK_FUNC(sub_837CDFA4);
PPC_FUNC_IMPL(__imp__sub_837CDFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CDFA8"))) PPC_WEAK_FUNC(sub_837CDFA8);
PPC_FUNC_IMPL(__imp__sub_837CDFA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cdfbc
	if (!cr6.eq) goto loc_837CDFBC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_837CDFBC:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x837cdfd8
	if (!cr6.eq) goto loc_837CDFD8;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_837CDFD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CDFE0"))) PPC_WEAK_FUNC(sub_837CDFE0);
PPC_FUNC_IMPL(__imp__sub_837CDFE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cdff4
	if (!cr6.eq) goto loc_837CDFF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_837CDFF4:
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CE00C"))) PPC_WEAK_FUNC(sub_837CE00C);
PPC_FUNC_IMPL(__imp__sub_837CE00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CE010"))) PPC_WEAK_FUNC(sub_837CE010);
PPC_FUNC_IMPL(__imp__sub_837CE010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r4,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CE024"))) PPC_WEAK_FUNC(sub_837CE024);
PPC_FUNC_IMPL(__imp__sub_837CE024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CE028"))) PPC_WEAK_FUNC(sub_837CE028);
PPC_FUNC_IMPL(__imp__sub_837CE028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837cdbe8
	sub_837CDBE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CE038"))) PPC_WEAK_FUNC(sub_837CE038);
PPC_FUNC_IMPL(__imp__sub_837CE038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CE03C"))) PPC_WEAK_FUNC(sub_837CE03C);
PPC_FUNC_IMPL(__imp__sub_837CE03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CE040"))) PPC_WEAK_FUNC(sub_837CE040);
PPC_FUNC_IMPL(__imp__sub_837CE040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r4,r4,31,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x1;
	// b 0x837cde48
	sub_837CDE48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CE05C"))) PPC_WEAK_FUNC(sub_837CE05C);
PPC_FUNC_IMPL(__imp__sub_837CE05C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CE060"))) PPC_WEAK_FUNC(sub_837CE060);
PPC_FUNC_IMPL(__imp__sub_837CE060) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ce084
	if (cr6.eq) goto loc_837CE084;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x837cdef0
	ctx.lr = 0x837CE084;
	sub_837CDEF0(ctx, base);
loc_837CE084:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CE094"))) PPC_WEAK_FUNC(sub_837CE094);
PPC_FUNC_IMPL(__imp__sub_837CE094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CE098"))) PPC_WEAK_FUNC(sub_837CE098);
PPC_FUNC_IMPL(__imp__sub_837CE098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837ce0ac
	if (!cr6.eq) goto loc_837CE0AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_837CE0AC:
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CE0BC"))) PPC_WEAK_FUNC(sub_837CE0BC);
PPC_FUNC_IMPL(__imp__sub_837CE0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CE0C0"))) PPC_WEAK_FUNC(sub_837CE0C0);
PPC_FUNC_IMPL(__imp__sub_837CE0C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837ce0d4
	if (!cr6.eq) goto loc_837CE0D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_837CE0D4:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CE0F4"))) PPC_WEAK_FUNC(sub_837CE0F4);
PPC_FUNC_IMPL(__imp__sub_837CE0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CE0F8"))) PPC_WEAK_FUNC(sub_837CE0F8);
PPC_FUNC_IMPL(__imp__sub_837CE0F8) {
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
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r9,r10,-2540
	ctx.r9.s64 = ctx.r10.s64 + -2540;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r10,-8888(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8888);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x837ce130
	if (!cr6.eq) goto loc_837CE130;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-8888(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8888, ctx.r10.u32);
loc_837CE130:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ce180
	if (cr6.eq) goto loc_837CE180;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837CE150;
	sub_82595150(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ce170
	if (cr6.eq) goto loc_837CE170;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CE170;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837CE170:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837CE178;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_837CE180:
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

__attribute__((alias("__imp__sub_837CE194"))) PPC_WEAK_FUNC(sub_837CE194);
PPC_FUNC_IMPL(__imp__sub_837CE194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CE198"))) PPC_WEAK_FUNC(sub_837CE198);
PPC_FUNC_IMPL(__imp__sub_837CE198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837CE1A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8378cba8
	ctx.lr = 0x837CE1B4;
	sub_8378CBA8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ce298
	if (cr6.eq) goto loc_837CE298;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ce298
	if (cr6.eq) goto loc_837CE298;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CE1E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ce298
	if (cr6.eq) goto loc_837CE298;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ce1fc
	if (!cr6.eq) goto loc_837CE1FC;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x837ce21c
	goto loc_837CE21C;
loc_837CE1FC:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x837ce218
	if (!cr6.eq) goto loc_837CE218;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x837ce21c
	if (!cr6.eq) goto loc_837CE21C;
loc_837CE218:
	// li r10,0
	ctx.r10.s64 = 0;
loc_837CE21C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837ce244
	if (!cr6.eq) goto loc_837CE244;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CE244:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d158
	ctx.lr = 0x837CE24C;
	sub_8378D158(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8378fc88
	ctx.lr = 0x837CE25C;
	sub_8378FC88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ce280
	if (!cr6.eq) goto loc_837CE280;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lwz r11,-2332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2332);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CE280:
	// mulli r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 * 28;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CE298:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-2332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2332);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CE2B0"))) PPC_WEAK_FUNC(sub_837CE2B0);
PPC_FUNC_IMPL(__imp__sub_837CE2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837CE2B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8378cba8
	ctx.lr = 0x837CE2CC;
	sub_8378CBA8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ce3a0
	if (cr6.eq) goto loc_837CE3A0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ce3a0
	if (cr6.eq) goto loc_837CE3A0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CE2F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ce3a0
	if (cr6.eq) goto loc_837CE3A0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837ce314
	if (!cr6.eq) goto loc_837CE314;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x837ce334
	goto loc_837CE334;
loc_837CE314:
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x837ce330
	if (!cr6.eq) goto loc_837CE330;
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x837ce334
	if (!cr6.eq) goto loc_837CE334;
loc_837CE330:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CE334:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ce35c
	if (!cr6.eq) goto loc_837CE35C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CE35C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d158
	ctx.lr = 0x837CE364;
	sub_8378D158(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8378fc88
	ctx.lr = 0x837CE374;
	sub_8378FC88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ce3a0
	if (cr6.eq) goto loc_837CE3A0;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CE3A0:
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CE3AC"))) PPC_WEAK_FUNC(sub_837CE3AC);
PPC_FUNC_IMPL(__imp__sub_837CE3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CE3B0"))) PPC_WEAK_FUNC(sub_837CE3B0);
PPC_FUNC_IMPL(__imp__sub_837CE3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837CE3B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8378cba8
	ctx.lr = 0x837CE3D4;
	sub_8378CBA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ce4dc
	if (cr6.eq) goto loc_837CE4DC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CE3F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ce4dc
	if (cr6.eq) goto loc_837CE4DC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ce410
	if (!cr6.eq) goto loc_837CE410;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x837ce430
	goto loc_837CE430;
loc_837CE410:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x837ce42c
	if (!cr6.eq) goto loc_837CE42C;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x837ce430
	if (!cr6.eq) goto loc_837CE430;
loc_837CE42C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CE430:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ce4dc
	if (cr6.eq) goto loc_837CE4DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d158
	ctx.lr = 0x837CE444;
	sub_8378D158(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8378fc88
	ctx.lr = 0x837CE454;
	sub_8378FC88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ce470
	if (!cr6.eq) goto loc_837CE470;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837CE470:
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// addi r10,r1,125
	ctx.r10.s64 = ctx.r1.s64 + 125;
	// addi r8,r1,126
	ctx.r8.s64 = ctx.r1.s64 + 126;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// beq cr6,0x837ce4a0
	if (cr6.eq) goto loc_837CE4A0;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r5,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r5,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
loc_837CE4A0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x837ce4b8
	if (cr6.eq) goto loc_837CE4B8;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
loc_837CE4B8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x837ce4c8
	if (cr6.eq) goto loc_837CE4C8;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_837CE4C8:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837CE4DC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ce530
	if (cr6.eq) goto loc_837CE530;
	// addi r8,r31,10
	ctx.r8.s64 = ctx.r31.s64 + 10;
	// addi r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 6;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r4,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r10,r5,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
loc_837CE530:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x837ce53c
	if (cr6.eq) goto loc_837CE53C;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_837CE53C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x837ce548
	if (cr6.eq) goto loc_837CE548;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_837CE548:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x837ce554
	if (cr6.eq) goto loc_837CE554;
	// stw r8,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
loc_837CE554:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CE55C"))) PPC_WEAK_FUNC(sub_837CE55C);
PPC_FUNC_IMPL(__imp__sub_837CE55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CE560"))) PPC_WEAK_FUNC(sub_837CE560);
PPC_FUNC_IMPL(__imp__sub_837CE560) {
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
	// bl 0x837ce0f8
	ctx.lr = 0x837CE580;
	sub_837CE0F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ce5a0
	if (cr6.eq) goto loc_837CE5A0;
	// bl 0x82595188
	ctx.lr = 0x837CE590;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837CE5A0;
	sub_825952B8(ctx, base);
loc_837CE5A0:
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

__attribute__((alias("__imp__sub_837CE5BC"))) PPC_WEAK_FUNC(sub_837CE5BC);
PPC_FUNC_IMPL(__imp__sub_837CE5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CE5C0"))) PPC_WEAK_FUNC(sub_837CE5C0);
PPC_FUNC_IMPL(__imp__sub_837CE5C0) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-2536
	ctx.r10.s64 = ctx.r11.s64 + -2536;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x837d3238
	ctx.lr = 0x837CE5E4;
	sub_837D3238(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x837ce608
	if (cr6.lt) goto loc_837CE608;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837CE608;
	sub_825952B8(ctx, base);
loc_837CE608:
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

__attribute__((alias("__imp__sub_837CE630"))) PPC_WEAK_FUNC(sub_837CE630);
PPC_FUNC_IMPL(__imp__sub_837CE630) {
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
	// bl 0x837ce5c0
	ctx.lr = 0x837CE650;
	sub_837CE5C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ce668
	if (cr6.eq) goto loc_837CE668;
	// bl 0x82416268
	ctx.lr = 0x837CE664;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837CE668:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CE680"))) PPC_WEAK_FUNC(sub_837CE680);
PPC_FUNC_IMPL(__imp__sub_837CE680) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-2536
	ctx.r9.s64 = ctx.r11.s64 + -2536;
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r30,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r30.u8);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r11,-2332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2332);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// stb r30,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r30.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r30,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r30.u8);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// sth r7,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r7.u16);
	// stb r30,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r30.u8);
	// stb r30,31(r31)
	PPC_STORE_U8(ctx.r31.u32 + 31, ctx.r30.u8);
	// bl 0x82b34ac8
	ctx.lr = 0x837CE6F0;
	sub_82B34AC8(ctx, base);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CE720"))) PPC_WEAK_FUNC(sub_837CE720);
PPC_FUNC_IMPL(__imp__sub_837CE720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x837CE728;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r22,r3,4
	ctx.r22.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-2532
	ctx.r10.s64 = ctx.r11.s64 + -2532;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831ce980
	ctx.lr = 0x837CE74C;
	sub_831CE980(ctx, base);
	// li r18,1
	ctx.r18.s64 = 1;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r18,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r18.u32);
	// addi r25,r29,112
	ctx.r25.s64 = ctx.r29.s64 + 112;
	// stw r19,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r19.u32);
	// addi r28,r29,104
	ctx.r28.s64 = ctx.r29.s64 + 104;
	// stw r11,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r11.u32);
	// stw r11,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_837CE778:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837d34e0
	ctx.lr = 0x837CE780;
	sub_837D34E0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bge 0x837ce778
	if (!cr0.lt) goto loc_837CE778;
	// addi r26,r29,176
	ctx.r26.s64 = ctx.r29.s64 + 176;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_837CE798:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837ce680
	ctx.lr = 0x837CE7A0;
	sub_837CE680(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// bge 0x837ce798
	if (!cr0.lt) goto loc_837CE798;
	// addi r30,r29,304
	ctx.r30.s64 = ctx.r29.s64 + 304;
	// li r31,3
	ctx.r31.s64 = 3;
loc_837CE7B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837cd228
	ctx.lr = 0x837CE7BC;
	sub_837CD228(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bge 0x837ce7b4
	if (!cr0.lt) goto loc_837CE7B4;
	// bl 0x831156e8
	ctx.lr = 0x837CE7CC;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ce968
	if (cr6.eq) goto loc_837CE968;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ce7f4
	if (cr6.eq) goto loc_837CE7F4;
	// bl 0x83115808
	ctx.lr = 0x837CE7E4;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// bne cr6,0x837ce7f8
	if (!cr6.eq) goto loc_837CE7F8;
loc_837CE7F4:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_837CE7F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ce968
	if (cr6.eq) goto loc_837CE968;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// addi r26,r22,24
	ctx.r26.s64 = ctx.r22.s64 + 24;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// li r23,9
	ctx.r23.s64 = 9;
	// lis r20,-31769
	ctx.r20.s64 = -2082013184;
loc_837CE820:
	// stw r19,-24(r24)
	PPC_STORE_U32(ctx.r24.u32 + -24, ctx.r19.u32);
	// lwz r11,-2332(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -2332);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// lwz r11,-2332(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -2332);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r9.u32);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r8,-24(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmplwi cr6,r7,65535
	cr6.compare<uint32_t>(ctx.r7.u32, 65535, xer);
	// bne cr6,0x837ce860
	if (!cr6.eq) goto loc_837CE860;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x837ce890
	goto loc_837CE890;
loc_837CE860:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x837ce874
	if (!cr6.lt) goto loc_837CE874;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x837ce890
	goto loc_837CE890;
loc_837CE874:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x837ce888
	if (!cr6.lt) goto loc_837CE888;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x837ce890
	goto loc_837CE890;
loc_837CE888:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_837CE890:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ce8b4
	if (cr6.eq) goto loc_837CE8B4;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x837d36a8
	ctx.lr = 0x837CE8B0;
	sub_837D36A8(ctx, base);
	// b 0x837ce8d4
	goto loc_837CE8D4;
loc_837CE8B4:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r6,24(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// subfe r5,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r4,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x837d35d0
	ctx.lr = 0x837CE8D4;
	sub_837D35D0(ctx, base);
loc_837CE8D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x837d32c8
	ctx.lr = 0x837CE8E0;
	sub_837D32C8(ctx, base);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// addi r28,r30,22
	ctx.r28.s64 = ctx.r30.s64 + 22;
loc_837CE8E8:
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// stwx r23,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + ctx.r29.u32, ctx.r23.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// lwzx r7,r10,r22
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// bl 0x837cd518
	ctx.lr = 0x837CE92C;
	sub_837CD518(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x837ce8e8
	if (cr6.lt) goto loc_837CE8E8;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// addi r21,r21,64
	ctx.r21.s64 = ctx.r21.s64 + 64;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// blt cr6,0x837ce820
	if (cr6.lt) goto loc_837CE820;
	// stw r19,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r19.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837CE968:
	// stw r18,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r18.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CE978"))) PPC_WEAK_FUNC(sub_837CE978);
PPC_FUNC_IMPL(__imp__sub_837CE978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837CE980;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r10,r11,-2532
	ctx.r10.s64 = ctx.r11.s64 + -2532;
	// addi r31,r3,384
	ctx.r31.s64 = ctx.r3.s64 + 384;
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_837CE99C:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cd340
	ctx.lr = 0x837CE9A8;
	sub_837CD340(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x837ce99c
	if (!cr0.lt) goto loc_837CE99C;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r31,r26,304
	ctx.r31.s64 = ctx.r26.s64 + 304;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,-2536
	ctx.r27.s64 = ctx.r11.s64 + -2536;
loc_837CE9CC:
	// stwu r27,-64(r31)
	ea = -64 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r31.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d3238
	ctx.lr = 0x837CE9D8;
	sub_837D3238(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837ce9f4
	if (cr6.lt) goto loc_837CE9F4;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bl 0x825952b8
	ctx.lr = 0x837CE9F4;
	sub_825952B8(ctx, base);
loc_837CE9F4:
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// bge 0x837ce9cc
	if (!cr0.lt) goto loc_837CE9CC;
	// addi r31,r26,176
	ctx.r31.s64 = ctx.r26.s64 + 176;
	// li r30,1
	ctx.r30.s64 = 1;
loc_837CEA10:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d33c0
	ctx.lr = 0x837CEA1C;
	sub_837D33C0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x837cea10
	if (!cr0.lt) goto loc_837CEA10;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CEA2C"))) PPC_WEAK_FUNC(sub_837CEA2C);
PPC_FUNC_IMPL(__imp__sub_837CEA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CEA30"))) PPC_WEAK_FUNC(sub_837CEA30);
PPC_FUNC_IMPL(__imp__sub_837CEA30) {
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
	// bl 0x837ce978
	ctx.lr = 0x837CEA50;
	sub_837CE978(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cea70
	if (cr6.eq) goto loc_837CEA70;
	// bl 0x82595188
	ctx.lr = 0x837CEA60;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837CEA70;
	sub_825952B8(ctx, base);
loc_837CEA70:
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

__attribute__((alias("__imp__sub_837CEA8C"))) PPC_WEAK_FUNC(sub_837CEA8C);
PPC_FUNC_IMPL(__imp__sub_837CEA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CEA90"))) PPC_WEAK_FUNC(sub_837CEA90);
PPC_FUNC_IMPL(__imp__sub_837CEA90) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-2540
	ctx.r9.s64 = ctx.r11.s64 + -2540;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,384
	ctx.r4.s64 = 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837CEAD8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ceaec
	if (cr6.eq) goto loc_837CEAEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837ce720
	ctx.lr = 0x837CEAE8;
	sub_837CE720(ctx, base);
	// b 0x837ceaf0
	goto loc_837CEAF0;
loc_837CEAEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837CEAF0:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-8888(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8888, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CEB18"))) PPC_WEAK_FUNC(sub_837CEB18);
PPC_FUNC_IMPL(__imp__sub_837CEB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v61,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r4,r8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,64(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CEB74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CEB84"))) PPC_WEAK_FUNC(sub_837CEB84);
PPC_FUNC_IMPL(__imp__sub_837CEB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CEB88"))) PPC_WEAK_FUNC(sub_837CEB88);
PPC_FUNC_IMPL(__imp__sub_837CEB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r11,2480
	ctx.r7.s64 = ctx.r11.s64 + 2480;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v62,-1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// lfs f0,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lvx128 v10,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v60,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r5,2496
	ctx.r4.s64 = ctx.r5.s64 + 2496;
	// lvx128 v6,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v10,v6,v10,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vslw128 v11,v60,v60
	ctx.v11.u32[0] = ctx.v60.u32[0] << (ctx.v60.u8[0] & 0x1F);
	ctx.v11.u32[1] = ctx.v60.u32[1] << (ctx.v60.u8[4] & 0x1F);
	ctx.v11.u32[2] = ctx.v60.u32[2] << (ctx.v60.u8[8] & 0x1F);
	ctx.v11.u32[3] = ctx.v60.u32[3] << (ctx.v60.u8[12] & 0x1F);
	// lvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v59,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vspltisw128 v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x3)));
	// vspltisw v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x1)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vspltisw128 v58,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_set1_epi32(int(0x2)));
	// vsel v1,v12,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// addi r10,r11,2512
	ctx.r10.s64 = ctx.r11.s64 + 2512;
	// addi r7,r9,2528
	ctx.r7.s64 = ctx.r9.s64 + 2528;
	// vupkd3d128 v7,v0,0
	vTemp.u32[0] = ctx.v0.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v0.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v0.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v0.u8[2] | 0x3F800000;
	ctx.v7 = vTemp;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// vslw128 v57,v62,v62
	ctx.v57.u32[0] = ctx.v62.u32[0] << (ctx.v62.u8[0] & 0x1F);
	ctx.v57.u32[1] = ctx.v62.u32[1] << (ctx.v62.u8[4] & 0x1F);
	ctx.v57.u32[2] = ctx.v62.u32[2] << (ctx.v62.u8[8] & 0x1F);
	ctx.v57.u32[3] = ctx.v62.u32[3] << (ctx.v62.u8[12] & 0x1F);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// vsldoi128 v56,v0,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// vaddfp128 v54,v59,v1
	simde_mm_store_ps(ctx.v54.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lvx128 v9,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lvx128 v8,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r6,2560
	ctx.r10.s64 = ctx.r6.s64 + 2560;
	// addi r11,r8,2544
	ctx.r11.s64 = ctx.r8.s64 + 2544;
	// vsldoi128 v55,v0,v7,4
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), 12));
	// addi r9,r5,2592
	ctx.r9.s64 = ctx.r5.s64 + 2592;
	// addi r8,r4,2608
	ctx.r8.s64 = ctx.r4.s64 + 2608;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lvx128 v4,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lvx128 v5,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lvx128 v3,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r7,2576
	ctx.r5.s64 = ctx.r7.s64 + 2576;
	// lvx128 v2,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r6,2624
	ctx.r11.s64 = ctx.r6.s64 + 2624;
	// li r9,20
	ctx.r9.s64 = 20;
	// vcfpsxws128 v53,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v54.f32)));
	// addi r8,r10,27636
	ctx.r8.s64 = ctx.r10.s64 + 27636;
	// vand128 v12,v53,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vcsxwfp128 v10,v53,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vadduws v1,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_adds_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vand128 v52,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vand128 v51,v12,v58
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vor128 v50,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vcmpequw128 v1,v52,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vcmpequw128 v30,v51,v0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vand128 v49,v50,v13
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vnmsubfp v13,v10,v9,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v6.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vand128 v48,v50,v58
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vcmpequw128 v31,v49,v0
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vcmpequw128 v6,v48,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vnmsubfp v12,v10,v8,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v12,v12,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v8,v5,v13,v4
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v5,v3,v13,v2
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v4,v13,v12,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v10,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,4
	ctx.r7.s64 = 4;
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v10,v8,v13,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v9,v5,v13,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// lvlx128 v47,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v46,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// lvlx128 v44,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lvlx128 v45,r8,r7
	temp.u32 = ctx.r8.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vrlimi128 v46,v47,4,3
	simde_mm_store_ps(ctx.v46.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v47.f32), 57), 4));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stvx128 v55,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v10,v13,v7
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vor128 v7,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vmaddfp v12,v9,v4,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vrlimi128 v7,v45,2,2
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v45.f32), 78), 2));
	// vrlimi128 v7,v44,1,1
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 147), 1));
	// vor128 v43,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor128 v42,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsel v8,v13,v12,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vor128 v10,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// vor128 v9,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vsel v13,v10,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vor128 v41,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vxor v13,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vxor128 v11,v11,v41
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// vor128 v10,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vsel v12,v13,v8,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vsel v13,v11,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vxor128 v63,v12,v57
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vspltw v10,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vmrglw v11,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vperm v8,v13,v12,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v7,v63,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vspltw v9,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmrglw128 v40,v63,v13
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmaddfp v8,v11,v8,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v11,v7,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vandc128 v13,v40,v56
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// stvx128 v11,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v8,v10,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v8,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v13,v9,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v0,v13,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// stvx128 v11,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bctrl 
	ctx.lr = 0x837CEDAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CEDBC"))) PPC_WEAK_FUNC(sub_837CEDBC);
PPC_FUNC_IMPL(__imp__sub_837CEDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CEDC0"))) PPC_WEAK_FUNC(sub_837CEDC0);
PPC_FUNC_IMPL(__imp__sub_837CEDC0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 604, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CEDC8"))) PPC_WEAK_FUNC(sub_837CEDC8);
PPC_FUNC_IMPL(__imp__sub_837CEDC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// rlwinm r10,r11,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// bne cr6,0x837cede0
	if (!cr6.eq) goto loc_837CEDE0;
	// oris r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 268435456;
loc_837CEDE0:
	// stw r10,572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 572, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CEDE8"))) PPC_WEAK_FUNC(sub_837CEDE8);
PPC_FUNC_IMPL(__imp__sub_837CEDE8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 724, ctx.r4.u32);
	// stw r5,732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 732, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CEDF4"))) PPC_WEAK_FUNC(sub_837CEDF4);
PPC_FUNC_IMPL(__imp__sub_837CEDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CEDF8"))) PPC_WEAK_FUNC(sub_837CEDF8);
PPC_FUNC_IMPL(__imp__sub_837CEDF8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 728, ctx.r4.u32);
	// stw r5,736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 736, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CEE04"))) PPC_WEAK_FUNC(sub_837CEE04);
PPC_FUNC_IMPL(__imp__sub_837CEE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CEE08"))) PPC_WEAK_FUNC(sub_837CEE08);
PPC_FUNC_IMPL(__imp__sub_837CEE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837cee2c
	if (cr6.eq) goto loc_837CEE2C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 572, ctx.r11.u32);
	// blr 
	return;
loc_837CEE2C:
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837cee48
	if (cr6.eq) goto loc_837CEE48;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 572, ctx.r11.u32);
	// blr 
	return;
loc_837CEE48:
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837cee64
	if (cr6.eq) goto loc_837CEE64;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r11,572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 572, ctx.r11.u32);
	// blr 
	return;
loc_837CEE64:
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837cee80
	if (cr6.eq) goto loc_837CEE80;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r11,572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 572, ctx.r11.u32);
	// blr 
	return;
loc_837CEE80:
	// rlwinm r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837cee9c
	if (cr6.eq) goto loc_837CEE9C;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r11,572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 572, ctx.r11.u32);
	// blr 
	return;
loc_837CEE9C:
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837ceeb8
	if (cr6.eq) goto loc_837CEEB8;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r11,572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 572, ctx.r11.u32);
	// blr 
	return;
loc_837CEEB8:
	// rlwinm r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837ceed4
	if (cr6.eq) goto loc_837CEED4;
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r11,572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 572, ctx.r11.u32);
	// blr 
	return;
loc_837CEED4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CEEDC"))) PPC_WEAK_FUNC(sub_837CEEDC);
PPC_FUNC_IMPL(__imp__sub_837CEEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CEEE0"))) PPC_WEAK_FUNC(sub_837CEEE0);
PPC_FUNC_IMPL(__imp__sub_837CEEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,552(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x837cef54
	if (cr6.gt) goto loc_837CEF54;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837cef18
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837CEF18;
	// bdzf 4*cr6+eq,0x837cef20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837CEF20;
	// bdzf 4*cr6+eq,0x837cef28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837CEF28;
	// bdzf 4*cr6+eq,0x837cef30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837CEF30;
	// bdzf 4*cr6+eq,0x837cef38
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837CEF38;
	// bne cr6,0x837cef40
	if (!cr6.eq) goto loc_837CEF40;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x837cef44
	goto loc_837CEF44;
loc_837CEF18:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x837cef44
	goto loc_837CEF44;
loc_837CEF20:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x837cef44
	goto loc_837CEF44;
loc_837CEF28:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x837cef44
	goto loc_837CEF44;
loc_837CEF30:
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x837cef44
	goto loc_837CEF44;
loc_837CEF38:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x837cef44
	goto loc_837CEF44;
loc_837CEF40:
	// li r11,64
	ctx.r11.s64 = 64;
loc_837CEF44:
	// lwz r10,572(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r9,572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 572, ctx.r9.u32);
	// b 0x837cee08
	sub_837CEE08(ctx, base);
	return;
loc_837CEF54:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CEF5C"))) PPC_WEAK_FUNC(sub_837CEF5C);
PPC_FUNC_IMPL(__imp__sub_837CEF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CEF60"))) PPC_WEAK_FUNC(sub_837CEF60);
PPC_FUNC_IMPL(__imp__sub_837CEF60) {
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
	// lwz r11,636(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cef88
	if (cr6.eq) goto loc_837CEF88;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x837cf048
	if (!cr6.eq) goto loc_837CF048;
loc_837CEF88:
	// lwz r11,756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x837cef98
	if (!cr6.lt) goto loc_837CEF98;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
loc_837CEF98:
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837cf00c
	if (cr6.eq) goto loc_837CF00C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x837cefcc
	if (cr6.eq) goto loc_837CEFCC;
	// lfs f1,740(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	ctx.f1.f64 = double(temp.f32);
	// lbz r7,761(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 761);
	// lbz r6,760(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 760);
	// lbz r5,762(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 762);
	// lwz r4,716(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// bl 0x83b52e78
	ctx.lr = 0x837CEFC8;
	sub_83B52E78(ctx, base);
	// b 0x837cf024
	goto loc_837CF024;
loc_837CEFCC:
	// lwz r5,732(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	// lwz r4,724(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// bl 0x83b514e8
	ctx.lr = 0x837CEFD8;
	sub_83B514E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,736(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// lwz r4,728(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// bl 0x83b514f8
	ctx.lr = 0x837CEFE8;
	sub_83B514F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,740(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	ctx.f1.f64 = double(temp.f32);
	// lbz r8,761(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 761);
	// lbz r7,760(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 760);
	// lbz r6,762(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 762);
	// lwz r5,720(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r4,716(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// bl 0x83b531c8
	ctx.lr = 0x837CF008;
	sub_83B531C8(ctx, base);
	// b 0x837cf024
	goto loc_837CF024;
loc_837CF00C:
	// lfs f1,740(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	ctx.f1.f64 = double(temp.f32);
	// lbz r7,761(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 761);
	// lbz r6,760(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 760);
	// lbz r5,762(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 762);
	// lwz r4,716(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// bl 0x83b53020
	ctx.lr = 0x837CF024;
	sub_83B53020(ctx, base);
loc_837CF024:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cf048
	if (!cr6.eq) goto loc_837CF048;
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
loc_837CF048:
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// rlwinm r9,r11,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_837CF078"))) PPC_WEAK_FUNC(sub_837CF078);
PPC_FUNC_IMPL(__imp__sub_837CF078) {
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
	// lwz r11,552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x837cf110
	if (cr6.eq) goto loc_837CF110;
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cf110
	if (!cr6.eq) goto loc_837CF110;
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cf110
	if (cr6.eq) goto loc_837CF110;
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwimi r11,r30,30,1,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 30) & 0x60000000) | (ctx.r11.u64 & 0xFFFFFFFF9FFFFFFF);
	// stw r11,572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 572, ctx.r11.u32);
	// bl 0x837ceee0
	ctx.lr = 0x837CF0C8;
	sub_837CEEE0(ctx, base);
	// lbz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 708);
	// stw r3,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cf0e0
	if (!cr6.eq) goto loc_837CF0E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x837cf114
	goto loc_837CF114;
loc_837CF0E0:
	// bl 0x83a7d958
	ctx.lr = 0x837CF0E4;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x837CF0E8;
	sub_83524138(ctx, base);
	// ld r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 560);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,400
	cr6.compare<uint64_t>(ctx.r10.u64, 400, xer);
	// bgt cr6,0x837cf0fc
	if (cr6.gt) goto loc_837CF0FC;
	// stb r30,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r30.u8);
loc_837CF0FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r3,560(r31)
	PPC_STORE_U64(ctx.r31.u32 + 560, ctx.r3.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,708(r31)
	PPC_STORE_U8(ctx.r31.u32 + 708, ctx.r11.u8);
	// b 0x837cf114
	goto loc_837CF114;
loc_837CF110:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837CF114:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CF12C"))) PPC_WEAK_FUNC(sub_837CF12C);
PPC_FUNC_IMPL(__imp__sub_837CF12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CF130"))) PPC_WEAK_FUNC(sub_837CF130);
PPC_FUNC_IMPL(__imp__sub_837CF130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837CF138;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic r11,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// subfe r9,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,4944
	ctx.r8.s64 = ctx.r10.s64 + 4944;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x825749e0
	ctx.lr = 0x837CF174;
	sub_825749E0(ctx, base);
	// lis r7,-32211
	ctx.r7.s64 = -2110980096;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r5,r7,-2272
	ctx.r5.s64 = ctx.r7.s64 + -2272;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// std r30,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x837CF1A4;
	sub_82572FA0(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82596fa8
	ctx.lr = 0x837CF1AC;
	sub_82596FA8(ctx, base);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// addi r10,r4,-4008
	ctx.r10.s64 = ctx.r4.s64 + -4008;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// bl 0x825749e0
	ctx.lr = 0x837CF1D4;
	sub_825749E0(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,8356
	ctx.r8.s64 = ctx.r9.s64 + 8356;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CF1EC"))) PPC_WEAK_FUNC(sub_837CF1EC);
PPC_FUNC_IMPL(__imp__sub_837CF1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CF1F0"))) PPC_WEAK_FUNC(sub_837CF1F0);
PPC_FUNC_IMPL(__imp__sub_837CF1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837CF1F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,40
	ctx.r30.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837CF20C;
	sub_82596FE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x837cf318
	if (cr6.gt) goto loc_837CF318;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837cf2dc
	if (cr6.eq) goto loc_837CF2DC;
	// bdz 0x837cf238
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837CF238;
	// bdz 0x837cf2d0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837CF2D0;
	// b 0x837cf2f8
	goto loc_837CF2F8;
loc_837CF238:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x837cf2b4
	if (cr6.eq) goto loc_837CF2B4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cf28c
	if (cr6.eq) goto loc_837CF28C;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,72
	ctx.r6.s64 = ctx.r31.s64 + 72;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833bcae8
	ctx.lr = 0x837CF264;
	sub_833BCAE8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x82597088
	ctx.lr = 0x837CF280;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837CF28C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cf2b4
	if (cr6.eq) goto loc_837CF2B4;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x837CF2A8;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837CF2B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x837CF2C4;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837CF2D0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cf2f0
	if (!cr6.eq) goto loc_837CF2F0;
loc_837CF2DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837CF2E4;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837CF2F0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_837CF2F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cf314
	if (cr6.eq) goto loc_837CF314;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bctrl 
	ctx.lr = 0x837CF314;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837CF314:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_837CF318:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837CF324;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CF330"))) PPC_WEAK_FUNC(sub_837CF330);
PPC_FUNC_IMPL(__imp__sub_837CF330) {
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
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837CF354;
	sub_82596FE8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x837cf424
	if (cr6.lt) goto loc_837CF424;
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cf424
	if (!cr6.eq) goto loc_837CF424;
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r11,r10,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cf424
	if (cr6.eq) goto loc_837CF424;
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837cf424
	if (!cr6.eq) goto loc_837CF424;
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cf424
	if (cr6.eq) goto loc_837CF424;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cf3b4
	if (cr6.eq) goto loc_837CF3B4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cf424
	if (!cr6.eq) goto loc_837CF424;
loc_837CF3B4:
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 & ctx.r31.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x837cf414
	if (cr6.eq) goto loc_837CF414;
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cf424
	if (cr6.eq) goto loc_837CF424;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CF3EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cf424
	if (cr6.eq) goto loc_837CF424;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CF408;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837cf424
	if (cr6.eq) goto loc_837CF424;
loc_837CF414:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837CF41C;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x837cf430
	goto loc_837CF430;
loc_837CF424:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837CF42C;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_837CF430:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CF448"))) PPC_WEAK_FUNC(sub_837CF448);
PPC_FUNC_IMPL(__imp__sub_837CF448) {
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
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837CF46C;
	sub_82596FE8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x837cf564
	if (cr6.lt) goto loc_837CF564;
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cf564
	if (!cr6.eq) goto loc_837CF564;
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r11,r10,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cf564
	if (cr6.eq) goto loc_837CF564;
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837cf564
	if (!cr6.eq) goto loc_837CF564;
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cf564
	if (cr6.eq) goto loc_837CF564;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cf4cc
	if (cr6.eq) goto loc_837CF4CC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cf564
	if (!cr6.eq) goto loc_837CF564;
loc_837CF4CC:
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 & ctx.r31.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x837cf554
	if (cr6.eq) goto loc_837CF554;
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cf564
	if (cr6.eq) goto loc_837CF564;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CF504;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cf564
	if (cr6.eq) goto loc_837CF564;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CF520;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837cf564
	if (cr6.eq) goto loc_837CF564;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// li r11,1
	ctx.r11.s64 = 1;
	// clrldi r9,r10,63
	ctx.r9.u64 = ctx.r10.u64 & 0x1;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// bne cr6,0x837cf548
	if (!cr6.eq) goto loc_837CF548;
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CF548:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cf564
	if (!cr6.eq) goto loc_837CF564;
loc_837CF554:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837CF55C;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x837cf570
	goto loc_837CF570;
loc_837CF564:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837CF56C;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_837CF570:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CF588"))) PPC_WEAK_FUNC(sub_837CF588);
PPC_FUNC_IMPL(__imp__sub_837CF588) {
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
	// bl 0x82aacdd8
	ctx.lr = 0x837CF5A4;
	sub_82AACDD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x837ccee8
	ctx.lr = 0x837CF5AC;
	sub_837CCEE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cf664
	if (cr6.eq) goto loc_837CF664;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,648(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837caed8
	ctx.lr = 0x837CF5C8;
	sub_837CAED8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,648(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// lwz r5,652(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// bl 0x837caf30
	ctx.lr = 0x837CF5D8;
	sub_837CAF30(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837cf604
	if (!cr6.eq) goto loc_837CF604;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cf608
	if (cr6.eq) goto loc_837CF608;
loc_837CF604:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CF608:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cf640
	if (cr6.eq) goto loc_837CF640;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x837cf640
	if (!cr6.eq) goto loc_837CF640;
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// stw r8,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r8.u32);
	// b 0x837cf668
	goto loc_837CF668;
loc_837CF640:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,656(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,652(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r5,648(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// lwz r4,624(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// bl 0x837d14a8
	ctx.lr = 0x837CF65C;
	sub_837D14A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cf078
	ctx.lr = 0x837CF664;
	sub_837CF078(ctx, base);
loc_837CF664:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837CF668:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CF680"))) PPC_WEAK_FUNC(sub_837CF680);
PPC_FUNC_IMPL(__imp__sub_837CF680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837CF688;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,584(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cf92c
	if (cr6.eq) goto loc_837CF92C;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cf944
	if (cr6.eq) goto loc_837CF944;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CF6BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837cf6d0
	if (!cr6.eq) goto loc_837CF6D0;
loc_837CF6C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CF6D0:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// ld r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// li r11,1
	ctx.r11.s64 = 1;
	// clrldi r9,r10,63
	ctx.r9.u64 = ctx.r10.u64 & 0x1;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// bne cr6,0x837cf6ec
	if (!cr6.eq) goto loc_837CF6EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CF6EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cf6c4
	if (!cr6.eq) goto loc_837CF6C4;
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r28,1
	ctx.r28.s64 = 65536;
	// lis r29,2
	ctx.r29.s64 = 131072;
loc_837CF704:
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// and r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 & ctx.r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cf8ec
	if (cr6.eq) goto loc_837CF8EC;
	// cmplwi cr6,r30,256
	cr6.compare<uint32_t>(ctx.r30.u32, 256, xer);
	// bgt cr6,0x837cf818
	if (cr6.gt) goto loc_837CF818;
	// beq cr6,0x837cf808
	if (cr6.eq) goto loc_837CF808;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// bgt cr6,0x837cf7bc
	if (cr6.gt) goto loc_837CF7BC;
	// beq cr6,0x837cf7ac
	if (cr6.eq) goto loc_837CF7AC;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x837cf8ec
	if (cr6.gt) goto loc_837CF8EC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837cf770
	if (cr6.eq) goto loc_837CF770;
	// bdz 0x837cf760
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837CF760;
	// bdz 0x837cf8ec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837CF8EC;
	// bdz 0x837cf784
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837CF784;
	// bdz 0x837cf8ec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837CF8EC;
	// bdz 0x837cf8ec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837CF8EC;
	// bdz 0x837cf8ec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837CF8EC;
	// b 0x837cf794
	goto loc_837CF794;
loc_837CF760:
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d4098
	ctx.lr = 0x837CF76C;
	sub_837D4098(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF770:
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// lwz r5,1024(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d4b58
	ctx.lr = 0x837CF780;
	sub_837D4B58(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF784:
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d4c78
	ctx.lr = 0x837CF790;
	sub_837D4C78(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF794:
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// lfs f2,700(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,696(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837d39e0
	ctx.lr = 0x837CF7A8;
	sub_837D39E0(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF7AC:
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d4ed8
	ctx.lr = 0x837CF7B8;
	sub_837D4ED8(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF7BC:
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// beq cr6,0x837cf7f8
	if (cr6.eq) goto loc_837CF7F8;
	// cmplwi cr6,r30,64
	cr6.compare<uint32_t>(ctx.r30.u32, 64, xer);
	// beq cr6,0x837cf7e4
	if (cr6.eq) goto loc_837CF7E4;
	// cmplwi cr6,r30,128
	cr6.compare<uint32_t>(ctx.r30.u32, 128, xer);
	// bne cr6,0x837cf8ec
	if (!cr6.eq) goto loc_837CF8EC;
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d3db0
	ctx.lr = 0x837CF7E0;
	sub_837D3DB0(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF7E4:
	// addi r5,r31,888
	ctx.r5.s64 = ctx.r31.s64 + 888;
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d3be8
	ctx.lr = 0x837CF7F4;
	sub_837D3BE8(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF7F8:
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d3af0
	ctx.lr = 0x837CF804;
	sub_837D3AF0(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF808:
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d3f38
	ctx.lr = 0x837CF814;
	sub_837D3F38(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF818:
	// cmplwi cr6,r30,16384
	cr6.compare<uint32_t>(ctx.r30.u32, 16384, xer);
	// bgt cr6,0x837cf89c
	if (cr6.gt) goto loc_837CF89C;
	// beq cr6,0x837cf88c
	if (cr6.eq) goto loc_837CF88C;
	// cmplwi cr6,r30,4096
	cr6.compare<uint32_t>(ctx.r30.u32, 4096, xer);
	// bgt cr6,0x837cf874
	if (cr6.gt) goto loc_837CF874;
	// beq cr6,0x837cf860
	if (cr6.eq) goto loc_837CF860;
	// cmplwi cr6,r30,512
	cr6.compare<uint32_t>(ctx.r30.u32, 512, xer);
	// beq cr6,0x837cf850
	if (cr6.eq) goto loc_837CF850;
	// cmplwi cr6,r30,2048
	cr6.compare<uint32_t>(ctx.r30.u32, 2048, xer);
	// bne cr6,0x837cf8ec
	if (!cr6.eq) goto loc_837CF8EC;
	// addi r4,r31,888
	ctx.r4.s64 = ctx.r31.s64 + 888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d4fb8
	ctx.lr = 0x837CF84C;
	sub_837D4FB8(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF850:
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d3ff0
	ctx.lr = 0x837CF85C;
	sub_837D3FF0(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF860:
	// addi r4,r31,888
	ctx.r4.s64 = ctx.r31.s64 + 888;
	// lwz r5,1020(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d5760
	ctx.lr = 0x837CF870;
	sub_837D5760(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF874:
	// cmplwi cr6,r30,8192
	cr6.compare<uint32_t>(ctx.r30.u32, 8192, xer);
	// bne cr6,0x837cf8ec
	if (!cr6.eq) goto loc_837CF8EC;
	// addi r4,r31,888
	ctx.r4.s64 = ctx.r31.s64 + 888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d42d8
	ctx.lr = 0x837CF888;
	sub_837D42D8(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF88C:
	// addi r4,r31,888
	ctx.r4.s64 = ctx.r31.s64 + 888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d4948
	ctx.lr = 0x837CF898;
	sub_837D4948(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF89C:
	// cmplwi cr6,r30,32768
	cr6.compare<uint32_t>(ctx.r30.u32, 32768, xer);
	// beq cr6,0x837cf8d4
	if (cr6.eq) goto loc_837CF8D4;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// beq cr6,0x837cf8c4
	if (cr6.eq) goto loc_837CF8C4;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x837cf8ec
	if (!cr6.eq) goto loc_837CF8EC;
	// addi r4,r31,888
	ctx.r4.s64 = ctx.r31.s64 + 888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d4720
	ctx.lr = 0x837CF8C0;
	sub_837D4720(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF8C4:
	// addi r4,r31,888
	ctx.r4.s64 = ctx.r31.s64 + 888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d4530
	ctx.lr = 0x837CF8D0;
	sub_837D4530(ctx, base);
	// b 0x837cf8e0
	goto loc_837CF8E0;
loc_837CF8D4:
	// addi r4,r31,888
	ctx.r4.s64 = ctx.r31.s64 + 888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d4380
	ctx.lr = 0x837CF8E0;
	sub_837D4380(ctx, base);
loc_837CF8E0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cf908
	if (!cr6.eq) goto loc_837CF908;
loc_837CF8EC:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r30,14
	ctx.r11.u64 = ctx.r30.u32 & 0x3FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cf704
	if (!cr6.eq) goto loc_837CF704;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CF908:
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,588(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// andc r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r30.u64;
	// or r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 | ctx.r30.u64;
	// stw r9,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r9.u32);
	// stw r8,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837CF92C:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r9,r11,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// ori r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 | 32;
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
loc_837CF944:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CF950"))) PPC_WEAK_FUNC(sub_837CF950);
PPC_FUNC_IMPL(__imp__sub_837CF950) {
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
	// lwz r30,608(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837cf9a0
	if (cr6.eq) goto loc_837CF9A0;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x837CF97C;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x837cf998
	if (cr6.gt) goto loc_837CF998;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CF998;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837CF998:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
loc_837CF9A0:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cfa48
	if (!cr6.eq) goto loc_837CFA48;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837CF9C8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cf9e8
	if (cr6.eq) goto loc_837CF9E8;
	// lwz r6,604(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// lwz r5,600(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// lwz r4,548(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// bl 0x837cf130
	ctx.lr = 0x837CF9E0;
	sub_837CF130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x837cf9ec
	goto loc_837CF9EC;
loc_837CF9E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_837CF9EC:
	// stw r4,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x837cfa00
	if (!cr6.eq) goto loc_837CFA00;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837cfa4c
	goto loc_837CFA4C;
loc_837CFA00:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r11,r31,124
	ctx.r11.s64 = ctx.r31.s64 + 124;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x837cfa30
	if (cr6.eq) goto loc_837CFA30;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CFA30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837CFA30:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r9,r11,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// ori r8,r10,64
	ctx.r8.u64 = ctx.r10.u64 | 64;
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
loc_837CFA48:
	// li r3,1
	ctx.r3.s64 = 1;
loc_837CFA4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CFA64"))) PPC_WEAK_FUNC(sub_837CFA64);
PPC_FUNC_IMPL(__imp__sub_837CFA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CFA68"))) PPC_WEAK_FUNC(sub_837CFA68);
PPC_FUNC_IMPL(__imp__sub_837CFA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837CFA70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cfae0
	if (cr6.eq) goto loc_837CFAE0;
	// bl 0x837cf1f0
	ctx.lr = 0x837CFA8C;
	sub_837CF1F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cfae0
	if (cr6.eq) goto loc_837CFAE0;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r11,r31,124
	ctx.r11.s64 = ctx.r31.s64 + 124;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x837cfacc
	if (cr6.eq) goto loc_837CFACC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CFACC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837CFACC:
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cfae0
	if (cr6.eq) goto loc_837CFAE0;
	// bl 0x82572f50
	ctx.lr = 0x837CFADC;
	sub_82572F50(ctx, base);
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
loc_837CFAE0:
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cfb40
	if (cr6.eq) goto loc_837CFB40;
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x837cfb00
	if (cr6.eq) goto loc_837CFB00;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x837cfb40
	if (!cr6.eq) goto loc_837CFB40;
loc_837CFB00:
	// lwz r10,628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// addi r11,r31,628
	ctx.r11.s64 = ctx.r31.s64 + 628;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x837cfb40
	if (cr6.eq) goto loc_837CFB40;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x837ceb88
	ctx.lr = 0x837CFB40;
	sub_837CEB88(ctx, base);
loc_837CFB40:
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cfc50
	if (cr6.eq) goto loc_837CFC50;
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837cfc50
	if (!cr6.eq) goto loc_837CFC50;
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cfb84
	if (cr6.eq) goto loc_837CFB84;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x837cfb84
	if (cr6.eq) goto loc_837CFB84;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x837cfbe8
	goto loc_837CFBE8;
loc_837CFB84:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837cfbe8
	if (cr6.eq) goto loc_837CFBE8;
	// ld r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 56);
	// clrldi r10,r11,63
	ctx.r10.u64 = ctx.r11.u64 & 0x1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// bne cr6,0x837cfba8
	if (!cr6.eq) goto loc_837CFBA8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_837CFBA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r10,598(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 598);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r29,r9,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x837cfbe0
	if (cr6.eq) goto loc_837CFBE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CFBD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837cfbe4
	if (cr6.eq) goto loc_837CFBE4;
loc_837CFBE0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837CFBE4:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
loc_837CFBE8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cfc1c
	if (cr6.eq) goto loc_837CFC1C;
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cfc1c
	if (cr6.eq) goto loc_837CFC1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,597(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 597);
	// bl 0x83b517c8
	ctx.lr = 0x837CFC10;
	sub_83B517C8(ctx, base);
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
loc_837CFC1C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837cfc50
	if (cr6.eq) goto loc_837CFC50;
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cfc50
	if (cr6.eq) goto loc_837CFC50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,598(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 598);
	// bl 0x83b517f8
	ctx.lr = 0x837CFC44;
	sub_83B517F8(ctx, base);
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
loc_837CFC50:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CFC64"))) PPC_WEAK_FUNC(sub_837CFC64);
PPC_FUNC_IMPL(__imp__sub_837CFC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CFC68"))) PPC_WEAK_FUNC(sub_837CFC68);
PPC_FUNC_IMPL(__imp__sub_837CFC68) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837cfcb0
	if (cr6.lt) goto loc_837CFCB0;
	// lwz r10,648(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// lwz r9,652(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 652);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// beq cr6,0x837cfcb0
	if (cr6.eq) goto loc_837CFCB0;
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
loc_837CFCB0:
	// lwz r11,576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	// rlwinm r10,r11,0,25,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7E;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cfce4
	if (cr6.eq) goto loc_837CFCE4;
	// lwz r10,572(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// rlwinm r11,r11,0,31,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// oris r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 536870912;
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// ori r9,r9,78
	ctx.r9.u64 = ctx.r9.u64 | 78;
	// stw r11,576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 576, ctx.r11.u32);
	// stw r9,572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 572, ctx.r9.u32);
	// bl 0x837cf078
	ctx.lr = 0x837CFCE4;
	sub_837CF078(ctx, base);
loc_837CFCE4:
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

__attribute__((alias("__imp__sub_837CFCF8"))) PPC_WEAK_FUNC(sub_837CFCF8);
PPC_FUNC_IMPL(__imp__sub_837CFCF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837CFD00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,1028
	ctx.r29.s64 = ctx.r3.s64 + 1028;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837CFD18;
	sub_82596FE8(ctx, base);
	// lis r11,261
	ctx.r11.s64 = 17104896;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,40
	ctx.r10.u64 = ctx.r11.u64 | 40;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// lbz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// bne cr6,0x837cfd3c
	if (!cr6.eq) goto loc_837CFD3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837cfc68
	ctx.lr = 0x837CFD3C;
	sub_837CFC68(ctx, base);
loc_837CFD3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837CFD44;
	sub_82597088(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CFD50"))) PPC_WEAK_FUNC(sub_837CFD50);
PPC_FUNC_IMPL(__imp__sub_837CFD50) {
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
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837CFD74;
	sub_82596FE8(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// li r11,9
	ctx.r11.s64 = 9;
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
	// bl 0x82597088
	ctx.lr = 0x837CFD90;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CFDA8"))) PPC_WEAK_FUNC(sub_837CFDA8);
PPC_FUNC_IMPL(__imp__sub_837CFDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_837CFDC0:
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
	// bne 0x837cfdc0
	if (!cr0.eq) goto loc_837CFDC0;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_837CFDF8"))) PPC_WEAK_FUNC(sub_837CFDF8);
PPC_FUNC_IMPL(__imp__sub_837CFDF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CFDFC"))) PPC_WEAK_FUNC(sub_837CFDFC);
PPC_FUNC_IMPL(__imp__sub_837CFDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CFE00"))) PPC_WEAK_FUNC(sub_837CFE00);
PPC_FUNC_IMPL(__imp__sub_837CFE00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837CFE08;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837CFE30;
	sub_82596FE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x837cff2c
	if (!cr6.eq) goto loc_837CFF2C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cfe68
	if (!cr6.eq) goto loc_837CFE68;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837cfe68
	if (!cr6.eq) goto loc_837CFE68;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837CFE60;
	sub_82597088(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_837CFE68:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x837cfe98
	if (!cr6.eq) goto loc_837CFE98;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// bl 0x82597088
	ctx.lr = 0x837CFE90;
	sub_82597088(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_837CFE98:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x837cfeb8
	if (cr6.eq) goto loc_837CFEB8;
	// bl 0x835eb7f0
	ctx.lr = 0x837CFEAC;
	sub_835EB7F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x837CFEB8;
	sub_82572FA0(ctx, base);
loc_837CFEB8:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833bbde0
	ctx.lr = 0x837CFED4;
	sub_833BBDE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x837CFEE4;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x837CFEF0;
	sub_82572FA0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x837cff14
	if (!cr6.eq) goto loc_837CFF14;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x837CFF0C;
	sub_82597088(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_837CFF14:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_837CFF2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837CFF34;
	sub_82597088(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CFF3C"))) PPC_WEAK_FUNC(sub_837CFF3C);
PPC_FUNC_IMPL(__imp__sub_837CFF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CFF40"))) PPC_WEAK_FUNC(sub_837CFF40);
PPC_FUNC_IMPL(__imp__sub_837CFF40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837CFF48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r11,-2272
	ctx.r10.s64 = ctx.r11.s64 + -2272;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x837cff80
	if (cr6.eq) goto loc_837CFF80;
	// bl 0x835eb7f0
	ctx.lr = 0x837CFF74;
	sub_835EB7F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x837CFF80;
	sub_82572FA0(ctx, base);
loc_837CFF80:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r28,r11,-32552
	ctx.r28.s64 = ctx.r11.s64 + -32552;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// bl 0x82596f90
	ctx.lr = 0x837CFF94;
	sub_82596F90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x837CFFA0;
	sub_82572FA0(ctx, base);
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837cffc4
	if (cr6.eq) goto loc_837CFFC4;
	// bl 0x82595188
	ctx.lr = 0x837CFFB4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837CFFC4;
	sub_825952B8(ctx, base);
loc_837CFFC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CFFD0"))) PPC_WEAK_FUNC(sub_837CFFD0);
PPC_FUNC_IMPL(__imp__sub_837CFFD0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d003c
	if (cr6.eq) goto loc_837D003C;
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_837CFFFC:
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
	// bne 0x837cfffc
	if (!cr0.eq) goto loc_837CFFFC;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d0034
	if (!cr6.eq) goto loc_837D0034;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D0034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837D0034:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_837D003C:
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

__attribute__((alias("__imp__sub_837D0050"))) PPC_WEAK_FUNC(sub_837D0050);
PPC_FUNC_IMPL(__imp__sub_837D0050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837D0058;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// bl 0x8378e240
	ctx.lr = 0x837D0068;
	sub_8378E240(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837d008c
	if (cr6.lt) goto loc_837D008C;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x837D008C;
	sub_825952B8(ctx, base);
loc_837D008C:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837d00c0
	if (cr6.lt) goto loc_837D00C0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x837D00C0;
	sub_825952B8(ctx, base);
loc_837D00C0:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837d00e8
	if (cr6.lt) goto loc_837D00E8;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x837D00E8;
	sub_825952B8(ctx, base);
loc_837D00E8:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D00FC"))) PPC_WEAK_FUNC(sub_837D00FC);
PPC_FUNC_IMPL(__imp__sub_837D00FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D0100"))) PPC_WEAK_FUNC(sub_837D0100);
PPC_FUNC_IMPL(__imp__sub_837D0100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837D0108;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-2260
	ctx.r10.s64 = ctx.r11.s64 + -2260;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x837d2ba0
	ctx.lr = 0x837D0124;
	sub_837D2BA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837d2ba0
	ctx.lr = 0x837D0130;
	sub_837D2BA0(ctx, base);
	// lwz r9,124(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r11,r30,124
	ctx.r11.s64 = ctx.r30.s64 + 124;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x837d0164
	if (cr6.eq) goto loc_837D0164;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D0164;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837D0164:
	// lwz r31,608(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837d019c
	if (cr6.eq) goto loc_837D019C;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x837D017C;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x837d0198
	if (cr6.gt) goto loc_837D0198;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D0198;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837D0198:
	// stw r28,608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 608, ctx.r28.u32);
loc_837D019C:
	// lwz r11,552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 552);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x837d01b8
	if (!cr6.eq) goto loc_837D01B8;
	// lwz r11,572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d01c0
	if (cr6.eq) goto loc_837D01C0;
loc_837D01B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b52cc8
	ctx.lr = 0x837D01C0;
	sub_83B52CC8(ctx, base);
loc_837D01C0:
	// addi r3,r30,1028
	ctx.r3.s64 = ctx.r30.s64 + 1028;
	// bl 0x82596f90
	ctx.lr = 0x837D01C8;
	sub_82596F90(ctx, base);
	// lwz r11,784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// addi r29,r30,764
	ctx.r29.s64 = ctx.r30.s64 + 764;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837d01ec
	if (cr6.lt) goto loc_837D01EC;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x837D01EC;
	sub_825952B8(ctx, base);
loc_837D01EC:
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// addi r31,r30,660
	ctx.r31.s64 = ctx.r30.s64 + 660;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// lwz r11,680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837d021c
	if (cr6.lt) goto loc_837D021C;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x837D021C;
	sub_825952B8(ctx, base);
loc_837D021C:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// lwz r3,632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 632);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d0278
	if (cr6.eq) goto loc_837D0278;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_837D0240:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x837d0240
	if (!cr0.eq) goto loc_837D0240;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d0278
	if (!cr6.eq) goto loc_837D0278;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D0278;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837D0278:
	// lwz r3,628(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d02c4
	if (cr6.eq) goto loc_837D02C4;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_837D028C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x837d028c
	if (!cr0.eq) goto loc_837D028C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d02c4
	if (!cr6.eq) goto loc_837D02C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D02C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837D02C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b525b0
	ctx.lr = 0x837D02CC;
	sub_83B525B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D02D4"))) PPC_WEAK_FUNC(sub_837D02D4);
PPC_FUNC_IMPL(__imp__sub_837D02D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D02D8"))) PPC_WEAK_FUNC(sub_837D02D8);
PPC_FUNC_IMPL(__imp__sub_837D02D8) {
	PPC_FUNC_PROLOGUE();
	PPCVRegister vTemp{};
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltisw128 v62,-1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r10,r3,160
	ctx.r10.s64 = ctx.r3.s64 + 160;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// vupkd3d128 v61,v63,0
	vTemp.u32[0] = ctx.v63.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v63.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v63.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v63.u8[2] | 0x3F800000;
	ctx.v61 = vTemp;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// vsldoi128 v60,v63,v62,12
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 4));
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// vsldoi128 v59,v62,v63,8
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 8));
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// vsldoi128 v58,v63,v62,8
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 8));
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// vsldoi128 v57,v62,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// vor128 v0,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v13,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// vand128 v10,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vsldoi128 v56,v61,v63,12
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 4));
	// vor128 v11,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// vand128 v9,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// vsldoi128 v55,v63,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// vsel v10,v0,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// stw r9,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r9.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stb r11,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r11.u8);
	// vsel v0,v12,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r9,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r9.u32);
	// stb r11,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r11.u8);
	// stvx128 v56,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// stvx128 v0,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r10,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D0398"))) PPC_WEAK_FUNC(sub_837D0398);
PPC_FUNC_IMPL(__imp__sub_837D0398) {
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
	// bl 0x837d0100
	ctx.lr = 0x837D03B8;
	sub_837D0100(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d03d8
	if (cr6.eq) goto loc_837D03D8;
	// bl 0x82595188
	ctx.lr = 0x837D03C8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837D03D8;
	sub_825952B8(ctx, base);
loc_837D03D8:
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

__attribute__((alias("__imp__sub_837D03F4"))) PPC_WEAK_FUNC(sub_837D03F4);
PPC_FUNC_IMPL(__imp__sub_837D03F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D03F8"))) PPC_WEAK_FUNC(sub_837D03F8);
PPC_FUNC_IMPL(__imp__sub_837D03F8) {
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
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x8259cc28
	ctx.lr = 0x837D042C;
	sub_8259CC28(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_837D044C"))) PPC_WEAK_FUNC(sub_837D044C);
PPC_FUNC_IMPL(__imp__sub_837D044C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D0450"))) PPC_WEAK_FUNC(sub_837D0450);
PPC_FUNC_IMPL(__imp__sub_837D0450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x837D0458;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// bl 0x83b539f8
	ctx.lr = 0x837D0478;
	sub_83B539F8(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-2260
	ctx.r9.s64 = ctx.r11.s64 + -2260;
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// ori r11,r10,65523
	ctx.r11.u64 = ctx.r10.u64 | 65523;
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// std r30,560(r31)
	PPC_STORE_U64(ctx.r31.u32 + 560, ctx.r30.u64);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r30,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r30.u8);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r8,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r8.u32);
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// addi r3,r31,660
	ctx.r3.s64 = ctx.r31.s64 + 660;
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// addi r4,r9,-2478
	ctx.r4.s64 = ctx.r9.s64 + -2478;
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// addi r27,r31,628
	ctx.r27.s64 = ctx.r31.s64 + 628;
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// addi r26,r31,632
	ctx.r26.s64 = ctx.r31.s64 + 632;
	// stb r30,596(r31)
	PPC_STORE_U8(ctx.r31.u32 + 596, ctx.r30.u8);
	// stb r28,597(r31)
	PPC_STORE_U8(ctx.r31.u32 + 597, ctx.r28.u8);
	// stw r30,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r30.u32);
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// stw r7,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r7.u32);
	// sth r30,616(r31)
	PPC_STORE_U16(ctx.r31.u32 + 616, ctx.r30.u16);
	// stw r6,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r6.u32);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// stw r30,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r30.u32);
	// stw r30,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r30.u32);
	// stw r10,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r10.u32);
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// stw r29,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r29.u32);
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// stb r30,660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 660, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x837D0548;
	sub_8259CC28(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r30,692(r31)
	PPC_STORE_U8(ctx.r31.u32 + 692, ctx.r30.u8);
	// addi r3,r31,764
	ctx.r3.s64 = ctx.r31.s64 + 764;
	// stb r30,708(r31)
	PPC_STORE_U8(ctx.r31.u32 + 708, ctx.r30.u8);
	// lis r6,-32203
	ctx.r6.s64 = -2110455808;
	// stw r7,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r7.u32);
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r30.u32);
	// stfs f0,696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stw r30,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r30.u32);
	// stfs f0,700(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 700, temp.u32);
	// stw r30,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r30.u32);
	// stfs f0,704(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 704, temp.u32);
	// stw r30,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r30.u32);
	// stfs f0,740(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 740, temp.u32);
	// stw r30,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r30.u32);
	// stfs f0,744(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// stw r30,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r30.u32);
	// stfs f0,748(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 748, temp.u32);
	// stfs f0,752(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 752, temp.u32);
	// stw r28,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r28.u32);
	// stb r30,760(r31)
	PPC_STORE_U8(ctx.r31.u32 + 760, ctx.r30.u8);
	// addi r4,r6,-22544
	ctx.r4.s64 = ctx.r6.s64 + -22544;
	// stb r30,761(r31)
	PPC_STORE_U8(ctx.r31.u32 + 761, ctx.r30.u8);
	// stb r30,762(r31)
	PPC_STORE_U8(ctx.r31.u32 + 762, ctx.r30.u8);
	// stw r29,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r29.u32);
	// stw r30,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r30.u32);
	// stb r30,764(r31)
	PPC_STORE_U8(ctx.r31.u32 + 764, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x837D05C8;
	sub_8259CC28(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r29,r31,816
	ctx.r29.s64 = ctx.r31.s64 + 816;
	// stw r30,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r30.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r30,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r30.u32);
	// lfs f0,-2220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2220);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r30.u32);
	// stfs f0,812(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 812, temp.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x837D05FC;
	sub_831CDCF0(ctx, base);
	// addi r28,r31,888
	ctx.r28.s64 = ctx.r31.s64 + 888;
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x837D0610;
	sub_831CDCF0(ctx, base);
	// stw r30,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r30.u32);
	// stw r30,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r30.u32);
	// addi r3,r31,1028
	ctx.r3.s64 = ctx.r31.s64 + 1028;
	// bl 0x82596fa8
	ctx.lr = 0x837D0620;
	sub_82596FA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x837cffd0
	ctx.lr = 0x837D0630;
	sub_837CFFD0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x837cffd0
	ctx.lr = 0x837D0640;
	sub_837CFFD0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8373fae8
	ctx.lr = 0x837D064C;
	sub_8373FAE8(ctx, base);
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x837D065C;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x83b513b0
	ctx.lr = 0x837D066C;
	sub_83B513B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83b53358
	ctx.lr = 0x837D0684;
	sub_83B53358(ctx, base);
	// lbz r10,105(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 105);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// rlwimi r10,r24,0,30,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r24.u32, 0) & 0x3) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFC);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D06A0"))) PPC_WEAK_FUNC(sub_837D06A0);
PPC_FUNC_IMPL(__imp__sub_837D06A0) {
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
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r3,764
	ctx.r4.s64 = ctx.r3.s64 + 764;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x837D06DC;
	sub_8259CB28(ctx, base);
	// lwz r9,792(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	// lwz r8,796(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x83b534c8
	ctx.lr = 0x837D06F8;
	sub_83B534C8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x837d071c
	if (!cr6.eq) goto loc_837D071C;
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
loc_837D071C:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r9,r11,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// ori r8,r10,16
	ctx.r8.u64 = ctx.r10.u64 | 16;
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_837D074C"))) PPC_WEAK_FUNC(sub_837D074C);
PPC_FUNC_IMPL(__imp__sub_837D074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D0750"))) PPC_WEAK_FUNC(sub_837D0750);
PPC_FUNC_IMPL(__imp__sub_837D0750) {
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837D077C;
	sub_8259CB28(ctx, base);
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D07A0"))) PPC_WEAK_FUNC(sub_837D07A0);
PPC_FUNC_IMPL(__imp__sub_837D07A0) {
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
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837D07CC;
	sub_8259CB28(ctx, base);
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D07F0"))) PPC_WEAK_FUNC(sub_837D07F0);
PPC_FUNC_IMPL(__imp__sub_837D07F0) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,636(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x837d0a28
	if (cr6.gt) goto loc_837D0A28;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837d08d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D08D8;
	// bdzf 4*cr6+eq,0x837d08d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D08D8;
	// bdzf 4*cr6+eq,0x837d0828
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D0828;
	// bne cr6,0x837d08d8
	if (!cr6.eq) goto loc_837D08D8;
loc_837D0828:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x837d084c
	if (cr6.eq) goto loc_837D084C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b52b50
	ctx.lr = 0x837D084C;
	sub_83B52B50(ctx, base);
loc_837D084C:
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r9,636(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bne cr6,0x837d0874
	if (!cr6.eq) goto loc_837D0874;
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// b 0x837d087c
	goto loc_837D087C;
loc_837D0874:
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
loc_837D087C:
	// lwz r10,688(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// addi r11,r31,660
	ctx.r11.s64 = ctx.r31.s64 + 660;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lwz r9,680(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x837d0898
	if (cr6.lt) goto loc_837D0898;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837D0898:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831ce7d8
	ctx.lr = 0x837D08A8;
	sub_831CE7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b543e8
	ctx.lr = 0x837D08B0;
	sub_83B543E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d0928
	if (cr6.eq) goto loc_837D0928;
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r9,r11,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// b 0x837d0a28
	goto loc_837D0A28;
loc_837D08D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x837d02d8
	ctx.lr = 0x837D08F4;
	sub_837D02D8(ctx, base);
	// lwz r9,636(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// lwz r3,640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// beq cr6,0x837d0980
	if (cr6.eq) goto loc_837D0980;
	// bl 0x837cabd8
	ctx.lr = 0x837D090C;
	sub_837CABD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d0940
	if (!cr6.eq) goto loc_837D0940;
loc_837D0918:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
loc_837D091C:
	// bl 0x837d0050
	ctx.lr = 0x837D0920;
	sub_837D0050(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x837D0928;
	sub_8387E8E0(ctx, base);
loc_837D0928:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_837D0940:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837d0954
	if (!cr6.lt) goto loc_837D0954;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_837D0954:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259afd8
	ctx.lr = 0x837D095C;
	sub_8259AFD8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837d03f8
	ctx.lr = 0x837D0968;
	sub_837D03F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837d0750
	ctx.lr = 0x837D0974;
	sub_837D0750(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x837D097C;
	sub_8387E8E0(ctx, base);
	// b 0x837d09cc
	goto loc_837D09CC;
loc_837D0980:
	// bl 0x837ca890
	ctx.lr = 0x837D0984;
	sub_837CA890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d0918
	if (cr6.eq) goto loc_837D0918;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837d09a4
	if (!cr6.lt) goto loc_837D09A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_837D09A4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259afd8
	ctx.lr = 0x837D09AC;
	sub_8259AFD8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837d03f8
	ctx.lr = 0x837D09B8;
	sub_837D03F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837d07a0
	ctx.lr = 0x837D09C4;
	sub_837D07A0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x837D09CC;
	sub_8387E8E0(ctx, base);
loc_837D09CC:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x83b55e30
	ctx.lr = 0x837D09DC;
	sub_83B55E30(ctx, base);
	// addi r11,r31,628
	ctx.r11.s64 = ctx.r31.s64 + 628;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83b524e8
	ctx.lr = 0x837D09EC;
	sub_83B524E8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x837cfda8
	ctx.lr = 0x837D09F4;
	sub_837CFDA8(ctx, base);
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d091c
	if (cr6.eq) goto loc_837D091C;
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r9,r11,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// bl 0x837d0050
	ctx.lr = 0x837D0A20;
	sub_837D0050(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x837D0A28;
	sub_8387E8E0(ctx, base);
loc_837D0A28:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D0A40"))) PPC_WEAK_FUNC(sub_837D0A40);
PPC_FUNC_IMPL(__imp__sub_837D0A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837D0A48;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x837d0c6c
	if (cr6.eq) goto loc_837D0C6C;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r27,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r27.u8);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// li r5,59
	ctx.r5.s64 = 59;
	// stw r27,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r27.u32);
	// addi r30,r9,-2416
	ctx.r30.s64 = ctx.r9.s64 + -2416;
	// stb r27,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r27.u8);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// stb r10,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r10.u8);
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// bl 0x8259cc28
	ctx.lr = 0x837D0AAC;
	sub_8259CC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,57
	ctx.r5.s64 = 57;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8259cc28
	ctx.lr = 0x837D0ABC;
	sub_8259CC28(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x837d02d8
	ctx.lr = 0x837D0AC4;
	sub_837D02D8(ctx, base);
	// lbz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// addi r29,r3,96
	ctx.r29.s64 = ctx.r3.s64 + 96;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r8,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r8.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x837D0AEC;
	sub_8259CB28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x837D0B00;
	sub_8259CB28(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83b55e30
	ctx.lr = 0x837D0B10;
	sub_83B55E30(ctx, base);
	// addi r30,r31,632
	ctx.r30.s64 = ctx.r31.s64 + 632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b524e8
	ctx.lr = 0x837D0B20;
	sub_83B524E8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d0b74
	if (cr6.eq) goto loc_837D0B74;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwsync 
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_837D0B3C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ea = ctx.r6.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwcx. r8,0,r6
	ea = ctx.r6.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x837d0b3c
	if (!cr0.eq) goto loc_837D0B3C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837d0b74
	if (!cr6.eq) goto loc_837D0B74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D0B74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837D0B74:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x837d0050
	ctx.lr = 0x837D0B7C;
	sub_837D0050(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 & ctx.r30.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x837d0c64
	if (cr6.eq) goto loc_837D0C64;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// vspltisw128 v62,-1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// vupkd3d128 v61,v63,0
	vTemp.u32[0] = ctx.v63.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v63.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v63.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v63.u8[2] | 0x3F800000;
	ctx.v61 = vTemp;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfs f0,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4460(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4460);
	ctx.f13.f64 = double(temp.f32);
	// vsldoi128 v9,v63,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// vsldoi128 v13,v63,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f0,20792(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20792);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lfs f13,-6668(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -6668);
	ctx.f13.f64 = double(temp.f32);
	// vsldoi128 v60,v63,v62,12
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 4));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vsldoi128 v59,v62,v63,8
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 8));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vsldoi128 v58,v63,v62,8
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 8));
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsel v9,v0,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vsldoi128 v57,v62,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// lfs f12,-26260(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// vor128 v10,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// stvx128 v9,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v8,v62,v63,12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 4));
	// vor v9,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// vand128 v7,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vand128 v6,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vsel v8,v10,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vsel v0,v10,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vsel v13,v10,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// stvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x837ceb18
	ctx.lr = 0x837D0C58;
	sub_837CEB18(ctx, base);
	// lwz r8,580(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r7,r8,0,26,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r7,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r7.u32);
loc_837D0C64:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8378e240
	ctx.lr = 0x837D0C6C;
	sub_8378E240(ctx, base);
loc_837D0C6C:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d0cc0
	if (cr6.eq) goto loc_837D0CC0;
	// lwz r4,540(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// addi r11,r31,124
	ctx.r11.s64 = ctx.r31.s64 + 124;
	// stw r4,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r4.u32);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x837d0cb4
	if (cr6.eq) goto loc_837D0CB4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D0CB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837D0CB4:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
loc_837D0CC0:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d0d10
	if (cr6.eq) goto loc_837D0D10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,804(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 804);
	// bl 0x83b52368
	ctx.lr = 0x837D0CDC;
	sub_83B52368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d0d10
	if (cr6.eq) goto loc_837D0D10;
	// lwz r11,808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d0d04
	if (cr6.eq) goto loc_837D0D04;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r9.u8);
loc_837D0D04:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
loc_837D0D10:
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x837d0ef8
	if (cr6.gt) goto loc_837D0EF8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837d0e94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D0E94;
	// bdzf 4*cr6+eq,0x837d0e94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D0E94;
	// bdzf 4*cr6+eq,0x837d0d34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D0D34;
	// bne cr6,0x837d0e94
	if (!cr6.eq) goto loc_837D0E94;
loc_837D0D34:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d0d60
	if (cr6.eq) goto loc_837D0D60;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,704(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b51480
	ctx.lr = 0x837D0D54;
	sub_83B51480(ctx, base);
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
loc_837D0D60:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d0d94
	if (cr6.eq) goto loc_837D0D94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,688(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// bl 0x83b519c0
	ctx.lr = 0x837D0D7C;
	sub_83B519C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d0d94
	if (cr6.eq) goto loc_837D0D94;
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
loc_837D0D94:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d0dc8
	if (cr6.eq) goto loc_837D0DC8;
	// addi r4,r31,660
	ctx.r4.s64 = ctx.r31.s64 + 660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b53400
	ctx.lr = 0x837D0DB0;
	sub_83B53400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d0dc8
	if (cr6.eq) goto loc_837D0DC8;
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
loc_837D0DC8:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d0dfc
	if (cr6.eq) goto loc_837D0DFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,692(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 692);
	// bl 0x83b51a48
	ctx.lr = 0x837D0DE4;
	sub_83B51A48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d0dfc
	if (cr6.eq) goto loc_837D0DFC;
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
loc_837D0DFC:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d0efc
	if (cr6.eq) goto loc_837D0EFC;
	// lfs f1,696(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f0,700(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x833c7538
	ctx.lr = 0x837D0E64;
	sub_833C7538(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b51898
	ctx.lr = 0x837D0E78;
	sub_83B51898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d0efc
	if (cr6.eq) goto loc_837D0EFC;
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
	// b 0x837d0efc
	goto loc_837D0EFC;
loc_837D0E94:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d0ee8
	if (cr6.eq) goto loc_837D0EE8;
	// lwz r10,628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// addi r11,r31,628
	ctx.r11.s64 = ctx.r31.s64 + 628;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x837d0edc
	if (cr6.eq) goto loc_837D0EDC;
	// lfs f0,704(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x837ceb88
	ctx.lr = 0x837D0EDC;
	sub_837CEB88(ctx, base);
loc_837D0EDC:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
loc_837D0EE8:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
	// b 0x837d0efc
	goto loc_837D0EFC;
loc_837D0EF8:
	// stw r27,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r27.u32);
loc_837D0EFC:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// clrlwi r10,r11,23
	ctx.r10.u64 = ctx.r11.u32 & 0x1FF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d0f1c
	if (cr6.eq) goto loc_837D0F1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837D0F1C:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r9,r11,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// ori r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 8;
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D0F44"))) PPC_WEAK_FUNC(sub_837D0F44);
PPC_FUNC_IMPL(__imp__sub_837D0F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D0F48"))) PPC_WEAK_FUNC(sub_837D0F48);
PPC_FUNC_IMPL(__imp__sub_837D0F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D0F50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,1028
	ctx.r28.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D0F64;
	sub_82596FE8(ctx, base);
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x837d0fa4
	if (!cr6.eq) goto loc_837D0FA4;
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d1134
	if (cr6.eq) goto loc_837D1134;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// bl 0x83b52cc8
	ctx.lr = 0x837D0F90;
	sub_83B52CC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837D0F98;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837D0FA4:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b512e8
	ctx.lr = 0x837D0FB8;
	sub_83B512E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d0fd8
	if (cr6.eq) goto loc_837D0FD8;
	// lwz r10,544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x837d0fd8
	if (cr6.eq) goto loc_837D0FD8;
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
loc_837D0FD8:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d101c
	if (cr6.eq) goto loc_837D101C;
	// lbz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d1010
	if (cr6.eq) goto loc_837D1010;
	// bl 0x83a7d958
	ctx.lr = 0x837D0FF8;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x837D0FFC;
	sub_83524138(ctx, base);
	// ld r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 560);
	// addi r11,r11,300
	ctx.r11.s64 = ctx.r11.s64 + 300;
	// cmpld cr6,r3,r11
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, xer);
	// ble cr6,0x837d1134
	if (!cr6.gt) goto loc_837D1134;
	// stb r30,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r30.u8);
loc_837D1010:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r10.u32);
loc_837D101C:
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x837d1120
	if (cr6.lt) goto loc_837D1120;
	// beq cr6,0x837d10ec
	if (cr6.eq) goto loc_837D10EC;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x837d1134
	if (cr6.eq) goto loc_837D1134;
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// rlwinm r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837d1134
	if (!cr6.eq) goto loc_837D1134;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x837d1134
	if (cr6.gt) goto loc_837D1134;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837d107c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D107C;
	// bdzf 4*cr6+eq,0x837d1088
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D1088;
	// bdzf 4*cr6+eq,0x837d1094
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D1094;
	// bdzf 4*cr6+eq,0x837d10a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D10A0;
	// bdzf 4*cr6+eq,0x837d10ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D10AC;
	// bne cr6,0x837d10b8
	if (!cr6.eq) goto loc_837D10B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cf588
	ctx.lr = 0x837D1078;
	sub_837CF588(ctx, base);
	// b 0x837d10c0
	goto loc_837D10C0;
loc_837D107C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d06a0
	ctx.lr = 0x837D1084;
	sub_837D06A0(ctx, base);
	// b 0x837d10c0
	goto loc_837D10C0;
loc_837D1088:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d07f0
	ctx.lr = 0x837D1090;
	sub_837D07F0(ctx, base);
	// b 0x837d10c0
	goto loc_837D10C0;
loc_837D1094:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d0a40
	ctx.lr = 0x837D109C;
	sub_837D0A40(ctx, base);
	// b 0x837d10c0
	goto loc_837D10C0;
loc_837D10A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cf680
	ctx.lr = 0x837D10A8;
	sub_837CF680(ctx, base);
	// b 0x837d10c0
	goto loc_837D10C0;
loc_837D10AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cef60
	ctx.lr = 0x837D10B4;
	sub_837CEF60(ctx, base);
	// b 0x837d10c0
	goto loc_837D10C0;
loc_837D10B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cf950
	ctx.lr = 0x837D10C0;
	sub_837CF950(ctx, base);
loc_837D10C0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d1134
	if (cr6.eq) goto loc_837D1134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cee08
	ctx.lr = 0x837D10D4;
	sub_837CEE08(ctx, base);
	// stw r3,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837D10E0;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837D10EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cfa68
	ctx.lr = 0x837D10F4;
	sub_837CFA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d1134
	if (cr6.eq) goto loc_837D1134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cee08
	ctx.lr = 0x837D1108;
	sub_837CEE08(ctx, base);
	// stw r3,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837D1114;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837D1120:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d1134
	if (cr6.eq) goto loc_837D1134;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
loc_837D1134:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837D113C;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D1148"))) PPC_WEAK_FUNC(sub_837D1148);
PPC_FUNC_IMPL(__imp__sub_837D1148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D1150;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D116C;
	sub_82596FE8(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x837d1184
	if (!cr6.eq) goto loc_837D1184;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x837d11f8
	if (cr6.eq) goto loc_837D11F8;
loc_837D1184:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x837d11e8
	if (cr6.lt) goto loc_837D11E8;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d11e8
	if (cr6.eq) goto loc_837D11E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b51820
	ctx.lr = 0x837D11B4;
	sub_83B51820(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r8,r10,8192
	ctx.r8.u64 = ctx.r10.u64 | 536870912;
	// rlwinm r7,r9,0,26,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// ori r8,r8,64
	ctx.r8.u64 = ctx.r8.u64 | 64;
	// stw r7,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r7.u32);
	// stw r8,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r8.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D11D8;
	sub_837CF078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D11E0;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837D11E8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b513b0
	ctx.lr = 0x837D11F8;
	sub_83B513B0(ctx, base);
loc_837D11F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D1200;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D1208"))) PPC_WEAK_FUNC(sub_837D1208);
PPC_FUNC_IMPL(__imp__sub_837D1208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D1210;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D1228;
	sub_82596FE8(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x837d1268
	if (cr6.eq) goto loc_837D1268;
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,128
	ctx.r8.u64 = ctx.r11.u64 | 128;
	// stw r29,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r29.u32);
	// ori r7,r7,8
	ctx.r7.u64 = ctx.r7.u64 | 8;
	// rlwinm r6,r9,0,29,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r8,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D1268;
	sub_837CF078(ctx, base);
loc_837D1268:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D1270;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D1278"))) PPC_WEAK_FUNC(sub_837D1278);
PPC_FUNC_IMPL(__imp__sub_837D1278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D1280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,1028
	ctx.r29.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D1298;
	sub_82596FE8(ctx, base);
	// lbz r10,597(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 597);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x837d12dc
	if (cr6.eq) goto loc_837D12DC;
	// stb r30,597(r31)
	PPC_STORE_U8(ctx.r31.u32 + 597, ctx.r30.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d12d0
	if (!cr6.eq) goto loc_837D12D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b517c8
	ctx.lr = 0x837D12C0;
	sub_83B517C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837D12C8;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837D12D0:
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
loc_837D12DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837D12E4;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D12EC"))) PPC_WEAK_FUNC(sub_837D12EC);
PPC_FUNC_IMPL(__imp__sub_837D12EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D12F0"))) PPC_WEAK_FUNC(sub_837D12F0);
PPC_FUNC_IMPL(__imp__sub_837D12F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D12F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,1028
	ctx.r29.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D1310;
	sub_82596FE8(ctx, base);
	// lbz r10,598(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 598);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x837d1354
	if (cr6.eq) goto loc_837D1354;
	// stb r30,598(r31)
	PPC_STORE_U8(ctx.r31.u32 + 598, ctx.r30.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d1348
	if (!cr6.eq) goto loc_837D1348;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b517f8
	ctx.lr = 0x837D1338;
	sub_83B517F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837D1340;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837D1348:
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
loc_837D1354:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837D135C;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D1364"))) PPC_WEAK_FUNC(sub_837D1364);
PPC_FUNC_IMPL(__imp__sub_837D1364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D1368"))) PPC_WEAK_FUNC(sub_837D1368);
PPC_FUNC_IMPL(__imp__sub_837D1368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D1370;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,1028
	ctx.r31.s64 = ctx.r3.s64 + 1028;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D1388;
	sub_82596FE8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837d41a8
	ctx.lr = 0x837D1394;
	sub_837D41A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837D13A0;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D13AC"))) PPC_WEAK_FUNC(sub_837D13AC);
PPC_FUNC_IMPL(__imp__sub_837D13AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D13B0"))) PPC_WEAK_FUNC(sub_837D13B0);
PPC_FUNC_IMPL(__imp__sub_837D13B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837D13B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,1028
	ctx.r27.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D13D0;
	sub_82596FE8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x837d13e8
	if (cr6.eq) goto loc_837D13E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_837D13E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x83b51448
	ctx.lr = 0x837D13F4;
	sub_83B51448(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d140c
	if (cr6.eq) goto loc_837D140C;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r28,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r28.u32);
	// b 0x837d1414
	goto loc_837D1414;
loc_837D140C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837d1430
	if (cr6.eq) goto loc_837D1430;
loc_837D1414:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r9,r11,8192
	ctx.r9.u64 = ctx.r11.u64 | 536870912;
	// rlwinm r8,r10,0,26,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
loc_837D1430:
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cf078
	ctx.lr = 0x837D143C;
	sub_837CF078(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x837D1444;
	sub_82597088(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D1450"))) PPC_WEAK_FUNC(sub_837D1450);
PPC_FUNC_IMPL(__imp__sub_837D1450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D1458;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D1470;
	sub_82596FE8(ctx, base);
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r9,r11,8192
	ctx.r9.u64 = ctx.r11.u64 | 536870912;
	// stw r29,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r29.u32);
	// rlwinm r8,r10,0,26,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D1498;
	sub_837CF078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D14A0;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D14A8"))) PPC_WEAK_FUNC(sub_837D14A8);
PPC_FUNC_IMPL(__imp__sub_837D14A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837D14B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x82aacdd8
	ctx.lr = 0x837D14D0;
	sub_82AACDD8(ctx, base);
	// clrlwi r26,r30,24
	ctx.r26.u64 = ctx.r30.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x837d14ec
	if (cr6.eq) goto loc_837D14EC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x837cb0a0
	ctx.lr = 0x837D14EC;
	sub_837CB0A0(ctx, base);
loc_837D14EC:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837cbe70
	ctx.lr = 0x837D1500;
	sub_837CBE70(ctx, base);
	// clrlwi r24,r3,24
	ctx.r24.u64 = ctx.r3.u32 & 0xFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837cbd68
	ctx.lr = 0x837D1514;
	sub_837CBD68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// or r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 | ctx.r24.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d1540
	if (!cr6.eq) goto loc_837D1540;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x837d1540
	if (!cr6.eq) goto loc_837D1540;
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// b 0x837d1568
	goto loc_837D1568;
loc_837D1540:
	// lwz r9,572(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r10,588(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// lwz r8,576(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r6,r9,8192
	ctx.r6.u64 = ctx.r9.u64 | 536870912;
	// rlwinm r7,r10,0,22,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFC03FF;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// rlwinm r5,r8,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r7.u32);
	// stw r6,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r6.u32);
	// stw r5,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r5.u32);
loc_837D1568:
	// lwz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// xor r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r29.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837d1590
	if (!cr6.eq) goto loc_837D1590;
	// xor r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r29.u64;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837d1594
	if (cr6.eq) goto loc_837D1594;
loc_837D1590:
	// li r10,0
	ctx.r10.s64 = 0;
loc_837D1594:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d15c4
	if (cr6.eq) goto loc_837D15C4;
	// lwz r10,648(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, xer);
	// bne cr6,0x837d15c4
	if (!cr6.eq) goto loc_837D15C4;
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// bne cr6,0x837d15c4
	if (!cr6.eq) goto loc_837D15C4;
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// beq cr6,0x837d15d8
	if (cr6.eq) goto loc_837D15D8;
loc_837D15C4:
	// stw r29,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r28.u32);
	// stw r27,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r27.u32);
	// stw r25,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r25.u32);
loc_837D15D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d1614
	if (cr6.eq) goto loc_837D1614;
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r10,r11,0,25,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7E;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d1614
	if (cr6.eq) goto loc_837D1614;
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// rlwinm r9,r11,0,31,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// oris r8,r10,8192
	ctx.r8.u64 = ctx.r10.u64 | 536870912;
	// rlwinm r9,r9,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// ori r8,r8,78
	ctx.r8.u64 = ctx.r8.u64 | 78;
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// stw r8,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r8.u32);
loc_837D1614:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cf078
	ctx.lr = 0x837D161C;
	sub_837CF078(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D1624"))) PPC_WEAK_FUNC(sub_837D1624);
PPC_FUNC_IMPL(__imp__sub_837D1624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D1628"))) PPC_WEAK_FUNC(sub_837D1628);
PPC_FUNC_IMPL(__imp__sub_837D1628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837D1630;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,1028
	ctx.r31.s64 = ctx.r3.s64 + 1028;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D1658;
	sub_82596FE8(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837d14a8
	ctx.lr = 0x837D1674;
	sub_837D14A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837D167C;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D1684"))) PPC_WEAK_FUNC(sub_837D1684);
PPC_FUNC_IMPL(__imp__sub_837D1684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D1688"))) PPC_WEAK_FUNC(sub_837D1688);
PPC_FUNC_IMPL(__imp__sub_837D1688) {
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
	// addi r31,r3,1028
	ctx.r31.s64 = ctx.r3.s64 + 1028;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D16B0;
	sub_82596FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82597088
	ctx.lr = 0x837D16BC;
	sub_82597088(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D16DC"))) PPC_WEAK_FUNC(sub_837D16DC);
PPC_FUNC_IMPL(__imp__sub_837D16DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D16E0"))) PPC_WEAK_FUNC(sub_837D16E0);
PPC_FUNC_IMPL(__imp__sub_837D16E0) {
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
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D170C;
	sub_82596FE8(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// stfs f31,704(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 704, temp.u32);
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,16
	ctx.r8.u64 = ctx.r11.u64 | 16;
	// ori r7,r7,8
	ctx.r7.u64 = ctx.r7.u64 | 8;
	// rlwinm r6,r9,0,29,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r8,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D1740;
	sub_837CF078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D1748;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_837D1764"))) PPC_WEAK_FUNC(sub_837D1764);
PPC_FUNC_IMPL(__imp__sub_837D1764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D1768"))) PPC_WEAK_FUNC(sub_837D1768);
PPC_FUNC_IMPL(__imp__sub_837D1768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837D1770;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,1028
	ctx.r26.s64 = ctx.r3.s64 + 1028;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D179C;
	sub_82596FE8(ctx, base);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d1800
	if (cr6.eq) goto loc_837D1800;
	// lwz r10,712(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x837d1800
	if (!cr6.eq) goto loc_837D1800;
	// lwz r10,716(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bne cr6,0x837d1800
	if (!cr6.eq) goto loc_837D1800;
	// lfs f0,740(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x837d1800
	if (!cr6.eq) goto loc_837D1800;
	// lbz r10,761(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 761);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x837d1800
	if (!cr6.eq) goto loc_837D1800;
	// lbz r10,760(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 760);
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x837d1800
	if (!cr6.eq) goto loc_837D1800;
	// lbz r10,762(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 762);
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x837d1884
	if (cr6.eq) goto loc_837D1884;
loc_837D1800:
	// lwz r9,572(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f31,740(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 740, temp.u32);
	// oris r11,r9,8192
	ctx.r11.u64 = ctx.r9.u64 | 536870912;
	// stw r30,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r30.u32);
	// stb r29,761(r31)
	PPC_STORE_U8(ctx.r31.u32 + 761, ctx.r29.u8);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r28,760(r31)
	PPC_STORE_U8(ctx.r31.u32 + 760, ctx.r28.u8);
	// stw r8,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r8.u32);
	// rlwinm r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// stb r27,762(r31)
	PPC_STORE_U8(ctx.r31.u32 + 762, ctx.r27.u8);
	// stw r10,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// bne cr6,0x837d187c
	if (!cr6.eq) goto loc_837D187C;
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837d187c
	if (!cr6.eq) goto loc_837D187C;
	// lwz r9,552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// beq cr6,0x837d187c
	if (cr6.eq) goto loc_837D187C;
	// lwz r9,580(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r8,r10,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// oris r7,r11,8192
	ctx.r7.u64 = ctx.r11.u64 | 536870912;
	// rlwinm r8,r8,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// ori r7,r7,10
	ctx.r7.u64 = ctx.r7.u64 | 10;
	// ori r6,r9,15
	ctx.r6.u64 = ctx.r9.u64 | 15;
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r6.u32);
loc_837D187C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cf078
	ctx.lr = 0x837D1884;
	sub_837CF078(ctx, base);
loc_837D1884:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82597088
	ctx.lr = 0x837D188C;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D1898"))) PPC_WEAK_FUNC(sub_837D1898);
PPC_FUNC_IMPL(__imp__sub_837D1898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837D18A0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,1028
	ctx.r26.s64 = ctx.r3.s64 + 1028;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D18CC;
	sub_82596FE8(ctx, base);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d1930
	if (cr6.eq) goto loc_837D1930;
	// lwz r10,712(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x837d1930
	if (!cr6.eq) goto loc_837D1930;
	// lwz r10,716(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bne cr6,0x837d1930
	if (!cr6.eq) goto loc_837D1930;
	// lfs f0,740(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x837d1930
	if (!cr6.eq) goto loc_837D1930;
	// lbz r10,761(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 761);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x837d1930
	if (!cr6.eq) goto loc_837D1930;
	// lbz r10,760(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 760);
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x837d1930
	if (!cr6.eq) goto loc_837D1930;
	// lbz r10,762(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 762);
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x837d19b4
	if (cr6.eq) goto loc_837D19B4;
loc_837D1930:
	// lwz r9,572(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f31,740(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 740, temp.u32);
	// oris r11,r9,8192
	ctx.r11.u64 = ctx.r9.u64 | 536870912;
	// stw r30,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r30.u32);
	// stb r29,761(r31)
	PPC_STORE_U8(ctx.r31.u32 + 761, ctx.r29.u8);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r28,760(r31)
	PPC_STORE_U8(ctx.r31.u32 + 760, ctx.r28.u8);
	// stw r8,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r8.u32);
	// rlwinm r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// stb r27,762(r31)
	PPC_STORE_U8(ctx.r31.u32 + 762, ctx.r27.u8);
	// stw r10,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// bne cr6,0x837d19ac
	if (!cr6.eq) goto loc_837D19AC;
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837d19ac
	if (!cr6.eq) goto loc_837D19AC;
	// lwz r9,552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// beq cr6,0x837d19ac
	if (cr6.eq) goto loc_837D19AC;
	// lwz r9,580(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r8,r10,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// oris r7,r11,8192
	ctx.r7.u64 = ctx.r11.u64 | 536870912;
	// rlwinm r8,r8,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// ori r7,r7,10
	ctx.r7.u64 = ctx.r7.u64 | 10;
	// ori r6,r9,15
	ctx.r6.u64 = ctx.r9.u64 | 15;
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r6.u32);
loc_837D19AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cf078
	ctx.lr = 0x837D19B4;
	sub_837CF078(ctx, base);
loc_837D19B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82597088
	ctx.lr = 0x837D19BC;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D19C8"))) PPC_WEAK_FUNC(sub_837D19C8);
PPC_FUNC_IMPL(__imp__sub_837D19C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837D19D0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r3,1028
	ctx.r25.s64 = ctx.r3.s64 + 1028;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D1A00;
	sub_82596FE8(ctx, base);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d1a70
	if (cr6.eq) goto loc_837D1A70;
	// lwz r10,712(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x837d1a70
	if (!cr6.eq) goto loc_837D1A70;
	// lwz r10,716(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bne cr6,0x837d1a70
	if (!cr6.eq) goto loc_837D1A70;
	// lwz r10,720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// bne cr6,0x837d1a70
	if (!cr6.eq) goto loc_837D1A70;
	// lfs f0,740(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x837d1a70
	if (!cr6.eq) goto loc_837D1A70;
	// lbz r10,761(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 761);
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x837d1a70
	if (!cr6.eq) goto loc_837D1A70;
	// lbz r10,760(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 760);
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x837d1a70
	if (!cr6.eq) goto loc_837D1A70;
	// lbz r10,762(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 762);
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x837d1af8
	if (cr6.eq) goto loc_837D1AF8;
loc_837D1A70:
	// lwz r9,572(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// li r8,2
	ctx.r8.s64 = 2;
	// stfs f31,740(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 740, temp.u32);
	// oris r11,r9,8192
	ctx.r11.u64 = ctx.r9.u64 | 536870912;
	// stw r30,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r30.u32);
	// stw r29,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r29.u32);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r28,761(r31)
	PPC_STORE_U8(ctx.r31.u32 + 761, ctx.r28.u8);
	// stw r8,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r8.u32);
	// rlwinm r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// stb r27,760(r31)
	PPC_STORE_U8(ctx.r31.u32 + 760, ctx.r27.u8);
	// stb r26,762(r31)
	PPC_STORE_U8(ctx.r31.u32 + 762, ctx.r26.u8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r10,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r10.u32);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// bne cr6,0x837d1af0
	if (!cr6.eq) goto loc_837D1AF0;
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837d1af0
	if (!cr6.eq) goto loc_837D1AF0;
	// lwz r9,552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// beq cr6,0x837d1af0
	if (cr6.eq) goto loc_837D1AF0;
	// lwz r9,580(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r8,r10,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// oris r7,r11,8192
	ctx.r7.u64 = ctx.r11.u64 | 536870912;
	// rlwinm r8,r8,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// ori r7,r7,10
	ctx.r7.u64 = ctx.r7.u64 | 10;
	// ori r6,r9,15
	ctx.r6.u64 = ctx.r9.u64 | 15;
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r6.u32);
loc_837D1AF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cf078
	ctx.lr = 0x837D1AF8;
	sub_837CF078(ctx, base);
loc_837D1AF8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82597088
	ctx.lr = 0x837D1B00;
	sub_82597088(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D1B0C"))) PPC_WEAK_FUNC(sub_837D1B0C);
PPC_FUNC_IMPL(__imp__sub_837D1B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D1B10"))) PPC_WEAK_FUNC(sub_837D1B10);
PPC_FUNC_IMPL(__imp__sub_837D1B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D1B18;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D1B48;
	sub_82596FE8(ctx, base);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d1b88
	if (cr6.eq) goto loc_837D1B88;
	// lwz r10,756(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bne cr6,0x837d1b88
	if (!cr6.eq) goto loc_837D1B88;
	// lfs f0,744(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x837d1b88
	if (!cr6.eq) goto loc_837D1B88;
	// lfs f0,748(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x837d1b88
	if (!cr6.eq) goto loc_837D1B88;
	// lfs f0,752(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x837d1bb8
	if (cr6.eq) goto loc_837D1BB8;
loc_837D1B88:
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// rlwinm r9,r11,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stfs f31,744(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// stw r29,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r29.u32);
	// oris r8,r10,8192
	ctx.r8.u64 = ctx.r10.u64 | 536870912;
	// stfs f30,748(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 748, temp.u32);
	// stfs f29,752(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 752, temp.u32);
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// ori r8,r8,4
	ctx.r8.u64 = ctx.r8.u64 | 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r8.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D1BB8;
	sub_837CF078(ctx, base);
loc_837D1BB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D1BC0;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D1BD4"))) PPC_WEAK_FUNC(sub_837D1BD4);
PPC_FUNC_IMPL(__imp__sub_837D1BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D1BD8"))) PPC_WEAK_FUNC(sub_837D1BD8);
PPC_FUNC_IMPL(__imp__sub_837D1BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D1BE0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D1C04;
	sub_82596FE8(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// stfs f31,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lwz r8,580(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// rlwinm r6,r9,0,29,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r29,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r29.u32);
	// ori r7,r7,8
	ctx.r7.u64 = ctx.r7.u64 | 8;
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// ori r5,r8,256
	ctx.r5.u64 = ctx.r8.u64 | 256;
	// stw r28,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r28.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// stw r5,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r5.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D1C48;
	sub_837CF078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D1C50;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D1C5C"))) PPC_WEAK_FUNC(sub_837D1C5C);
PPC_FUNC_IMPL(__imp__sub_837D1C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D1C60"))) PPC_WEAK_FUNC(sub_837D1C60);
PPC_FUNC_IMPL(__imp__sub_837D1C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D1C68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D1C80;
	sub_82596FE8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,118
	ctx.r5.s64 = 118;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a76558
	ctx.lr = 0x837D1C98;
	sub_82A76558(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d1ccc
	if (cr6.eq) goto loc_837D1CCC;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,118
	ctx.r5.s64 = 118;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x82a76558
	ctx.lr = 0x837D1CBC;
	sub_82A76558(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x837d1d0c
	if (cr6.eq) goto loc_837D1D0C;
loc_837D1CCC:
	// li r5,118
	ctx.r5.s64 = 118;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x825a10c0
	ctx.lr = 0x837D1CDC;
	sub_825A10C0(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,2
	ctx.r8.u64 = ctx.r11.u64 | 2;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D1D0C;
	sub_837CF078(ctx, base);
loc_837D1D0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D1D14;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D1D1C"))) PPC_WEAK_FUNC(sub_837D1D1C);
PPC_FUNC_IMPL(__imp__sub_837D1D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D1D20"))) PPC_WEAK_FUNC(sub_837D1D20);
PPC_FUNC_IMPL(__imp__sub_837D1D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837D1D28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,1028
	ctx.r26.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D1D44;
	sub_82596FE8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x837D1D5C;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d1e00
	if (cr6.eq) goto loc_837D1E00;
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d1db4
	if (cr6.eq) goto loc_837D1DB4;
	// addi r29,r31,816
	ctx.r29.s64 = ctx.r31.s64 + 816;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83744d00
	ctx.lr = 0x837D1D88;
	sub_83744D00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d1da4
	if (cr6.eq) goto loc_837D1DA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83744d18
	ctx.lr = 0x837D1DA0;
	sub_83744D18(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_837D1DA4:
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// beq cr6,0x837d1dc4
	if (cr6.eq) goto loc_837D1DC4;
	// b 0x837d1dbc
	goto loc_837D1DBC;
loc_837D1DB4:
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x83744d18
	ctx.lr = 0x837D1DBC;
	sub_83744D18(ctx, base);
loc_837D1DBC:
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r27,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r27.u32);
loc_837D1DC4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d1e00
	if (cr6.eq) goto loc_837D1E00;
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D1E00;
	sub_837CF078(ctx, base);
loc_837D1E00:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82597088
	ctx.lr = 0x837D1E08;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D1E10"))) PPC_WEAK_FUNC(sub_837D1E10);
PPC_FUNC_IMPL(__imp__sub_837D1E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D1E18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,1028
	ctx.r29.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D1E30;
	sub_82596FE8(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d1e58
	if (cr6.eq) goto loc_837D1E58;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x83746328
	ctx.lr = 0x837D1E4C;
	sub_83746328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d1e94
	if (cr6.eq) goto loc_837D1E94;
loc_837D1E58:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x83746340
	ctx.lr = 0x837D1E64;
	sub_83746340(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,4
	ctx.r8.u64 = ctx.r11.u64 | 4;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D1E94;
	sub_837CF078(ctx, base);
loc_837D1E94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837D1E9C;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D1EA4"))) PPC_WEAK_FUNC(sub_837D1EA4);
PPC_FUNC_IMPL(__imp__sub_837D1EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D1EA8"))) PPC_WEAK_FUNC(sub_837D1EA8);
PPC_FUNC_IMPL(__imp__sub_837D1EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837D1EB0;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,1028
	ctx.r27.s64 = ctx.r3.s64 + 1028;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D1ED8;
	sub_82596FE8(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d1f3c
	if (cr6.eq) goto loc_837D1F3C;
	// addi r28,r31,816
	ctx.r28.s64 = ctx.r31.s64 + 816;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8373fc98
	ctx.lr = 0x837D1EFC;
	sub_8373FC98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d1f18
	if (cr6.eq) goto loc_837D1F18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8373fd20
	ctx.lr = 0x837D1F14;
	sub_8373FD20(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_837D1F18:
	// lfs f0,696(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x837d1f2c
	if (cr6.eq) goto loc_837D1F2C;
	// stfs f31,696(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// li r29,1
	ctx.r29.s64 = 1;
loc_837D1F2C:
	// lfs f0,700(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x837d1f50
	if (cr6.eq) goto loc_837D1F50;
	// b 0x837d1f48
	goto loc_837D1F48;
loc_837D1F3C:
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x8373fd20
	ctx.lr = 0x837D1F44;
	sub_8373FD20(ctx, base);
	// stfs f31,696(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
loc_837D1F48:
	// stfs f30,700(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 700, temp.u32);
	// li r29,1
	ctx.r29.s64 = 1;
loc_837D1F50:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d1f8c
	if (cr6.eq) goto loc_837D1F8C;
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,8
	ctx.r8.u64 = ctx.r11.u64 | 8;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D1F8C;
	sub_837CF078(ctx, base);
loc_837D1F8C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x837D1F94;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D1FA4"))) PPC_WEAK_FUNC(sub_837D1FA4);
PPC_FUNC_IMPL(__imp__sub_837D1FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D1FA8"))) PPC_WEAK_FUNC(sub_837D1FA8);
PPC_FUNC_IMPL(__imp__sub_837D1FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D1FB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,1028
	ctx.r29.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D1FC8;
	sub_82596FE8(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d1ff0
	if (cr6.eq) goto loc_837D1FF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x8373fdf8
	ctx.lr = 0x837D1FE4;
	sub_8373FDF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d202c
	if (cr6.eq) goto loc_837D202C;
loc_837D1FF0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x8373fe10
	ctx.lr = 0x837D1FFC;
	sub_8373FE10(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 | 32;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D202C;
	sub_837CF078(ctx, base);
loc_837D202C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837D2034;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D203C"))) PPC_WEAK_FUNC(sub_837D203C);
PPC_FUNC_IMPL(__imp__sub_837D203C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D2040"))) PPC_WEAK_FUNC(sub_837D2040);
PPC_FUNC_IMPL(__imp__sub_837D2040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837D2048;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,1028
	ctx.r26.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D2068;
	sub_82596FE8(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d20d8
	if (!cr6.eq) goto loc_837D20D8;
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d20d8
	if (cr6.eq) goto loc_837D20D8;
	// addi r29,r31,816
	ctx.r29.s64 = ctx.r31.s64 + 816;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8373fd80
	ctx.lr = 0x837D2098;
	sub_8373FD80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d20b4
	if (cr6.eq) goto loc_837D20B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8373fd98
	ctx.lr = 0x837D20B0;
	sub_8373FD98(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_837D20B4:
	// addi r30,r31,888
	ctx.r30.s64 = ctx.r31.s64 + 888;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b4f928
	ctx.lr = 0x837D20C4;
	sub_83B4F928(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d20f4
	if (cr6.eq) goto loc_837D20F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x837d20e8
	goto loc_837D20E8;
loc_837D20D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x8373fd98
	ctx.lr = 0x837D20E4;
	sub_8373FD98(ctx, base);
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
loc_837D20E8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83b4f940
	ctx.lr = 0x837D20F0;
	sub_83B4F940(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_837D20F4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d2130
	if (cr6.eq) goto loc_837D2130;
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,64
	ctx.r8.u64 = ctx.r11.u64 | 64;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D2130;
	sub_837CF078(ctx, base);
loc_837D2130:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82597088
	ctx.lr = 0x837D2138;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D2140"))) PPC_WEAK_FUNC(sub_837D2140);
PPC_FUNC_IMPL(__imp__sub_837D2140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D2148;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D2160;
	sub_82596FE8(ctx, base);
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8373fe70
	ctx.lr = 0x837D216C;
	sub_8373FE70(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,128
	ctx.r8.u64 = ctx.r11.u64 | 128;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D219C;
	sub_837CF078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D21A4;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D21AC"))) PPC_WEAK_FUNC(sub_837D21AC);
PPC_FUNC_IMPL(__imp__sub_837D21AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D21B0"))) PPC_WEAK_FUNC(sub_837D21B0);
PPC_FUNC_IMPL(__imp__sub_837D21B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837D21B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D21D4;
	sub_82596FE8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,29
	ctx.r5.s64 = 29;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a76558
	ctx.lr = 0x837D21EC;
	sub_82A76558(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d222c
	if (!cr6.eq) goto loc_837D222C;
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d222c
	if (cr6.eq) goto loc_837D222C;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,29
	ctx.r5.s64 = 29;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x82a76558
	ctx.lr = 0x837D221C;
	sub_82A76558(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x837d226c
	if (cr6.eq) goto loc_837D226C;
loc_837D222C:
	// li r5,29
	ctx.r5.s64 = 29;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x825a10c0
	ctx.lr = 0x837D223C;
	sub_825A10C0(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,256
	ctx.r8.u64 = ctx.r11.u64 | 256;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D226C;
	sub_837CF078(ctx, base);
loc_837D226C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D2274;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D227C"))) PPC_WEAK_FUNC(sub_837D227C);
PPC_FUNC_IMPL(__imp__sub_837D227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D2280"))) PPC_WEAK_FUNC(sub_837D2280);
PPC_FUNC_IMPL(__imp__sub_837D2280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837D2288;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D22A4;
	sub_82596FE8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,31
	ctx.r5.s64 = 31;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a76558
	ctx.lr = 0x837D22BC;
	sub_82A76558(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d22fc
	if (!cr6.eq) goto loc_837D22FC;
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d22fc
	if (cr6.eq) goto loc_837D22FC;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x82a76558
	ctx.lr = 0x837D22EC;
	sub_82A76558(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x837d233c
	if (cr6.eq) goto loc_837D233C;
loc_837D22FC:
	// li r5,31
	ctx.r5.s64 = 31;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x825a10c0
	ctx.lr = 0x837D230C;
	sub_825A10C0(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,512
	ctx.r8.u64 = ctx.r11.u64 | 512;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D233C;
	sub_837CF078(ctx, base);
loc_837D233C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D2344;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D234C"))) PPC_WEAK_FUNC(sub_837D234C);
PPC_FUNC_IMPL(__imp__sub_837D234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D2350"))) PPC_WEAK_FUNC(sub_837D2350);
PPC_FUNC_IMPL(__imp__sub_837D2350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D2358;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,1028
	ctx.r29.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D2370;
	sub_82596FE8(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d2398
	if (cr6.eq) goto loc_837D2398;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x83b4f8b0
	ctx.lr = 0x837D238C;
	sub_83B4F8B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d23d4
	if (cr6.eq) goto loc_837D23D4;
loc_837D2398:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x83b4f8c8
	ctx.lr = 0x837D23A4;
	sub_83B4F8C8(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,2048
	ctx.r8.u64 = ctx.r11.u64 | 2048;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D23D4;
	sub_837CF078(ctx, base);
loc_837D23D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837D23DC;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D23E4"))) PPC_WEAK_FUNC(sub_837D23E4);
PPC_FUNC_IMPL(__imp__sub_837D23E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D23E8"))) PPC_WEAK_FUNC(sub_837D23E8);
PPC_FUNC_IMPL(__imp__sub_837D23E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837D23F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,1028
	ctx.r27.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D240C;
	sub_82596FE8(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d2458
	if (cr6.eq) goto loc_837D2458;
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x837d2434
	if (cr6.eq) goto loc_837D2434;
	// stw r30,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
loc_837D2434:
	// addi r30,r31,888
	ctx.r30.s64 = ctx.r31.s64 + 888;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b4f6a0
	ctx.lr = 0x837D2444;
	sub_83B4F6A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d246c
	if (cr6.eq) goto loc_837D246C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x837d2460
	goto loc_837D2460;
loc_837D2458:
	// stw r30,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r30.u32);
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
loc_837D2460:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83b4f6b8
	ctx.lr = 0x837D2468;
	sub_83B4F6B8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_837D246C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d24a8
	if (cr6.eq) goto loc_837D24A8;
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,4096
	ctx.r8.u64 = ctx.r11.u64 | 4096;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D24A8;
	sub_837CF078(ctx, base);
loc_837D24A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x837D24B0;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D24B8"))) PPC_WEAK_FUNC(sub_837D24B8);
PPC_FUNC_IMPL(__imp__sub_837D24B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D24C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D24D8;
	sub_82596FE8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,87
	ctx.r5.s64 = 87;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D24F0;
	sub_82A713F0(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d2524
	if (cr6.eq) goto loc_837D2524;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,87
	ctx.r5.s64 = 87;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x82a713f0
	ctx.lr = 0x837D2514;
	sub_82A713F0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x837d2564
	if (cr6.eq) goto loc_837D2564;
loc_837D2524:
	// li r5,87
	ctx.r5.s64 = 87;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x82aaf090
	ctx.lr = 0x837D2534;
	sub_82AAF090(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,8192
	ctx.r8.u64 = ctx.r11.u64 | 8192;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D2564;
	sub_837CF078(ctx, base);
loc_837D2564:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D256C;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D2574"))) PPC_WEAK_FUNC(sub_837D2574);
PPC_FUNC_IMPL(__imp__sub_837D2574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D2578"))) PPC_WEAK_FUNC(sub_837D2578);
PPC_FUNC_IMPL(__imp__sub_837D2578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D2580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,1028
	ctx.r29.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D2598;
	sub_82596FE8(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d25c0
	if (cr6.eq) goto loc_837D25C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x83b4f838
	ctx.lr = 0x837D25B4;
	sub_83B4F838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d25fc
	if (cr6.eq) goto loc_837D25FC;
loc_837D25C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x83b4f850
	ctx.lr = 0x837D25CC;
	sub_83B4F850(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,16384
	ctx.r8.u64 = ctx.r11.u64 | 16384;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D25FC;
	sub_837CF078(ctx, base);
loc_837D25FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837D2604;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D260C"))) PPC_WEAK_FUNC(sub_837D260C);
PPC_FUNC_IMPL(__imp__sub_837D260C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D2610"))) PPC_WEAK_FUNC(sub_837D2610);
PPC_FUNC_IMPL(__imp__sub_837D2610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D2618;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D2630;
	sub_82596FE8(ctx, base);
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b4f718
	ctx.lr = 0x837D263C;
	sub_83B4F718(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,32768
	ctx.r8.u64 = ctx.r11.u64 | 32768;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D266C;
	sub_837CF078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D2674;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D267C"))) PPC_WEAK_FUNC(sub_837D267C);
PPC_FUNC_IMPL(__imp__sub_837D267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D2680"))) PPC_WEAK_FUNC(sub_837D2680);
PPC_FUNC_IMPL(__imp__sub_837D2680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D2688;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D26A0;
	sub_82596FE8(ctx, base);
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b4f778
	ctx.lr = 0x837D26AC;
	sub_83B4F778(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// oris r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 65536;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D26DC;
	sub_837CF078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D26E4;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

