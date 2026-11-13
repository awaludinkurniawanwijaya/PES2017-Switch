#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E2B580"))) PPC_WEAK_FUNC(sub_82E2B580);
PPC_FUNC_IMPL(__imp__sub_82E2B580) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-13072
	ctx.r10.s64 = ctx.r11.s64 + -13072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82E2B5AC;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2b5c4
	if (cr6.eq) goto loc_82E2B5C4;
	// bl 0x82416268
	ctx.lr = 0x82E2B5C0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2B5C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2B5DC"))) PPC_WEAK_FUNC(sub_82E2B5DC);
PPC_FUNC_IMPL(__imp__sub_82E2B5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2B5E0"))) PPC_WEAK_FUNC(sub_82E2B5E0);
PPC_FUNC_IMPL(__imp__sub_82E2B5E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2b5f0
	if (cr6.lt) goto loc_82E2B5F0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E2B5F0:
	// b 0x82e2b4f8
	sub_82E2B4F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2B5F4"))) PPC_WEAK_FUNC(sub_82E2B5F4);
PPC_FUNC_IMPL(__imp__sub_82E2B5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2B5F8"))) PPC_WEAK_FUNC(sub_82E2B5F8);
PPC_FUNC_IMPL(__imp__sub_82E2B5F8) {
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
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r9,-13172
	ctx.r4.s64 = ctx.r9.s64 + -13172;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82E2B634;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2B640;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82e2b660
	if (cr6.lt) goto loc_82E2B660;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2B660;
	sub_825952B8(ctx, base);
loc_82E2B660:
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

__attribute__((alias("__imp__sub_82E2B678"))) PPC_WEAK_FUNC(sub_82E2B678);
PPC_FUNC_IMPL(__imp__sub_82E2B678) {
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
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r9,-13164
	ctx.r4.s64 = ctx.r9.s64 + -13164;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82E2B6B4;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2B6C0;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82e2b6e0
	if (cr6.lt) goto loc_82E2B6E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2B6E0;
	sub_825952B8(ctx, base);
loc_82E2B6E0:
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

__attribute__((alias("__imp__sub_82E2B6F8"))) PPC_WEAK_FUNC(sub_82E2B6F8);
PPC_FUNC_IMPL(__imp__sub_82E2B6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2B700;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e8bae0
	ctx.lr = 0x82E2B708;
	sub_82E8BAE0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-13188
	ctx.r29.s64 = ctx.r11.s64 + -13188;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// addi r3,r3,344
	ctx.r3.s64 = ctx.r3.s64 + 344;
	// bl 0x824208c8
	ctx.lr = 0x82E2B724;
	sub_824208C8(ctx, base);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82E2B734;
	sub_824208C8(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82E2B738;
	sub_82D860F0(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// bl 0x82d86078
	ctx.lr = 0x82E2B740;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2b840
	if (cr6.eq) goto loc_82E2B840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x824208c8
	ctx.lr = 0x82E2B75C;
	sub_824208C8(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82E2B764;
	sub_831F81F8(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82E2B774;
	sub_831F81F8(ctx, base);
	// bl 0x82ddf128
	ctx.lr = 0x82E2B778;
	sub_82DDF128(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2B780:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2b780
	if (!cr6.eq) goto loc_82E2B780;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2B7A4;
	sub_824208C8(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82E2B7AC;
	sub_831F81F8(ctx, base);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82E2B7D0;
	sub_831F81F8(ctx, base);
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82E2B7E4;
	sub_8259CB28(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82e2b7f8
	if (!cr6.lt) goto loc_82E2B7F8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82E2B7F8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E2B7FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2b7fc
	if (!cr6.eq) goto loc_82E2B7FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2B820;
	sub_824208C8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e2b840
	if (cr6.lt) goto loc_82E2B840;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2B840;
	sub_825952B8(ctx, base);
loc_82E2B840:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2B84C"))) PPC_WEAK_FUNC(sub_82E2B84C);
PPC_FUNC_IMPL(__imp__sub_82E2B84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2B850"))) PPC_WEAK_FUNC(sub_82E2B850);
PPC_FUNC_IMPL(__imp__sub_82E2B850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2B858;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2B878;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2b88c
	if (cr6.eq) goto loc_82E2B88C;
	// bl 0x83689f10
	ctx.lr = 0x82E2B884;
	sub_83689F10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e2b890
	goto loc_82E2B890;
loc_82E2B88C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E2B890:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,448
	ctx.r4.s64 = 448;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E2B8A4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2b8b8
	if (cr6.eq) goto loc_82E2B8B8;
	// bl 0x8368a0b8
	ctx.lr = 0x82E2B8B0;
	sub_8368A0B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82e2b8bc
	goto loc_82E2B8BC;
loc_82E2B8B8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E2B8BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2B8D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2B8DC"))) PPC_WEAK_FUNC(sub_82E2B8DC);
PPC_FUNC_IMPL(__imp__sub_82E2B8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2B8E0"))) PPC_WEAK_FUNC(sub_82E2B8E0);
PPC_FUNC_IMPL(__imp__sub_82E2B8E0) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2B910;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2b948
	if (cr6.eq) goto loc_82E2B948;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E2B928;
	sub_82E8BA80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-12768
	ctx.r10.s64 = ctx.r11.s64 + -12768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82e87940
	ctx.lr = 0x82E2B940;
	sub_82E87940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e2b94c
	goto loc_82E2B94C;
loc_82E2B948:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E2B94C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2B964"))) PPC_WEAK_FUNC(sub_82E2B964);
PPC_FUNC_IMPL(__imp__sub_82E2B964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2B968"))) PPC_WEAK_FUNC(sub_82E2B968);
PPC_FUNC_IMPL(__imp__sub_82E2B968) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-12768
	ctx.r10.s64 = ctx.r11.s64 + -12768;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82E2B994;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2b9ac
	if (cr6.eq) goto loc_82E2B9AC;
	// bl 0x82416268
	ctx.lr = 0x82E2B9A8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2B9AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2B9C4"))) PPC_WEAK_FUNC(sub_82E2B9C4);
PPC_FUNC_IMPL(__imp__sub_82E2B9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2B9C8"))) PPC_WEAK_FUNC(sub_82E2B9C8);
PPC_FUNC_IMPL(__imp__sub_82E2B9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2b9d8
	if (cr6.lt) goto loc_82E2B9D8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E2B9D8:
	// b 0x82e2b8e0
	sub_82E2B8E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2B9DC"))) PPC_WEAK_FUNC(sub_82E2B9DC);
PPC_FUNC_IMPL(__imp__sub_82E2B9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2B9E0"))) PPC_WEAK_FUNC(sub_82E2B9E0);
PPC_FUNC_IMPL(__imp__sub_82E2B9E0) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82E2B9F8;
	sub_82E8BAE0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-12884
	ctx.r30.s64 = ctx.r11.s64 + -12884;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// addi r3,r3,344
	ctx.r3.s64 = ctx.r3.s64 + 344;
	// bl 0x824208c8
	ctx.lr = 0x82E2BA14;
	sub_824208C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82E2BA24;
	sub_824208C8(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82E2BA28;
	sub_82D860F0(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82E2BA48"))) PPC_WEAK_FUNC(sub_82E2BA48);
PPC_FUNC_IMPL(__imp__sub_82E2BA48) {
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
	// bl 0x82d89740
	ctx.lr = 0x82E2BA60;
	sub_82D89740(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r4,r9,-12860
	ctx.r4.s64 = ctx.r9.s64 + -12860;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82E2BA88;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2BA94;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82e2bab4
	if (cr6.lt) goto loc_82E2BAB4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2BAB4;
	sub_825952B8(ctx, base);
loc_82E2BAB4:
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

__attribute__((alias("__imp__sub_82E2BACC"))) PPC_WEAK_FUNC(sub_82E2BACC);
PPC_FUNC_IMPL(__imp__sub_82E2BACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2BAD0"))) PPC_WEAK_FUNC(sub_82E2BAD0);
PPC_FUNC_IMPL(__imp__sub_82E2BAD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E2BAD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82E2BB0C;
	sub_8259CB28(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// stw r9,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r9.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82E2BB28;
	sub_8259CB28(ctx, base);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82e2bb48
	if (cr6.lt) goto loc_82E2BB48;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2BB48;
	sub_825952B8(ctx, base);
loc_82E2BB48:
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
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2BB64"))) PPC_WEAK_FUNC(sub_82E2BB64);
PPC_FUNC_IMPL(__imp__sub_82E2BB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2BB68"))) PPC_WEAK_FUNC(sub_82E2BB68);
PPC_FUNC_IMPL(__imp__sub_82E2BB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E2BB70;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82E2BB7C;
	sub_82E8BAE8(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r11,-12868
	ctx.r30.s64 = ctx.r11.s64 + -12868;
	// beq cr6,0x82e2bc44
	if (cr6.eq) goto loc_82E2BC44;
	// bl 0x82d86078
	ctx.lr = 0x82E2BB94;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2bc94
	if (cr6.eq) goto loc_82E2BC94;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82dbb5c0
	ctx.lr = 0x82E2BBA8;
	sub_82DBB5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2bc94
	if (cr6.eq) goto loc_82E2BC94;
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r11,r31,352
	ctx.r11.s64 = ctx.r31.s64 + 352;
	// lwz r9,372(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt cr6,0x82e2bbd0
	if (cr6.lt) goto loc_82E2BBD0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E2BBD0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82E2BBDC;
	sub_837B0C10(ctx, base);
	// lwz r10,380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r9,404(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// addi r11,r31,384
	ctx.r11.s64 = ctx.r31.s64 + 384;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt cr6,0x82e2bbfc
	if (cr6.lt) goto loc_82E2BBFC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82e2bc00
	goto loc_82E2BC00;
loc_82E2BBFC:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82E2BC00:
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259d6c0
	ctx.lr = 0x82E2BC0C;
	sub_8259D6C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r31,20(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x837b0c10
	ctx.lr = 0x82E2BC1C;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f81f8
	ctx.lr = 0x82E2BC28;
	sub_831F81F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x82e2bad0
	ctx.lr = 0x82E2BC3C;
	sub_82E2BAD0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82E2BC44;
	sub_8387E8E0(ctx, base);
loc_82E2BC44:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82E2BC68;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2BC74;
	sub_82E88020(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82e2bc94
	if (cr6.lt) goto loc_82E2BC94;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2BC94;
	sub_825952B8(ctx, base);
loc_82E2BC94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2BCA0"))) PPC_WEAK_FUNC(sub_82E2BCA0);
PPC_FUNC_IMPL(__imp__sub_82E2BCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2BCA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,528
	ctx.r4.s64 = 528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2BCC8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2bcdc
	if (cr6.eq) goto loc_82E2BCDC;
	// bl 0x836a5878
	ctx.lr = 0x82E2BCD4;
	sub_836A5878(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e2bce0
	goto loc_82E2BCE0;
loc_82E2BCDC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E2BCE0:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,352
	ctx.r4.s64 = 352;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E2BCF4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2bd08
	if (cr6.eq) goto loc_82E2BD08;
	// bl 0x836a5a30
	ctx.lr = 0x82E2BD00;
	sub_836A5A30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82e2bd0c
	goto loc_82E2BD0C;
loc_82E2BD08:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E2BD0C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2BD24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2BD2C"))) PPC_WEAK_FUNC(sub_82E2BD2C);
PPC_FUNC_IMPL(__imp__sub_82E2BD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2BD30"))) PPC_WEAK_FUNC(sub_82E2BD30);
PPC_FUNC_IMPL(__imp__sub_82E2BD30) {
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
	// bl 0x82d86078
	ctx.lr = 0x82E2BD4C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2bdb8
	if (cr6.eq) goto loc_82E2BDB8;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833f24b0
	ctx.lr = 0x82E2BD60;
	sub_833F24B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2bdb8
	if (cr6.eq) goto loc_82E2BDB8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8332f198
	ctx.lr = 0x82E2BD74;
	sub_8332F198(ctx, base);
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lbz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// stb r6,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r6.u8);
	// lbz r5,17(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// stb r5,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r5.u8);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_82E2BDB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2BDD0"))) PPC_WEAK_FUNC(sub_82E2BDD0);
PPC_FUNC_IMPL(__imp__sub_82E2BDD0) {
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
	// bl 0x82d86078
	ctx.lr = 0x82E2BDEC;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2be58
	if (cr6.eq) goto loc_82E2BE58;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x838257e0
	ctx.lr = 0x82E2BE00;
	sub_838257E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2be58
	if (cr6.eq) goto loc_82E2BE58;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82E2BE14;
	sub_8307E040(ctx, base);
	// addi r11,r3,132
	ctx.r11.s64 = ctx.r3.s64 + 132;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lbz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// stb r6,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r6.u8);
	// lbz r5,17(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// stb r5,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r5.u8);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_82E2BE58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2BE70"))) PPC_WEAK_FUNC(sub_82E2BE70);
PPC_FUNC_IMPL(__imp__sub_82E2BE70) {
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
	// bl 0x82d86078
	ctx.lr = 0x82E2BE8C;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2bef8
	if (cr6.eq) goto loc_82E2BEF8;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82dbb530
	ctx.lr = 0x82E2BEA0;
	sub_82DBB530(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2bef8
	if (cr6.eq) goto loc_82E2BEF8;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x835d3178
	ctx.lr = 0x82E2BEB4;
	sub_835D3178(ctx, base);
	// addi r11,r3,92
	ctx.r11.s64 = ctx.r3.s64 + 92;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lbz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// stb r6,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r6.u8);
	// lbz r5,17(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// stb r5,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r5.u8);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_82E2BEF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2BF10"))) PPC_WEAK_FUNC(sub_82E2BF10);
PPC_FUNC_IMPL(__imp__sub_82E2BF10) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82E2BF28;
	sub_82D86078(ctx, base);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82E2BF30;
	sub_831F81F8(ctx, base);
	// addi r11,r3,144
	ctx.r11.s64 = ctx.r3.s64 + 144;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lbz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// stb r6,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r6.u8);
	// lbz r5,17(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// stb r5,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r5.u8);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82E2BF88"))) PPC_WEAK_FUNC(sub_82E2BF88);
PPC_FUNC_IMPL(__imp__sub_82E2BF88) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-12200
	ctx.r10.s64 = ctx.r11.s64 + -12200;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82E2BFB4;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2bfcc
	if (cr6.eq) goto loc_82E2BFCC;
	// bl 0x82416268
	ctx.lr = 0x82E2BFC8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2BFCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2BFE4"))) PPC_WEAK_FUNC(sub_82E2BFE4);
PPC_FUNC_IMPL(__imp__sub_82E2BFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2BFE8"))) PPC_WEAK_FUNC(sub_82E2BFE8);
PPC_FUNC_IMPL(__imp__sub_82E2BFE8) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2C018;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2c05c
	if (cr6.eq) goto loc_82E2C05C;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E2C030;
	sub_82E8BA80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-12200
	ctx.r10.s64 = ctx.r11.s64 + -12200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82e87940
	ctx.lr = 0x82E2C048;
	sub_82E87940(ctx, base);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-12088
	ctx.r8.s64 = ctx.r9.s64 + -12088;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// b 0x82e2c060
	goto loc_82E2C060;
loc_82E2C05C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E2C060:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2C078"))) PPC_WEAK_FUNC(sub_82E2C078);
PPC_FUNC_IMPL(__imp__sub_82E2C078) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2C0A8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2c0ec
	if (cr6.eq) goto loc_82E2C0EC;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E2C0C0;
	sub_82E8BA80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-12200
	ctx.r10.s64 = ctx.r11.s64 + -12200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82e87940
	ctx.lr = 0x82E2C0D8;
	sub_82E87940(ctx, base);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-11976
	ctx.r8.s64 = ctx.r9.s64 + -11976;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// b 0x82e2c0f0
	goto loc_82E2C0F0;
loc_82E2C0EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E2C0F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2C108"))) PPC_WEAK_FUNC(sub_82E2C108);
PPC_FUNC_IMPL(__imp__sub_82E2C108) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2C138;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2c17c
	if (cr6.eq) goto loc_82E2C17C;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E2C150;
	sub_82E8BA80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-12200
	ctx.r10.s64 = ctx.r11.s64 + -12200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82e87940
	ctx.lr = 0x82E2C168;
	sub_82E87940(ctx, base);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-11864
	ctx.r8.s64 = ctx.r9.s64 + -11864;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// b 0x82e2c180
	goto loc_82E2C180;
loc_82E2C17C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E2C180:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2C198"))) PPC_WEAK_FUNC(sub_82E2C198);
PPC_FUNC_IMPL(__imp__sub_82E2C198) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2C1C8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2c20c
	if (cr6.eq) goto loc_82E2C20C;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E2C1E0;
	sub_82E8BA80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-12200
	ctx.r10.s64 = ctx.r11.s64 + -12200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82e87940
	ctx.lr = 0x82E2C1F8;
	sub_82E87940(ctx, base);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-11752
	ctx.r8.s64 = ctx.r9.s64 + -11752;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// b 0x82e2c210
	goto loc_82E2C210;
loc_82E2C20C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E2C210:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2C228"))) PPC_WEAK_FUNC(sub_82E2C228);
PPC_FUNC_IMPL(__imp__sub_82E2C228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2c238
	if (cr6.lt) goto loc_82E2C238;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E2C238:
	// b 0x82e2bfe8
	sub_82E2BFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2C23C"))) PPC_WEAK_FUNC(sub_82E2C23C);
PPC_FUNC_IMPL(__imp__sub_82E2C23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2C240"))) PPC_WEAK_FUNC(sub_82E2C240);
PPC_FUNC_IMPL(__imp__sub_82E2C240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2c250
	if (cr6.lt) goto loc_82E2C250;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E2C250:
	// b 0x82e2c078
	sub_82E2C078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2C254"))) PPC_WEAK_FUNC(sub_82E2C254);
PPC_FUNC_IMPL(__imp__sub_82E2C254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2C258"))) PPC_WEAK_FUNC(sub_82E2C258);
PPC_FUNC_IMPL(__imp__sub_82E2C258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2c268
	if (cr6.lt) goto loc_82E2C268;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E2C268:
	// b 0x82e2c108
	sub_82E2C108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2C26C"))) PPC_WEAK_FUNC(sub_82E2C26C);
PPC_FUNC_IMPL(__imp__sub_82E2C26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2C270"))) PPC_WEAK_FUNC(sub_82E2C270);
PPC_FUNC_IMPL(__imp__sub_82E2C270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2c280
	if (cr6.lt) goto loc_82E2C280;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E2C280:
	// b 0x82e2c198
	sub_82E2C198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2C284"))) PPC_WEAK_FUNC(sub_82E2C284);
PPC_FUNC_IMPL(__imp__sub_82E2C284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2C288"))) PPC_WEAK_FUNC(sub_82E2C288);
PPC_FUNC_IMPL(__imp__sub_82E2C288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2C290;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,10
	ctx.r29.s64 = 10;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x830ff290
	ctx.lr = 0x82E2C2AC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82E2C2B0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x82e2c2bc
	if (!cr6.eq) goto loc_82E2C2BC;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_82E2C2BC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r7,r10,65534
	ctx.r7.u64 = ctx.r10.u64 | 65534;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r6,3
	ctx.r6.s64 = 3;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lwz r5,108(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82E2C300;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8bae0
	ctx.lr = 0x82E2C308;
	sub_82E8BAE0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82e2c3fc
	if (cr6.gt) goto loc_82E2C3FC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82e2c35c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E2C35C;
	// bdzf 4*cr6+eq,0x82e2c384
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E2C384;
	// bdzf 4*cr6+eq,0x82e2c3ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E2C3AC;
	// bne cr6,0x82e2c3d4
	if (!cr6.eq) goto loc_82E2C3D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fccc8
	ctx.lr = 0x82E2C33C;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2C340;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2C348:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2c348
	if (!cr6.eq) goto loc_82E2C348;
	// b 0x82e2c420
	goto loc_82E2C420;
loc_82E2C35C:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fccc8
	ctx.lr = 0x82E2C364;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2C368;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2C370:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2c370
	if (!cr6.eq) goto loc_82E2C370;
	// b 0x82e2c420
	goto loc_82E2C420;
loc_82E2C384:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fccc8
	ctx.lr = 0x82E2C38C;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2C390;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2C398:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2c398
	if (!cr6.eq) goto loc_82E2C398;
	// b 0x82e2c420
	goto loc_82E2C420;
loc_82E2C3AC:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fccc8
	ctx.lr = 0x82E2C3B4;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2C3B8;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2C3C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2c3c0
	if (!cr6.eq) goto loc_82E2C3C0;
	// b 0x82e2c420
	goto loc_82E2C420;
loc_82E2C3D4:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fccc8
	ctx.lr = 0x82E2C3DC;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2C3E0;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2C3E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2c3e8
	if (!cr6.eq) goto loc_82E2C3E8;
	// b 0x82e2c420
	goto loc_82E2C420;
loc_82E2C3FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fccc8
	ctx.lr = 0x82E2C404;
	sub_835FCCC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2C408;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2C410:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2c410
	if (!cr6.eq) goto loc_82E2C410;
loc_82E2C420:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2C434;
	sub_824208C8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// lbz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2c470
	if (cr6.eq) goto loc_82E2C470;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcbe8
	ctx.lr = 0x82E2C450;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2C454;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2C45C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2c45c
	if (!cr6.eq) goto loc_82E2C45C;
	// b 0x82e2c494
	goto loc_82E2C494;
loc_82E2C470:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcbe8
	ctx.lr = 0x82E2C478;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2C47C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2C484:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2c484
	if (!cr6.eq) goto loc_82E2C484;
loc_82E2C494:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2C4A8;
	sub_824208C8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82e2c514
	if (cr6.eq) goto loc_82E2C514;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82e2c4ec
	if (cr6.eq) goto loc_82E2C4EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd128
	ctx.lr = 0x82E2C4CC;
	sub_835FD128(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2C4D0;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2C4D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2c4d8
	if (!cr6.eq) goto loc_82E2C4D8;
	// b 0x82e2c538
	goto loc_82E2C538;
loc_82E2C4EC:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd128
	ctx.lr = 0x82E2C4F4;
	sub_835FD128(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2C4F8;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2C500:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2c500
	if (!cr6.eq) goto loc_82E2C500;
	// b 0x82e2c538
	goto loc_82E2C538;
loc_82E2C514:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd128
	ctx.lr = 0x82E2C51C;
	sub_835FD128(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2C520;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2C528:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2c528
	if (!cr6.eq) goto loc_82E2C528;
loc_82E2C538:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2C54C;
	sub_824208C8(ctx, base);
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e2c580
	if (cr6.eq) goto loc_82E2C580;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcbe8
	ctx.lr = 0x82E2C560;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2C564;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2C56C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2c56c
	if (!cr6.eq) goto loc_82E2C56C;
	// b 0x82e2c5a4
	goto loc_82E2C5A4;
loc_82E2C580:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcbe8
	ctx.lr = 0x82E2C588;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2C58C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2C594:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2c594
	if (!cr6.eq) goto loc_82E2C594;
loc_82E2C5A4:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2C5B8;
	sub_824208C8(ctx, base);
	// lbz r10,97(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e2c5ec
	if (cr6.eq) goto loc_82E2C5EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcbe8
	ctx.lr = 0x82E2C5CC;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2C5D0;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2C5D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2c5d8
	if (!cr6.eq) goto loc_82E2C5D8;
	// b 0x82e2c610
	goto loc_82E2C610;
loc_82E2C5EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcbe8
	ctx.lr = 0x82E2C5F4;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2C5F8;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2C600:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2c600
	if (!cr6.eq) goto loc_82E2C600;
loc_82E2C610:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2C624;
	sub_824208C8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r30,r10,-12312
	ctx.r30.s64 = ctx.r10.s64 + -12312;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x824208c8
	ctx.lr = 0x82E2C644;
	sub_824208C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82E2C654;
	sub_824208C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2C660"))) PPC_WEAK_FUNC(sub_82E2C660);
PPC_FUNC_IMPL(__imp__sub_82E2C660) {
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
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r9,-12304
	ctx.r4.s64 = ctx.r9.s64 + -12304;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82E2C69C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2C6A8;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82e2c6c8
	if (cr6.lt) goto loc_82E2C6C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2C6C8;
	sub_825952B8(ctx, base);
loc_82E2C6C8:
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

__attribute__((alias("__imp__sub_82E2C6E0"))) PPC_WEAK_FUNC(sub_82E2C6E0);
PPC_FUNC_IMPL(__imp__sub_82E2C6E0) {
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
	// bl 0x82d89740
	ctx.lr = 0x82E2C6F8;
	sub_82D89740(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r4,r9,-12292
	ctx.r4.s64 = ctx.r9.s64 + -12292;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82E2C720;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2C72C;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82e2c74c
	if (cr6.lt) goto loc_82E2C74C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2C74C;
	sub_825952B8(ctx, base);
loc_82E2C74C:
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

__attribute__((alias("__imp__sub_82E2C764"))) PPC_WEAK_FUNC(sub_82E2C764);
PPC_FUNC_IMPL(__imp__sub_82E2C764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2C768"))) PPC_WEAK_FUNC(sub_82E2C768);
PPC_FUNC_IMPL(__imp__sub_82E2C768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2C770;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2C790;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2c7a4
	if (cr6.eq) goto loc_82E2C7A4;
	// bl 0x836a60f0
	ctx.lr = 0x82E2C79C;
	sub_836A60F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e2c7a8
	goto loc_82E2C7A8;
loc_82E2C7A4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E2C7A8:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,352
	ctx.r4.s64 = 352;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E2C7BC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2c7d0
	if (cr6.eq) goto loc_82E2C7D0;
	// bl 0x836a6298
	ctx.lr = 0x82E2C7C8;
	sub_836A6298(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82e2c7d4
	goto loc_82E2C7D4;
loc_82E2C7D0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E2C7D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2C7EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2C7F4"))) PPC_WEAK_FUNC(sub_82E2C7F4);
PPC_FUNC_IMPL(__imp__sub_82E2C7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2C7F8"))) PPC_WEAK_FUNC(sub_82E2C7F8);
PPC_FUNC_IMPL(__imp__sub_82E2C7F8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E2C81C;
	sub_82E8BA80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r10,r11,-11184
	ctx.r10.s64 = ctx.r11.s64 + -11184;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d73ef8
	ctx.lr = 0x82E2C830;
	sub_82D73EF8(ctx, base);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// addi r7,r9,-11072
	ctx.r7.s64 = ctx.r9.s64 + -11072;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82e2c858
	if (cr6.eq) goto loc_82E2C858;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e87940
	ctx.lr = 0x82E2C854;
	sub_82E87940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2C858:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2C870"))) PPC_WEAK_FUNC(sub_82E2C870);
PPC_FUNC_IMPL(__imp__sub_82E2C870) {
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
	// bl 0x82d86078
	ctx.lr = 0x82E2C880;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2c8a8
	if (cr6.eq) goto loc_82E2C8A8;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_82E2C8A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2C8B8"))) PPC_WEAK_FUNC(sub_82E2C8B8);
PPC_FUNC_IMPL(__imp__sub_82E2C8B8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E2C8DC;
	sub_82E8BA80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r10,r11,-11184
	ctx.r10.s64 = ctx.r11.s64 + -11184;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d73ef8
	ctx.lr = 0x82E2C8F0;
	sub_82D73EF8(ctx, base);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// addi r7,r9,-10960
	ctx.r7.s64 = ctx.r9.s64 + -10960;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82e2c918
	if (cr6.eq) goto loc_82E2C918;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e87940
	ctx.lr = 0x82E2C914;
	sub_82E87940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2C918:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2C930"))) PPC_WEAK_FUNC(sub_82E2C930);
PPC_FUNC_IMPL(__imp__sub_82E2C930) {
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
	// bl 0x82d86078
	ctx.lr = 0x82E2C940;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2c968
	if (cr6.eq) goto loc_82E2C968;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_82E2C968:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2C978"))) PPC_WEAK_FUNC(sub_82E2C978);
PPC_FUNC_IMPL(__imp__sub_82E2C978) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r10,r11,-11184
	ctx.r10.s64 = ctx.r11.s64 + -11184;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d74018
	ctx.lr = 0x82E2C9A8;
	sub_82D74018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8bdc0
	ctx.lr = 0x82E2C9B0;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2c9c8
	if (cr6.eq) goto loc_82E2C9C8;
	// bl 0x82416268
	ctx.lr = 0x82E2C9C4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2C9C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2C9E0"))) PPC_WEAK_FUNC(sub_82E2C9E0);
PPC_FUNC_IMPL(__imp__sub_82E2C9E0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2ca04
	if (cr6.lt) goto loc_82E2CA04;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82e2ca08
	goto loc_82E2CA08;
loc_82E2CA04:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82E2CA08:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2CA20;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2ca48
	if (cr6.eq) goto loc_82E2CA48;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e2c7f8
	ctx.lr = 0x82E2CA34;
	sub_82E2C7F8(ctx, base);
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
loc_82E2CA48:
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

__attribute__((alias("__imp__sub_82E2CA60"))) PPC_WEAK_FUNC(sub_82E2CA60);
PPC_FUNC_IMPL(__imp__sub_82E2CA60) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2ca84
	if (cr6.lt) goto loc_82E2CA84;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82e2ca88
	goto loc_82E2CA88;
loc_82E2CA84:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82E2CA88:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2CAA0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2cac8
	if (cr6.eq) goto loc_82E2CAC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e2c7f8
	ctx.lr = 0x82E2CAB4;
	sub_82E2C7F8(ctx, base);
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
loc_82E2CAC8:
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

__attribute__((alias("__imp__sub_82E2CAE0"))) PPC_WEAK_FUNC(sub_82E2CAE0);
PPC_FUNC_IMPL(__imp__sub_82E2CAE0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2cb04
	if (cr6.lt) goto loc_82E2CB04;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82e2cb08
	goto loc_82E2CB08;
loc_82E2CB04:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82E2CB08:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2CB20;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2cb48
	if (cr6.eq) goto loc_82E2CB48;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e2c8b8
	ctx.lr = 0x82E2CB34;
	sub_82E2C8B8(ctx, base);
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
loc_82E2CB48:
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

__attribute__((alias("__imp__sub_82E2CB60"))) PPC_WEAK_FUNC(sub_82E2CB60);
PPC_FUNC_IMPL(__imp__sub_82E2CB60) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2cb84
	if (cr6.lt) goto loc_82E2CB84;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82e2cb88
	goto loc_82E2CB88;
loc_82E2CB84:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82E2CB88:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2CBA0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2cbc8
	if (cr6.eq) goto loc_82E2CBC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e2c8b8
	ctx.lr = 0x82E2CBB4;
	sub_82E2C8B8(ctx, base);
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
loc_82E2CBC8:
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

__attribute__((alias("__imp__sub_82E2CBE0"))) PPC_WEAK_FUNC(sub_82E2CBE0);
PPC_FUNC_IMPL(__imp__sub_82E2CBE0) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82E2CBF8;
	sub_82E8BAE0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-11296
	ctx.r31.s64 = ctx.r11.s64 + -11296;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r3,344
	ctx.r3.s64 = ctx.r3.s64 + 344;
	// bl 0x824208c8
	ctx.lr = 0x82E2CC14;
	sub_824208C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r30,316
	ctx.r3.s64 = ctx.r30.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82E2CC24;
	sub_824208C8(ctx, base);
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

__attribute__((alias("__imp__sub_82E2CC40"))) PPC_WEAK_FUNC(sub_82E2CC40);
PPC_FUNC_IMPL(__imp__sub_82E2CC40) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2CC64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2ccac
	if (cr6.eq) goto loc_82E2CCAC;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-11288
	ctx.r4.s64 = ctx.r11.s64 + -11288;
	// bl 0x837b0c10
	ctx.lr = 0x82E2CC80;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2CC8C;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e2ccac
	if (cr6.lt) goto loc_82E2CCAC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2CCAC;
	sub_825952B8(ctx, base);
loc_82E2CCAC:
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

__attribute__((alias("__imp__sub_82E2CCC4"))) PPC_WEAK_FUNC(sub_82E2CCC4);
PPC_FUNC_IMPL(__imp__sub_82E2CCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2CCC8"))) PPC_WEAK_FUNC(sub_82E2CCC8);
PPC_FUNC_IMPL(__imp__sub_82E2CCC8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2CCEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2cd34
	if (cr6.eq) goto loc_82E2CD34;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-11280
	ctx.r4.s64 = ctx.r11.s64 + -11280;
	// bl 0x837b0c10
	ctx.lr = 0x82E2CD08;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2CD14;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e2cd34
	if (cr6.lt) goto loc_82E2CD34;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2CD34;
	sub_825952B8(ctx, base);
loc_82E2CD34:
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

__attribute__((alias("__imp__sub_82E2CD4C"))) PPC_WEAK_FUNC(sub_82E2CD4C);
PPC_FUNC_IMPL(__imp__sub_82E2CD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2CD50"))) PPC_WEAK_FUNC(sub_82E2CD50);
PPC_FUNC_IMPL(__imp__sub_82E2CD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2CD58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,520
	ctx.r4.s64 = 520;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2CD78;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2cd8c
	if (cr6.eq) goto loc_82E2CD8C;
	// bl 0x836a7358
	ctx.lr = 0x82E2CD84;
	sub_836A7358(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e2cd90
	goto loc_82E2CD90;
loc_82E2CD8C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E2CD90:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,520
	ctx.r4.s64 = 520;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E2CDA4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2cdb8
	if (cr6.eq) goto loc_82E2CDB8;
	// bl 0x836a7640
	ctx.lr = 0x82E2CDB0;
	sub_836A7640(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82e2cdbc
	goto loc_82E2CDBC;
loc_82E2CDB8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E2CDBC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2CDD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2CDDC"))) PPC_WEAK_FUNC(sub_82E2CDDC);
PPC_FUNC_IMPL(__imp__sub_82E2CDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2CDE0"))) PPC_WEAK_FUNC(sub_82E2CDE0);
PPC_FUNC_IMPL(__imp__sub_82E2CDE0) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,212
	ctx.r4.s64 = 212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2CE10;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2ce4c
	if (cr6.eq) goto loc_82E2CE4C;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E2CE28;
	sub_82E8BA80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-10424
	ctx.r9.s64 = ctx.r11.s64 + -10424;
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// b 0x82e2ce50
	goto loc_82E2CE50;
loc_82E2CE4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E2CE50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2CE68"))) PPC_WEAK_FUNC(sub_82E2CE68);
PPC_FUNC_IMPL(__imp__sub_82E2CE68) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-10424
	ctx.r10.s64 = ctx.r11.s64 + -10424;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82E2CE94;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2ceac
	if (cr6.eq) goto loc_82E2CEAC;
	// bl 0x82416268
	ctx.lr = 0x82E2CEA8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2CEAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2CEC4"))) PPC_WEAK_FUNC(sub_82E2CEC4);
PPC_FUNC_IMPL(__imp__sub_82E2CEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2CEC8"))) PPC_WEAK_FUNC(sub_82E2CEC8);
PPC_FUNC_IMPL(__imp__sub_82E2CEC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2ced8
	if (cr6.lt) goto loc_82E2CED8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E2CED8:
	// b 0x82e2cde0
	sub_82E2CDE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2CEDC"))) PPC_WEAK_FUNC(sub_82E2CEDC);
PPC_FUNC_IMPL(__imp__sub_82E2CEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2CEE0"))) PPC_WEAK_FUNC(sub_82E2CEE0);
PPC_FUNC_IMPL(__imp__sub_82E2CEE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E2CEE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r3,116
	ctx.r29.s64 = ctx.r3.s64 + 116;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2cf08
	if (cr6.lt) goto loc_82E2CF08;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E2CF08;
	sub_8386D088(ctx, base);
loc_82E2CF08:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r28,r30,88
	ctx.r28.s64 = ctx.r30.s64 + 88;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2cf34
	if (cr6.lt) goto loc_82E2CF34;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E2CF34;
	sub_8386D088(ctx, base);
loc_82E2CF34:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,60
	ctx.r29.s64 = ctx.r30.s64 + 60;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2cf58
	if (cr6.lt) goto loc_82E2CF58;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E2CF58;
	sub_8386D088(ctx, base);
loc_82E2CF58:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,28
	ctx.r28.s64 = ctx.r30.s64 + 28;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2cf7c
	if (cr6.lt) goto loc_82E2CF7C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E2CF7C;
	sub_8386D088(ctx, base);
loc_82E2CF7C:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2cf9c
	if (cr6.lt) goto loc_82E2CF9C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E2CF9C;
	sub_8386D088(ctx, base);
loc_82E2CF9C:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
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

__attribute__((alias("__imp__sub_82E2CFB0"))) PPC_WEAK_FUNC(sub_82E2CFB0);
PPC_FUNC_IMPL(__imp__sub_82E2CFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E2CFB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82420558
	ctx.lr = 0x82E2CFE8;
	sub_82420558(ctx, base);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// bl 0x82420558
	ctx.lr = 0x82E2D008;
	sub_82420558(ctx, base);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,60
	ctx.r4.s64 = ctx.r29.s64 + 60;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// bl 0x82420558
	ctx.lr = 0x82E2D030;
	sub_82420558(ctx, base);
	// stw r27,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// bl 0x82420558
	ctx.lr = 0x82E2D050;
	sub_82420558(ctx, base);
	// stw r27,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r27.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// stb r30,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// bl 0x82420558
	ctx.lr = 0x82E2D070;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2D07C"))) PPC_WEAK_FUNC(sub_82E2D07C);
PPC_FUNC_IMPL(__imp__sub_82E2D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2D080"))) PPC_WEAK_FUNC(sub_82E2D080);
PPC_FUNC_IMPL(__imp__sub_82E2D080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2D088;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82e8bae0
	ctx.lr = 0x82E2D094;
	sub_82E8BAE0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-10797
	ctx.r29.s64 = ctx.r11.s64 + -10797;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r29,265
	ctx.r4.s64 = ctx.r29.s64 + 265;
	// addi r3,r3,344
	ctx.r3.s64 = ctx.r3.s64 + 344;
	// bl 0x824208c8
	ctx.lr = 0x82E2D0B0;
	sub_824208C8(ctx, base);
	// addi r4,r29,277
	ctx.r4.s64 = ctx.r29.s64 + 277;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82E2D0C0;
	sub_824208C8(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82E2D0C4;
	sub_82D860F0(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// bl 0x82dc9d98
	ctx.lr = 0x82E2D0CC;
	sub_82DC9D98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D0D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d0d4
	if (!cr6.eq) goto loc_82E2D0D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,460
	ctx.r3.s64 = ctx.r31.s64 + 460;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2D0F8;
	sub_824208C8(ctx, base);
	// bl 0x82e691c8
	ctx.lr = 0x82E2D0FC;
	sub_82E691C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D104:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d104
	if (!cr6.eq) goto loc_82E2D104;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2D128;
	sub_824208C8(ctx, base);
	// bl 0x83572958
	ctx.lr = 0x82E2D12C;
	sub_83572958(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82e2d158
	if (!cr6.eq) goto loc_82E2D158;
	// bl 0x835fd278
	ctx.lr = 0x82E2D138;
	sub_835FD278(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D13C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D144:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d144
	if (!cr6.eq) goto loc_82E2D144;
	// b 0x82e2d1a8
	goto loc_82E2D1A8;
loc_82E2D158:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82e2d184
	if (!cr6.eq) goto loc_82E2D184;
	// bl 0x835fd278
	ctx.lr = 0x82E2D164;
	sub_835FD278(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D168;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D170:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d170
	if (!cr6.eq) goto loc_82E2D170;
	// b 0x82e2d1a8
	goto loc_82E2D1A8;
loc_82E2D184:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd278
	ctx.lr = 0x82E2D18C;
	sub_835FD278(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D190;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D198:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d198
	if (!cr6.eq) goto loc_82E2D198;
loc_82E2D1A8:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2D1BC;
	sub_824208C8(ctx, base);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82e2d1fc
	if (!cr6.eq) goto loc_82E2D1FC;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fb1a8
	ctx.lr = 0x82E2D1D0;
	sub_835FB1A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D1D4;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D1DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d1dc
	if (!cr6.eq) goto loc_82E2D1DC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e2d330
	goto loc_82E2D330;
loc_82E2D1FC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82e2d238
	if (!cr6.eq) goto loc_82E2D238;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb1a8
	ctx.lr = 0x82E2D20C;
	sub_835FB1A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D210;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D218:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d218
	if (!cr6.eq) goto loc_82E2D218;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e2d330
	goto loc_82E2D330;
loc_82E2D238:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82e2d274
	if (!cr6.eq) goto loc_82E2D274;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb1a8
	ctx.lr = 0x82E2D248;
	sub_835FB1A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D24C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D254:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d254
	if (!cr6.eq) goto loc_82E2D254;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e2d330
	goto loc_82E2D330;
loc_82E2D274:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82e2d2b0
	if (!cr6.eq) goto loc_82E2D2B0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb1a8
	ctx.lr = 0x82E2D284;
	sub_835FB1A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D288;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D290:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d290
	if (!cr6.eq) goto loc_82E2D290;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e2d330
	goto loc_82E2D330;
loc_82E2D2B0:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82e2d2ec
	if (!cr6.eq) goto loc_82E2D2EC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb1a8
	ctx.lr = 0x82E2D2C0;
	sub_835FB1A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D2C4;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D2CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d2cc
	if (!cr6.eq) goto loc_82E2D2CC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e2d330
	goto loc_82E2D330;
loc_82E2D2EC:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82e2d328
	if (!cr6.eq) goto loc_82E2D328;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb1a8
	ctx.lr = 0x82E2D2FC;
	sub_835FB1A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D300;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D308:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d308
	if (!cr6.eq) goto loc_82E2D308;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e2d330
	goto loc_82E2D330;
loc_82E2D328:
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E2D330:
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// bl 0x824208c8
	ctx.lr = 0x82E2D338;
	sub_824208C8(ctx, base);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82e2d388
	if (!cr6.eq) goto loc_82E2D388;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb218
	ctx.lr = 0x82E2D34C;
	sub_835FB218(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D350;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D358:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d358
	if (!cr6.eq) goto loc_82E2D358;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2D37C;
	sub_824208C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E2D388:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82e2d3d4
	if (!cr6.eq) goto loc_82E2D3D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb218
	ctx.lr = 0x82E2D398;
	sub_835FB218(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D39C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D3A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d3a4
	if (!cr6.eq) goto loc_82E2D3A4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2D3C8;
	sub_824208C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E2D3D4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82e2d420
	if (!cr6.eq) goto loc_82E2D420;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb218
	ctx.lr = 0x82E2D3E4;
	sub_835FB218(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D3E8;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D3F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d3f0
	if (!cr6.eq) goto loc_82E2D3F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2D414;
	sub_824208C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E2D420:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82e2d46c
	if (!cr6.eq) goto loc_82E2D46C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb218
	ctx.lr = 0x82E2D430;
	sub_835FB218(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D434;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D43C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d43c
	if (!cr6.eq) goto loc_82E2D43C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2D460;
	sub_824208C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E2D46C:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82e2d4b8
	if (!cr6.eq) goto loc_82E2D4B8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb218
	ctx.lr = 0x82E2D47C;
	sub_835FB218(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D480;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D488:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d488
	if (!cr6.eq) goto loc_82E2D488;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2D4AC;
	sub_824208C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E2D4B8:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82e2d504
	if (!cr6.eq) goto loc_82E2D504;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fb218
	ctx.lr = 0x82E2D4C8;
	sub_835FB218(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D4CC;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D4D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d4d4
	if (!cr6.eq) goto loc_82E2D4D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2D4F8;
	sub_824208C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E2D504:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82e2d550
	if (!cr6.eq) goto loc_82E2D550;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fb218
	ctx.lr = 0x82E2D514;
	sub_835FB218(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D518;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D520:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d520
	if (!cr6.eq) goto loc_82E2D520;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2D544;
	sub_824208C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E2D550:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// bl 0x824208c8
	ctx.lr = 0x82E2D560;
	sub_824208C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2D56C"))) PPC_WEAK_FUNC(sub_82E2D56C);
PPC_FUNC_IMPL(__imp__sub_82E2D56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2D570"))) PPC_WEAK_FUNC(sub_82E2D570);
PPC_FUNC_IMPL(__imp__sub_82E2D570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2D578;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82E2D5B4;
	sub_8259CB28(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// bl 0x8259cb28
	ctx.lr = 0x82E2D5C8;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2D5D4"))) PPC_WEAK_FUNC(sub_82E2D5D4);
PPC_FUNC_IMPL(__imp__sub_82E2D5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2D5D8"))) PPC_WEAK_FUNC(sub_82E2D5D8);
PPC_FUNC_IMPL(__imp__sub_82E2D5D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82E2D5E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e8bae8
	ctx.lr = 0x82E2D5E8;
	sub_82E8BAE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2d9b4
	if (cr6.eq) goto loc_82E2D9B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcbe8
	ctx.lr = 0x82E2D5FC;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D600;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82E2D60C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d60c
	if (!cr6.eq) goto loc_82E2D60C;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E2D634;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e2d9b4
	if (!cr6.eq) goto loc_82E2D9B4;
	// bl 0x82d86078
	ctx.lr = 0x82E2D640;
	sub_82D86078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2d9b4
	if (cr6.eq) goto loc_82E2D9B4;
	// addi r4,r31,376
	ctx.r4.s64 = ctx.r31.s64 + 376;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e2cfb0
	ctx.lr = 0x82E2D658;
	sub_82E2CFB0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82df1910
	ctx.lr = 0x82E2D660;
	sub_82DF1910(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82E2D674:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82420558
	ctx.lr = 0x82E2D694;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fb1a8
	ctx.lr = 0x82E2D69C;
	sub_835FB1A8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D6A0;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D6A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d6a8
	if (!cr6.eq) goto loc_82E2D6A8;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E2D6D4;
	sub_827A8810(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e2d70c
	if (cr6.eq) goto loc_82E2D70C;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2d6f0
	if (cr6.lt) goto loc_82E2D6F0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82E2D6F0;
	sub_8386D088(ctx, base);
loc_82E2D6F0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(ctx.r31.s32, 7, xer);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// blt cr6,0x82e2d674
	if (cr6.lt) goto loc_82E2D674;
	// b 0x82e2d72c
	goto loc_82E2D72C;
loc_82E2D70C:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2d720
	if (cr6.lt) goto loc_82E2D720;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82E2D720;
	sub_8386D088(ctx, base);
loc_82E2D720:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_82E2D72C:
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// li r28,7
	ctx.r28.s64 = 7;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82E2D738:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,268
	ctx.r4.s64 = ctx.r1.s64 + 268;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82420558
	ctx.lr = 0x82E2D758;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fb218
	ctx.lr = 0x82E2D760;
	sub_835FB218(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D764;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D76C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d76c
	if (!cr6.eq) goto loc_82E2D76C;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E2D798;
	sub_827A8810(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e2d7d0
	if (cr6.eq) goto loc_82E2D7D0;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2d7b4
	if (cr6.lt) goto loc_82E2D7B4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E2D7B4;
	sub_8386D088(ctx, base);
loc_82E2D7B4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(ctx.r31.s32, 7, xer);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// blt cr6,0x82e2d738
	if (cr6.lt) goto loc_82E2D738;
	// b 0x82e2d7f0
	goto loc_82E2D7F0;
loc_82E2D7D0:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2d7e4
	if (cr6.lt) goto loc_82E2D7E4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E2D7E4;
	sub_8386D088(ctx, base);
loc_82E2D7E4:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
loc_82E2D7F0:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// cmpwi cr6,r28,7
	cr6.compare<int32_t>(ctx.r28.s32, 7, xer);
	// bne cr6,0x82e2d840
	if (!cr6.eq) goto loc_82E2D840;
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2d81c
	if (cr6.lt) goto loc_82E2D81C;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x825952b8
	ctx.lr = 0x82E2D81C;
	sub_825952B8(ctx, base);
loc_82E2D81C:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r30.u8);
	// blt cr6,0x82e2d9a0
	if (cr6.lt) goto loc_82E2D9A0;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// b 0x82e2d998
	goto loc_82E2D998;
loc_82E2D840:
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 168, ctx.r11.u16);
	// bl 0x835fcbe8
	ctx.lr = 0x82E2D850;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2D854;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2D85C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d85c
	if (!cr6.eq) goto loc_82E2D85C;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E2D888;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// lwz r9,348(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r4,328(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,170(r1)
	PPC_STORE_U8(ctx.r1.u32 + 170, ctx.r7.u8);
	// bge cr6,0x82e2d8ac
	if (!cr6.lt) goto loc_82E2D8AC;
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
loc_82E2D8AC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E2D8B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d8b0
	if (!cr6.eq) goto loc_82E2D8B0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E2D8D4;
	sub_8259CC28(ctx, base);
	// lwz r10,376(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r4,356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82e2d8e8
	if (!cr6.lt) goto loc_82E2D8E8;
	// addi r4,r1,356
	ctx.r4.s64 = ctx.r1.s64 + 356;
loc_82E2D8E8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E2D8EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2d8ec
	if (!cr6.eq) goto loc_82E2D8EC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E2D910;
	sub_8259CC28(ctx, base);
	// lwz r11,136(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82E2D944;
	sub_8259CB28(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8259cb28
	ctx.lr = 0x82E2D958;
	sub_8259CB28(ctx, base);
	// lwz r7,220(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82e2d978
	if (cr6.lt) goto loc_82E2D978;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x825952b8
	ctx.lr = 0x82E2D978;
	sub_825952B8(ctx, base);
loc_82E2D978:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r30.u8);
	// blt cr6,0x82e2d9a0
	if (cr6.lt) goto loc_82E2D9A0;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
loc_82E2D998:
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x825952b8
	ctx.lr = 0x82E2D9A0;
	sub_825952B8(ctx, base);
loc_82E2D9A0:
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stb r30,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r30.u8);
	// bl 0x82e2cee0
	ctx.lr = 0x82E2D9B4;
	sub_82E2CEE0(ctx, base);
loc_82E2D9B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2D9C0"))) PPC_WEAK_FUNC(sub_82E2D9C0);
PPC_FUNC_IMPL(__imp__sub_82E2D9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2D9C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2D9E8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2d9fc
	if (cr6.eq) goto loc_82E2D9FC;
	// bl 0x836a8018
	ctx.lr = 0x82E2D9F4;
	sub_836A8018(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e2da00
	goto loc_82E2DA00;
loc_82E2D9FC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E2DA00:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E2DA14;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2da28
	if (cr6.eq) goto loc_82E2DA28;
	// bl 0x836a81c0
	ctx.lr = 0x82E2DA20;
	sub_836A81C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82e2da2c
	goto loc_82E2DA2C;
loc_82E2DA28:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E2DA2C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2DA44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2DA4C"))) PPC_WEAK_FUNC(sub_82E2DA4C);
PPC_FUNC_IMPL(__imp__sub_82E2DA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2DA50"))) PPC_WEAK_FUNC(sub_82E2DA50);
PPC_FUNC_IMPL(__imp__sub_82E2DA50) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-9888
	ctx.r10.s64 = ctx.r11.s64 + -9888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r4,204(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e2da94
	if (cr6.eq) goto loc_82E2DA94;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2DA94;
	sub_825952B8(ctx, base);
loc_82E2DA94:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82E2DAAC;
	sub_82E8BDC0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2dac4
	if (cr6.eq) goto loc_82E2DAC4;
	// bl 0x82416268
	ctx.lr = 0x82E2DAC0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2DAC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2DADC"))) PPC_WEAK_FUNC(sub_82E2DADC);
PPC_FUNC_IMPL(__imp__sub_82E2DADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2DAE0"))) PPC_WEAK_FUNC(sub_82E2DAE0);
PPC_FUNC_IMPL(__imp__sub_82E2DAE0) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,228
	ctx.r4.s64 = 228;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2DB10;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2db54
	if (cr6.eq) goto loc_82E2DB54;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E2DB28;
	sub_82E8BA80(ctx, base);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-9888
	ctx.r9.s64 = ctx.r10.s64 + -9888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// b 0x82e2db58
	goto loc_82E2DB58;
loc_82E2DB54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E2DB58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2DB70"))) PPC_WEAK_FUNC(sub_82E2DB70);
PPC_FUNC_IMPL(__imp__sub_82E2DB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2db80
	if (cr6.lt) goto loc_82E2DB80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E2DB80:
	// b 0x82e2dae0
	sub_82E2DAE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2DB84"))) PPC_WEAK_FUNC(sub_82E2DB84);
PPC_FUNC_IMPL(__imp__sub_82E2DB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2DB88"))) PPC_WEAK_FUNC(sub_82E2DB88);
PPC_FUNC_IMPL(__imp__sub_82E2DB88) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82E2DBA0;
	sub_82E8BAE0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-9984
	ctx.r30.s64 = ctx.r11.s64 + -9984;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// addi r3,r3,344
	ctx.r3.s64 = ctx.r3.s64 + 344;
	// bl 0x824208c8
	ctx.lr = 0x82E2DBBC;
	sub_824208C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82E2DBCC;
	sub_824208C8(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82E2DBD0;
	sub_82D860F0(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82E2DBF0"))) PPC_WEAK_FUNC(sub_82E2DBF0);
PPC_FUNC_IMPL(__imp__sub_82E2DBF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E2DBF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82E2DC04;
	sub_82E8BAE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2dc8c
	if (cr6.eq) goto loc_82E2DC8C;
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// addi r28,r31,204
	ctx.r28.s64 = ctx.r31.s64 + 204;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r31,204(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e2dc54
	if (cr6.eq) goto loc_82E2DC54;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82E2DC4C;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82E2DC54:
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82e2dc8c
	if (!cr6.gt) goto loc_82E2DC8C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E2DC68:
	// lwz r11,360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x82E2DC78;
	sub_835977D8(ctx, base);
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82e2dc68
	if (cr6.lt) goto loc_82E2DC68;
loc_82E2DC8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2DC98"))) PPC_WEAK_FUNC(sub_82E2DC98);
PPC_FUNC_IMPL(__imp__sub_82E2DC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2DCA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2DCC0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2dcd4
	if (cr6.eq) goto loc_82E2DCD4;
	// bl 0x836a8910
	ctx.lr = 0x82E2DCCC;
	sub_836A8910(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e2dcd8
	goto loc_82E2DCD8;
loc_82E2DCD4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E2DCD8:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,352
	ctx.r4.s64 = 352;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E2DCEC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2dd00
	if (cr6.eq) goto loc_82E2DD00;
	// bl 0x836a8ab8
	ctx.lr = 0x82E2DCF8;
	sub_836A8AB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82e2dd04
	goto loc_82E2DD04;
loc_82E2DD00:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E2DD04:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2DD1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2DD24"))) PPC_WEAK_FUNC(sub_82E2DD24);
PPC_FUNC_IMPL(__imp__sub_82E2DD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2DD28"))) PPC_WEAK_FUNC(sub_82E2DD28);
PPC_FUNC_IMPL(__imp__sub_82E2DD28) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-9352
	ctx.r10.s64 = ctx.r11.s64 + -9352;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82eacd08
	ctx.lr = 0x82E2DD54;
	sub_82EACD08(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2dd6c
	if (cr6.eq) goto loc_82E2DD6C;
	// bl 0x82416268
	ctx.lr = 0x82E2DD68;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2DD6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2DD84"))) PPC_WEAK_FUNC(sub_82E2DD84);
PPC_FUNC_IMPL(__imp__sub_82E2DD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2DD88"))) PPC_WEAK_FUNC(sub_82E2DD88);
PPC_FUNC_IMPL(__imp__sub_82E2DD88) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2DDB8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2dde4
	if (cr6.eq) goto loc_82E2DDE4;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82eaccc8
	ctx.lr = 0x82E2DDD0;
	sub_82EACCC8(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-9240
	ctx.r10.s64 = ctx.r11.s64 + -9240;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82e2dde8
	goto loc_82E2DDE8;
loc_82E2DDE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E2DDE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2DE00"))) PPC_WEAK_FUNC(sub_82E2DE00);
PPC_FUNC_IMPL(__imp__sub_82E2DE00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2de10
	if (cr6.lt) goto loc_82E2DE10;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E2DE10:
	// b 0x82e2dd88
	sub_82E2DD88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2DE14"))) PPC_WEAK_FUNC(sub_82E2DE14);
PPC_FUNC_IMPL(__imp__sub_82E2DE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2DE18"))) PPC_WEAK_FUNC(sub_82E2DE18);
PPC_FUNC_IMPL(__imp__sub_82E2DE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E2DE20;
	__savegprlr_27(ctx, base);
	// stwu r1,-2656(r1)
	ea = -2656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e6e978
	ctx.lr = 0x82E2DE28;
	sub_82E6E978(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82E2DE30;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82e2dff0
	if (cr6.eq) goto loc_82E2DFF0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2dff0
	if (cr6.eq) goto loc_82E2DFF0;
	// bl 0x82e765e8
	ctx.lr = 0x82E2DE48;
	sub_82E765E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2dff0
	if (cr6.eq) goto loc_82E2DFF0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r28,132(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x830ff290
	ctx.lr = 0x82E2DE60;
	sub_830FF290(ctx, base);
	// bl 0x830ff9d0
	ctx.lr = 0x82E2DE64;
	sub_830FF9D0(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpld cr6,r3,r28
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r28.u64, xer);
	// blt cr6,0x82e2de84
	if (cr6.lt) goto loc_82E2DE84;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82e877d0
	ctx.lr = 0x82E2DE78;
	sub_82E877D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2dea8
	if (cr6.eq) goto loc_82E2DEA8;
loc_82E2DE84:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82a46f98
	ctx.lr = 0x82E2DE90;
	sub_82A46F98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82583338
	ctx.lr = 0x82E2DE9C;
	sub_82583338(ctx, base);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,261(r10)
	PPC_STORE_U8(ctx.r10.u32 + 261, ctx.r11.u8);
loc_82E2DEA8:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x82e76b28
	ctx.lr = 0x82E2DED4;
	sub_82E76B28(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82E2DED8;
	sub_82DAD2E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2dff0
	if (cr6.eq) goto loc_82E2DFF0;
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e2def8
	if (!cr6.eq) goto loc_82E2DEF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e2defc
	goto loc_82E2DEFC;
loc_82E2DEF8:
	// bl 0x82e744c8
	ctx.lr = 0x82E2DEFC;
	sub_82E744C8(ctx, base);
loc_82E2DEFC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2dff0
	if (cr6.eq) goto loc_82E2DFF0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r27,512
	ctx.r4.s64 = ctx.r27.s64 + 512;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x828eeb48
	ctx.lr = 0x82E2DF20;
	sub_828EEB48(ctx, base);
	// lwz r11,532(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 532);
	// lwz r10,528(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 528);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82e2dfe8
	if (cr6.eq) goto loc_82E2DFE8;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E2DF58:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82e2df58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E2DF58;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r30,r28,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r28.s64;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// beq cr6,0x82e2dfdc
	if (cr6.eq) goto loc_82E2DFDC;
	// addi r29,r1,172
	ctx.r29.s64 = ctx.r1.s64 + 172;
loc_82E2DF90:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b67090
	ctx.lr = 0x82E2DF98;
	sub_82B67090(ctx, base);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// ble cr6,0x82e2dff8
	if (!cr6.gt) goto loc_82E2DFF8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbzx r4,r28,r31
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82db1308
	ctx.lr = 0x82E2DFB0;
	sub_82DB1308(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2dfc4
	if (cr6.eq) goto loc_82E2DFC4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82E2DFC4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c644a0
	ctx.lr = 0x82E2DFCC;
	sub_82C644A0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x82e2df90
	if (cr6.lt) goto loc_82E2DF90;
loc_82E2DFDC:
	// bl 0x82e765e8
	ctx.lr = 0x82E2DFE0;
	sub_82E765E8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82e76b28
	ctx.lr = 0x82E2DFE8;
	sub_82E76B28(ctx, base);
loc_82E2DFE8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f73d60
	ctx.lr = 0x82E2DFF0;
	sub_82F73D60(ctx, base);
loc_82E2DFF0:
	// addi r1,r1,2656
	ctx.r1.s64 = ctx.r1.s64 + 2656;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E2DFF8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82E2E004;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82E2E004"))) PPC_WEAK_FUNC(sub_82E2E004);
PPC_FUNC_IMPL(__imp__sub_82E2E004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2E008"))) PPC_WEAK_FUNC(sub_82E2E008);
PPC_FUNC_IMPL(__imp__sub_82E2E008) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82E2E020;
	sub_82E8BAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d860f0
	ctx.lr = 0x82E2E028;
	sub_82D860F0(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r30,r11,-9448
	ctx.r30.s64 = ctx.r11.s64 + -9448;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x824208c8
	ctx.lr = 0x82E2E044;
	sub_824208C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82E2E054;
	sub_824208C8(ctx, base);
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

__attribute__((alias("__imp__sub_82E2E070"))) PPC_WEAK_FUNC(sub_82E2E070);
PPC_FUNC_IMPL(__imp__sub_82E2E070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r10,r4,192
	ctx.r10.s64 = ctx.r4.s64 + 192;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lwz r5,192(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	// stw r5,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r5.u32);
loc_82E2E09C:
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,-180(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -180);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r6.u32);
	// lwzu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82e2e09c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E2E09C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2E0C8"))) PPC_WEAK_FUNC(sub_82E2E0C8);
PPC_FUNC_IMPL(__imp__sub_82E2E0C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// b 0x82e2e070
	sub_82E2E070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2E0D0"))) PPC_WEAK_FUNC(sub_82E2E0D0);
PPC_FUNC_IMPL(__imp__sub_82E2E0D0) {
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
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E2E0EC;
	sub_82E8BA80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r8,r11,-8688
	ctx.r8.s64 = ctx.r11.s64 + -8688;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,204
	ctx.r10.s64 = ctx.r31.s64 + 204;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// addi r10,r10,192
	ctx.r10.s64 = ctx.r10.s64 + 192;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E2E118:
	// stw r11,-184(r10)
	PPC_STORE_U32(ctx.r10.u32 + -184, ctx.r11.u32);
	// stw r11,-180(r10)
	PPC_STORE_U32(ctx.r10.u32 + -180, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e2e118
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E2E118;
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

__attribute__((alias("__imp__sub_82E2E144"))) PPC_WEAK_FUNC(sub_82E2E144);
PPC_FUNC_IMPL(__imp__sub_82E2E144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2E148"))) PPC_WEAK_FUNC(sub_82E2E148);
PPC_FUNC_IMPL(__imp__sub_82E2E148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2E150;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,416
	ctx.r4.s64 = 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2E170;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2e184
	if (cr6.eq) goto loc_82E2E184;
	// bl 0x836a99a0
	ctx.lr = 0x82E2E17C;
	sub_836A99A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e2e188
	goto loc_82E2E188;
loc_82E2E184:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E2E188:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,352
	ctx.r4.s64 = 352;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E2E19C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2e1b0
	if (cr6.eq) goto loc_82E2E1B0;
	// bl 0x836a9b90
	ctx.lr = 0x82E2E1A8;
	sub_836A9B90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82e2e1b4
	goto loc_82E2E1B4;
loc_82E2E1B0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E2E1B4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2E1CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2E1D4"))) PPC_WEAK_FUNC(sub_82E2E1D4);
PPC_FUNC_IMPL(__imp__sub_82E2E1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2E1D8"))) PPC_WEAK_FUNC(sub_82E2E1D8);
PPC_FUNC_IMPL(__imp__sub_82E2E1D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2E1EC"))) PPC_WEAK_FUNC(sub_82E2E1EC);
PPC_FUNC_IMPL(__imp__sub_82E2E1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2E1F0"))) PPC_WEAK_FUNC(sub_82E2E1F0);
PPC_FUNC_IMPL(__imp__sub_82E2E1F0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-8688
	ctx.r10.s64 = ctx.r11.s64 + -8688;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82E2E21C;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2e234
	if (cr6.eq) goto loc_82E2E234;
	// bl 0x82416268
	ctx.lr = 0x82E2E230;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2E234:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2E24C"))) PPC_WEAK_FUNC(sub_82E2E24C);
PPC_FUNC_IMPL(__imp__sub_82E2E24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2E250"))) PPC_WEAK_FUNC(sub_82E2E250);
PPC_FUNC_IMPL(__imp__sub_82E2E250) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2e274
	if (cr6.lt) goto loc_82E2E274;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82e2e278
	goto loc_82E2E278;
loc_82E2E274:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82E2E278:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2E290;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2e2b4
	if (cr6.eq) goto loc_82E2E2B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e2e0d0
	ctx.lr = 0x82E2E2A0;
	sub_82E2E0D0(ctx, base);
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
loc_82E2E2B4:
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

__attribute__((alias("__imp__sub_82E2E2CC"))) PPC_WEAK_FUNC(sub_82E2E2CC);
PPC_FUNC_IMPL(__imp__sub_82E2E2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2E2D0"))) PPC_WEAK_FUNC(sub_82E2E2D0);
PPC_FUNC_IMPL(__imp__sub_82E2E2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82E2E2D8;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82e8bae0
	ctx.lr = 0x82E2E2E4;
	sub_82E8BAE0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-8800
	ctx.r31.s64 = ctx.r11.s64 + -8800;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r3,344
	ctx.r3.s64 = ctx.r3.s64 + 344;
	// bl 0x824208c8
	ctx.lr = 0x82E2E300;
	sub_824208C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r30,316
	ctx.r3.s64 = ctx.r30.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82E2E310;
	sub_824208C8(ctx, base);
	// lwz r8,204(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,11
	ctx.r9.s64 = 720896;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r26,8
	ctx.r26.s64 = 8;
	// stw r8,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r8.u32);
	// ori r22,r9,1
	ctx.r22.u64 = ctx.r9.u64 | 1;
	// lwz r7,208(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 208);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r7,408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 408, ctx.r7.u32);
	// addi r24,r10,8980
	ctx.r24.s64 = ctx.r10.s64 + 8980;
	// lwz r6,208(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 208);
	// addi r23,r11,30872
	ctx.r23.s64 = ctx.r11.s64 + 30872;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// ble cr6,0x82e2e404
	if (!cr6.gt) goto loc_82E2E404;
	// addi r31,r30,376
	ctx.r31.s64 = ctx.r30.s64 + 376;
	// addi r28,r27,216
	ctx.r28.s64 = ctx.r27.s64 + 216;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_82E2E358:
	// lwz r9,-4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// blt cr6,0x82e2e3c8
	if (cr6.lt) goto loc_82E2E3C8;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e2e3b8
	if (!cr6.gt) goto loc_82E2E3B8;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// bl 0x8247b270
	ctx.lr = 0x82E2E3B0;
	sub_8247B270(ctx, base);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// b 0x82e2e3bc
	goto loc_82E2E3BC;
loc_82E2E3B8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E2E3BC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2e3f0
	if (cr6.eq) goto loc_82E2E3F0;
loc_82E2E3C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82e2e3e4
	if (cr0.eq) goto loc_82E2E3E4;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82E2E3E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82E2E3F0:
	// lwz r11,208(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 208);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// blt cr6,0x82e2e358
	if (cr6.lt) goto loc_82E2E358;
loc_82E2E404:
	// lwz r11,396(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 396);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 412, ctx.r11.u32);
	// lwz r10,396(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 396);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82e2e4d4
	if (!cr6.gt) goto loc_82E2E4D4;
	// addi r31,r30,392
	ctx.r31.s64 = ctx.r30.s64 + 392;
	// addi r29,r27,404
	ctx.r29.s64 = ctx.r27.s64 + 404;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_82E2E428:
	// lwz r9,-4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// blt cr6,0x82e2e498
	if (cr6.lt) goto loc_82E2E498;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e2e488
	if (!cr6.gt) goto loc_82E2E488;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x8247b270
	ctx.lr = 0x82E2E480;
	sub_8247B270(ctx, base);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// b 0x82e2e48c
	goto loc_82E2E48C;
loc_82E2E488:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E2E48C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2e4c0
	if (cr6.eq) goto loc_82E2E4C0;
loc_82E2E498:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82e2e4b4
	if (cr0.eq) goto loc_82E2E4B4;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82E2E4B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82E2E4C0:
	// lwz r11,396(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 396);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x82e2e428
	if (cr6.lt) goto loc_82E2E428;
loc_82E2E4D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2E4E0"))) PPC_WEAK_FUNC(sub_82E2E4E0);
PPC_FUNC_IMPL(__imp__sub_82E2E4E0) {
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
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2e53c
	if (cr6.eq) goto loc_82E2E53C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8792
	ctx.r4.s64 = ctx.r11.s64 + -8792;
	// bl 0x837b0c10
	ctx.lr = 0x82E2E510;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2E51C;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e2e53c
	if (cr6.lt) goto loc_82E2E53C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2E53C;
	sub_825952B8(ctx, base);
loc_82E2E53C:
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

__attribute__((alias("__imp__sub_82E2E554"))) PPC_WEAK_FUNC(sub_82E2E554);
PPC_FUNC_IMPL(__imp__sub_82E2E554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2E558"))) PPC_WEAK_FUNC(sub_82E2E558);
PPC_FUNC_IMPL(__imp__sub_82E2E558) {
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
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2e5b4
	if (cr6.eq) goto loc_82E2E5B4;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8784
	ctx.r4.s64 = ctx.r11.s64 + -8784;
	// bl 0x837b0c10
	ctx.lr = 0x82E2E588;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2E594;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e2e5b4
	if (cr6.lt) goto loc_82E2E5B4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2E5B4;
	sub_825952B8(ctx, base);
loc_82E2E5B4:
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

__attribute__((alias("__imp__sub_82E2E5CC"))) PPC_WEAK_FUNC(sub_82E2E5CC);
PPC_FUNC_IMPL(__imp__sub_82E2E5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2E5D0"))) PPC_WEAK_FUNC(sub_82E2E5D0);
PPC_FUNC_IMPL(__imp__sub_82E2E5D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2E5E4"))) PPC_WEAK_FUNC(sub_82E2E5E4);
PPC_FUNC_IMPL(__imp__sub_82E2E5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2E5E8"))) PPC_WEAK_FUNC(sub_82E2E5E8);
PPC_FUNC_IMPL(__imp__sub_82E2E5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2E5F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,408
	ctx.r4.s64 = 408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2E610;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2e624
	if (cr6.eq) goto loc_82E2E624;
	// bl 0x836aa3c0
	ctx.lr = 0x82E2E61C;
	sub_836AA3C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e2e628
	goto loc_82E2E628;
loc_82E2E624:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E2E628:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,352
	ctx.r4.s64 = 352;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E2E63C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2e650
	if (cr6.eq) goto loc_82E2E650;
	// bl 0x836aa5a8
	ctx.lr = 0x82E2E648;
	sub_836AA5A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82e2e654
	goto loc_82E2E654;
loc_82E2E650:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E2E654:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2E66C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2E674"))) PPC_WEAK_FUNC(sub_82E2E674);
PPC_FUNC_IMPL(__imp__sub_82E2E674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2E678"))) PPC_WEAK_FUNC(sub_82E2E678);
PPC_FUNC_IMPL(__imp__sub_82E2E678) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2E694;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82E2E6A8"))) PPC_WEAK_FUNC(sub_82E2E6A8);
PPC_FUNC_IMPL(__imp__sub_82E2E6A8) {
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
	// cmplwi cr6,r4,12
	cr6.compare<uint32_t>(ctx.r4.u32, 12, xer);
	// bgt cr6,0x82e2e768
	if (cr6.gt) goto loc_82E2E768;
	// lis r12,-32029
	ctx.r12.s64 = -2099052544;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6444
	ctx.r12.s64 = ctx.r12.s64 + -6444;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_82E2E768;
	case 1:
		goto loc_82E2E708;
	case 2:
		goto loc_82E2E710;
	case 3:
		goto loc_82E2E718;
	case 4:
		goto loc_82E2E720;
	case 5:
		goto loc_82E2E728;
	case 6:
		goto loc_82E2E730;
	case 7:
		goto loc_82E2E738;
	case 8:
		goto loc_82E2E740;
	case 9:
		goto loc_82E2E748;
	case 10:
		goto loc_82E2E750;
	case 11:
		goto loc_82E2E758;
	case 12:
		goto loc_82E2E760;
	default:
		return;
	}
	// lwz r23,-6296(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + -6296);
	// lwz r23,-6392(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + -6392);
	// lwz r23,-6384(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + -6384);
	// lwz r23,-6376(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + -6376);
	// lwz r23,-6368(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + -6368);
	// lwz r23,-6360(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + -6360);
	// lwz r23,-6352(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + -6352);
	// lwz r23,-6344(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + -6344);
	// lwz r23,-6336(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + -6336);
	// lwz r23,-6328(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + -6328);
	// lwz r23,-6320(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + -6320);
	// lwz r23,-6312(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + -6312);
	// lwz r23,-6304(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + -6304);
loc_82E2E708:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e2e76c
	goto loc_82E2E76C;
loc_82E2E710:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82e2e76c
	goto loc_82E2E76C;
loc_82E2E718:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82e2e76c
	goto loc_82E2E76C;
loc_82E2E720:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82e2e76c
	goto loc_82E2E76C;
loc_82E2E728:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82e2e76c
	goto loc_82E2E76C;
loc_82E2E730:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x82e2e76c
	goto loc_82E2E76C;
loc_82E2E738:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x82e2e76c
	goto loc_82E2E76C;
loc_82E2E740:
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x82e2e76c
	goto loc_82E2E76C;
loc_82E2E748:
	// li r3,9
	ctx.r3.s64 = 9;
	// b 0x82e2e76c
	goto loc_82E2E76C;
loc_82E2E750:
	// li r3,10
	ctx.r3.s64 = 10;
	// b 0x82e2e76c
	goto loc_82E2E76C;
loc_82E2E758:
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x82e2e76c
	goto loc_82E2E76C;
loc_82E2E760:
	// li r3,12
	ctx.r3.s64 = 12;
	// b 0x82e2e76c
	goto loc_82E2E76C;
loc_82E2E768:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E2E76C:
	// bl 0x835fbad8
	ctx.lr = 0x82E2E770;
	sub_835FBAD8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2E774;
	sub_8252E3C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2E784"))) PPC_WEAK_FUNC(sub_82E2E784);
PPC_FUNC_IMPL(__imp__sub_82E2E784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2E788"))) PPC_WEAK_FUNC(sub_82E2E788);
PPC_FUNC_IMPL(__imp__sub_82E2E788) {
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
	// bl 0x82d86078
	ctx.lr = 0x82E2E798;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2e7b0
	if (cr6.eq) goto loc_82E2E7B0;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82E2E7A8;
	sub_831F81F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,304(r3)
	PPC_STORE_U8(ctx.r3.u32 + 304, ctx.r11.u8);
loc_82E2E7B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2E7C0"))) PPC_WEAK_FUNC(sub_82E2E7C0);
PPC_FUNC_IMPL(__imp__sub_82E2E7C0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-8408
	ctx.r10.s64 = ctx.r11.s64 + -8408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82E2E7EC;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2e804
	if (cr6.eq) goto loc_82E2E804;
	// bl 0x82416268
	ctx.lr = 0x82E2E800;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2E804:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2E81C"))) PPC_WEAK_FUNC(sub_82E2E81C);
PPC_FUNC_IMPL(__imp__sub_82E2E81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2E820"))) PPC_WEAK_FUNC(sub_82E2E820);
PPC_FUNC_IMPL(__imp__sub_82E2E820) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,212
	ctx.r4.s64 = 212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2E850;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2e888
	if (cr6.eq) goto loc_82E2E888;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E2E868;
	sub_82E8BA80(ctx, base);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-8288
	ctx.r9.s64 = ctx.r10.s64 + -8288;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82e2e88c
	goto loc_82E2E88C;
loc_82E2E888:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E2E88C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2E8A4"))) PPC_WEAK_FUNC(sub_82E2E8A4);
PPC_FUNC_IMPL(__imp__sub_82E2E8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2E8A8"))) PPC_WEAK_FUNC(sub_82E2E8A8);
PPC_FUNC_IMPL(__imp__sub_82E2E8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2e8b8
	if (cr6.lt) goto loc_82E2E8B8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E2E8B8:
	// b 0x82e2e820
	sub_82E2E820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2E8BC"))) PPC_WEAK_FUNC(sub_82E2E8BC);
PPC_FUNC_IMPL(__imp__sub_82E2E8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2E8C0"))) PPC_WEAK_FUNC(sub_82E2E8C0);
PPC_FUNC_IMPL(__imp__sub_82E2E8C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2E8C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82e8bae0
	ctx.lr = 0x82E2E8D4;
	sub_82E8BAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2e95c
	if (cr6.eq) goto loc_82E2E95C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r29,r11,-8500
	ctx.r29.s64 = ctx.r11.s64 + -8500;
	// addi r3,r3,344
	ctx.r3.s64 = ctx.r3.s64 + 344;
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// bl 0x824208c8
	ctx.lr = 0x82E2E8F8;
	sub_824208C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82E2E908;
	sub_824208C8(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82E2E90C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2e95c
	if (cr6.eq) goto loc_82E2E95C;
	// bl 0x82d860f0
	ctx.lr = 0x82E2E918;
	sub_82D860F0(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,204(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// bl 0x82e2e6a8
	ctx.lr = 0x82E2E928;
	sub_82E2E6A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2E930:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2e930
	if (!cr6.eq) goto loc_82E2E930;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2E954;
	sub_824208C8(ctx, base);
	// lwz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r10,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r10.u32);
loc_82E2E95C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2E968"))) PPC_WEAK_FUNC(sub_82E2E968);
PPC_FUNC_IMPL(__imp__sub_82E2E968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2E970;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2E990;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2e9a4
	if (cr6.eq) goto loc_82E2E9A4;
	// bl 0x836aacc8
	ctx.lr = 0x82E2E99C;
	sub_836AACC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e2e9a8
	goto loc_82E2E9A8;
loc_82E2E9A4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E2E9A8:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,352
	ctx.r4.s64 = 352;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E2E9BC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2e9d0
	if (cr6.eq) goto loc_82E2E9D0;
	// bl 0x836aae70
	ctx.lr = 0x82E2E9C8;
	sub_836AAE70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82e2e9d4
	goto loc_82E2E9D4;
loc_82E2E9D0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E2E9D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2E9EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2E9F4"))) PPC_WEAK_FUNC(sub_82E2E9F4);
PPC_FUNC_IMPL(__imp__sub_82E2E9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2E9F8"))) PPC_WEAK_FUNC(sub_82E2E9F8);
PPC_FUNC_IMPL(__imp__sub_82E2E9F8) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2EA28;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2ea54
	if (cr6.eq) goto loc_82E2EA54;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E2EA40;
	sub_82E8BA80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-8000
	ctx.r10.s64 = ctx.r11.s64 + -8000;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82e2ea58
	goto loc_82E2EA58;
loc_82E2EA54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E2EA58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2EA70"))) PPC_WEAK_FUNC(sub_82E2EA70);
PPC_FUNC_IMPL(__imp__sub_82E2EA70) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-8000
	ctx.r10.s64 = ctx.r11.s64 + -8000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82E2EA9C;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2eab4
	if (cr6.eq) goto loc_82E2EAB4;
	// bl 0x82416268
	ctx.lr = 0x82E2EAB0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2EAB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2EACC"))) PPC_WEAK_FUNC(sub_82E2EACC);
PPC_FUNC_IMPL(__imp__sub_82E2EACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2EAD0"))) PPC_WEAK_FUNC(sub_82E2EAD0);
PPC_FUNC_IMPL(__imp__sub_82E2EAD0) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82E2EAE8;
	sub_82E8BAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d860f0
	ctx.lr = 0x82E2EAF0;
	sub_82D860F0(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r30,r11,-8108
	ctx.r30.s64 = ctx.r11.s64 + -8108;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x824208c8
	ctx.lr = 0x82E2EB0C;
	sub_824208C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82E2EB1C;
	sub_824208C8(ctx, base);
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

__attribute__((alias("__imp__sub_82E2EB38"))) PPC_WEAK_FUNC(sub_82E2EB38);
PPC_FUNC_IMPL(__imp__sub_82E2EB38) {
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
	// bl 0x82d86078
	ctx.lr = 0x82E2EB50;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2eb68
	if (cr6.eq) goto loc_82E2EB68;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x83102db0
	ctx.lr = 0x82E2EB60;
	sub_83102DB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r11.u8);
loc_82E2EB68:
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2ebb0
	if (cr6.eq) goto loc_82E2EBB0;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8100
	ctx.r4.s64 = ctx.r11.s64 + -8100;
	// bl 0x837b0c10
	ctx.lr = 0x82E2EB84;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2EB90;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e2ebb0
	if (cr6.lt) goto loc_82E2EBB0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2EBB0;
	sub_825952B8(ctx, base);
loc_82E2EBB0:
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

__attribute__((alias("__imp__sub_82E2EBC8"))) PPC_WEAK_FUNC(sub_82E2EBC8);
PPC_FUNC_IMPL(__imp__sub_82E2EBC8) {
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
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2ec24
	if (cr6.eq) goto loc_82E2EC24;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8092
	ctx.r4.s64 = ctx.r11.s64 + -8092;
	// bl 0x837b0c10
	ctx.lr = 0x82E2EBF8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2EC04;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e2ec24
	if (cr6.lt) goto loc_82E2EC24;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2EC24;
	sub_825952B8(ctx, base);
loc_82E2EC24:
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

__attribute__((alias("__imp__sub_82E2EC3C"))) PPC_WEAK_FUNC(sub_82E2EC3C);
PPC_FUNC_IMPL(__imp__sub_82E2EC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2EC40"))) PPC_WEAK_FUNC(sub_82E2EC40);
PPC_FUNC_IMPL(__imp__sub_82E2EC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2EC48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2EC68;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2ec7c
	if (cr6.eq) goto loc_82E2EC7C;
	// bl 0x836ab888
	ctx.lr = 0x82E2EC74;
	sub_836AB888(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e2ec80
	goto loc_82E2EC80;
loc_82E2EC7C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E2EC80:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,424
	ctx.r4.s64 = 424;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E2EC94;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2eca8
	if (cr6.eq) goto loc_82E2ECA8;
	// bl 0x836aba30
	ctx.lr = 0x82E2ECA0;
	sub_836ABA30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82e2ecac
	goto loc_82E2ECAC;
loc_82E2ECA8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E2ECAC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2ECC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2ECCC"))) PPC_WEAK_FUNC(sub_82E2ECCC);
PPC_FUNC_IMPL(__imp__sub_82E2ECCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2ECD0"))) PPC_WEAK_FUNC(sub_82E2ECD0);
PPC_FUNC_IMPL(__imp__sub_82E2ECD0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7712
	ctx.r10.s64 = ctx.r11.s64 + -7712;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82E2ECFC;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2ed14
	if (cr6.eq) goto loc_82E2ED14;
	// bl 0x82416268
	ctx.lr = 0x82E2ED10;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2ED14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2ED2C"))) PPC_WEAK_FUNC(sub_82E2ED2C);
PPC_FUNC_IMPL(__imp__sub_82E2ED2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2ED30"))) PPC_WEAK_FUNC(sub_82E2ED30);
PPC_FUNC_IMPL(__imp__sub_82E2ED30) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,228
	ctx.r4.s64 = 228;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2ED60;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2edac
	if (cr6.eq) goto loc_82E2EDAC;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E2ED78;
	sub_82E8BA80(ctx, base);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-7712
	ctx.r9.s64 = ctx.r10.s64 + -7712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
	// b 0x82e2edb0
	goto loc_82E2EDB0;
loc_82E2EDAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E2EDB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2EDC8"))) PPC_WEAK_FUNC(sub_82E2EDC8);
PPC_FUNC_IMPL(__imp__sub_82E2EDC8) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82E2EDE0;
	sub_82E8BAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d860f0
	ctx.lr = 0x82E2EDE8;
	sub_82D860F0(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r30,r11,-7828
	ctx.r30.s64 = ctx.r11.s64 + -7828;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x824208c8
	ctx.lr = 0x82E2EE04;
	sub_824208C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82E2EE14;
	sub_824208C8(ctx, base);
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

__attribute__((alias("__imp__sub_82E2EE30"))) PPC_WEAK_FUNC(sub_82E2EE30);
PPC_FUNC_IMPL(__imp__sub_82E2EE30) {
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
	// bl 0x82e8bae8
	ctx.lr = 0x82E2EE4C;
	sub_82E8BAE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e2ee74
	if (!cr6.eq) goto loc_82E2EE74;
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2ef8c
	if (cr6.eq) goto loc_82E2EF8C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r11,r11,-7812
	ctx.r11.s64 = ctx.r11.s64 + -7812;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x82e2ef70
	goto loc_82E2EF70;
loc_82E2EE74:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// bl 0x835fcbe8
	ctx.lr = 0x82E2EEA4;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2EEA8;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r30,352
	ctx.r3.s64 = ctx.r30.s64 + 352;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82E2EEB4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2eeb4
	if (!cr6.eq) goto loc_82E2EEB4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E2EEDC;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r8.u8);
	// bl 0x835fcbe8
	ctx.lr = 0x82E2EEF4;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2EEF8;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r30,380
	ctx.r3.s64 = ctx.r30.s64 + 380;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82E2EF04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2ef04
	if (!cr6.eq) goto loc_82E2EF04;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E2EF2C;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// lbz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r7.u8);
	// lwz r6,408(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// stw r6,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r6.u32);
	// lwz r5,412(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// stw r5,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r5.u32);
	// lwz r4,416(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// lwz r3,420(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// stw r3,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// beq cr6,0x82e2ef8c
	if (cr6.eq) goto loc_82E2EF8C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r4,r11,-7812
	ctx.r4.s64 = ctx.r11.s64 + -7812;
loc_82E2EF70:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82E2EF78;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2EF84;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82E2EF8C;
	sub_8387E8E0(ctx, base);
loc_82E2EF8C:
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

__attribute__((alias("__imp__sub_82E2EFA8"))) PPC_WEAK_FUNC(sub_82E2EFA8);
PPC_FUNC_IMPL(__imp__sub_82E2EFA8) {
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
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2f004
	if (cr6.eq) goto loc_82E2F004;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7804
	ctx.r4.s64 = ctx.r11.s64 + -7804;
	// bl 0x837b0c10
	ctx.lr = 0x82E2EFD8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2EFE4;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e2f004
	if (cr6.lt) goto loc_82E2F004;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2F004;
	sub_825952B8(ctx, base);
loc_82E2F004:
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

__attribute__((alias("__imp__sub_82E2F01C"))) PPC_WEAK_FUNC(sub_82E2F01C);
PPC_FUNC_IMPL(__imp__sub_82E2F01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2F020"))) PPC_WEAK_FUNC(sub_82E2F020);
PPC_FUNC_IMPL(__imp__sub_82E2F020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2F028;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,408
	ctx.r4.s64 = 408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2F048;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2f05c
	if (cr6.eq) goto loc_82E2F05C;
	// bl 0x836ad7e0
	ctx.lr = 0x82E2F054;
	sub_836AD7E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e2f060
	goto loc_82E2F060;
loc_82E2F05C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E2F060:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,576
	ctx.r4.s64 = 576;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E2F074;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2f088
	if (cr6.eq) goto loc_82E2F088;
	// bl 0x836ad9c8
	ctx.lr = 0x82E2F080;
	sub_836AD9C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82e2f08c
	goto loc_82E2F08C;
loc_82E2F088:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E2F08C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2F0A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2F0AC"))) PPC_WEAK_FUNC(sub_82E2F0AC);
PPC_FUNC_IMPL(__imp__sub_82E2F0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2F0B0"))) PPC_WEAK_FUNC(sub_82E2F0B0);
PPC_FUNC_IMPL(__imp__sub_82E2F0B0) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2F0E0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2f10c
	if (cr6.eq) goto loc_82E2F10C;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E2F0F8;
	sub_82E8BA80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-7424
	ctx.r10.s64 = ctx.r11.s64 + -7424;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82e2f110
	goto loc_82E2F110;
loc_82E2F10C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E2F110:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2F128"))) PPC_WEAK_FUNC(sub_82E2F128);
PPC_FUNC_IMPL(__imp__sub_82E2F128) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7424
	ctx.r10.s64 = ctx.r11.s64 + -7424;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82E2F154;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2f16c
	if (cr6.eq) goto loc_82E2F16C;
	// bl 0x82416268
	ctx.lr = 0x82E2F168;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2F16C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2F184"))) PPC_WEAK_FUNC(sub_82E2F184);
PPC_FUNC_IMPL(__imp__sub_82E2F184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2F188"))) PPC_WEAK_FUNC(sub_82E2F188);
PPC_FUNC_IMPL(__imp__sub_82E2F188) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82E2F1A0;
	sub_82E8BAE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d860f0
	ctx.lr = 0x82E2F1A8;
	sub_82D860F0(ctx, base);
	// stw r3,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r3.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r31,r11,-7540
	ctx.r31.s64 = ctx.r11.s64 + -7540;
	// addi r3,r30,344
	ctx.r3.s64 = ctx.r30.s64 + 344;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x824208c8
	ctx.lr = 0x82E2F1C4;
	sub_824208C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r30,316
	ctx.r3.s64 = ctx.r30.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82E2F1D4;
	sub_824208C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x82E2F1DC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2f204
	if (cr6.eq) goto loc_82E2F204;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x83102db0
	ctx.lr = 0x82E2F1EC;
	sub_83102DB0(ctx, base);
	// lbz r11,109(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 109);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2f1fc
	if (cr6.eq) goto loc_82E2F1FC;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82E2F1FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r11.u8);
loc_82E2F204:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2f238
	if (cr6.eq) goto loc_82E2F238;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fcbe8
	ctx.lr = 0x82E2F218;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2F21C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2F224:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2f224
	if (!cr6.eq) goto loc_82E2F224;
	// b 0x82e2f25c
	goto loc_82E2F25C;
loc_82E2F238:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fcbe8
	ctx.lr = 0x82E2F240;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2F244;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2F24C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2f24c
	if (!cr6.eq) goto loc_82E2F24C;
loc_82E2F25C:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,376
	ctx.r3.s64 = ctx.r30.s64 + 376;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2F270;
	sub_824208C8(ctx, base);
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

__attribute__((alias("__imp__sub_82E2F28C"))) PPC_WEAK_FUNC(sub_82E2F28C);
PPC_FUNC_IMPL(__imp__sub_82E2F28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2F290"))) PPC_WEAK_FUNC(sub_82E2F290);
PPC_FUNC_IMPL(__imp__sub_82E2F290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82E2F298;
	__savegprlr_23(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82E2F2A4;
	sub_82E8BAE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82E2F2AC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2f684
	if (cr6.eq) goto loc_82E2F684;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e2f684
	if (cr6.eq) goto loc_82E2F684;
	// lwz r26,112(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da73d0
	ctx.lr = 0x82E2F2C8;
	sub_82DA73D0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82da8d18
	ctx.lr = 0x82E2F2D0;
	sub_82DA8D18(ctx, base);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// addi r4,r31,348
	ctx.r4.s64 = ctx.r31.s64 + 348;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2f2e4
	if (cr6.lt) goto loc_82E2F2E4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82E2F2E4:
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x8259d6c0
	ctx.lr = 0x82E2F2EC;
	sub_8259D6C0(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82E2F2F0;
	sub_82D860F0(ctx, base);
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// ld r5,376(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 376);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// std r5,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r5.u64);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e87a10
	ctx.lr = 0x82E2F308;
	sub_82E87A10(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83102db0
	ctx.lr = 0x82E2F310;
	sub_83102DB0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x82da8e68
	ctx.lr = 0x82E2F318;
	sub_82DA8E68(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r31,496
	ctx.r29.s64 = ctx.r31.s64 + 496;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r24,15
	ctx.r24.s64 = 15;
loc_82E2F32C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2f340
	if (cr6.lt) goto loc_82E2F340;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82e2f344
	goto loc_82E2F344;
loc_82E2F340:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82E2F344:
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
loc_82E2F354:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2f354
	if (!cr6.eq) goto loc_82E2F354;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2F378;
	sub_824208C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835fc9b8
	ctx.lr = 0x82E2F380;
	sub_835FC9B8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2F384;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2F38C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2f38c
	if (!cr6.eq) goto loc_82E2F38C;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E2F3B8;
	sub_827A8810(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e2f3f0
	if (cr6.eq) goto loc_82E2F3F0;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2f3d4
	if (cr6.lt) goto loc_82E2F3D4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82E2F3D4;
	sub_8386D088(ctx, base);
loc_82E2F3D4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// cmpwi cr6,r30,13
	cr6.compare<int32_t>(ctx.r30.s32, 13, xer);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// blt cr6,0x82e2f32c
	if (cr6.lt) goto loc_82E2F32C;
	// b 0x82e2f410
	goto loc_82E2F410;
loc_82E2F3F0:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2f404
	if (cr6.lt) goto loc_82E2F404;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82E2F404;
	sub_8386D088(ctx, base);
loc_82E2F404:
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
loc_82E2F410:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83102db0
	ctx.lr = 0x82E2F418;
	sub_83102DB0(ctx, base);
	// stw r28,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r28.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83102db0
	ctx.lr = 0x82E2F424;
	sub_83102DB0(ctx, base);
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x83102db0
	ctx.lr = 0x82E2F438;
	sub_83102DB0(ctx, base);
	// lwz r9,528(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r9,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r9.u32);
	// bl 0x83102db0
	ctx.lr = 0x82E2F44C;
	sub_83102DB0(ctx, base);
	// lwz r7,532(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r7,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r7.u32);
	// bl 0x83102db0
	ctx.lr = 0x82E2F460;
	sub_83102DB0(ctx, base);
	// lwz r5,536(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r5,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r5.u32);
	// bl 0x82da8ac8
	ctx.lr = 0x82E2F474;
	sub_82DA8AC8(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r6,544(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// lwz r5,548(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// lwz r4,540(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// bl 0x82da8a50
	ctx.lr = 0x82E2F488;
	sub_82DA8A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82da8a90
	ctx.lr = 0x82E2F494;
	sub_82DA8A90(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82da8af0
	ctx.lr = 0x82E2F49C;
	sub_82DA8AF0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82da8b10
	ctx.lr = 0x82E2F4A4;
	sub_82DA8B10(ctx, base);
	// lwz r3,552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// addi r28,r31,560
	ctx.r28.s64 = ctx.r31.s64 + 560;
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// lwz r10,560(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// mulli r10,r10,156
	ctx.r10.s64 = ctx.r10.s64 * 156;
	// extsw r29,r11
	ctx.r29.s64 = ctx.r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x82e2f5e0
	if (cr6.eq) goto loc_82E2F5E0;
	// addi r31,r29,32
	ctx.r31.s64 = ctx.r29.s64 + 32;
loc_82E2F4D4:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835fbec8
	ctx.lr = 0x82E2F4F8;
	sub_835FBEC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2F4FC;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2F504:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2f504
	if (!cr6.eq) goto loc_82E2F504;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r31,-16
	ctx.r30.s64 = ctx.r31.s64 + -16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a8810
	ctx.lr = 0x82E2F534;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e2f544
	if (!cr6.eq) goto loc_82E2F544;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// b 0x82e2f598
	goto loc_82E2F598;
loc_82E2F544:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbec8
	ctx.lr = 0x82E2F54C;
	sub_835FBEC8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2F550;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2F558:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2f558
	if (!cr6.eq) goto loc_82E2F558;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E2F584;
	sub_827A8810(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
loc_82E2F598:
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,-20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x83102db0
	ctx.lr = 0x82E2F5B8;
	sub_83102DB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82da74f8
	ctx.lr = 0x82E2F5C0;
	sub_82DA74F8(ctx, base);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,156
	ctx.r29.s64 = ctx.r29.s64 + 156;
	// mulli r10,r8,156
	ctx.r10.s64 = ctx.r8.s64 * 156;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r31,156
	ctx.r31.s64 = ctx.r31.s64 + 156;
	// cmplw cr6,r29,r7
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, xer);
	// bne cr6,0x82e2f4d4
	if (!cr6.eq) goto loc_82E2F4D4;
loc_82E2F5E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83102db0
	ctx.lr = 0x82E2F5E8;
	sub_83102DB0(ctx, base);
	// addi r31,r3,68
	ctx.r31.s64 = ctx.r3.s64 + 68;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8a90
	ctx.lr = 0x82E2F5F8;
	sub_82DA8A90(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lbz r9,112(r23)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + 112);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2f670
	if (cr6.eq) goto loc_82E2F670;
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
	// addi r4,r11,-7524
	ctx.r4.s64 = ctx.r11.s64 + -7524;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cc28
	ctx.lr = 0x82E2F63C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2F648;
	sub_82E88020(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e2f664
	if (cr6.lt) goto loc_82E2F664;
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82E2F664;
	sub_825952B8(ctx, base);
loc_82E2F664:
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
loc_82E2F670:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82da8c38
	ctx.lr = 0x82E2F678;
	sub_82DA8C38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82E2F684:
	// lbz r11,112(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2f6b8
	if (cr6.eq) goto loc_82E2F6B8;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-7524
	ctx.r11.s64 = ctx.r11.s64 + -7524;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x82E2F6A4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2F6B0;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82E2F6B8;
	sub_8387E8E0(ctx, base);
loc_82E2F6B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2F6C4"))) PPC_WEAK_FUNC(sub_82E2F6C4);
PPC_FUNC_IMPL(__imp__sub_82E2F6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2F6C8"))) PPC_WEAK_FUNC(sub_82E2F6C8);
PPC_FUNC_IMPL(__imp__sub_82E2F6C8) {
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
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2f724
	if (cr6.eq) goto loc_82E2F724;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7516
	ctx.r4.s64 = ctx.r11.s64 + -7516;
	// bl 0x837b0c10
	ctx.lr = 0x82E2F6F8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2F704;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e2f724
	if (cr6.lt) goto loc_82E2F724;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E2F724;
	sub_825952B8(ctx, base);
loc_82E2F724:
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

__attribute__((alias("__imp__sub_82E2F73C"))) PPC_WEAK_FUNC(sub_82E2F73C);
PPC_FUNC_IMPL(__imp__sub_82E2F73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2F740"))) PPC_WEAK_FUNC(sub_82E2F740);
PPC_FUNC_IMPL(__imp__sub_82E2F740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2F748;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2F768;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2f77c
	if (cr6.eq) goto loc_82E2F77C;
	// bl 0x836ae6e0
	ctx.lr = 0x82E2F774;
	sub_836AE6E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e2f780
	goto loc_82E2F780;
loc_82E2F77C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E2F780:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E2F794;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2f7a8
	if (cr6.eq) goto loc_82E2F7A8;
	// bl 0x836ae888
	ctx.lr = 0x82E2F7A0;
	sub_836AE888(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82e2f7ac
	goto loc_82E2F7AC;
loc_82E2F7A8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E2F7AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2F7C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2F7CC"))) PPC_WEAK_FUNC(sub_82E2F7CC);
PPC_FUNC_IMPL(__imp__sub_82E2F7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2F7D0"))) PPC_WEAK_FUNC(sub_82E2F7D0);
PPC_FUNC_IMPL(__imp__sub_82E2F7D0) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2F800;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2f82c
	if (cr6.eq) goto loc_82E2F82C;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E2F818;
	sub_82E8BA80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-7152
	ctx.r10.s64 = ctx.r11.s64 + -7152;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82e2f830
	goto loc_82E2F830;
loc_82E2F82C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E2F830:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2F848"))) PPC_WEAK_FUNC(sub_82E2F848);
PPC_FUNC_IMPL(__imp__sub_82E2F848) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7152
	ctx.r10.s64 = ctx.r11.s64 + -7152;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82E2F874;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2f88c
	if (cr6.eq) goto loc_82E2F88C;
	// bl 0x82416268
	ctx.lr = 0x82E2F888;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2F88C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2F8A4"))) PPC_WEAK_FUNC(sub_82E2F8A4);
PPC_FUNC_IMPL(__imp__sub_82E2F8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2F8A8"))) PPC_WEAK_FUNC(sub_82E2F8A8);
PPC_FUNC_IMPL(__imp__sub_82E2F8A8) {
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
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x835e7af0
	ctx.lr = 0x82E2F8CC;
	sub_835E7AF0(ctx, base);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82E2F900"))) PPC_WEAK_FUNC(sub_82E2F900);
PPC_FUNC_IMPL(__imp__sub_82E2F900) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82E2F918;
	sub_82E8BAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d860f0
	ctx.lr = 0x82E2F920;
	sub_82D860F0(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r30,r11,-7252
	ctx.r30.s64 = ctx.r11.s64 + -7252;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x824208c8
	ctx.lr = 0x82E2F93C;
	sub_824208C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82E2F94C;
	sub_824208C8(ctx, base);
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

__attribute__((alias("__imp__sub_82E2F968"))) PPC_WEAK_FUNC(sub_82E2F968);
PPC_FUNC_IMPL(__imp__sub_82E2F968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82E2F970;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82E2F97C;
	sub_82E8BAE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82E2F984;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2fb10
	if (cr6.eq) goto loc_82E2FB10;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e2fb10
	if (cr6.eq) goto loc_82E2FB10;
	// lwz r25,112(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e2f8a8
	ctx.lr = 0x82E2F9A0;
	sub_82E2F8A8(ctx, base);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r9,360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// addi r28,r31,352
	ctx.r28.s64 = ctx.r31.s64 + 352;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r31,r9
	ctx.r31.s64 = ctx.r9.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e2fb40
	if (cr6.eq) goto loc_82E2FB40;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
loc_82E2F9D0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
loc_82E2F9E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241c348
	ctx.lr = 0x82E2F9EC;
	sub_8241C348(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
loc_82E2FA00:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2fa00
	if (!cr6.eq) goto loc_82E2FA00;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2FA24;
	sub_824208C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835fc9b8
	ctx.lr = 0x82E2FA2C;
	sub_835FC9B8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2FA30;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2FA38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2fa38
	if (!cr6.eq) goto loc_82E2FA38;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E2FA64;
	sub_827A8810(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e2fa9c
	if (cr6.eq) goto loc_82E2FA9C;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2fa80
	if (cr6.lt) goto loc_82E2FA80;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8386d088
	ctx.lr = 0x82E2FA80;
	sub_8386D088(ctx, base);
loc_82E2FA80:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmpwi cr6,r30,13
	cr6.compare<int32_t>(ctx.r30.s32, 13, xer);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// blt cr6,0x82e2f9e4
	if (cr6.lt) goto loc_82E2F9E4;
	// b 0x82e2fabc
	goto loc_82E2FABC;
loc_82E2FA9C:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2fab0
	if (cr6.lt) goto loc_82E2FAB0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8386d088
	ctx.lr = 0x82E2FAB0;
	sub_8386D088(ctx, base);
loc_82E2FAB0:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
loc_82E2FABC:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82da71a0
	ctx.lr = 0x82E2FAE0;
	sub_82DA71A0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x82e2f9d0
	if (!cr6.eq) goto loc_82E2F9D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82E2FB10:
	// lbz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e2fb40
	if (cr6.eq) goto loc_82E2FB40;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-7244
	ctx.r4.s64 = ctx.r11.s64 + -7244;
	// bl 0x837b0c10
	ctx.lr = 0x82E2FB2C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E2FB38;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82E2FB40;
	sub_8387E8E0(ctx, base);
loc_82E2FB40:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2FB4C"))) PPC_WEAK_FUNC(sub_82E2FB4C);
PPC_FUNC_IMPL(__imp__sub_82E2FB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2FB50"))) PPC_WEAK_FUNC(sub_82E2FB50);
PPC_FUNC_IMPL(__imp__sub_82E2FB50) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2FB7C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2fba0
	if (cr6.eq) goto loc_82E2FBA0;
	// bl 0x836b0190
	ctx.lr = 0x82E2FB88;
	sub_836B0190(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
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
loc_82E2FBA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E2FBBC"))) PPC_WEAK_FUNC(sub_82E2FBBC);
PPC_FUNC_IMPL(__imp__sub_82E2FBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2FBC0"))) PPC_WEAK_FUNC(sub_82E2FBC0);
PPC_FUNC_IMPL(__imp__sub_82E2FBC0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-6576
	ctx.r10.s64 = ctx.r11.s64 + -6576;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82eac080
	ctx.lr = 0x82E2FBEC;
	sub_82EAC080(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e2fc04
	if (cr6.eq) goto loc_82E2FC04;
	// bl 0x82416268
	ctx.lr = 0x82E2FC00;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E2FC04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2FC1C"))) PPC_WEAK_FUNC(sub_82E2FC1C);
PPC_FUNC_IMPL(__imp__sub_82E2FC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2FC20"))) PPC_WEAK_FUNC(sub_82E2FC20);
PPC_FUNC_IMPL(__imp__sub_82E2FC20) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,324
	ctx.r4.s64 = 324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E2FC50;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e2fc78
	if (cr6.eq) goto loc_82E2FC78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82eabfb0
	ctx.lr = 0x82E2FC64;
	sub_82EABFB0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-6576
	ctx.r10.s64 = ctx.r11.s64 + -6576;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82e2fc7c
	goto loc_82E2FC7C;
loc_82E2FC78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E2FC7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2FC94"))) PPC_WEAK_FUNC(sub_82E2FC94);
PPC_FUNC_IMPL(__imp__sub_82E2FC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2FC98"))) PPC_WEAK_FUNC(sub_82E2FC98);
PPC_FUNC_IMPL(__imp__sub_82E2FC98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E2FCA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82eabca8
	ctx.lr = 0x82E2FCAC;
	sub_82EABCA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e2fd08
	if (!cr6.eq) goto loc_82E2FD08;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-6708
	ctx.r11.s64 = ctx.r11.s64 + -6708;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x824209f8
	ctx.lr = 0x82E2FCCC;
	sub_824209F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E2FCE0;
	sub_82E880B8(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r10,6
	ctx.r10.s64 = 6;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// blt cr6,0x82e2fcfc
	if (cr6.lt) goto loc_82E2FCFC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E2FCFC;
	sub_8386D088(ctx, base);
loc_82E2FCFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E2FD08:
	// bl 0x82d86078
	ctx.lr = 0x82E2FD0C;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e2fd58
	if (!cr6.eq) goto loc_82E2FD58;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-6708
	ctx.r4.s64 = ctx.r11.s64 + -6708;
	// bl 0x824209f8
	ctx.lr = 0x82E2FD28;
	sub_824209F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E2FD3C;
	sub_82E880B8(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// bl 0x8241fe60
	ctx.lr = 0x82E2FD4C;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E2FD58:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82c52918
	ctx.lr = 0x82E2FD64;
	sub_82C52918(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ddae98
	ctx.lr = 0x82E2FD70;
	sub_82DDAE98(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x835fc9b8
	ctx.lr = 0x82E2FD80;
	sub_835FC9B8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2FD84;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2FD8C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2fd8c
	if (!cr6.eq) goto loc_82E2FD8C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2FDB0;
	sub_824208C8(ctx, base);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r31,316
	ctx.r11.s64 = ctx.r31.s64 + 316;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e2fdc4
	if (cr6.lt) goto loc_82E2FDC4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E2FDC4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eac690
	ctx.lr = 0x82E2FDD0;
	sub_82EAC690(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82da8c38
	ctx.lr = 0x82E2FDD8;
	sub_82DA8C38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2FDE4"))) PPC_WEAK_FUNC(sub_82E2FDE4);
PPC_FUNC_IMPL(__imp__sub_82E2FDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E2FDE8"))) PPC_WEAK_FUNC(sub_82E2FDE8);
PPC_FUNC_IMPL(__imp__sub_82E2FDE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82E2FDF0;
	__savegprlr_21(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x82eabcc0
	ctx.lr = 0x82E2FDFC;
	sub_82EABCC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e3026c
	if (cr6.eq) goto loc_82E3026C;
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e3026c
	if (cr6.eq) goto loc_82E3026C;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// addi r23,r3,352
	ctx.r23.s64 = ctx.r3.s64 + 352;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e3026c
	if (cr6.eq) goto loc_82E3026C;
	// bl 0x82d86078
	ctx.lr = 0x82E2FE28;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e2fe74
	if (!cr6.eq) goto loc_82E2FE74;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-6676
	ctx.r4.s64 = ctx.r11.s64 + -6676;
	// bl 0x824209f8
	ctx.lr = 0x82E2FE44;
	sub_824209F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E2FE58;
	sub_82E880B8(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r10,72(r21)
	PPC_STORE_U32(ctx.r21.u32 + 72, ctx.r10.u32);
	// bl 0x8241fe60
	ctx.lr = 0x82E2FE68;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82E2FE74:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r22,92(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x835fd898
	ctx.lr = 0x82E2FE80;
	sub_835FD898(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2FE84;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x82450880
	ctx.lr = 0x82E2FE90;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e30260
	if (cr6.eq) goto loc_82E30260;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// std r11,112(r22)
	PPC_STORE_U64(ctx.r22.u32 + 112, ctx.r11.u64);
	// lwz r10,368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// stw r10,120(r22)
	PPC_STORE_U32(ctx.r22.u32 + 120, ctx.r10.u32);
	// bl 0x82ddb1b0
	ctx.lr = 0x82E2FEB4;
	sub_82DDB1B0(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r24,360(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplw cr6,r24,r7
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r7.u32, xer);
	// beq cr6,0x82e30260
	if (cr6.eq) goto loc_82E30260;
	// addi r31,r24,172
	ctx.r31.s64 = ctx.r24.s64 + 172;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,15
	ctx.r25.s64 = 15;
loc_82E2FEE4:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82c55880
	ctx.lr = 0x82E2FEEC;
	sub_82C55880(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,-148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// blt cr6,0x82e2ff08
	if (cr6.lt) goto loc_82E2FF08;
	// lwz r4,-168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -168);
	// b 0x82e2ff0c
	goto loc_82E2FF0C;
loc_82E2FF08:
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
loc_82E2FF0C:
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x8259d6c0
	ctx.lr = 0x82E2FF14;
	sub_8259D6C0(ctx, base);
	// ld r5,-140(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + -140);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// std r5,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r5.u64);
	// bl 0x82e87a10
	ctx.lr = 0x82E2FF28;
	sub_82E87A10(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r31,-20
	ctx.r29.s64 = ctx.r31.s64 + -20;
	// stw r11,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r11.u32);
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
loc_82E2FF44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2ff58
	if (cr6.lt) goto loc_82E2FF58;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82e2ff5c
	goto loc_82E2FF5C;
loc_82E2FF58:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82E2FF5C:
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
loc_82E2FF6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2ff6c
	if (!cr6.eq) goto loc_82E2FF6C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E2FF90;
	sub_824208C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835fc9b8
	ctx.lr = 0x82E2FF98;
	sub_835FC9B8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E2FF9C;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E2FFA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e2ffa4
	if (!cr6.eq) goto loc_82E2FFA4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E2FFD0;
	sub_827A8810(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e30008
	if (cr6.eq) goto loc_82E30008;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e2ffec
	if (cr6.lt) goto loc_82E2FFEC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82E2FFEC;
	sub_8386D088(ctx, base);
loc_82E2FFEC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// cmpwi cr6,r30,13
	cr6.compare<int32_t>(ctx.r30.s32, 13, xer);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// blt cr6,0x82e2ff44
	if (cr6.lt) goto loc_82E2FF44;
	// b 0x82e30028
	goto loc_82E30028;
loc_82E30008:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e3001c
	if (cr6.lt) goto loc_82E3001C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82E3001C;
	sub_8386D088(ctx, base);
loc_82E3001C:
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
loc_82E30028:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// blt cr6,0x82e30048
	if (cr6.lt) goto loc_82E30048;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82e3004c
	goto loc_82E3004C;
loc_82E30048:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
loc_82E3004C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E30050:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e30050
	if (!cr6.eq) goto loc_82E30050;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E30074;
	sub_8259CC28(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e30088
	if (cr6.lt) goto loc_82E30088;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// b 0x82e3008c
	goto loc_82E3008C;
loc_82E30088:
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
loc_82E3008C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E30090:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e30090
	if (!cr6.eq) goto loc_82E30090;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E300B4;
	sub_8259CC28(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e300c8
	if (cr6.lt) goto loc_82E300C8;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// b 0x82e300cc
	goto loc_82E300CC;
loc_82E300C8:
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
loc_82E300CC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E300D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e300d0
	if (!cr6.eq) goto loc_82E300D0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E300F4;
	sub_8259CC28(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r6,124(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82da8a50
	ctx.lr = 0x82E30108;
	sub_82DA8A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82da8a90
	ctx.lr = 0x82E30114;
	sub_82DA8A90(ctx, base);
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82da8af0
	ctx.lr = 0x82E3011C;
	sub_82DA8AF0(ctx, base);
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82da8b10
	ctx.lr = 0x82E30124;
	sub_82DA8B10(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r28,r31,112
	ctx.r28.s64 = ctx.r31.s64 + 112;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r31,92
	ctx.r29.s64 = ctx.r31.s64 + 92;
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
loc_82E3013C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e30150
	if (cr6.lt) goto loc_82E30150;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82e30154
	goto loc_82E30154;
loc_82E30150:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82E30154:
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
loc_82E30164:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e30164
	if (!cr6.eq) goto loc_82E30164;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E30188;
	sub_824208C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835fcb08
	ctx.lr = 0x82E30190;
	sub_835FCB08(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E30194;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E3019C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e3019c
	if (!cr6.eq) goto loc_82E3019C;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E301C8;
	sub_827A8810(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e30200
	if (cr6.eq) goto loc_82E30200;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e301e4
	if (cr6.lt) goto loc_82E301E4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E301E4;
	sub_8386D088(ctx, base);
loc_82E301E4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// blt cr6,0x82e3013c
	if (cr6.lt) goto loc_82E3013C;
	// b 0x82e30220
	goto loc_82E30220;
loc_82E30200:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e30214
	if (cr6.lt) goto loc_82E30214;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E30214;
	sub_8386D088(ctx, base);
loc_82E30214:
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
loc_82E30220:
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ddb4e8
	ctx.lr = 0x82E30230;
	sub_82DDB4E8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r24,r24,320
	ctx.r24.s64 = ctx.r24.s64 + 320;
	// addi r31,r31,320
	ctx.r31.s64 = ctx.r31.s64 + 320;
	// bl 0x82c557a0
	ctx.lr = 0x82E30240;
	sub_82C557A0(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e2fee4
	if (!cr6.eq) goto loc_82E2FEE4;
loc_82E30260:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82E3026C:
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// addi r11,r10,-6676
	ctx.r11.s64 = ctx.r10.s64 + -6676;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x824208c8
	ctx.lr = 0x82E30298;
	sub_824208C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E302AC;
	sub_82E880B8(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r9,6
	ctx.r9.s64 = 6;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r9,72(r21)
	PPC_STORE_U32(ctx.r21.u32 + 72, ctx.r9.u32);
	// blt cr6,0x82e302c8
	if (cr6.lt) goto loc_82E302C8;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82E302C8;
	sub_8386D088(ctx, base);
loc_82E302C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E302D4"))) PPC_WEAK_FUNC(sub_82E302D4);
PPC_FUNC_IMPL(__imp__sub_82E302D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E302D8"))) PPC_WEAK_FUNC(sub_82E302D8);
PPC_FUNC_IMPL(__imp__sub_82E302D8) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E30304;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e30328
	if (cr6.eq) goto loc_82E30328;
	// bl 0x836b18b0
	ctx.lr = 0x82E30310;
	sub_836B18B0(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
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
loc_82E30328:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E30344"))) PPC_WEAK_FUNC(sub_82E30344);
PPC_FUNC_IMPL(__imp__sub_82E30344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E30348"))) PPC_WEAK_FUNC(sub_82E30348);
PPC_FUNC_IMPL(__imp__sub_82E30348) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-6016
	ctx.r10.s64 = ctx.r11.s64 + -6016;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82eac080
	ctx.lr = 0x82E30374;
	sub_82EAC080(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e3038c
	if (cr6.eq) goto loc_82E3038C;
	// bl 0x82416268
	ctx.lr = 0x82E30388;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E3038C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E303A4"))) PPC_WEAK_FUNC(sub_82E303A4);
PPC_FUNC_IMPL(__imp__sub_82E303A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E303A8"))) PPC_WEAK_FUNC(sub_82E303A8);
PPC_FUNC_IMPL(__imp__sub_82E303A8) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,324
	ctx.r4.s64 = 324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E303D8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e30400
	if (cr6.eq) goto loc_82E30400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82eabfb0
	ctx.lr = 0x82E303EC;
	sub_82EABFB0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-6016
	ctx.r10.s64 = ctx.r11.s64 + -6016;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82e30404
	goto loc_82E30404;
loc_82E30400:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E30404:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3041C"))) PPC_WEAK_FUNC(sub_82E3041C);
PPC_FUNC_IMPL(__imp__sub_82E3041C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E30420"))) PPC_WEAK_FUNC(sub_82E30420);
PPC_FUNC_IMPL(__imp__sub_82E30420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E30428;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82eabca8
	ctx.lr = 0x82E30434;
	sub_82EABCA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e30490
	if (!cr6.eq) goto loc_82E30490;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-6148
	ctx.r11.s64 = ctx.r11.s64 + -6148;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x824209f8
	ctx.lr = 0x82E30454;
	sub_824209F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E30468;
	sub_82E880B8(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r10,6
	ctx.r10.s64 = 6;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// blt cr6,0x82e30484
	if (cr6.lt) goto loc_82E30484;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E30484;
	sub_8386D088(ctx, base);
loc_82E30484:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E30490:
	// bl 0x82d86078
	ctx.lr = 0x82E30494;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e304e0
	if (!cr6.eq) goto loc_82E304E0;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-6148
	ctx.r4.s64 = ctx.r11.s64 + -6148;
	// bl 0x824209f8
	ctx.lr = 0x82E304B0;
	sub_824209F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E304C4;
	sub_82E880B8(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// bl 0x8241fe60
	ctx.lr = 0x82E304D4;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E304E0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82c52918
	ctx.lr = 0x82E304EC;
	sub_82C52918(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ddae98
	ctx.lr = 0x82E304F8;
	sub_82DDAE98(ctx, base);
	// ld r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// std r11,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r11.u64);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x835fc9b8
	ctx.lr = 0x82E30508;
	sub_835FC9B8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E3050C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E30514:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e30514
	if (!cr6.eq) goto loc_82E30514;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E30538;
	sub_824208C8(ctx, base);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r31,316
	ctx.r11.s64 = ctx.r31.s64 + 316;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e3054c
	if (cr6.lt) goto loc_82E3054C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E3054C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eac690
	ctx.lr = 0x82E30558;
	sub_82EAC690(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82da8c38
	ctx.lr = 0x82E30560;
	sub_82DA8C38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E3056C"))) PPC_WEAK_FUNC(sub_82E3056C);
PPC_FUNC_IMPL(__imp__sub_82E3056C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E30570"))) PPC_WEAK_FUNC(sub_82E30570);
PPC_FUNC_IMPL(__imp__sub_82E30570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82E30578;
	__savegprlr_20(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x82eabcc0
	ctx.lr = 0x82E30584;
	sub_82EABCC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e30a54
	if (cr6.eq) goto loc_82E30A54;
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e30a54
	if (cr6.eq) goto loc_82E30A54;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// addi r23,r3,352
	ctx.r23.s64 = ctx.r3.s64 + 352;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e30a54
	if (cr6.eq) goto loc_82E30A54;
	// bl 0x82d86078
	ctx.lr = 0x82E305B0;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e305fc
	if (!cr6.eq) goto loc_82E305FC;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-6116
	ctx.r4.s64 = ctx.r11.s64 + -6116;
	// bl 0x824209f8
	ctx.lr = 0x82E305CC;
	sub_824209F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E305E0;
	sub_82E880B8(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r10,72(r21)
	PPC_STORE_U32(ctx.r21.u32 + 72, ctx.r10.u32);
	// bl 0x8241fe60
	ctx.lr = 0x82E305F0;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82E305FC:
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lwz r22,92(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82c52918
	ctx.lr = 0x82E30608;
	sub_82C52918(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ddae98
	ctx.lr = 0x82E30614;
	sub_82DDAE98(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82da8fd0
	ctx.lr = 0x82E30620;
	sub_82DA8FD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd898
	ctx.lr = 0x82E30628;
	sub_835FD898(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E3062C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x82450880
	ctx.lr = 0x82E30638;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e30a38
	if (cr6.eq) goto loc_82E30A38;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// std r11,112(r22)
	PPC_STORE_U64(ctx.r22.u32 + 112, ctx.r11.u64);
	// lwz r10,368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// stw r10,120(r22)
	PPC_STORE_U32(ctx.r22.u32 + 120, ctx.r10.u32);
	// bl 0x82ddb1b0
	ctx.lr = 0x82E3065C;
	sub_82DDB1B0(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r24,360(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplw cr6,r24,r7
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r7.u32, xer);
	// beq cr6,0x82e30a38
	if (cr6.eq) goto loc_82E30A38;
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// addi r30,r24,172
	ctx.r30.s64 = ctx.r24.s64 + 172;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,15
	ctx.r25.s64 = 15;
	// ori r20,r11,34079
	ctx.r20.u64 = ctx.r11.u64 | 34079;
loc_82E30694:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82c55880
	ctx.lr = 0x82E3069C;
	sub_82C55880(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,-148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// blt cr6,0x82e306b8
	if (cr6.lt) goto loc_82E306B8;
	// lwz r4,-168(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -168);
	// b 0x82e306bc
	goto loc_82E306BC;
loc_82E306B8:
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
loc_82E306BC:
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x8259d6c0
	ctx.lr = 0x82E306C4;
	sub_8259D6C0(ctx, base);
	// ld r5,-140(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + -140);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// std r5,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r5.u64);
	// bl 0x82e87a10
	ctx.lr = 0x82E306D8;
	sub_82E87A10(ctx, base);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r29,r30,-20
	ctx.r29.s64 = ctx.r30.s64 + -20;
	// stw r11,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r11.u32);
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
loc_82E306F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e30708
	if (cr6.lt) goto loc_82E30708;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82e3070c
	goto loc_82E3070C;
loc_82E30708:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82E3070C:
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
loc_82E3071C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e3071c
	if (!cr6.eq) goto loc_82E3071C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E30740;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fc9b8
	ctx.lr = 0x82E30748;
	sub_835FC9B8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E3074C;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E30754:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e30754
	if (!cr6.eq) goto loc_82E30754;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E30780;
	sub_827A8810(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e307b8
	if (cr6.eq) goto loc_82E307B8;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e3079c
	if (cr6.lt) goto loc_82E3079C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82E3079C;
	sub_8386D088(ctx, base);
loc_82E3079C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// cmpwi cr6,r31,13
	cr6.compare<int32_t>(ctx.r31.s32, 13, xer);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// blt cr6,0x82e306f4
	if (cr6.lt) goto loc_82E306F4;
	// b 0x82e307d8
	goto loc_82E307D8;
loc_82E307B8:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e307cc
	if (cr6.lt) goto loc_82E307CC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82E307CC;
	sub_8386D088(ctx, base);
loc_82E307CC:
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
loc_82E307D8:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// blt cr6,0x82e307f8
	if (cr6.lt) goto loc_82E307F8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x82e307fc
	goto loc_82E307FC;
loc_82E307F8:
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
loc_82E307FC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E30800:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e30800
	if (!cr6.eq) goto loc_82E30800;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E30824;
	sub_8259CC28(ctx, base);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e30838
	if (cr6.lt) goto loc_82E30838;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// b 0x82e3083c
	goto loc_82E3083C;
loc_82E30838:
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
loc_82E3083C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E30840:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e30840
	if (!cr6.eq) goto loc_82E30840;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E30864;
	sub_8259CC28(ctx, base);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e30878
	if (cr6.lt) goto loc_82E30878;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// b 0x82e3087c
	goto loc_82E3087C;
loc_82E30878:
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
loc_82E3087C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E30880:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e30880
	if (!cr6.eq) goto loc_82E30880;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E308A4;
	sub_8259CC28(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r6,124(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lwz r5,128(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x82da8a50
	ctx.lr = 0x82E308B8;
	sub_82DA8A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82da8a90
	ctx.lr = 0x82E308C4;
	sub_82DA8A90(ctx, base);
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82da8af0
	ctx.lr = 0x82E308CC;
	sub_82DA8AF0(ctx, base);
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82da8b10
	ctx.lr = 0x82E308D4;
	sub_82DA8B10(ctx, base);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r28,r30,112
	ctx.r28.s64 = ctx.r30.s64 + 112;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r29,r30,92
	ctx.r29.s64 = ctx.r30.s64 + 92;
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
loc_82E308EC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e30900
	if (cr6.lt) goto loc_82E30900;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82e30904
	goto loc_82E30904;
loc_82E30900:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82E30904:
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
loc_82E30914:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e30914
	if (!cr6.eq) goto loc_82E30914;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E30938;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fcb08
	ctx.lr = 0x82E30940;
	sub_835FCB08(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E30944;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E3094C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e3094c
	if (!cr6.eq) goto loc_82E3094C;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E30978;
	sub_827A8810(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e309b0
	if (cr6.eq) goto loc_82E309B0;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e30994
	if (cr6.lt) goto loc_82E30994;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E30994;
	sub_8386D088(ctx, base);
loc_82E30994:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(ctx.r31.s32, 5, xer);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// blt cr6,0x82e308ec
	if (cr6.lt) goto loc_82E308EC;
	// b 0x82e309d0
	goto loc_82E309D0;
loc_82E309B0:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e309c4
	if (cr6.lt) goto loc_82E309C4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E309C4;
	sub_8386D088(ctx, base);
loc_82E309C4:
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
loc_82E309D0:
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ddb4e8
	ctx.lr = 0x82E309E0;
	sub_82DDB4E8(ctx, base);
	// ld r11,472(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// ld r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// bne cr6,0x82e30a08
	if (!cr6.eq) goto loc_82E30A08;
	// lwz r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// mulhwu r10,r11,r20
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r20.u32)) >> 32;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r8,r9,100
	ctx.r8.s64 = ctx.r9.s64 * 100;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r7,100(r22)
	PPC_STORE_U32(ctx.r22.u32 + 100, ctx.r7.u32);
loc_82E30A08:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r24,r24,320
	ctx.r24.s64 = ctx.r24.s64 + 320;
	// addi r30,r30,320
	ctx.r30.s64 = ctx.r30.s64 + 320;
	// bl 0x82c557a0
	ctx.lr = 0x82E30A18;
	sub_82C557A0(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e30694
	if (!cr6.eq) goto loc_82E30694;
loc_82E30A38:
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82da8c38
	ctx.lr = 0x82E30A40;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82da8c38
	ctx.lr = 0x82E30A48;
	sub_82DA8C38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82E30A54:
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// addi r11,r10,-6116
	ctx.r11.s64 = ctx.r10.s64 + -6116;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x824208c8
	ctx.lr = 0x82E30A80;
	sub_824208C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E30A94;
	sub_82E880B8(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r9,6
	ctx.r9.s64 = 6;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r9,72(r21)
	PPC_STORE_U32(ctx.r21.u32 + 72, ctx.r9.u32);
	// blt cr6,0x82e30ab0
	if (cr6.lt) goto loc_82E30AB0;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82E30AB0;
	sub_8386D088(ctx, base);
loc_82E30AB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E30ABC"))) PPC_WEAK_FUNC(sub_82E30ABC);
PPC_FUNC_IMPL(__imp__sub_82E30ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E30AC0"))) PPC_WEAK_FUNC(sub_82E30AC0);
PPC_FUNC_IMPL(__imp__sub_82E30AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E30AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E30AE8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e30afc
	if (cr6.eq) goto loc_82E30AFC;
	// bl 0x836b2168
	ctx.lr = 0x82E30AF4;
	sub_836B2168(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e30b00
	goto loc_82E30B00;
loc_82E30AFC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E30B00:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E30B14;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e30b28
	if (cr6.eq) goto loc_82E30B28;
	// bl 0x836b2310
	ctx.lr = 0x82E30B20;
	sub_836B2310(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82e30b2c
	goto loc_82E30B2C;
loc_82E30B28:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E30B2C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E30B44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E30B4C"))) PPC_WEAK_FUNC(sub_82E30B4C);
PPC_FUNC_IMPL(__imp__sub_82E30B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E30B50"))) PPC_WEAK_FUNC(sub_82E30B50);
PPC_FUNC_IMPL(__imp__sub_82E30B50) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E30B80;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e30bac
	if (cr6.eq) goto loc_82E30BAC;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E30B98;
	sub_82E8BA80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-5744
	ctx.r10.s64 = ctx.r11.s64 + -5744;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82e30bb0
	goto loc_82E30BB0;
loc_82E30BAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E30BB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E30BC8"))) PPC_WEAK_FUNC(sub_82E30BC8);
PPC_FUNC_IMPL(__imp__sub_82E30BC8) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-5744
	ctx.r10.s64 = ctx.r11.s64 + -5744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82E30BF4;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e30c0c
	if (cr6.eq) goto loc_82E30C0C;
	// bl 0x82416268
	ctx.lr = 0x82E30C08;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E30C0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E30C24"))) PPC_WEAK_FUNC(sub_82E30C24);
PPC_FUNC_IMPL(__imp__sub_82E30C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E30C28"))) PPC_WEAK_FUNC(sub_82E30C28);
PPC_FUNC_IMPL(__imp__sub_82E30C28) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82E30C40;
	sub_82E8BAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d860f0
	ctx.lr = 0x82E30C48;
	sub_82D860F0(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r30,r11,-5860
	ctx.r30.s64 = ctx.r11.s64 + -5860;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x824208c8
	ctx.lr = 0x82E30C64;
	sub_824208C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x82E30C74;
	sub_824208C8(ctx, base);
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

__attribute__((alias("__imp__sub_82E30C90"))) PPC_WEAK_FUNC(sub_82E30C90);
PPC_FUNC_IMPL(__imp__sub_82E30C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E30C98;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82E30CA4;
	sub_82E8BAE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82E30CAC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e30db0
	if (cr6.eq) goto loc_82E30DB0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e30db0
	if (cr6.eq) goto loc_82E30DB0;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da1910
	ctx.lr = 0x82E30CC8;
	sub_82DA1910(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r9,372(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// clrlwi r11,r9,14
	ctx.r11.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e30ce8
	if (!cr6.gt) goto loc_82E30CE8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82E30CE8:
	// addi r30,r31,352
	ctx.r30.s64 = ctx.r31.s64 + 352;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// lwz r31,360(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x82e30d44
	if (cr6.eq) goto loc_82E30D44;
loc_82E30D0C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da1b60
	ctx.lr = 0x82E30D28;
	sub_82DA1B60(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x82e30d0c
	if (!cr6.eq) goto loc_82E30D0C;
loc_82E30D44:
	// lbz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e30de4
	if (cr6.eq) goto loc_82E30DE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r4,r9,-5844
	ctx.r4.s64 = ctx.r9.s64 + -5844;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82E30D78;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E30D84;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82e30de4
	if (cr6.lt) goto loc_82E30DE4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E30DA4;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E30DB0:
	// lbz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e30de4
	if (cr6.eq) goto loc_82E30DE4;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-5844
	ctx.r11.s64 = ctx.r11.s64 + -5844;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x82E30DD0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E30DDC;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82E30DE4;
	sub_8387E8E0(ctx, base);
loc_82E30DE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E30DF0"))) PPC_WEAK_FUNC(sub_82E30DF0);
PPC_FUNC_IMPL(__imp__sub_82E30DF0) {
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
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e30e4c
	if (cr6.eq) goto loc_82E30E4C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5836
	ctx.r4.s64 = ctx.r11.s64 + -5836;
	// bl 0x837b0c10
	ctx.lr = 0x82E30E20;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82E30E2C;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e30e4c
	if (cr6.lt) goto loc_82E30E4C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E30E4C;
	sub_825952B8(ctx, base);
loc_82E30E4C:
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

__attribute__((alias("__imp__sub_82E30E64"))) PPC_WEAK_FUNC(sub_82E30E64);
PPC_FUNC_IMPL(__imp__sub_82E30E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E30E68"))) PPC_WEAK_FUNC(sub_82E30E68);
PPC_FUNC_IMPL(__imp__sub_82E30E68) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E30E94;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e30eb8
	if (cr6.eq) goto loc_82E30EB8;
	// bl 0x836b31b0
	ctx.lr = 0x82E30EA0;
	sub_836B31B0(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
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
loc_82E30EB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E30ED4"))) PPC_WEAK_FUNC(sub_82E30ED4);
PPC_FUNC_IMPL(__imp__sub_82E30ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E30ED8"))) PPC_WEAK_FUNC(sub_82E30ED8);
PPC_FUNC_IMPL(__imp__sub_82E30ED8) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,324
	ctx.r4.s64 = 324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E30F08;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e30f30
	if (cr6.eq) goto loc_82E30F30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82eabfb0
	ctx.lr = 0x82E30F1C;
	sub_82EABFB0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-5224
	ctx.r10.s64 = ctx.r11.s64 + -5224;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82e30f34
	goto loc_82E30F34;
loc_82E30F30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E30F34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E30F4C"))) PPC_WEAK_FUNC(sub_82E30F4C);
PPC_FUNC_IMPL(__imp__sub_82E30F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E30F50"))) PPC_WEAK_FUNC(sub_82E30F50);
PPC_FUNC_IMPL(__imp__sub_82E30F50) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-5224
	ctx.r10.s64 = ctx.r11.s64 + -5224;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82eac080
	ctx.lr = 0x82E30F7C;
	sub_82EAC080(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e30f94
	if (cr6.eq) goto loc_82E30F94;
	// bl 0x82416268
	ctx.lr = 0x82E30F90;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E30F94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E30FAC"))) PPC_WEAK_FUNC(sub_82E30FAC);
PPC_FUNC_IMPL(__imp__sub_82E30FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E30FB0"))) PPC_WEAK_FUNC(sub_82E30FB0);
PPC_FUNC_IMPL(__imp__sub_82E30FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E30FB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82eabcc0
	ctx.lr = 0x82E30FC0;
	sub_82EABCC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e310f8
	if (cr6.eq) goto loc_82E310F8;
	// bl 0x82d86078
	ctx.lr = 0x82E30FD0;
	sub_82D86078(ctx, base);
	// lwz r28,108(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82df8568
	ctx.lr = 0x82E30FDC;
	sub_82DF8568(ctx, base);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// addi r29,r31,352
	ctx.r29.s64 = ctx.r31.s64 + 352;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x82e310f8
	if (cr6.eq) goto loc_82E310F8;
	// addi r31,r30,52
	ctx.r31.s64 = ctx.r30.s64 + 52;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E3100C:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stb r27,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r27.u8);
	// stb r27,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r27.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,-48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x835fcbe8
	ctx.lr = 0x82E31034;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E31038;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E31040:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31040
	if (!cr6.eq) goto loc_82E31040;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,-28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,-44
	ctx.r3.s64 = ctx.r31.s64 + -44;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E3106C;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// bl 0x835fcbe8
	ctx.lr = 0x82E31084;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E31088;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E31090:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31090
	if (!cr6.eq) goto loc_82E31090;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E310BC;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// bl 0x82deff88
	ctx.lr = 0x82E310D8;
	sub_82DEFF88(ctx, base);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, xer);
	// bne cr6,0x82e3100c
	if (!cr6.eq) goto loc_82E3100C;
loc_82E310F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E31104"))) PPC_WEAK_FUNC(sub_82E31104);
PPC_FUNC_IMPL(__imp__sub_82E31104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E31108"))) PPC_WEAK_FUNC(sub_82E31108);
PPC_FUNC_IMPL(__imp__sub_82E31108) {
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
	// bl 0x82eabca8
	ctx.lr = 0x82E31124;
	sub_82EABCA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e31178
	if (cr6.eq) goto loc_82E31178;
	// bl 0x82e691c8
	ctx.lr = 0x82E31134;
	sub_82E691C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E3113C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e3113c
	if (!cr6.eq) goto loc_82E3113C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E31160;
	sub_824208C8(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82E31164;
	sub_82D860F0(ctx, base);
	// stw r3,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r3.u32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-5316
	ctx.r4.s64 = ctx.r10.s64 + -5316;
	// bl 0x82eac690
	ctx.lr = 0x82E31178;
	sub_82EAC690(ctx, base);
loc_82E31178:
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

__attribute__((alias("__imp__sub_82E31194"))) PPC_WEAK_FUNC(sub_82E31194);
PPC_FUNC_IMPL(__imp__sub_82E31194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E31198"))) PPC_WEAK_FUNC(sub_82E31198);
PPC_FUNC_IMPL(__imp__sub_82E31198) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E311C4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e311e8
	if (cr6.eq) goto loc_82E311E8;
	// bl 0x836b4458
	ctx.lr = 0x82E311D0;
	sub_836B4458(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
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
loc_82E311E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E31204"))) PPC_WEAK_FUNC(sub_82E31204);
PPC_FUNC_IMPL(__imp__sub_82E31204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E31208"))) PPC_WEAK_FUNC(sub_82E31208);
PPC_FUNC_IMPL(__imp__sub_82E31208) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,324
	ctx.r4.s64 = 324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E31238;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e31260
	if (cr6.eq) goto loc_82E31260;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82eabfb0
	ctx.lr = 0x82E3124C;
	sub_82EABFB0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-4664
	ctx.r10.s64 = ctx.r11.s64 + -4664;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82e31264
	goto loc_82E31264;
loc_82E31260:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E31264:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3127C"))) PPC_WEAK_FUNC(sub_82E3127C);
PPC_FUNC_IMPL(__imp__sub_82E3127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E31280"))) PPC_WEAK_FUNC(sub_82E31280);
PPC_FUNC_IMPL(__imp__sub_82E31280) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4664
	ctx.r10.s64 = ctx.r11.s64 + -4664;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82eac080
	ctx.lr = 0x82E312AC;
	sub_82EAC080(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e312c4
	if (cr6.eq) goto loc_82E312C4;
	// bl 0x82416268
	ctx.lr = 0x82E312C0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E312C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E312DC"))) PPC_WEAK_FUNC(sub_82E312DC);
PPC_FUNC_IMPL(__imp__sub_82E312DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E312E0"))) PPC_WEAK_FUNC(sub_82E312E0);
PPC_FUNC_IMPL(__imp__sub_82E312E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E312E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82eabca8
	ctx.lr = 0x82E312F4;
	sub_82EABCA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e31350
	if (!cr6.eq) goto loc_82E31350;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-4796
	ctx.r11.s64 = ctx.r11.s64 + -4796;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x824209f8
	ctx.lr = 0x82E31314;
	sub_824209F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E31328;
	sub_82E880B8(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r10,6
	ctx.r10.s64 = 6;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// blt cr6,0x82e31344
	if (cr6.lt) goto loc_82E31344;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E31344;
	sub_8386D088(ctx, base);
loc_82E31344:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E31350:
	// bl 0x82d86078
	ctx.lr = 0x82E31354;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e313a0
	if (!cr6.eq) goto loc_82E313A0;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-4796
	ctx.r4.s64 = ctx.r11.s64 + -4796;
	// bl 0x824209f8
	ctx.lr = 0x82E31370;
	sub_824209F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E31384;
	sub_82E880B8(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// bl 0x8241fe60
	ctx.lr = 0x82E31394;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E313A0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82c52918
	ctx.lr = 0x82E313AC;
	sub_82C52918(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ddae98
	ctx.lr = 0x82E313B8;
	sub_82DDAE98(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82e314bc
	if (cr6.gt) goto loc_82E314BC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82e31434
	if (cr6.eq) goto loc_82E31434;
	// bdz 0x82e3140c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82E3140C;
	// bdz 0x82e314bc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82E314BC;
	// bdz 0x82e314bc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82E314BC;
	// bdz 0x82e3145c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82E3145C;
	// bdnz 0x82e31484
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E31484;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9fb8
	ctx.lr = 0x82E313EC;
	sub_835F9FB8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E313F0;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E313F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e313f8
	if (!cr6.eq) goto loc_82E313F8;
	// b 0x82e314a8
	goto loc_82E314A8;
loc_82E3140C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835f9fb8
	ctx.lr = 0x82E31414;
	sub_835F9FB8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E31418;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E31420:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31420
	if (!cr6.eq) goto loc_82E31420;
	// b 0x82e314a8
	goto loc_82E314A8;
loc_82E31434:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835f9fb8
	ctx.lr = 0x82E3143C;
	sub_835F9FB8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E31440;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E31448:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31448
	if (!cr6.eq) goto loc_82E31448;
	// b 0x82e314a8
	goto loc_82E314A8;
loc_82E3145C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835f9fb8
	ctx.lr = 0x82E31464;
	sub_835F9FB8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E31468;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E31470:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31470
	if (!cr6.eq) goto loc_82E31470;
	// b 0x82e314a8
	goto loc_82E314A8;
loc_82E31484:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835f9fb8
	ctx.lr = 0x82E3148C;
	sub_835F9FB8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E31490;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E31498:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31498
	if (!cr6.eq) goto loc_82E31498;
loc_82E314A8:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E314BC;
	sub_824208C8(ctx, base);
loc_82E314BC:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// bl 0x835fa798
	ctx.lr = 0x82E314CC;
	sub_835FA798(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E314D0;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E314D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e314d8
	if (!cr6.eq) goto loc_82E314D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E314FC;
	sub_824208C8(ctx, base);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r31,316
	ctx.r11.s64 = ctx.r31.s64 + 316;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e31510
	if (cr6.lt) goto loc_82E31510;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E31510:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eac690
	ctx.lr = 0x82E3151C;
	sub_82EAC690(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82da8c38
	ctx.lr = 0x82E31524;
	sub_82DA8C38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E31530"))) PPC_WEAK_FUNC(sub_82E31530);
PPC_FUNC_IMPL(__imp__sub_82E31530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82E31538;
	__savegprlr_21(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x82eabcc0
	ctx.lr = 0x82E31544;
	sub_82EABCC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e319bc
	if (cr6.eq) goto loc_82E319BC;
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e319bc
	if (cr6.eq) goto loc_82E319BC;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// addi r23,r3,352
	ctx.r23.s64 = ctx.r3.s64 + 352;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e319bc
	if (cr6.eq) goto loc_82E319BC;
	// bl 0x82d86078
	ctx.lr = 0x82E31570;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e315bc
	if (!cr6.eq) goto loc_82E315BC;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-4764
	ctx.r4.s64 = ctx.r11.s64 + -4764;
	// bl 0x824209f8
	ctx.lr = 0x82E3158C;
	sub_824209F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E315A0;
	sub_82E880B8(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r10,72(r21)
	PPC_STORE_U32(ctx.r21.u32 + 72, ctx.r10.u32);
	// bl 0x8241fe60
	ctx.lr = 0x82E315B0;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82E315BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r22,92(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x835fd898
	ctx.lr = 0x82E315C8;
	sub_835FD898(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E315CC;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x82450880
	ctx.lr = 0x82E315D8;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e319b0
	if (cr6.eq) goto loc_82E319B0;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// std r11,112(r22)
	PPC_STORE_U64(ctx.r22.u32 + 112, ctx.r11.u64);
	// lwz r10,368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// stw r10,120(r22)
	PPC_STORE_U32(ctx.r22.u32 + 120, ctx.r10.u32);
	// bl 0x82ddb1b0
	ctx.lr = 0x82E315FC;
	sub_82DDB1B0(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r24,360(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplw cr6,r24,r7
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r7.u32, xer);
	// beq cr6,0x82e319a8
	if (cr6.eq) goto loc_82E319A8;
	// addi r31,r24,172
	ctx.r31.s64 = ctx.r24.s64 + 172;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,15
	ctx.r25.s64 = 15;
loc_82E3162C:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82c55880
	ctx.lr = 0x82E31634;
	sub_82C55880(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,-148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// blt cr6,0x82e31650
	if (cr6.lt) goto loc_82E31650;
	// lwz r4,-168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -168);
	// b 0x82e31654
	goto loc_82E31654;
loc_82E31650:
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
loc_82E31654:
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x8259d6c0
	ctx.lr = 0x82E3165C;
	sub_8259D6C0(ctx, base);
	// ld r5,-140(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + -140);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// std r5,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r5.u64);
	// bl 0x82e87a10
	ctx.lr = 0x82E31670;
	sub_82E87A10(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r31,-20
	ctx.r29.s64 = ctx.r31.s64 + -20;
	// stw r11,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r11.u32);
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
loc_82E3168C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e316a0
	if (cr6.lt) goto loc_82E316A0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82e316a4
	goto loc_82E316A4;
loc_82E316A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82E316A4:
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
loc_82E316B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e316b4
	if (!cr6.eq) goto loc_82E316B4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E316D8;
	sub_824208C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835fc9b8
	ctx.lr = 0x82E316E0;
	sub_835FC9B8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E316E4;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E316EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e316ec
	if (!cr6.eq) goto loc_82E316EC;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E31718;
	sub_827A8810(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e31750
	if (cr6.eq) goto loc_82E31750;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e31734
	if (cr6.lt) goto loc_82E31734;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82E31734;
	sub_8386D088(ctx, base);
loc_82E31734:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// cmpwi cr6,r30,13
	cr6.compare<int32_t>(ctx.r30.s32, 13, xer);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// blt cr6,0x82e3168c
	if (cr6.lt) goto loc_82E3168C;
	// b 0x82e31770
	goto loc_82E31770;
loc_82E31750:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e31764
	if (cr6.lt) goto loc_82E31764;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82E31764;
	sub_8386D088(ctx, base);
loc_82E31764:
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
loc_82E31770:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// blt cr6,0x82e31790
	if (cr6.lt) goto loc_82E31790;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82e31794
	goto loc_82E31794;
loc_82E31790:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
loc_82E31794:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E31798:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31798
	if (!cr6.eq) goto loc_82E31798;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E317BC;
	sub_8259CC28(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e317d0
	if (cr6.lt) goto loc_82E317D0;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// b 0x82e317d4
	goto loc_82E317D4;
loc_82E317D0:
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
loc_82E317D4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E317D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e317d8
	if (!cr6.eq) goto loc_82E317D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E317FC;
	sub_8259CC28(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e31810
	if (cr6.lt) goto loc_82E31810;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// b 0x82e31814
	goto loc_82E31814;
loc_82E31810:
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
loc_82E31814:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E31818:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31818
	if (!cr6.eq) goto loc_82E31818;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E3183C;
	sub_8259CC28(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r6,124(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82da8a50
	ctx.lr = 0x82E31850;
	sub_82DA8A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82da8a90
	ctx.lr = 0x82E3185C;
	sub_82DA8A90(ctx, base);
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82da8af0
	ctx.lr = 0x82E31864;
	sub_82DA8AF0(ctx, base);
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82da8b10
	ctx.lr = 0x82E3186C;
	sub_82DA8B10(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r28,r31,112
	ctx.r28.s64 = ctx.r31.s64 + 112;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r31,92
	ctx.r29.s64 = ctx.r31.s64 + 92;
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
loc_82E31884:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e31898
	if (cr6.lt) goto loc_82E31898;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82e3189c
	goto loc_82E3189C;
loc_82E31898:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82E3189C:
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
loc_82E318AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e318ac
	if (!cr6.eq) goto loc_82E318AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E318D0;
	sub_824208C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835fcb08
	ctx.lr = 0x82E318D8;
	sub_835FCB08(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E318DC;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E318E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e318e4
	if (!cr6.eq) goto loc_82E318E4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E31910;
	sub_827A8810(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e31948
	if (cr6.eq) goto loc_82E31948;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e3192c
	if (cr6.lt) goto loc_82E3192C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E3192C;
	sub_8386D088(ctx, base);
loc_82E3192C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// blt cr6,0x82e31884
	if (cr6.lt) goto loc_82E31884;
	// b 0x82e31968
	goto loc_82E31968;
loc_82E31948:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e3195c
	if (cr6.lt) goto loc_82E3195C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E3195C;
	sub_8386D088(ctx, base);
loc_82E3195C:
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
loc_82E31968:
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ddb4e8
	ctx.lr = 0x82E31978;
	sub_82DDB4E8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r24,r24,320
	ctx.r24.s64 = ctx.r24.s64 + 320;
	// addi r31,r31,320
	ctx.r31.s64 = ctx.r31.s64 + 320;
	// bl 0x82c557a0
	ctx.lr = 0x82E31988;
	sub_82C557A0(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e3162c
	if (!cr6.eq) goto loc_82E3162C;
loc_82E319A8:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// stw r11,96(r22)
	PPC_STORE_U32(ctx.r22.u32 + 96, ctx.r11.u32);
loc_82E319B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82E319BC:
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// addi r11,r10,-4764
	ctx.r11.s64 = ctx.r10.s64 + -4764;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x824208c8
	ctx.lr = 0x82E319E8;
	sub_824208C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E319FC;
	sub_82E880B8(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r9,6
	ctx.r9.s64 = 6;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r9,72(r21)
	PPC_STORE_U32(ctx.r21.u32 + 72, ctx.r9.u32);
	// blt cr6,0x82e31a18
	if (cr6.lt) goto loc_82E31A18;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82E31A18;
	sub_8386D088(ctx, base);
loc_82E31A18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E31A24"))) PPC_WEAK_FUNC(sub_82E31A24);
PPC_FUNC_IMPL(__imp__sub_82E31A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E31A28"))) PPC_WEAK_FUNC(sub_82E31A28);
PPC_FUNC_IMPL(__imp__sub_82E31A28) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E31A54;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e31a78
	if (cr6.eq) goto loc_82E31A78;
	// bl 0x836b5c50
	ctx.lr = 0x82E31A60;
	sub_836B5C50(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
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
loc_82E31A78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E31A94"))) PPC_WEAK_FUNC(sub_82E31A94);
PPC_FUNC_IMPL(__imp__sub_82E31A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E31A98"))) PPC_WEAK_FUNC(sub_82E31A98);
PPC_FUNC_IMPL(__imp__sub_82E31A98) {
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
	// bl 0x82d86078
	ctx.lr = 0x82E31AA8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e31abc
	if (cr6.eq) goto loc_82E31ABC;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82E31ABC:
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

__attribute__((alias("__imp__sub_82E31AD0"))) PPC_WEAK_FUNC(sub_82E31AD0);
PPC_FUNC_IMPL(__imp__sub_82E31AD0) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,324
	ctx.r4.s64 = 324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E31B00;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e31b28
	if (cr6.eq) goto loc_82E31B28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82eabfb0
	ctx.lr = 0x82E31B14;
	sub_82EABFB0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-4104
	ctx.r10.s64 = ctx.r11.s64 + -4104;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82e31b2c
	goto loc_82E31B2C;
loc_82E31B28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E31B2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E31B44"))) PPC_WEAK_FUNC(sub_82E31B44);
PPC_FUNC_IMPL(__imp__sub_82E31B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E31B48"))) PPC_WEAK_FUNC(sub_82E31B48);
PPC_FUNC_IMPL(__imp__sub_82E31B48) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4104
	ctx.r10.s64 = ctx.r11.s64 + -4104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82eac080
	ctx.lr = 0x82E31B74;
	sub_82EAC080(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e31b8c
	if (cr6.eq) goto loc_82E31B8C;
	// bl 0x82416268
	ctx.lr = 0x82E31B88;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E31B8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E31BA4"))) PPC_WEAK_FUNC(sub_82E31BA4);
PPC_FUNC_IMPL(__imp__sub_82E31BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E31BA8"))) PPC_WEAK_FUNC(sub_82E31BA8);
PPC_FUNC_IMPL(__imp__sub_82E31BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E31BB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82eabca8
	ctx.lr = 0x82E31BBC;
	sub_82EABCA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e31c18
	if (!cr6.eq) goto loc_82E31C18;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-4236
	ctx.r11.s64 = ctx.r11.s64 + -4236;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x824209f8
	ctx.lr = 0x82E31BDC;
	sub_824209F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E31BF0;
	sub_82E880B8(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r10,6
	ctx.r10.s64 = 6;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// blt cr6,0x82e31c0c
	if (cr6.lt) goto loc_82E31C0C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E31C0C;
	sub_8386D088(ctx, base);
loc_82E31C0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E31C18:
	// bl 0x82d86078
	ctx.lr = 0x82E31C1C;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e31c68
	if (!cr6.eq) goto loc_82E31C68;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-4236
	ctx.r4.s64 = ctx.r11.s64 + -4236;
	// bl 0x824209f8
	ctx.lr = 0x82E31C38;
	sub_824209F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E31C4C;
	sub_82E880B8(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// bl 0x8241fe60
	ctx.lr = 0x82E31C5C;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E31C68:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82c52918
	ctx.lr = 0x82E31C74;
	sub_82C52918(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ddae98
	ctx.lr = 0x82E31C80;
	sub_82DDAE98(ctx, base);
	// ld r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// std r11,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r11.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82e31d8c
	if (cr6.gt) goto loc_82E31D8C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82e31d04
	if (cr6.eq) goto loc_82E31D04;
	// bdz 0x82e31cdc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82E31CDC;
	// bdz 0x82e31d8c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82E31D8C;
	// bdz 0x82e31d8c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82E31D8C;
	// bdz 0x82e31d2c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82E31D2C;
	// bdnz 0x82e31d54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E31D54;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9fb8
	ctx.lr = 0x82E31CBC;
	sub_835F9FB8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E31CC0;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E31CC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31cc8
	if (!cr6.eq) goto loc_82E31CC8;
	// b 0x82e31d78
	goto loc_82E31D78;
loc_82E31CDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835f9fb8
	ctx.lr = 0x82E31CE4;
	sub_835F9FB8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E31CE8;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E31CF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31cf0
	if (!cr6.eq) goto loc_82E31CF0;
	// b 0x82e31d78
	goto loc_82E31D78;
loc_82E31D04:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835f9fb8
	ctx.lr = 0x82E31D0C;
	sub_835F9FB8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E31D10;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E31D18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31d18
	if (!cr6.eq) goto loc_82E31D18;
	// b 0x82e31d78
	goto loc_82E31D78;
loc_82E31D2C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835f9fb8
	ctx.lr = 0x82E31D34;
	sub_835F9FB8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E31D38;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E31D40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31d40
	if (!cr6.eq) goto loc_82E31D40;
	// b 0x82e31d78
	goto loc_82E31D78;
loc_82E31D54:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835f9fb8
	ctx.lr = 0x82E31D5C;
	sub_835F9FB8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E31D60;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E31D68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31d68
	if (!cr6.eq) goto loc_82E31D68;
loc_82E31D78:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E31D8C;
	sub_824208C8(ctx, base);
loc_82E31D8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa798
	ctx.lr = 0x82E31D94;
	sub_835FA798(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E31D98;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E31DA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31da0
	if (!cr6.eq) goto loc_82E31DA0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,500
	ctx.r3.s64 = ctx.r31.s64 + 500;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E31DC4;
	sub_824208C8(ctx, base);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r31,316
	ctx.r11.s64 = ctx.r31.s64 + 316;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e31dd8
	if (cr6.lt) goto loc_82E31DD8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E31DD8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eac690
	ctx.lr = 0x82E31DE4;
	sub_82EAC690(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82da8c38
	ctx.lr = 0x82E31DEC;
	sub_82DA8C38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E31DF8"))) PPC_WEAK_FUNC(sub_82E31DF8);
PPC_FUNC_IMPL(__imp__sub_82E31DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82E31E00;
	__savegprlr_20(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x82eabcc0
	ctx.lr = 0x82E31E0C;
	sub_82EABCC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e322e4
	if (cr6.eq) goto loc_82E322E4;
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e322e4
	if (cr6.eq) goto loc_82E322E4;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// addi r23,r3,352
	ctx.r23.s64 = ctx.r3.s64 + 352;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e322e4
	if (cr6.eq) goto loc_82E322E4;
	// bl 0x82d86078
	ctx.lr = 0x82E31E38;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e31e84
	if (!cr6.eq) goto loc_82E31E84;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-4204
	ctx.r4.s64 = ctx.r11.s64 + -4204;
	// bl 0x824209f8
	ctx.lr = 0x82E31E54;
	sub_824209F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E31E68;
	sub_82E880B8(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r10,72(r21)
	PPC_STORE_U32(ctx.r21.u32 + 72, ctx.r10.u32);
	// bl 0x8241fe60
	ctx.lr = 0x82E31E78;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82E31E84:
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lwz r22,92(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82c52918
	ctx.lr = 0x82E31E90;
	sub_82C52918(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ddae98
	ctx.lr = 0x82E31E9C;
	sub_82DDAE98(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82da8fd0
	ctx.lr = 0x82E31EA8;
	sub_82DA8FD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd898
	ctx.lr = 0x82E31EB0;
	sub_835FD898(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E31EB4;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x82450880
	ctx.lr = 0x82E31EC0;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e322c8
	if (cr6.eq) goto loc_82E322C8;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// std r11,112(r22)
	PPC_STORE_U64(ctx.r22.u32 + 112, ctx.r11.u64);
	// lwz r10,368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// stw r10,120(r22)
	PPC_STORE_U32(ctx.r22.u32 + 120, ctx.r10.u32);
	// bl 0x82ddb1b0
	ctx.lr = 0x82E31EE4;
	sub_82DDB1B0(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r24,360(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplw cr6,r24,r7
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r7.u32, xer);
	// beq cr6,0x82e322c0
	if (cr6.eq) goto loc_82E322C0;
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// addi r30,r24,172
	ctx.r30.s64 = ctx.r24.s64 + 172;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,15
	ctx.r25.s64 = 15;
	// ori r20,r11,34079
	ctx.r20.u64 = ctx.r11.u64 | 34079;
loc_82E31F1C:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82c55880
	ctx.lr = 0x82E31F24;
	sub_82C55880(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,-148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// blt cr6,0x82e31f40
	if (cr6.lt) goto loc_82E31F40;
	// lwz r4,-168(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -168);
	// b 0x82e31f44
	goto loc_82E31F44;
loc_82E31F40:
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
loc_82E31F44:
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x8259d6c0
	ctx.lr = 0x82E31F4C;
	sub_8259D6C0(ctx, base);
	// ld r5,-140(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + -140);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// std r5,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r5.u64);
	// bl 0x82e87a10
	ctx.lr = 0x82E31F60;
	sub_82E87A10(ctx, base);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r29,r30,-20
	ctx.r29.s64 = ctx.r30.s64 + -20;
	// stw r11,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r11.u32);
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
loc_82E31F7C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e31f90
	if (cr6.lt) goto loc_82E31F90;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82e31f94
	goto loc_82E31F94;
loc_82E31F90:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82E31F94:
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
loc_82E31FA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31fa4
	if (!cr6.eq) goto loc_82E31FA4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E31FC8;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fc9b8
	ctx.lr = 0x82E31FD0;
	sub_835FC9B8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E31FD4;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E31FDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e31fdc
	if (!cr6.eq) goto loc_82E31FDC;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E32008;
	sub_827A8810(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e32040
	if (cr6.eq) goto loc_82E32040;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e32024
	if (cr6.lt) goto loc_82E32024;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82E32024;
	sub_8386D088(ctx, base);
loc_82E32024:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// cmpwi cr6,r31,13
	cr6.compare<int32_t>(ctx.r31.s32, 13, xer);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// blt cr6,0x82e31f7c
	if (cr6.lt) goto loc_82E31F7C;
	// b 0x82e32060
	goto loc_82E32060;
loc_82E32040:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e32054
	if (cr6.lt) goto loc_82E32054;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82E32054;
	sub_8386D088(ctx, base);
loc_82E32054:
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
loc_82E32060:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// blt cr6,0x82e32080
	if (cr6.lt) goto loc_82E32080;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x82e32084
	goto loc_82E32084;
loc_82E32080:
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
loc_82E32084:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E32088:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e32088
	if (!cr6.eq) goto loc_82E32088;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E320AC;
	sub_8259CC28(ctx, base);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e320c0
	if (cr6.lt) goto loc_82E320C0;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// b 0x82e320c4
	goto loc_82E320C4;
loc_82E320C0:
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
loc_82E320C4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E320C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e320c8
	if (!cr6.eq) goto loc_82E320C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E320EC;
	sub_8259CC28(ctx, base);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e32100
	if (cr6.lt) goto loc_82E32100;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// b 0x82e32104
	goto loc_82E32104;
loc_82E32100:
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
loc_82E32104:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E32108:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e32108
	if (!cr6.eq) goto loc_82E32108;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E3212C;
	sub_8259CC28(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r6,124(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lwz r5,128(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x82da8a50
	ctx.lr = 0x82E32140;
	sub_82DA8A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82da8a90
	ctx.lr = 0x82E3214C;
	sub_82DA8A90(ctx, base);
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82da8af0
	ctx.lr = 0x82E32154;
	sub_82DA8AF0(ctx, base);
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82da8b10
	ctx.lr = 0x82E3215C;
	sub_82DA8B10(ctx, base);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r28,r30,112
	ctx.r28.s64 = ctx.r30.s64 + 112;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r29,r30,92
	ctx.r29.s64 = ctx.r30.s64 + 92;
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
loc_82E32174:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e32188
	if (cr6.lt) goto loc_82E32188;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82e3218c
	goto loc_82E3218C;
loc_82E32188:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82E3218C:
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
loc_82E3219C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e3219c
	if (!cr6.eq) goto loc_82E3219C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E321C0;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835fcb08
	ctx.lr = 0x82E321C8;
	sub_835FCB08(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82E321CC;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E321D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e321d4
	if (!cr6.eq) goto loc_82E321D4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E32200;
	sub_827A8810(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e32238
	if (cr6.eq) goto loc_82E32238;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e3221c
	if (cr6.lt) goto loc_82E3221C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E3221C;
	sub_8386D088(ctx, base);
loc_82E3221C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(ctx.r31.s32, 5, xer);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// blt cr6,0x82e32174
	if (cr6.lt) goto loc_82E32174;
	// b 0x82e32258
	goto loc_82E32258;
loc_82E32238:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e3224c
	if (cr6.lt) goto loc_82E3224C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E3224C;
	sub_8386D088(ctx, base);
loc_82E3224C:
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
loc_82E32258:
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ddb4e8
	ctx.lr = 0x82E32268;
	sub_82DDB4E8(ctx, base);
	// ld r11,472(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// ld r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// bne cr6,0x82e32290
	if (!cr6.eq) goto loc_82E32290;
	// lwz r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// mulhwu r10,r11,r20
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r20.u32)) >> 32;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r8,r9,100
	ctx.r8.s64 = ctx.r9.s64 * 100;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r7,100(r22)
	PPC_STORE_U32(ctx.r22.u32 + 100, ctx.r7.u32);
loc_82E32290:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r24,r24,320
	ctx.r24.s64 = ctx.r24.s64 + 320;
	// addi r30,r30,320
	ctx.r30.s64 = ctx.r30.s64 + 320;
	// bl 0x82c557a0
	ctx.lr = 0x82E322A0;
	sub_82C557A0(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e31f1c
	if (!cr6.eq) goto loc_82E31F1C;
loc_82E322C0:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// stw r11,96(r22)
	PPC_STORE_U32(ctx.r22.u32 + 96, ctx.r11.u32);
loc_82E322C8:
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82da8c38
	ctx.lr = 0x82E322D0;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82da8c38
	ctx.lr = 0x82E322D8;
	sub_82DA8C38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82E322E4:
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// addi r11,r10,-4204
	ctx.r11.s64 = ctx.r10.s64 + -4204;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x824208c8
	ctx.lr = 0x82E32310;
	sub_824208C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E32324;
	sub_82E880B8(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r9,6
	ctx.r9.s64 = 6;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r9,72(r21)
	PPC_STORE_U32(ctx.r21.u32 + 72, ctx.r9.u32);
	// blt cr6,0x82e32340
	if (cr6.lt) goto loc_82E32340;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x82E32340;
	sub_8386D088(ctx, base);
loc_82E32340:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E3234C"))) PPC_WEAK_FUNC(sub_82E3234C);
PPC_FUNC_IMPL(__imp__sub_82E3234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E32350"))) PPC_WEAK_FUNC(sub_82E32350);
PPC_FUNC_IMPL(__imp__sub_82E32350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E32358;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E32378;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e3238c
	if (cr6.eq) goto loc_82E3238C;
	// bl 0x836b62f8
	ctx.lr = 0x82E32384;
	sub_836B62F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e32390
	goto loc_82E32390;
loc_82E3238C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E32390:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,352
	ctx.r4.s64 = 352;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E323A4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e323b8
	if (cr6.eq) goto loc_82E323B8;
	// bl 0x836b64a0
	ctx.lr = 0x82E323B0;
	sub_836B64A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82e323bc
	goto loc_82E323BC;
loc_82E323B8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E323BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E323D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E323DC"))) PPC_WEAK_FUNC(sub_82E323DC);
PPC_FUNC_IMPL(__imp__sub_82E323DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E323E0"))) PPC_WEAK_FUNC(sub_82E323E0);
PPC_FUNC_IMPL(__imp__sub_82E323E0) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E32410;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e32444
	if (cr6.eq) goto loc_82E32444;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E32428;
	sub_82E8BA80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-3584
	ctx.r9.s64 = ctx.r11.s64 + -3584;
	// stb r10,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82e32448
	goto loc_82E32448;
loc_82E32444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E32448:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E32460"))) PPC_WEAK_FUNC(sub_82E32460);
PPC_FUNC_IMPL(__imp__sub_82E32460) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3584
	ctx.r10.s64 = ctx.r11.s64 + -3584;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82E3248C;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e324a4
	if (cr6.eq) goto loc_82E324A4;
	// bl 0x82416268
	ctx.lr = 0x82E324A0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E324A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E324BC"))) PPC_WEAK_FUNC(sub_82E324BC);
PPC_FUNC_IMPL(__imp__sub_82E324BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E324C0"))) PPC_WEAK_FUNC(sub_82E324C0);
PPC_FUNC_IMPL(__imp__sub_82E324C0) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82E324D8;
	sub_82E8BAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e32528
	if (cr6.eq) goto loc_82E32528;
	// bl 0x82e6e978
	ctx.lr = 0x82E324E8;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e32500
	if (cr6.eq) goto loc_82E32500;
	// bl 0x82e6e978
	ctx.lr = 0x82E324F4;
	sub_82E6E978(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r10.u32);
loc_82E32500:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r30,r11,-3684
	ctx.r30.s64 = ctx.r11.s64 + -3684;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// bl 0x824208c8
	ctx.lr = 0x82E32518;
	sub_824208C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// bl 0x824208c8
	ctx.lr = 0x82E32528;
	sub_824208C8(ctx, base);
loc_82E32528:
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

__attribute__((alias("__imp__sub_82E32544"))) PPC_WEAK_FUNC(sub_82E32544);
PPC_FUNC_IMPL(__imp__sub_82E32544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E32548"))) PPC_WEAK_FUNC(sub_82E32548);
PPC_FUNC_IMPL(__imp__sub_82E32548) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E32574;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e32598
	if (cr6.eq) goto loc_82E32598;
	// bl 0x836b7190
	ctx.lr = 0x82E32580;
	sub_836B7190(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
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
loc_82E32598:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E325B4"))) PPC_WEAK_FUNC(sub_82E325B4);
PPC_FUNC_IMPL(__imp__sub_82E325B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E325B8"))) PPC_WEAK_FUNC(sub_82E325B8);
PPC_FUNC_IMPL(__imp__sub_82E325B8) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,324
	ctx.r4.s64 = 324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E325E8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e32610
	if (cr6.eq) goto loc_82E32610;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82eabfb0
	ctx.lr = 0x82E325FC;
	sub_82EABFB0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-3304
	ctx.r10.s64 = ctx.r11.s64 + -3304;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82e32614
	goto loc_82E32614;
loc_82E32610:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E32614:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3262C"))) PPC_WEAK_FUNC(sub_82E3262C);
PPC_FUNC_IMPL(__imp__sub_82E3262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E32630"))) PPC_WEAK_FUNC(sub_82E32630);
PPC_FUNC_IMPL(__imp__sub_82E32630) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3304
	ctx.r10.s64 = ctx.r11.s64 + -3304;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82eac080
	ctx.lr = 0x82E3265C;
	sub_82EAC080(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e32674
	if (cr6.eq) goto loc_82E32674;
	// bl 0x82416268
	ctx.lr = 0x82E32670;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E32674:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3268C"))) PPC_WEAK_FUNC(sub_82E3268C);
PPC_FUNC_IMPL(__imp__sub_82E3268C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E32690"))) PPC_WEAK_FUNC(sub_82E32690);
PPC_FUNC_IMPL(__imp__sub_82E32690) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eabca8
	ctx.lr = 0x82E326AC;
	sub_82EABCA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e32704
	if (!cr6.eq) goto loc_82E32704;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-3408
	ctx.r11.s64 = ctx.r11.s64 + -3408;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x824209f8
	ctx.lr = 0x82E326CC;
	sub_824209F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E326E0;
	sub_82E880B8(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r10,8
	ctx.r10.s64 = 8;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// blt cr6,0x82e326fc
	if (cr6.lt) goto loc_82E326FC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E326FC;
	sub_8386D088(ctx, base);
loc_82E326FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e32770
	goto loc_82E32770;
loc_82E32704:
	// bl 0x82d86078
	ctx.lr = 0x82E32708;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e3274c
	if (!cr6.eq) goto loc_82E3274C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-3408
	ctx.r4.s64 = ctx.r11.s64 + -3408;
	// bl 0x824209f8
	ctx.lr = 0x82E32720;
	sub_824209F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E32734;
	sub_82E880B8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// bl 0x8241fe60
	ctx.lr = 0x82E32744;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e32770
	goto loc_82E32770;
loc_82E3274C:
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// addi r11,r30,316
	ctx.r11.s64 = ctx.r30.s64 + 316;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e32760
	if (cr6.lt) goto loc_82E32760;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E32760:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eac690
	ctx.lr = 0x82E3276C;
	sub_82EAC690(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E32770:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E32788"))) PPC_WEAK_FUNC(sub_82E32788);
PPC_FUNC_IMPL(__imp__sub_82E32788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E32790;
	__savegprlr_29(ctx, base);
	// addi r6,r3,5
	ctx.r6.s64 = ctx.r3.s64 + 5;
	// subfic r30,r3,-5
	xer.ca = ctx.r3.u32 <= 4294967291;
	ctx.r30.s64 = -5 - ctx.r3.s64;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r31,6
	ctx.r31.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82E327AC:
	// stw r4,-5(r6)
	PPC_STORE_U32(ctx.r6.u32 + -5, ctx.r4.u32);
	// addi r10,r6,13
	ctx.r10.s64 = ctx.r6.s64 + 13;
	// stb r5,-1(r6)
	PPC_STORE_U8(ctx.r6.u32 + -1, ctx.r5.u8);
	// li r7,11
	ctx.r7.s64 = 11;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stb r5,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r5.u8);
	// stb r5,46(r6)
	PPC_STORE_U8(ctx.r6.u32 + 46, ctx.r5.u8);
loc_82E327C8:
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82E327D4:
	// stbx r5,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82e327d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E327D4;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// bne 0x82e327c8
	if (!cr0.eq) goto loc_82E327C8;
	// li r11,23
	ctx.r11.s64 = 23;
	// add r7,r30,r6
	ctx.r7.u64 = ctx.r30.u64 + ctx.r6.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82E327FC:
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r8,r11,52
	ctx.r8.s64 = ctx.r11.s64 + 52;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stb r9,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r9.u8);
	// stb r9,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r9.u8);
	// stb r9,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r9.u8);
	// bdnz 0x82e327fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E327FC;
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r6,r6,236
	ctx.r6.s64 = ctx.r6.s64 + 236;
	// bne 0x82e327ac
	if (!cr0.eq) goto loc_82E327AC;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E32830"))) PPC_WEAK_FUNC(sub_82E32830);
PPC_FUNC_IMPL(__imp__sub_82E32830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82E32838;
	__savegprlr_26(ctx, base);
	// addi r31,r4,6
	ctx.r31.s64 = ctx.r4.s64 + 6;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// subf r30,r3,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subfic r29,r3,-4
	xer.ca = ctx.r3.u32 <= 4294967292;
	ctx.r29.s64 = -4 - ctx.r3.s64;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82E3284C:
	// lwz r7,-6(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6);
	// li r8,11
	ctx.r8.s64 = 11;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r29,r5
	ctx.r11.u64 = ctx.r29.u64 + ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,-4(r5)
	PPC_STORE_U32(ctx.r5.u32 + -4, ctx.r7.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lbzx r6,r30,r5
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// stb r6,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r6.u8);
	// lbz r8,-1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stb r8,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r7,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r7.u8);
	// lbz r6,45(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// stb r6,47(r5)
	PPC_STORE_U8(ctx.r5.u32 + 47, ctx.r6.u8);
loc_82E32888:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r27,r7,r3
	ctx.r27.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r7,18
	ctx.r7.s64 = ctx.r7.s64 + 18;
	// lbz r26,7(r6)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r6.u32 + 7);
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// stb r26,7(r27)
	PPC_STORE_U8(ctx.r27.u32 + 7, ctx.r26.u8);
	// lbzx r27,r7,r4
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// stbx r27,r7,r3
	PPC_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r27.u8);
	// lbz r7,19(r6)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + 19);
	// stb r7,19(r8)
	PPC_STORE_U8(ctx.r8.u32 + 19, ctx.r7.u8);
	// lbz r6,20(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 20);
	// stb r6,20(r8)
	PPC_STORE_U8(ctx.r8.u32 + 20, ctx.r6.u8);
	// bdnz 0x82e32888
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E32888;
	// li r9,23
	ctx.r9.s64 = 23;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E328E4:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r7,r7,56
	ctx.r7.s64 = ctx.r7.s64 + 56;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r6,52(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r6,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r6.u32);
	// lbzx r6,r7,r4
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// stbx r6,r7,r3
	PPC_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r6.u8);
	// lbz r7,57(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 57);
	// stb r7,57(r8)
	PPC_STORE_U8(ctx.r8.u32 + 57, ctx.r7.u8);
	// lbz r6,58(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 58);
	// stb r6,58(r8)
	PPC_STORE_U8(ctx.r8.u32 + 58, ctx.r6.u8);
	// bdnz 0x82e328e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E328E4;
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,236
	ctx.r31.s64 = ctx.r31.s64 + 236;
	// addi r5,r5,236
	ctx.r5.s64 = ctx.r5.s64 + 236;
	// bne 0x82e3284c
	if (!cr0.eq) goto loc_82E3284C;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E32934"))) PPC_WEAK_FUNC(sub_82E32934);
PPC_FUNC_IMPL(__imp__sub_82E32934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E32938"))) PPC_WEAK_FUNC(sub_82E32938);
PPC_FUNC_IMPL(__imp__sub_82E32938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E32940;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,392
	ctx.r4.s64 = 392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E32960;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e32974
	if (cr6.eq) goto loc_82E32974;
	// bl 0x836b8518
	ctx.lr = 0x82E3296C;
	sub_836B8518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e32978
	goto loc_82E32978;
loc_82E32974:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E32978:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,352
	ctx.r4.s64 = 352;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E3298C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e329a0
	if (cr6.eq) goto loc_82E329A0;
	// bl 0x836b86e0
	ctx.lr = 0x82E32998;
	sub_836B86E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82e329a4
	goto loc_82E329A4;
loc_82E329A0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E329A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E329BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E329C4"))) PPC_WEAK_FUNC(sub_82E329C4);
PPC_FUNC_IMPL(__imp__sub_82E329C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E329C8"))) PPC_WEAK_FUNC(sub_82E329C8);
PPC_FUNC_IMPL(__imp__sub_82E329C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// b 0x82e32830
	sub_82E32830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E329D0"))) PPC_WEAK_FUNC(sub_82E329D0);
PPC_FUNC_IMPL(__imp__sub_82E329D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e32a00
	if (cr6.eq) goto loc_82E32A00;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// blr 
	return;
loc_82E32A00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E32A08"))) PPC_WEAK_FUNC(sub_82E32A08);
PPC_FUNC_IMPL(__imp__sub_82E32A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E32A2C"))) PPC_WEAK_FUNC(sub_82E32A2C);
PPC_FUNC_IMPL(__imp__sub_82E32A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E32A30"))) PPC_WEAK_FUNC(sub_82E32A30);
PPC_FUNC_IMPL(__imp__sub_82E32A30) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,676
	ctx.r4.s64 = 676;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E32A60;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e32a94
	if (cr6.eq) goto loc_82E32A94;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82E32A78;
	sub_82E8BA80(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// addi r10,r11,-3056
	ctx.r10.s64 = ctx.r11.s64 + -3056;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82e32788
	ctx.lr = 0x82E32A8C;
	sub_82E32788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e32a98
	goto loc_82E32A98;
loc_82E32A94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E32A98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E32AB0"))) PPC_WEAK_FUNC(sub_82E32AB0);
PPC_FUNC_IMPL(__imp__sub_82E32AB0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3056
	ctx.r10.s64 = ctx.r11.s64 + -3056;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82E32ADC;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e32af4
	if (cr6.eq) goto loc_82E32AF4;
	// bl 0x82416268
	ctx.lr = 0x82E32AF0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E32AF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E32B0C"))) PPC_WEAK_FUNC(sub_82E32B0C);
PPC_FUNC_IMPL(__imp__sub_82E32B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E32B10"))) PPC_WEAK_FUNC(sub_82E32B10);
PPC_FUNC_IMPL(__imp__sub_82E32B10) {
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
	// ble cr6,0x82e32b7c
	if (!cr6.gt) goto loc_82E32B7C;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,30592
	ctx.r8.s64 = ctx.r10.s64 + 30592;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,16
	ctx.r6.s64 = 16;
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
	ctx.lr = 0x82E32B6C;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E32B7C:
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

__attribute__((alias("__imp__sub_82E32B90"))) PPC_WEAK_FUNC(sub_82E32B90);
PPC_FUNC_IMPL(__imp__sub_82E32B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E32B98;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-2948
	ctx.r10.s64 = ctx.r11.s64 + -2948;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,16
	ctx.r8.s64 = 16;
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
	ctx.lr = 0x82E32BDC;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x82e32c04
	if (cr6.eq) goto loc_82E32C04;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x82E32BFC;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82E32C04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E32C0C"))) PPC_WEAK_FUNC(sub_82E32C0C);
PPC_FUNC_IMPL(__imp__sub_82E32C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E32C10"))) PPC_WEAK_FUNC(sub_82E32C10);
PPC_FUNC_IMPL(__imp__sub_82E32C10) {
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
	// ble cr6,0x82e32c7c
	if (!cr6.gt) goto loc_82E32C7C;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,-2948
	ctx.r8.s64 = ctx.r10.s64 + -2948;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,16
	ctx.r6.s64 = 16;
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
	ctx.lr = 0x82E32C6C;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E32C7C:
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

__attribute__((alias("__imp__sub_82E32C90"))) PPC_WEAK_FUNC(sub_82E32C90);
PPC_FUNC_IMPL(__imp__sub_82E32C90) {
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
	// ble cr6,0x82e32cfc
	if (!cr6.gt) goto loc_82E32CFC;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,-2932
	ctx.r8.s64 = ctx.r10.s64 + -2932;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,72
	ctx.r6.s64 = 72;
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
	ctx.lr = 0x82E32CEC;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E32CFC:
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

__attribute__((alias("__imp__sub_82E32D10"))) PPC_WEAK_FUNC(sub_82E32D10);
PPC_FUNC_IMPL(__imp__sub_82E32D10) {
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
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r7,r4,4
	ctx.r7.s64 = ctx.r4.s64 + 4;
	// addi r6,r3,8
	ctx.r6.s64 = ctx.r3.s64 + 8;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// addi r4,r9,-2948
	ctx.r4.s64 = ctx.r9.s64 + -2948;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8247b530
	ctx.lr = 0x82E32D88;
	sub_8247B530(ctx, base);
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

