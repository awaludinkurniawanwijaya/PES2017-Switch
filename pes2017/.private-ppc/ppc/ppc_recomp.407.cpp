#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8364AAD8"))) PPC_WEAK_FUNC(sub_8364AAD8);
PPC_FUNC_IMPL(__imp__sub_8364AAD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8364AAE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r8,r11,13260
	ctx.r8.s64 = ctx.r11.s64 + 13260;
	// addi r7,r10,13248
	ctx.r7.s64 = ctx.r10.s64 + 13248;
	// addi r6,r9,13244
	ctx.r6.s64 = ctx.r9.s64 + 13244;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,380
	ctx.r29.s64 = ctx.r3.s64 + 380;
	// lwz r5,400(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8364ab24
	if (cr6.lt) goto loc_8364AB24;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364AB24;
	sub_8386D088(ctx, base);
loc_8364AB24:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,344
	ctx.r31.s64 = ctx.r28.s64 + 344;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364ab50
	if (cr6.lt) goto loc_8364AB50;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364AB50;
	sub_8386D088(ctx, base);
loc_8364AB50:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364ab74
	if (cr6.lt) goto loc_8364AB74;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364AB74;
	sub_8386D088(ctx, base);
loc_8364AB74:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8364AB88;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364AB90"))) PPC_WEAK_FUNC(sub_8364AB90);
PPC_FUNC_IMPL(__imp__sub_8364AB90) {
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
	// bl 0x8364aad8
	ctx.lr = 0x8364ABB0;
	sub_8364AAD8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8364abd0
	if (cr6.eq) goto loc_8364ABD0;
	// bl 0x82595188
	ctx.lr = 0x8364ABC0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8364ABD0;
	sub_825952B8(ctx, base);
loc_8364ABD0:
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

__attribute__((alias("__imp__sub_8364ABEC"))) PPC_WEAK_FUNC(sub_8364ABEC);
PPC_FUNC_IMPL(__imp__sub_8364ABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364ABF0"))) PPC_WEAK_FUNC(sub_8364ABF0);
PPC_FUNC_IMPL(__imp__sub_8364ABF0) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x8364AC0C;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,12708
	ctx.r4.s64 = ctx.r11.s64 + 12708;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x824208c8
	ctx.lr = 0x8364AC20;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// addi r4,r8,13280
	ctx.r4.s64 = ctx.r8.s64 + 13280;
	// addi r3,r7,13276
	ctx.r3.s64 = ctx.r7.s64 + 13276;
	// addi r6,r10,13296
	ctx.r6.s64 = ctx.r10.s64 + 13296;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r5,r9,13284
	ctx.r5.s64 = ctx.r9.s64 + 13284;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// bl 0x836492b0
	ctx.lr = 0x8364AC6C;
	sub_836492B0(ctx, base);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8364AC8C"))) PPC_WEAK_FUNC(sub_8364AC8C);
PPC_FUNC_IMPL(__imp__sub_8364AC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364AC90"))) PPC_WEAK_FUNC(sub_8364AC90);
PPC_FUNC_IMPL(__imp__sub_8364AC90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8364aca8
	sub_8364ACA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364AC98"))) PPC_WEAK_FUNC(sub_8364AC98);
PPC_FUNC_IMPL(__imp__sub_8364AC98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8364aca8
	sub_8364ACA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364ACA0"))) PPC_WEAK_FUNC(sub_8364ACA0);
PPC_FUNC_IMPL(__imp__sub_8364ACA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8364aca8
	sub_8364ACA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364ACA8"))) PPC_WEAK_FUNC(sub_8364ACA8);
PPC_FUNC_IMPL(__imp__sub_8364ACA8) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,13296
	ctx.r7.s64 = ctx.r11.s64 + 13296;
	// addi r6,r10,13284
	ctx.r6.s64 = ctx.r10.s64 + 13284;
	// addi r5,r9,13280
	ctx.r5.s64 = ctx.r9.s64 + 13280;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,13276
	ctx.r4.s64 = ctx.r8.s64 + 13276;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x83649330
	ctx.lr = 0x8364ACFC;
	sub_83649330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x8364AD04;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8364ad24
	if (cr6.eq) goto loc_8364AD24;
	// bl 0x82595188
	ctx.lr = 0x8364AD14;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8364AD24;
	sub_825952B8(ctx, base);
loc_8364AD24:
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

__attribute__((alias("__imp__sub_8364AD40"))) PPC_WEAK_FUNC(sub_8364AD40);
PPC_FUNC_IMPL(__imp__sub_8364AD40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8364AD48;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,133
	ctx.r10.s64 = 133;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x8364ad88
	if (!cr6.lt) goto loc_8364AD88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8364AD88;
	sub_82E745E0(ctx, base);
loc_8364AD88:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,13452
	ctx.r27.s64 = ctx.r11.s64 + 13452;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364ADD0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364ADDC;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8364adf0
	if (cr6.lt) goto loc_8364ADF0;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8364ADF0;
	sub_82416268(ctx, base);
loc_8364ADF0:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x8364ae10
	if (cr6.lt) goto loc_8364AE10;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364AE10:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_8364AE20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364ae20
	if (!cr6.eq) goto loc_8364AE20;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364AE44;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364AE50;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364ae64
	if (cr6.lt) goto loc_8364AE64;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8364AE64;
	sub_82416268(ctx, base);
loc_8364AE64:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364AE8C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364AE98;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364aeac
	if (cr6.lt) goto loc_8364AEAC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8364AEAC;
	sub_82416268(ctx, base);
loc_8364AEAC:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8364AEC4;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x8364AEE0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364AEEC;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364af00
	if (cr6.lt) goto loc_8364AF00;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8364AF00;
	sub_82416268(ctx, base);
loc_8364AF00:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x8364af20
	if (cr6.lt) goto loc_8364AF20;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364AF20:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_8364AF30:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364af30
	if (!cr6.eq) goto loc_8364AF30;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364AF54;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364AF60;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364af74
	if (cr6.lt) goto loc_8364AF74;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8364AF74;
	sub_82416268(ctx, base);
loc_8364AF74:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364AF9C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364AFA8;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364afbc
	if (cr6.lt) goto loc_8364AFBC;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8364AFBC;
	sub_82416268(ctx, base);
loc_8364AFBC:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x8364afdc
	if (cr6.lt) goto loc_8364AFDC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364AFDC:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_8364AFEC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364afec
	if (!cr6.eq) goto loc_8364AFEC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364B010;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364B01C;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364b030
	if (cr6.lt) goto loc_8364B030;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8364B030;
	sub_82416268(ctx, base);
loc_8364B030:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364B058;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364B064;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364b078
	if (cr6.lt) goto loc_8364B078;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8364B078;
	sub_82416268(ctx, base);
loc_8364B078:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x8364B090;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364B09C"))) PPC_WEAK_FUNC(sub_8364B09C);
PPC_FUNC_IMPL(__imp__sub_8364B09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364B0A0"))) PPC_WEAK_FUNC(sub_8364B0A0);
PPC_FUNC_IMPL(__imp__sub_8364B0A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8364B0A8;
	__savegprlr_14(ctx, base);
	// stwu r1,-1456(r1)
	ea = -1456 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r30.u32);
	// stw r3,1476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1476, ctx.r3.u32);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x83691bb8
	ctx.lr = 0x8364B0D4;
	sub_83691BB8(ctx, base);
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r11,636(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bge cr6,0x8364bf48
	if (!cr6.lt) goto loc_8364BF48;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,11
	ctx.r8.s64 = 720896;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r16,8
	ctx.r16.s64 = 8;
	// li r17,244
	ctx.r17.s64 = 244;
	// ori r14,r8,1
	ctx.r14.u64 = ctx.r8.u64 | 1;
	// addi r26,r11,13720
	ctx.r26.s64 = ctx.r11.s64 + 13720;
	// addi r15,r10,8980
	ctx.r15.s64 = ctx.r10.s64 + 8980;
	// addi r18,r9,9908
	ctx.r18.s64 = ctx.r9.s64 + 9908;
loc_8364B120:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// addi r11,r1,880
	ctx.r11.s64 = ctx.r1.s64 + 880;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// ld r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r19.u32 + 8);
	// ld r9,0(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,888(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 888);
	// lwz r4,892(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// bl 0x82472fc0
	ctx.lr = 0x8364B150;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-264
	ctx.r6.s64 = ctx.r26.s64 + -264;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8364B168;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364b200
	if (!cr6.eq) goto loc_8364B200;
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// addi r11,r1,1040
	ctx.r11.s64 = ctx.r1.s64 + 1040;
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r8,16(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,1052(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1052);
	// lwz r5,1048(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1048);
	// bl 0x82472fc0
	ctx.lr = 0x8364B1A4;
	sub_82472FC0(ctx, base);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364b1b8
	if (!cr6.lt) goto loc_8364B1B8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_8364B1B8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364B1BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364b1bc
	if (!cr6.eq) goto loc_8364B1BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364B1E0;
	sub_824208C8(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364b1f4
	if (cr6.lt) goto loc_8364B1F4;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8364B1F4;
	sub_82416268(ctx, base);
loc_8364B1F4:
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
loc_8364B200:
	// addi r6,r26,-256
	ctx.r6.s64 = ctx.r26.s64 + -256;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8364B218;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364b258
	if (!cr6.eq) goto loc_8364B258;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r10,r1,816
	ctx.r10.s64 = ctx.r1.s64 + 816;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,816(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364b250
	if (!cr6.eq) goto loc_8364B250;
	// ld r11,824(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 824);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364b254
	goto loc_8364B254;
loc_8364B250:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364B254:
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_8364B258:
	// addi r6,r26,-248
	ctx.r6.s64 = ctx.r26.s64 + -248;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8364B270;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364b308
	if (!cr6.eq) goto loc_8364B308;
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// addi r11,r1,944
	ctx.r11.s64 = ctx.r1.s64 + 944;
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,956(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 956);
	// lwz r5,952(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 952);
	// bl 0x82472fc0
	ctx.lr = 0x8364B2AC;
	sub_82472FC0(ctx, base);
	// lwz r7,276(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364b2c0
	if (!cr6.lt) goto loc_8364B2C0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_8364B2C0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364B2C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364b2c4
	if (!cr6.eq) goto loc_8364B2C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,116
	ctx.r3.s64 = ctx.r29.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364B2E8;
	sub_824208C8(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364b2fc
	if (cr6.lt) goto loc_8364B2FC;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8364B2FC;
	sub_82416268(ctx, base);
loc_8364B2FC:
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
loc_8364B308:
	// addi r6,r26,-240
	ctx.r6.s64 = ctx.r26.s64 + -240;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8364B320;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364beb0
	if (!cr6.eq) goto loc_8364BEB0;
	// addi r24,r29,152
	ctx.r24.s64 = ctx.r29.s64 + 152;
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// stw r16,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r16.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r23,r24,8
	ctx.r23.s64 = ctx.r24.s64 + 8;
	// stw r24,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r24.u32);
	// addi r22,r24,4
	ctx.r22.s64 = ctx.r24.s64 + 4;
	// stw r17,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r17.u32);
	// stw r23,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r23.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stw r22,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r22.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x8364B358;
	sub_8247B7D8(ctx, base);
	// lwz r3,160(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// stw r30,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8364b378
	if (cr6.eq) goto loc_8364B378;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x8247b268
	ctx.lr = 0x8364B370;
	sub_8247B268(ctx, base);
	// stw r30,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
loc_8364B378:
	// stw r15,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// lwz r11,28(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// lwz r10,24(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// bge cr6,0x8364beb0
	if (!cr6.lt) goto loc_8364BEB0;
loc_8364B398:
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x8362c7e0
	ctx.lr = 0x8364B3A0;
	sub_8362C7E0(ctx, base);
	// stw r30,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r30.u32);
	// stw r30,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// lwz r5,8(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r4,12(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// bl 0x83691bb8
	ctx.lr = 0x8364B3BC;
	sub_83691BB8(ctx, base);
	// lwz r10,552(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r11,556(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bge cr6,0x8364bdf8
	if (!cr6.lt) goto loc_8364BDF8;
loc_8364B3D8:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r11,r1,848
	ctx.r11.s64 = ctx.r1.s64 + 848;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r5,856(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 856);
	// lwz r4,860(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// bl 0x82472fc0
	ctx.lr = 0x8364B408;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-224
	ctx.r6.s64 = ctx.r26.s64 + -224;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364B420;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364b460
	if (!cr6.eq) goto loc_8364B460;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1008
	ctx.r10.s64 = ctx.r1.s64 + 1008;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1008(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1008);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364b458
	if (!cr6.eq) goto loc_8364B458;
	// ld r11,1016(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1016);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364b45c
	goto loc_8364B45C;
loc_8364B458:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364B45C:
	// stw r11,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r11.u32);
loc_8364B460:
	// addi r6,r26,-212
	ctx.r6.s64 = ctx.r26.s64 + -212;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364B478;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364b510
	if (!cr6.eq) goto loc_8364B510;
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r30.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,684(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// lwz r5,680(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// bl 0x82472fc0
	ctx.lr = 0x8364B4B4;
	sub_82472FC0(ctx, base);
	// lwz r7,308(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364b4c8
	if (!cr6.lt) goto loc_8364B4C8;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
loc_8364B4C8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364B4CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364b4cc
	if (!cr6.eq) goto loc_8364B4CC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1060
	ctx.r3.s64 = ctx.r1.s64 + 1060;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364B4F0;
	sub_824208C8(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364b504
	if (cr6.lt) goto loc_8364B504;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8364B504;
	sub_82416268(ctx, base);
loc_8364B504:
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r30.u8);
loc_8364B510:
	// addi r6,r26,-204
	ctx.r6.s64 = ctx.r26.s64 + -204;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364B528;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364b5c0
	if (!cr6.eq) goto loc_8364B5C0;
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stb r30,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r30.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,712(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	// lwz r4,716(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// bl 0x82472fc0
	ctx.lr = 0x8364B564;
	sub_82472FC0(ctx, base);
	// lwz r7,340(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364b578
	if (!cr6.lt) goto loc_8364B578;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_8364B578:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364B57C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364b57c
	if (!cr6.eq) goto loc_8364B57C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364B5A0;
	sub_824208C8(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364b5b4
	if (cr6.lt) goto loc_8364B5B4;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8364B5B4;
	sub_82416268(ctx, base);
loc_8364B5B4:
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// stb r30,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r30.u8);
loc_8364B5C0:
	// addi r6,r26,-196
	ctx.r6.s64 = ctx.r26.s64 + -196;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364B5D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364b670
	if (!cr6.eq) goto loc_8364B670;
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// addi r11,r1,736
	ctx.r11.s64 = ctx.r1.s64 + 736;
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r30,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r30.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,744(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 744);
	// lwz r4,748(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// bl 0x82472fc0
	ctx.lr = 0x8364B614;
	sub_82472FC0(ctx, base);
	// lwz r7,404(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364b628
	if (!cr6.lt) goto loc_8364B628;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
loc_8364B628:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364B62C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364b62c
	if (!cr6.eq) goto loc_8364B62C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1116
	ctx.r3.s64 = ctx.r1.s64 + 1116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364B650;
	sub_824208C8(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364b664
	if (cr6.lt) goto loc_8364B664;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x8364B664;
	sub_82416268(ctx, base);
loc_8364B664:
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// stb r30,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r30.u8);
loc_8364B670:
	// addi r6,r26,-188
	ctx.r6.s64 = ctx.r26.s64 + -188;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364B688;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364b6c8
	if (!cr6.eq) goto loc_8364B6C8;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,768
	ctx.r10.s64 = ctx.r1.s64 + 768;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,768(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364b6c0
	if (!cr6.eq) goto loc_8364B6C0;
	// ld r11,776(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 776);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364b6c4
	goto loc_8364B6C4;
loc_8364B6C0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364B6C4:
	// stw r11,1144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1144, ctx.r11.u32);
loc_8364B6C8:
	// addi r6,r26,-176
	ctx.r6.s64 = ctx.r26.s64 + -176;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364B6E0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364b720
	if (!cr6.eq) goto loc_8364B720;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,800
	ctx.r10.s64 = ctx.r1.s64 + 800;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,800(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364b718
	if (!cr6.eq) goto loc_8364B718;
	// ld r11,808(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 808);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364b71c
	goto loc_8364B71C;
loc_8364B718:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364B71C:
	// stw r11,1148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1148, ctx.r11.u32);
loc_8364B720:
	// addi r6,r26,-168
	ctx.r6.s64 = ctx.r26.s64 + -168;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364B738;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364b7d0
	if (!cr6.eq) goto loc_8364B7D0;
	// stw r27,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r27.u32);
	// addi r11,r1,832
	ctx.r11.s64 = ctx.r1.s64 + 832;
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stb r30,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r30.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,844(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 844);
	// lwz r5,840(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 840);
	// bl 0x82472fc0
	ctx.lr = 0x8364B774;
	sub_82472FC0(ctx, base);
	// lwz r7,468(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364b788
	if (!cr6.lt) goto loc_8364B788;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
loc_8364B788:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364B78C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364b78c
	if (!cr6.eq) goto loc_8364B78C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364B7B0;
	sub_824208C8(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364b7c4
	if (cr6.lt) goto loc_8364B7C4;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x8364B7C4;
	sub_82416268(ctx, base);
loc_8364B7C4:
	// stw r27,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r27.u32);
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// stb r30,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r30.u8);
loc_8364B7D0:
	// addi r6,r26,-160
	ctx.r6.s64 = ctx.r26.s64 + -160;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364B7E8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364b828
	if (!cr6.eq) goto loc_8364B828;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,864
	ctx.r10.s64 = ctx.r1.s64 + 864;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,864(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364b820
	if (!cr6.eq) goto loc_8364B820;
	// ld r11,872(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 872);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364b824
	goto loc_8364B824;
loc_8364B820:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364B824:
	// stw r11,1180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1180, ctx.r11.u32);
loc_8364B828:
	// addi r6,r26,-144
	ctx.r6.s64 = ctx.r26.s64 + -144;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364B840;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364b880
	if (!cr6.eq) goto loc_8364B880;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,896
	ctx.r10.s64 = ctx.r1.s64 + 896;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,896(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364b878
	if (!cr6.eq) goto loc_8364B878;
	// ld r11,904(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 904);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364b87c
	goto loc_8364B87C;
loc_8364B878:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364B87C:
	// stw r11,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r11.u32);
loc_8364B880:
	// addi r6,r26,-128
	ctx.r6.s64 = ctx.r26.s64 + -128;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364B898;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364b930
	if (!cr6.eq) goto loc_8364B930;
	// stw r27,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r27.u32);
	// addi r11,r1,928
	ctx.r11.s64 = ctx.r1.s64 + 928;
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stb r30,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r30.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,936(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 936);
	// lwz r4,940(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// bl 0x82472fc0
	ctx.lr = 0x8364B8D4;
	sub_82472FC0(ctx, base);
	// lwz r7,436(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364b8e8
	if (!cr6.lt) goto loc_8364B8E8;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
loc_8364B8E8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364B8EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364b8ec
	if (!cr6.eq) goto loc_8364B8EC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1188
	ctx.r3.s64 = ctx.r1.s64 + 1188;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364B910;
	sub_824208C8(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364b924
	if (cr6.lt) goto loc_8364B924;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x8364B924;
	sub_82416268(ctx, base);
loc_8364B924:
	// stw r27,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r27.u32);
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// stb r30,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r30.u8);
loc_8364B930:
	// addi r6,r26,-112
	ctx.r6.s64 = ctx.r26.s64 + -112;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364B948;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364bc6c
	if (!cr6.eq) goto loc_8364BC6C;
	// stw r30,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r30.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x8364B96C;
	sub_83691BB8(ctx, base);
	// lwz r10,584(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// lwz r11,588(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8364bc50
	if (!cr6.lt) goto loc_8364BC50;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_8364B998:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// ld r8,-8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,968(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 968);
	// lwz r4,972(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 972);
	// bl 0x82472fc0
	ctx.lr = 0x8364B9CC;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-104
	ctx.r6.s64 = ctx.r26.s64 + -104;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x8364B9E4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364ba78
	if (!cr6.eq) goto loc_8364BA78;
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// addi r11,r1,992
	ctx.r11.s64 = ctx.r1.s64 + 992;
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stb r30,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1000(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1000);
	// lwz r4,1004(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// bl 0x82472fc0
	ctx.lr = 0x8364BA1C;
	sub_82472FC0(ctx, base);
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8364ba30
	if (!cr6.lt) goto loc_8364BA30;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
loc_8364BA30:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364BA34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364ba34
	if (!cr6.eq) goto loc_8364BA34;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364BA58;
	sub_824208C8(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364ba6c
	if (cr6.lt) goto loc_8364BA6C;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8364BA6C;
	sub_82416268(ctx, base);
loc_8364BA6C:
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// stb r30,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r30.u8);
loc_8364BA78:
	// addi r6,r26,-92
	ctx.r6.s64 = ctx.r26.s64 + -92;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x8364BA90;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364bb24
	if (!cr6.eq) goto loc_8364BB24;
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// addi r11,r1,1024
	ctx.r11.s64 = ctx.r1.s64 + 1024;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1032(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1032);
	// lwz r4,1036(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1036);
	// bl 0x82472fc0
	ctx.lr = 0x8364BAC8;
	sub_82472FC0(ctx, base);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8364badc
	if (!cr6.lt) goto loc_8364BADC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_8364BADC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364BAE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364bae0
	if (!cr6.eq) goto loc_8364BAE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1244
	ctx.r3.s64 = ctx.r1.s64 + 1244;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364BB04;
	sub_824208C8(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364bb18
	if (cr6.lt) goto loc_8364BB18;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8364BB18;
	sub_82416268(ctx, base);
loc_8364BB18:
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
loc_8364BB24:
	// addi r6,r26,-76
	ctx.r6.s64 = ctx.r26.s64 + -76;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x8364BB3C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364bb78
	if (!cr6.eq) goto loc_8364BB78;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,688
	ctx.r10.s64 = ctx.r1.s64 + 688;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,688(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364bb70
	if (!cr6.eq) goto loc_8364BB70;
	// ld r11,696(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 696);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364bb74
	goto loc_8364BB74;
loc_8364BB70:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364BB74:
	// stw r11,1272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1272, ctx.r11.u32);
loc_8364BB78:
	// addi r6,r26,-60
	ctx.r6.s64 = ctx.r26.s64 + -60;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x8364BB90;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364bbcc
	if (!cr6.eq) goto loc_8364BBCC;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,656
	ctx.r10.s64 = ctx.r1.s64 + 656;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,656(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364bbc4
	if (!cr6.eq) goto loc_8364BBC4;
	// ld r11,664(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 664);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364bbc8
	goto loc_8364BBC8;
loc_8364BBC4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364BBC8:
	// stw r11,1276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1276, ctx.r11.u32);
loc_8364BBCC:
	// addi r6,r26,-52
	ctx.r6.s64 = ctx.r26.s64 + -52;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x8364BBE4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364bc20
	if (!cr6.eq) goto loc_8364BC20;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,720
	ctx.r10.s64 = ctx.r1.s64 + 720;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,720(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364bc18
	if (!cr6.eq) goto loc_8364BC18;
	// ld r11,728(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 728);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364bc1c
	goto loc_8364BC1C;
loc_8364BC18:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364BC1C:
	// stw r11,1280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1280, ctx.r11.u32);
loc_8364BC20:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364bc34
	if (cr6.lt) goto loc_8364BC34;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8364BC34;
	sub_82416268(ctx, base);
loc_8364BC34:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// bne 0x8364b998
	if (!cr0.eq) goto loc_8364B998;
	// lwz r29,1476(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1476);
loc_8364BC50:
	// lwz r31,592(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8364bc6c
	if (cr6.eq) goto loc_8364BC6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8364BC64;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8364BC6C;
	sub_82416268(ctx, base);
loc_8364BC6C:
	// addi r6,r26,-36
	ctx.r6.s64 = ctx.r26.s64 + -36;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364BC84;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364bcc4
	if (!cr6.eq) goto loc_8364BCC4;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,976(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364bcbc
	if (!cr6.eq) goto loc_8364BCBC;
	// ld r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 984);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364bcc0
	goto loc_8364BCC0;
loc_8364BCBC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364BCC0:
	// stw r11,1284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1284, ctx.r11.u32);
loc_8364BCC4:
	// addi r6,r26,-28
	ctx.r6.s64 = ctx.r26.s64 + -28;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364BCDC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364bd1c
	if (!cr6.eq) goto loc_8364BD1C;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,752
	ctx.r10.s64 = ctx.r1.s64 + 752;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,752(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364bd14
	if (!cr6.eq) goto loc_8364BD14;
	// ld r11,760(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 760);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364bd18
	goto loc_8364BD18;
loc_8364BD14:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364BD18:
	// stw r11,1288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1288, ctx.r11.u32);
loc_8364BD1C:
	// addi r6,r26,-20
	ctx.r6.s64 = ctx.r26.s64 + -20;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364BD34;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364bd74
	if (!cr6.eq) goto loc_8364BD74;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,912
	ctx.r10.s64 = ctx.r1.s64 + 912;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,912(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364bd6c
	if (!cr6.eq) goto loc_8364BD6C;
	// ld r11,920(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 920);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364bd70
	goto loc_8364BD70;
loc_8364BD6C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364BD70:
	// stw r11,1292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1292, ctx.r11.u32);
loc_8364BD74:
	// addi r6,r26,-12
	ctx.r6.s64 = ctx.r26.s64 + -12;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364BD8C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364bdcc
	if (!cr6.eq) goto loc_8364BDCC;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,784
	ctx.r10.s64 = ctx.r1.s64 + 784;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,784(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364bdc4
	if (!cr6.eq) goto loc_8364BDC4;
	// ld r11,792(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 792);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364bdc8
	goto loc_8364BDC8;
loc_8364BDC4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364BDC8:
	// stw r11,1296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1296, ctx.r11.u32);
loc_8364BDCC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364bde0
	if (cr6.lt) goto loc_8364BDE0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8364BDE0;
	sub_82416268(ctx, base);
loc_8364BDE0:
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// blt cr6,0x8364b3d8
	if (cr6.lt) goto loc_8364B3D8;
loc_8364BDF8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8364be54
	if (cr6.lt) goto loc_8364BE54;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8364be44
	if (!cr6.gt) goto loc_8364BE44;
	// stw r23,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r23.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r24,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r24.u32);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// stw r22,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r22.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r16,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r16.u32);
	// stw r17,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r17.u32);
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// bl 0x8247b270
	ctx.lr = 0x8364BE3C;
	sub_8247B270(ctx, base);
	// stw r15,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
	// b 0x8364be48
	goto loc_8364BE48;
loc_8364BE44:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8364BE48:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8364be7c
	if (cr6.eq) goto loc_8364BE7C;
loc_8364BE54:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mulli r10,r10,244
	ctx.r10.s64 = ctx.r10.s64 * 244;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8364be70
	if (cr0.eq) goto loc_8364BE70;
	// addi r4,r1,1056
	ctx.r4.s64 = ctx.r1.s64 + 1056;
	// bl 0x8362c6c0
	ctx.lr = 0x8364BE70;
	sub_8362C6C0(ctx, base);
loc_8364BE70:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_8364BE7C:
	// lwz r31,560(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8364be98
	if (cr6.eq) goto loc_8364BE98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8364BE90;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8364BE98;
	sub_82416268(ctx, base);
loc_8364BE98:
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x8362c480
	ctx.lr = 0x8364BEA0;
	sub_8362C480(ctx, base);
	// addi r21,r21,16
	ctx.r21.s64 = ctx.r21.s64 + 16;
	// cmplw cr6,r21,r20
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r20.u32, xer);
	// blt cr6,0x8364b398
	if (cr6.lt) goto loc_8364B398;
	// lwz r31,188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
loc_8364BEB0:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8364BEC8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364bf1c
	if (!cr6.eq) goto loc_8364BF1C;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,608(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8364bf00
	if (!cr6.eq) goto loc_8364BF00;
	// ld r11,616(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 616);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364bf18
	goto loc_8364BF18;
loc_8364BF00:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8364bf14
	if (!cr6.eq) goto loc_8364BF14;
	// ld r11,616(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 616);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8364bf18
	goto loc_8364BF18;
loc_8364BF14:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364BF18:
	// stw r11,168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 168, ctx.r11.u32);
loc_8364BF1C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364bf30
	if (cr6.lt) goto loc_8364BF30;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8364BF30;
	sub_82416268(ctx, base);
loc_8364BF30:
	// addi r19,r19,32
	ctx.r19.s64 = ctx.r19.s64 + 32;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// cmplw cr6,r19,r31
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r31.u32, xer);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// blt cr6,0x8364b120
	if (cr6.lt) goto loc_8364B120;
loc_8364BF48:
	// lwz r31,640(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8364bf64
	if (cr6.eq) goto loc_8364BF64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8364BF5C;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8364BF64;
	sub_82416268(ctx, base);
loc_8364BF64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364BF70"))) PPC_WEAK_FUNC(sub_8364BF70);
PPC_FUNC_IMPL(__imp__sub_8364BF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8364BF78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8364BF84;
	sub_82D95768(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,13360
	ctx.r29.s64 = ctx.r11.s64 + 13360;
	// li r5,26
	ctx.r5.s64 = 26;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8364BF9C;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r7,r10,13840
	ctx.r7.s64 = ctx.r10.s64 + 13840;
	// addi r5,r8,13824
	ctx.r5.s64 = ctx.r8.s64 + 13824;
	// addi r6,r9,13828
	ctx.r6.s64 = ctx.r9.s64 + 13828;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8364BFE4;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8364C000;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364C010"))) PPC_WEAK_FUNC(sub_8364C010);
PPC_FUNC_IMPL(__imp__sub_8364C010) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8364c0b8
	sub_8364C0B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364C018"))) PPC_WEAK_FUNC(sub_8364C018);
PPC_FUNC_IMPL(__imp__sub_8364C018) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8364c0b8
	sub_8364C0B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364C020"))) PPC_WEAK_FUNC(sub_8364C020);
PPC_FUNC_IMPL(__imp__sub_8364C020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8364C028;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r8,r11,13840
	ctx.r8.s64 = ctx.r11.s64 + 13840;
	// addi r7,r10,13828
	ctx.r7.s64 = ctx.r10.s64 + 13828;
	// addi r6,r9,13824
	ctx.r6.s64 = ctx.r9.s64 + 13824;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8364c06c
	if (cr6.lt) goto loc_8364C06C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364C06C;
	sub_8386D088(ctx, base);
loc_8364C06C:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364c098
	if (cr6.lt) goto loc_8364C098;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364C098;
	sub_8386D088(ctx, base);
loc_8364C098:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8364C0AC;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364C0B4"))) PPC_WEAK_FUNC(sub_8364C0B4);
PPC_FUNC_IMPL(__imp__sub_8364C0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364C0B8"))) PPC_WEAK_FUNC(sub_8364C0B8);
PPC_FUNC_IMPL(__imp__sub_8364C0B8) {
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
	// bl 0x8364c020
	ctx.lr = 0x8364C0D8;
	sub_8364C020(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8364c0f8
	if (cr6.eq) goto loc_8364C0F8;
	// bl 0x82595188
	ctx.lr = 0x8364C0E8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8364C0F8;
	sub_825952B8(ctx, base);
loc_8364C0F8:
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

__attribute__((alias("__imp__sub_8364C114"))) PPC_WEAK_FUNC(sub_8364C114);
PPC_FUNC_IMPL(__imp__sub_8364C114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364C118"))) PPC_WEAK_FUNC(sub_8364C118);
PPC_FUNC_IMPL(__imp__sub_8364C118) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x8364C134;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,13360
	ctx.r4.s64 = ctx.r11.s64 + 13360;
	// li r5,26
	ctx.r5.s64 = 26;
	// bl 0x824208c8
	ctx.lr = 0x8364C148;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// addi r4,r8,13860
	ctx.r4.s64 = ctx.r8.s64 + 13860;
	// addi r3,r7,13856
	ctx.r3.s64 = ctx.r7.s64 + 13856;
	// addi r6,r10,13876
	ctx.r6.s64 = ctx.r10.s64 + 13876;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r5,r9,13864
	ctx.r5.s64 = ctx.r9.s64 + 13864;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// li r4,999
	ctx.r4.s64 = 999;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// bl 0x83640ab0
	ctx.lr = 0x8364C194;
	sub_83640AB0(ctx, base);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8364C1B4"))) PPC_WEAK_FUNC(sub_8364C1B4);
PPC_FUNC_IMPL(__imp__sub_8364C1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364C1B8"))) PPC_WEAK_FUNC(sub_8364C1B8);
PPC_FUNC_IMPL(__imp__sub_8364C1B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8364c1d0
	sub_8364C1D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364C1C0"))) PPC_WEAK_FUNC(sub_8364C1C0);
PPC_FUNC_IMPL(__imp__sub_8364C1C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8364c1d0
	sub_8364C1D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364C1C8"))) PPC_WEAK_FUNC(sub_8364C1C8);
PPC_FUNC_IMPL(__imp__sub_8364C1C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8364c1d0
	sub_8364C1D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364C1D0"))) PPC_WEAK_FUNC(sub_8364C1D0);
PPC_FUNC_IMPL(__imp__sub_8364C1D0) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,13876
	ctx.r7.s64 = ctx.r11.s64 + 13876;
	// addi r6,r10,13864
	ctx.r6.s64 = ctx.r10.s64 + 13864;
	// addi r5,r9,13860
	ctx.r5.s64 = ctx.r9.s64 + 13860;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,13856
	ctx.r4.s64 = ctx.r8.s64 + 13856;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x83640bb0
	ctx.lr = 0x8364C224;
	sub_83640BB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x8364C22C;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8364c24c
	if (cr6.eq) goto loc_8364C24C;
	// bl 0x82595188
	ctx.lr = 0x8364C23C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8364C24C;
	sub_825952B8(ctx, base);
loc_8364C24C:
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

__attribute__((alias("__imp__sub_8364C268"))) PPC_WEAK_FUNC(sub_8364C268);
PPC_FUNC_IMPL(__imp__sub_8364C268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8364C270;
	__savegprlr_27(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,134
	ctx.r10.s64 = 134;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x8364c2b0
	if (!cr6.lt) goto loc_8364C2B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8364C2B0;
	sub_82E745E0(ctx, base);
loc_8364C2B0:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,14060
	ctx.r27.s64 = ctx.r11.s64 + 14060;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364C2F8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364C304;
	sub_82E74C08(ctx, base);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8364c318
	if (cr6.lt) goto loc_8364C318;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8364C318;
	sub_82416268(ctx, base);
loc_8364C318:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x8364c338
	if (cr6.lt) goto loc_8364C338;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364C338:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_8364C348:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364c348
	if (!cr6.eq) goto loc_8364C348;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364C36C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364C378;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364c38c
	if (cr6.lt) goto loc_8364C38C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8364C38C;
	sub_82416268(ctx, base);
loc_8364C38C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364C3B4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364C3C0;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364c3d4
	if (cr6.lt) goto loc_8364C3D4;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8364C3D4;
	sub_82416268(ctx, base);
loc_8364C3D4:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8364C3EC;
	sub_82E746C0(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x8364C408;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364C414;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364c428
	if (cr6.lt) goto loc_8364C428;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8364C428;
	sub_82416268(ctx, base);
loc_8364C428:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x8364c448
	if (cr6.lt) goto loc_8364C448;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364C448:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_8364C458:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364c458
	if (!cr6.eq) goto loc_8364C458;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364C47C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364C488;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364c49c
	if (cr6.lt) goto loc_8364C49C;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8364C49C;
	sub_82416268(ctx, base);
loc_8364C49C:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364C4C4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364C4D0;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364c4e4
	if (cr6.lt) goto loc_8364C4E4;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8364C4E4;
	sub_82416268(ctx, base);
loc_8364C4E4:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x8364c504
	if (cr6.lt) goto loc_8364C504;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364C504:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_8364C514:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364c514
	if (!cr6.eq) goto loc_8364C514;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364C538;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364C544;
	sub_82E74C08(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364c558
	if (cr6.lt) goto loc_8364C558;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8364C558;
	sub_82416268(ctx, base);
loc_8364C558:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364C580;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364C58C;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364c5a0
	if (cr6.lt) goto loc_8364C5A0;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8364C5A0;
	sub_82416268(ctx, base);
loc_8364C5A0:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// lwz r4,172(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x8364C5B8;
	sub_82E746C0(ctx, base);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82472fc0
	ctx.lr = 0x8364C5D4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364C5E0;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364c5f4
	if (cr6.lt) goto loc_8364C5F4;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8364C5F4;
	sub_82416268(ctx, base);
loc_8364C5F4:
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x8364c614
	if (cr6.lt) goto loc_8364C614;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364C614:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
loc_8364C624:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364c624
	if (!cr6.eq) goto loc_8364C624;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364C648;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364C654;
	sub_82E74C08(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364c668
	if (cr6.lt) goto loc_8364C668;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x8364C668;
	sub_82416268(ctx, base);
loc_8364C668:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364C674"))) PPC_WEAK_FUNC(sub_8364C674);
PPC_FUNC_IMPL(__imp__sub_8364C674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364C678"))) PPC_WEAK_FUNC(sub_8364C678);
PPC_FUNC_IMPL(__imp__sub_8364C678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8364C680;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x8364C6A8;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8364ca90
	if (!cr6.lt) goto loc_8364CA90;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r28,15
	ctx.r28.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r27,r11,14144
	ctx.r27.s64 = ctx.r11.s64 + 14144;
loc_8364C6E0:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x8364C714;
	sub_82472FC0(ctx, base);
	// addi r6,r27,-68
	ctx.r6.s64 = ctx.r27.s64 + -68;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364C72C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364c7c0
	if (!cr6.eq) goto loc_8364C7C0;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x82472fc0
	ctx.lr = 0x8364C764;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8364c778
	if (!cr6.lt) goto loc_8364C778;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_8364C778:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364C77C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364c77c
	if (!cr6.eq) goto loc_8364C77C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364C7A0;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364c7b4
	if (cr6.lt) goto loc_8364C7B4;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8364C7B4;
	sub_82416268(ctx, base);
loc_8364C7B4:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_8364C7C0:
	// addi r6,r27,-60
	ctx.r6.s64 = ctx.r27.s64 + -60;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364C7D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364c814
	if (!cr6.eq) goto loc_8364C814;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,272(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364c80c
	if (!cr6.eq) goto loc_8364C80C;
	// ld r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364c810
	goto loc_8364C810;
loc_8364C80C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364C810:
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_8364C814:
	// addi r6,r27,-52
	ctx.r6.s64 = ctx.r27.s64 + -52;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364C82C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364c8c0
	if (!cr6.eq) goto loc_8364C8C0;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x82472fc0
	ctx.lr = 0x8364C864;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8364c878
	if (!cr6.lt) goto loc_8364C878;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_8364C878:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364C87C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364c87c
	if (!cr6.eq) goto loc_8364C87C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,116
	ctx.r3.s64 = ctx.r29.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364C8A0;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364c8b4
	if (cr6.lt) goto loc_8364C8B4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8364C8B4;
	sub_82416268(ctx, base);
loc_8364C8B4:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_8364C8C0:
	// addi r6,r27,-44
	ctx.r6.s64 = ctx.r27.s64 + -44;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364C8D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364c914
	if (!cr6.eq) goto loc_8364C914;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,336(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364c90c
	if (!cr6.eq) goto loc_8364C90C;
	// ld r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364c910
	goto loc_8364C910;
loc_8364C90C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364C910:
	// stw r11,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r11.u32);
loc_8364C914:
	// addi r6,r27,-40
	ctx.r6.s64 = ctx.r27.s64 + -40;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364C92C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364c968
	if (!cr6.eq) goto loc_8364C968;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364c960
	if (!cr6.eq) goto loc_8364C960;
	// ld r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364c964
	goto loc_8364C964;
loc_8364C960:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364C964:
	// stw r11,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r11.u32);
loc_8364C968:
	// addi r6,r27,-28
	ctx.r6.s64 = ctx.r27.s64 + -28;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364C980;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364c9bc
	if (!cr6.eq) goto loc_8364C9BC;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364c9b4
	if (!cr6.eq) goto loc_8364C9B4;
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364c9b8
	goto loc_8364C9B8;
loc_8364C9B4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364C9B8:
	// stw r11,156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 156, ctx.r11.u32);
loc_8364C9BC:
	// addi r6,r27,-16
	ctx.r6.s64 = ctx.r27.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364C9D4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364ca10
	if (!cr6.eq) goto loc_8364CA10;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364ca08
	if (!cr6.eq) goto loc_8364CA08;
	// ld r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364ca0c
	goto loc_8364CA0C;
loc_8364CA08:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364CA0C:
	// stw r11,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r11.u32);
loc_8364CA10:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,21
	ctx.r7.s64 = 21;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364CA28;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364ca64
	if (!cr6.eq) goto loc_8364CA64;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364ca5c
	if (!cr6.eq) goto loc_8364CA5C;
	// ld r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364ca60
	goto loc_8364CA60;
loc_8364CA5C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364CA60:
	// stw r11,164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 164, ctx.r11.u32);
loc_8364CA64:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364ca78
	if (cr6.lt) goto loc_8364CA78;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8364CA78;
	sub_82416268(ctx, base);
loc_8364CA78:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x8364c6e0
	if (!cr0.eq) goto loc_8364C6E0;
loc_8364CA90:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8364caac
	if (cr6.eq) goto loc_8364CAAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8364CAA4;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8364CAAC;
	sub_82416268(ctx, base);
loc_8364CAAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364CAB8"))) PPC_WEAK_FUNC(sub_8364CAB8);
PPC_FUNC_IMPL(__imp__sub_8364CAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8364CAC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8364CACC;
	sub_82D95768(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,13944
	ctx.r29.s64 = ctx.r11.s64 + 13944;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8364CAE4;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r7,r10,14268
	ctx.r7.s64 = ctx.r10.s64 + 14268;
	// addi r5,r8,14252
	ctx.r5.s64 = ctx.r8.s64 + 14252;
	// addi r6,r9,14256
	ctx.r6.s64 = ctx.r9.s64 + 14256;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8364CB2C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8364CB48;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8364CB68;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364CB74"))) PPC_WEAK_FUNC(sub_8364CB74);
PPC_FUNC_IMPL(__imp__sub_8364CB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364CB78"))) PPC_WEAK_FUNC(sub_8364CB78);
PPC_FUNC_IMPL(__imp__sub_8364CB78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8364cc40
	sub_8364CC40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364CB80"))) PPC_WEAK_FUNC(sub_8364CB80);
PPC_FUNC_IMPL(__imp__sub_8364CB80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8364cc40
	sub_8364CC40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364CB88"))) PPC_WEAK_FUNC(sub_8364CB88);
PPC_FUNC_IMPL(__imp__sub_8364CB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8364CB90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r8,r11,14268
	ctx.r8.s64 = ctx.r11.s64 + 14268;
	// addi r7,r10,14256
	ctx.r7.s64 = ctx.r10.s64 + 14256;
	// addi r6,r9,14252
	ctx.r6.s64 = ctx.r9.s64 + 14252;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,376
	ctx.r29.s64 = ctx.r3.s64 + 376;
	// lwz r5,396(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8364cbd4
	if (cr6.lt) goto loc_8364CBD4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364CBD4;
	sub_8386D088(ctx, base);
loc_8364CBD4:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,344
	ctx.r31.s64 = ctx.r28.s64 + 344;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364cc00
	if (cr6.lt) goto loc_8364CC00;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364CC00;
	sub_8386D088(ctx, base);
loc_8364CC00:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364cc24
	if (cr6.lt) goto loc_8364CC24;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364CC24;
	sub_8386D088(ctx, base);
loc_8364CC24:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8364CC38;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364CC40"))) PPC_WEAK_FUNC(sub_8364CC40);
PPC_FUNC_IMPL(__imp__sub_8364CC40) {
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
	// bl 0x8364cb88
	ctx.lr = 0x8364CC60;
	sub_8364CB88(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8364cc80
	if (cr6.eq) goto loc_8364CC80;
	// bl 0x82595188
	ctx.lr = 0x8364CC70;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8364CC80;
	sub_825952B8(ctx, base);
loc_8364CC80:
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

__attribute__((alias("__imp__sub_8364CC9C"))) PPC_WEAK_FUNC(sub_8364CC9C);
PPC_FUNC_IMPL(__imp__sub_8364CC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364CCA0"))) PPC_WEAK_FUNC(sub_8364CCA0);
PPC_FUNC_IMPL(__imp__sub_8364CCA0) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x8364CCB8;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,13944
	ctx.r4.s64 = ctx.r11.s64 + 13944;
	// li r5,31
	ctx.r5.s64 = 31;
	// bl 0x824208c8
	ctx.lr = 0x8364CCCC;
	sub_824208C8(ctx, base);
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r3,r7,14316
	ctx.r3.s64 = ctx.r7.s64 + 14316;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,14300
	ctx.r6.s64 = ctx.r10.s64 + 14300;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r5,r9,14288
	ctx.r5.s64 = ctx.r9.s64 + 14288;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// addi r4,r8,14284
	ctx.r4.s64 = ctx.r8.s64 + 14284;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8364CD2C"))) PPC_WEAK_FUNC(sub_8364CD2C);
PPC_FUNC_IMPL(__imp__sub_8364CD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364CD30"))) PPC_WEAK_FUNC(sub_8364CD30);
PPC_FUNC_IMPL(__imp__sub_8364CD30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8364cd48
	sub_8364CD48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364CD38"))) PPC_WEAK_FUNC(sub_8364CD38);
PPC_FUNC_IMPL(__imp__sub_8364CD38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8364cd48
	sub_8364CD48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364CD40"))) PPC_WEAK_FUNC(sub_8364CD40);
PPC_FUNC_IMPL(__imp__sub_8364CD40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8364cd48
	sub_8364CD48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364CD48"))) PPC_WEAK_FUNC(sub_8364CD48);
PPC_FUNC_IMPL(__imp__sub_8364CD48) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,14300
	ctx.r7.s64 = ctx.r11.s64 + 14300;
	// addi r6,r10,14288
	ctx.r6.s64 = ctx.r10.s64 + 14288;
	// addi r5,r9,14284
	ctx.r5.s64 = ctx.r9.s64 + 14284;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,14316
	ctx.r4.s64 = ctx.r8.s64 + 14316;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x8364CD98;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8364cdb8
	if (cr6.eq) goto loc_8364CDB8;
	// bl 0x82595188
	ctx.lr = 0x8364CDA8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8364CDB8;
	sub_825952B8(ctx, base);
loc_8364CDB8:
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

__attribute__((alias("__imp__sub_8364CDD4"))) PPC_WEAK_FUNC(sub_8364CDD4);
PPC_FUNC_IMPL(__imp__sub_8364CDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364CDD8"))) PPC_WEAK_FUNC(sub_8364CDD8);
PPC_FUNC_IMPL(__imp__sub_8364CDD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8364CDE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,134
	ctx.r10.s64 = 134;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x8364ce20
	if (!cr6.lt) goto loc_8364CE20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8364CE20;
	sub_82E745E0(ctx, base);
loc_8364CE20:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,14488
	ctx.r27.s64 = ctx.r11.s64 + 14488;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364CE68;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364CE74;
	sub_82E74C08(ctx, base);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8364ce88
	if (cr6.lt) goto loc_8364CE88;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8364CE88;
	sub_82416268(ctx, base);
loc_8364CE88:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x8364cea8
	if (cr6.lt) goto loc_8364CEA8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364CEA8:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_8364CEB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364ceb8
	if (!cr6.eq) goto loc_8364CEB8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364CEDC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364CEE8;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364cefc
	if (cr6.lt) goto loc_8364CEFC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8364CEFC;
	sub_82416268(ctx, base);
loc_8364CEFC:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364CF24;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364CF30;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364cf44
	if (cr6.lt) goto loc_8364CF44;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8364CF44;
	sub_82416268(ctx, base);
loc_8364CF44:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8364CF5C;
	sub_82E746C0(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x8364CF78;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364CF84;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364cf98
	if (cr6.lt) goto loc_8364CF98;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8364CF98;
	sub_82416268(ctx, base);
loc_8364CF98:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x8364cfb8
	if (cr6.lt) goto loc_8364CFB8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364CFB8:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_8364CFC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364cfc8
	if (!cr6.eq) goto loc_8364CFC8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364CFEC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364CFF8;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364d00c
	if (cr6.lt) goto loc_8364D00C;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8364D00C;
	sub_82416268(ctx, base);
loc_8364D00C:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364D034;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364D040;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364d054
	if (cr6.lt) goto loc_8364D054;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8364D054;
	sub_82416268(ctx, base);
loc_8364D054:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x8364d074
	if (cr6.lt) goto loc_8364D074;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364D074:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_8364D084:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364d084
	if (!cr6.eq) goto loc_8364D084;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364D0A8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364D0B4;
	sub_82E74C08(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364d0c8
	if (cr6.lt) goto loc_8364D0C8;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8364D0C8;
	sub_82416268(ctx, base);
loc_8364D0C8:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364D0F0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364D0FC;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364d110
	if (cr6.lt) goto loc_8364D110;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8364D110;
	sub_82416268(ctx, base);
loc_8364D110:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// lwz r4,172(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x8364D128;
	sub_82E746C0(ctx, base);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82472fc0
	ctx.lr = 0x8364D144;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364D150;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364d164
	if (cr6.lt) goto loc_8364D164;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8364D164;
	sub_82416268(ctx, base);
loc_8364D164:
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x8364d184
	if (cr6.lt) goto loc_8364D184;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364D184:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
loc_8364D194:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364d194
	if (!cr6.eq) goto loc_8364D194;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364D1B8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364D1C4;
	sub_82E74C08(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364d1d8
	if (cr6.lt) goto loc_8364D1D8;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x8364D1D8;
	sub_82416268(ctx, base);
loc_8364D1D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364D1E4"))) PPC_WEAK_FUNC(sub_8364D1E4);
PPC_FUNC_IMPL(__imp__sub_8364D1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364D1E8"))) PPC_WEAK_FUNC(sub_8364D1E8);
PPC_FUNC_IMPL(__imp__sub_8364D1E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8364D1F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x8364D218;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8364d600
	if (!cr6.lt) goto loc_8364D600;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r28,15
	ctx.r28.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r27,r11,14580
	ctx.r27.s64 = ctx.r11.s64 + 14580;
loc_8364D250:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x8364D284;
	sub_82472FC0(ctx, base);
	// addi r6,r27,-76
	ctx.r6.s64 = ctx.r27.s64 + -76;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364D29C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364d330
	if (!cr6.eq) goto loc_8364D330;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x82472fc0
	ctx.lr = 0x8364D2D4;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8364d2e8
	if (!cr6.lt) goto loc_8364D2E8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_8364D2E8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364D2EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364d2ec
	if (!cr6.eq) goto loc_8364D2EC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364D310;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364d324
	if (cr6.lt) goto loc_8364D324;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8364D324;
	sub_82416268(ctx, base);
loc_8364D324:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_8364D330:
	// addi r6,r27,-68
	ctx.r6.s64 = ctx.r27.s64 + -68;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364D348;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364d384
	if (!cr6.eq) goto loc_8364D384;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,272(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364d37c
	if (!cr6.eq) goto loc_8364D37C;
	// ld r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364d380
	goto loc_8364D380;
loc_8364D37C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364D380:
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_8364D384:
	// addi r6,r27,-60
	ctx.r6.s64 = ctx.r27.s64 + -60;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364D39C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364d430
	if (!cr6.eq) goto loc_8364D430;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x82472fc0
	ctx.lr = 0x8364D3D4;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8364d3e8
	if (!cr6.lt) goto loc_8364D3E8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_8364D3E8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364D3EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364d3ec
	if (!cr6.eq) goto loc_8364D3EC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,116
	ctx.r3.s64 = ctx.r29.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364D410;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364d424
	if (cr6.lt) goto loc_8364D424;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8364D424;
	sub_82416268(ctx, base);
loc_8364D424:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_8364D430:
	// addi r6,r27,-52
	ctx.r6.s64 = ctx.r27.s64 + -52;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364D448;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364d484
	if (!cr6.eq) goto loc_8364D484;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,336(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364d47c
	if (!cr6.eq) goto loc_8364D47C;
	// ld r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364d480
	goto loc_8364D480;
loc_8364D47C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364D480:
	// stw r11,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r11.u32);
loc_8364D484:
	// addi r6,r27,-48
	ctx.r6.s64 = ctx.r27.s64 + -48;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364D49C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364d4d8
	if (!cr6.eq) goto loc_8364D4D8;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364d4d0
	if (!cr6.eq) goto loc_8364D4D0;
	// ld r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364d4d4
	goto loc_8364D4D4;
loc_8364D4D0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364D4D4:
	// stw r11,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r11.u32);
loc_8364D4D8:
	// addi r6,r27,-36
	ctx.r6.s64 = ctx.r27.s64 + -36;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364D4F0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364d52c
	if (!cr6.eq) goto loc_8364D52C;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364d524
	if (!cr6.eq) goto loc_8364D524;
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364d528
	goto loc_8364D528;
loc_8364D524:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364D528:
	// stw r11,156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 156, ctx.r11.u32);
loc_8364D52C:
	// addi r6,r27,-16
	ctx.r6.s64 = ctx.r27.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364D544;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364d580
	if (!cr6.eq) goto loc_8364D580;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364d578
	if (!cr6.eq) goto loc_8364D578;
	// ld r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364d57c
	goto loc_8364D57C;
loc_8364D578:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364D57C:
	// stw r11,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r11.u32);
loc_8364D580:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,21
	ctx.r7.s64 = 21;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364D598;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364d5d4
	if (!cr6.eq) goto loc_8364D5D4;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364d5cc
	if (!cr6.eq) goto loc_8364D5CC;
	// ld r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364d5d0
	goto loc_8364D5D0;
loc_8364D5CC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364D5D0:
	// stw r11,164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 164, ctx.r11.u32);
loc_8364D5D4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364d5e8
	if (cr6.lt) goto loc_8364D5E8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8364D5E8;
	sub_82416268(ctx, base);
loc_8364D5E8:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x8364d250
	if (!cr0.eq) goto loc_8364D250;
loc_8364D600:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8364d61c
	if (cr6.eq) goto loc_8364D61C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8364D614;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8364D61C;
	sub_82416268(ctx, base);
loc_8364D61C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364D628"))) PPC_WEAK_FUNC(sub_8364D628);
PPC_FUNC_IMPL(__imp__sub_8364D628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8364D630;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8364D63C;
	sub_82D95768(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,14368
	ctx.r29.s64 = ctx.r11.s64 + 14368;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8364D654;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r7,r10,14704
	ctx.r7.s64 = ctx.r10.s64 + 14704;
	// addi r5,r8,14688
	ctx.r5.s64 = ctx.r8.s64 + 14688;
	// addi r6,r9,14692
	ctx.r6.s64 = ctx.r9.s64 + 14692;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8364D69C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8364D6B8;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8364D6D8;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364D6E4"))) PPC_WEAK_FUNC(sub_8364D6E4);
PPC_FUNC_IMPL(__imp__sub_8364D6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364D6E8"))) PPC_WEAK_FUNC(sub_8364D6E8);
PPC_FUNC_IMPL(__imp__sub_8364D6E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8364d7b0
	sub_8364D7B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364D6F0"))) PPC_WEAK_FUNC(sub_8364D6F0);
PPC_FUNC_IMPL(__imp__sub_8364D6F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8364d7b0
	sub_8364D7B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364D6F8"))) PPC_WEAK_FUNC(sub_8364D6F8);
PPC_FUNC_IMPL(__imp__sub_8364D6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8364D700;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r8,r11,14704
	ctx.r8.s64 = ctx.r11.s64 + 14704;
	// addi r7,r10,14692
	ctx.r7.s64 = ctx.r10.s64 + 14692;
	// addi r6,r9,14688
	ctx.r6.s64 = ctx.r9.s64 + 14688;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,376
	ctx.r29.s64 = ctx.r3.s64 + 376;
	// lwz r5,396(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8364d744
	if (cr6.lt) goto loc_8364D744;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364D744;
	sub_8386D088(ctx, base);
loc_8364D744:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,344
	ctx.r31.s64 = ctx.r28.s64 + 344;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364d770
	if (cr6.lt) goto loc_8364D770;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364D770;
	sub_8386D088(ctx, base);
loc_8364D770:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364d794
	if (cr6.lt) goto loc_8364D794;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364D794;
	sub_8386D088(ctx, base);
loc_8364D794:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8364D7A8;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364D7B0"))) PPC_WEAK_FUNC(sub_8364D7B0);
PPC_FUNC_IMPL(__imp__sub_8364D7B0) {
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
	// bl 0x8364d6f8
	ctx.lr = 0x8364D7D0;
	sub_8364D6F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8364d7f0
	if (cr6.eq) goto loc_8364D7F0;
	// bl 0x82595188
	ctx.lr = 0x8364D7E0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8364D7F0;
	sub_825952B8(ctx, base);
loc_8364D7F0:
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

__attribute__((alias("__imp__sub_8364D80C"))) PPC_WEAK_FUNC(sub_8364D80C);
PPC_FUNC_IMPL(__imp__sub_8364D80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364D810"))) PPC_WEAK_FUNC(sub_8364D810);
PPC_FUNC_IMPL(__imp__sub_8364D810) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x8364D828;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,14368
	ctx.r4.s64 = ctx.r11.s64 + 14368;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x824208c8
	ctx.lr = 0x8364D83C;
	sub_824208C8(ctx, base);
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r3,r7,14752
	ctx.r3.s64 = ctx.r7.s64 + 14752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,14736
	ctx.r6.s64 = ctx.r10.s64 + 14736;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r5,r9,14724
	ctx.r5.s64 = ctx.r9.s64 + 14724;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// addi r4,r8,14720
	ctx.r4.s64 = ctx.r8.s64 + 14720;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8364D89C"))) PPC_WEAK_FUNC(sub_8364D89C);
PPC_FUNC_IMPL(__imp__sub_8364D89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364D8A0"))) PPC_WEAK_FUNC(sub_8364D8A0);
PPC_FUNC_IMPL(__imp__sub_8364D8A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8364d8b8
	sub_8364D8B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364D8A8"))) PPC_WEAK_FUNC(sub_8364D8A8);
PPC_FUNC_IMPL(__imp__sub_8364D8A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8364d8b8
	sub_8364D8B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364D8B0"))) PPC_WEAK_FUNC(sub_8364D8B0);
PPC_FUNC_IMPL(__imp__sub_8364D8B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8364d8b8
	sub_8364D8B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364D8B8"))) PPC_WEAK_FUNC(sub_8364D8B8);
PPC_FUNC_IMPL(__imp__sub_8364D8B8) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,14736
	ctx.r7.s64 = ctx.r11.s64 + 14736;
	// addi r6,r10,14724
	ctx.r6.s64 = ctx.r10.s64 + 14724;
	// addi r5,r9,14720
	ctx.r5.s64 = ctx.r9.s64 + 14720;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,14752
	ctx.r4.s64 = ctx.r8.s64 + 14752;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x8364D908;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8364d928
	if (cr6.eq) goto loc_8364D928;
	// bl 0x82595188
	ctx.lr = 0x8364D918;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8364D928;
	sub_825952B8(ctx, base);
loc_8364D928:
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

__attribute__((alias("__imp__sub_8364D944"))) PPC_WEAK_FUNC(sub_8364D944);
PPC_FUNC_IMPL(__imp__sub_8364D944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364D948"))) PPC_WEAK_FUNC(sub_8364D948);
PPC_FUNC_IMPL(__imp__sub_8364D948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8364D950;
	__savegprlr_25(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,136
	ctx.r11.s64 = 136;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x8364d990
	if (!cr6.lt) goto loc_8364D990;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8364D990;
	sub_82E745E0(ctx, base);
loc_8364D990:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r26,r11,14968
	ctx.r26.s64 = ctx.r11.s64 + 14968;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r26,-64
	ctx.r4.s64 = ctx.r26.s64 + -64;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364D9D8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364D9E4;
	sub_82E74C08(ctx, base);
	// lwz r5,404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8364d9f8
	if (cr6.lt) goto loc_8364D9F8;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x8364D9F8;
	sub_82416268(ctx, base);
loc_8364D9F8:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// addi r4,r25,20
	ctx.r4.s64 = ctx.r25.s64 + 20;
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x8364da18
	if (cr6.lt) goto loc_8364DA18;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364DA18:
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_8364DA28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364da28
	if (!cr6.eq) goto loc_8364DA28;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364DA4C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364DA58;
	sub_82E74C08(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364da6c
	if (cr6.lt) goto loc_8364DA6C;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8364DA6C;
	sub_82416268(ctx, base);
loc_8364DA6C:
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// addi r4,r26,-56
	ctx.r4.s64 = ctx.r26.s64 + -56;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364DA94;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364DAA0;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364dab4
	if (cr6.lt) goto loc_8364DAB4;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8364DAB4;
	sub_82416268(ctx, base);
loc_8364DAB4:
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,48(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8364DACC;
	sub_82E746C0(ctx, base);
	// stw r27,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r27.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// addi r4,r26,-48
	ctx.r4.s64 = ctx.r26.s64 + -48;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82472fc0
	ctx.lr = 0x8364DAE8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364DAF4;
	sub_82E74C08(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364db08
	if (cr6.lt) goto loc_8364DB08;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x8364DB08;
	sub_82416268(ctx, base);
loc_8364DB08:
	// lwz r11,136(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 136);
	// addi r4,r25,116
	ctx.r4.s64 = ctx.r25.s64 + 116;
	// stw r27,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r27.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// blt cr6,0x8364db28
	if (cr6.lt) goto loc_8364DB28;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364DB28:
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_8364DB38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364db38
	if (!cr6.eq) goto loc_8364DB38;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364DB5C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364DB68;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364db7c
	if (cr6.lt) goto loc_8364DB7C;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8364DB7C;
	sub_82416268(ctx, base);
loc_8364DB7C:
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// addi r4,r26,-40
	ctx.r4.s64 = ctx.r26.s64 + -40;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364DBA4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364DBB0;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364dbc4
	if (cr6.lt) goto loc_8364DBC4;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8364DBC4;
	sub_82416268(ctx, base);
loc_8364DBC4:
	// lwz r11,164(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 164);
	// addi r4,r25,144
	ctx.r4.s64 = ctx.r25.s64 + 144;
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x8364dbe4
	if (cr6.lt) goto loc_8364DBE4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364DBE4:
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_8364DBF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364dbf4
	if (!cr6.eq) goto loc_8364DBF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364DC18;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364DC24;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364dc38
	if (cr6.lt) goto loc_8364DC38;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8364DC38;
	sub_82416268(ctx, base);
loc_8364DC38:
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// addi r4,r26,-32
	ctx.r4.s64 = ctx.r26.s64 + -32;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r27,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r27.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364DC60;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364DC6C;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364dc80
	if (cr6.lt) goto loc_8364DC80;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x8364DC80;
	sub_82416268(ctx, base);
loc_8364DC80:
	// stw r27,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// lwz r4,172(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x8364DC98;
	sub_82E746C0(ctx, base);
	// stw r27,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r27.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// addi r4,r26,-28
	ctx.r4.s64 = ctx.r26.s64 + -28;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// li r5,18
	ctx.r5.s64 = 18;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82472fc0
	ctx.lr = 0x8364DCB4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364DCC0;
	sub_82E74C08(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364dcd4
	if (cr6.lt) goto loc_8364DCD4;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x8364DCD4;
	sub_82416268(ctx, base);
loc_8364DCD4:
	// stw r27,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// addi r28,r25,176
	ctx.r28.s64 = ctx.r25.s64 + 176;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// lwz r4,176(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 176);
	// bl 0x82e749f8
	ctx.lr = 0x8364DCF0;
	sub_82E749F8(ctx, base);
	// lwz r11,176(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 176);
	// lwz r10,184(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 184);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x8364dd34
	if (cr6.eq) goto loc_8364DD34;
loc_8364DD0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82e746c0
	ctx.lr = 0x8364DD18;
	sub_82E746C0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x8364dd0c
	if (!cr6.eq) goto loc_8364DD0C;
loc_8364DD34:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r4,r26,-8
	ctx.r4.s64 = ctx.r26.s64 + -8;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x8364DD50;
	sub_82472FC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82e74890
	ctx.lr = 0x8364DD5C;
	sub_82E74890(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x8364dd78
	if (!cr6.lt) goto loc_8364DD78;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
loc_8364DD78:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x8364dd94
	if (!cr6.lt) goto loc_8364DD94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8364DD94;
	sub_82E745E0(ctx, base);
loc_8364DD94:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x8364DDAC;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364ddcc
	if (cr6.lt) goto loc_8364DDCC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8364DDCC;
	sub_82416268(ctx, base);
loc_8364DDCC:
	// lwz r11,212(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 212);
	// addi r4,r25,192
	ctx.r4.s64 = ctx.r25.s64 + 192;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x8364ddec
	if (cr6.lt) goto loc_8364DDEC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364DDEC:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_8364DDFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364ddfc
	if (!cr6.eq) goto loc_8364DDFC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364DE20;
	sub_82472FC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82e74890
	ctx.lr = 0x8364DE2C;
	sub_82E74890(ctx, base);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bge cr6,0x8364de48
	if (!cr6.lt) goto loc_8364DE48;
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
loc_8364DE48:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x8364de64
	if (!cr6.lt) goto loc_8364DE64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8364DE64;
	sub_82E745E0(ctx, base);
loc_8364DE64:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x8364DE7C;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364de9c
	if (cr6.lt) goto loc_8364DE9C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8364DE9C;
	sub_82416268(ctx, base);
loc_8364DE9C:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364DEC4;
	sub_82472FC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82e74890
	ctx.lr = 0x8364DED0;
	sub_82E74890(ctx, base);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bge cr6,0x8364deec
	if (!cr6.lt) goto loc_8364DEEC;
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
loc_8364DEEC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x8364df08
	if (!cr6.lt) goto loc_8364DF08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8364DF08;
	sub_82E745E0(ctx, base);
loc_8364DF08:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x8364DF20;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364df40
	if (cr6.lt) goto loc_8364DF40;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8364DF40;
	sub_82416268(ctx, base);
loc_8364DF40:
	// lwz r11,240(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 240);
	// addi r4,r25,220
	ctx.r4.s64 = ctx.r25.s64 + 220;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x8364df60
	if (cr6.lt) goto loc_8364DF60;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364DF60:
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_8364DF70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364df70
	if (!cr6.eq) goto loc_8364DF70;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364DF94;
	sub_82472FC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82e74890
	ctx.lr = 0x8364DFA0;
	sub_82E74890(ctx, base);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r29,192(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bge cr6,0x8364dfbc
	if (!cr6.lt) goto loc_8364DFBC;
	// addi r29,r1,192
	ctx.r29.s64 = ctx.r1.s64 + 192;
loc_8364DFBC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x8364dfd8
	if (!cr6.lt) goto loc_8364DFD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8364DFD8;
	sub_82E745E0(ctx, base);
loc_8364DFD8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x8364DFF0;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364e010
	if (cr6.lt) goto loc_8364E010;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8364E010;
	sub_82416268(ctx, base);
loc_8364E010:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364E01C"))) PPC_WEAK_FUNC(sub_8364E01C);
PPC_FUNC_IMPL(__imp__sub_8364E01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364E020"))) PPC_WEAK_FUNC(sub_8364E020);
PPC_FUNC_IMPL(__imp__sub_8364E020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8364E028;
	__savegprlr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x8364E050;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8364e2e8
	if (!cr6.lt) goto loc_8364E2E8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r26,r11,15008
	ctx.r26.s64 = ctx.r11.s64 + 15008;
loc_8364E088:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x82472fc0
	ctx.lr = 0x8364E0BC;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-24
	ctx.r6.s64 = ctx.r26.s64 + -24;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364E0D4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364e168
	if (!cr6.eq) goto loc_8364E168;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x8364E10C;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8364e120
	if (!cr6.lt) goto loc_8364E120;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_8364E120:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364E124:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364e124
	if (!cr6.eq) goto loc_8364E124;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364E148;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364e15c
	if (cr6.lt) goto loc_8364E15C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8364E15C;
	sub_82416268(ctx, base);
loc_8364E15C:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_8364E168:
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364E180;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364e1bc
	if (!cr6.eq) goto loc_8364E1BC;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364e1b4
	if (!cr6.eq) goto loc_8364E1B4;
	// ld r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364e1b8
	goto loc_8364E1B8;
loc_8364E1B4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364E1B8:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_8364E1BC:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364E1D4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364e268
	if (!cr6.eq) goto loc_8364E268;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x82472fc0
	ctx.lr = 0x8364E20C;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8364e220
	if (!cr6.lt) goto loc_8364E220;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_8364E220:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364E224:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364e224
	if (!cr6.eq) goto loc_8364E224;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364E248;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364e25c
	if (cr6.lt) goto loc_8364E25C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8364E25C;
	sub_82416268(ctx, base);
loc_8364E25C:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_8364E268:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364E280;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364e2bc
	if (!cr6.eq) goto loc_8364E2BC;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364e2b4
	if (!cr6.eq) goto loc_8364E2B4;
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364e2b8
	goto loc_8364E2B8;
loc_8364E2B4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8364E2B8:
	// stw r11,148(r28)
	PPC_STORE_U32(ctx.r28.u32 + 148, ctx.r11.u32);
loc_8364E2BC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364e2d0
	if (cr6.lt) goto loc_8364E2D0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8364E2D0;
	sub_82416268(ctx, base);
loc_8364E2D0:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x8364e088
	if (!cr0.eq) goto loc_8364E088;
loc_8364E2E8:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8364e304
	if (cr6.eq) goto loc_8364E304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8364E2FC;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8364E304;
	sub_82416268(ctx, base);
loc_8364E304:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364E310"))) PPC_WEAK_FUNC(sub_8364E310);
PPC_FUNC_IMPL(__imp__sub_8364E310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8364E318;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8364E324;
	sub_82D95768(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,14808
	ctx.r29.s64 = ctx.r11.s64 + 14808;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8364E33C;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r7,r10,15120
	ctx.r7.s64 = ctx.r10.s64 + 15120;
	// addi r5,r8,15104
	ctx.r5.s64 = ctx.r8.s64 + 15104;
	// addi r6,r9,15108
	ctx.r6.s64 = ctx.r9.s64 + 15108;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8364E384;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8364E3A0;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// std r30,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r30.u64);
	// bl 0x82423930
	ctx.lr = 0x8364E3BC;
	sub_82423930(ctx, base);
	// stw r28,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r28.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// stb r30,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r30.u8);
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8364E3D8;
	sub_824208C8(ctx, base);
	// stw r28,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r28.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// stb r30,420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 420, ctx.r30.u8);
	// addi r4,r29,80
	ctx.r4.s64 = ctx.r29.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8364E3F4;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364E400"))) PPC_WEAK_FUNC(sub_8364E400);
PPC_FUNC_IMPL(__imp__sub_8364E400) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8364e4f8
	sub_8364E4F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364E408"))) PPC_WEAK_FUNC(sub_8364E408);
PPC_FUNC_IMPL(__imp__sub_8364E408) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8364e4f8
	sub_8364E4F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364E410"))) PPC_WEAK_FUNC(sub_8364E410);
PPC_FUNC_IMPL(__imp__sub_8364E410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8364E418;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r8,r11,15120
	ctx.r8.s64 = ctx.r11.s64 + 15120;
	// addi r7,r10,15108
	ctx.r7.s64 = ctx.r10.s64 + 15108;
	// addi r6,r9,15104
	ctx.r6.s64 = ctx.r9.s64 + 15104;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r28,r3,420
	ctx.r28.s64 = ctx.r3.s64 + 420;
	// lwz r5,440(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8364e45c
	if (cr6.lt) goto loc_8364E45C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364E45C;
	sub_8386D088(ctx, base);
loc_8364E45C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r29,r30,392
	ctx.r29.s64 = ctx.r30.s64 + 392;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364e488
	if (cr6.lt) goto loc_8364E488;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364E488;
	sub_8386D088(ctx, base);
loc_8364E488:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r3,r30,376
	ctx.r3.s64 = ctx.r30.s64 + 376;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// bl 0x824238b8
	ctx.lr = 0x8364E49C;
	sub_824238B8(ctx, base);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// addi r29,r30,344
	ctx.r29.s64 = ctx.r30.s64 + 344;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364e4b4
	if (cr6.lt) goto loc_8364E4B4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364E4B4;
	sub_8386D088(ctx, base);
loc_8364E4B4:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,316
	ctx.r28.s64 = ctx.r30.s64 + 316;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364e4d8
	if (cr6.lt) goto loc_8364E4D8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364E4D8;
	sub_8386D088(ctx, base);
loc_8364E4D8:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8364E4EC;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364E4F4"))) PPC_WEAK_FUNC(sub_8364E4F4);
PPC_FUNC_IMPL(__imp__sub_8364E4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364E4F8"))) PPC_WEAK_FUNC(sub_8364E4F8);
PPC_FUNC_IMPL(__imp__sub_8364E4F8) {
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
	// bl 0x8364e410
	ctx.lr = 0x8364E518;
	sub_8364E410(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8364e538
	if (cr6.eq) goto loc_8364E538;
	// bl 0x82595188
	ctx.lr = 0x8364E528;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8364E538;
	sub_825952B8(ctx, base);
loc_8364E538:
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

__attribute__((alias("__imp__sub_8364E554"))) PPC_WEAK_FUNC(sub_8364E554);
PPC_FUNC_IMPL(__imp__sub_8364E554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364E558"))) PPC_WEAK_FUNC(sub_8364E558);
PPC_FUNC_IMPL(__imp__sub_8364E558) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x8364E570;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,14808
	ctx.r4.s64 = ctx.r11.s64 + 14808;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x824208c8
	ctx.lr = 0x8364E584;
	sub_824208C8(ctx, base);
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r3,r7,15168
	ctx.r3.s64 = ctx.r7.s64 + 15168;
	// addi r6,r10,15152
	ctx.r6.s64 = ctx.r10.s64 + 15152;
	// addi r5,r9,15140
	ctx.r5.s64 = ctx.r9.s64 + 15140;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,15136
	ctx.r4.s64 = ctx.r8.s64 + 15136;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8364E5D4"))) PPC_WEAK_FUNC(sub_8364E5D4);
PPC_FUNC_IMPL(__imp__sub_8364E5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364E5D8"))) PPC_WEAK_FUNC(sub_8364E5D8);
PPC_FUNC_IMPL(__imp__sub_8364E5D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8364e5f0
	sub_8364E5F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364E5E0"))) PPC_WEAK_FUNC(sub_8364E5E0);
PPC_FUNC_IMPL(__imp__sub_8364E5E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8364e5f0
	sub_8364E5F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364E5E8"))) PPC_WEAK_FUNC(sub_8364E5E8);
PPC_FUNC_IMPL(__imp__sub_8364E5E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8364e5f0
	sub_8364E5F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364E5F0"))) PPC_WEAK_FUNC(sub_8364E5F0);
PPC_FUNC_IMPL(__imp__sub_8364E5F0) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,15152
	ctx.r7.s64 = ctx.r11.s64 + 15152;
	// addi r6,r10,15140
	ctx.r6.s64 = ctx.r10.s64 + 15140;
	// addi r5,r9,15136
	ctx.r5.s64 = ctx.r9.s64 + 15136;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,15168
	ctx.r4.s64 = ctx.r8.s64 + 15168;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x8364E640;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8364e660
	if (cr6.eq) goto loc_8364E660;
	// bl 0x82595188
	ctx.lr = 0x8364E650;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8364E660;
	sub_825952B8(ctx, base);
loc_8364E660:
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

__attribute__((alias("__imp__sub_8364E67C"))) PPC_WEAK_FUNC(sub_8364E67C);
PPC_FUNC_IMPL(__imp__sub_8364E67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364E680"))) PPC_WEAK_FUNC(sub_8364E680);
PPC_FUNC_IMPL(__imp__sub_8364E680) {
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
	// ble cr6,0x8364e6ec
	if (!cr6.gt) goto loc_8364E6EC;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,15860
	ctx.r8.s64 = ctx.r10.s64 + 15860;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,308
	ctx.r6.s64 = 308;
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
	ctx.lr = 0x8364E6DC;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8364E6EC:
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

__attribute__((alias("__imp__sub_8364E700"))) PPC_WEAK_FUNC(sub_8364E700);
PPC_FUNC_IMPL(__imp__sub_8364E700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8364E708;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,15860
	ctx.r10.s64 = ctx.r11.s64 + 15860;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,308
	ctx.r8.s64 = 308;
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
	ctx.lr = 0x8364E74C;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x8364e774
	if (cr6.eq) goto loc_8364E774;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x8364E76C;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_8364E774:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364E77C"))) PPC_WEAK_FUNC(sub_8364E77C);
PPC_FUNC_IMPL(__imp__sub_8364E77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364E780"))) PPC_WEAK_FUNC(sub_8364E780);
PPC_FUNC_IMPL(__imp__sub_8364E780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8364E788;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,296(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r4,276
	ctx.r30.s64 = ctx.r4.s64 + 276;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364e7a8
	if (cr6.lt) goto loc_8364E7A8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364E7A8;
	sub_8386D088(ctx, base);
loc_8364E7A8:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// bl 0x8362c480
	ctx.lr = 0x8364E7C4;
	sub_8362C480(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364e7d8
	if (cr6.lt) goto loc_8364E7D8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8364E7D8;
	sub_8386D088(ctx, base);
loc_8364E7D8:
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

__attribute__((alias("__imp__sub_8364E7EC"))) PPC_WEAK_FUNC(sub_8364E7EC);
PPC_FUNC_IMPL(__imp__sub_8364E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364E7F0"))) PPC_WEAK_FUNC(sub_8364E7F0);
PPC_FUNC_IMPL(__imp__sub_8364E7F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8364E7F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,135
	ctx.r10.s64 = 135;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x8364e838
	if (!cr6.lt) goto loc_8364E838;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8364E838;
	sub_82E745E0(ctx, base);
loc_8364E838:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,15384
	ctx.r27.s64 = ctx.r11.s64 + 15384;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r27,-60
	ctx.r4.s64 = ctx.r27.s64 + -60;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364E880;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364E88C;
	sub_82E74C08(ctx, base);
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8364e8a0
	if (cr6.lt) goto loc_8364E8A0;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8364E8A0;
	sub_82416268(ctx, base);
loc_8364E8A0:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// blt cr6,0x8364e8c0
	if (cr6.lt) goto loc_8364E8C0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364E8C0:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_8364E8D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364e8d0
	if (!cr6.eq) goto loc_8364E8D0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364E8F4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364E900;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364e914
	if (cr6.lt) goto loc_8364E914;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8364E914;
	sub_82416268(ctx, base);
loc_8364E914:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-52
	ctx.r4.s64 = ctx.r27.s64 + -52;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364E93C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364E948;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364e95c
	if (cr6.lt) goto loc_8364E95C;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x8364E95C;
	sub_82416268(ctx, base);
loc_8364E95C:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8364E974;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x8364E990;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364E99C;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364e9b0
	if (cr6.lt) goto loc_8364E9B0;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8364E9B0;
	sub_82416268(ctx, base);
loc_8364E9B0:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x8364e9d0
	if (cr6.lt) goto loc_8364E9D0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364E9D0:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_8364E9E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364e9e0
	if (!cr6.eq) goto loc_8364E9E0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364EA04;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364EA10;
	sub_82E74C08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364ea24
	if (cr6.lt) goto loc_8364EA24;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8364EA24;
	sub_82416268(ctx, base);
loc_8364EA24:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364EA4C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364EA58;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364ea6c
	if (cr6.lt) goto loc_8364EA6C;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8364EA6C;
	sub_82416268(ctx, base);
loc_8364EA6C:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x8364ea8c
	if (cr6.lt) goto loc_8364EA8C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364EA8C:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_8364EA9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364ea9c
	if (!cr6.eq) goto loc_8364EA9C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364EAC0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364EACC;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364eae0
	if (cr6.lt) goto loc_8364EAE0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8364EAE0;
	sub_82416268(ctx, base);
loc_8364EAE0:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364EB08;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364EB14;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364eb28
	if (cr6.lt) goto loc_8364EB28;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8364EB28;
	sub_82416268(ctx, base);
loc_8364EB28:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x8364EB40;
	sub_82E746C0(ctx, base);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82472fc0
	ctx.lr = 0x8364EB5C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364EB68;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364eb7c
	if (cr6.lt) goto loc_8364EB7C;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8364EB7C;
	sub_82416268(ctx, base);
loc_8364EB7C:
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// addi r4,r28,176
	ctx.r4.s64 = ctx.r28.s64 + 176;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// blt cr6,0x8364eb9c
	if (cr6.lt) goto loc_8364EB9C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364EB9C:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_8364EBAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364ebac
	if (!cr6.eq) goto loc_8364EBAC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364EBD0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364EBDC;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364ebf0
	if (cr6.lt) goto loc_8364EBF0;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8364EBF0;
	sub_82416268(ctx, base);
loc_8364EBF0:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8364EC18;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364EC24;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364ec38
	if (cr6.lt) goto loc_8364EC38;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x8364EC38;
	sub_82416268(ctx, base);
loc_8364EC38:
	// lwz r11,224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// addi r4,r28,204
	ctx.r4.s64 = ctx.r28.s64 + 204;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x8364ec58
	if (cr6.lt) goto loc_8364EC58;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8364EC58:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
loc_8364EC68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364ec68
	if (!cr6.eq) goto loc_8364EC68;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8364EC8C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8364EC98;
	sub_82E74C08(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364ecac
	if (cr6.lt) goto loc_8364ECAC;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x8364ECAC;
	sub_82416268(ctx, base);
loc_8364ECAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364ECB8"))) PPC_WEAK_FUNC(sub_8364ECB8);
PPC_FUNC_IMPL(__imp__sub_8364ECB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8364ECC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82420558
	ctx.lr = 0x8364ECF0;
	sub_82420558(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// bl 0x8362c6c0
	ctx.lr = 0x8364ECFC;
	sub_8362C6C0(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,276
	ctx.r4.s64 = ctx.r30.s64 + 276;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r27,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r27.u32);
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
	// stb r29,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r29.u8);
	// bl 0x82420558
	ctx.lr = 0x8364ED24;
	sub_82420558(ctx, base);
	// lwz r10,304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8364ED38"))) PPC_WEAK_FUNC(sub_8364ED38);
PPC_FUNC_IMPL(__imp__sub_8364ED38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8364ed4c
	if (cr6.eq) goto loc_8364ED4C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8364ecb8
	sub_8364ECB8(ctx, base);
	return;
loc_8364ED4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8364ED54"))) PPC_WEAK_FUNC(sub_8364ED54);
PPC_FUNC_IMPL(__imp__sub_8364ED54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8364ED58"))) PPC_WEAK_FUNC(sub_8364ED58);
PPC_FUNC_IMPL(__imp__sub_8364ED58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8364ED60;
	__savegprlr_14(ctx, base);
	// stwu r1,-1808(r1)
	ea = -1808 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r31.u32);
	// stw r3,1828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1828, ctx.r3.u32);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x83691bb8
	ctx.lr = 0x8364ED8C;
	sub_83691BB8(ctx, base);
	// lwz r10,824(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// lwz r11,828(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 828);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bge cr6,0x8365003c
	if (!cr6.lt) goto loc_8365003C;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r25,r10,27936
	ctx.r25.s64 = ctx.r10.s64 + 27936;
	// addi r24,r9,8980
	ctx.r24.s64 = ctx.r9.s64 + 8980;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r25,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r25.u32);
	// addi r26,r11,15748
	ctx.r26.s64 = ctx.r11.s64 + 15748;
	// stw r24,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r24.u32);
	// addi r14,r8,15860
	ctx.r14.s64 = ctx.r8.s64 + 15860;
loc_8364EDD8:
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// addi r11,r1,880
	ctx.r11.s64 = ctx.r1.s64 + 880;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// ld r10,8(r15)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r15.u32 + 8);
	// ld r9,0(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,888(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 888);
	// lwz r4,892(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// bl 0x82472fc0
	ctx.lr = 0x8364EE08;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-356
	ctx.r6.s64 = ctx.r26.s64 + -356;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x8364EE20;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364eeb8
	if (!cr6.eq) goto loc_8364EEB8;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// addi r11,r1,1168
	ctx.r11.s64 = ctx.r1.s64 + 1168;
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r10,r15,16
	ctx.r10.s64 = ctx.r15.s64 + 16;
	// ld r8,16(r15)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r15.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,1180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// lwz r5,1176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1176);
	// bl 0x82472fc0
	ctx.lr = 0x8364EE5C;
	sub_82472FC0(ctx, base);
	// lwz r7,292(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364ee70
	if (!cr6.lt) goto loc_8364EE70;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
loc_8364EE70:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364EE74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364ee74
	if (!cr6.eq) goto loc_8364EE74;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364EE98;
	sub_824208C8(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364eeac
	if (cr6.lt) goto loc_8364EEAC;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x8364EEAC;
	sub_82416268(ctx, base);
loc_8364EEAC:
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
loc_8364EEB8:
	// addi r6,r26,-348
	ctx.r6.s64 = ctx.r26.s64 + -348;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x8364EED0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364ef10
	if (!cr6.eq) goto loc_8364EF10;
	// ld r9,24(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 24);
	// addi r10,r1,1008
	ctx.r10.s64 = ctx.r1.s64 + 1008;
	// ld r11,16(r15)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r15.u32 + 16);
	// addi r8,r15,16
	ctx.r8.s64 = ctx.r15.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,1008(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1008);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364ef08
	if (!cr6.eq) goto loc_8364EF08;
	// ld r11,1016(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1016);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364ef0c
	goto loc_8364EF0C;
loc_8364EF08:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8364EF0C:
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_8364EF10:
	// addi r6,r26,-340
	ctx.r6.s64 = ctx.r26.s64 + -340;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x8364EF28;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364efc0
	if (!cr6.eq) goto loc_8364EFC0;
	// stw r27,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r27.u32);
	// addi r11,r1,1264
	ctx.r11.s64 = ctx.r1.s64 + 1264;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// addi r10,r15,16
	ctx.r10.s64 = ctx.r15.s64 + 16;
	// ld r8,24(r15)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r15.u32 + 24);
	// ld r9,16(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1276);
	// lwz r5,1272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1272);
	// bl 0x82472fc0
	ctx.lr = 0x8364EF64;
	sub_82472FC0(ctx, base);
	// lwz r7,324(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364ef78
	if (!cr6.lt) goto loc_8364EF78;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
loc_8364EF78:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364EF7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364ef7c
	if (!cr6.eq) goto loc_8364EF7C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,116
	ctx.r3.s64 = ctx.r29.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364EFA0;
	sub_824208C8(ctx, base);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364efb4
	if (cr6.lt) goto loc_8364EFB4;
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82416268
	ctx.lr = 0x8364EFB4;
	sub_82416268(ctx, base);
loc_8364EFB4:
	// stw r27,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r27.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
loc_8364EFC0:
	// addi r6,r26,-332
	ctx.r6.s64 = ctx.r26.s64 + -332;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,21
	ctx.r7.s64 = 21;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x8364EFD8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83650010
	if (!cr6.eq) goto loc_83650010;
	// addi r20,r29,152
	ctx.r20.s64 = ctx.r29.s64 + 152;
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,308
	ctx.r10.s64 = 308;
	// stw r20,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r20.u32);
	// addi r19,r20,8
	ctx.r19.s64 = ctx.r20.s64 + 8;
	// stw r11,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r11.u32);
	// addi r17,r20,4
	ctx.r17.s64 = ctx.r20.s64 + 4;
	// stw r10,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r10.u32);
	// stw r19,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r19.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r17,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r17.u32);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x8247b7d8
	ctx.lr = 0x8364F018;
	sub_8247B7D8(ctx, base);
	// lwz r3,160(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// stw r31,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8364f03c
	if (cr6.eq) goto loc_8364F03C;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x8364F034;
	sub_8247B268(ctx, base);
	// stw r31,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r31.u32);
	// stw r31,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r31.u32);
loc_8364F03C:
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// lwz r11,24(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,28(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28);
	// add r16,r10,r11
	ctx.r16.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r16
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, xer);
	// bge cr6,0x83650010
	if (!cr6.lt) goto loc_83650010;
loc_8364F05C:
	// stw r27,1364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1364, ctx.r27.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r31,1360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1360, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r31,1344(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1344, ctx.r31.u8);
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x824208c8
	ctx.lr = 0x8364F078;
	sub_824208C8(ctx, base);
	// addi r3,r1,1372
	ctx.r3.s64 = ctx.r1.s64 + 1372;
	// bl 0x8362c7e0
	ctx.lr = 0x8364F080;
	sub_8362C7E0(ctx, base);
	// stw r31,1616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1616, ctx.r31.u32);
	// stw r27,1640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1640, ctx.r27.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r31,1636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1636, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r31,1620(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1620, ctx.r31.u8);
	// addi r3,r1,1620
	ctx.r3.s64 = ctx.r1.s64 + 1620;
	// bl 0x824208c8
	ctx.lr = 0x8364F0A0;
	sub_824208C8(ctx, base);
	// stw r31,1648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1648, ctx.r31.u32);
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r31.u32);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// lwz r5,8(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// lwz r4,12(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// bl 0x83691bb8
	ctx.lr = 0x8364F0C0;
	sub_83691BB8(ctx, base);
	// lwz r10,696(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 696);
	// lwz r11,700(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// bge cr6,0x8364feb4
	if (!cr6.lt) goto loc_8364FEB4;
loc_8364F0DC:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// addi r11,r1,1040
	ctx.r11.s64 = ctx.r1.s64 + 1040;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// ld r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// ld r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1048(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1048);
	// lwz r4,1052(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1052);
	// bl 0x82472fc0
	ctx.lr = 0x8364F10C;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-308
	ctx.r6.s64 = ctx.r26.s64 + -308;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x8364F124;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364f1bc
	if (!cr6.eq) goto loc_8364F1BC;
	// stw r27,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r27.u32);
	// addi r11,r1,1200
	ctx.r11.s64 = ctx.r1.s64 + 1200;
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
	// addi r10,r23,16
	ctx.r10.s64 = ctx.r23.s64 + 16;
	// ld r9,24(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 24);
	// ld r8,16(r23)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r23.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,1208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1208);
	// lwz r4,1212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1212);
	// bl 0x82472fc0
	ctx.lr = 0x8364F160;
	sub_82472FC0(ctx, base);
	// lwz r7,516(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r4,496(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364f174
	if (!cr6.lt) goto loc_8364F174;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
loc_8364F174:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364F178:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364f178
	if (!cr6.eq) goto loc_8364F178;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364F19C;
	sub_824208C8(ctx, base);
	// lwz r10,516(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364f1b0
	if (cr6.lt) goto loc_8364F1B0;
	// lwz r3,496(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x82416268
	ctx.lr = 0x8364F1B0;
	sub_82416268(ctx, base);
loc_8364F1B0:
	// stw r27,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r27.u32);
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
loc_8364F1BC:
	// addi r6,r26,-284
	ctx.r6.s64 = ctx.r26.s64 + -284;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x8364F1D4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364fd78
	if (!cr6.eq) goto loc_8364FD78;
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r31.u32);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// lwz r5,24(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// lwz r4,28(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x8364F1F8;
	sub_83691BB8(ctx, base);
	// lwz r10,760(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 760);
	// lwz r11,764(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// add r22,r10,r11
	ctx.r22.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// bge cr6,0x8364fd5c
	if (!cr6.lt) goto loc_8364FD5C;
loc_8364F214:
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// addi r11,r1,1072
	ctx.r11.s64 = ctx.r1.s64 + 1072;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// ld r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// ld r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,1084(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1084);
	// lwz r5,1080(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1080);
	// bl 0x82472fc0
	ctx.lr = 0x8364F244;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-264
	ctx.r6.s64 = ctx.r26.s64 + -264;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827a8810
	ctx.lr = 0x8364F25C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364fcd4
	if (!cr6.eq) goto loc_8364FCD4;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r31.u32);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// lwz r5,24(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lwz r4,28(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x8364F280;
	sub_83691BB8(ctx, base);
	// lwz r10,728(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 728);
	// lwz r11,732(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bge cr6,0x8364fcb8
	if (!cr6.lt) goto loc_8364FCB8;
loc_8364F29C:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r11,r1,1328
	ctx.r11.s64 = ctx.r1.s64 + 1328;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// ld r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// ld r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,1336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1336);
	// lwz r4,1340(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1340);
	// bl 0x82472fc0
	ctx.lr = 0x8364F2CC;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-256
	ctx.r6.s64 = ctx.r26.s64 + -256;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364F2E4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364f324
	if (!cr6.eq) goto loc_8364F324;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1104
	ctx.r10.s64 = ctx.r1.s64 + 1104;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364f31c
	if (!cr6.eq) goto loc_8364F31C;
	// ld r11,1112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1112);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364f320
	goto loc_8364F320;
loc_8364F31C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8364F320:
	// stw r11,1372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1372, ctx.r11.u32);
loc_8364F324:
	// addi r6,r26,-244
	ctx.r6.s64 = ctx.r26.s64 + -244;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364F33C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364f3d4
	if (!cr6.eq) goto loc_8364F3D4;
	// stw r27,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r27.u32);
	// addi r11,r1,864
	ctx.r11.s64 = ctx.r1.s64 + 864;
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,872(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 872);
	// lwz r4,876(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// bl 0x82472fc0
	ctx.lr = 0x8364F378;
	sub_82472FC0(ctx, base);
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364f38c
	if (!cr6.lt) goto loc_8364F38C;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
loc_8364F38C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364F390:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364f390
	if (!cr6.eq) goto loc_8364F390;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364F3B4;
	sub_824208C8(ctx, base);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364f3c8
	if (cr6.lt) goto loc_8364F3C8;
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82416268
	ctx.lr = 0x8364F3C8;
	sub_82416268(ctx, base);
loc_8364F3C8:
	// stw r27,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r27.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
loc_8364F3D4:
	// addi r6,r26,-236
	ctx.r6.s64 = ctx.r26.s64 + -236;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364F3EC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364f484
	if (!cr6.eq) goto loc_8364F484;
	// stw r27,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r27.u32);
	// addi r11,r1,896
	ctx.r11.s64 = ctx.r1.s64 + 896;
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,904(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 904);
	// lwz r4,908(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 908);
	// bl 0x82472fc0
	ctx.lr = 0x8364F428;
	sub_82472FC0(ctx, base);
	// lwz r7,420(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364f43c
	if (!cr6.lt) goto loc_8364F43C;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
loc_8364F43C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364F440:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364f440
	if (!cr6.eq) goto loc_8364F440;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1404
	ctx.r3.s64 = ctx.r1.s64 + 1404;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364F464;
	sub_824208C8(ctx, base);
	// lwz r10,420(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364f478
	if (cr6.lt) goto loc_8364F478;
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82416268
	ctx.lr = 0x8364F478;
	sub_82416268(ctx, base);
loc_8364F478:
	// stw r27,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r27.u32);
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
loc_8364F484:
	// addi r6,r26,-228
	ctx.r6.s64 = ctx.r26.s64 + -228;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364F49C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364f534
	if (!cr6.eq) goto loc_8364F534;
	// stw r27,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r27.u32);
	// addi r11,r1,928
	ctx.r11.s64 = ctx.r1.s64 + 928;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,936(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 936);
	// lwz r4,940(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// bl 0x82472fc0
	ctx.lr = 0x8364F4D8;
	sub_82472FC0(ctx, base);
	// lwz r7,484(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364f4ec
	if (!cr6.lt) goto loc_8364F4EC;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
loc_8364F4EC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364F4F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364f4f0
	if (!cr6.eq) goto loc_8364F4F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1432
	ctx.r3.s64 = ctx.r1.s64 + 1432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364F514;
	sub_824208C8(ctx, base);
	// lwz r10,484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364f528
	if (cr6.lt) goto loc_8364F528;
	// lwz r3,464(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x82416268
	ctx.lr = 0x8364F528;
	sub_82416268(ctx, base);
loc_8364F528:
	// stw r27,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r27.u32);
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
loc_8364F534:
	// addi r6,r26,-220
	ctx.r6.s64 = ctx.r26.s64 + -220;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364F54C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364f58c
	if (!cr6.eq) goto loc_8364F58C;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,960
	ctx.r10.s64 = ctx.r1.s64 + 960;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,960(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364f584
	if (!cr6.eq) goto loc_8364F584;
	// ld r11,968(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 968);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364f588
	goto loc_8364F588;
loc_8364F584:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8364F588:
	// stw r11,1460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1460, ctx.r11.u32);
loc_8364F58C:
	// addi r6,r26,-208
	ctx.r6.s64 = ctx.r26.s64 + -208;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364F5A4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364f5e4
	if (!cr6.eq) goto loc_8364F5E4;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,992
	ctx.r10.s64 = ctx.r1.s64 + 992;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,992(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364f5dc
	if (!cr6.eq) goto loc_8364F5DC;
	// ld r11,1000(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1000);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364f5e0
	goto loc_8364F5E0;
loc_8364F5DC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8364F5E0:
	// stw r11,1464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1464, ctx.r11.u32);
loc_8364F5E4:
	// addi r6,r26,-200
	ctx.r6.s64 = ctx.r26.s64 + -200;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364F5FC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364f694
	if (!cr6.eq) goto loc_8364F694;
	// stw r27,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r27.u32);
	// addi r11,r1,1024
	ctx.r11.s64 = ctx.r1.s64 + 1024;
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1032(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1032);
	// lwz r4,1036(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1036);
	// bl 0x82472fc0
	ctx.lr = 0x8364F638;
	sub_82472FC0(ctx, base);
	// lwz r7,548(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364f64c
	if (!cr6.lt) goto loc_8364F64C;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
loc_8364F64C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364F650:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364f650
	if (!cr6.eq) goto loc_8364F650;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1468
	ctx.r3.s64 = ctx.r1.s64 + 1468;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364F674;
	sub_824208C8(ctx, base);
	// lwz r10,548(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364f688
	if (cr6.lt) goto loc_8364F688;
	// lwz r3,528(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x82416268
	ctx.lr = 0x8364F688;
	sub_82416268(ctx, base);
loc_8364F688:
	// stw r27,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r27.u32);
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
loc_8364F694:
	// addi r6,r26,-192
	ctx.r6.s64 = ctx.r26.s64 + -192;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364F6AC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364f6ec
	if (!cr6.eq) goto loc_8364F6EC;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1056
	ctx.r10.s64 = ctx.r1.s64 + 1056;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1056(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1056);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364f6e4
	if (!cr6.eq) goto loc_8364F6E4;
	// ld r11,1064(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1064);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364f6e8
	goto loc_8364F6E8;
loc_8364F6E4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8364F6E8:
	// stw r11,1496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1496, ctx.r11.u32);
loc_8364F6EC:
	// addi r6,r26,-176
	ctx.r6.s64 = ctx.r26.s64 + -176;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364F704;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364f744
	if (!cr6.eq) goto loc_8364F744;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1088
	ctx.r10.s64 = ctx.r1.s64 + 1088;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1088(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364f73c
	if (!cr6.eq) goto loc_8364F73C;
	// ld r11,1096(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1096);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364f740
	goto loc_8364F740;
loc_8364F73C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8364F740:
	// stw r11,1500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1500, ctx.r11.u32);
loc_8364F744:
	// addi r6,r26,-160
	ctx.r6.s64 = ctx.r26.s64 + -160;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364F75C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364f7f4
	if (!cr6.eq) goto loc_8364F7F4;
	// stw r27,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r27.u32);
	// addi r11,r1,1120
	ctx.r11.s64 = ctx.r1.s64 + 1120;
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stb r31,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r31.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1128);
	// lwz r4,1132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1132);
	// bl 0x82472fc0
	ctx.lr = 0x8364F798;
	sub_82472FC0(ctx, base);
	// lwz r7,612(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r4,592(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364f7ac
	if (!cr6.lt) goto loc_8364F7AC;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
loc_8364F7AC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364F7B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364f7b0
	if (!cr6.eq) goto loc_8364F7B0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364F7D4;
	sub_824208C8(ctx, base);
	// lwz r10,612(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364f7e8
	if (cr6.lt) goto loc_8364F7E8;
	// lwz r3,592(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// bl 0x82416268
	ctx.lr = 0x8364F7E8;
	sub_82416268(ctx, base);
loc_8364F7E8:
	// stw r27,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r27.u32);
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// stb r31,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r31.u8);
loc_8364F7F4:
	// addi r6,r26,-144
	ctx.r6.s64 = ctx.r26.s64 + -144;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364F80C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364fb2c
	if (!cr6.eq) goto loc_8364FB2C;
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r31.u32);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x8364F830;
	sub_83691BB8(ctx, base);
	// lwz r10,792(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 792);
	// lwz r11,796(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 796);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8364fb10
	if (!cr6.lt) goto loc_8364FB10;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_8364F85C:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// addi r11,r1,1152
	ctx.r11.s64 = ctx.r1.s64 + 1152;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// ld r9,-16(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + -16);
	// ld r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + -8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// lwz r4,1164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1164);
	// bl 0x82472fc0
	ctx.lr = 0x8364F890;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-136
	ctx.r6.s64 = ctx.r26.s64 + -136;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8364F8A8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364f93c
	if (!cr6.eq) goto loc_8364F93C;
	// stw r27,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r27.u32);
	// addi r11,r1,1184
	ctx.r11.s64 = ctx.r1.s64 + 1184;
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1192);
	// lwz r4,1196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1196);
	// bl 0x82472fc0
	ctx.lr = 0x8364F8E0;
	sub_82472FC0(ctx, base);
	// lwz r8,580(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8364f8f4
	if (!cr6.lt) goto loc_8364F8F4;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
loc_8364F8F4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364F8F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364f8f8
	if (!cr6.eq) goto loc_8364F8F8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1532
	ctx.r3.s64 = ctx.r1.s64 + 1532;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364F91C;
	sub_824208C8(ctx, base);
	// lwz r10,580(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364f930
	if (cr6.lt) goto loc_8364F930;
	// lwz r3,560(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x82416268
	ctx.lr = 0x8364F930;
	sub_82416268(ctx, base);
loc_8364F930:
	// stw r27,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r27.u32);
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
loc_8364F93C:
	// addi r6,r26,-124
	ctx.r6.s64 = ctx.r26.s64 + -124;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8364F954;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364f9e8
	if (!cr6.eq) goto loc_8364F9E8;
	// stw r27,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r27.u32);
	// addi r11,r1,1216
	ctx.r11.s64 = ctx.r1.s64 + 1216;
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1224);
	// lwz r4,1228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1228);
	// bl 0x82472fc0
	ctx.lr = 0x8364F98C;
	sub_82472FC0(ctx, base);
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8364f9a0
	if (!cr6.lt) goto loc_8364F9A0;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
loc_8364F9A0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364F9A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364f9a4
	if (!cr6.eq) goto loc_8364F9A4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1560
	ctx.r3.s64 = ctx.r1.s64 + 1560;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364F9C8;
	sub_824208C8(ctx, base);
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364f9dc
	if (cr6.lt) goto loc_8364F9DC;
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82416268
	ctx.lr = 0x8364F9DC;
	sub_82416268(ctx, base);
loc_8364F9DC:
	// stw r27,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r27.u32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
loc_8364F9E8:
	// addi r6,r26,-108
	ctx.r6.s64 = ctx.r26.s64 + -108;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8364FA00;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364fa3c
	if (!cr6.eq) goto loc_8364FA3C;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r10,r1,1248
	ctx.r10.s64 = ctx.r1.s64 + 1248;
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,1248(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1248);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364fa34
	if (!cr6.eq) goto loc_8364FA34;
	// ld r11,1256(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1256);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364fa38
	goto loc_8364FA38;
loc_8364FA34:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8364FA38:
	// stw r11,1588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1588, ctx.r11.u32);
loc_8364FA3C:
	// addi r6,r26,-92
	ctx.r6.s64 = ctx.r26.s64 + -92;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8364FA54;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364fa90
	if (!cr6.eq) goto loc_8364FA90;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r1,1280
	ctx.r10.s64 = ctx.r1.s64 + 1280;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1280(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1280);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364fa88
	if (!cr6.eq) goto loc_8364FA88;
	// ld r11,1288(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1288);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364fa8c
	goto loc_8364FA8C;
loc_8364FA88:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8364FA8C:
	// stw r11,1592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1592, ctx.r11.u32);
loc_8364FA90:
	// addi r6,r26,-84
	ctx.r6.s64 = ctx.r26.s64 + -84;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8364FAA8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364fae4
	if (!cr6.eq) goto loc_8364FAE4;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r1,1312
	ctx.r10.s64 = ctx.r1.s64 + 1312;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1312(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1312);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8364fadc
	if (!cr6.eq) goto loc_8364FADC;
	// ld r11,1320(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1320);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364fae0
	goto loc_8364FAE0;
loc_8364FADC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8364FAE0:
	// stw r11,1596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1596, ctx.r11.u32);
loc_8364FAE4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364faf8
	if (cr6.lt) goto loc_8364FAF8;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8364FAF8;
	sub_82416268(ctx, base);
loc_8364FAF8:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bne 0x8364f85c
	if (!cr0.eq) goto loc_8364F85C;
loc_8364FB10:
	// lwz r30,800(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8364fb2c
	if (cr6.eq) goto loc_8364FB2C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8364FB24;
	sub_839E56B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x8364FB2C;
	sub_82416268(ctx, base);
loc_8364FB2C:
	// addi r6,r26,-68
	ctx.r6.s64 = ctx.r26.s64 + -68;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364FB44;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364fb84
	if (!cr6.eq) goto loc_8364FB84;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,848
	ctx.r10.s64 = ctx.r1.s64 + 848;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,848(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364fb7c
	if (!cr6.eq) goto loc_8364FB7C;
	// ld r11,856(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 856);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364fb80
	goto loc_8364FB80;
loc_8364FB7C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8364FB80:
	// stw r11,1600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1600, ctx.r11.u32);
loc_8364FB84:
	// addi r6,r26,-60
	ctx.r6.s64 = ctx.r26.s64 + -60;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364FB9C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364fbdc
	if (!cr6.eq) goto loc_8364FBDC;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1232
	ctx.r10.s64 = ctx.r1.s64 + 1232;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1232(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1232);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364fbd4
	if (!cr6.eq) goto loc_8364FBD4;
	// ld r11,1240(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1240);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364fbd8
	goto loc_8364FBD8;
loc_8364FBD4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8364FBD8:
	// stw r11,1604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1604, ctx.r11.u32);
loc_8364FBDC:
	// addi r6,r26,-52
	ctx.r6.s64 = ctx.r26.s64 + -52;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364FBF4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364fc34
	if (!cr6.eq) goto loc_8364FC34;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,912
	ctx.r10.s64 = ctx.r1.s64 + 912;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,912(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364fc2c
	if (!cr6.eq) goto loc_8364FC2C;
	// ld r11,920(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 920);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364fc30
	goto loc_8364FC30;
loc_8364FC2C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8364FC30:
	// stw r11,1608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1608, ctx.r11.u32);
loc_8364FC34:
	// addi r6,r26,-44
	ctx.r6.s64 = ctx.r26.s64 + -44;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8364FC4C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364fc8c
	if (!cr6.eq) goto loc_8364FC8C;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1136
	ctx.r10.s64 = ctx.r1.s64 + 1136;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1136);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364fc84
	if (!cr6.eq) goto loc_8364FC84;
	// ld r11,1144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1144);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364fc88
	goto loc_8364FC88;
loc_8364FC84:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8364FC88:
	// stw r11,1612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1612, ctx.r11.u32);
loc_8364FC8C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364fca0
	if (cr6.lt) goto loc_8364FCA0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8364FCA0;
	sub_82416268(ctx, base);
loc_8364FCA0:
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplw cr6,r28,r24
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, xer);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// blt cr6,0x8364f29c
	if (cr6.lt) goto loc_8364F29C;
loc_8364FCB8:
	// lwz r30,736(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8364fcd4
	if (cr6.eq) goto loc_8364FCD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8364FCCC;
	sub_839E56B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x8364FCD4;
	sub_82416268(ctx, base);
loc_8364FCD4:
	// addi r6,r26,-32
	ctx.r6.s64 = ctx.r26.s64 + -32;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827a8810
	ctx.lr = 0x8364FCEC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364fd2c
	if (!cr6.eq) goto loc_8364FD2C;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,944
	ctx.r10.s64 = ctx.r1.s64 + 944;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,944(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364fd24
	if (!cr6.eq) goto loc_8364FD24;
	// ld r11,952(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 952);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364fd28
	goto loc_8364FD28;
loc_8364FD24:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8364FD28:
	// stw r11,1616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1616, ctx.r11.u32);
loc_8364FD2C:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364fd40
	if (cr6.lt) goto loc_8364FD40;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x8364FD40;
	sub_82416268(ctx, base);
loc_8364FD40:
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// cmplw cr6,r25,r22
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r22.u32, xer);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// blt cr6,0x8364f214
	if (cr6.lt) goto loc_8364F214;
	// lwz r29,1828(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1828);
loc_8364FD5C:
	// lwz r30,768(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8364fd78
	if (cr6.eq) goto loc_8364FD78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8364FD70;
	sub_839E56B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x8364FD78;
	sub_82416268(ctx, base);
loc_8364FD78:
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x8364FD90;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364fe28
	if (!cr6.eq) goto loc_8364FE28;
	// stw r27,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r27.u32);
	// addi r11,r1,1296
	ctx.r11.s64 = ctx.r1.s64 + 1296;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
	// addi r10,r23,16
	ctx.r10.s64 = ctx.r23.s64 + 16;
	// ld r9,16(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 16);
	// ld r8,24(r23)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r23.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1304(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1304);
	// lwz r4,1308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1308);
	// bl 0x82472fc0
	ctx.lr = 0x8364FDCC;
	sub_82472FC0(ctx, base);
	// lwz r7,452(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r4,432(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8364fde0
	if (!cr6.lt) goto loc_8364FDE0;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
loc_8364FDE0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8364FDE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8364fde4
	if (!cr6.eq) goto loc_8364FDE4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1620
	ctx.r3.s64 = ctx.r1.s64 + 1620;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8364FE08;
	sub_824208C8(ctx, base);
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8364fe1c
	if (cr6.lt) goto loc_8364FE1C;
	// lwz r3,432(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x82416268
	ctx.lr = 0x8364FE1C;
	sub_82416268(ctx, base);
loc_8364FE1C:
	// stw r27,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r27.u32);
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
loc_8364FE28:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,24
	ctx.r7.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x8364FE40;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8364fe80
	if (!cr6.eq) goto loc_8364FE80;
	// ld r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 16);
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// ld r9,24(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 24);
	// addi r8,r23,16
	ctx.r8.s64 = ctx.r23.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,976(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8364fe78
	if (!cr6.eq) goto loc_8364FE78;
	// ld r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 984);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8364fe7c
	goto loc_8364FE7C;
loc_8364FE78:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8364FE7C:
	// stw r11,1648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1648, ctx.r11.u32);
loc_8364FE80:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364fe94
	if (cr6.lt) goto loc_8364FE94;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8364FE94;
	sub_82416268(ctx, base);
loc_8364FE94:
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplw cr6,r23,r21
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x8364f0dc
	if (cr6.lt) goto loc_8364F0DC;
	// lwz r25,220(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r24,228(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
loc_8364FEB4:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8364ff1c
	if (cr6.lt) goto loc_8364FF1C;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8364ff0c
	if (!cr6.gt) goto loc_8364FF0C;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r19,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r19.u32);
	// li r10,308
	ctx.r10.s64 = 308;
	// stw r20,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r20.u32);
	// stw r17,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r17.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r11,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r11.u32);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// stw r10,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r10.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x8247b270
	ctx.lr = 0x8364FF04;
	sub_8247B270(ctx, base);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// b 0x8364ff10
	goto loc_8364FF10;
loc_8364FF0C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8364FF10:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8364ff9c
	if (cr6.eq) goto loc_8364FF9C;
loc_8364FF1C:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mulli r10,r10,308
	ctx.r10.s64 = ctx.r10.s64 * 308;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x8364ff90
	if (cr0.eq) goto loc_8364FF90;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,1344
	ctx.r4.s64 = ctx.r1.s64 + 1344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82420558
	ctx.lr = 0x8364FF54;
	sub_82420558(ctx, base);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// addi r4,r1,1372
	ctx.r4.s64 = ctx.r1.s64 + 1372;
	// bl 0x8362c6c0
	ctx.lr = 0x8364FF60;
	sub_8362C6C0(ctx, base);
	// lwz r11,1616(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1616);
	// addi r3,r30,276
	ctx.r3.s64 = ctx.r30.s64 + 276;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1620
	ctx.r4.s64 = ctx.r1.s64 + 1620;
	// stw r11,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r11.u32);
	// stw r27,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r27.u32);
	// stw r31,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r31.u32);
	// stb r31,276(r30)
	PPC_STORE_U8(ctx.r30.u32 + 276, ctx.r31.u8);
	// bl 0x82420558
	ctx.lr = 0x8364FF88;
	sub_82420558(ctx, base);
	// lwz r10,1648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1648);
	// stw r10,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r10.u32);
loc_8364FF90:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_8364FF9C:
	// lwz r30,704(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8364ffb8
	if (cr6.eq) goto loc_8364FFB8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8364FFB0;
	sub_839E56B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x8364FFB8;
	sub_82416268(ctx, base);
loc_8364FFB8:
	// lwz r11,1640(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1640);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364ffcc
	if (cr6.lt) goto loc_8364FFCC;
	// lwz r3,1620(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1620);
	// bl 0x8386d088
	ctx.lr = 0x8364FFCC;
	sub_8386D088(ctx, base);
loc_8364FFCC:
	// stw r27,1640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1640, ctx.r27.u32);
	// addi r3,r1,1372
	ctx.r3.s64 = ctx.r1.s64 + 1372;
	// stw r31,1636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1636, ctx.r31.u32);
	// stb r31,1620(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1620, ctx.r31.u8);
	// bl 0x8362c480
	ctx.lr = 0x8364FFE0;
	sub_8362C480(ctx, base);
	// lwz r11,1364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8364fff4
	if (cr6.lt) goto loc_8364FFF4;
	// lwz r3,1344(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1344);
	// bl 0x8386d088
	ctx.lr = 0x8364FFF4;
	sub_8386D088(ctx, base);
loc_8364FFF4:
	// addi r18,r18,16
	ctx.r18.s64 = ctx.r18.s64 + 16;
	// stw r27,1364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1364, ctx.r27.u32);
	// stw r31,1360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1360, ctx.r31.u32);
	// cmplw cr6,r18,r16
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r16.u32, xer);
	// stb r31,1344(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1344, ctx.r31.u8);
	// blt cr6,0x8364f05c
	if (cr6.lt) goto loc_8364F05C;
	// lwz r30,224(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
loc_83650010:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83650024
	if (cr6.lt) goto loc_83650024;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83650024;
	sub_82416268(ctx, base);
loc_83650024:
	// addi r15,r15,32
	ctx.r15.s64 = ctx.r15.s64 + 32;
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplw cr6,r15,r30
	cr6.compare<uint32_t>(ctx.r15.u32, ctx.r30.u32, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x8364edd8
	if (cr6.lt) goto loc_8364EDD8;
loc_8365003C:
	// lwz r31,832(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83650058
	if (cr6.eq) goto loc_83650058;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83650050;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83650058;
	sub_82416268(ctx, base);
loc_83650058:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1808
	ctx.r1.s64 = ctx.r1.s64 + 1808;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83650064"))) PPC_WEAK_FUNC(sub_83650064);
PPC_FUNC_IMPL(__imp__sub_83650064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83650068"))) PPC_WEAK_FUNC(sub_83650068);
PPC_FUNC_IMPL(__imp__sub_83650068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83650070;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82420558
	ctx.lr = 0x83650094;
	sub_82420558(ctx, base);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x8362cb88
	ctx.lr = 0x836500A0;
	sub_8362CB88(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,276
	ctx.r4.s64 = ctx.r31.s64 + 276;
	// addi r3,r30,276
	ctx.r3.s64 = ctx.r30.s64 + 276;
	// stw r11,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r11.u32);
	// bl 0x82420558
	ctx.lr = 0x836500BC;
	sub_82420558(ctx, base);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// stw r10,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836500CC"))) PPC_WEAK_FUNC(sub_836500CC);
PPC_FUNC_IMPL(__imp__sub_836500CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836500D0"))) PPC_WEAK_FUNC(sub_836500D0);
PPC_FUNC_IMPL(__imp__sub_836500D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836500D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836500E4;
	sub_82D95768(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,15224
	ctx.r29.s64 = ctx.r11.s64 + 15224;
	// li r5,33
	ctx.r5.s64 = 33;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836500FC;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r7,r10,15892
	ctx.r7.s64 = ctx.r10.s64 + 15892;
	// addi r5,r8,15876
	ctx.r5.s64 = ctx.r8.s64 + 15876;
	// addi r6,r9,15880
	ctx.r6.s64 = ctx.r9.s64 + 15880;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83650144;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83650160;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83650180;
	sub_824208C8(ctx, base);
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// stb r30,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r30.u8);
	// addi r4,r29,84
	ctx.r4.s64 = ctx.r29.s64 + 84;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8365019C;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836501A8"))) PPC_WEAK_FUNC(sub_836501A8);
PPC_FUNC_IMPL(__imp__sub_836501A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83650298
	sub_83650298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836501B0"))) PPC_WEAK_FUNC(sub_836501B0);
PPC_FUNC_IMPL(__imp__sub_836501B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83650298
	sub_83650298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836501B8"))) PPC_WEAK_FUNC(sub_836501B8);
PPC_FUNC_IMPL(__imp__sub_836501B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836501C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r8,r11,15892
	ctx.r8.s64 = ctx.r11.s64 + 15892;
	// addi r7,r10,15880
	ctx.r7.s64 = ctx.r10.s64 + 15880;
	// addi r6,r9,15876
	ctx.r6.s64 = ctx.r9.s64 + 15876;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,404
	ctx.r30.s64 = ctx.r3.s64 + 404;
	// lwz r5,424(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83650204
	if (cr6.lt) goto loc_83650204;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83650204;
	sub_8386D088(ctx, base);
loc_83650204:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r29,r28,376
	ctx.r29.s64 = ctx.r28.s64 + 376;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,396(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 396);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83650230
	if (cr6.lt) goto loc_83650230;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83650230;
	sub_8386D088(ctx, base);
loc_83650230:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,344
	ctx.r30.s64 = ctx.r28.s64 + 344;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83650254
	if (cr6.lt) goto loc_83650254;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83650254;
	sub_8386D088(ctx, base);
loc_83650254:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83650278
	if (cr6.lt) goto loc_83650278;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83650278;
	sub_8386D088(ctx, base);
loc_83650278:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8365028C;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83650294"))) PPC_WEAK_FUNC(sub_83650294);
PPC_FUNC_IMPL(__imp__sub_83650294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83650298"))) PPC_WEAK_FUNC(sub_83650298);
PPC_FUNC_IMPL(__imp__sub_83650298) {
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
	// bl 0x836501b8
	ctx.lr = 0x836502B8;
	sub_836501B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836502d8
	if (cr6.eq) goto loc_836502D8;
	// bl 0x82595188
	ctx.lr = 0x836502C8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836502D8;
	sub_825952B8(ctx, base);
loc_836502D8:
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

__attribute__((alias("__imp__sub_836502F4"))) PPC_WEAK_FUNC(sub_836502F4);
PPC_FUNC_IMPL(__imp__sub_836502F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836502F8"))) PPC_WEAK_FUNC(sub_836502F8);
PPC_FUNC_IMPL(__imp__sub_836502F8) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x83650310;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,15224
	ctx.r4.s64 = ctx.r11.s64 + 15224;
	// li r5,33
	ctx.r5.s64 = 33;
	// bl 0x824208c8
	ctx.lr = 0x83650324;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// addi r4,r8,15912
	ctx.r4.s64 = ctx.r8.s64 + 15912;
	// addi r3,r7,15908
	ctx.r3.s64 = ctx.r7.s64 + 15908;
	// addi r6,r10,15928
	ctx.r6.s64 = ctx.r10.s64 + 15928;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r5,r9,15916
	ctx.r5.s64 = ctx.r9.s64 + 15916;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// li r4,27
	ctx.r4.s64 = 27;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// bl 0x8364e680
	ctx.lr = 0x83650370;
	sub_8364E680(ctx, base);
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

__attribute__((alias("__imp__sub_83650388"))) PPC_WEAK_FUNC(sub_83650388);
PPC_FUNC_IMPL(__imp__sub_83650388) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836503a0
	sub_836503A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83650390"))) PPC_WEAK_FUNC(sub_83650390);
PPC_FUNC_IMPL(__imp__sub_83650390) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836503a0
	sub_836503A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83650398"))) PPC_WEAK_FUNC(sub_83650398);
PPC_FUNC_IMPL(__imp__sub_83650398) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836503a0
	sub_836503A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836503A0"))) PPC_WEAK_FUNC(sub_836503A0);
PPC_FUNC_IMPL(__imp__sub_836503A0) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,15928
	ctx.r7.s64 = ctx.r11.s64 + 15928;
	// addi r6,r10,15916
	ctx.r6.s64 = ctx.r10.s64 + 15916;
	// addi r5,r9,15912
	ctx.r5.s64 = ctx.r9.s64 + 15912;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,15908
	ctx.r4.s64 = ctx.r8.s64 + 15908;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x8364e700
	ctx.lr = 0x836503F4;
	sub_8364E700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x836503FC;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8365041c
	if (cr6.eq) goto loc_8365041C;
	// bl 0x82595188
	ctx.lr = 0x8365040C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8365041C;
	sub_825952B8(ctx, base);
loc_8365041C:
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

__attribute__((alias("__imp__sub_83650438"))) PPC_WEAK_FUNC(sub_83650438);
PPC_FUNC_IMPL(__imp__sub_83650438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83650440;
	__savegprlr_25(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,134
	ctx.r11.s64 = 134;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x83650480
	if (!cr6.lt) goto loc_83650480;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83650480;
	sub_82E745E0(ctx, base);
loc_83650480:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r27,r11,16100
	ctx.r27.s64 = ctx.r11.s64 + 16100;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836504C8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836504D4;
	sub_82E74C08(ctx, base);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836504e8
	if (cr6.lt) goto loc_836504E8;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836504E8;
	sub_82416268(ctx, base);
loc_836504E8:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x83650508
	if (cr6.lt) goto loc_83650508;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83650508:
	// stw r28,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_83650518:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83650518
	if (!cr6.eq) goto loc_83650518;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8365053C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83650548;
	sub_82E74C08(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8365055c
	if (cr6.lt) goto loc_8365055C;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8365055C;
	sub_82416268(ctx, base);
loc_8365055C:
	// stw r28,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r28.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83650584;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83650590;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836505a4
	if (cr6.lt) goto loc_836505A4;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836505A4;
	sub_82416268(ctx, base);
loc_836505A4:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836505BC;
	sub_82E746C0(ctx, base);
	// stw r28,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r28.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82472fc0
	ctx.lr = 0x836505D8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836505E4;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836505f8
	if (cr6.lt) goto loc_836505F8;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836505F8;
	sub_82416268(ctx, base);
loc_836505F8:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stw r28,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r28.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// blt cr6,0x83650618
	if (cr6.lt) goto loc_83650618;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83650618:
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83650628:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83650628
	if (!cr6.eq) goto loc_83650628;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8365064C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83650658;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8365066c
	if (cr6.lt) goto loc_8365066C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8365066C;
	sub_82416268(ctx, base);
loc_8365066C:
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83650694;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836506A0;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836506b4
	if (cr6.lt) goto loc_836506B4;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836506B4;
	sub_82416268(ctx, base);
loc_836506B4:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x836506d4
	if (cr6.lt) goto loc_836506D4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836506D4:
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836506E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836506e4
	if (!cr6.eq) goto loc_836506E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83650708;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83650714;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83650728
	if (cr6.lt) goto loc_83650728;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83650728;
	sub_82416268(ctx, base);
loc_83650728:
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83650750;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8365075C;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83650770
	if (cr6.lt) goto loc_83650770;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83650770;
	sub_82416268(ctx, base);
loc_83650770:
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x83650788;
	sub_82E746C0(ctx, base);
	// stw r28,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r28.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// li r5,25
	ctx.r5.s64 = 25;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82472fc0
	ctx.lr = 0x836507A4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836507B0;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836507c4
	if (cr6.lt) goto loc_836507C4;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836507C4;
	sub_82416268(ctx, base);
loc_836507C4:
	// stw r28,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// addi r25,r29,176
	ctx.r25.s64 = ctx.r29.s64 + 176;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// lwz r4,176(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// bl 0x82e749f8
	ctx.lr = 0x836507E0;
	sub_82E749F8(ctx, base);
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// lwz r10,184(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// extsw r27,r10
	ctx.r27.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// beq cr6,0x836508ec
	if (cr6.eq) goto loc_836508EC;
loc_836507FC:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83650810
	if (cr6.lt) goto loc_83650810;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x83650814
	goto loc_83650814;
loc_83650810:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_83650814:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_83650824:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83650824
	if (!cr6.eq) goto loc_83650824;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83650848;
	sub_82472FC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82e74890
	ctx.lr = 0x83650854;
	sub_82E74890(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x83650870
	if (!cr6.lt) goto loc_83650870;
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
loc_83650870:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x8365088c
	if (!cr6.lt) goto loc_8365088C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8365088C;
	sub_82E745E0(ctx, base);
loc_8365088C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x836508A4;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836508c4
	if (cr6.lt) goto loc_836508C4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836508C4;
	sub_82416268(ctx, base);
loc_836508C4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// bne cr6,0x836507fc
	if (!cr6.eq) goto loc_836507FC;
loc_836508EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836508F8"))) PPC_WEAK_FUNC(sub_836508F8);
PPC_FUNC_IMPL(__imp__sub_836508F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83650900;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x83650928;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83650b6c
	if (!cr6.lt) goto loc_83650B6C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r26,r11,16144
	ctx.r26.s64 = ctx.r11.s64 + 16144;
loc_83650960:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x83650994;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836509AC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83650a40
	if (!cr6.eq) goto loc_83650A40;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x836509E4;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836509f8
	if (!cr6.lt) goto loc_836509F8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836509F8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836509FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836509fc
	if (!cr6.eq) goto loc_836509FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83650A20;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83650a34
	if (cr6.lt) goto loc_83650A34;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x83650A34;
	sub_82416268(ctx, base);
loc_83650A34:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_83650A40:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83650A58;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83650a94
	if (!cr6.eq) goto loc_83650A94;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83650a8c
	if (!cr6.eq) goto loc_83650A8C;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83650a90
	goto loc_83650A90;
loc_83650A8C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83650A90:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_83650A94:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83650AAC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83650b40
	if (!cr6.eq) goto loc_83650B40;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x83650AE4;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83650af8
	if (!cr6.lt) goto loc_83650AF8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_83650AF8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83650AFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83650afc
	if (!cr6.eq) goto loc_83650AFC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83650B20;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83650b34
	if (cr6.lt) goto loc_83650B34;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x83650B34;
	sub_82416268(ctx, base);
loc_83650B34:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_83650B40:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83650b54
	if (cr6.lt) goto loc_83650B54;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x83650B54;
	sub_82416268(ctx, base);
loc_83650B54:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x83650960
	if (!cr0.eq) goto loc_83650960;
loc_83650B6C:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83650b88
	if (cr6.eq) goto loc_83650B88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83650B80;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83650B88;
	sub_82416268(ctx, base);
loc_83650B88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83650B94"))) PPC_WEAK_FUNC(sub_83650B94);
PPC_FUNC_IMPL(__imp__sub_83650B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83650B98"))) PPC_WEAK_FUNC(sub_83650B98);
PPC_FUNC_IMPL(__imp__sub_83650B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83650BA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83650BAC;
	sub_82D95768(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,15992
	ctx.r29.s64 = ctx.r11.s64 + 15992;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x83650BC4;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r7,r10,16252
	ctx.r7.s64 = ctx.r10.s64 + 16252;
	// addi r5,r8,16236
	ctx.r5.s64 = ctx.r8.s64 + 16236;
	// addi r6,r9,16240
	ctx.r6.s64 = ctx.r9.s64 + 16240;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83650C0C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83650C28;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// li r4,27
	ctx.r4.s64 = 27;
	// std r30,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r30.u64);
	// bl 0x82d8c9b0
	ctx.lr = 0x83650C44;
	sub_82D8C9B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83650C50"))) PPC_WEAK_FUNC(sub_83650C50);
PPC_FUNC_IMPL(__imp__sub_83650C50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83650d00
	sub_83650D00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83650C58"))) PPC_WEAK_FUNC(sub_83650C58);
PPC_FUNC_IMPL(__imp__sub_83650C58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83650d00
	sub_83650D00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83650C60"))) PPC_WEAK_FUNC(sub_83650C60);
PPC_FUNC_IMPL(__imp__sub_83650C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83650C68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r8,r11,16252
	ctx.r8.s64 = ctx.r11.s64 + 16252;
	// addi r7,r10,16240
	ctx.r7.s64 = ctx.r10.s64 + 16240;
	// addi r6,r9,16236
	ctx.r6.s64 = ctx.r9.s64 + 16236;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r3,r3,376
	ctx.r3.s64 = ctx.r3.s64 + 376;
	// stw r6,216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 216, ctx.r6.u32);
	// bl 0x82d8d2e8
	ctx.lr = 0x83650C9C;
	sub_82D8D2E8(ctx, base);
	// lwz r5,364(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// addi r30,r29,344
	ctx.r30.s64 = ctx.r29.s64 + 344;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83650cb4
	if (cr6.lt) goto loc_83650CB4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83650CB4;
	sub_8386D088(ctx, base);
loc_83650CB4:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83650ce0
	if (cr6.lt) goto loc_83650CE0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83650CE0;
	sub_8386D088(ctx, base);
loc_83650CE0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x83650CF4;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83650CFC"))) PPC_WEAK_FUNC(sub_83650CFC);
PPC_FUNC_IMPL(__imp__sub_83650CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83650D00"))) PPC_WEAK_FUNC(sub_83650D00);
PPC_FUNC_IMPL(__imp__sub_83650D00) {
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
	// bl 0x83650c60
	ctx.lr = 0x83650D20;
	sub_83650C60(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83650d40
	if (cr6.eq) goto loc_83650D40;
	// bl 0x82595188
	ctx.lr = 0x83650D30;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83650D40;
	sub_825952B8(ctx, base);
loc_83650D40:
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

__attribute__((alias("__imp__sub_83650D5C"))) PPC_WEAK_FUNC(sub_83650D5C);
PPC_FUNC_IMPL(__imp__sub_83650D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83650D60"))) PPC_WEAK_FUNC(sub_83650D60);
PPC_FUNC_IMPL(__imp__sub_83650D60) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x83650D78;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,15992
	ctx.r4.s64 = ctx.r11.s64 + 15992;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x824208c8
	ctx.lr = 0x83650D8C;
	sub_824208C8(ctx, base);
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r3,r7,16300
	ctx.r3.s64 = ctx.r7.s64 + 16300;
	// addi r6,r10,16284
	ctx.r6.s64 = ctx.r10.s64 + 16284;
	// addi r5,r9,16272
	ctx.r5.s64 = ctx.r9.s64 + 16272;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,16268
	ctx.r4.s64 = ctx.r8.s64 + 16268;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_83650DD4"))) PPC_WEAK_FUNC(sub_83650DD4);
PPC_FUNC_IMPL(__imp__sub_83650DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83650DD8"))) PPC_WEAK_FUNC(sub_83650DD8);
PPC_FUNC_IMPL(__imp__sub_83650DD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83650df0
	sub_83650DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83650DE0"))) PPC_WEAK_FUNC(sub_83650DE0);
PPC_FUNC_IMPL(__imp__sub_83650DE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83650df0
	sub_83650DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83650DE8"))) PPC_WEAK_FUNC(sub_83650DE8);
PPC_FUNC_IMPL(__imp__sub_83650DE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83650df0
	sub_83650DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83650DF0"))) PPC_WEAK_FUNC(sub_83650DF0);
PPC_FUNC_IMPL(__imp__sub_83650DF0) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,16284
	ctx.r7.s64 = ctx.r11.s64 + 16284;
	// addi r6,r10,16272
	ctx.r6.s64 = ctx.r10.s64 + 16272;
	// addi r5,r9,16268
	ctx.r5.s64 = ctx.r9.s64 + 16268;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,16300
	ctx.r4.s64 = ctx.r8.s64 + 16300;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x83650E40;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83650e60
	if (cr6.eq) goto loc_83650E60;
	// bl 0x82595188
	ctx.lr = 0x83650E50;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83650E60;
	sub_825952B8(ctx, base);
loc_83650E60:
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

__attribute__((alias("__imp__sub_83650E7C"))) PPC_WEAK_FUNC(sub_83650E7C);
PPC_FUNC_IMPL(__imp__sub_83650E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83650E80"))) PPC_WEAK_FUNC(sub_83650E80);
PPC_FUNC_IMPL(__imp__sub_83650E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83650E88;
	__savegprlr_27(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,134
	ctx.r10.s64 = 134;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x83650ec8
	if (!cr6.lt) goto loc_83650EC8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83650EC8;
	sub_82E745E0(ctx, base);
loc_83650EC8:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,16464
	ctx.r27.s64 = ctx.r11.s64 + 16464;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83650F10;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83650F1C;
	sub_82E74C08(ctx, base);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83650f30
	if (cr6.lt) goto loc_83650F30;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83650F30;
	sub_82416268(ctx, base);
loc_83650F30:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x83650f50
	if (cr6.lt) goto loc_83650F50;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83650F50:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83650F60:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83650f60
	if (!cr6.eq) goto loc_83650F60;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83650F84;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83650F90;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83650fa4
	if (cr6.lt) goto loc_83650FA4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83650FA4;
	sub_82416268(ctx, base);
loc_83650FA4:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83650FCC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83650FD8;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83650fec
	if (cr6.lt) goto loc_83650FEC;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83650FEC;
	sub_82416268(ctx, base);
loc_83650FEC:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x83651004;
	sub_82E746C0(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x83651020;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8365102C;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83651040
	if (cr6.lt) goto loc_83651040;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83651040;
	sub_82416268(ctx, base);
loc_83651040:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x83651060
	if (cr6.lt) goto loc_83651060;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83651060:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_83651070:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83651070
	if (!cr6.eq) goto loc_83651070;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83651094;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836510A0;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836510b4
	if (cr6.lt) goto loc_836510B4;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836510B4;
	sub_82416268(ctx, base);
loc_836510B4:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836510DC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836510E8;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836510fc
	if (cr6.lt) goto loc_836510FC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836510FC;
	sub_82416268(ctx, base);
loc_836510FC:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x8365111c
	if (cr6.lt) goto loc_8365111C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8365111C:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_8365112C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8365112c
	if (!cr6.eq) goto loc_8365112C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83651150;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8365115C;
	sub_82E74C08(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83651170
	if (cr6.lt) goto loc_83651170;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83651170;
	sub_82416268(ctx, base);
loc_83651170:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83651198;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836511A4;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836511b8
	if (cr6.lt) goto loc_836511B8;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836511B8;
	sub_82416268(ctx, base);
loc_836511B8:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// lwz r4,172(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836511D0;
	sub_82E746C0(ctx, base);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82472fc0
	ctx.lr = 0x836511EC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836511F8;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8365120c
	if (cr6.lt) goto loc_8365120C;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8365120C;
	sub_82416268(ctx, base);
loc_8365120C:
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x8365122c
	if (cr6.lt) goto loc_8365122C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8365122C:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
loc_8365123C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8365123c
	if (!cr6.eq) goto loc_8365123C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83651260;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8365126C;
	sub_82E74C08(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83651280
	if (cr6.lt) goto loc_83651280;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x83651280;
	sub_82416268(ctx, base);
loc_83651280:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8365128C"))) PPC_WEAK_FUNC(sub_8365128C);
PPC_FUNC_IMPL(__imp__sub_8365128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83651290"))) PPC_WEAK_FUNC(sub_83651290);
PPC_FUNC_IMPL(__imp__sub_83651290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83651298;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x836512C0;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83651504
	if (!cr6.lt) goto loc_83651504;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r26,r11,16504
	ctx.r26.s64 = ctx.r11.s64 + 16504;
loc_836512F8:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x8365132C;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83651344;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836513d8
	if (!cr6.eq) goto loc_836513D8;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x8365137C;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83651390
	if (!cr6.lt) goto loc_83651390;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_83651390:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83651394:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83651394
	if (!cr6.eq) goto loc_83651394;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836513B8;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836513cc
	if (cr6.lt) goto loc_836513CC;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836513CC;
	sub_82416268(ctx, base);
loc_836513CC:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836513D8:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836513F0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365142c
	if (!cr6.eq) goto loc_8365142C;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83651424
	if (!cr6.eq) goto loc_83651424;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83651428
	goto loc_83651428;
loc_83651424:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83651428:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_8365142C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83651444;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836514d8
	if (!cr6.eq) goto loc_836514D8;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x8365147C;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83651490
	if (!cr6.lt) goto loc_83651490;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_83651490:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83651494:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83651494
	if (!cr6.eq) goto loc_83651494;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836514B8;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836514cc
	if (cr6.lt) goto loc_836514CC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836514CC;
	sub_82416268(ctx, base);
loc_836514CC:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836514D8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836514ec
	if (cr6.lt) goto loc_836514EC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836514EC;
	sub_82416268(ctx, base);
loc_836514EC:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x836512f8
	if (!cr0.eq) goto loc_836512F8;
loc_83651504:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83651520
	if (cr6.eq) goto loc_83651520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83651518;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83651520;
	sub_82416268(ctx, base);
loc_83651520:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8365152C"))) PPC_WEAK_FUNC(sub_8365152C);
PPC_FUNC_IMPL(__imp__sub_8365152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83651530"))) PPC_WEAK_FUNC(sub_83651530);
PPC_FUNC_IMPL(__imp__sub_83651530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83651538;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83651544;
	sub_82D95768(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,16352
	ctx.r29.s64 = ctx.r11.s64 + 16352;
	// li r5,26
	ctx.r5.s64 = 26;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8365155C;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r7,r10,16612
	ctx.r7.s64 = ctx.r10.s64 + 16612;
	// addi r5,r8,16596
	ctx.r5.s64 = ctx.r8.s64 + 16596;
	// addi r6,r9,16600
	ctx.r6.s64 = ctx.r9.s64 + 16600;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836515A4;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836515C0;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,60
	ctx.r4.s64 = ctx.r29.s64 + 60;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836515E0;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836515EC"))) PPC_WEAK_FUNC(sub_836515EC);
PPC_FUNC_IMPL(__imp__sub_836515EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836515F0"))) PPC_WEAK_FUNC(sub_836515F0);
PPC_FUNC_IMPL(__imp__sub_836515F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836516b8
	sub_836516B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836515F8"))) PPC_WEAK_FUNC(sub_836515F8);
PPC_FUNC_IMPL(__imp__sub_836515F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836516b8
	sub_836516B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83651600"))) PPC_WEAK_FUNC(sub_83651600);
PPC_FUNC_IMPL(__imp__sub_83651600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83651608;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r8,r11,16612
	ctx.r8.s64 = ctx.r11.s64 + 16612;
	// addi r7,r10,16600
	ctx.r7.s64 = ctx.r10.s64 + 16600;
	// addi r6,r9,16596
	ctx.r6.s64 = ctx.r9.s64 + 16596;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,376
	ctx.r29.s64 = ctx.r3.s64 + 376;
	// lwz r5,396(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8365164c
	if (cr6.lt) goto loc_8365164C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8365164C;
	sub_8386D088(ctx, base);
loc_8365164C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,344
	ctx.r31.s64 = ctx.r28.s64 + 344;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83651678
	if (cr6.lt) goto loc_83651678;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83651678;
	sub_8386D088(ctx, base);
loc_83651678:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8365169c
	if (cr6.lt) goto loc_8365169C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8365169C;
	sub_8386D088(ctx, base);
loc_8365169C:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836516B0;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836516B8"))) PPC_WEAK_FUNC(sub_836516B8);
PPC_FUNC_IMPL(__imp__sub_836516B8) {
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
	// bl 0x83651600
	ctx.lr = 0x836516D8;
	sub_83651600(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836516f8
	if (cr6.eq) goto loc_836516F8;
	// bl 0x82595188
	ctx.lr = 0x836516E8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836516F8;
	sub_825952B8(ctx, base);
loc_836516F8:
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

__attribute__((alias("__imp__sub_83651714"))) PPC_WEAK_FUNC(sub_83651714);
PPC_FUNC_IMPL(__imp__sub_83651714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83651718"))) PPC_WEAK_FUNC(sub_83651718);
PPC_FUNC_IMPL(__imp__sub_83651718) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x83651730;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,16352
	ctx.r4.s64 = ctx.r11.s64 + 16352;
	// li r5,26
	ctx.r5.s64 = 26;
	// bl 0x824208c8
	ctx.lr = 0x83651744;
	sub_824208C8(ctx, base);
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r3,r7,16660
	ctx.r3.s64 = ctx.r7.s64 + 16660;
	// addi r6,r10,16644
	ctx.r6.s64 = ctx.r10.s64 + 16644;
	// addi r5,r9,16632
	ctx.r5.s64 = ctx.r9.s64 + 16632;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,16628
	ctx.r4.s64 = ctx.r8.s64 + 16628;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_8365178C"))) PPC_WEAK_FUNC(sub_8365178C);
PPC_FUNC_IMPL(__imp__sub_8365178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83651790"))) PPC_WEAK_FUNC(sub_83651790);
PPC_FUNC_IMPL(__imp__sub_83651790) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836517a8
	sub_836517A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83651798"))) PPC_WEAK_FUNC(sub_83651798);
PPC_FUNC_IMPL(__imp__sub_83651798) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836517a8
	sub_836517A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836517A0"))) PPC_WEAK_FUNC(sub_836517A0);
PPC_FUNC_IMPL(__imp__sub_836517A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836517a8
	sub_836517A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836517A8"))) PPC_WEAK_FUNC(sub_836517A8);
PPC_FUNC_IMPL(__imp__sub_836517A8) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,16644
	ctx.r7.s64 = ctx.r11.s64 + 16644;
	// addi r6,r10,16632
	ctx.r6.s64 = ctx.r10.s64 + 16632;
	// addi r5,r9,16628
	ctx.r5.s64 = ctx.r9.s64 + 16628;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,16660
	ctx.r4.s64 = ctx.r8.s64 + 16660;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836517F8;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83651818
	if (cr6.eq) goto loc_83651818;
	// bl 0x82595188
	ctx.lr = 0x83651808;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83651818;
	sub_825952B8(ctx, base);
loc_83651818:
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

__attribute__((alias("__imp__sub_83651834"))) PPC_WEAK_FUNC(sub_83651834);
PPC_FUNC_IMPL(__imp__sub_83651834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83651838"))) PPC_WEAK_FUNC(sub_83651838);
PPC_FUNC_IMPL(__imp__sub_83651838) {
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
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
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
	// li r11,248
	ctx.r11.s64 = 248;
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// addi r4,r9,792
	ctx.r4.s64 = ctx.r9.s64 + 792;
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
	ctx.lr = 0x836518B0;
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

__attribute__((alias("__imp__sub_836518C8"))) PPC_WEAK_FUNC(sub_836518C8);
PPC_FUNC_IMPL(__imp__sub_836518C8) {
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
	// ble cr6,0x83651934
	if (!cr6.gt) goto loc_83651934;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,17332
	ctx.r8.s64 = ctx.r10.s64 + 17332;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,120
	ctx.r6.s64 = 120;
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
	ctx.lr = 0x83651924;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83651934:
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

__attribute__((alias("__imp__sub_83651948"))) PPC_WEAK_FUNC(sub_83651948);
PPC_FUNC_IMPL(__imp__sub_83651948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83651950;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,17332
	ctx.r10.s64 = ctx.r11.s64 + 17332;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,120
	ctx.r8.s64 = 120;
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
	ctx.lr = 0x83651994;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x836519bc
	if (cr6.eq) goto loc_836519BC;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x836519B4;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_836519BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836519C4"))) PPC_WEAK_FUNC(sub_836519C4);
PPC_FUNC_IMPL(__imp__sub_836519C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836519C8"))) PPC_WEAK_FUNC(sub_836519C8);
PPC_FUNC_IMPL(__imp__sub_836519C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836519D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r3,88
	ctx.r28.s64 = ctx.r3.s64 + 88;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836519f0
	if (cr6.lt) goto loc_836519F0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836519F0;
	sub_8386D088(ctx, base);
loc_836519F0:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r29,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r29.u8);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83651a1c
	if (cr6.lt) goto loc_83651A1C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83651A1C;
	sub_8386D088(ctx, base);
loc_83651A1C:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// bl 0x8362c400
	ctx.lr = 0x83651A30;
	sub_8362C400(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83651a44
	if (cr6.lt) goto loc_83651A44;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83651A44;
	sub_8386D088(ctx, base);
loc_83651A44:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83651A58"))) PPC_WEAK_FUNC(sub_83651A58);
PPC_FUNC_IMPL(__imp__sub_83651A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83651A60;
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
	ctx.lr = 0x83651A90;
	sub_82420558(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// bl 0x83651838
	ctx.lr = 0x83651AA8;
	sub_83651838(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// bl 0x82420558
	ctx.lr = 0x83651AD0;
	sub_82420558(ctx, base);
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r9,84(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// stw r27,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// bl 0x82420558
	ctx.lr = 0x83651B00;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83651B0C"))) PPC_WEAK_FUNC(sub_83651B0C);
PPC_FUNC_IMPL(__imp__sub_83651B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83651B10"))) PPC_WEAK_FUNC(sub_83651B10);
PPC_FUNC_IMPL(__imp__sub_83651B10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// b 0x8362c480
	sub_8362C480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83651B18"))) PPC_WEAK_FUNC(sub_83651B18);
PPC_FUNC_IMPL(__imp__sub_83651B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83651b2c
	if (cr6.eq) goto loc_83651B2C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x83651a58
	sub_83651A58(ctx, base);
	return;
loc_83651B2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83651B34"))) PPC_WEAK_FUNC(sub_83651B34);
PPC_FUNC_IMPL(__imp__sub_83651B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83651B38"))) PPC_WEAK_FUNC(sub_83651B38);
PPC_FUNC_IMPL(__imp__sub_83651B38) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x836519c8
	sub_836519C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83651B40"))) PPC_WEAK_FUNC(sub_83651B40);
PPC_FUNC_IMPL(__imp__sub_83651B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83651B48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82420558
	ctx.lr = 0x83651B64;
	sub_82420558(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x83651838
	ctx.lr = 0x83651B70;
	sub_83651838(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82420558
	ctx.lr = 0x83651B8C;
	sub_82420558(ctx, base);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// bl 0x82420558
	ctx.lr = 0x83651BB0;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83651BBC"))) PPC_WEAK_FUNC(sub_83651BBC);
PPC_FUNC_IMPL(__imp__sub_83651BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83651BC0"))) PPC_WEAK_FUNC(sub_83651BC0);
PPC_FUNC_IMPL(__imp__sub_83651BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83651BC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r4,r11,17348
	ctx.r4.s64 = ctx.r11.s64 + 17348;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824208c8
	ctx.lr = 0x83651BF4;
	sub_824208C8(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x8362c380
	ctx.lr = 0x83651C0C;
	sub_8362C380(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// addi r28,r10,27936
	ctx.r28.s64 = ctx.r10.s64 + 27936;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824208c8
	ctx.lr = 0x83651C34;
	sub_824208C8(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x83651C58;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83651C64"))) PPC_WEAK_FUNC(sub_83651C64);
PPC_FUNC_IMPL(__imp__sub_83651C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83651C68"))) PPC_WEAK_FUNC(sub_83651C68);
PPC_FUNC_IMPL(__imp__sub_83651C68) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x83651b40
	sub_83651B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83651C74"))) PPC_WEAK_FUNC(sub_83651C74);
PPC_FUNC_IMPL(__imp__sub_83651C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83651C78"))) PPC_WEAK_FUNC(sub_83651C78);
PPC_FUNC_IMPL(__imp__sub_83651C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83651C80;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,133
	ctx.r10.s64 = 133;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x83651cc0
	if (!cr6.lt) goto loc_83651CC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83651CC0;
	sub_82E745E0(ctx, base);
loc_83651CC0:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,16808
	ctx.r27.s64 = ctx.r11.s64 + 16808;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83651D08;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83651D14;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83651d28
	if (cr6.lt) goto loc_83651D28;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83651D28;
	sub_82416268(ctx, base);
loc_83651D28:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x83651d48
	if (cr6.lt) goto loc_83651D48;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83651D48:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83651D58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83651d58
	if (!cr6.eq) goto loc_83651D58;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83651D7C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83651D88;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83651d9c
	if (cr6.lt) goto loc_83651D9C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83651D9C;
	sub_82416268(ctx, base);
loc_83651D9C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83651DC4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83651DD0;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83651de4
	if (cr6.lt) goto loc_83651DE4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83651DE4;
	sub_82416268(ctx, base);
loc_83651DE4:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x83651DFC;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x83651E18;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83651E24;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83651e38
	if (cr6.lt) goto loc_83651E38;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83651E38;
	sub_82416268(ctx, base);
loc_83651E38:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x83651e58
	if (cr6.lt) goto loc_83651E58;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83651E58:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_83651E68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83651e68
	if (!cr6.eq) goto loc_83651E68;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83651E8C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83651E98;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83651eac
	if (cr6.lt) goto loc_83651EAC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83651EAC;
	sub_82416268(ctx, base);
loc_83651EAC:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83651ED4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83651EE0;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83651ef4
	if (cr6.lt) goto loc_83651EF4;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83651EF4;
	sub_82416268(ctx, base);
loc_83651EF4:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x83651f14
	if (cr6.lt) goto loc_83651F14;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83651F14:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_83651F24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83651f24
	if (!cr6.eq) goto loc_83651F24;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83651F48;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83651F54;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83651f68
	if (cr6.lt) goto loc_83651F68;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83651F68;
	sub_82416268(ctx, base);
loc_83651F68:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83651F90;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83651F9C;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83651fb0
	if (cr6.lt) goto loc_83651FB0;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83651FB0;
	sub_82416268(ctx, base);
loc_83651FB0:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x83651FC8;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83651FD4"))) PPC_WEAK_FUNC(sub_83651FD4);
PPC_FUNC_IMPL(__imp__sub_83651FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83651FD8"))) PPC_WEAK_FUNC(sub_83651FD8);
PPC_FUNC_IMPL(__imp__sub_83651FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83651FE0;
	__savegprlr_14(ctx, base);
	// stwu r1,-2080(r1)
	ea = -2080 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r30,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r30.u32);
	// stw r3,2100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2100, ctx.r3.u32);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x83691bb8
	ctx.lr = 0x8365200C;
	sub_83691BB8(ctx, base);
	// lwz r10,1032(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1032);
	// lwz r11,1036(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1036);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// add r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// stw r20,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r20.u32);
	// bge cr6,0x8365359c
	if (!cr6.lt) goto loc_8365359C;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r7,11
	ctx.r7.s64 = 720896;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r21,r8,17332
	ctx.r21.s64 = ctx.r8.s64 + 17332;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r19,8
	ctx.r19.s64 = 8;
	// stw r21,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r21.u32);
	// ori r16,r7,1
	ctx.r16.u64 = ctx.r7.u64 | 1;
	// li r14,248
	ctx.r14.s64 = 248;
	// addi r26,r11,17224
	ctx.r26.s64 = ctx.r11.s64 + 17224;
	// addi r15,r10,792
	ctx.r15.s64 = ctx.r10.s64 + 792;
	// addi r18,r9,8980
	ctx.r18.s64 = ctx.r9.s64 + 8980;
loc_83652068:
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// addi r11,r1,1552
	ctx.r11.s64 = ctx.r1.s64 + 1552;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// ld r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,1560(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1560);
	// lwz r4,1564(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1564);
	// bl 0x82472fc0
	ctx.lr = 0x83652098;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-412
	ctx.r6.s64 = ctx.r26.s64 + -412;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827a8810
	ctx.lr = 0x836520B0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652148
	if (!cr6.eq) goto loc_83652148;
	// stb r30,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r30.u8);
	// addi r11,r1,1248
	ctx.r11.s64 = ctx.r1.s64 + 1248;
	// stw r27,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r27.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ld r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,1260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1260);
	// lwz r5,1256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1256);
	// bl 0x82472fc0
	ctx.lr = 0x836520EC;
	sub_82472FC0(ctx, base);
	// lwz r7,436(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83652100
	if (!cr6.lt) goto loc_83652100;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
loc_83652100:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83652104:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83652104
	if (!cr6.eq) goto loc_83652104;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r23,20
	ctx.r3.s64 = ctx.r23.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83652128;
	sub_824208C8(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8365213c
	if (cr6.lt) goto loc_8365213C;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x8365213C;
	sub_82416268(ctx, base);
loc_8365213C:
	// stw r27,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r27.u32);
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// stb r30,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r30.u8);
loc_83652148:
	// addi r6,r26,-404
	ctx.r6.s64 = ctx.r26.s64 + -404;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827a8810
	ctx.lr = 0x83652160;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836521a0
	if (!cr6.eq) goto loc_836521A0;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r10,r1,1472
	ctx.r10.s64 = ctx.r1.s64 + 1472;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,1472(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1472);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83652198
	if (!cr6.eq) goto loc_83652198;
	// ld r11,1480(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1480);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8365219c
	goto loc_8365219C;
loc_83652198:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8365219C:
	// stw r11,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r11.u32);
loc_836521A0:
	// addi r6,r26,-396
	ctx.r6.s64 = ctx.r26.s64 + -396;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827a8810
	ctx.lr = 0x836521B8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652250
	if (!cr6.eq) goto loc_83652250;
	// stw r27,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r27.u32);
	// addi r11,r1,1280
	ctx.r11.s64 = ctx.r1.s64 + 1280;
	// stw r30,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r30.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stb r30,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r30.u8);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ld r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// ld r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1292(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1292);
	// lwz r5,1288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1288);
	// bl 0x82472fc0
	ctx.lr = 0x836521F4;
	sub_82472FC0(ctx, base);
	// lwz r7,564(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r4,544(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83652208
	if (!cr6.lt) goto loc_83652208;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
loc_83652208:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8365220C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8365220c
	if (!cr6.eq) goto loc_8365220C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r23,116
	ctx.r3.s64 = ctx.r23.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83652230;
	sub_824208C8(ctx, base);
	// lwz r10,564(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83652244
	if (cr6.lt) goto loc_83652244;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x83652244;
	sub_82416268(ctx, base);
loc_83652244:
	// stw r27,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r27.u32);
	// stw r30,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r30.u32);
	// stb r30,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r30.u8);
loc_83652250:
	// addi r6,r26,-388
	ctx.r6.s64 = ctx.r26.s64 + -388;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827a8810
	ctx.lr = 0x83652268;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83653514
	if (!cr6.eq) goto loc_83653514;
	// addi r31,r23,152
	ctx.r31.s64 = ctx.r23.s64 + 152;
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// li r11,120
	ctx.r11.s64 = 120;
	// stw r19,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r19.u32);
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// stw r31,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r31.u32);
	// addi r25,r31,4
	ctx.r25.s64 = ctx.r31.s64 + 4;
	// stw r11,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r11.u32);
	// stw r28,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r28.u32);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// stw r25,872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 872, ctx.r25.u32);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// stw r25,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r25.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836522AC;
	sub_8247B7D8(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r30,152(r23)
	PPC_STORE_U32(ctx.r23.u32 + 152, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836522cc
	if (cr6.eq) goto loc_836522CC;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8247b268
	ctx.lr = 0x836522C4;
	sub_8247B268(ctx, base);
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_836522CC:
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r22,r10,r11
	ctx.r22.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// stw r22,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r22.u32);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// bge cr6,0x83653514
	if (!cr6.lt) goto loc_83653514;
loc_836522F4:
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x83651bc0
	ctx.lr = 0x836522FC;
	sub_83651BC0(ctx, base);
	// stw r30,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r30.u32);
	// stw r30,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// lwz r5,8(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r4,12(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// bl 0x83691bb8
	ctx.lr = 0x83652318;
	sub_83691BB8(ctx, base);
	// lwz r10,1000(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1000);
	// lwz r11,1004(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// add r17,r10,r11
	ctx.r17.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r17
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, xer);
	// bge cr6,0x836533a4
	if (!cr6.lt) goto loc_836533A4;
loc_83652334:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r11,r1,1632
	ctx.r11.s64 = ctx.r1.s64 + 1632;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// ld r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r20.u32 + 8);
	// ld r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,1640(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1640);
	// lwz r4,1644(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1644);
	// bl 0x82472fc0
	ctx.lr = 0x83652364;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-368
	ctx.r6.s64 = ctx.r26.s64 + -368;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x8365237C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652414
	if (!cr6.eq) goto loc_83652414;
	// stw r27,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r27.u32);
	// addi r11,r1,1312
	ctx.r11.s64 = ctx.r1.s64 + 1312;
	// stw r30,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r30.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stb r30,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r30.u8);
	// addi r10,r20,16
	ctx.r10.s64 = ctx.r20.s64 + 16;
	// ld r9,16(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// ld r8,24(r20)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1324(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1324);
	// lwz r5,1320(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1320);
	// bl 0x82472fc0
	ctx.lr = 0x836523B8;
	sub_82472FC0(ctx, base);
	// lwz r7,500(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r4,480(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836523cc
	if (!cr6.lt) goto loc_836523CC;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
loc_836523CC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836523D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836523d0
	if (!cr6.eq) goto loc_836523D0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836523F4;
	sub_824208C8(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83652408
	if (cr6.lt) goto loc_83652408;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x83652408;
	sub_82416268(ctx, base);
loc_83652408:
	// stw r27,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r27.u32);
	// stw r30,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r30.u32);
	// stb r30,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r30.u8);
loc_83652414:
	// addi r6,r26,-344
	ctx.r6.s64 = ctx.r26.s64 + -344;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x8365242C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83653108
	if (!cr6.eq) goto loc_83653108;
	// addi r11,r1,712
	ctx.r11.s64 = ctx.r1.s64 + 712;
	// stw r15,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r15.u32);
	// addi r10,r1,704
	ctx.r10.s64 = ctx.r1.s64 + 704;
	// stw r19,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r19.u32);
	// addi r9,r1,708
	ctx.r9.s64 = ctx.r1.s64 + 708;
	// stw r11,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r11.u32);
	// stw r10,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r10.u32);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// stw r9,936(r1)
	PPC_STORE_U32(ctx.r1.u32 + 936, ctx.r9.u32);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// stw r14,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r14.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x83652464;
	sub_8247B7D8(ctx, base);
	// lwz r3,712(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	// stw r30,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83652484
	if (cr6.eq) goto loc_83652484;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8247b268
	ctx.lr = 0x8365247C;
	sub_8247B268(ctx, base);
	// stw r30,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r30.u32);
	// stw r30,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r30.u32);
loc_83652484:
	// stw r18,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r18.u32);
	// lwz r11,24(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// lwz r22,28(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r21,r11,r22
	ctx.r21.u64 = ctx.r11.u64 + ctx.r22.u64;
	// cmplw cr6,r22,r21
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, xer);
	// bge cr6,0x836530f8
	if (!cr6.lt) goto loc_836530F8;
loc_836524A0:
	// stw r30,1680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1680, ctx.r30.u32);
	// addi r3,r1,1684
	ctx.r3.s64 = ctx.r1.s64 + 1684;
	// bl 0x8362c7e0
	ctx.lr = 0x836524AC;
	sub_8362C7E0(ctx, base);
	// stw r30,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r30.u32);
	// stw r30,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// lwz r5,8(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r4,12(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// bl 0x83691bb8
	ctx.lr = 0x836524C8;
	sub_83691BB8(ctx, base);
	// lwz r10,1064(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1064);
	// lwz r11,1068(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1068);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// bge cr6,0x8365302c
	if (!cr6.lt) goto loc_8365302C;
loc_836524E4:
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// addi r11,r1,1504
	ctx.r11.s64 = ctx.r1.s64 + 1504;
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// ld r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// ld r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,1512(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1512);
	// lwz r4,1516(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1516);
	// bl 0x82472fc0
	ctx.lr = 0x83652514;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-328
	ctx.r6.s64 = ctx.r26.s64 + -328;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x827a8810
	ctx.lr = 0x8365252C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365256c
	if (!cr6.eq) goto loc_8365256C;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,1344
	ctx.r10.s64 = ctx.r1.s64 + 1344;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1344(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1344);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83652564
	if (!cr6.eq) goto loc_83652564;
	// ld r11,1352(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1352);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83652568
	goto loc_83652568;
loc_83652564:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83652568:
	// stw r11,1680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1680, ctx.r11.u32);
loc_8365256C:
	// addi r6,r26,-312
	ctx.r6.s64 = ctx.r26.s64 + -312;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x827a8810
	ctx.lr = 0x83652584;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83653000
	if (!cr6.eq) goto loc_83653000;
	// stw r30,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r30.u32);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// lwz r5,24(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lwz r4,28(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x836525A8;
	sub_83691BB8(ctx, base);
	// lwz r10,968(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 968);
	// lwz r11,972(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 972);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bge cr6,0x83652fe4
	if (!cr6.lt) goto loc_83652FE4;
loc_836525C4:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r11,r1,1600
	ctx.r11.s64 = ctx.r1.s64 + 1600;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1608(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1608);
	// lwz r4,1612(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1612);
	// bl 0x82472fc0
	ctx.lr = 0x836525F4;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-304
	ctx.r6.s64 = ctx.r26.s64 + -304;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8365260C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365264c
	if (!cr6.eq) goto loc_8365264C;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1376
	ctx.r10.s64 = ctx.r1.s64 + 1376;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1376(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1376);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83652644
	if (!cr6.eq) goto loc_83652644;
	// ld r11,1384(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1384);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83652648
	goto loc_83652648;
loc_83652644:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83652648:
	// stw r11,1684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1684, ctx.r11.u32);
loc_8365264C:
	// addi r6,r26,-292
	ctx.r6.s64 = ctx.r26.s64 + -292;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83652664;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836526fc
	if (!cr6.eq) goto loc_836526FC;
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// addi r11,r1,1536
	ctx.r11.s64 = ctx.r1.s64 + 1536;
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stb r30,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r30.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1548(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// lwz r5,1544(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1544);
	// bl 0x82472fc0
	ctx.lr = 0x836526A0;
	sub_82472FC0(ctx, base);
	// lwz r7,340(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836526b4
	if (!cr6.lt) goto loc_836526B4;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_836526B4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836526B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836526b8
	if (!cr6.eq) goto loc_836526B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1688
	ctx.r3.s64 = ctx.r1.s64 + 1688;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836526DC;
	sub_824208C8(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836526f0
	if (cr6.lt) goto loc_836526F0;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836526F0;
	sub_82416268(ctx, base);
loc_836526F0:
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// stb r30,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r30.u8);
loc_836526FC:
	// addi r6,r26,-284
	ctx.r6.s64 = ctx.r26.s64 + -284;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83652714;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836527ac
	if (!cr6.eq) goto loc_836527AC;
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// addi r11,r1,1408
	ctx.r11.s64 = ctx.r1.s64 + 1408;
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r30,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r30.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1416(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1416);
	// lwz r4,1420(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1420);
	// bl 0x82472fc0
	ctx.lr = 0x83652750;
	sub_82472FC0(ctx, base);
	// lwz r7,404(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83652764
	if (!cr6.lt) goto loc_83652764;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
loc_83652764:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83652768:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83652768
	if (!cr6.eq) goto loc_83652768;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1716
	ctx.r3.s64 = ctx.r1.s64 + 1716;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8365278C;
	sub_824208C8(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836527a0
	if (cr6.lt) goto loc_836527A0;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836527A0;
	sub_82416268(ctx, base);
loc_836527A0:
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// stb r30,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r30.u8);
loc_836527AC:
	// addi r6,r26,-276
	ctx.r6.s64 = ctx.r26.s64 + -276;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836527C4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365285c
	if (!cr6.eq) goto loc_8365285C;
	// stw r27,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r27.u32);
	// addi r11,r1,1136
	ctx.r11.s64 = ctx.r1.s64 + 1136;
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stb r30,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r30.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1144);
	// lwz r4,1148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// bl 0x82472fc0
	ctx.lr = 0x83652800;
	sub_82472FC0(ctx, base);
	// lwz r7,468(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83652814
	if (!cr6.lt) goto loc_83652814;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
loc_83652814:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83652818:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83652818
	if (!cr6.eq) goto loc_83652818;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8365283C;
	sub_824208C8(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83652850
	if (cr6.lt) goto loc_83652850;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x83652850;
	sub_82416268(ctx, base);
loc_83652850:
	// stw r27,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r27.u32);
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// stb r30,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r30.u8);
loc_8365285C:
	// addi r6,r26,-268
	ctx.r6.s64 = ctx.r26.s64 + -268;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83652874;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836528b4
	if (!cr6.eq) goto loc_836528B4;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1168
	ctx.r10.s64 = ctx.r1.s64 + 1168;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1168);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836528ac
	if (!cr6.eq) goto loc_836528AC;
	// ld r11,1176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1176);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836528b0
	goto loc_836528B0;
loc_836528AC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836528B0:
	// stw r11,1772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1772, ctx.r11.u32);
loc_836528B4:
	// addi r6,r26,-256
	ctx.r6.s64 = ctx.r26.s64 + -256;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836528CC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365290c
	if (!cr6.eq) goto loc_8365290C;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1200
	ctx.r10.s64 = ctx.r1.s64 + 1200;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1200(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83652904
	if (!cr6.eq) goto loc_83652904;
	// ld r11,1208(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1208);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83652908
	goto loc_83652908;
loc_83652904:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83652908:
	// stw r11,1776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1776, ctx.r11.u32);
loc_8365290C:
	// addi r6,r26,-248
	ctx.r6.s64 = ctx.r26.s64 + -248;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83652924;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836529bc
	if (!cr6.eq) goto loc_836529BC;
	// stw r27,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r27.u32);
	// addi r11,r1,1232
	ctx.r11.s64 = ctx.r1.s64 + 1232;
	// stw r30,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r30.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stb r30,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r30.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1240);
	// lwz r4,1244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1244);
	// bl 0x82472fc0
	ctx.lr = 0x83652960;
	sub_82472FC0(ctx, base);
	// lwz r7,532(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r4,512(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83652974
	if (!cr6.lt) goto loc_83652974;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
loc_83652974:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83652978:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83652978
	if (!cr6.eq) goto loc_83652978;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1780
	ctx.r3.s64 = ctx.r1.s64 + 1780;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8365299C;
	sub_824208C8(ctx, base);
	// lwz r10,532(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836529b0
	if (cr6.lt) goto loc_836529B0;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x836529B0;
	sub_82416268(ctx, base);
loc_836529B0:
	// stw r27,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r27.u32);
	// stw r30,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r30.u32);
	// stb r30,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r30.u8);
loc_836529BC:
	// addi r6,r26,-240
	ctx.r6.s64 = ctx.r26.s64 + -240;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836529D4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652a14
	if (!cr6.eq) goto loc_83652A14;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1264
	ctx.r10.s64 = ctx.r1.s64 + 1264;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1264(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1264);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83652a0c
	if (!cr6.eq) goto loc_83652A0C;
	// ld r11,1272(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1272);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83652a10
	goto loc_83652A10;
loc_83652A0C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83652A10:
	// stw r11,1808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1808, ctx.r11.u32);
loc_83652A14:
	// addi r6,r26,-224
	ctx.r6.s64 = ctx.r26.s64 + -224;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83652A2C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652a6c
	if (!cr6.eq) goto loc_83652A6C;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1296
	ctx.r10.s64 = ctx.r1.s64 + 1296;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1296(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1296);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83652a64
	if (!cr6.eq) goto loc_83652A64;
	// ld r11,1304(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1304);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83652a68
	goto loc_83652A68;
loc_83652A64:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83652A68:
	// stw r11,1812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1812, ctx.r11.u32);
loc_83652A6C:
	// addi r6,r26,-208
	ctx.r6.s64 = ctx.r26.s64 + -208;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83652A84;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652b1c
	if (!cr6.eq) goto loc_83652B1C;
	// stw r27,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r27.u32);
	// addi r11,r1,1328
	ctx.r11.s64 = ctx.r1.s64 + 1328;
	// stw r30,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r30.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stb r30,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r30.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1336);
	// lwz r4,1340(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1340);
	// bl 0x82472fc0
	ctx.lr = 0x83652AC0;
	sub_82472FC0(ctx, base);
	// lwz r7,596(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r4,576(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83652ad4
	if (!cr6.lt) goto loc_83652AD4;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
loc_83652AD4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83652AD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83652ad8
	if (!cr6.eq) goto loc_83652AD8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1816
	ctx.r3.s64 = ctx.r1.s64 + 1816;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83652AFC;
	sub_824208C8(ctx, base);
	// lwz r10,596(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83652b10
	if (cr6.lt) goto loc_83652B10;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x82416268
	ctx.lr = 0x83652B10;
	sub_82416268(ctx, base);
loc_83652B10:
	// stw r27,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r27.u32);
	// stw r30,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r30.u32);
	// stb r30,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r30.u8);
loc_83652B1C:
	// addi r6,r26,-192
	ctx.r6.s64 = ctx.r26.s64 + -192;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83652B34;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652e54
	if (!cr6.eq) goto loc_83652E54;
	// stw r30,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r30.u32);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x83652B58;
	sub_83691BB8(ctx, base);
	// lwz r10,1096(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1096);
	// lwz r11,1100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1100);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83652e38
	if (!cr6.lt) goto loc_83652E38;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_83652B84:
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// addi r11,r1,1360
	ctx.r11.s64 = ctx.r1.s64 + 1360;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// ld r8,-8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1368(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1368);
	// lwz r4,1372(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1372);
	// bl 0x82472fc0
	ctx.lr = 0x83652BB8;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-184
	ctx.r6.s64 = ctx.r26.s64 + -184;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827a8810
	ctx.lr = 0x83652BD0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652c64
	if (!cr6.eq) goto loc_83652C64;
	// stw r27,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r27.u32);
	// addi r11,r1,1392
	ctx.r11.s64 = ctx.r1.s64 + 1392;
	// stw r30,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r30.u32);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// stb r30,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1400(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1400);
	// lwz r4,1404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1404);
	// bl 0x82472fc0
	ctx.lr = 0x83652C08;
	sub_82472FC0(ctx, base);
	// lwz r8,660(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r4,640(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83652c1c
	if (!cr6.lt) goto loc_83652C1C;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
loc_83652C1C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83652C20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83652c20
	if (!cr6.eq) goto loc_83652C20;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1844
	ctx.r3.s64 = ctx.r1.s64 + 1844;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83652C44;
	sub_824208C8(ctx, base);
	// lwz r10,660(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83652c58
	if (cr6.lt) goto loc_83652C58;
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x82416268
	ctx.lr = 0x83652C58;
	sub_82416268(ctx, base);
loc_83652C58:
	// stw r27,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r27.u32);
	// stw r30,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r30.u32);
	// stb r30,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r30.u8);
loc_83652C64:
	// addi r6,r26,-172
	ctx.r6.s64 = ctx.r26.s64 + -172;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827a8810
	ctx.lr = 0x83652C7C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652d10
	if (!cr6.eq) goto loc_83652D10;
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// addi r11,r1,1424
	ctx.r11.s64 = ctx.r1.s64 + 1424;
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stb r30,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1432(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1432);
	// lwz r4,1436(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1436);
	// bl 0x82472fc0
	ctx.lr = 0x83652CB4;
	sub_82472FC0(ctx, base);
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83652cc8
	if (!cr6.lt) goto loc_83652CC8;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
loc_83652CC8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83652CCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83652ccc
	if (!cr6.eq) goto loc_83652CCC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83652CF0;
	sub_824208C8(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83652d04
	if (cr6.lt) goto loc_83652D04;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x83652D04;
	sub_82416268(ctx, base);
loc_83652D04:
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// stb r30,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r30.u8);
loc_83652D10:
	// addi r6,r26,-156
	ctx.r6.s64 = ctx.r26.s64 + -156;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827a8810
	ctx.lr = 0x83652D28;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652d64
	if (!cr6.eq) goto loc_83652D64;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,1456
	ctx.r10.s64 = ctx.r1.s64 + 1456;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,1456(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1456);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83652d5c
	if (!cr6.eq) goto loc_83652D5C;
	// ld r11,1464(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1464);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83652d60
	goto loc_83652D60;
loc_83652D5C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83652D60:
	// stw r11,1900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1900, ctx.r11.u32);
loc_83652D64:
	// addi r6,r26,-140
	ctx.r6.s64 = ctx.r26.s64 + -140;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827a8810
	ctx.lr = 0x83652D7C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652db8
	if (!cr6.eq) goto loc_83652DB8;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1488
	ctx.r10.s64 = ctx.r1.s64 + 1488;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1488(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1488);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83652db0
	if (!cr6.eq) goto loc_83652DB0;
	// ld r11,1496(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1496);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83652db4
	goto loc_83652DB4;
loc_83652DB0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83652DB4:
	// stw r11,1904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1904, ctx.r11.u32);
loc_83652DB8:
	// addi r6,r26,-132
	ctx.r6.s64 = ctx.r26.s64 + -132;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827a8810
	ctx.lr = 0x83652DD0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652e0c
	if (!cr6.eq) goto loc_83652E0C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1520
	ctx.r10.s64 = ctx.r1.s64 + 1520;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1520(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1520);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83652e04
	if (!cr6.eq) goto loc_83652E04;
	// ld r11,1528(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1528);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83652e08
	goto loc_83652E08;
loc_83652E04:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83652E08:
	// stw r11,1908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1908, ctx.r11.u32);
loc_83652E0C:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83652e20
	if (cr6.lt) goto loc_83652E20;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x83652E20;
	sub_82416268(ctx, base);
loc_83652E20:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
	// bne 0x83652b84
	if (!cr0.eq) goto loc_83652B84;
loc_83652E38:
	// lwz r31,1104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83652e54
	if (cr6.eq) goto loc_83652E54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83652E4C;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83652E54;
	sub_82416268(ctx, base);
loc_83652E54:
	// addi r6,r26,-116
	ctx.r6.s64 = ctx.r26.s64 + -116;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83652E6C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652eac
	if (!cr6.eq) goto loc_83652EAC;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1120
	ctx.r10.s64 = ctx.r1.s64 + 1120;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1120);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83652ea4
	if (!cr6.eq) goto loc_83652EA4;
	// ld r11,1128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1128);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83652ea8
	goto loc_83652EA8;
loc_83652EA4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83652EA8:
	// stw r11,1912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1912, ctx.r11.u32);
loc_83652EAC:
	// addi r6,r26,-108
	ctx.r6.s64 = ctx.r26.s64 + -108;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83652EC4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652f04
	if (!cr6.eq) goto loc_83652F04;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1584
	ctx.r10.s64 = ctx.r1.s64 + 1584;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1584(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1584);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83652efc
	if (!cr6.eq) goto loc_83652EFC;
	// ld r11,1592(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1592);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83652f00
	goto loc_83652F00;
loc_83652EFC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83652F00:
	// stw r11,1916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1916, ctx.r11.u32);
loc_83652F04:
	// addi r6,r26,-100
	ctx.r6.s64 = ctx.r26.s64 + -100;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83652F1C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652f5c
	if (!cr6.eq) goto loc_83652F5C;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1616
	ctx.r10.s64 = ctx.r1.s64 + 1616;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1616(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1616);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83652f54
	if (!cr6.eq) goto loc_83652F54;
	// ld r11,1624(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1624);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83652f58
	goto loc_83652F58;
loc_83652F54:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83652F58:
	// stw r11,1920(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1920, ctx.r11.u32);
loc_83652F5C:
	// addi r6,r26,-92
	ctx.r6.s64 = ctx.r26.s64 + -92;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83652F74;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83652fb4
	if (!cr6.eq) goto loc_83652FB4;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1648
	ctx.r10.s64 = ctx.r1.s64 + 1648;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1648(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1648);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83652fac
	if (!cr6.eq) goto loc_83652FAC;
	// ld r11,1656(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1656);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83652fb0
	goto loc_83652FB0;
loc_83652FAC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83652FB0:
	// stw r11,1924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1924, ctx.r11.u32);
loc_83652FB4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83652fc8
	if (cr6.lt) goto loc_83652FC8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x83652FC8;
	sub_82416268(ctx, base);
loc_83652FC8:
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplw cr6,r28,r24
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, xer);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// blt cr6,0x836525c4
	if (cr6.lt) goto loc_836525C4;
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_83652FE4:
	// lwz r31,976(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83653000
	if (cr6.eq) goto loc_83653000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83652FF8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83653000;
	sub_82416268(ctx, base);
loc_83653000:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83653014
	if (cr6.lt) goto loc_83653014;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83653014;
	sub_82416268(ctx, base);
loc_83653014:
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// cmplw cr6,r25,r23
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, xer);
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
	// blt cr6,0x836524e4
	if (cr6.lt) goto loc_836524E4;
loc_8365302C:
	// lwz r9,704(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x83653098
	if (cr6.lt) goto loc_83653098;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x83653088
	if (!cr6.gt) goto loc_83653088;
	// addi r11,r1,712
	ctx.r11.s64 = ctx.r1.s64 + 712;
	// stw r15,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r15.u32);
	// addi r10,r1,704
	ctx.r10.s64 = ctx.r1.s64 + 704;
	// stw r19,908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 908, ctx.r19.u32);
	// addi r9,r1,708
	ctx.r9.s64 = ctx.r1.s64 + 708;
	// stw r11,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r11.u32);
	// stw r10,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r10.u32);
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// stw r9,904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 904, ctx.r9.u32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// stw r14,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r14.u32);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x8247b270
	ctx.lr = 0x8365307C;
	sub_8247B270(ctx, base);
	// lwz r9,704(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// stw r18,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// b 0x8365308c
	goto loc_8365308C;
loc_83653088:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8365308C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836530c8
	if (cr6.eq) goto loc_836530C8;
loc_83653098:
	// lwz r11,712(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	// mulli r10,r9,248
	ctx.r10.s64 = ctx.r9.s64 * 248;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836530c0
	if (cr0.eq) goto loc_836530C0;
	// lwz r10,1680(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1680);
	// addi r4,r1,1684
	ctx.r4.s64 = ctx.r1.s64 + 1684;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8362c6c0
	ctx.lr = 0x836530BC;
	sub_8362C6C0(ctx, base);
	// lwz r9,704(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
loc_836530C0:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r11.u32);
loc_836530C8:
	// lwz r31,1072(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1072);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836530e4
	if (cr6.eq) goto loc_836530E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836530DC;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836530E4;
	sub_82416268(ctx, base);
loc_836530E4:
	// addi r3,r1,1684
	ctx.r3.s64 = ctx.r1.s64 + 1684;
	// bl 0x8362c480
	ctx.lr = 0x836530EC;
	sub_8362C480(ctx, base);
	// addi r22,r22,16
	ctx.r22.s64 = ctx.r22.s64 + 16;
	// cmplw cr6,r22,r21
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, xer);
	// blt cr6,0x836524a0
	if (cr6.lt) goto loc_836524A0;
loc_836530F8:
	// lwz r25,244(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r28,236(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r24,140(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r23,2100(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2100);
loc_83653108:
	// addi r6,r26,-80
	ctx.r6.s64 = ctx.r26.s64 + -80;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,18
	ctx.r7.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83653120;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83653160
	if (!cr6.eq) goto loc_83653160;
	// ld r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// addi r10,r1,1152
	ctx.r10.s64 = ctx.r1.s64 + 1152;
	// ld r9,24(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// addi r8,r20,16
	ctx.r8.s64 = ctx.r20.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83653158
	if (!cr6.eq) goto loc_83653158;
	// ld r11,1160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1160);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8365315c
	goto loc_8365315C;
loc_83653158:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8365315C:
	// stw r11,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r11.u32);
loc_83653160:
	// addi r6,r26,-60
	ctx.r6.s64 = ctx.r26.s64 + -60;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83653178;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83653210
	if (!cr6.eq) goto loc_83653210;
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// addi r11,r1,1664
	ctx.r11.s64 = ctx.r1.s64 + 1664;
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r30.u8);
	// addi r10,r20,16
	ctx.r10.s64 = ctx.r20.s64 + 16;
	// ld r9,16(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// ld r8,24(r20)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,1672(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1672);
	// lwz r4,1676(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1676);
	// bl 0x82472fc0
	ctx.lr = 0x836531B4;
	sub_82472FC0(ctx, base);
	// lwz r7,308(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836531c8
	if (!cr6.lt) goto loc_836531C8;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
loc_836531C8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836531CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836531cc
	if (!cr6.eq) goto loc_836531CC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,724
	ctx.r3.s64 = ctx.r1.s64 + 724;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836531F0;
	sub_824208C8(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83653204
	if (cr6.lt) goto loc_83653204;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83653204;
	sub_82416268(ctx, base);
loc_83653204:
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r30.u8);
loc_83653210:
	// addi r6,r26,-44
	ctx.r6.s64 = ctx.r26.s64 + -44;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83653228;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83653268
	if (!cr6.eq) goto loc_83653268;
	// ld r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// addi r10,r1,1184
	ctx.r10.s64 = ctx.r1.s64 + 1184;
	// ld r9,24(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// addi r8,r20,16
	ctx.r8.s64 = ctx.r20.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1184);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83653260
	if (!cr6.eq) goto loc_83653260;
	// ld r11,1192(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1192);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83653264
	goto loc_83653264;
loc_83653260:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83653264:
	// stw r11,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r11.u32);
loc_83653268:
	// addi r6,r26,-36
	ctx.r6.s64 = ctx.r26.s64 + -36;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,24
	ctx.r7.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83653280;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836532c0
	if (!cr6.eq) goto loc_836532C0;
	// ld r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// addi r10,r1,1440
	ctx.r10.s64 = ctx.r1.s64 + 1440;
	// ld r9,24(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// addi r8,r20,16
	ctx.r8.s64 = ctx.r20.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1440(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1440);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836532b8
	if (!cr6.eq) goto loc_836532B8;
	// ld r11,1448(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1448);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836532bc
	goto loc_836532BC;
loc_836532B8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836532BC:
	// stw r11,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r11.u32);
loc_836532C0:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836532D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83653370
	if (!cr6.eq) goto loc_83653370;
	// stw r27,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r27.u32);
	// addi r11,r1,1216
	ctx.r11.s64 = ctx.r1.s64 + 1216;
	// stw r30,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r30.u32);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// stb r30,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r30.u8);
	// addi r10,r20,16
	ctx.r10.s64 = ctx.r20.s64 + 16;
	// ld r9,16(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// ld r8,24(r20)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1224);
	// lwz r4,1228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1228);
	// bl 0x82472fc0
	ctx.lr = 0x83653314;
	sub_82472FC0(ctx, base);
	// lwz r7,628(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r4,608(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83653328
	if (!cr6.lt) goto loc_83653328;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
loc_83653328:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8365332C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8365332c
	if (!cr6.eq) goto loc_8365332C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83653350;
	sub_824208C8(ctx, base);
	// lwz r10,628(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83653364
	if (cr6.lt) goto loc_83653364;
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x82416268
	ctx.lr = 0x83653364;
	sub_82416268(ctx, base);
loc_83653364:
	// stw r27,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r27.u32);
	// stw r30,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r30.u32);
	// stb r30,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r30.u8);
loc_83653370:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83653384
	if (cr6.lt) goto loc_83653384;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x83653384;
	sub_82416268(ctx, base);
loc_83653384:
	// addi r20,r20,32
	ctx.r20.s64 = ctx.r20.s64 + 32;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplw cr6,r20,r17
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r17.u32, xer);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// blt cr6,0x83652334
	if (cr6.lt) goto loc_83652334;
	// lwz r21,240(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r22,248(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
loc_836533A4:
	// lwz r11,152(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 152);
	// addi r31,r23,152
	ctx.r31.s64 = ctx.r23.s64 + 152;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83653408
	if (cr6.lt) goto loc_83653408;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836533f8
	if (!cr6.gt) goto loc_836533F8;
	// li r11,120
	ctx.r11.s64 = 120;
	// stw r28,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r28.u32);
	// stw r31,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r31.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r25,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r25.u32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// stw r19,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r19.u32);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// stw r11,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r11.u32);
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// bl 0x8247b270
	ctx.lr = 0x836533F0;
	sub_8247B270(ctx, base);
	// stw r18,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r18.u32);
	// b 0x836533fc
	goto loc_836533FC;
loc_836533F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836533FC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83653430
	if (cr6.eq) goto loc_83653430;
loc_83653408:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 * 120;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83653424
	if (cr0.eq) goto loc_83653424;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// bl 0x83651a58
	ctx.lr = 0x83653424;
	sub_83651A58(ctx, base);
loc_83653424:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83653430:
	// lwz r31,1008(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1008);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8365344c
	if (cr6.eq) goto loc_8365344C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83653444;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8365344C;
	sub_82416268(ctx, base);
loc_8365344C:
	// lwz r11,780(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83653460
	if (cr6.lt) goto loc_83653460;
	// lwz r3,760(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 760);
	// bl 0x8386d088
	ctx.lr = 0x83653460;
	sub_8386D088(ctx, base);
loc_83653460:
	// lwz r11,744(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 744);
	// stw r27,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r27.u32);
	// stw r30,776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 776, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,760(r1)
	PPC_STORE_U8(ctx.r1.u32 + 760, ctx.r30.u8);
	// blt cr6,0x83653480
	if (cr6.lt) goto loc_83653480;
	// lwz r3,724(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// bl 0x8386d088
	ctx.lr = 0x83653480;
	sub_8386D088(ctx, base);
loc_83653480:
	// addi r11,r1,712
	ctx.r11.s64 = ctx.r1.s64 + 712;
	// stw r15,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r15.u32);
	// addi r10,r1,704
	ctx.r10.s64 = ctx.r1.s64 + 704;
	// stw r27,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r27.u32);
	// addi r9,r1,708
	ctx.r9.s64 = ctx.r1.s64 + 708;
	// stw r30,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r30.u32);
	// stb r30,724(r1)
	PPC_STORE_U8(ctx.r1.u32 + 724, ctx.r30.u8);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stw r11,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r11.u32);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// stw r10,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r10.u32);
	// stw r9,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r9.u32);
	// stw r19,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r19.u32);
	// stw r14,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r14.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836534BC;
	sub_8247B7D8(ctx, base);
	// lwz r3,712(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	// stw r30,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836534dc
	if (cr6.eq) goto loc_836534DC;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8247b268
	ctx.lr = 0x836534D4;
	sub_8247B268(ctx, base);
	// stw r30,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r30.u32);
	// stw r30,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r30.u32);
loc_836534DC:
	// lwz r11,692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// stw r18,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r18.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836534f4
	if (cr6.lt) goto loc_836534F4;
	// lwz r3,672(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// bl 0x8386d088
	ctx.lr = 0x836534F4;
	sub_8386D088(ctx, base);
loc_836534F4:
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r27,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r27.u32);
	// stw r30,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r30.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// cmplw cr6,r24,r22
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r22.u32, xer);
	// stb r30,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r30.u8);
	// blt cr6,0x836522f4
	if (cr6.lt) goto loc_836522F4;
	// lwz r20,252(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
loc_83653514:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827a8810
	ctx.lr = 0x8365352C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365356c
	if (!cr6.eq) goto loc_8365356C;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,1568
	ctx.r10.s64 = ctx.r1.s64 + 1568;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1568(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1568);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83653564
	if (!cr6.eq) goto loc_83653564;
	// ld r11,1576(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1576);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83653568
	goto loc_83653568;
loc_83653564:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83653568:
	// stw r11,168(r23)
	PPC_STORE_U32(ctx.r23.u32 + 168, ctx.r11.u32);
loc_8365356C:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83653580
	if (cr6.lt) goto loc_83653580;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x83653580;
	sub_82416268(ctx, base);
loc_83653580:
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// cmplw cr6,r29,r20
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, xer);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// blt cr6,0x83652068
	if (cr6.lt) goto loc_83652068;
loc_8365359C:
	// lwz r31,1040(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1040);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836535b8
	if (cr6.eq) goto loc_836535B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836535B0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836535B8;
	sub_82416268(ctx, base);
loc_836535B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2080
	ctx.r1.s64 = ctx.r1.s64 + 2080;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836535C4"))) PPC_WEAK_FUNC(sub_836535C4);
PPC_FUNC_IMPL(__imp__sub_836535C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836535C8"))) PPC_WEAK_FUNC(sub_836535C8);
PPC_FUNC_IMPL(__imp__sub_836535C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836535D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836535DC;
	sub_82D95768(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,16712
	ctx.r29.s64 = ctx.r11.s64 + 16712;
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836535F4;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r7,r10,17372
	ctx.r7.s64 = ctx.r10.s64 + 17372;
	// addi r5,r8,17356
	ctx.r5.s64 = ctx.r8.s64 + 17356;
	// addi r6,r9,17360
	ctx.r6.s64 = ctx.r9.s64 + 17360;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8365363C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83653658;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83653668"))) PPC_WEAK_FUNC(sub_83653668);
PPC_FUNC_IMPL(__imp__sub_83653668) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83653710
	sub_83653710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83653670"))) PPC_WEAK_FUNC(sub_83653670);
PPC_FUNC_IMPL(__imp__sub_83653670) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83653710
	sub_83653710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83653678"))) PPC_WEAK_FUNC(sub_83653678);
PPC_FUNC_IMPL(__imp__sub_83653678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83653680;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r8,r11,17372
	ctx.r8.s64 = ctx.r11.s64 + 17372;
	// addi r7,r10,17360
	ctx.r7.s64 = ctx.r10.s64 + 17360;
	// addi r6,r9,17356
	ctx.r6.s64 = ctx.r9.s64 + 17356;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836536c4
	if (cr6.lt) goto loc_836536C4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836536C4;
	sub_8386D088(ctx, base);
loc_836536C4:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836536f0
	if (cr6.lt) goto loc_836536F0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836536F0;
	sub_8386D088(ctx, base);
loc_836536F0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x83653704;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8365370C"))) PPC_WEAK_FUNC(sub_8365370C);
PPC_FUNC_IMPL(__imp__sub_8365370C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83653710"))) PPC_WEAK_FUNC(sub_83653710);
PPC_FUNC_IMPL(__imp__sub_83653710) {
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
	// bl 0x83653678
	ctx.lr = 0x83653730;
	sub_83653678(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83653750
	if (cr6.eq) goto loc_83653750;
	// bl 0x82595188
	ctx.lr = 0x83653740;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83653750;
	sub_825952B8(ctx, base);
loc_83653750:
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

__attribute__((alias("__imp__sub_8365376C"))) PPC_WEAK_FUNC(sub_8365376C);
PPC_FUNC_IMPL(__imp__sub_8365376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83653770"))) PPC_WEAK_FUNC(sub_83653770);
PPC_FUNC_IMPL(__imp__sub_83653770) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x8365378C;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,16712
	ctx.r4.s64 = ctx.r11.s64 + 16712;
	// li r5,30
	ctx.r5.s64 = 30;
	// bl 0x824208c8
	ctx.lr = 0x836537A0;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// addi r4,r8,17392
	ctx.r4.s64 = ctx.r8.s64 + 17392;
	// addi r3,r7,17388
	ctx.r3.s64 = ctx.r7.s64 + 17388;
	// addi r6,r10,17408
	ctx.r6.s64 = ctx.r10.s64 + 17408;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r5,r9,17396
	ctx.r5.s64 = ctx.r9.s64 + 17396;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// li r4,27
	ctx.r4.s64 = 27;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// bl 0x836518c8
	ctx.lr = 0x836537EC;
	sub_836518C8(ctx, base);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8365380C"))) PPC_WEAK_FUNC(sub_8365380C);
PPC_FUNC_IMPL(__imp__sub_8365380C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83653810"))) PPC_WEAK_FUNC(sub_83653810);
PPC_FUNC_IMPL(__imp__sub_83653810) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83653828
	sub_83653828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83653818"))) PPC_WEAK_FUNC(sub_83653818);
PPC_FUNC_IMPL(__imp__sub_83653818) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83653828
	sub_83653828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83653820"))) PPC_WEAK_FUNC(sub_83653820);
PPC_FUNC_IMPL(__imp__sub_83653820) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83653828
	sub_83653828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83653828"))) PPC_WEAK_FUNC(sub_83653828);
PPC_FUNC_IMPL(__imp__sub_83653828) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,17408
	ctx.r7.s64 = ctx.r11.s64 + 17408;
	// addi r6,r10,17396
	ctx.r6.s64 = ctx.r10.s64 + 17396;
	// addi r5,r9,17392
	ctx.r5.s64 = ctx.r9.s64 + 17392;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,17388
	ctx.r4.s64 = ctx.r8.s64 + 17388;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x83651948
	ctx.lr = 0x8365387C;
	sub_83651948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x83653884;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836538a4
	if (cr6.eq) goto loc_836538A4;
	// bl 0x82595188
	ctx.lr = 0x83653894;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836538A4;
	sub_825952B8(ctx, base);
loc_836538A4:
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

__attribute__((alias("__imp__sub_836538C0"))) PPC_WEAK_FUNC(sub_836538C0);
PPC_FUNC_IMPL(__imp__sub_836538C0) {
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
	// ble cr6,0x8365392c
	if (!cr6.gt) goto loc_8365392C;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,18132
	ctx.r8.s64 = ctx.r10.s64 + 18132;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
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
	ctx.lr = 0x8365391C;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8365392C:
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

__attribute__((alias("__imp__sub_83653940"))) PPC_WEAK_FUNC(sub_83653940);
PPC_FUNC_IMPL(__imp__sub_83653940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83653948;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,18132
	ctx.r10.s64 = ctx.r11.s64 + 18132;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,48
	ctx.r8.s64 = 48;
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
	ctx.lr = 0x8365398C;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x836539b4
	if (cr6.eq) goto loc_836539B4;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x836539AC;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_836539B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836539BC"))) PPC_WEAK_FUNC(sub_836539BC);
PPC_FUNC_IMPL(__imp__sub_836539BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836539C0"))) PPC_WEAK_FUNC(sub_836539C0);
PPC_FUNC_IMPL(__imp__sub_836539C0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82420558
	ctx.lr = 0x836539FC;
	sub_82420558(ctx, base);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83653A40"))) PPC_WEAK_FUNC(sub_83653A40);
PPC_FUNC_IMPL(__imp__sub_83653A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83653a54
	if (cr6.eq) goto loc_83653A54;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x836539c0
	sub_836539C0(ctx, base);
	return;
loc_83653A54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83653A5C"))) PPC_WEAK_FUNC(sub_83653A5C);
PPC_FUNC_IMPL(__imp__sub_83653A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83653A60"))) PPC_WEAK_FUNC(sub_83653A60);
PPC_FUNC_IMPL(__imp__sub_83653A60) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82420558
	ctx.lr = 0x83653A90;
	sub_82420558(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83653AD0"))) PPC_WEAK_FUNC(sub_83653AD0);
PPC_FUNC_IMPL(__imp__sub_83653AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83653AD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,136
	ctx.r10.s64 = 136;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x83653b18
	if (!cr6.lt) goto loc_83653B18;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83653B18;
	sub_82E745E0(ctx, base);
loc_83653B18:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,17616
	ctx.r27.s64 = ctx.r11.s64 + 17616;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r27,-64
	ctx.r4.s64 = ctx.r27.s64 + -64;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83653B60;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83653B6C;
	sub_82E74C08(ctx, base);
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83653b80
	if (cr6.lt) goto loc_83653B80;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x83653B80;
	sub_82416268(ctx, base);
loc_83653B80:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// blt cr6,0x83653ba0
	if (cr6.lt) goto loc_83653BA0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83653BA0:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83653BB0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83653bb0
	if (!cr6.eq) goto loc_83653BB0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83653BD4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83653BE0;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83653bf4
	if (cr6.lt) goto loc_83653BF4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83653BF4;
	sub_82416268(ctx, base);
loc_83653BF4:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-56
	ctx.r4.s64 = ctx.r27.s64 + -56;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83653C1C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83653C28;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83653c3c
	if (cr6.lt) goto loc_83653C3C;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x83653C3C;
	sub_82416268(ctx, base);
loc_83653C3C:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x83653C54;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-48
	ctx.r4.s64 = ctx.r27.s64 + -48;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x83653C70;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83653C7C;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83653c90
	if (cr6.lt) goto loc_83653C90;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83653C90;
	sub_82416268(ctx, base);
loc_83653C90:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x83653cb0
	if (cr6.lt) goto loc_83653CB0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83653CB0:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_83653CC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83653cc0
	if (!cr6.eq) goto loc_83653CC0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83653CE4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83653CF0;
	sub_82E74C08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83653d04
	if (cr6.lt) goto loc_83653D04;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83653D04;
	sub_82416268(ctx, base);
loc_83653D04:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83653D2C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83653D38;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83653d4c
	if (cr6.lt) goto loc_83653D4C;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83653D4C;
	sub_82416268(ctx, base);
loc_83653D4C:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x83653d6c
	if (cr6.lt) goto loc_83653D6C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83653D6C:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_83653D7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83653d7c
	if (!cr6.eq) goto loc_83653D7C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83653DA0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83653DAC;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83653dc0
	if (cr6.lt) goto loc_83653DC0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83653DC0;
	sub_82416268(ctx, base);
loc_83653DC0:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83653DE8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83653DF4;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83653e08
	if (cr6.lt) goto loc_83653E08;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83653E08;
	sub_82416268(ctx, base);
loc_83653E08:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,172(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x83653E20;
	sub_82E746C0(ctx, base);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82472fc0
	ctx.lr = 0x83653E3C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83653E48;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83653e5c
	if (cr6.lt) goto loc_83653E5C;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83653E5C;
	sub_82416268(ctx, base);
loc_83653E5C:
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// blt cr6,0x83653e7c
	if (cr6.lt) goto loc_83653E7C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83653E7C:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_83653E8C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83653e8c
	if (!cr6.eq) goto loc_83653E8C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83653EB0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83653EBC;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83653ed0
	if (cr6.lt) goto loc_83653ED0;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83653ED0;
	sub_82416268(ctx, base);
loc_83653ED0:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83653EF8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83653F04;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83653f18
	if (cr6.lt) goto loc_83653F18;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x83653F18;
	sub_82416268(ctx, base);
loc_83653F18:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// lwz r4,204(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// bl 0x82e746c0
	ctx.lr = 0x83653F30;
	sub_82E746C0(ctx, base);
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82472fc0
	ctx.lr = 0x83653F4C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83653F58;
	sub_82E74C08(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83653f6c
	if (cr6.lt) goto loc_83653F6C;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x83653F6C;
	sub_82416268(ctx, base);
loc_83653F6C:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// lwz r4,208(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// bl 0x82e746c0
	ctx.lr = 0x83653F84;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83653F90"))) PPC_WEAK_FUNC(sub_83653F90);
PPC_FUNC_IMPL(__imp__sub_83653F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83653F98;
	__savegprlr_14(ctx, base);
	// stwu r1,-1392(r1)
	ea = -1392 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r28,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r28.u32);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x83691bb8
	ctx.lr = 0x83653FC0;
	sub_83691BB8(ctx, base);
	// lwz r10,776(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 776);
	// lwz r11,780(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83655078
	if (!cr6.lt) goto loc_83655078;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r5,11
	ctx.r5.s64 = 720896;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32204
	ctx.r6.s64 = -2110521344;
	// addi r4,r10,30872
	ctx.r4.s64 = ctx.r10.s64 + 30872;
	// addi r3,r9,27936
	ctx.r3.s64 = ctx.r9.s64 + 27936;
	// li r23,15
	ctx.r23.s64 = 15;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// li r19,4
	ctx.r19.s64 = 4;
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// ori r21,r5,1
	ctx.r21.u64 = ctx.r5.u64 | 1;
	// li r17,8
	ctx.r17.s64 = 8;
	// addi r18,r11,18032
	ctx.r18.s64 = ctx.r11.s64 + 18032;
	// addi r14,r8,18132
	ctx.r14.s64 = ctx.r8.s64 + 18132;
	// addi r22,r7,8980
	ctx.r22.s64 = ctx.r7.s64 + 8980;
	// addi r15,r6,26164
	ctx.r15.s64 = ctx.r6.s64 + 26164;
loc_8365402C:
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// addi r11,r1,1056
	ctx.r11.s64 = ctx.r1.s64 + 1056;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// ld r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r20.u32 + 8);
	// ld r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,1064(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1064);
	// lwz r4,1068(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1068);
	// bl 0x82472fc0
	ctx.lr = 0x8365405C;
	sub_82472FC0(ctx, base);
	// addi r6,r18,-348
	ctx.r6.s64 = ctx.r18.s64 + -348;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83654074;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365410c
	if (!cr6.eq) goto loc_8365410C;
	// stb r28,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r28.u8);
	// addi r11,r1,912
	ctx.r11.s64 = ctx.r1.s64 + 912;
	// stw r23,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r23.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r28,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r28.u32);
	// addi r10,r20,16
	ctx.r10.s64 = ctx.r20.s64 + 16;
	// ld r8,16(r20)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,924(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 924);
	// lwz r5,920(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 920);
	// bl 0x82472fc0
	ctx.lr = 0x836540B0;
	sub_82472FC0(ctx, base);
	// lwz r7,308(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836540c4
	if (!cr6.lt) goto loc_836540C4;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
loc_836540C4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836540C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836540c8
	if (!cr6.eq) goto loc_836540C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,20
	ctx.r3.s64 = ctx.r16.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836540EC;
	sub_824208C8(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83654100
	if (cr6.lt) goto loc_83654100;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83654100;
	sub_82416268(ctx, base);
loc_83654100:
	// stw r23,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r23.u32);
	// stw r28,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r28.u32);
	// stb r28,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r28.u8);
loc_8365410C:
	// addi r6,r18,-340
	ctx.r6.s64 = ctx.r18.s64 + -340;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83654124;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83654164
	if (!cr6.eq) goto loc_83654164;
	// ld r9,24(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// addi r10,r1,1072
	ctx.r10.s64 = ctx.r1.s64 + 1072;
	// ld r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// addi r8,r20,16
	ctx.r8.s64 = ctx.r20.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,1072(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1072);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8365415c
	if (!cr6.eq) goto loc_8365415C;
	// ld r11,1080(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1080);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83654160
	goto loc_83654160;
loc_8365415C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83654160:
	// stw r11,48(r16)
	PPC_STORE_U32(ctx.r16.u32 + 48, ctx.r11.u32);
loc_83654164:
	// addi r6,r18,-332
	ctx.r6.s64 = ctx.r18.s64 + -332;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8365417C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83654214
	if (!cr6.eq) goto loc_83654214;
	// stw r23,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r23.u32);
	// addi r11,r1,944
	ctx.r11.s64 = ctx.r1.s64 + 944;
	// stw r28,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r28.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stb r28,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r28.u8);
	// addi r10,r20,16
	ctx.r10.s64 = ctx.r20.s64 + 16;
	// ld r8,24(r20)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// ld r9,16(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,956(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 956);
	// lwz r5,952(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 952);
	// bl 0x82472fc0
	ctx.lr = 0x836541B8;
	sub_82472FC0(ctx, base);
	// lwz r7,436(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836541cc
	if (!cr6.lt) goto loc_836541CC;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
loc_836541CC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836541D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836541d0
	if (!cr6.eq) goto loc_836541D0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,116
	ctx.r3.s64 = ctx.r16.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836541F4;
	sub_824208C8(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83654208
	if (cr6.lt) goto loc_83654208;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x83654208;
	sub_82416268(ctx, base);
loc_83654208:
	// stw r23,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r23.u32);
	// stw r28,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r28.u32);
	// stb r28,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r28.u8);
loc_83654214:
	// addi r6,r18,-324
	ctx.r6.s64 = ctx.r18.s64 + -324;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8365422C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365426c
	if (!cr6.eq) goto loc_8365426C;
	// ld r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// addi r10,r1,1200
	ctx.r10.s64 = ctx.r1.s64 + 1200;
	// ld r9,24(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// addi r8,r20,16
	ctx.r8.s64 = ctx.r20.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1200(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83654264
	if (!cr6.eq) goto loc_83654264;
	// ld r11,1208(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1208);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83654268
	goto loc_83654268;
loc_83654264:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83654268:
	// stw r11,148(r16)
	PPC_STORE_U32(ctx.r16.u32 + 148, ctx.r11.u32);
loc_8365426C:
	// addi r6,r18,-300
	ctx.r6.s64 = ctx.r18.s64 + -300;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,25
	ctx.r7.s64 = 25;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83654284;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836542c4
	if (!cr6.eq) goto loc_836542C4;
	// ld r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// ld r9,24(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// addi r8,r20,16
	ctx.r8.s64 = ctx.r20.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,976(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836542bc
	if (!cr6.eq) goto loc_836542BC;
	// ld r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 984);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836542c0
	goto loc_836542C0;
loc_836542BC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_836542C0:
	// stw r11,152(r16)
	PPC_STORE_U32(ctx.r16.u32 + 152, ctx.r11.u32);
loc_836542C4:
	// addi r6,r18,-272
	ctx.r6.s64 = ctx.r18.s64 + -272;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836542DC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365431c
	if (!cr6.eq) goto loc_8365431C;
	// ld r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// addi r10,r1,1104
	ctx.r10.s64 = ctx.r1.s64 + 1104;
	// ld r9,24(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// addi r8,r20,16
	ctx.r8.s64 = ctx.r20.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83654314
	if (!cr6.eq) goto loc_83654314;
	// ld r11,1112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1112);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83654318
	goto loc_83654318;
loc_83654314:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83654318:
	// stw r11,156(r16)
	PPC_STORE_U32(ctx.r16.u32 + 156, ctx.r11.u32);
loc_8365431C:
	// addi r6,r18,-256
	ctx.r6.s64 = ctx.r18.s64 + -256;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83654334;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83654374
	if (!cr6.eq) goto loc_83654374;
	// ld r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// addi r10,r1,1008
	ctx.r10.s64 = ctx.r1.s64 + 1008;
	// ld r9,24(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// addi r8,r20,16
	ctx.r8.s64 = ctx.r20.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1008(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1008);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8365436c
	if (!cr6.eq) goto loc_8365436C;
	// ld r11,1016(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1016);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83654370
	goto loc_83654370;
loc_8365436C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83654370:
	// stw r11,160(r16)
	PPC_STORE_U32(ctx.r16.u32 + 160, ctx.r11.u32);
loc_83654374:
	// addi r6,r18,-240
	ctx.r6.s64 = ctx.r18.s64 + -240;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8365438C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836543cc
	if (!cr6.eq) goto loc_836543CC;
	// ld r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// addi r10,r1,1168
	ctx.r10.s64 = ctx.r1.s64 + 1168;
	// ld r9,24(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// addi r8,r20,16
	ctx.r8.s64 = ctx.r20.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1168);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836543c4
	if (!cr6.eq) goto loc_836543C4;
	// ld r11,1176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1176);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836543c8
	goto loc_836543C8;
loc_836543C4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_836543C8:
	// stw r11,164(r16)
	PPC_STORE_U32(ctx.r16.u32 + 164, ctx.r11.u32);
loc_836543CC:
	// addi r6,r18,-224
	ctx.r6.s64 = ctx.r18.s64 + -224;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836543E4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83654424
	if (!cr6.eq) goto loc_83654424;
	// ld r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// addi r10,r1,848
	ctx.r10.s64 = ctx.r1.s64 + 848;
	// ld r9,24(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// addi r8,r20,16
	ctx.r8.s64 = ctx.r20.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,848(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8365441c
	if (!cr6.eq) goto loc_8365441C;
	// ld r11,856(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 856);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83654420
	goto loc_83654420;
loc_8365441C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83654420:
	// stw r11,168(r16)
	PPC_STORE_U32(ctx.r16.u32 + 168, ctx.r11.u32);
loc_83654424:
	// addi r6,r18,-208
	ctx.r6.s64 = ctx.r18.s64 + -208;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8365443C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836544d4
	if (!cr6.eq) goto loc_836544D4;
	// stw r23,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r23.u32);
	// addi r11,r1,864
	ctx.r11.s64 = ctx.r1.s64 + 864;
	// stw r28,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r28.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stb r28,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r28.u8);
	// addi r10,r20,16
	ctx.r10.s64 = ctx.r20.s64 + 16;
	// ld r9,16(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// ld r8,24(r20)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,872(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 872);
	// lwz r4,876(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// bl 0x82472fc0
	ctx.lr = 0x83654478;
	sub_82472FC0(ctx, base);
	// lwz r7,340(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8365448c
	if (!cr6.lt) goto loc_8365448C;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_8365448C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83654490:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83654490
	if (!cr6.eq) goto loc_83654490;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,172
	ctx.r3.s64 = ctx.r16.s64 + 172;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836544B4;
	sub_824208C8(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836544c8
	if (cr6.lt) goto loc_836544C8;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836544C8;
	sub_82416268(ctx, base);
loc_836544C8:
	// stw r23,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r23.u32);
	// stw r28,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r28.u32);
	// stb r28,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r28.u8);
loc_836544D4:
	// addi r6,r18,-184
	ctx.r6.s64 = ctx.r18.s64 + -184;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836544EC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83654584
	if (!cr6.eq) goto loc_83654584;
	// stw r28,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r28.u32);
	// addi r11,r1,896
	ctx.r11.s64 = ctx.r1.s64 + 896;
	// stb r28,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r28.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r23,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r23.u32);
	// addi r10,r20,16
	ctx.r10.s64 = ctx.r20.s64 + 16;
	// ld r9,24(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// ld r8,16(r20)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,904(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 904);
	// lwz r4,908(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 908);
	// bl 0x82472fc0
	ctx.lr = 0x83654528;
	sub_82472FC0(ctx, base);
	// lwz r7,404(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8365453c
	if (!cr6.lt) goto loc_8365453C;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
loc_8365453C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83654540:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83654540
	if (!cr6.eq) goto loc_83654540;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,200
	ctx.r3.s64 = ctx.r16.s64 + 200;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83654564;
	sub_824208C8(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83654578
	if (cr6.lt) goto loc_83654578;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x83654578;
	sub_82416268(ctx, base);
loc_83654578:
	// stw r23,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r23.u32);
	// stw r28,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r28.u32);
	// stb r28,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r28.u8);
loc_83654584:
	// addi r6,r18,-168
	ctx.r6.s64 = ctx.r18.s64 + -168;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,24
	ctx.r7.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8365459C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836546d0
	if (!cr6.eq) goto loc_836546D0;
	// addi r31,r16,232
	ctx.r31.s64 = ctx.r16.s64 + 232;
	// stw r15,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r15.u32);
	// stw r19,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r19.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r19,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r19.u32);
	// stw r30,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r30.u32);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// stw r29,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836545D4;
	sub_8247B7D8(ctx, base);
	// lwz r3,240(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 240);
	// stw r28,232(r16)
	PPC_STORE_U32(ctx.r16.u32 + 232, ctx.r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836545f4
	if (cr6.eq) goto loc_836545F4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x8247b268
	ctx.lr = 0x836545EC;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_836545F4:
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// lwz r11,28(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bge cr6,0x836546d0
	if (!cr6.lt) goto loc_836546D0;
loc_83654614:
	// ld r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// addi r10,r1,928
	ctx.r10.s64 = ctx.r1.s64 + 928;
	// ld r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,928(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83654640
	if (!cr6.eq) goto loc_83654640;
	// ld r11,936(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 936);
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83654644
	goto loc_83654644;
loc_83654640:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_83654644:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836546a0
	if (cr6.lt) goto loc_836546A0;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x83654690
	if (!cr6.gt) goto loc_83654690;
	// stw r30,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r30.u32);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r29,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r29.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stw r19,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r19.u32);
	// stw r19,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r19.u32);
	// stw r15,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r15.u32);
	// bl 0x8247b270
	ctx.lr = 0x83654688;
	sub_8247B270(ctx, base);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// b 0x83654694
	goto loc_83654694;
loc_83654690:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83654694:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836546c4
	if (cr6.eq) goto loc_836546C4;
loc_836546A0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836546b8
	if (cr0.eq) goto loc_836546B8;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_836546B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836546C4:
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, xer);
	// blt cr6,0x83654614
	if (cr6.lt) goto loc_83654614;
loc_836546D0:
	// addi r6,r18,-140
	ctx.r6.s64 = ctx.r18.s64 + -140;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836546E8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83654780
	if (!cr6.eq) goto loc_83654780;
	// stw r23,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r23.u32);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// stw r28,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r28.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stb r28,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r28.u8);
	// addi r10,r20,16
	ctx.r10.s64 = ctx.r20.s64 + 16;
	// ld r9,16(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 16);
	// ld r8,24(r20)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r20.u32 + 24);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,968(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 968);
	// lwz r4,972(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 972);
	// bl 0x82472fc0
	ctx.lr = 0x83654724;
	sub_82472FC0(ctx, base);
	// lwz r7,468(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83654738
	if (!cr6.lt) goto loc_83654738;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
loc_83654738:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8365473C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8365473c
	if (!cr6.eq) goto loc_8365473C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,248
	ctx.r3.s64 = ctx.r16.s64 + 248;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83654760;
	sub_824208C8(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83654774
	if (cr6.lt) goto loc_83654774;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x83654774;
	sub_82416268(ctx, base);
loc_83654774:
	// stw r23,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r23.u32);
	// stw r28,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r28.u32);
	// stb r28,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r28.u8);
loc_83654780:
	// addi r6,r18,-124
	ctx.r6.s64 = ctx.r18.s64 + -124;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83654798;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836548c8
	if (!cr6.eq) goto loc_836548C8;
	// addi r31,r16,280
	ctx.r31.s64 = ctx.r16.s64 + 280;
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r19.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r19,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r19.u32);
	// stw r30,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r30.u32);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// stw r29,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836547D0;
	sub_8247B7D8(ctx, base);
	// lwz r3,288(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 288);
	// stw r28,280(r16)
	PPC_STORE_U32(ctx.r16.u32 + 280, ctx.r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836547f0
	if (cr6.eq) goto loc_836547F0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x8247b268
	ctx.lr = 0x836547E8;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_836547F0:
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// lwz r11,24(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// lwz r27,28(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r25,r11,r27
	ctx.r25.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// bge cr6,0x836548c8
	if (!cr6.lt) goto loc_836548C8;
loc_8365480C:
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addi r10,r1,992
	ctx.r10.s64 = ctx.r1.s64 + 992;
	// ld r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,992(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83654838
	if (!cr6.eq) goto loc_83654838;
	// ld r11,1000(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1000);
	// rotlwi r26,r11,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8365483c
	goto loc_8365483C;
loc_83654838:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_8365483C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83654898
	if (cr6.lt) goto loc_83654898;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x83654888
	if (!cr6.gt) goto loc_83654888;
	// stw r30,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r30.u32);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// stw r31,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r31.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r29,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r29.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stw r19,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r19.u32);
	// stw r19,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r19.u32);
	// stw r15,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r15.u32);
	// bl 0x8247b270
	ctx.lr = 0x83654880;
	sub_8247B270(ctx, base);
	// stw r22,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r22.u32);
	// b 0x8365488c
	goto loc_8365488C;
loc_83654888:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8365488C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836548bc
	if (cr6.eq) goto loc_836548BC;
loc_83654898:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836548b0
	if (cr0.eq) goto loc_836548B0;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_836548B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836548BC:
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// blt cr6,0x8365480c
	if (cr6.lt) goto loc_8365480C;
loc_836548C8:
	// addi r6,r18,-108
	ctx.r6.s64 = ctx.r18.s64 + -108;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836548E0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83654dac
	if (!cr6.eq) goto loc_83654DAC;
	// addi r29,r16,296
	ctx.r29.s64 = ctx.r16.s64 + 296;
	// stw r14,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r14.u32);
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r17,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r17.u32);
	// addi r27,r29,8
	ctx.r27.s64 = ctx.r29.s64 + 8;
	// stw r29,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r29.u32);
	// addi r25,r29,4
	ctx.r25.s64 = ctx.r29.s64 + 4;
	// stw r11,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r11.u32);
	// stw r27,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r27.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// stw r25,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r25.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x8247b7d8
	ctx.lr = 0x8365491C;
	sub_8247B7D8(ctx, base);
	// lwz r3,304(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 304);
	// stw r28,296(r16)
	PPC_STORE_U32(ctx.r16.u32 + 296, ctx.r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8365493c
	if (cr6.eq) goto loc_8365493C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x8247b268
	ctx.lr = 0x83654934;
	sub_8247B268(ctx, base);
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
loc_8365493C:
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// lwz r11,28(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83654dac
	if (!cr6.lt) goto loc_83654DAC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r26,r11,12
	ctx.r26.s64 = ctx.r11.s64 + 12;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
loc_8365496C:
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r28,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r28.u8);
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x824208c8
	ctx.lr = 0x83654988;
	sub_824208C8(ctx, base);
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// stw r28,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r28.u32);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// stw r28,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r28.u32);
	// stw r28,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r28.u32);
	// lwz r5,-4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x83691bb8
	ctx.lr = 0x836549B8;
	sub_83691BB8(ctx, base);
	// lwz r10,744(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 744);
	// lwz r11,748(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83654c94
	if (!cr6.lt) goto loc_83654C94;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_836549E4:
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// addi r11,r1,1024
	ctx.r11.s64 = ctx.r1.s64 + 1024;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r28.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r8,-8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1032(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1032);
	// lwz r4,1036(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1036);
	// bl 0x82472fc0
	ctx.lr = 0x83654A18;
	sub_82472FC0(ctx, base);
	// addi r6,r18,-92
	ctx.r6.s64 = ctx.r18.s64 + -92;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83654A30;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83654ac4
	if (!cr6.eq) goto loc_83654AC4;
	// stw r23,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r23.u32);
	// addi r11,r1,832
	ctx.r11.s64 = ctx.r1.s64 + 832;
	// stw r28,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r28.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stb r28,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r28.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,840(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 840);
	// lwz r4,844(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 844);
	// bl 0x82472fc0
	ctx.lr = 0x83654A68;
	sub_82472FC0(ctx, base);
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83654a7c
	if (!cr6.lt) goto loc_83654A7C;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
loc_83654A7C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83654A80:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83654a80
	if (!cr6.eq) goto loc_83654A80;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83654AA4;
	sub_824208C8(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83654ab8
	if (cr6.lt) goto loc_83654AB8;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x83654AB8;
	sub_82416268(ctx, base);
loc_83654AB8:
	// stw r23,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r23.u32);
	// stw r28,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r28.u32);
	// stb r28,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r28.u8);
loc_83654AC4:
	// addi r6,r18,-80
	ctx.r6.s64 = ctx.r18.s64 + -80;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83654ADC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83654b18
	if (!cr6.eq) goto loc_83654B18;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1088
	ctx.r10.s64 = ctx.r1.s64 + 1088;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1088(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83654b10
	if (!cr6.eq) goto loc_83654B10;
	// ld r11,1096(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1096);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83654b14
	goto loc_83654B14;
loc_83654B10:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83654B14:
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
loc_83654B18:
	// addi r6,r18,-72
	ctx.r6.s64 = ctx.r18.s64 + -72;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83654B30;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83654b6c
	if (!cr6.eq) goto loc_83654B6C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1120
	ctx.r10.s64 = ctx.r1.s64 + 1120;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1120);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83654b64
	if (!cr6.eq) goto loc_83654B64;
	// ld r11,1128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1128);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83654b68
	goto loc_83654B68;
loc_83654B64:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83654B68:
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
loc_83654B6C:
	// addi r6,r18,-60
	ctx.r6.s64 = ctx.r18.s64 + -60;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83654B84;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83654bc0
	if (!cr6.eq) goto loc_83654BC0;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1152
	ctx.r10.s64 = ctx.r1.s64 + 1152;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83654bb8
	if (!cr6.eq) goto loc_83654BB8;
	// ld r11,1160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1160);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83654bbc
	goto loc_83654BBC;
loc_83654BB8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83654BBC:
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
loc_83654BC0:
	// addi r6,r18,-48
	ctx.r6.s64 = ctx.r18.s64 + -48;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83654BD8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83654c14
	if (!cr6.eq) goto loc_83654C14;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1184
	ctx.r10.s64 = ctx.r1.s64 + 1184;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1184);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83654c0c
	if (!cr6.eq) goto loc_83654C0C;
	// ld r11,1192(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1192);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83654c10
	goto loc_83654C10;
loc_83654C0C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83654C10:
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
loc_83654C14:
	// addi r6,r18,-36
	ctx.r6.s64 = ctx.r18.s64 + -36;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83654C2C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83654c68
	if (!cr6.eq) goto loc_83654C68;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1216
	ctx.r10.s64 = ctx.r1.s64 + 1216;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1216(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1216);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83654c60
	if (!cr6.eq) goto loc_83654C60;
	// ld r11,1224(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1224);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83654c64
	goto loc_83654C64;
loc_83654C60:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83654C64:
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
loc_83654C68:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83654c7c
	if (cr6.lt) goto loc_83654C7C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x83654C7C;
	sub_82416268(ctx, base);
loc_83654C7C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r28.u8);
	// bne 0x836549e4
	if (!cr0.eq) goto loc_836549E4;
loc_83654C94:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83654cf4
	if (cr6.lt) goto loc_83654CF4;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x83654ce4
	if (!cr6.gt) goto loc_83654CE4;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r27,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r27.u32);
	// stw r29,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r29.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r25,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r25.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r17,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r17.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stw r11,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r11.u32);
	// stw r14,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r14.u32);
	// bl 0x8247b270
	ctx.lr = 0x83654CDC;
	sub_8247B270(ctx, base);
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// b 0x83654ce8
	goto loc_83654CE8;
loc_83654CE4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83654CE8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83654d64
	if (cr6.eq) goto loc_83654D64;
loc_83654CF4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83654d58
	if (cr0.eq) goto loc_83654D58;
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82420558
	ctx.lr = 0x83654D30;
	sub_82420558(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// lwz r8,232(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lwz r7,236(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
loc_83654D58:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83654D64:
	// lwz r31,752(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83654d80
	if (cr6.eq) goto loc_83654D80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83654D78;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83654D80;
	sub_82416268(ctx, base);
loc_83654D80:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83654d94
	if (cr6.lt) goto loc_83654D94;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8386d088
	ctx.lr = 0x83654D94;
	sub_8386D088(ctx, base);
loc_83654D94:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// stb r28,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r28.u8);
	// bne 0x8365496c
	if (!cr0.eq) goto loc_8365496C;
loc_83654DAC:
	// addi r6,r18,-24
	ctx.r6.s64 = ctx.r18.s64 + -24;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83654DC4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83655048
	if (!cr6.eq) goto loc_83655048;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r29,r16,312
	ctx.r29.s64 = ctx.r16.s64 + 312;
	// stw r17,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r17.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r27,r29,8
	ctx.r27.s64 = ctx.r29.s64 + 8;
	// stw r29,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r29.u32);
	// addi r26,r29,4
	ctx.r26.s64 = ctx.r29.s64 + 4;
	// stw r17,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r17.u32);
	// stw r27,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r27.u32);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r26,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r26.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x83654E00;
	sub_8247B7D8(ctx, base);
	// lwz r3,320(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 320);
	// stw r28,312(r16)
	PPC_STORE_U32(ctx.r16.u32 + 312, ctx.r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83654e20
	if (cr6.eq) goto loc_83654E20;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x8247b268
	ctx.lr = 0x83654E18;
	sub_8247B268(ctx, base);
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
loc_83654E20:
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// lwz r11,28(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83655048
	if (!cr6.lt) goto loc_83655048;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r25,r11,12
	ctx.r25.s64 = ctx.r11.s64 + 12;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
loc_83654E50:
	// stw r28,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r28.u32);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r5,-4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// bl 0x83691bb8
	ctx.lr = 0x83654E74;
	sub_83691BB8(ctx, base);
	// lwz r11,808(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 808);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r31,812(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bge cr6,0x83654f98
	if (!cr6.lt) goto loc_83654F98;
loc_83654E8C:
	// stw r28,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r28.u32);
	// addi r11,r1,1040
	ctx.r11.s64 = ctx.r1.s64 + 1040;
	// stb r28,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r28.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r23,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r23.u32);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,1048(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1048);
	// lwz r4,1052(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1052);
	// bl 0x82472fc0
	ctx.lr = 0x83654EBC;
	sub_82472FC0(ctx, base);
	// addi r6,r18,-4
	ctx.r6.s64 = ctx.r18.s64 + -4;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x827a8810
	ctx.lr = 0x83654ED4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83654f14
	if (!cr6.eq) goto loc_83654F14;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r10,r1,880
	ctx.r10.s64 = ctx.r1.s64 + 880;
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,880(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83654f0c
	if (!cr6.eq) goto loc_83654F0C;
	// ld r11,888(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 888);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83654f10
	goto loc_83654F10;
loc_83654F0C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83654F10:
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
loc_83654F14:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x827a8810
	ctx.lr = 0x83654F2C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83654f6c
	if (!cr6.eq) goto loc_83654F6C;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r10,r1,1136
	ctx.r10.s64 = ctx.r1.s64 + 1136;
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1136);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83654f64
	if (!cr6.eq) goto loc_83654F64;
	// ld r11,1144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1144);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83654f68
	goto loc_83654F68;
loc_83654F64:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83654F68:
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
loc_83654F6C:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83654f80
	if (cr6.lt) goto loc_83654F80;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83654F80;
	sub_82416268(ctx, base);
loc_83654F80:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stw r23,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r23.u32);
	// stw r28,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r28.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stb r28,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r28.u8);
	// blt cr6,0x83654e8c
	if (cr6.lt) goto loc_83654E8C;
loc_83654F98:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83654ff8
	if (cr6.lt) goto loc_83654FF8;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x83654fe8
	if (!cr6.gt) goto loc_83654FE8;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// stw r27,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r27.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r29,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r29.u32);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r26,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r26.u32);
	// stw r17,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r17.u32);
	// stw r17,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r17.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x8247b270
	ctx.lr = 0x83654FE0;
	sub_8247B270(ctx, base);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// b 0x83654fec
	goto loc_83654FEC;
loc_83654FE8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83654FEC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83655020
	if (cr6.eq) goto loc_83655020;
loc_83654FF8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83655014
	if (cr0.eq) goto loc_83655014;
	// ld r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_83655014:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83655020:
	// lwz r31,816(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8365503c
	if (cr6.eq) goto loc_8365503C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83655034;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8365503C;
	sub_82416268(ctx, base);
loc_8365503C:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// bne 0x83654e50
	if (!cr0.eq) goto loc_83654E50;
loc_83655048:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8365505c
	if (cr6.lt) goto loc_8365505C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8365505C;
	sub_82416268(ctx, base);
loc_8365505C:
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r20,r20,32
	ctx.r20.s64 = ctx.r20.s64 + 32;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, xer);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// blt cr6,0x8365402c
	if (cr6.lt) goto loc_8365402C;
loc_83655078:
	// lwz r31,784(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83655094
	if (cr6.eq) goto loc_83655094;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8365508C;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83655094;
	sub_82416268(ctx, base);
loc_83655094:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836550A0"))) PPC_WEAK_FUNC(sub_836550A0);
PPC_FUNC_IMPL(__imp__sub_836550A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836550A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836550B4;
	sub_82D95768(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,17472
	ctx.r29.s64 = ctx.r11.s64 + 17472;
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836550CC;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r7,r10,18164
	ctx.r7.s64 = ctx.r10.s64 + 18164;
	// addi r5,r8,18148
	ctx.r5.s64 = ctx.r8.s64 + 18148;
	// addi r6,r9,18152
	ctx.r6.s64 = ctx.r9.s64 + 18152;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83655114;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83655130;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83655150;
	sub_824208C8(ctx, base);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83655164"))) PPC_WEAK_FUNC(sub_83655164);
PPC_FUNC_IMPL(__imp__sub_83655164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83655168"))) PPC_WEAK_FUNC(sub_83655168);
PPC_FUNC_IMPL(__imp__sub_83655168) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83655230
	sub_83655230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83655170"))) PPC_WEAK_FUNC(sub_83655170);
PPC_FUNC_IMPL(__imp__sub_83655170) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83655230
	sub_83655230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83655178"))) PPC_WEAK_FUNC(sub_83655178);
PPC_FUNC_IMPL(__imp__sub_83655178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83655180;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r8,r11,18164
	ctx.r8.s64 = ctx.r11.s64 + 18164;
	// addi r7,r10,18152
	ctx.r7.s64 = ctx.r10.s64 + 18152;
	// addi r6,r9,18148
	ctx.r6.s64 = ctx.r9.s64 + 18148;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,376
	ctx.r29.s64 = ctx.r3.s64 + 376;
	// lwz r5,396(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836551c4
	if (cr6.lt) goto loc_836551C4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836551C4;
	sub_8386D088(ctx, base);
loc_836551C4:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,344
	ctx.r31.s64 = ctx.r28.s64 + 344;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836551f0
	if (cr6.lt) goto loc_836551F0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836551F0;
	sub_8386D088(ctx, base);
loc_836551F0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83655214
	if (cr6.lt) goto loc_83655214;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83655214;
	sub_8386D088(ctx, base);
loc_83655214:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x83655228;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83655230"))) PPC_WEAK_FUNC(sub_83655230);
PPC_FUNC_IMPL(__imp__sub_83655230) {
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
	// bl 0x83655178
	ctx.lr = 0x83655250;
	sub_83655178(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83655270
	if (cr6.eq) goto loc_83655270;
	// bl 0x82595188
	ctx.lr = 0x83655260;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83655270;
	sub_825952B8(ctx, base);
loc_83655270:
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

__attribute__((alias("__imp__sub_8365528C"))) PPC_WEAK_FUNC(sub_8365528C);
PPC_FUNC_IMPL(__imp__sub_8365528C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83655290"))) PPC_WEAK_FUNC(sub_83655290);
PPC_FUNC_IMPL(__imp__sub_83655290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83655298;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eaf8d8
	ctx.lr = 0x836552A4;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,17472
	ctx.r29.s64 = ctx.r11.s64 + 17472;
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836552BC;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r9,18188
	ctx.r5.s64 = ctx.r9.s64 + 18188;
	// addi r4,r8,18184
	ctx.r4.s64 = ctx.r8.s64 + 18184;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// addi r3,r7,18180
	ctx.r3.s64 = ctx.r7.s64 + 18180;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r6,r10,18200
	ctx.r6.s64 = ctx.r10.s64 + 18200;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// addi r4,r29,164
	ctx.r4.s64 = ctx.r29.s64 + 164;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x83655328;
	sub_824208C8(ctx, base);
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stb r30,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r30.u8);
	// addi r4,r29,180
	ctx.r4.s64 = ctx.r29.s64 + 180;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83655344;
	sub_824208C8(ctx, base);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// std r30,440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 440, ctx.r30.u64);
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x82423930
	ctx.lr = 0x8365535C;
	sub_82423930(ctx, base);
	// stw r28,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r28.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// stb r30,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r30.u8);
	// addi r4,r29,196
	ctx.r4.s64 = ctx.r29.s64 + 196;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83655378;
	sub_824208C8(ctx, base);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// std r30,488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 488, ctx.r30.u64);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82423930
	ctx.lr = 0x83655390;
	sub_82423930(ctx, base);
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// std r30,504(r31)
	PPC_STORE_U64(ctx.r31.u32 + 504, ctx.r30.u64);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x836538c0
	ctx.lr = 0x836553A8;
	sub_836538C0(ctx, base);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// std r30,520(r31)
	PPC_STORE_U64(ctx.r31.u32 + 520, ctx.r30.u64);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82de2070
	ctx.lr = 0x836553C0;
	sub_82DE2070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836553CC"))) PPC_WEAK_FUNC(sub_836553CC);
PPC_FUNC_IMPL(__imp__sub_836553CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836553D0"))) PPC_WEAK_FUNC(sub_836553D0);
PPC_FUNC_IMPL(__imp__sub_836553D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836554d0
	sub_836554D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836553D8"))) PPC_WEAK_FUNC(sub_836553D8);
PPC_FUNC_IMPL(__imp__sub_836553D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836554d0
	sub_836554D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836553E0"))) PPC_WEAK_FUNC(sub_836553E0);
PPC_FUNC_IMPL(__imp__sub_836553E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836554d0
	sub_836554D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836553E8"))) PPC_WEAK_FUNC(sub_836553E8);
PPC_FUNC_IMPL(__imp__sub_836553E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836553F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r7,r11,18200
	ctx.r7.s64 = ctx.r11.s64 + 18200;
	// addi r6,r10,18188
	ctx.r6.s64 = ctx.r10.s64 + 18188;
	// addi r5,r9,18184
	ctx.r5.s64 = ctx.r9.s64 + 18184;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,18180
	ctx.r4.s64 = ctx.r8.s64 + 18180;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,512
	ctx.r3.s64 = ctx.r3.s64 + 512;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x839a3280
	ctx.lr = 0x83655430;
	sub_839A3280(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x83653940
	ctx.lr = 0x83655438;
	sub_83653940(ctx, base);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// bl 0x824238b8
	ctx.lr = 0x83655440;
	sub_824238B8(ctx, base);
	// lwz r3,468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// addi r30,r31,448
	ctx.r30.s64 = ctx.r31.s64 + 448;
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x83655458
	if (cr6.lt) goto loc_83655458;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83655458;
	sub_8386D088(ctx, base);
loc_83655458:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// bl 0x824238b8
	ctx.lr = 0x83655474;
	sub_824238B8(ctx, base);
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// addi r30,r31,400
	ctx.r30.s64 = ctx.r31.s64 + 400;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8365548c
	if (cr6.lt) goto loc_8365548C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8365548C;
	sub_8386D088(ctx, base);
loc_8365548C:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r28,r31,372
	ctx.r28.s64 = ctx.r31.s64 + 372;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836554b0
	if (cr6.lt) goto loc_836554B0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836554B0;
	sub_8386D088(ctx, base);
loc_836554B0:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// stb r29,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r29.u8);
	// bl 0x82eaf978
	ctx.lr = 0x836554C4;
	sub_82EAF978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836554CC"))) PPC_WEAK_FUNC(sub_836554CC);
PPC_FUNC_IMPL(__imp__sub_836554CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836554D0"))) PPC_WEAK_FUNC(sub_836554D0);
PPC_FUNC_IMPL(__imp__sub_836554D0) {
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
	// bl 0x836553e8
	ctx.lr = 0x836554F0;
	sub_836553E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83655510
	if (cr6.eq) goto loc_83655510;
	// bl 0x82595188
	ctx.lr = 0x83655500;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83655510;
	sub_825952B8(ctx, base);
loc_83655510:
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

__attribute__((alias("__imp__sub_8365552C"))) PPC_WEAK_FUNC(sub_8365552C);
PPC_FUNC_IMPL(__imp__sub_8365552C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83655530"))) PPC_WEAK_FUNC(sub_83655530);
PPC_FUNC_IMPL(__imp__sub_83655530) {
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
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
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
	// li r11,240
	ctx.r11.s64 = 240;
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// addi r4,r9,19048
	ctx.r4.s64 = ctx.r9.s64 + 19048;
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
	ctx.lr = 0x836555A8;
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

__attribute__((alias("__imp__sub_836555C0"))) PPC_WEAK_FUNC(sub_836555C0);
PPC_FUNC_IMPL(__imp__sub_836555C0) {
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
	// ble cr6,0x8365562c
	if (!cr6.gt) goto loc_8365562C;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,19048
	ctx.r8.s64 = ctx.r10.s64 + 19048;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,240
	ctx.r6.s64 = 240;
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
	ctx.lr = 0x8365561C;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8365562C:
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

__attribute__((alias("__imp__sub_83655640"))) PPC_WEAK_FUNC(sub_83655640);
PPC_FUNC_IMPL(__imp__sub_83655640) {
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
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
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
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// addi r4,r9,30364
	ctx.r4.s64 = ctx.r9.s64 + 30364;
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
	ctx.lr = 0x836556B8;
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

__attribute__((alias("__imp__sub_836556D0"))) PPC_WEAK_FUNC(sub_836556D0);
PPC_FUNC_IMPL(__imp__sub_836556D0) {
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
	// ble cr6,0x8365573c
	if (!cr6.gt) goto loc_8365573C;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,19064
	ctx.r8.s64 = ctx.r10.s64 + 19064;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,192
	ctx.r6.s64 = 192;
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
	ctx.lr = 0x8365572C;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8365573C:
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

__attribute__((alias("__imp__sub_83655750"))) PPC_WEAK_FUNC(sub_83655750);
PPC_FUNC_IMPL(__imp__sub_83655750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83655758;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,19048
	ctx.r10.s64 = ctx.r11.s64 + 19048;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,240
	ctx.r8.s64 = 240;
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
	ctx.lr = 0x8365579C;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x836557c4
	if (cr6.eq) goto loc_836557C4;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x836557BC;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_836557C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836557CC"))) PPC_WEAK_FUNC(sub_836557CC);
PPC_FUNC_IMPL(__imp__sub_836557CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836557D0"))) PPC_WEAK_FUNC(sub_836557D0);
PPC_FUNC_IMPL(__imp__sub_836557D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836557D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,19064
	ctx.r10.s64 = ctx.r11.s64 + 19064;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,192
	ctx.r8.s64 = 192;
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
	ctx.lr = 0x8365581C;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x83655844
	if (cr6.eq) goto loc_83655844;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x8365583C;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_83655844:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8365584C"))) PPC_WEAK_FUNC(sub_8365584C);
PPC_FUNC_IMPL(__imp__sub_8365584C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83655850"))) PPC_WEAK_FUNC(sub_83655850);
PPC_FUNC_IMPL(__imp__sub_83655850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83655858;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r3,164
	ctx.r28.s64 = ctx.r3.s64 + 164;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83655878
	if (cr6.lt) goto loc_83655878;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83655878;
	sub_8386D088(ctx, base);
loc_83655878:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r29,r30,136
	ctx.r29.s64 = ctx.r30.s64 + 136;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836558a4
	if (cr6.lt) goto loc_836558A4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836558A4;
	sub_8386D088(ctx, base);
loc_836558A4:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r3,r30,120
	ctx.r3.s64 = ctx.r30.s64 + 120;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// bl 0x83050f98
	ctx.lr = 0x836558B8;
	sub_83050F98(ctx, base);
	// addi r3,r30,104
	ctx.r3.s64 = ctx.r30.s64 + 104;
	// bl 0x824238b8
	ctx.lr = 0x836558C0;
	sub_824238B8(ctx, base);
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// bl 0x83655750
	ctx.lr = 0x836558C8;
	sub_83655750(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r28,r30,60
	ctx.r28.s64 = ctx.r30.s64 + 60;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836558e0
	if (cr6.lt) goto loc_836558E0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836558E0;
	sub_8386D088(ctx, base);
loc_836558E0:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83655904
	if (cr6.lt) goto loc_83655904;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83655904;
	sub_8386D088(ctx, base);
loc_83655904:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83655928
	if (cr6.lt) goto loc_83655928;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83655928;
	sub_8386D088(ctx, base);
loc_83655928:
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

__attribute__((alias("__imp__sub_8365593C"))) PPC_WEAK_FUNC(sub_8365593C);
PPC_FUNC_IMPL(__imp__sub_8365593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83655940"))) PPC_WEAK_FUNC(sub_83655940);
PPC_FUNC_IMPL(__imp__sub_83655940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83655948;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r3,208
	ctx.r29.s64 = ctx.r3.s64 + 208;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83655968
	if (cr6.lt) goto loc_83655968;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83655968;
	sub_8386D088(ctx, base);
loc_83655968:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r30,r28,180
	ctx.r30.s64 = ctx.r28.s64 + 180;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,200(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83655994
	if (cr6.lt) goto loc_83655994;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83655994;
	sub_8386D088(ctx, base);
loc_83655994:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,152
	ctx.r29.s64 = ctx.r28.s64 + 152;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,172(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836559b8
	if (cr6.lt) goto loc_836559B8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836559B8;
	sub_8386D088(ctx, base);
loc_836559B8:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,124
	ctx.r30.s64 = ctx.r28.s64 + 124;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836559dc
	if (cr6.lt) goto loc_836559DC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836559DC;
	sub_8386D088(ctx, base);
loc_836559DC:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,96
	ctx.r29.s64 = ctx.r28.s64 + 96;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83655a00
	if (cr6.lt) goto loc_83655A00;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83655A00;
	sub_8386D088(ctx, base);
loc_83655A00:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x824238b8
	ctx.lr = 0x83655A18;
	sub_824238B8(ctx, base);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x824238b8
	ctx.lr = 0x83655A20;
	sub_824238B8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x824238b8
	ctx.lr = 0x83655A28;
	sub_824238B8(ctx, base);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83655a3c
	if (cr6.lt) goto loc_83655A3C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83655A3C;
	sub_8386D088(ctx, base);
loc_83655A3C:
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

__attribute__((alias("__imp__sub_83655A50"))) PPC_WEAK_FUNC(sub_83655A50);
PPC_FUNC_IMPL(__imp__sub_83655A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83655A58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bl 0x82420558
	ctx.lr = 0x83655A98;
	sub_82420558(ctx, base);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// bl 0x82420558
	ctx.lr = 0x83655AB8;
	sub_82420558(ctx, base);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,60
	ctx.r4.s64 = ctx.r29.s64 + 60;
	// bl 0x82420558
	ctx.lr = 0x83655AD8;
	sub_82420558(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// std r30,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r30.u64);
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// bl 0x83655530
	ctx.lr = 0x83655AF0;
	sub_83655530(ctx, base);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// std r30,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r30.u64);
	// addi r4,r29,104
	ctx.r4.s64 = ctx.r29.s64 + 104;
	// bl 0x824baf50
	ctx.lr = 0x83655B08;
	sub_824BAF50(ctx, base);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// std r30,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r30.u64);
	// addi r4,r29,120
	ctx.r4.s64 = ctx.r29.s64 + 120;
	// bl 0x83655640
	ctx.lr = 0x83655B20;
	sub_83655640(ctx, base);
	// stw r27,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// stb r30,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,136
	ctx.r4.s64 = ctx.r29.s64 + 136;
	// bl 0x82420558
	ctx.lr = 0x83655B40;
	sub_82420558(ctx, base);
	// stw r27,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r27.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// stb r30,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,164
	ctx.r4.s64 = ctx.r29.s64 + 164;
	// bl 0x82420558
	ctx.lr = 0x83655B60;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83655B6C"))) PPC_WEAK_FUNC(sub_83655B6C);
PPC_FUNC_IMPL(__imp__sub_83655B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83655B70"))) PPC_WEAK_FUNC(sub_83655B70);
PPC_FUNC_IMPL(__imp__sub_83655B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83655b84
	if (cr6.eq) goto loc_83655B84;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x83655a50
	sub_83655A50(ctx, base);
	return;
loc_83655B84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83655B8C"))) PPC_WEAK_FUNC(sub_83655B8C);
PPC_FUNC_IMPL(__imp__sub_83655B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83655B90"))) PPC_WEAK_FUNC(sub_83655B90);
PPC_FUNC_IMPL(__imp__sub_83655B90) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83655bd0
	if (cr6.lt) goto loc_83655BD0;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x836556d0
	ctx.lr = 0x83655BC4;
	sub_836556D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83655c00
	if (cr6.eq) goto loc_83655C00;
loc_83655BD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83655bf4
	if (cr0.eq) goto loc_83655BF4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83655a50
	ctx.lr = 0x83655BF4;
	sub_83655A50(ctx, base);
loc_83655BF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83655C00:
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

__attribute__((alias("__imp__sub_83655C1C"))) PPC_WEAK_FUNC(sub_83655C1C);
PPC_FUNC_IMPL(__imp__sub_83655C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83655C20"))) PPC_WEAK_FUNC(sub_83655C20);
PPC_FUNC_IMPL(__imp__sub_83655C20) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83655940
	sub_83655940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83655C28"))) PPC_WEAK_FUNC(sub_83655C28);
PPC_FUNC_IMPL(__imp__sub_83655C28) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83655850
	sub_83655850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83655C30"))) PPC_WEAK_FUNC(sub_83655C30);
PPC_FUNC_IMPL(__imp__sub_83655C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83655C38;
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
	// bl 0x82420558
	ctx.lr = 0x83655C64;
	sub_82420558(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x82420558
	ctx.lr = 0x83655C78;
	sub_82420558(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// bl 0x82420558
	ctx.lr = 0x83655C8C;
	sub_82420558(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// bl 0x83655530
	ctx.lr = 0x83655C98;
	sub_83655530(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// bl 0x824baf50
	ctx.lr = 0x83655CA4;
	sub_824BAF50(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// bl 0x83655640
	ctx.lr = 0x83655CB0;
	sub_83655640(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 + 136;
	// bl 0x82420558
	ctx.lr = 0x83655CC4;
	sub_82420558(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,164
	ctx.r4.s64 = ctx.r30.s64 + 164;
	// bl 0x82420558
	ctx.lr = 0x83655CD8;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83655CE4"))) PPC_WEAK_FUNC(sub_83655CE4);
PPC_FUNC_IMPL(__imp__sub_83655CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83655CE8"))) PPC_WEAK_FUNC(sub_83655CE8);
PPC_FUNC_IMPL(__imp__sub_83655CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83655CF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x835fe558
	ctx.lr = 0x83655D08;
	sub_835FE558(ctx, base);
	// li r29,15
	ctx.r29.s64 = 15;
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r28,r11,27936
	ctx.r28.s64 = ctx.r11.s64 + 27936;
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824208c8
	ctx.lr = 0x83655D34;
	sub_824208C8(ctx, base);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83655D50;
	sub_824208C8(ctx, base);
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stb r30,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83655D6C;
	sub_824208C8(ctx, base);
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// stb r30,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83655D88;
	sub_824208C8(ctx, base);
	// stw r29,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r29.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83655DA4;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83655DB0"))) PPC_WEAK_FUNC(sub_83655DB0);
PPC_FUNC_IMPL(__imp__sub_83655DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83655DB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r28,r11,27936
	ctx.r28.s64 = ctx.r11.s64 + 27936;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824208c8
	ctx.lr = 0x83655DF0;
	sub_824208C8(ctx, base);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83655E0C;
	sub_824208C8(ctx, base);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83655E28;
	sub_824208C8(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// std r30,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r30.u64);
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x836555c0
	ctx.lr = 0x83655E40;
	sub_836555C0(ctx, base);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// std r30,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r30.u64);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82423930
	ctx.lr = 0x83655E58;
	sub_82423930(ctx, base);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// std r30,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r30.u64);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83051018
	ctx.lr = 0x83655E70;
	sub_83051018(ctx, base);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// stb r30,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83655E8C;
	sub_824208C8(ctx, base);
	// stw r29,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r29.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// stb r30,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83655EA8;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83655EB4"))) PPC_WEAK_FUNC(sub_83655EB4);
PPC_FUNC_IMPL(__imp__sub_83655EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83655EB8"))) PPC_WEAK_FUNC(sub_83655EB8);
PPC_FUNC_IMPL(__imp__sub_83655EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83655EC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82c5beb8
	ctx.lr = 0x83655EE0;
	sub_82C5BEB8(ctx, base);
	// ld r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 88);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// std r10,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r10.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// bl 0x82420558
	ctx.lr = 0x83655F14;
	sub_82420558(ctx, base);
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,124
	ctx.r4.s64 = ctx.r29.s64 + 124;
	// bl 0x82420558
	ctx.lr = 0x83655F34;
	sub_82420558(ctx, base);
	// stw r27,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r27.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stb r30,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,152
	ctx.r4.s64 = ctx.r29.s64 + 152;
	// bl 0x82420558
	ctx.lr = 0x83655F54;
	sub_82420558(ctx, base);
	// stw r27,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r27.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// stb r30,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,180
	ctx.r4.s64 = ctx.r29.s64 + 180;
	// bl 0x82420558
	ctx.lr = 0x83655F74;
	sub_82420558(ctx, base);
	// stw r27,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r27.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,208
	ctx.r4.s64 = ctx.r29.s64 + 208;
	// bl 0x82420558
	ctx.lr = 0x83655F94;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83655FA0"))) PPC_WEAK_FUNC(sub_83655FA0);
PPC_FUNC_IMPL(__imp__sub_83655FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83655fb4
	if (cr6.eq) goto loc_83655FB4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x83655eb8
	sub_83655EB8(ctx, base);
	return;
loc_83655FB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83655FBC"))) PPC_WEAK_FUNC(sub_83655FBC);
PPC_FUNC_IMPL(__imp__sub_83655FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83655FC0"))) PPC_WEAK_FUNC(sub_83655FC0);
PPC_FUNC_IMPL(__imp__sub_83655FC0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x83655c30
	sub_83655C30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83655FCC"))) PPC_WEAK_FUNC(sub_83655FCC);
PPC_FUNC_IMPL(__imp__sub_83655FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83655FD0"))) PPC_WEAK_FUNC(sub_83655FD0);
PPC_FUNC_IMPL(__imp__sub_83655FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83655FD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,133
	ctx.r10.s64 = 133;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x83656018
	if (!cr6.lt) goto loc_83656018;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83656018;
	sub_82E745E0(ctx, base);
loc_83656018:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,18360
	ctx.r27.s64 = ctx.r11.s64 + 18360;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83656060;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8365606C;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83656080
	if (cr6.lt) goto loc_83656080;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83656080;
	sub_82416268(ctx, base);
loc_83656080:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836560a0
	if (cr6.lt) goto loc_836560A0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836560A0:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836560B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836560b0
	if (!cr6.eq) goto loc_836560B0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836560D4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836560E0;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836560f4
	if (cr6.lt) goto loc_836560F4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836560F4;
	sub_82416268(ctx, base);
loc_836560F4:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8365611C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83656128;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8365613c
	if (cr6.lt) goto loc_8365613C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8365613C;
	sub_82416268(ctx, base);
loc_8365613C:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x83656154;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x83656170;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8365617C;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83656190
	if (cr6.lt) goto loc_83656190;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83656190;
	sub_82416268(ctx, base);
loc_83656190:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836561b0
	if (cr6.lt) goto loc_836561B0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836561B0:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836561C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836561c0
	if (!cr6.eq) goto loc_836561C0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836561E4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836561F0;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83656204
	if (cr6.lt) goto loc_83656204;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83656204;
	sub_82416268(ctx, base);
loc_83656204:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8365622C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83656238;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8365624c
	if (cr6.lt) goto loc_8365624C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8365624C;
	sub_82416268(ctx, base);
loc_8365624C:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x8365626c
	if (cr6.lt) goto loc_8365626C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8365626C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_8365627C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8365627c
	if (!cr6.eq) goto loc_8365627C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836562A0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836562AC;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836562c0
	if (cr6.lt) goto loc_836562C0;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836562C0;
	sub_82416268(ctx, base);
loc_836562C0:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836562E8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836562F4;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83656308
	if (cr6.lt) goto loc_83656308;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83656308;
	sub_82416268(ctx, base);
loc_83656308:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x83656320;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8365632C"))) PPC_WEAK_FUNC(sub_8365632C);
PPC_FUNC_IMPL(__imp__sub_8365632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83656330"))) PPC_WEAK_FUNC(sub_83656330);
PPC_FUNC_IMPL(__imp__sub_83656330) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83656370
	if (cr6.lt) goto loc_83656370;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x836555c0
	ctx.lr = 0x83656364;
	sub_836555C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83656398
	if (cr6.eq) goto loc_83656398;
loc_83656370:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 * 240;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8365638c
	if (cr0.eq) goto loc_8365638C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83655eb8
	ctx.lr = 0x8365638C;
	sub_83655EB8(ctx, base);
loc_8365638C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83656398:
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

__attribute__((alias("__imp__sub_836563B4"))) PPC_WEAK_FUNC(sub_836563B4);
PPC_FUNC_IMPL(__imp__sub_836563B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836563B8"))) PPC_WEAK_FUNC(sub_836563B8);
PPC_FUNC_IMPL(__imp__sub_836563B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836563C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// addi r27,r4,8
	ctx.r27.s64 = ctx.r4.s64 + 8;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82420558
	ctx.lr = 0x836563F4;
	sub_82420558(ctx, base);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r4,r27,32
	ctx.r4.s64 = ctx.r27.s64 + 32;
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bl 0x824baf50
	ctx.lr = 0x83656408;
	sub_824BAF50(ctx, base);
	// addi r4,r27,48
	ctx.r4.s64 = ctx.r27.s64 + 48;
	// addi r3,r28,48
	ctx.r3.s64 = ctx.r28.s64 + 48;
	// bl 0x824baf50
	ctx.lr = 0x83656414;
	sub_824BAF50(ctx, base);
	// addi r4,r27,64
	ctx.r4.s64 = ctx.r27.s64 + 64;
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x824baf50
	ctx.lr = 0x83656420;
	sub_824BAF50(ctx, base);
	// ld r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 88);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// std r9,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r9.u64);
	// bl 0x82420558
	ctx.lr = 0x8365643C;
	sub_82420558(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// bl 0x82420558
	ctx.lr = 0x83656450;
	sub_82420558(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// bl 0x82420558
	ctx.lr = 0x83656464;
	sub_82420558(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// bl 0x82420558
	ctx.lr = 0x83656478;
	sub_82420558(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,208
	ctx.r4.s64 = ctx.r30.s64 + 208;
	// bl 0x82420558
	ctx.lr = 0x8365648C;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83656498"))) PPC_WEAK_FUNC(sub_83656498);
PPC_FUNC_IMPL(__imp__sub_83656498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x836564A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-2912(r1)
	ea = -2912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r27,1312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1312, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,1328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1328, ctx.r27.u32);
	// stw r3,2932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2932, ctx.r3.u32);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x83691bb8
	ctx.lr = 0x836564CC;
	sub_83691BB8(ctx, base);
	// lwz r10,1320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1320);
	// lwz r11,1324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1324);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// add r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// stw r21,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r21.u32);
	// bge cr6,0x83658708
	if (!cr6.lt) goto loc_83658708;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r22,r9,8980
	ctx.r22.s64 = ctx.r9.s64 + 8980;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r10,r10,19048
	ctx.r10.s64 = ctx.r10.s64 + 19048;
	// stw r22,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r22.u32);
	// addi r9,r8,19064
	ctx.r9.s64 = ctx.r8.s64 + 19064;
	// stw r10,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r10.u32);
	// li r23,15
	ctx.r23.s64 = 15;
	// li r24,8
	ctx.r24.s64 = 8;
	// stw r9,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r9.u32);
	// addi r19,r11,18948
	ctx.r19.s64 = ctx.r11.s64 + 18948;
loc_83656524:
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// addi r11,r1,2144
	ctx.r11.s64 = ctx.r1.s64 + 2144;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// ld r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// ld r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,2152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2152);
	// lwz r4,2156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2156);
	// bl 0x82472fc0
	ctx.lr = 0x83656554;
	sub_82472FC0(ctx, base);
	// addi r6,r19,-584
	ctx.r6.s64 = ctx.r19.s64 + -584;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8365656C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83656604
	if (!cr6.eq) goto loc_83656604;
	// stb r27,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r27.u8);
	// addi r11,r1,1712
	ctx.r11.s64 = ctx.r1.s64 + 1712;
	// stw r23,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r23.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stw r27,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r27.u32);
	// addi r10,r25,16
	ctx.r10.s64 = ctx.r25.s64 + 16;
	// ld r8,16(r25)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,1724(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1724);
	// lwz r5,1720(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1720);
	// bl 0x82472fc0
	ctx.lr = 0x836565A8;
	sub_82472FC0(ctx, base);
	// lwz r7,564(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r4,544(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836565bc
	if (!cr6.lt) goto loc_836565BC;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
loc_836565BC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836565C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836565c0
	if (!cr6.eq) goto loc_836565C0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,20
	ctx.r3.s64 = ctx.r26.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836565E4;
	sub_824208C8(ctx, base);
	// lwz r10,564(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836565f8
	if (cr6.lt) goto loc_836565F8;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x836565F8;
	sub_82416268(ctx, base);
loc_836565F8:
	// stw r23,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r23.u32);
	// stw r27,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r27.u32);
	// stb r27,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r27.u8);
loc_83656604:
	// addi r6,r19,-576
	ctx.r6.s64 = ctx.r19.s64 + -576;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8365661C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365665c
	if (!cr6.eq) goto loc_8365665C;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r10,r1,2032
	ctx.r10.s64 = ctx.r1.s64 + 2032;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,2032(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2032);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83656654
	if (!cr6.eq) goto loc_83656654;
	// ld r11,2040(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2040);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83656658
	goto loc_83656658;
loc_83656654:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83656658:
	// stw r11,48(r26)
	PPC_STORE_U32(ctx.r26.u32 + 48, ctx.r11.u32);
loc_8365665C:
	// addi r6,r19,-568
	ctx.r6.s64 = ctx.r19.s64 + -568;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83656674;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365670c
	if (!cr6.eq) goto loc_8365670C;
	// stw r23,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r23.u32);
	// addi r11,r1,1744
	ctx.r11.s64 = ctx.r1.s64 + 1744;
	// stw r27,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r27.u32);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// stb r27,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r27.u8);
	// addi r10,r25,16
	ctx.r10.s64 = ctx.r25.s64 + 16;
	// ld r8,24(r25)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// ld r9,16(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1756(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1756);
	// lwz r5,1752(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1752);
	// bl 0x82472fc0
	ctx.lr = 0x836566B0;
	sub_82472FC0(ctx, base);
	// lwz r7,820(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// lwz r4,800(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836566c4
	if (!cr6.lt) goto loc_836566C4;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
loc_836566C4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836566C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836566c8
	if (!cr6.eq) goto loc_836566C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,116
	ctx.r3.s64 = ctx.r26.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836566EC;
	sub_824208C8(ctx, base);
	// lwz r10,820(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83656700
	if (cr6.lt) goto loc_83656700;
	// lwz r3,800(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// bl 0x82416268
	ctx.lr = 0x83656700;
	sub_82416268(ctx, base);
loc_83656700:
	// stw r23,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r23.u32);
	// stw r27,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r27.u32);
	// stb r27,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r27.u8);
loc_8365670C:
	// addi r6,r19,-560
	ctx.r6.s64 = ctx.r19.s64 + -560;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83656724;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365719c
	if (!cr6.eq) goto loc_8365719C;
	// stw r27,1168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1168, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r27.u32);
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// lwz r5,24(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lwz r4,28(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x83656748;
	sub_83691BB8(ctx, base);
	// lwz r10,1176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1176);
	// lwz r11,1180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bge cr6,0x83657180
	if (!cr6.lt) goto loc_83657180;
loc_83656764:
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// addi r11,r1,2192
	ctx.r11.s64 = ctx.r1.s64 + 2192;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,2204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2204);
	// lwz r5,2200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2200);
	// bl 0x82472fc0
	ctx.lr = 0x83656794;
	sub_82472FC0(ctx, base);
	// addi r6,r19,-548
	ctx.r6.s64 = ctx.r19.s64 + -548;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836567AC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836567ec
	if (!cr6.eq) goto loc_836567EC;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,1776
	ctx.r10.s64 = ctx.r1.s64 + 1776;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1776(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1776);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836567e4
	if (!cr6.eq) goto loc_836567E4;
	// ld r11,1784(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1784);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836567e8
	goto loc_836567E8;
loc_836567E4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836567E8:
	// stw r11,148(r26)
	PPC_STORE_U32(ctx.r26.u32 + 148, ctx.r11.u32);
loc_836567EC:
	// addi r6,r19,-536
	ctx.r6.s64 = ctx.r19.s64 + -536;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83656804;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365689c
	if (!cr6.eq) goto loc_8365689C;
	// stw r23,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r23.u32);
	// addi r11,r1,2064
	ctx.r11.s64 = ctx.r1.s64 + 2064;
	// stw r27,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r27.u32);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// stb r27,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r27.u8);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ld r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// ld r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,2076(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2076);
	// lwz r5,2072(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2072);
	// bl 0x82472fc0
	ctx.lr = 0x83656840;
	sub_82472FC0(ctx, base);
	// lwz r7,628(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r4,608(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83656854
	if (!cr6.lt) goto loc_83656854;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
loc_83656854:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83656858:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83656858
	if (!cr6.eq) goto loc_83656858;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,152
	ctx.r3.s64 = ctx.r26.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8365687C;
	sub_824208C8(ctx, base);
	// lwz r10,628(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83656890
	if (cr6.lt) goto loc_83656890;
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x82416268
	ctx.lr = 0x83656890;
	sub_82416268(ctx, base);
loc_83656890:
	// stw r23,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r23.u32);
	// stw r27,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r27.u32);
	// stb r27,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r27.u8);
loc_8365689C:
	// addi r6,r19,-528
	ctx.r6.s64 = ctx.r19.s64 + -528;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836568B4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365694c
	if (!cr6.eq) goto loc_8365694C;
	// stw r23,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r23.u32);
	// addi r11,r1,1808
	ctx.r11.s64 = ctx.r1.s64 + 1808;
	// stw r27,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r27.u32);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// stb r27,928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 928, ctx.r27.u8);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// ld r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r4,1820(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1820);
	// lwz r5,1816(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1816);
	// bl 0x82472fc0
	ctx.lr = 0x836568F0;
	sub_82472FC0(ctx, base);
	// lwz r7,948(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 948);
	// lwz r4,928(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83656904
	if (!cr6.lt) goto loc_83656904;
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
loc_83656904:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83656908:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83656908
	if (!cr6.eq) goto loc_83656908;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,180
	ctx.r3.s64 = ctx.r26.s64 + 180;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8365692C;
	sub_824208C8(ctx, base);
	// lwz r10,948(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 948);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83656940
	if (cr6.lt) goto loc_83656940;
	// lwz r3,928(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// bl 0x82416268
	ctx.lr = 0x83656940;
	sub_82416268(ctx, base);
loc_83656940:
	// stw r23,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r23.u32);
	// stw r27,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r27.u32);
	// stb r27,928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 928, ctx.r27.u8);
loc_8365694C:
	// addi r6,r19,-520
	ctx.r6.s64 = ctx.r19.s64 + -520;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83656964;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836569fc
	if (!cr6.eq) goto loc_836569FC;
	// stw r23,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r23.u32);
	// addi r11,r1,2304
	ctx.r11.s64 = ctx.r1.s64 + 2304;
	// stw r27,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r27.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stb r27,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r27.u8);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ld r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// ld r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,2316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2316);
	// lwz r5,2312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2312);
	// bl 0x82472fc0
	ctx.lr = 0x836569A0;
	sub_82472FC0(ctx, base);
	// lwz r7,436(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836569b4
	if (!cr6.lt) goto loc_836569B4;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
loc_836569B4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836569B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836569b8
	if (!cr6.eq) goto loc_836569B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,208
	ctx.r3.s64 = ctx.r26.s64 + 208;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836569DC;
	sub_824208C8(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836569f0
	if (cr6.lt) goto loc_836569F0;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x836569F0;
	sub_82416268(ctx, base);
loc_836569F0:
	// stw r23,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r23.u32);
	// stw r27,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r27.u32);
	// stb r27,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r27.u8);
loc_836569FC:
	// addi r6,r19,-512
	ctx.r6.s64 = ctx.r19.s64 + -512;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83656A14;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83656a54
	if (!cr6.eq) goto loc_83656A54;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,1840
	ctx.r10.s64 = ctx.r1.s64 + 1840;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1840(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1840);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83656a4c
	if (!cr6.eq) goto loc_83656A4C;
	// ld r11,1848(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1848);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83656a50
	goto loc_83656A50;
loc_83656A4C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83656A50:
	// stw r11,236(r26)
	PPC_STORE_U32(ctx.r26.u32 + 236, ctx.r11.u32);
loc_83656A54:
	// addi r6,r19,-500
	ctx.r6.s64 = ctx.r19.s64 + -500;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83656A6C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83656aac
	if (!cr6.eq) goto loc_83656AAC;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,2096
	ctx.r10.s64 = ctx.r1.s64 + 2096;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,2096(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2096);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83656aa4
	if (!cr6.eq) goto loc_83656AA4;
	// ld r11,2104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2104);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83656aa8
	goto loc_83656AA8;
loc_83656AA4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83656AA8:
	// stw r11,240(r26)
	PPC_STORE_U32(ctx.r26.u32 + 240, ctx.r11.u32);
loc_83656AAC:
	// addi r6,r19,-492
	ctx.r6.s64 = ctx.r19.s64 + -492;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83656AC4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83656b5c
	if (!cr6.eq) goto loc_83656B5C;
	// stw r23,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r23.u32);
	// addi r11,r1,1872
	ctx.r11.s64 = ctx.r1.s64 + 1872;
	// stw r27,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r27.u32);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// stb r27,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r27.u8);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ld r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// ld r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1880(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1880);
	// lwz r4,1884(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1884);
	// bl 0x82472fc0
	ctx.lr = 0x83656B00;
	sub_82472FC0(ctx, base);
	// lwz r7,884(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// lwz r4,864(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83656b14
	if (!cr6.lt) goto loc_83656B14;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
loc_83656B14:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83656B18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83656b18
	if (!cr6.eq) goto loc_83656B18;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,244
	ctx.r3.s64 = ctx.r26.s64 + 244;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83656B3C;
	sub_824208C8(ctx, base);
	// lwz r10,884(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83656b50
	if (cr6.lt) goto loc_83656B50;
	// lwz r3,864(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// bl 0x82416268
	ctx.lr = 0x83656B50;
	sub_82416268(ctx, base);
loc_83656B50:
	// stw r23,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r23.u32);
	// stw r27,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r27.u32);
	// stb r27,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r27.u8);
loc_83656B5C:
	// addi r6,r19,-484
	ctx.r6.s64 = ctx.r19.s64 + -484;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83656B74;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83656bb4
	if (!cr6.eq) goto loc_83656BB4;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,2224
	ctx.r10.s64 = ctx.r1.s64 + 2224;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,2224(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2224);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83656bac
	if (!cr6.eq) goto loc_83656BAC;
	// ld r11,2232(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2232);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83656bb0
	goto loc_83656BB0;
loc_83656BAC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83656BB0:
	// stw r11,272(r26)
	PPC_STORE_U32(ctx.r26.u32 + 272, ctx.r11.u32);
loc_83656BB4:
	// addi r6,r19,-468
	ctx.r6.s64 = ctx.r19.s64 + -468;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83656BCC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83656c0c
	if (!cr6.eq) goto loc_83656C0C;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,1904
	ctx.r10.s64 = ctx.r1.s64 + 1904;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1904(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1904);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83656c04
	if (!cr6.eq) goto loc_83656C04;
	// ld r11,1912(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1912);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83656c08
	goto loc_83656C08;
loc_83656C04:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83656C08:
	// stw r11,276(r26)
	PPC_STORE_U32(ctx.r26.u32 + 276, ctx.r11.u32);
loc_83656C0C:
	// addi r6,r19,-452
	ctx.r6.s64 = ctx.r19.s64 + -452;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83656C24;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83656cbc
	if (!cr6.eq) goto loc_83656CBC;
	// stw r23,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r23.u32);
	// addi r11,r1,2128
	ctx.r11.s64 = ctx.r1.s64 + 2128;
	// stw r27,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r27.u32);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// stb r27,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r27.u8);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ld r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// ld r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2136);
	// lwz r4,2140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2140);
	// bl 0x82472fc0
	ctx.lr = 0x83656C60;
	sub_82472FC0(ctx, base);
	// lwz r7,756(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// lwz r4,736(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83656c74
	if (!cr6.lt) goto loc_83656C74;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
loc_83656C74:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83656C78:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83656c78
	if (!cr6.eq) goto loc_83656C78;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,280
	ctx.r3.s64 = ctx.r26.s64 + 280;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83656C9C;
	sub_824208C8(ctx, base);
	// lwz r10,756(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83656cb0
	if (cr6.lt) goto loc_83656CB0;
	// lwz r3,736(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// bl 0x82416268
	ctx.lr = 0x83656CB0;
	sub_82416268(ctx, base);
loc_83656CB0:
	// stw r23,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r23.u32);
	// stw r27,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r27.u32);
	// stb r27,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r27.u8);
loc_83656CBC:
	// addi r6,r19,-436
	ctx.r6.s64 = ctx.r19.s64 + -436;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83656CD4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83656ff4
	if (!cr6.eq) goto loc_83656FF4;
	// stw r27,1504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1504, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,1520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1520, ctx.r27.u32);
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x83656CF8;
	sub_83691BB8(ctx, base);
	// lwz r10,1512(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1512);
	// lwz r11,1516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1516);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83656fd8
	if (!cr6.lt) goto loc_83656FD8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_83656D24:
	// stw r23,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r23.u32);
	// addi r11,r1,1936
	ctx.r11.s64 = ctx.r1.s64 + 1936;
	// stw r27,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r27.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r27,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r27.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// ld r8,-8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1944(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1944);
	// lwz r4,1948(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1948);
	// bl 0x82472fc0
	ctx.lr = 0x83656D58;
	sub_82472FC0(ctx, base);
	// addi r6,r19,-428
	ctx.r6.s64 = ctx.r19.s64 + -428;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827a8810
	ctx.lr = 0x83656D70;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83656e04
	if (!cr6.eq) goto loc_83656E04;
	// stw r23,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r23.u32);
	// addi r11,r1,1552
	ctx.r11.s64 = ctx.r1.s64 + 1552;
	// stw r27,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r27.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stb r27,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r27.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1560(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1560);
	// lwz r4,1564(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1564);
	// bl 0x82472fc0
	ctx.lr = 0x83656DA8;
	sub_82472FC0(ctx, base);
	// lwz r8,468(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83656dbc
	if (!cr6.lt) goto loc_83656DBC;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
loc_83656DBC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83656DC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83656dc0
	if (!cr6.eq) goto loc_83656DC0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,308
	ctx.r3.s64 = ctx.r26.s64 + 308;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83656DE4;
	sub_824208C8(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83656df8
	if (cr6.lt) goto loc_83656DF8;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x83656DF8;
	sub_82416268(ctx, base);
loc_83656DF8:
	// stw r23,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r23.u32);
	// stw r27,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r27.u32);
	// stb r27,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r27.u8);
loc_83656E04:
	// addi r6,r19,-416
	ctx.r6.s64 = ctx.r19.s64 + -416;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827a8810
	ctx.lr = 0x83656E1C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83656eb0
	if (!cr6.eq) goto loc_83656EB0;
	// stw r23,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r23.u32);
	// addi r11,r1,1568
	ctx.r11.s64 = ctx.r1.s64 + 1568;
	// stw r27,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r27.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stb r27,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r27.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1576(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1576);
	// lwz r4,1580(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1580);
	// bl 0x82472fc0
	ctx.lr = 0x83656E54;
	sub_82472FC0(ctx, base);
	// lwz r8,532(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r4,512(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83656e68
	if (!cr6.lt) goto loc_83656E68;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
loc_83656E68:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83656E6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83656e6c
	if (!cr6.eq) goto loc_83656E6C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,336
	ctx.r3.s64 = ctx.r26.s64 + 336;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83656E90;
	sub_824208C8(ctx, base);
	// lwz r10,532(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83656ea4
	if (cr6.lt) goto loc_83656EA4;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x83656EA4;
	sub_82416268(ctx, base);
loc_83656EA4:
	// stw r23,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r23.u32);
	// stw r27,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r27.u32);
	// stb r27,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r27.u8);
loc_83656EB0:
	// addi r6,r19,-400
	ctx.r6.s64 = ctx.r19.s64 + -400;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827a8810
	ctx.lr = 0x83656EC8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83656f04
	if (!cr6.eq) goto loc_83656F04;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,1600
	ctx.r10.s64 = ctx.r1.s64 + 1600;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,1600(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1600);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83656efc
	if (!cr6.eq) goto loc_83656EFC;
	// ld r11,1608(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1608);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83656f00
	goto loc_83656F00;
loc_83656EFC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83656F00:
	// stw r11,364(r26)
	PPC_STORE_U32(ctx.r26.u32 + 364, ctx.r11.u32);
loc_83656F04:
	// addi r6,r19,-384
	ctx.r6.s64 = ctx.r19.s64 + -384;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827a8810
	ctx.lr = 0x83656F1C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83656f58
	if (!cr6.eq) goto loc_83656F58;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1632
	ctx.r10.s64 = ctx.r1.s64 + 1632;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1632(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1632);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83656f50
	if (!cr6.eq) goto loc_83656F50;
	// ld r11,1640(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1640);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83656f54
	goto loc_83656F54;
loc_83656F50:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83656F54:
	// stw r11,368(r26)
	PPC_STORE_U32(ctx.r26.u32 + 368, ctx.r11.u32);
loc_83656F58:
	// addi r6,r19,-376
	ctx.r6.s64 = ctx.r19.s64 + -376;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827a8810
	ctx.lr = 0x83656F70;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83656fac
	if (!cr6.eq) goto loc_83656FAC;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1664
	ctx.r10.s64 = ctx.r1.s64 + 1664;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1664(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1664);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83656fa4
	if (!cr6.eq) goto loc_83656FA4;
	// ld r11,1672(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1672);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83656fa8
	goto loc_83656FA8;
loc_83656FA4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83656FA8:
	// stw r11,372(r26)
	PPC_STORE_U32(ctx.r26.u32 + 372, ctx.r11.u32);
loc_83656FAC:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83656fc0
	if (cr6.lt) goto loc_83656FC0;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x83656FC0;
	sub_82416268(ctx, base);
loc_83656FC0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r23,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r23.u32);
	// stw r27,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r27.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r27,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r27.u8);
	// bne 0x83656d24
	if (!cr0.eq) goto loc_83656D24;
loc_83656FD8:
	// lwz r31,1520(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1520);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83656ff4
	if (cr6.eq) goto loc_83656FF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83656FEC;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83656FF4;
	sub_82416268(ctx, base);
loc_83656FF4:
	// addi r6,r19,-360
	ctx.r6.s64 = ctx.r19.s64 + -360;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x8365700C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365704c
	if (!cr6.eq) goto loc_8365704C;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,1696
	ctx.r10.s64 = ctx.r1.s64 + 1696;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1696(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1696);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83657044
	if (!cr6.eq) goto loc_83657044;
	// ld r11,1704(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1704);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83657048
	goto loc_83657048;
loc_83657044:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83657048:
	// stw r11,376(r26)
	PPC_STORE_U32(ctx.r26.u32 + 376, ctx.r11.u32);
loc_8365704C:
	// addi r6,r19,-352
	ctx.r6.s64 = ctx.r19.s64 + -352;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83657064;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836570a4
	if (!cr6.eq) goto loc_836570A4;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,1728
	ctx.r10.s64 = ctx.r1.s64 + 1728;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1728(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1728);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8365709c
	if (!cr6.eq) goto loc_8365709C;
	// ld r11,1736(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1736);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836570a0
	goto loc_836570A0;
loc_8365709C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836570A0:
	// stw r11,380(r26)
	PPC_STORE_U32(ctx.r26.u32 + 380, ctx.r11.u32);
loc_836570A4:
	// addi r6,r19,-344
	ctx.r6.s64 = ctx.r19.s64 + -344;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836570BC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836570fc
	if (!cr6.eq) goto loc_836570FC;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,1760
	ctx.r10.s64 = ctx.r1.s64 + 1760;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1760(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1760);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836570f4
	if (!cr6.eq) goto loc_836570F4;
	// ld r11,1768(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1768);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836570f8
	goto loc_836570F8;
loc_836570F4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836570F8:
	// stw r11,384(r26)
	PPC_STORE_U32(ctx.r26.u32 + 384, ctx.r11.u32);
loc_836570FC:
	// addi r6,r19,-336
	ctx.r6.s64 = ctx.r19.s64 + -336;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83657114;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83657154
	if (!cr6.eq) goto loc_83657154;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,1792
	ctx.r10.s64 = ctx.r1.s64 + 1792;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1792(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1792);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8365714c
	if (!cr6.eq) goto loc_8365714C;
	// ld r11,1800(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1800);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83657150
	goto loc_83657150;
loc_8365714C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83657150:
	// stw r11,388(r26)
	PPC_STORE_U32(ctx.r26.u32 + 388, ctx.r11.u32);
loc_83657154:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83657168
	if (cr6.lt) goto loc_83657168;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83657168;
	sub_82416268(ctx, base);
loc_83657168:
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// blt cr6,0x83656764
	if (cr6.lt) goto loc_83656764;
loc_83657180:
	// lwz r31,1184(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1184);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8365719c
	if (cr6.eq) goto loc_8365719C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83657194;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8365719C;
	sub_82416268(ctx, base);
loc_8365719C:
	// addi r6,r19,-324
	ctx.r6.s64 = ctx.r19.s64 + -324;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x836571B4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836571f4
	if (!cr6.eq) goto loc_836571F4;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,1824
	ctx.r10.s64 = ctx.r1.s64 + 1824;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1824(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1824);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836571ec
	if (!cr6.eq) goto loc_836571EC;
	// ld r11,1832(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1832);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836571f0
	goto loc_836571F0;
loc_836571EC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836571F0:
	// stw r11,392(r26)
	PPC_STORE_U32(ctx.r26.u32 + 392, ctx.r11.u32);
loc_836571F4:
	// addi r6,r19,-312
	ctx.r6.s64 = ctx.r19.s64 + -312;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8365720C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365724c
	if (!cr6.eq) goto loc_8365724C;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,1856
	ctx.r10.s64 = ctx.r1.s64 + 1856;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1856(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1856);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83657244
	if (!cr6.eq) goto loc_83657244;
	// ld r11,1864(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1864);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83657248
	goto loc_83657248;
loc_83657244:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83657248:
	// stw r11,396(r26)
	PPC_STORE_U32(ctx.r26.u32 + 396, ctx.r11.u32);
loc_8365724C:
	// addi r6,r19,-304
	ctx.r6.s64 = ctx.r19.s64 + -304;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83657264;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836572a4
	if (!cr6.eq) goto loc_836572A4;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,1888
	ctx.r10.s64 = ctx.r1.s64 + 1888;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1888(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1888);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8365729c
	if (!cr6.eq) goto loc_8365729C;
	// ld r11,1896(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1896);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836572a0
	goto loc_836572A0;
loc_8365729C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836572A0:
	// stw r11,400(r26)
	PPC_STORE_U32(ctx.r26.u32 + 400, ctx.r11.u32);
loc_836572A4:
	// addi r6,r19,-292
	ctx.r6.s64 = ctx.r19.s64 + -292;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x836572BC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836572fc
	if (!cr6.eq) goto loc_836572FC;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,1920
	ctx.r10.s64 = ctx.r1.s64 + 1920;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1920(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1920);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836572f4
	if (!cr6.eq) goto loc_836572F4;
	// ld r11,1928(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1928);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836572f8
	goto loc_836572F8;
loc_836572F4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836572F8:
	// stw r11,404(r26)
	PPC_STORE_U32(ctx.r26.u32 + 404, ctx.r11.u32);
loc_836572FC:
	// addi r6,r19,-280
	ctx.r6.s64 = ctx.r19.s64 + -280;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83657314;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83658680
	if (!cr6.eq) goto loc_83658680;
	// lwz r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// addi r15,r26,408
	ctx.r15.s64 = ctx.r26.s64 + 408;
	// li r10,192
	ctx.r10.s64 = 192;
	// stw r24,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r24.u32);
	// addi r31,r15,8
	ctx.r31.s64 = ctx.r15.s64 + 8;
	// stw r15,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r15.u32);
	// addi r30,r15,4
	ctx.r30.s64 = ctx.r15.s64 + 4;
	// stw r10,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r10.u32);
	// stw r31,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r31.u32);
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// stw r30,1096(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1096, ctx.r30.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x83657354;
	sub_8247B7D8(ctx, base);
	// lwz r3,416(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 416);
	// stw r27,408(r26)
	PPC_STORE_U32(ctx.r26.u32 + 408, ctx.r27.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83657378
	if (cr6.eq) goto loc_83657378;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x83657370;
	sub_8247B268(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83657378:
	// stw r22,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r22.u32);
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// add r14,r10,r11
	ctx.r14.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r14
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, xer);
	// bge cr6,0x83658680
	if (!cr6.lt) goto loc_83658680;
loc_83657398:
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// bl 0x83655db0
	ctx.lr = 0x836573A0;
	sub_83655DB0(ctx, base);
	// stw r27,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r27.u32);
	// stw r27,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// lwz r5,8(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r4,12(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// bl 0x83691bb8
	ctx.lr = 0x836573BC;
	sub_83691BB8(ctx, base);
	// lwz r10,1128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1128);
	// lwz r11,1132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1132);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// add r17,r10,r11
	ctx.r17.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r17
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, xer);
	// bge cr6,0x83658640
	if (!cr6.lt) goto loc_83658640;
loc_836573D8:
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// addi r11,r1,1952
	ctx.r11.s64 = ctx.r1.s64 + 1952;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// ld r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ld r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r18.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,1960(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1960);
	// lwz r4,1964(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1964);
	// bl 0x82472fc0
	ctx.lr = 0x83657408;
	sub_82472FC0(ctx, base);
	// addi r6,r19,-268
	ctx.r6.s64 = ctx.r19.s64 + -268;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x83657420;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83657460
	if (!cr6.eq) goto loc_83657460;
	// ld r11,16(r18)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r18.u32 + 16);
	// addi r10,r1,1984
	ctx.r10.s64 = ctx.r1.s64 + 1984;
	// ld r9,24(r18)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r18.u32 + 24);
	// addi r8,r18,16
	ctx.r8.s64 = ctx.r18.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1984(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1984);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83657458
	if (!cr6.eq) goto loc_83657458;
	// ld r11,1992(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1992);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8365745c
	goto loc_8365745C;
loc_83657458:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8365745C:
	// stw r11,2320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2320, ctx.r11.u32);
loc_83657460:
	// addi r6,r19,-260
	ctx.r6.s64 = ctx.r19.s64 + -260;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x83657478;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83657510
	if (!cr6.eq) goto loc_83657510;
	// stw r23,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r23.u32);
	// addi r11,r1,2016
	ctx.r11.s64 = ctx.r1.s64 + 2016;
	// stw r27,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r27.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stb r27,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r27.u8);
	// addi r10,r18,16
	ctx.r10.s64 = ctx.r18.s64 + 16;
	// ld r9,16(r18)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r18.u32 + 16);
	// ld r8,24(r18)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r18.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2024(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2024);
	// lwz r4,2028(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2028);
	// bl 0x82472fc0
	ctx.lr = 0x836574B4;
	sub_82472FC0(ctx, base);
	// lwz r7,596(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r4,576(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836574c8
	if (!cr6.lt) goto loc_836574C8;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
loc_836574C8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836574CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836574cc
	if (!cr6.eq) goto loc_836574CC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2324
	ctx.r3.s64 = ctx.r1.s64 + 2324;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836574F0;
	sub_824208C8(ctx, base);
	// lwz r10,596(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83657504
	if (cr6.lt) goto loc_83657504;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x82416268
	ctx.lr = 0x83657504;
	sub_82416268(ctx, base);
loc_83657504:
	// stw r23,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r23.u32);
	// stw r27,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r27.u32);
	// stb r27,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r27.u8);
loc_83657510:
	// addi r6,r19,-252
	ctx.r6.s64 = ctx.r19.s64 + -252;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x83657528;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836575c0
	if (!cr6.eq) goto loc_836575C0;
	// stw r23,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r23.u32);
	// addi r11,r1,2048
	ctx.r11.s64 = ctx.r1.s64 + 2048;
	// stw r27,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r27.u32);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// stb r27,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r27.u8);
	// addi r10,r18,16
	ctx.r10.s64 = ctx.r18.s64 + 16;
	// ld r9,16(r18)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r18.u32 + 16);
	// ld r8,24(r18)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r18.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2056(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2056);
	// lwz r4,2060(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2060);
	// bl 0x82472fc0
	ctx.lr = 0x83657564;
	sub_82472FC0(ctx, base);
	// lwz r7,660(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r4,640(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83657578
	if (!cr6.lt) goto loc_83657578;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
loc_83657578:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8365757C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8365757c
	if (!cr6.eq) goto loc_8365757C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2352
	ctx.r3.s64 = ctx.r1.s64 + 2352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836575A0;
	sub_824208C8(ctx, base);
	// lwz r10,660(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836575b4
	if (cr6.lt) goto loc_836575B4;
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x82416268
	ctx.lr = 0x836575B4;
	sub_82416268(ctx, base);
loc_836575B4:
	// stw r23,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r23.u32);
	// stw r27,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r27.u32);
	// stb r27,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r27.u8);
loc_836575C0:
	// addi r6,r19,-244
	ctx.r6.s64 = ctx.r19.s64 + -244;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836575D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83657670
	if (!cr6.eq) goto loc_83657670;
	// stw r23,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r23.u32);
	// addi r11,r1,2080
	ctx.r11.s64 = ctx.r1.s64 + 2080;
	// stw r27,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r27.u32);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// stb r27,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r27.u8);
	// addi r10,r18,16
	ctx.r10.s64 = ctx.r18.s64 + 16;
	// ld r9,16(r18)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r18.u32 + 16);
	// ld r8,24(r18)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r18.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2088(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2088);
	// lwz r4,2092(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2092);
	// bl 0x82472fc0
	ctx.lr = 0x83657614;
	sub_82472FC0(ctx, base);
	// lwz r7,724(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// lwz r4,704(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83657628
	if (!cr6.lt) goto loc_83657628;
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
loc_83657628:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8365762C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8365762c
	if (!cr6.eq) goto loc_8365762C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2380
	ctx.r3.s64 = ctx.r1.s64 + 2380;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83657650;
	sub_824208C8(ctx, base);
	// lwz r10,724(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83657664
	if (cr6.lt) goto loc_83657664;
	// lwz r3,704(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// bl 0x82416268
	ctx.lr = 0x83657664;
	sub_82416268(ctx, base);
loc_83657664:
	// stw r23,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r23.u32);
	// stw r27,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r27.u32);
	// stb r27,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r27.u8);
loc_83657670:
	// addi r6,r19,-232
	ctx.r6.s64 = ctx.r19.s64 + -232;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x83657688;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836580c8
	if (!cr6.eq) goto loc_836580C8;
	// lwz r11,400(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// addi r10,r1,2416
	ctx.r10.s64 = ctx.r1.s64 + 2416;
	// addi r9,r1,2408
	ctx.r9.s64 = ctx.r1.s64 + 2408;
	// stw r24,1068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1068, ctx.r24.u32);
	// addi r8,r1,2412
	ctx.r8.s64 = ctx.r1.s64 + 2412;
	// stw r10,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r10.u32);
	// li r7,240
	ctx.r7.s64 = 240;
	// stw r9,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r9.u32);
	// stw r8,1064(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1064, ctx.r8.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// stw r7,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r7.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836576C8;
	sub_8247B7D8(ctx, base);
	// lwz r3,2416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2416);
	// stw r27,2408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2408, ctx.r27.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836576ec
	if (cr6.eq) goto loc_836576EC;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x836576E4;
	sub_8247B268(ctx, base);
	// stw r27,2412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2412, ctx.r27.u32);
	// stw r27,2416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2416, ctx.r27.u32);
loc_836576EC:
	// stw r22,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r22.u32);
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 24);
	// lwz r11,28(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// add r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// bge cr6,0x836580b8
	if (!cr6.lt) goto loc_836580B8;
loc_8365770C:
	// addi r3,r1,2512
	ctx.r3.s64 = ctx.r1.s64 + 2512;
	// bl 0x83655ce8
	ctx.lr = 0x83657714;
	sub_83655CE8(ctx, base);
	// stw r27,1440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1440, ctx.r27.u32);
	// stw r27,1456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1456, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// lwz r5,8(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r4,12(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// bl 0x83691bb8
	ctx.lr = 0x83657730;
	sub_83691BB8(ctx, base);
	// lwz r10,1448(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1448);
	// lwz r11,1452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1452);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// add r22,r10,r11
	ctx.r22.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// bge cr6,0x8365807c
	if (!cr6.lt) goto loc_8365807C;
loc_8365774C:
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// addi r11,r1,2112
	ctx.r11.s64 = ctx.r1.s64 + 2112;
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r27.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r27,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r27.u8);
	// ld r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// ld r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r4,2124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2124);
	// lwz r5,2120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2120);
	// bl 0x82472fc0
	ctx.lr = 0x8365777C;
	sub_82472FC0(ctx, base);
	// addi r6,r19,-224
	ctx.r6.s64 = ctx.r19.s64 + -224;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83657794;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836577d4
	if (!cr6.eq) goto loc_836577D4;
	// ld r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// addi r10,r1,1536
	ctx.r10.s64 = ctx.r1.s64 + 1536;
	// ld r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1536(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1536);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836577cc
	if (!cr6.eq) goto loc_836577CC;
	// ld r11,1544(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1544);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836577d0
	goto loc_836577D0;
loc_836577CC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836577D0:
	// stw r11,2512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2512, ctx.r11.u32);
loc_836577D4:
	// addi r6,r19,-220
	ctx.r6.s64 = ctx.r19.s64 + -220;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x836577EC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83657c90
	if (!cr6.eq) goto loc_83657C90;
	// stw r27,1216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1216, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,1232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1232, ctx.r27.u32);
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r4,28(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x83657810;
	sub_83691BB8(ctx, base);
	// lwz r10,1224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1224);
	// lwz r11,1228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1228);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83657c74
	if (!cr6.lt) goto loc_83657C74;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r26,r11,28
	ctx.r26.s64 = ctx.r11.s64 + 28;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
loc_8365783C:
	// stw r23,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r23.u32);
	// addi r11,r1,2176
	ctx.r11.s64 = ctx.r1.s64 + 2176;
	// stw r27,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r27.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stb r27,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r27.u8);
	// addi r10,r26,-28
	ctx.r10.s64 = ctx.r26.s64 + -28;
	// ld r9,-28(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + -28);
	// ld r8,-20(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + -20);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,2188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2188);
	// lwz r5,2184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2184);
	// bl 0x82472fc0
	ctx.lr = 0x83657870;
	sub_82472FC0(ctx, base);
	// addi r6,r19,-212
	ctx.r6.s64 = ctx.r19.s64 + -212;
	// lwz r5,384(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x827a8810
	ctx.lr = 0x83657888;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83657b08
	if (!cr6.eq) goto loc_83657B08;
	// stw r27,1360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1360, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,1376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1376, ctx.r27.u32);
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// lwz r5,-4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x83691bb8
	ctx.lr = 0x836578AC;
	sub_83691BB8(ctx, base);
	// lwz r10,1368(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1368);
	// lwz r11,1372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1372);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83657aec
	if (!cr6.lt) goto loc_83657AEC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_836578D8:
	// stw r23,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r23.u32);
	// addi r11,r1,2208
	ctx.r11.s64 = ctx.r1.s64 + 2208;
	// stw r27,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r27.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stb r27,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r27.u8);
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// ld r9,-16(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + -16);
	// ld r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + -8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,2220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2220);
	// lwz r5,2216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2216);
	// bl 0x82472fc0
	ctx.lr = 0x8365790C;
	sub_82472FC0(ctx, base);
	// addi r6,r19,-204
	ctx.r6.s64 = ctx.r19.s64 + -204;
	// lwz r5,352(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x827a8810
	ctx.lr = 0x83657924;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836579b8
	if (!cr6.eq) goto loc_836579B8;
	// stw r23,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r23.u32);
	// addi r11,r1,2240
	ctx.r11.s64 = ctx.r1.s64 + 2240;
	// stw r27,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r27.u32);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// stb r27,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r27.u8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,2248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2248);
	// lwz r4,2252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2252);
	// bl 0x82472fc0
	ctx.lr = 0x8365795C;
	sub_82472FC0(ctx, base);
	// lwz r8,788(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// lwz r4,768(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83657970
	if (!cr6.lt) goto loc_83657970;
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
loc_83657970:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83657974:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83657974
	if (!cr6.eq) goto loc_83657974;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2520
	ctx.r3.s64 = ctx.r1.s64 + 2520;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83657998;
	sub_824208C8(ctx, base);
	// lwz r10,788(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836579ac
	if (cr6.lt) goto loc_836579AC;
	// lwz r3,768(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// bl 0x82416268
	ctx.lr = 0x836579AC;
	sub_82416268(ctx, base);
loc_836579AC:
	// stw r23,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r23.u32);
	// stw r27,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r27.u32);
	// stb r27,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r27.u8);
loc_836579B8:
	// addi r6,r19,-196
	ctx.r6.s64 = ctx.r19.s64 + -196;
	// lwz r5,352(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x827a8810
	ctx.lr = 0x836579D0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83657a20
	if (!cr6.eq) goto loc_83657A20;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r1,1344
	ctx.r10.s64 = ctx.r1.s64 + 1344;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1344(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1344);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83657a04
	if (!cr6.eq) goto loc_83657A04;
	// ld r11,1352(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1352);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83657a1c
	goto loc_83657A1C;
loc_83657A04:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83657a18
	if (!cr6.eq) goto loc_83657A18;
	// ld r11,1352(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1352);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83657a1c
	goto loc_83657A1C;
loc_83657A18:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83657A1C:
	// stw r11,2548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2548, ctx.r11.u32);
loc_83657A20:
	// addi r6,r19,-188
	ctx.r6.s64 = ctx.r19.s64 + -188;
	// lwz r5,352(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x827a8810
	ctx.lr = 0x83657A38;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83657ac0
	if (!cr6.eq) goto loc_83657AC0;
	// addi r3,r1,2552
	ctx.r3.s64 = ctx.r1.s64 + 2552;
	// bl 0x824238b8
	ctx.lr = 0x83657A48;
	sub_824238B8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x83657ac0
	if (!cr6.lt) goto loc_83657AC0;
loc_83657A60:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1392
	ctx.r10.s64 = ctx.r1.s64 + 1392;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1392);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83657a8c
	if (!cr6.eq) goto loc_83657A8C;
	// ld r11,1400(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1400);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83657aa4
	goto loc_83657AA4;
loc_83657A8C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83657aa0
	if (!cr6.eq) goto loc_83657AA0;
	// ld r11,1400(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1400);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83657aa4
	goto loc_83657AA4;
loc_83657AA0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83657AA4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2552
	ctx.r3.s64 = ctx.r1.s64 + 2552;
	// bl 0x82437de0
	ctx.lr = 0x83657AB4;
	sub_82437DE0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x83657a60
	if (cr6.lt) goto loc_83657A60;
loc_83657AC0:
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83657ad4
	if (cr6.lt) goto loc_83657AD4;
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82416268
	ctx.lr = 0x83657AD4;
	sub_82416268(ctx, base);
loc_83657AD4:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r23,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r23.u32);
	// stw r27,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r27.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stb r27,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r27.u8);
	// bne 0x836578d8
	if (!cr0.eq) goto loc_836578D8;
loc_83657AEC:
	// lwz r31,1376(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1376);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83657b08
	if (cr6.eq) goto loc_83657B08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83657B00;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83657B08;
	sub_82416268(ctx, base);
loc_83657B08:
	// addi r6,r19,-180
	ctx.r6.s64 = ctx.r19.s64 + -180;
	// lwz r5,384(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x827a8810
	ctx.lr = 0x83657B20;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83657ba8
	if (!cr6.eq) goto loc_83657BA8;
	// addi r3,r1,2568
	ctx.r3.s64 = ctx.r1.s64 + 2568;
	// bl 0x824238b8
	ctx.lr = 0x83657B30;
	sub_824238B8(ctx, base);
	// lwz r11,-4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bge cr6,0x83657ba8
	if (!cr6.lt) goto loc_83657BA8;
loc_83657B48:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1424
	ctx.r10.s64 = ctx.r1.s64 + 1424;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1424(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1424);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83657b74
	if (!cr6.eq) goto loc_83657B74;
	// ld r11,1432(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1432);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83657b8c
	goto loc_83657B8C;
loc_83657B74:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83657b88
	if (!cr6.eq) goto loc_83657B88;
	// ld r11,1432(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1432);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83657b8c
	goto loc_83657B8C;
loc_83657B88:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83657B8C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2568
	ctx.r3.s64 = ctx.r1.s64 + 2568;
	// bl 0x82437de0
	ctx.lr = 0x83657B9C;
	sub_82437DE0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x83657b48
	if (cr6.lt) goto loc_83657B48;
loc_83657BA8:
	// addi r6,r19,-176
	ctx.r6.s64 = ctx.r19.s64 + -176;
	// lwz r5,384(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x827a8810
	ctx.lr = 0x83657BC0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83657c48
	if (!cr6.eq) goto loc_83657C48;
	// addi r3,r1,2584
	ctx.r3.s64 = ctx.r1.s64 + 2584;
	// bl 0x824238b8
	ctx.lr = 0x83657BD0;
	sub_824238B8(ctx, base);
	// lwz r11,-4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bge cr6,0x83657c48
	if (!cr6.lt) goto loc_83657C48;
loc_83657BE8:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1472
	ctx.r10.s64 = ctx.r1.s64 + 1472;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1472(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1472);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83657c14
	if (!cr6.eq) goto loc_83657C14;
	// ld r11,1480(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1480);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83657c2c
	goto loc_83657C2C;
loc_83657C14:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83657c28
	if (!cr6.eq) goto loc_83657C28;
	// ld r11,1480(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1480);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83657c2c
	goto loc_83657C2C;
loc_83657C28:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83657C2C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2584
	ctx.r3.s64 = ctx.r1.s64 + 2584;
	// bl 0x82437de0
	ctx.lr = 0x83657C3C;
	sub_82437DE0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x83657be8
	if (cr6.lt) goto loc_83657BE8;
loc_83657C48:
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83657c5c
	if (cr6.lt) goto loc_83657C5C;
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82416268
	ctx.lr = 0x83657C5C;
	sub_82416268(ctx, base);
loc_83657C5C:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// stw r23,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r23.u32);
	// stw r27,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r27.u32);
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// stb r27,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r27.u8);
	// bne 0x8365783c
	if (!cr0.eq) goto loc_8365783C;
loc_83657C74:
	// lwz r31,1232(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1232);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83657c90
	if (cr6.eq) goto loc_83657C90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83657C88;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83657C90;
	sub_82416268(ctx, base);
loc_83657C90:
	// addi r6,r19,-164
	ctx.r6.s64 = ctx.r19.s64 + -164;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83657CA8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83657ce0
	if (!cr6.eq) goto loc_83657CE0;
	// ld r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// addi r10,r1,2272
	ctx.r10.s64 = ctx.r1.s64 + 2272;
	// ld r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,2272(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2272);
	// ld r11,2280(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2280);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// beq cr6,0x83657cdc
	if (cr6.eq) goto loc_83657CDC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83657CDC:
	// std r11,2600(r1)
	PPC_STORE_U64(ctx.r1.u32 + 2600, ctx.r11.u64);
loc_83657CE0:
	// addi r6,r19,-156
	ctx.r6.s64 = ctx.r19.s64 + -156;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83657CF8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83657d90
	if (!cr6.eq) goto loc_83657D90;
	// stw r23,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r23.u32);
	// addi r11,r1,2288
	ctx.r11.s64 = ctx.r1.s64 + 2288;
	// stw r27,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r27.u32);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// stb r27,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r27.u8);
	// addi r10,r24,16
	ctx.r10.s64 = ctx.r24.s64 + 16;
	// ld r9,16(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// ld r8,24(r24)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2296);
	// lwz r4,2300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2300);
	// bl 0x82472fc0
	ctx.lr = 0x83657D34;
	sub_82472FC0(ctx, base);
	// lwz r7,852(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// lwz r4,832(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83657d48
	if (!cr6.lt) goto loc_83657D48;
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
loc_83657D48:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83657D4C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83657d4c
	if (!cr6.eq) goto loc_83657D4C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83657D70;
	sub_824208C8(ctx, base);
	// lwz r10,852(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83657d84
	if (cr6.lt) goto loc_83657D84;
	// lwz r3,832(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// bl 0x82416268
	ctx.lr = 0x83657D84;
	sub_82416268(ctx, base);
loc_83657D84:
	// stw r23,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r23.u32);
	// stw r27,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r27.u32);
	// stb r27,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r27.u8);
loc_83657D90:
	// addi r6,r19,-144
	ctx.r6.s64 = ctx.r19.s64 + -144;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83657DA8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83657e40
	if (!cr6.eq) goto loc_83657E40;
	// stw r23,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r23.u32);
	// addi r11,r1,1584
	ctx.r11.s64 = ctx.r1.s64 + 1584;
	// stw r27,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r27.u32);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// stb r27,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, ctx.r27.u8);
	// addi r10,r24,16
	ctx.r10.s64 = ctx.r24.s64 + 16;
	// ld r9,16(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// ld r8,24(r24)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1592(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1592);
	// lwz r4,1596(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1596);
	// bl 0x82472fc0
	ctx.lr = 0x83657DE4;
	sub_82472FC0(ctx, base);
	// lwz r7,916(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// lwz r4,896(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83657df8
	if (!cr6.lt) goto loc_83657DF8;
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
loc_83657DF8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83657DFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83657dfc
	if (!cr6.eq) goto loc_83657DFC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2636
	ctx.r3.s64 = ctx.r1.s64 + 2636;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83657E20;
	sub_824208C8(ctx, base);
	// lwz r10,916(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83657e34
	if (cr6.lt) goto loc_83657E34;
	// lwz r3,896(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// bl 0x82416268
	ctx.lr = 0x83657E34;
	sub_82416268(ctx, base);
loc_83657E34:
	// stw r23,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r23.u32);
	// stw r27,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r27.u32);
	// stb r27,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, ctx.r27.u8);
loc_83657E40:
	// addi r6,r19,-136
	ctx.r6.s64 = ctx.r19.s64 + -136;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83657E58;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83657ef0
	if (!cr6.eq) goto loc_83657EF0;
	// stw r23,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r23.u32);
	// addi r11,r1,1968
	ctx.r11.s64 = ctx.r1.s64 + 1968;
	// stw r27,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r27.u32);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// stb r27,960(r1)
	PPC_STORE_U8(ctx.r1.u32 + 960, ctx.r27.u8);
	// addi r10,r24,16
	ctx.r10.s64 = ctx.r24.s64 + 16;
	// ld r9,16(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// ld r8,24(r24)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1976(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1976);
	// lwz r4,1980(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1980);
	// bl 0x82472fc0
	ctx.lr = 0x83657E94;
	sub_82472FC0(ctx, base);
	// lwz r7,980(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 980);
	// lwz r4,960(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83657ea8
	if (!cr6.lt) goto loc_83657EA8;
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
loc_83657EA8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83657EAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83657eac
	if (!cr6.eq) goto loc_83657EAC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2664
	ctx.r3.s64 = ctx.r1.s64 + 2664;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83657ED0;
	sub_824208C8(ctx, base);
	// lwz r10,980(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 980);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83657ee4
	if (cr6.lt) goto loc_83657EE4;
	// lwz r3,960(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// bl 0x82416268
	ctx.lr = 0x83657EE4;
	sub_82416268(ctx, base);
loc_83657EE4:
	// stw r23,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r23.u32);
	// stw r27,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r27.u32);
	// stb r27,960(r1)
	PPC_STORE_U8(ctx.r1.u32 + 960, ctx.r27.u8);
loc_83657EF0:
	// addi r6,r19,-128
	ctx.r6.s64 = ctx.r19.s64 + -128;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83657F08;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83657fa0
	if (!cr6.eq) goto loc_83657FA0;
	// stw r23,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r23.u32);
	// addi r11,r1,1616
	ctx.r11.s64 = ctx.r1.s64 + 1616;
	// stw r27,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r27.u32);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// stb r27,1024(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1024, ctx.r27.u8);
	// addi r10,r24,16
	ctx.r10.s64 = ctx.r24.s64 + 16;
	// ld r9,16(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// ld r8,24(r24)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1624(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1624);
	// lwz r4,1628(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1628);
	// bl 0x82472fc0
	ctx.lr = 0x83657F44;
	sub_82472FC0(ctx, base);
	// lwz r7,1044(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1044);
	// lwz r4,1024(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83657f58
	if (!cr6.lt) goto loc_83657F58;
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
loc_83657F58:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83657F5C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83657f5c
	if (!cr6.eq) goto loc_83657F5C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2692
	ctx.r3.s64 = ctx.r1.s64 + 2692;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83657F80;
	sub_824208C8(ctx, base);
	// lwz r10,1044(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1044);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83657f94
	if (cr6.lt) goto loc_83657F94;
	// lwz r3,1024(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// bl 0x82416268
	ctx.lr = 0x83657F94;
	sub_82416268(ctx, base);
loc_83657F94:
	// stw r23,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r23.u32);
	// stw r27,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r27.u32);
	// stb r27,1024(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1024, ctx.r27.u8);
loc_83657FA0:
	// addi r6,r19,-120
	ctx.r6.s64 = ctx.r19.s64 + -120;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83657FB8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83658050
	if (!cr6.eq) goto loc_83658050;
	// stw r23,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r23.u32);
	// addi r11,r1,2160
	ctx.r11.s64 = ctx.r1.s64 + 2160;
	// stw r27,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r27.u32);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// stb r27,992(r1)
	PPC_STORE_U8(ctx.r1.u32 + 992, ctx.r27.u8);
	// addi r10,r24,16
	ctx.r10.s64 = ctx.r24.s64 + 16;
	// ld r9,16(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// ld r8,24(r24)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2168);
	// lwz r4,2172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2172);
	// bl 0x82472fc0
	ctx.lr = 0x83657FF4;
	sub_82472FC0(ctx, base);
	// lwz r7,1012(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1012);
	// lwz r4,992(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83658008
	if (!cr6.lt) goto loc_83658008;
	// addi r4,r1,992
	ctx.r4.s64 = ctx.r1.s64 + 992;
loc_83658008:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8365800C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8365800c
	if (!cr6.eq) goto loc_8365800C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2720
	ctx.r3.s64 = ctx.r1.s64 + 2720;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83658030;
	sub_824208C8(ctx, base);
	// lwz r10,1012(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1012);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83658044
	if (cr6.lt) goto loc_83658044;
	// lwz r3,992(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// bl 0x82416268
	ctx.lr = 0x83658044;
	sub_82416268(ctx, base);
loc_83658044:
	// stw r23,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r23.u32);
	// stw r27,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r27.u32);
	// stb r27,992(r1)
	PPC_STORE_U8(ctx.r1.u32 + 992, ctx.r27.u8);
loc_83658050:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83658064
	if (cr6.lt) goto loc_83658064;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83658064;
	sub_82416268(ctx, base);
loc_83658064:
	// addi r24,r24,32
	ctx.r24.s64 = ctx.r24.s64 + 32;
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r27.u32);
	// cmplw cr6,r24,r22
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r22.u32, xer);
	// stb r27,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r27.u8);
	// blt cr6,0x8365774c
	if (cr6.lt) goto loc_8365774C;
loc_8365807C:
	// addi r4,r1,2512
	ctx.r4.s64 = ctx.r1.s64 + 2512;
	// addi r3,r1,2408
	ctx.r3.s64 = ctx.r1.s64 + 2408;
	// bl 0x83656330
	ctx.lr = 0x83658088;
	sub_83656330(ctx, base);
	// lwz r31,1456(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1456);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836580a4
	if (cr6.eq) goto loc_836580A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8365809C;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836580A4;
	sub_82416268(ctx, base);
loc_836580A4:
	// addi r3,r1,2512
	ctx.r3.s64 = ctx.r1.s64 + 2512;
	// bl 0x83655940
	ctx.lr = 0x836580AC;
	sub_83655940(ctx, base);
	// addi r21,r21,16
	ctx.r21.s64 = ctx.r21.s64 + 16;
	// cmplw cr6,r21,r20
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r20.u32, xer);
	// blt cr6,0x8365770c
	if (cr6.lt) goto loc_8365770C;
loc_836580B8:
	// lwz r22,404(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// li r24,8
	ctx.r24.s64 = 8;
	// lwz r25,228(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r26,2932(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2932);
loc_836580C8:
	// addi r6,r19,-108
	ctx.r6.s64 = ctx.r19.s64 + -108;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836580E0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83658168
	if (!cr6.eq) goto loc_83658168;
	// addi r3,r1,2424
	ctx.r3.s64 = ctx.r1.s64 + 2424;
	// bl 0x824238b8
	ctx.lr = 0x836580F0;
	sub_824238B8(ctx, base);
	// lwz r11,24(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 24);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r31,28(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bge cr6,0x83658168
	if (!cr6.lt) goto loc_83658168;
loc_83658108:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1408
	ctx.r10.s64 = ctx.r1.s64 + 1408;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1408);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83658134
	if (!cr6.eq) goto loc_83658134;
	// ld r11,1416(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1416);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8365814c
	goto loc_8365814C;
loc_83658134:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83658148
	if (!cr6.eq) goto loc_83658148;
	// ld r11,1416(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1416);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8365814c
	goto loc_8365814C;
loc_83658148:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8365814C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,2424
	ctx.r3.s64 = ctx.r1.s64 + 2424;
	// bl 0x82437de0
	ctx.lr = 0x8365815C;
	sub_82437DE0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x83658108
	if (cr6.lt) goto loc_83658108;
loc_83658168:
	// addi r6,r19,-100
	ctx.r6.s64 = ctx.r19.s64 + -100;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x83658180;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836584b4
	if (!cr6.eq) goto loc_836584B4;
	// addi r3,r1,2440
	ctx.r3.s64 = ctx.r1.s64 + 2440;
	// bl 0x83050f98
	ctx.lr = 0x83658190;
	sub_83050F98(ctx, base);
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 24);
	// lwz r11,28(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836584b4
	if (!cr6.lt) goto loc_836584B4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_836581BC:
	// stw r27,1264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1264, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,1280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1280, ctx.r27.u32);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,-4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// stw r27,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r27.u32);
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r27,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r27.u32);
	// stw r27,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r27.u32);
	// stw r27,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r27.u32);
	// bl 0x83691bb8
	ctx.lr = 0x836581EC;
	sub_83691BB8(ctx, base);
	// lwz r10,1272(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1272);
	// lwz r11,1276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1276);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83658480
	if (!cr6.lt) goto loc_83658480;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_83658218:
	// stw r23,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r23.u32);
	// addi r11,r1,1648
	ctx.r11.s64 = ctx.r1.s64 + 1648;
	// stw r27,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r27,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r27.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// ld r8,-8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,1656(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1656);
	// lwz r4,1660(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1660);
	// bl 0x82472fc0
	ctx.lr = 0x8365824C;
	sub_82472FC0(ctx, base);
	// addi r6,r19,-92
	ctx.r6.s64 = ctx.r19.s64 + -92;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827a8810
	ctx.lr = 0x83658264;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836582b4
	if (!cr6.eq) goto loc_836582B4;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1488
	ctx.r10.s64 = ctx.r1.s64 + 1488;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1488(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1488);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83658298
	if (!cr6.eq) goto loc_83658298;
	// ld r11,1496(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1496);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836582b0
	goto loc_836582B0;
loc_83658298:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836582ac
	if (!cr6.eq) goto loc_836582AC;
	// ld r11,1496(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1496);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836582b0
	goto loc_836582B0;
loc_836582AC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836582B0:
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
loc_836582B4:
	// addi r6,r19,-80
	ctx.r6.s64 = ctx.r19.s64 + -80;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827a8810
	ctx.lr = 0x836582CC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365831c
	if (!cr6.eq) goto loc_8365831C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1152
	ctx.r10.s64 = ctx.r1.s64 + 1152;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83658300
	if (!cr6.eq) goto loc_83658300;
	// ld r11,1160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1160);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83658318
	goto loc_83658318;
loc_83658300:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83658314
	if (!cr6.eq) goto loc_83658314;
	// ld r11,1160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1160);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83658318
	goto loc_83658318;
loc_83658314:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83658318:
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
loc_8365831C:
	// addi r6,r19,-68
	ctx.r6.s64 = ctx.r19.s64 + -68;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827a8810
	ctx.lr = 0x83658334;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83658384
	if (!cr6.eq) goto loc_83658384;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1200
	ctx.r10.s64 = ctx.r1.s64 + 1200;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83658368
	if (!cr6.eq) goto loc_83658368;
	// ld r11,1208(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1208);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83658380
	goto loc_83658380;
loc_83658368:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8365837c
	if (!cr6.eq) goto loc_8365837C;
	// ld r11,1208(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1208);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83658380
	goto loc_83658380;
loc_8365837C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83658380:
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r11.u32);
loc_83658384:
	// addi r6,r19,-56
	ctx.r6.s64 = ctx.r19.s64 + -56;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827a8810
	ctx.lr = 0x8365839C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836583ec
	if (!cr6.eq) goto loc_836583EC;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1248
	ctx.r10.s64 = ctx.r1.s64 + 1248;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1248);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836583d0
	if (!cr6.eq) goto loc_836583D0;
	// ld r11,1256(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1256);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836583e8
	goto loc_836583E8;
loc_836583D0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836583e4
	if (!cr6.eq) goto loc_836583E4;
	// ld r11,1256(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1256);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836583e8
	goto loc_836583E8;
loc_836583E4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836583E8:
	// stw r11,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
loc_836583EC:
	// addi r6,r19,-44
	ctx.r6.s64 = ctx.r19.s64 + -44;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827a8810
	ctx.lr = 0x83658404;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83658454
	if (!cr6.eq) goto loc_83658454;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1296
	ctx.r10.s64 = ctx.r1.s64 + 1296;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1296);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83658438
	if (!cr6.eq) goto loc_83658438;
	// ld r11,1304(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1304);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83658450
	goto loc_83658450;
loc_83658438:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8365844c
	if (!cr6.eq) goto loc_8365844C;
	// ld r11,1304(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1304);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83658450
	goto loc_83658450;
loc_8365844C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83658450:
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
loc_83658454:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83658468
	if (cr6.lt) goto loc_83658468;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x83658468;
	sub_82416268(ctx, base);
loc_83658468:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r23,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r23.u32);
	// stw r27,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r27,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r27.u8);
	// bne 0x83658218
	if (!cr0.eq) goto loc_83658218;
loc_83658480:
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,2440
	ctx.r3.s64 = ctx.r1.s64 + 2440;
	// bl 0x82df2348
	ctx.lr = 0x8365848C;
	sub_82DF2348(ctx, base);
	// lwz r31,1280(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1280);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836584a8
	if (cr6.eq) goto loc_836584A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836584A0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836584A8;
	sub_82416268(ctx, base);
loc_836584A8:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x836581bc
	if (!cr0.eq) goto loc_836581BC;
loc_836584B4:
	// addi r6,r19,-32
	ctx.r6.s64 = ctx.r19.s64 + -32;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836584CC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83658564
	if (!cr6.eq) goto loc_83658564;
	// stw r23,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r23.u32);
	// addi r11,r1,2000
	ctx.r11.s64 = ctx.r1.s64 + 2000;
	// stw r27,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r27.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stb r27,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r27.u8);
	// addi r10,r18,16
	ctx.r10.s64 = ctx.r18.s64 + 16;
	// ld r9,16(r18)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r18.u32 + 16);
	// ld r8,24(r18)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r18.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2008(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2008);
	// lwz r4,2012(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2012);
	// bl 0x82472fc0
	ctx.lr = 0x83658508;
	sub_82472FC0(ctx, base);
	// lwz r7,500(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r4,480(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8365851c
	if (!cr6.lt) goto loc_8365851C;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
loc_8365851C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83658520:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83658520
	if (!cr6.eq) goto loc_83658520;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2456
	ctx.r3.s64 = ctx.r1.s64 + 2456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83658544;
	sub_824208C8(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83658558
	if (cr6.lt) goto loc_83658558;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x83658558;
	sub_82416268(ctx, base);
loc_83658558:
	// stw r23,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r23.u32);
	// stw r27,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r27.u32);
	// stb r27,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r27.u8);
loc_83658564:
	// addi r6,r19,-16
	ctx.r6.s64 = ctx.r19.s64 + -16;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x8365857C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83658614
	if (!cr6.eq) goto loc_83658614;
	// stw r23,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r23.u32);
	// addi r11,r1,1680
	ctx.r11.s64 = ctx.r1.s64 + 1680;
	// stw r27,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r27.u32);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stb r27,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r27.u8);
	// addi r10,r18,16
	ctx.r10.s64 = ctx.r18.s64 + 16;
	// ld r9,16(r18)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r18.u32 + 16);
	// ld r8,24(r18)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r18.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1688(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1688);
	// lwz r4,1692(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// bl 0x82472fc0
	ctx.lr = 0x836585B8;
	sub_82472FC0(ctx, base);
	// lwz r7,692(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// lwz r4,672(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836585cc
	if (!cr6.lt) goto loc_836585CC;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
loc_836585CC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836585D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836585d0
	if (!cr6.eq) goto loc_836585D0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2484
	ctx.r3.s64 = ctx.r1.s64 + 2484;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836585F4;
	sub_824208C8(ctx, base);
	// lwz r10,692(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83658608
	if (cr6.lt) goto loc_83658608;
	// lwz r3,672(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// bl 0x82416268
	ctx.lr = 0x83658608;
	sub_82416268(ctx, base);
loc_83658608:
	// stw r23,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r23.u32);
	// stw r27,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r27.u32);
	// stb r27,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r27.u8);
loc_83658614:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83658628
	if (cr6.lt) goto loc_83658628;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83658628;
	sub_82416268(ctx, base);
loc_83658628:
	// addi r18,r18,32
	ctx.r18.s64 = ctx.r18.s64 + 32;
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// cmplw cr6,r18,r17
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r17.u32, xer);
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// blt cr6,0x836573d8
	if (cr6.lt) goto loc_836573D8;
loc_83658640:
	// addi r4,r1,2320
	ctx.r4.s64 = ctx.r1.s64 + 2320;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83655b90
	ctx.lr = 0x8365864C;
	sub_83655B90(ctx, base);
	// lwz r31,1136(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1136);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83658668
	if (cr6.eq) goto loc_83658668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83658660;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83658668;
	sub_82416268(ctx, base);
loc_83658668:
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// bl 0x83655850
	ctx.lr = 0x83658670;
	sub_83655850(ctx, base);
	// addi r16,r16,16
	ctx.r16.s64 = ctx.r16.s64 + 16;
	// cmplw cr6,r16,r14
	cr6.compare<uint32_t>(ctx.r16.u32, ctx.r14.u32, xer);
	// blt cr6,0x83657398
	if (cr6.lt) goto loc_83657398;
	// lwz r21,396(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
loc_83658680:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83658698;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836586d8
	if (!cr6.eq) goto loc_836586D8;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,2256
	ctx.r10.s64 = ctx.r1.s64 + 2256;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,2256(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2256);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836586d0
	if (!cr6.eq) goto loc_836586D0;
	// ld r11,2264(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2264);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836586d4
	goto loc_836586D4;
loc_836586D0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836586D4:
	// stw r11,424(r26)
	PPC_STORE_U32(ctx.r26.u32 + 424, ctx.r11.u32);
loc_836586D8:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836586ec
	if (cr6.lt) goto loc_836586EC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836586EC;
	sub_82416268(ctx, base);
loc_836586EC:
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r25.u32);
	// cmplw cr6,r25,r21
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r21.u32, xer);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// blt cr6,0x83656524
	if (cr6.lt) goto loc_83656524;
loc_83658708:
	// lwz r31,1328(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1328);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83658724
	if (cr6.eq) goto loc_83658724;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8365871C;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83658724;
	sub_82416268(ctx, base);
loc_83658724:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2912
	ctx.r1.s64 = ctx.r1.s64 + 2912;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83658730"))) PPC_WEAK_FUNC(sub_83658730);
PPC_FUNC_IMPL(__imp__sub_83658730) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x836563b8
	sub_836563B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8365873C"))) PPC_WEAK_FUNC(sub_8365873C);
PPC_FUNC_IMPL(__imp__sub_8365873C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83658740"))) PPC_WEAK_FUNC(sub_83658740);
PPC_FUNC_IMPL(__imp__sub_83658740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83658748;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83658754;
	sub_82D95768(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,18264
	ctx.r29.s64 = ctx.r11.s64 + 18264;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8365876C;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r7,r10,19096
	ctx.r7.s64 = ctx.r10.s64 + 19096;
	// addi r5,r8,19080
	ctx.r5.s64 = ctx.r8.s64 + 19080;
	// addi r6,r9,19084
	ctx.r6.s64 = ctx.r9.s64 + 19084;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836587B4;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836587D0;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836587E0"))) PPC_WEAK_FUNC(sub_836587E0);
PPC_FUNC_IMPL(__imp__sub_836587E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83658888
	sub_83658888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836587E8"))) PPC_WEAK_FUNC(sub_836587E8);
PPC_FUNC_IMPL(__imp__sub_836587E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83658888
	sub_83658888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836587F0"))) PPC_WEAK_FUNC(sub_836587F0);
PPC_FUNC_IMPL(__imp__sub_836587F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836587F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r8,r11,19096
	ctx.r8.s64 = ctx.r11.s64 + 19096;
	// addi r7,r10,19084
	ctx.r7.s64 = ctx.r10.s64 + 19084;
	// addi r6,r9,19080
	ctx.r6.s64 = ctx.r9.s64 + 19080;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8365883c
	if (cr6.lt) goto loc_8365883C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8365883C;
	sub_8386D088(ctx, base);
loc_8365883C:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83658868
	if (cr6.lt) goto loc_83658868;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83658868;
	sub_8386D088(ctx, base);
loc_83658868:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8365887C;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83658884"))) PPC_WEAK_FUNC(sub_83658884);
PPC_FUNC_IMPL(__imp__sub_83658884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83658888"))) PPC_WEAK_FUNC(sub_83658888);
PPC_FUNC_IMPL(__imp__sub_83658888) {
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
	// bl 0x836587f0
	ctx.lr = 0x836588A8;
	sub_836587F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836588c8
	if (cr6.eq) goto loc_836588C8;
	// bl 0x82595188
	ctx.lr = 0x836588B8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836588C8;
	sub_825952B8(ctx, base);
loc_836588C8:
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

__attribute__((alias("__imp__sub_836588E4"))) PPC_WEAK_FUNC(sub_836588E4);
PPC_FUNC_IMPL(__imp__sub_836588E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836588E8"))) PPC_WEAK_FUNC(sub_836588E8);
PPC_FUNC_IMPL(__imp__sub_836588E8) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x83658904;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,18264
	ctx.r4.s64 = ctx.r11.s64 + 18264;
	// li r5,31
	ctx.r5.s64 = 31;
	// bl 0x824208c8
	ctx.lr = 0x83658918;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// addi r6,r10,19132
	ctx.r6.s64 = ctx.r10.s64 + 19132;
	// addi r5,r9,19120
	ctx.r5.s64 = ctx.r9.s64 + 19120;
	// addi r4,r8,19116
	ctx.r4.s64 = ctx.r8.s64 + 19116;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r11,r7,19112
	ctx.r11.s64 = ctx.r7.s64 + 19112;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// bl 0x8362c7e0
	ctx.lr = 0x83658950;
	sub_8362C7E0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// stw r30,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r30.u32);
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// std r30,616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 616, ctx.r30.u64);
	// bl 0x836556d0
	ctx.lr = 0x8365897C;
	sub_836556D0(ctx, base);
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8365899C"))) PPC_WEAK_FUNC(sub_8365899C);
PPC_FUNC_IMPL(__imp__sub_8365899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836589A0"))) PPC_WEAK_FUNC(sub_836589A0);
PPC_FUNC_IMPL(__imp__sub_836589A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83658a28
	sub_83658A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836589A8"))) PPC_WEAK_FUNC(sub_836589A8);
PPC_FUNC_IMPL(__imp__sub_836589A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83658a28
	sub_83658A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836589B0"))) PPC_WEAK_FUNC(sub_836589B0);
PPC_FUNC_IMPL(__imp__sub_836589B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83658a28
	sub_83658A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836589B8"))) PPC_WEAK_FUNC(sub_836589B8);
PPC_FUNC_IMPL(__imp__sub_836589B8) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r7,r11,19132
	ctx.r7.s64 = ctx.r11.s64 + 19132;
	// addi r6,r10,19120
	ctx.r6.s64 = ctx.r10.s64 + 19120;
	// addi r5,r9,19116
	ctx.r5.s64 = ctx.r9.s64 + 19116;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,19112
	ctx.r4.s64 = ctx.r8.s64 + 19112;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,608
	ctx.r3.s64 = ctx.r3.s64 + 608;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x836557d0
	ctx.lr = 0x83658A04;
	sub_836557D0(ctx, base);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// bl 0x8362c480
	ctx.lr = 0x83658A0C;
	sub_8362C480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x83658A14;
	sub_82EAF978(ctx, base);
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

__attribute__((alias("__imp__sub_83658A28"))) PPC_WEAK_FUNC(sub_83658A28);
PPC_FUNC_IMPL(__imp__sub_83658A28) {
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
	// bl 0x836589b8
	ctx.lr = 0x83658A48;
	sub_836589B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83658a68
	if (cr6.eq) goto loc_83658A68;
	// bl 0x82595188
	ctx.lr = 0x83658A58;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83658A68;
	sub_825952B8(ctx, base);
loc_83658A68:
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

__attribute__((alias("__imp__sub_83658A84"))) PPC_WEAK_FUNC(sub_83658A84);
PPC_FUNC_IMPL(__imp__sub_83658A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83658A88"))) PPC_WEAK_FUNC(sub_83658A88);
PPC_FUNC_IMPL(__imp__sub_83658A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83658A90;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,133
	ctx.r10.s64 = 133;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x83658ad0
	if (!cr6.lt) goto loc_83658AD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83658AD0;
	sub_82E745E0(ctx, base);
loc_83658AD0:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,19292
	ctx.r27.s64 = ctx.r11.s64 + 19292;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83658B18;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83658B24;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83658b38
	if (cr6.lt) goto loc_83658B38;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83658B38;
	sub_82416268(ctx, base);
loc_83658B38:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x83658b58
	if (cr6.lt) goto loc_83658B58;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83658B58:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83658B68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83658b68
	if (!cr6.eq) goto loc_83658B68;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83658B8C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83658B98;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83658bac
	if (cr6.lt) goto loc_83658BAC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83658BAC;
	sub_82416268(ctx, base);
loc_83658BAC:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83658BD4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83658BE0;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83658bf4
	if (cr6.lt) goto loc_83658BF4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83658BF4;
	sub_82416268(ctx, base);
loc_83658BF4:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x83658C0C;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x83658C28;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83658C34;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83658c48
	if (cr6.lt) goto loc_83658C48;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83658C48;
	sub_82416268(ctx, base);
loc_83658C48:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x83658c68
	if (cr6.lt) goto loc_83658C68;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83658C68:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_83658C78:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83658c78
	if (!cr6.eq) goto loc_83658C78;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83658C9C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83658CA8;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83658cbc
	if (cr6.lt) goto loc_83658CBC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83658CBC;
	sub_82416268(ctx, base);
loc_83658CBC:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83658CE4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83658CF0;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83658d04
	if (cr6.lt) goto loc_83658D04;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83658D04;
	sub_82416268(ctx, base);
loc_83658D04:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x83658d24
	if (cr6.lt) goto loc_83658D24;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83658D24:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_83658D34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83658d34
	if (!cr6.eq) goto loc_83658D34;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83658D58;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83658D64;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83658d78
	if (cr6.lt) goto loc_83658D78;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83658D78;
	sub_82416268(ctx, base);
loc_83658D78:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83658DA0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83658DAC;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83658dc0
	if (cr6.lt) goto loc_83658DC0;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83658DC0;
	sub_82416268(ctx, base);
loc_83658DC0:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x83658DD8;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83658DE4"))) PPC_WEAK_FUNC(sub_83658DE4);
PPC_FUNC_IMPL(__imp__sub_83658DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83658DE8"))) PPC_WEAK_FUNC(sub_83658DE8);
PPC_FUNC_IMPL(__imp__sub_83658DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83658DF0;
	__savegprlr_14(ctx, base);
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r30,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r30.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x83691bb8
	ctx.lr = 0x83658E18;
	sub_83691BB8(ctx, base);
	// lwz r10,584(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// lwz r11,588(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bge cr6,0x83659d7c
	if (!cr6.lt) goto loc_83659D7C;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r16,8
	ctx.r16.s64 = 8;
	// li r17,244
	ctx.r17.s64 = 244;
	// addi r26,r11,19624
	ctx.r26.s64 = ctx.r11.s64 + 19624;
	// addi r15,r10,8980
	ctx.r15.s64 = ctx.r10.s64 + 8980;
	// addi r18,r9,9908
	ctx.r18.s64 = ctx.r9.s64 + 9908;
loc_83658E5C:
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r11,r1,1072
	ctx.r11.s64 = ctx.r1.s64 + 1072;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r19.u32 + 8);
	// ld r9,0(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,1080(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1080);
	// lwz r4,1084(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1084);
	// bl 0x82472fc0
	ctx.lr = 0x83658E8C;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-312
	ctx.r6.s64 = ctx.r26.s64 + -312;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83658EA4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83658f3c
	if (!cr6.eq) goto loc_83658F3C;
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// addi r11,r1,848
	ctx.r11.s64 = ctx.r1.s64 + 848;
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r8,16(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,860(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// lwz r5,856(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 856);
	// bl 0x82472fc0
	ctx.lr = 0x83658EE0;
	sub_82472FC0(ctx, base);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83658ef4
	if (!cr6.lt) goto loc_83658EF4;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_83658EF4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83658EF8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83658ef8
	if (!cr6.eq) goto loc_83658EF8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r14,20
	ctx.r3.s64 = ctx.r14.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83658F1C;
	sub_824208C8(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83658f30
	if (cr6.lt) goto loc_83658F30;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83658F30;
	sub_82416268(ctx, base);
loc_83658F30:
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
loc_83658F3C:
	// addi r6,r26,-304
	ctx.r6.s64 = ctx.r26.s64 + -304;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83658F54;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83658f94
	if (!cr6.eq) goto loc_83658F94;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r10,r1,1104
	ctx.r10.s64 = ctx.r1.s64 + 1104;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,1104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83658f8c
	if (!cr6.eq) goto loc_83658F8C;
	// ld r11,1112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1112);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83658f90
	goto loc_83658F90;
loc_83658F8C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83658F90:
	// stw r11,48(r14)
	PPC_STORE_U32(ctx.r14.u32 + 48, ctx.r11.u32);
loc_83658F94:
	// addi r6,r26,-296
	ctx.r6.s64 = ctx.r26.s64 + -296;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83658FAC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659044
	if (!cr6.eq) goto loc_83659044;
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// addi r11,r1,880
	ctx.r11.s64 = ctx.r1.s64 + 880;
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,892(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// lwz r5,888(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 888);
	// bl 0x82472fc0
	ctx.lr = 0x83658FE8;
	sub_82472FC0(ctx, base);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83658ffc
	if (!cr6.lt) goto loc_83658FFC;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_83658FFC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83659000:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83659000
	if (!cr6.eq) goto loc_83659000;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r14,116
	ctx.r3.s64 = ctx.r14.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83659024;
	sub_824208C8(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83659038
	if (cr6.lt) goto loc_83659038;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83659038;
	sub_82416268(ctx, base);
loc_83659038:
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
loc_83659044:
	// addi r6,r26,-288
	ctx.r6.s64 = ctx.r26.s64 + -288;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x8365905C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659bf0
	if (!cr6.eq) goto loc_83659BF0;
	// addi r24,r14,152
	ctx.r24.s64 = ctx.r14.s64 + 152;
	// stw r18,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r18.u32);
	// stw r16,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r16.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r23,r24,8
	ctx.r23.s64 = ctx.r24.s64 + 8;
	// stw r24,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r24.u32);
	// addi r22,r24,4
	ctx.r22.s64 = ctx.r24.s64 + 4;
	// stw r17,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r17.u32);
	// stw r23,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r23.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stw r22,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r22.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x83659094;
	sub_8247B7D8(ctx, base);
	// lwz r3,160(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 160);
	// stw r30,152(r14)
	PPC_STORE_U32(ctx.r14.u32 + 152, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836590b8
	if (cr6.eq) goto loc_836590B8;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x836590B0;
	sub_8247B268(ctx, base);
	// stw r30,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
loc_836590B8:
	// stw r15,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r15.u32);
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,28(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// add r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// bge cr6,0x83659bf0
	if (!cr6.lt) goto loc_83659BF0;
loc_836590D8:
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x8362c7e0
	ctx.lr = 0x836590E0;
	sub_8362C7E0(ctx, base);
	// stw r30,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r30.u32);
	// stw r30,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r5,8(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r4,12(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// bl 0x83691bb8
	ctx.lr = 0x836590FC;
	sub_83691BB8(ctx, base);
	// lwz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// lwz r11,620(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bge cr6,0x83659b34
	if (!cr6.lt) goto loc_83659B34;
loc_83659118:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r11,r1,1008
	ctx.r11.s64 = ctx.r1.s64 + 1008;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// ld r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// ld r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,1016(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1016);
	// lwz r4,1020(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1020);
	// bl 0x82472fc0
	ctx.lr = 0x83659148;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-268
	ctx.r6.s64 = ctx.r26.s64 + -268;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83659160;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836591a0
	if (!cr6.eq) goto loc_836591A0;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,688
	ctx.r10.s64 = ctx.r1.s64 + 688;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,688(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83659198
	if (!cr6.eq) goto loc_83659198;
	// ld r11,696(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 696);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8365919c
	goto loc_8365919C;
loc_83659198:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8365919C:
	// stw r11,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r11.u32);
loc_836591A0:
	// addi r6,r26,-256
	ctx.r6.s64 = ctx.r26.s64 + -256;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836591B8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659250
	if (!cr6.eq) goto loc_83659250;
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,716(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lwz r5,712(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	// bl 0x82472fc0
	ctx.lr = 0x836591F4;
	sub_82472FC0(ctx, base);
	// lwz r7,276(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83659208
	if (!cr6.lt) goto loc_83659208;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_83659208:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8365920C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8365920c
	if (!cr6.eq) goto loc_8365920C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1124
	ctx.r3.s64 = ctx.r1.s64 + 1124;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83659230;
	sub_824208C8(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83659244
	if (cr6.lt) goto loc_83659244;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83659244;
	sub_82416268(ctx, base);
loc_83659244:
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
loc_83659250:
	// addi r6,r26,-248
	ctx.r6.s64 = ctx.r26.s64 + -248;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83659268;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659300
	if (!cr6.eq) goto loc_83659300;
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// addi r11,r1,736
	ctx.r11.s64 = ctx.r1.s64 + 736;
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r30.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// ld r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r4,748(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// lwz r5,744(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 744);
	// bl 0x82472fc0
	ctx.lr = 0x836592A4;
	sub_82472FC0(ctx, base);
	// lwz r7,308(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836592b8
	if (!cr6.lt) goto loc_836592B8;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
loc_836592B8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836592BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836592bc
	if (!cr6.eq) goto loc_836592BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836592E0;
	sub_824208C8(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836592f4
	if (cr6.lt) goto loc_836592F4;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836592F4;
	sub_82416268(ctx, base);
loc_836592F4:
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r30.u8);
loc_83659300:
	// addi r6,r26,-240
	ctx.r6.s64 = ctx.r26.s64 + -240;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83659318;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836593b0
	if (!cr6.eq) goto loc_836593B0;
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// addi r11,r1,768
	ctx.r11.s64 = ctx.r1.s64 + 768;
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stb r30,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r30.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,776(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 776);
	// lwz r4,780(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// bl 0x82472fc0
	ctx.lr = 0x83659354;
	sub_82472FC0(ctx, base);
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83659368
	if (!cr6.lt) goto loc_83659368;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
loc_83659368:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8365936C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8365936c
	if (!cr6.eq) goto loc_8365936C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1180
	ctx.r3.s64 = ctx.r1.s64 + 1180;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83659390;
	sub_824208C8(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836593a4
	if (cr6.lt) goto loc_836593A4;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836593A4;
	sub_82416268(ctx, base);
loc_836593A4:
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// stb r30,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r30.u8);
loc_836593B0:
	// addi r6,r26,-232
	ctx.r6.s64 = ctx.r26.s64 + -232;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836593C8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659408
	if (!cr6.eq) goto loc_83659408;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,800
	ctx.r10.s64 = ctx.r1.s64 + 800;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,800(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83659400
	if (!cr6.eq) goto loc_83659400;
	// ld r11,808(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 808);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83659404
	goto loc_83659404;
loc_83659400:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83659404:
	// stw r11,1208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1208, ctx.r11.u32);
loc_83659408:
	// addi r6,r26,-220
	ctx.r6.s64 = ctx.r26.s64 + -220;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83659420;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659460
	if (!cr6.eq) goto loc_83659460;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,832
	ctx.r10.s64 = ctx.r1.s64 + 832;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,832(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83659458
	if (!cr6.eq) goto loc_83659458;
	// ld r11,840(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 840);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8365945c
	goto loc_8365945C;
loc_83659458:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8365945C:
	// stw r11,1212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1212, ctx.r11.u32);
loc_83659460:
	// addi r6,r26,-212
	ctx.r6.s64 = ctx.r26.s64 + -212;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83659478;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659510
	if (!cr6.eq) goto loc_83659510;
	// stw r27,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r27.u32);
	// addi r11,r1,864
	ctx.r11.s64 = ctx.r1.s64 + 864;
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stb r30,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r30.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// ld r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,872(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 872);
	// lwz r4,876(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// bl 0x82472fc0
	ctx.lr = 0x836594B4;
	sub_82472FC0(ctx, base);
	// lwz r7,436(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836594c8
	if (!cr6.lt) goto loc_836594C8;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
loc_836594C8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836594CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836594cc
	if (!cr6.eq) goto loc_836594CC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836594F0;
	sub_824208C8(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83659504
	if (cr6.lt) goto loc_83659504;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x83659504;
	sub_82416268(ctx, base);
loc_83659504:
	// stw r27,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r27.u32);
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// stb r30,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r30.u8);
loc_83659510:
	// addi r6,r26,-204
	ctx.r6.s64 = ctx.r26.s64 + -204;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83659528;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659568
	if (!cr6.eq) goto loc_83659568;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,896
	ctx.r10.s64 = ctx.r1.s64 + 896;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,896(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83659560
	if (!cr6.eq) goto loc_83659560;
	// ld r11,904(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 904);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83659564
	goto loc_83659564;
loc_83659560:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83659564:
	// stw r11,1244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1244, ctx.r11.u32);
loc_83659568:
	// addi r6,r26,-188
	ctx.r6.s64 = ctx.r26.s64 + -188;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83659580;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836595c0
	if (!cr6.eq) goto loc_836595C0;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,928
	ctx.r10.s64 = ctx.r1.s64 + 928;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,928(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836595b8
	if (!cr6.eq) goto loc_836595B8;
	// ld r11,936(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 936);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836595bc
	goto loc_836595BC;
loc_836595B8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836595BC:
	// stw r11,1248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1248, ctx.r11.u32);
loc_836595C0:
	// addi r6,r26,-172
	ctx.r6.s64 = ctx.r26.s64 + -172;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836595D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659670
	if (!cr6.eq) goto loc_83659670;
	// stw r27,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r27.u32);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// stw r30,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r30.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stb r30,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r30.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,968(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 968);
	// lwz r4,972(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 972);
	// bl 0x82472fc0
	ctx.lr = 0x83659614;
	sub_82472FC0(ctx, base);
	// lwz r7,500(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r4,480(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83659628
	if (!cr6.lt) goto loc_83659628;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
loc_83659628:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8365962C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8365962c
	if (!cr6.eq) goto loc_8365962C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1252
	ctx.r3.s64 = ctx.r1.s64 + 1252;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83659650;
	sub_824208C8(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83659664
	if (cr6.lt) goto loc_83659664;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x83659664;
	sub_82416268(ctx, base);
loc_83659664:
	// stw r27,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r27.u32);
	// stw r30,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r30.u32);
	// stb r30,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r30.u8);
loc_83659670:
	// addi r6,r26,-156
	ctx.r6.s64 = ctx.r26.s64 + -156;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83659688;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836599a8
	if (!cr6.eq) goto loc_836599A8;
	// stw r30,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r30.u32);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x836596AC;
	sub_83691BB8(ctx, base);
	// lwz r10,648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// lwz r11,652(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8365998c
	if (!cr6.lt) goto loc_8365998C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_836596D8:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// addi r11,r1,992
	ctx.r11.s64 = ctx.r1.s64 + 992;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// ld r8,-8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1000(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1000);
	// lwz r4,1004(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// bl 0x82472fc0
	ctx.lr = 0x8365970C;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-148
	ctx.r6.s64 = ctx.r26.s64 + -148;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x83659724;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836597b8
	if (!cr6.eq) goto loc_836597B8;
	// stw r27,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r27.u32);
	// addi r11,r1,1024
	ctx.r11.s64 = ctx.r1.s64 + 1024;
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stb r30,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1032(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1032);
	// lwz r4,1036(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1036);
	// bl 0x82472fc0
	ctx.lr = 0x8365975C;
	sub_82472FC0(ctx, base);
	// lwz r8,468(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83659770
	if (!cr6.lt) goto loc_83659770;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
loc_83659770:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83659774:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83659774
	if (!cr6.eq) goto loc_83659774;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83659798;
	sub_824208C8(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836597ac
	if (cr6.lt) goto loc_836597AC;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x836597AC;
	sub_82416268(ctx, base);
loc_836597AC:
	// stw r27,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r27.u32);
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// stb r30,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r30.u8);
loc_836597B8:
	// addi r6,r26,-136
	ctx.r6.s64 = ctx.r26.s64 + -136;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836597D0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659864
	if (!cr6.eq) goto loc_83659864;
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// addi r11,r1,1056
	ctx.r11.s64 = ctx.r1.s64 + 1056;
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stb r30,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1064(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1064);
	// lwz r4,1068(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1068);
	// bl 0x82472fc0
	ctx.lr = 0x83659808;
	sub_82472FC0(ctx, base);
	// lwz r8,340(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8365981c
	if (!cr6.lt) goto loc_8365981C;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_8365981C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83659820:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83659820
	if (!cr6.eq) goto loc_83659820;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1308
	ctx.r3.s64 = ctx.r1.s64 + 1308;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83659844;
	sub_824208C8(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83659858
	if (cr6.lt) goto loc_83659858;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83659858;
	sub_82416268(ctx, base);
loc_83659858:
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// stb r30,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r30.u8);
loc_83659864:
	// addi r6,r26,-120
	ctx.r6.s64 = ctx.r26.s64 + -120;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x8365987C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836598b8
	if (!cr6.eq) goto loc_836598B8;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,1088
	ctx.r10.s64 = ctx.r1.s64 + 1088;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,1088(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836598b0
	if (!cr6.eq) goto loc_836598B0;
	// ld r11,1096(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1096);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836598b4
	goto loc_836598B4;
loc_836598B0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836598B4:
	// stw r11,1336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1336, ctx.r11.u32);
loc_836598B8:
	// addi r6,r26,-104
	ctx.r6.s64 = ctx.r26.s64 + -104;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836598D0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8365990c
	if (!cr6.eq) goto loc_8365990C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,912
	ctx.r10.s64 = ctx.r1.s64 + 912;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,912(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83659904
	if (!cr6.eq) goto loc_83659904;
	// ld r11,920(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 920);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83659908
	goto loc_83659908;
loc_83659904:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83659908:
	// stw r11,1340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1340, ctx.r11.u32);
loc_8365990C:
	// addi r6,r26,-96
	ctx.r6.s64 = ctx.r26.s64 + -96;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x83659924;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659960
	if (!cr6.eq) goto loc_83659960;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,720
	ctx.r10.s64 = ctx.r1.s64 + 720;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,720(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83659958
	if (!cr6.eq) goto loc_83659958;
	// ld r11,728(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 728);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8365995c
	goto loc_8365995C;
loc_83659958:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8365995C:
	// stw r11,1344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1344, ctx.r11.u32);
loc_83659960:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83659974
	if (cr6.lt) goto loc_83659974;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83659974;
	sub_82416268(ctx, base);
loc_83659974:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// bne 0x836596d8
	if (!cr0.eq) goto loc_836596D8;
loc_8365998C:
	// lwz r31,656(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836599a8
	if (cr6.eq) goto loc_836599A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836599A0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836599A8;
	sub_82416268(ctx, base);
loc_836599A8:
	// addi r6,r26,-80
	ctx.r6.s64 = ctx.r26.s64 + -80;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836599C0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659a00
	if (!cr6.eq) goto loc_83659A00;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,672
	ctx.r10.s64 = ctx.r1.s64 + 672;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,672(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836599f8
	if (!cr6.eq) goto loc_836599F8;
	// ld r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 680);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836599fc
	goto loc_836599FC;
loc_836599F8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836599FC:
	// stw r11,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, ctx.r11.u32);
loc_83659A00:
	// addi r6,r26,-72
	ctx.r6.s64 = ctx.r26.s64 + -72;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83659A18;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659a58
	if (!cr6.eq) goto loc_83659A58;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,752
	ctx.r10.s64 = ctx.r1.s64 + 752;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,752(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83659a50
	if (!cr6.eq) goto loc_83659A50;
	// ld r11,760(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 760);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83659a54
	goto loc_83659A54;
loc_83659A50:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83659A54:
	// stw r11,1352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1352, ctx.r11.u32);
loc_83659A58:
	// addi r6,r26,-64
	ctx.r6.s64 = ctx.r26.s64 + -64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83659A70;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659ab0
	if (!cr6.eq) goto loc_83659AB0;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,944
	ctx.r10.s64 = ctx.r1.s64 + 944;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,944(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83659aa8
	if (!cr6.eq) goto loc_83659AA8;
	// ld r11,952(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 952);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83659aac
	goto loc_83659AAC;
loc_83659AA8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83659AAC:
	// stw r11,1356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1356, ctx.r11.u32);
loc_83659AB0:
	// addi r6,r26,-56
	ctx.r6.s64 = ctx.r26.s64 + -56;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83659AC8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659b08
	if (!cr6.eq) goto loc_83659B08;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,784
	ctx.r10.s64 = ctx.r1.s64 + 784;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,784(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83659b00
	if (!cr6.eq) goto loc_83659B00;
	// ld r11,792(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 792);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83659b04
	goto loc_83659B04;
loc_83659B00:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83659B04:
	// stw r11,1360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1360, ctx.r11.u32);
loc_83659B08:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83659b1c
	if (cr6.lt) goto loc_83659B1C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x83659B1C;
	sub_82416268(ctx, base);
loc_83659B1C:
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// blt cr6,0x83659118
	if (cr6.lt) goto loc_83659118;
loc_83659B34:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83659b94
	if (cr6.lt) goto loc_83659B94;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x83659b84
	if (!cr6.gt) goto loc_83659B84;
	// stw r23,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r23.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r24,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r24.u32);
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// stw r22,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r22.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r16,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r16.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r17,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r17.u32);
	// stw r18,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// bl 0x8247b270
	ctx.lr = 0x83659B7C;
	sub_8247B270(ctx, base);
	// stw r15,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r15.u32);
	// b 0x83659b88
	goto loc_83659B88;
loc_83659B84:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83659B88:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83659bbc
	if (cr6.eq) goto loc_83659BBC;
loc_83659B94:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mulli r10,r10,244
	ctx.r10.s64 = ctx.r10.s64 * 244;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83659bb0
	if (cr0.eq) goto loc_83659BB0;
	// addi r4,r1,1120
	ctx.r4.s64 = ctx.r1.s64 + 1120;
	// bl 0x8362c6c0
	ctx.lr = 0x83659BB0;
	sub_8362C6C0(ctx, base);
loc_83659BB0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_83659BBC:
	// lwz r31,624(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83659bd8
	if (cr6.eq) goto loc_83659BD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83659BD0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83659BD8;
	sub_82416268(ctx, base);
loc_83659BD8:
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x8362c480
	ctx.lr = 0x83659BE0;
	sub_8362C480(ctx, base);
	// addi r21,r21,16
	ctx.r21.s64 = ctx.r21.s64 + 16;
	// cmplw cr6,r21,r20
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r20.u32, xer);
	// blt cr6,0x836590d8
	if (cr6.lt) goto loc_836590D8;
	// lwz r31,188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
loc_83659BF0:
	// addi r6,r26,-44
	ctx.r6.s64 = ctx.r26.s64 + -44;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83659C08;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659c48
	if (!cr6.eq) goto loc_83659C48;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,1040
	ctx.r10.s64 = ctx.r1.s64 + 1040;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1040(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1040);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83659c40
	if (!cr6.eq) goto loc_83659C40;
	// ld r11,1048(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1048);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83659c44
	goto loc_83659C44;
loc_83659C40:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83659C44:
	// stw r11,168(r14)
	PPC_STORE_U32(ctx.r14.u32 + 168, ctx.r11.u32);
loc_83659C48:
	// addi r6,r26,-20
	ctx.r6.s64 = ctx.r26.s64 + -20;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,18
	ctx.r7.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83659C60;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659ca0
	if (!cr6.eq) goto loc_83659CA0;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,816
	ctx.r10.s64 = ctx.r1.s64 + 816;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,816(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83659c98
	if (!cr6.eq) goto loc_83659C98;
	// ld r11,824(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 824);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83659c9c
	goto loc_83659C9C;
loc_83659C98:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83659C9C:
	// stw r11,172(r14)
	PPC_STORE_U32(ctx.r14.u32 + 172, ctx.r11.u32);
loc_83659CA0:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83659CB8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83659d50
	if (!cr6.eq) goto loc_83659D50;
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// addi r11,r1,976
	ctx.r11.s64 = ctx.r1.s64 + 976;
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r30,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r30.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,984(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 984);
	// lwz r4,988(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 988);
	// bl 0x82472fc0
	ctx.lr = 0x83659CF4;
	sub_82472FC0(ctx, base);
	// lwz r7,404(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83659d08
	if (!cr6.lt) goto loc_83659D08;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
loc_83659D08:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83659D0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83659d0c
	if (!cr6.eq) goto loc_83659D0C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r14,176
	ctx.r3.s64 = ctx.r14.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83659D30;
	sub_824208C8(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83659d44
	if (cr6.lt) goto loc_83659D44;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x83659D44;
	sub_82416268(ctx, base);
loc_83659D44:
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// stb r30,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r30.u8);
loc_83659D50:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83659d64
	if (cr6.lt) goto loc_83659D64;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x83659D64;
	sub_82416268(ctx, base);
loc_83659D64:
	// addi r19,r19,32
	ctx.r19.s64 = ctx.r19.s64 + 32;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplw cr6,r19,r31
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r31.u32, xer);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// blt cr6,0x83658e5c
	if (cr6.lt) goto loc_83658E5C;
loc_83659D7C:
	// lwz r31,592(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83659d98
	if (cr6.eq) goto loc_83659D98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83659D90;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83659D98;
	sub_82416268(ctx, base);
loc_83659D98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83659DA4"))) PPC_WEAK_FUNC(sub_83659DA4);
PPC_FUNC_IMPL(__imp__sub_83659DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83659DA8"))) PPC_WEAK_FUNC(sub_83659DA8);
PPC_FUNC_IMPL(__imp__sub_83659DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83659DB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83659DBC;
	sub_82D95768(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,19200
	ctx.r29.s64 = ctx.r11.s64 + 19200;
	// li r5,26
	ctx.r5.s64 = 26;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x83659DD4;
	sub_824208C8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r7,r10,19736
	ctx.r7.s64 = ctx.r10.s64 + 19736;
	// addi r5,r8,19720
	ctx.r5.s64 = ctx.r8.s64 + 19720;
	// addi r6,r9,19724
	ctx.r6.s64 = ctx.r9.s64 + 19724;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83659E1C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83659E38;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83659E48"))) PPC_WEAK_FUNC(sub_83659E48);
PPC_FUNC_IMPL(__imp__sub_83659E48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83659ef0
	sub_83659EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83659E50"))) PPC_WEAK_FUNC(sub_83659E50);
PPC_FUNC_IMPL(__imp__sub_83659E50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83659ef0
	sub_83659EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83659E58"))) PPC_WEAK_FUNC(sub_83659E58);
PPC_FUNC_IMPL(__imp__sub_83659E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83659E60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r8,r11,19736
	ctx.r8.s64 = ctx.r11.s64 + 19736;
	// addi r7,r10,19724
	ctx.r7.s64 = ctx.r10.s64 + 19724;
	// addi r6,r9,19720
	ctx.r6.s64 = ctx.r9.s64 + 19720;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83659ea4
	if (cr6.lt) goto loc_83659EA4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83659EA4;
	sub_8386D088(ctx, base);
loc_83659EA4:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83659ed0
	if (cr6.lt) goto loc_83659ED0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83659ED0;
	sub_8386D088(ctx, base);
loc_83659ED0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x83659EE4;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83659EEC"))) PPC_WEAK_FUNC(sub_83659EEC);
PPC_FUNC_IMPL(__imp__sub_83659EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

