#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83704A10"))) PPC_WEAK_FUNC(sub_83704A10);
PPC_FUNC_IMPL(__imp__sub_83704A10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83704a20
	sub_83704A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83704A18"))) PPC_WEAK_FUNC(sub_83704A18);
PPC_FUNC_IMPL(__imp__sub_83704A18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83704a20
	sub_83704A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83704A20"))) PPC_WEAK_FUNC(sub_83704A20);
PPC_FUNC_IMPL(__imp__sub_83704A20) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-29228
	ctx.r7.s64 = ctx.r11.s64 + -29228;
	// addi r6,r10,-29240
	ctx.r6.s64 = ctx.r10.s64 + -29240;
	// addi r5,r9,-29244
	ctx.r5.s64 = ctx.r9.s64 + -29244;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-29248
	ctx.r4.s64 = ctx.r8.s64 + -29248;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x83703690
	ctx.lr = 0x83704A74;
	sub_83703690(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x83704A7C;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83704a9c
	if (cr6.eq) goto loc_83704A9C;
	// bl 0x82595188
	ctx.lr = 0x83704A8C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83704A9C;
	sub_825952B8(ctx, base);
loc_83704A9C:
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

__attribute__((alias("__imp__sub_83704AB8"))) PPC_WEAK_FUNC(sub_83704AB8);
PPC_FUNC_IMPL(__imp__sub_83704AB8) {
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
	// ble cr6,0x83704b24
	if (!cr6.gt) goto loc_83704B24;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,-28836
	ctx.r8.s64 = ctx.r10.s64 + -28836;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,56
	ctx.r6.s64 = 56;
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
	ctx.lr = 0x83704B14;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83704B24:
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

__attribute__((alias("__imp__sub_83704B38"))) PPC_WEAK_FUNC(sub_83704B38);
PPC_FUNC_IMPL(__imp__sub_83704B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83704B40;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-28836
	ctx.r10.s64 = ctx.r11.s64 + -28836;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,56
	ctx.r8.s64 = 56;
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
	ctx.lr = 0x83704B84;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x83704bac
	if (cr6.eq) goto loc_83704BAC;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x83704BA4;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_83704BAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83704BB4"))) PPC_WEAK_FUNC(sub_83704BB4);
PPC_FUNC_IMPL(__imp__sub_83704BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83704BB8"))) PPC_WEAK_FUNC(sub_83704BB8);
PPC_FUNC_IMPL(__imp__sub_83704BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83704BC0;
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
	ctx.lr = 0x83704BF0;
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
	ctx.lr = 0x83704C10;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83704C1C"))) PPC_WEAK_FUNC(sub_83704C1C);
PPC_FUNC_IMPL(__imp__sub_83704C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83704C20"))) PPC_WEAK_FUNC(sub_83704C20);
PPC_FUNC_IMPL(__imp__sub_83704C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83704c34
	if (cr6.eq) goto loc_83704C34;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x83704bb8
	sub_83704BB8(ctx, base);
	return;
loc_83704C34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83704C3C"))) PPC_WEAK_FUNC(sub_83704C3C);
PPC_FUNC_IMPL(__imp__sub_83704C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83704C40"))) PPC_WEAK_FUNC(sub_83704C40);
PPC_FUNC_IMPL(__imp__sub_83704C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83704C48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r4,28
	ctx.r30.s64 = ctx.r4.s64 + 28;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83704c68
	if (cr6.lt) goto loc_83704C68;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83704C68;
	sub_8386D088(ctx, base);
loc_83704C68:
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
	// blt cr6,0x83704c90
	if (cr6.lt) goto loc_83704C90;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83704C90;
	sub_8386D088(ctx, base);
loc_83704C90:
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

__attribute__((alias("__imp__sub_83704CA4"))) PPC_WEAK_FUNC(sub_83704CA4);
PPC_FUNC_IMPL(__imp__sub_83704CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83704CA8"))) PPC_WEAK_FUNC(sub_83704CA8);
PPC_FUNC_IMPL(__imp__sub_83704CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83704CB0;
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
	ctx.lr = 0x83704CD4;
	sub_82420558(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82420558
	ctx.lr = 0x83704CE8;
	sub_82420558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83704CF0"))) PPC_WEAK_FUNC(sub_83704CF0);
PPC_FUNC_IMPL(__imp__sub_83704CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83704CF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,136
	ctx.r11.s64 = 136;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x83704d38
	if (!cr6.lt) goto loc_83704D38;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83704D38;
	sub_82E745E0(ctx, base);
loc_83704D38:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-28984
	ctx.r27.s64 = ctx.r11.s64 + -28984;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r27,-64
	ctx.r4.s64 = ctx.r27.s64 + -64;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83704D80;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83704D8C;
	sub_82E74C08(ctx, base);
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83704da0
	if (cr6.lt) goto loc_83704DA0;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83704DA0;
	sub_82416268(ctx, base);
loc_83704DA0:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x83704dc0
	if (cr6.lt) goto loc_83704DC0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83704DC0:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
loc_83704DD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83704dd0
	if (!cr6.eq) goto loc_83704DD0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83704DF4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83704E00;
	sub_82E74C08(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83704e14
	if (cr6.lt) goto loc_83704E14;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x83704E14;
	sub_82416268(ctx, base);
loc_83704E14:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// addi r4,r27,-56
	ctx.r4.s64 = ctx.r27.s64 + -56;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83704E3C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83704E48;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83704e5c
	if (cr6.lt) goto loc_83704E5C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83704E5C;
	sub_82416268(ctx, base);
loc_83704E5C:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x83704E74;
	sub_82E746C0(ctx, base);
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// addi r4,r27,-48
	ctx.r4.s64 = ctx.r27.s64 + -48;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82472fc0
	ctx.lr = 0x83704E90;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83704E9C;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83704eb0
	if (cr6.lt) goto loc_83704EB0;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x83704EB0;
	sub_82416268(ctx, base);
loc_83704EB0:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x83704ed0
	if (cr6.lt) goto loc_83704ED0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83704ED0:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_83704EE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83704ee0
	if (!cr6.eq) goto loc_83704EE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83704F04;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83704F10;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83704f24
	if (cr6.lt) goto loc_83704F24;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83704F24;
	sub_82416268(ctx, base);
loc_83704F24:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83704F4C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83704F58;
	sub_82E74C08(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83704f6c
	if (cr6.lt) goto loc_83704F6C;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x83704F6C;
	sub_82416268(ctx, base);
loc_83704F6C:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// blt cr6,0x83704f8c
	if (cr6.lt) goto loc_83704F8C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83704F8C:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_83704F9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83704f9c
	if (!cr6.eq) goto loc_83704F9C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83704FC0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83704FCC;
	sub_82E74C08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83704fe0
	if (cr6.lt) goto loc_83704FE0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83704FE0;
	sub_82416268(ctx, base);
loc_83704FE0:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83705008;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83705014;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83705028
	if (cr6.lt) goto loc_83705028;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83705028;
	sub_82416268(ctx, base);
loc_83705028:
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// addi r4,r28,172
	ctx.r4.s64 = ctx.r28.s64 + 172;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x83705048
	if (cr6.lt) goto loc_83705048;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83705048:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83705058:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83705058
	if (!cr6.eq) goto loc_83705058;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370507C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83705088;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370509c
	if (cr6.lt) goto loc_8370509C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8370509C;
	sub_82416268(ctx, base);
loc_8370509C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x837050C4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837050D0;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837050e4
	if (cr6.lt) goto loc_837050E4;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x837050E4;
	sub_82416268(ctx, base);
loc_837050E4:
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// addi r4,r28,200
	ctx.r4.s64 = ctx.r28.s64 + 200;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x83705104
	if (cr6.lt) goto loc_83705104;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83705104:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_83705114:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83705114
	if (!cr6.eq) goto loc_83705114;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83705138;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83705144;
	sub_82E74C08(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83705158
	if (cr6.lt) goto loc_83705158;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83705158;
	sub_82416268(ctx, base);
loc_83705158:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83705180;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370518C;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837051a0
	if (cr6.lt) goto loc_837051A0;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x837051A0;
	sub_82416268(ctx, base);
loc_837051A0:
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// addi r4,r28,228
	ctx.r4.s64 = ctx.r28.s64 + 228;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// blt cr6,0x837051c0
	if (cr6.lt) goto loc_837051C0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837051C0:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
loc_837051D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837051d0
	if (!cr6.eq) goto loc_837051D0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x837051F4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83705200;
	sub_82E74C08(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83705214
	if (cr6.lt) goto loc_83705214;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x83705214;
	sub_82416268(ctx, base);
loc_83705214:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370523C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83705248;
	sub_82E74C08(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370525c
	if (cr6.lt) goto loc_8370525C;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x8370525C;
	sub_82416268(ctx, base);
loc_8370525C:
	// lwz r11,276(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 276);
	// addi r4,r28,256
	ctx.r4.s64 = ctx.r28.s64 + 256;
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// blt cr6,0x8370527c
	if (cr6.lt) goto loc_8370527C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370527C:
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
loc_8370528C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370528c
	if (!cr6.eq) goto loc_8370528C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x837052B0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837052BC;
	sub_82E74C08(ctx, base);
	// lwz r10,564(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837052d0
	if (cr6.lt) goto loc_837052D0;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x837052D0;
	sub_82416268(ctx, base);
loc_837052D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837052DC"))) PPC_WEAK_FUNC(sub_837052DC);
PPC_FUNC_IMPL(__imp__sub_837052DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837052E0"))) PPC_WEAK_FUNC(sub_837052E0);
PPC_FUNC_IMPL(__imp__sub_837052E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x837052E8;
	__savegprlr_14(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x83691bb8
	ctx.lr = 0x83705310;
	sub_83691BB8(ctx, base);
	// lwz r10,472(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x837059e0
	if (!cr6.lt) goto loc_837059E0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r22,r11,16
	ctx.r22.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r7,11
	ctx.r7.s64 = 720896;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r18,8
	ctx.r18.s64 = 8;
	// li r19,56
	ctx.r19.s64 = 56;
	// ori r15,r7,1
	ctx.r15.u64 = ctx.r7.u64 | 1;
	// addi r20,r11,-28924
	ctx.r20.s64 = ctx.r11.s64 + -28924;
	// addi r16,r10,27936
	ctx.r16.s64 = ctx.r10.s64 + 27936;
	// addi r17,r9,8980
	ctx.r17.s64 = ctx.r9.s64 + 8980;
	// addi r21,r8,-28836
	ctx.r21.s64 = ctx.r8.s64 + -28836;
loc_83705374:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r11,r1,576
	ctx.r11.s64 = ctx.r1.s64 + 576;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r10,r22,-16
	ctx.r10.s64 = ctx.r22.s64 + -16;
	// ld r9,-8(r22)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r22.u32 + -8);
	// ld r8,-16(r22)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r22.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,584(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// lwz r4,588(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// bl 0x82472fc0
	ctx.lr = 0x837053A8;
	sub_82472FC0(ctx, base);
	// addi r6,r20,-48
	ctx.r6.s64 = ctx.r20.s64 + -48;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x837053C0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83705454
	if (!cr6.eq) goto loc_83705454;
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// ld r9,8(r22)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// ld r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,552(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r4,556(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// bl 0x82472fc0
	ctx.lr = 0x837053F8;
	sub_82472FC0(ctx, base);
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8370540c
	if (!cr6.lt) goto loc_8370540C;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_8370540C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83705410:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83705410
	if (!cr6.eq) goto loc_83705410;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r14,20
	ctx.r3.s64 = ctx.r14.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83705434;
	sub_824208C8(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83705448
	if (cr6.lt) goto loc_83705448;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83705448;
	sub_82416268(ctx, base);
loc_83705448:
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_83705454:
	// addi r6,r20,-40
	ctx.r6.s64 = ctx.r20.s64 + -40;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x8370546C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837054a8
	if (!cr6.eq) goto loc_837054A8;
	// ld r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// ld r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,512(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x837054a0
	if (!cr6.eq) goto loc_837054A0;
	// ld r11,520(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 520);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x837054a4
	goto loc_837054A4;
loc_837054A0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_837054A4:
	// stw r11,48(r14)
	PPC_STORE_U32(ctx.r14.u32 + 48, ctx.r11.u32);
loc_837054A8:
	// addi r6,r20,-32
	ctx.r6.s64 = ctx.r20.s64 + -32;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x837054C0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83705554
	if (!cr6.eq) goto loc_83705554;
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// addi r11,r1,528
	ctx.r11.s64 = ctx.r1.s64 + 528;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// ld r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// ld r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,536(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// lwz r4,540(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// bl 0x82472fc0
	ctx.lr = 0x837054F8;
	sub_82472FC0(ctx, base);
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8370550c
	if (!cr6.lt) goto loc_8370550C;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_8370550C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83705510:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83705510
	if (!cr6.eq) goto loc_83705510;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r14,116
	ctx.r3.s64 = ctx.r14.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83705534;
	sub_824208C8(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83705548
	if (cr6.lt) goto loc_83705548;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83705548;
	sub_82416268(ctx, base);
loc_83705548:
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_83705554:
	// addi r6,r20,-24
	ctx.r6.s64 = ctx.r20.s64 + -24;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x8370556C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837055bc
	if (!cr6.eq) goto loc_837055BC;
	// ld r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// ld r9,8(r22)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,448(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x837055a0
	if (!cr6.eq) goto loc_837055A0;
	// ld r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x837055b8
	goto loc_837055B8;
loc_837055A0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x837055b4
	if (!cr6.eq) goto loc_837055B4;
	// ld r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x837055b8
	goto loc_837055B8;
loc_837055B4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_837055B8:
	// stw r11,148(r14)
	PPC_STORE_U32(ctx.r14.u32 + 148, ctx.r11.u32);
loc_837055BC:
	// addi r6,r20,-16
	ctx.r6.s64 = ctx.r20.s64 + -16;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x837055D4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837059ac
	if (!cr6.eq) goto loc_837059AC;
	// addi r27,r14,152
	ctx.r27.s64 = ctx.r14.s64 + 152;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// stw r18,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r18.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r26,r27,8
	ctx.r26.s64 = ctx.r27.s64 + 8;
	// stw r27,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r27.u32);
	// addi r24,r27,4
	ctx.r24.s64 = ctx.r27.s64 + 4;
	// stw r19,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r19.u32);
	// stw r26,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r26.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r24,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r24.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x8370560C;
	sub_8247B7D8(ctx, base);
	// lwz r3,160(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 160);
	// stw r31,152(r14)
	PPC_STORE_U32(ctx.r14.u32 + 152, ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8370562c
	if (cr6.eq) goto loc_8370562C;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x8247b268
	ctx.lr = 0x83705624;
	sub_8247B268(ctx, base);
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_8370562C:
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x837059ac
	if (!cr6.lt) goto loc_837059AC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r25,r11,12
	ctx.r25.s64 = ctx.r11.s64 + 12;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
loc_8370565C:
	// stw r29,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r29.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x824208c8
	ctx.lr = 0x83705678;
	sub_824208C8(ctx, base);
	// stw r29,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r29.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stb r31,316(r1)
	PPC_STORE_U8(ctx.r1.u32 + 316, ctx.r31.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// bl 0x824208c8
	ctx.lr = 0x83705694;
	sub_824208C8(ctx, base);
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r5,-4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// bl 0x83691bb8
	ctx.lr = 0x837056B0;
	sub_83691BB8(ctx, base);
	// lwz r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r30,428(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bge cr6,0x83705884
	if (!cr6.lt) goto loc_83705884;
loc_837056C8:
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r11,r1,560
	ctx.r11.s64 = ctx.r1.s64 + 560;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,568(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// lwz r4,572(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// bl 0x82472fc0
	ctx.lr = 0x837056F8;
	sub_82472FC0(ctx, base);
	// addi r6,r20,-8
	ctx.r6.s64 = ctx.r20.s64 + -8;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83705710;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837057a8
	if (!cr6.eq) goto loc_837057A8;
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// ld r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// ld r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,600(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 600);
	// lwz r4,604(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// bl 0x82472fc0
	ctx.lr = 0x8370574C;
	sub_82472FC0(ctx, base);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83705760
	if (!cr6.lt) goto loc_83705760;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_83705760:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83705764:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83705764
	if (!cr6.eq) goto loc_83705764;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83705788;
	sub_824208C8(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370579c
	if (cr6.lt) goto loc_8370579C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8370579C;
	sub_82416268(ctx, base);
loc_8370579C:
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_837057A8:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x837057C0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83705858
	if (!cr6.eq) goto loc_83705858;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// ld r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// ld r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,504(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r4,508(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// bl 0x82472fc0
	ctx.lr = 0x837057FC;
	sub_82472FC0(ctx, base);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83705810
	if (!cr6.lt) goto loc_83705810;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_83705810:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83705814:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83705814
	if (!cr6.eq) goto loc_83705814;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83705838;
	sub_824208C8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370584c
	if (cr6.lt) goto loc_8370584C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8370584C;
	sub_82416268(ctx, base);
loc_8370584C:
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83705858:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370586c
	if (cr6.lt) goto loc_8370586C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8370586C;
	sub_82416268(ctx, base);
loc_8370586C:
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x837056c8
	if (cr6.lt) goto loc_837056C8;
loc_83705884:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x837058e0
	if (cr6.lt) goto loc_837058E0;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x837058d0
	if (!cr6.gt) goto loc_837058D0;
	// stw r26,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r26.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r27,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r27.u32);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// stw r24,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r24.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r18,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r18.u32);
	// stw r19,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r19.u32);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// bl 0x8247b270
	ctx.lr = 0x837058C8;
	sub_8247B270(ctx, base);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// b 0x837058d4
	goto loc_837058D4;
loc_837058D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_837058D4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83705944
	if (cr6.eq) goto loc_83705944;
loc_837058E0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mulli r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 * 56;
	// add. r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83705938
	if (cr0.eq) goto loc_83705938;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
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
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82420558
	ctx.lr = 0x83705918;
	sub_82420558(ctx, base);
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// stb r31,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r31.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,316
	ctx.r4.s64 = ctx.r1.s64 + 316;
	// bl 0x82420558
	ctx.lr = 0x83705938;
	sub_82420558(ctx, base);
loc_83705938:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_83705944:
	// lwz r30,432(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83705960
	if (cr6.eq) goto loc_83705960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83705958;
	sub_839E56B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x83705960;
	sub_82416268(ctx, base);
loc_83705960:
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83705974
	if (cr6.lt) goto loc_83705974;
	// lwz r3,316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x8386d088
	ctx.lr = 0x83705974;
	sub_8386D088(ctx, base);
loc_83705974:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r29,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r29.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,316(r1)
	PPC_STORE_U8(ctx.r1.u32 + 316, ctx.r31.u8);
	// blt cr6,0x83705994
	if (cr6.lt) goto loc_83705994;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x8386d088
	ctx.lr = 0x83705994;
	sub_8386D088(ctx, base);
loc_83705994:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// stw r29,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r29.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bne 0x8370565c
	if (!cr0.eq) goto loc_8370565C;
loc_837059AC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837059c0
	if (cr6.lt) goto loc_837059C0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x837059C0;
	sub_82416268(ctx, base);
loc_837059C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r22,r22,32
	ctx.r22.s64 = ctx.r22.s64 + 32;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x83705374
	if (!cr0.eq) goto loc_83705374;
loc_837059E0:
	// lwz r31,480(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837059fc
	if (cr6.eq) goto loc_837059FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x837059F4;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x837059FC;
	sub_82416268(ctx, base);
loc_837059FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83705A08"))) PPC_WEAK_FUNC(sub_83705A08);
PPC_FUNC_IMPL(__imp__sub_83705A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83705A10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83705A1C;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-29160
	ctx.r29.s64 = ctx.r11.s64 + -29160;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x83705A34;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-28804
	ctx.r7.s64 = ctx.r10.s64 + -28804;
	// addi r5,r8,-28820
	ctx.r5.s64 = ctx.r8.s64 + -28820;
	// addi r6,r9,-28816
	ctx.r6.s64 = ctx.r9.s64 + -28816;
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
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83705A7C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83705A98;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83705AB4;
	sub_824208C8(ctx, base);
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stb r30,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r30.u8);
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83705AD0;
	sub_824208C8(ctx, base);
	// stw r28,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r28.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// stb r30,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r30.u8);
	// addi r4,r29,80
	ctx.r4.s64 = ctx.r29.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83705AEC;
	sub_824208C8(ctx, base);
	// stw r28,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r28.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// stb r30,456(r31)
	PPC_STORE_U8(ctx.r31.u32 + 456, ctx.r30.u8);
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83705B08;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83705B14"))) PPC_WEAK_FUNC(sub_83705B14);
PPC_FUNC_IMPL(__imp__sub_83705B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83705B18"))) PPC_WEAK_FUNC(sub_83705B18);
PPC_FUNC_IMPL(__imp__sub_83705B18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83705c50
	sub_83705C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83705B20"))) PPC_WEAK_FUNC(sub_83705B20);
PPC_FUNC_IMPL(__imp__sub_83705B20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83705c50
	sub_83705C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83705B28"))) PPC_WEAK_FUNC(sub_83705B28);
PPC_FUNC_IMPL(__imp__sub_83705B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83705B30;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-28804
	ctx.r8.s64 = ctx.r11.s64 + -28804;
	// addi r7,r10,-28816
	ctx.r7.s64 = ctx.r10.s64 + -28816;
	// addi r6,r9,-28820
	ctx.r6.s64 = ctx.r9.s64 + -28820;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,456
	ctx.r29.s64 = ctx.r3.s64 + 456;
	// lwz r5,476(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83705b74
	if (cr6.lt) goto loc_83705B74;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83705B74;
	sub_8386D088(ctx, base);
loc_83705B74:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r28,r30,428
	ctx.r28.s64 = ctx.r30.s64 + 428;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83705ba0
	if (cr6.lt) goto loc_83705BA0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83705BA0;
	sub_8386D088(ctx, base);
loc_83705BA0:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,400
	ctx.r29.s64 = ctx.r30.s64 + 400;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83705bc4
	if (cr6.lt) goto loc_83705BC4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83705BC4;
	sub_8386D088(ctx, base);
loc_83705BC4:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,372
	ctx.r28.s64 = ctx.r30.s64 + 372;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83705be8
	if (cr6.lt) goto loc_83705BE8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83705BE8;
	sub_8386D088(ctx, base);
loc_83705BE8:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,344
	ctx.r29.s64 = ctx.r30.s64 + 344;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83705c0c
	if (cr6.lt) goto loc_83705C0C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83705C0C;
	sub_8386D088(ctx, base);
loc_83705C0C:
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
	// blt cr6,0x83705c30
	if (cr6.lt) goto loc_83705C30;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83705C30;
	sub_8386D088(ctx, base);
loc_83705C30:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x83705C44;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83705C4C"))) PPC_WEAK_FUNC(sub_83705C4C);
PPC_FUNC_IMPL(__imp__sub_83705C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83705C50"))) PPC_WEAK_FUNC(sub_83705C50);
PPC_FUNC_IMPL(__imp__sub_83705C50) {
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
	// bl 0x83705b28
	ctx.lr = 0x83705C70;
	sub_83705B28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83705c90
	if (cr6.eq) goto loc_83705C90;
	// bl 0x82595188
	ctx.lr = 0x83705C80;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83705C90;
	sub_825952B8(ctx, base);
loc_83705C90:
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

__attribute__((alias("__imp__sub_83705CAC"))) PPC_WEAK_FUNC(sub_83705CAC);
PPC_FUNC_IMPL(__imp__sub_83705CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83705CB0"))) PPC_WEAK_FUNC(sub_83705CB0);
PPC_FUNC_IMPL(__imp__sub_83705CB0) {
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
	ctx.lr = 0x83705CC8;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-29160
	ctx.r4.s64 = ctx.r11.s64 + -29160;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x824208c8
	ctx.lr = 0x83705CDC;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// addi r6,r10,-28768
	ctx.r6.s64 = ctx.r10.s64 + -28768;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,-28784
	ctx.r4.s64 = ctx.r8.s64 + -28784;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r5,r9,-28780
	ctx.r5.s64 = ctx.r9.s64 + -28780;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// addi r10,r7,-28788
	ctx.r10.s64 = ctx.r7.s64 + -28788;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// li r4,60
	ctx.r4.s64 = 60;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// bl 0x83704ab8
	ctx.lr = 0x83705D2C;
	sub_83704AB8(ctx, base);
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

__attribute__((alias("__imp__sub_83705D44"))) PPC_WEAK_FUNC(sub_83705D44);
PPC_FUNC_IMPL(__imp__sub_83705D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83705D48"))) PPC_WEAK_FUNC(sub_83705D48);
PPC_FUNC_IMPL(__imp__sub_83705D48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83705d60
	sub_83705D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83705D50"))) PPC_WEAK_FUNC(sub_83705D50);
PPC_FUNC_IMPL(__imp__sub_83705D50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83705d60
	sub_83705D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83705D58"))) PPC_WEAK_FUNC(sub_83705D58);
PPC_FUNC_IMPL(__imp__sub_83705D58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83705d60
	sub_83705D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83705D60"))) PPC_WEAK_FUNC(sub_83705D60);
PPC_FUNC_IMPL(__imp__sub_83705D60) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-28768
	ctx.r7.s64 = ctx.r11.s64 + -28768;
	// addi r6,r10,-28780
	ctx.r6.s64 = ctx.r10.s64 + -28780;
	// addi r5,r9,-28784
	ctx.r5.s64 = ctx.r9.s64 + -28784;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-28788
	ctx.r4.s64 = ctx.r8.s64 + -28788;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x83704b38
	ctx.lr = 0x83705DB4;
	sub_83704B38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x83705DBC;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83705ddc
	if (cr6.eq) goto loc_83705DDC;
	// bl 0x82595188
	ctx.lr = 0x83705DCC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83705DDC;
	sub_825952B8(ctx, base);
loc_83705DDC:
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

__attribute__((alias("__imp__sub_83705DF8"))) PPC_WEAK_FUNC(sub_83705DF8);
PPC_FUNC_IMPL(__imp__sub_83705DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83705E00;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,132
	ctx.r11.s64 = 132;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x83705e40
	if (!cr6.lt) goto loc_83705E40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83705E40;
	sub_82E745E0(ctx, base);
loc_83705E40:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-28624
	ctx.r27.s64 = ctx.r11.s64 + -28624;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83705E88;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83705E94;
	sub_82E74C08(ctx, base);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83705ea8
	if (cr6.lt) goto loc_83705EA8;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83705EA8;
	sub_82416268(ctx, base);
loc_83705EA8:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x83705ec8
	if (cr6.lt) goto loc_83705EC8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83705EC8:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_83705ED8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83705ed8
	if (!cr6.eq) goto loc_83705ED8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83705EFC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83705F08;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83705f1c
	if (cr6.lt) goto loc_83705F1C;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83705F1C;
	sub_82416268(ctx, base);
loc_83705F1C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83705F44;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83705F50;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83705f64
	if (cr6.lt) goto loc_83705F64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83705F64;
	sub_82416268(ctx, base);
loc_83705F64:
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
	ctx.lr = 0x83705F7C;
	sub_82E746C0(ctx, base);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82472fc0
	ctx.lr = 0x83705F98;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83705FA4;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83705fb8
	if (cr6.lt) goto loc_83705FB8;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83705FB8;
	sub_82416268(ctx, base);
loc_83705FB8:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x83705fd8
	if (cr6.lt) goto loc_83705FD8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83705FD8:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83705FE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83705fe8
	if (!cr6.eq) goto loc_83705FE8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370600C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83706018;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370602c
	if (cr6.lt) goto loc_8370602C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8370602C;
	sub_82416268(ctx, base);
loc_8370602C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83706054;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83706060;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83706074
	if (cr6.lt) goto loc_83706074;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83706074;
	sub_82416268(ctx, base);
loc_83706074:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x83706094
	if (cr6.lt) goto loc_83706094;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83706094:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_837060A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837060a4
	if (!cr6.eq) goto loc_837060A4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x837060C8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x837060D4;
	sub_82E74C08(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837060e8
	if (cr6.lt) goto loc_837060E8;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x837060E8;
	sub_82416268(ctx, base);
loc_837060E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837060F4"))) PPC_WEAK_FUNC(sub_837060F4);
PPC_FUNC_IMPL(__imp__sub_837060F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837060F8"))) PPC_WEAK_FUNC(sub_837060F8);
PPC_FUNC_IMPL(__imp__sub_837060F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83706100;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83691bb8
	ctx.lr = 0x83706128;
	sub_83691BB8(ctx, base);
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83706458
	if (!cr6.lt) goto loc_83706458;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-28592
	ctx.r26.s64 = ctx.r11.s64 + -28592;
loc_83706160:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// ld r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + -8);
	// ld r8,-16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,344(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x82472fc0
	ctx.lr = 0x83706194;
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
	ctx.lr = 0x837061AC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83706240
	if (!cr6.eq) goto loc_83706240;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r4,300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x82472fc0
	ctx.lr = 0x837061E4;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x837061f8
	if (!cr6.lt) goto loc_837061F8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_837061F8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837061FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837061fc
	if (!cr6.eq) goto loc_837061FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83706220;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83706234
	if (cr6.lt) goto loc_83706234;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x83706234;
	sub_82416268(ctx, base);
loc_83706234:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_83706240:
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
	ctx.lr = 0x83706258;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83706294
	if (!cr6.eq) goto loc_83706294;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8370628c
	if (!cr6.eq) goto loc_8370628C;
	// ld r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83706290
	goto loc_83706290;
loc_8370628C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83706290:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_83706294:
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
	ctx.lr = 0x837062AC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83706340
	if (!cr6.eq) goto loc_83706340;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x82472fc0
	ctx.lr = 0x837062E4;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x837062f8
	if (!cr6.lt) goto loc_837062F8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_837062F8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837062FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837062fc
	if (!cr6.eq) goto loc_837062FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83706320;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83706334
	if (cr6.lt) goto loc_83706334;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x83706334;
	sub_82416268(ctx, base);
loc_83706334:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_83706340:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83706358;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370642c
	if (!cr6.eq) goto loc_8370642C;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x82472fc0
	ctx.lr = 0x83706390;
	sub_82472FC0(ctx, base);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x837063a4
	if (!cr6.lt) goto loc_837063A4;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_837063A4:
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
loc_837063B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837063b4
	if (!cr6.eq) goto loc_837063B4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x837063D8;
	sub_824208C8(ctx, base);
	// addi r5,r28,145
	ctx.r5.s64 = ctx.r28.s64 + 145;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r6,164(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r3,r28,-200
	ctx.r3.s64 = ctx.r28.s64 + -200;
	// bl 0x83354a28
	ctx.lr = 0x837063EC;
	sub_83354A28(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83706400
	if (cr6.lt) goto loc_83706400;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8386d088
	ctx.lr = 0x83706400;
	sub_8386D088(ctx, base);
loc_83706400:
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
	// blt cr6,0x83706420
	if (cr6.lt) goto loc_83706420;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x83706420;
	sub_82416268(ctx, base);
loc_83706420:
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
loc_8370642C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83706440
	if (cr6.lt) goto loc_83706440;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x83706440;
	sub_82416268(ctx, base);
loc_83706440:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bne 0x83706160
	if (!cr0.eq) goto loc_83706160;
loc_83706458:
	// lwz r31,256(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83706474
	if (cr6.eq) goto loc_83706474;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8370646C;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83706474;
	sub_82416268(ctx, base);
loc_83706474:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83706480"))) PPC_WEAK_FUNC(sub_83706480);
PPC_FUNC_IMPL(__imp__sub_83706480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83706488;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83706494;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r30,r11,-28704
	ctx.r30.s64 = ctx.r11.s64 + -28704;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824208c8
	ctx.lr = 0x837064AC;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-28476
	ctx.r7.s64 = ctx.r10.s64 + -28476;
	// addi r5,r8,-28492
	ctx.r5.s64 = ctx.r8.s64 + -28492;
	// addi r6,r9,-28488
	ctx.r6.s64 = ctx.r9.s64 + -28488;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r29,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r29.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// stb r29,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r29.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837064F4;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r29,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r29.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r29,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r29.u8);
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83706510;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370651C"))) PPC_WEAK_FUNC(sub_8370651C);
PPC_FUNC_IMPL(__imp__sub_8370651C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83706520"))) PPC_WEAK_FUNC(sub_83706520);
PPC_FUNC_IMPL(__imp__sub_83706520) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x837065c8
	sub_837065C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83706528"))) PPC_WEAK_FUNC(sub_83706528);
PPC_FUNC_IMPL(__imp__sub_83706528) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x837065c8
	sub_837065C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83706530"))) PPC_WEAK_FUNC(sub_83706530);
PPC_FUNC_IMPL(__imp__sub_83706530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83706538;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-28476
	ctx.r8.s64 = ctx.r11.s64 + -28476;
	// addi r7,r10,-28488
	ctx.r7.s64 = ctx.r10.s64 + -28488;
	// addi r6,r9,-28492
	ctx.r6.s64 = ctx.r9.s64 + -28492;
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
	// blt cr6,0x8370657c
	if (cr6.lt) goto loc_8370657C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370657C;
	sub_8386D088(ctx, base);
loc_8370657C:
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
	// blt cr6,0x837065a8
	if (cr6.lt) goto loc_837065A8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837065A8;
	sub_8386D088(ctx, base);
loc_837065A8:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x837065BC;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837065C4"))) PPC_WEAK_FUNC(sub_837065C4);
PPC_FUNC_IMPL(__imp__sub_837065C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837065C8"))) PPC_WEAK_FUNC(sub_837065C8);
PPC_FUNC_IMPL(__imp__sub_837065C8) {
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
	// bl 0x83706530
	ctx.lr = 0x837065E8;
	sub_83706530(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83706608
	if (cr6.eq) goto loc_83706608;
	// bl 0x82595188
	ctx.lr = 0x837065F8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83706608;
	sub_825952B8(ctx, base);
loc_83706608:
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

__attribute__((alias("__imp__sub_83706624"))) PPC_WEAK_FUNC(sub_83706624);
PPC_FUNC_IMPL(__imp__sub_83706624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83706628"))) PPC_WEAK_FUNC(sub_83706628);
PPC_FUNC_IMPL(__imp__sub_83706628) {
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
	ctx.lr = 0x83706640;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-28704
	ctx.r4.s64 = ctx.r11.s64 + -28704;
	// li r5,21
	ctx.r5.s64 = 21;
	// bl 0x824208c8
	ctx.lr = 0x83706654;
	sub_824208C8(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r5,r9,-28436
	ctx.r5.s64 = ctx.r9.s64 + -28436;
	// addi r4,r8,-28440
	ctx.r4.s64 = ctx.r8.s64 + -28440;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r6,r10,-28456
	ctx.r6.s64 = ctx.r10.s64 + -28456;
	// addi r11,r7,-28460
	ctx.r11.s64 = ctx.r7.s64 + -28460;
	// addi r3,r31,345
	ctx.r3.s64 = ctx.r31.s64 + 345;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83706694;
	sub_831CDCF0(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_837066B4"))) PPC_WEAK_FUNC(sub_837066B4);
PPC_FUNC_IMPL(__imp__sub_837066B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837066B8"))) PPC_WEAK_FUNC(sub_837066B8);
PPC_FUNC_IMPL(__imp__sub_837066B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x837066d0
	sub_837066D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837066C0"))) PPC_WEAK_FUNC(sub_837066C0);
PPC_FUNC_IMPL(__imp__sub_837066C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x837066d0
	sub_837066D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837066C8"))) PPC_WEAK_FUNC(sub_837066C8);
PPC_FUNC_IMPL(__imp__sub_837066C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x837066d0
	sub_837066D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837066D0"))) PPC_WEAK_FUNC(sub_837066D0);
PPC_FUNC_IMPL(__imp__sub_837066D0) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-28456
	ctx.r7.s64 = ctx.r11.s64 + -28456;
	// addi r6,r10,-28436
	ctx.r6.s64 = ctx.r10.s64 + -28436;
	// addi r5,r9,-28440
	ctx.r5.s64 = ctx.r9.s64 + -28440;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-28460
	ctx.r4.s64 = ctx.r8.s64 + -28460;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x83706720;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83706740
	if (cr6.eq) goto loc_83706740;
	// bl 0x82595188
	ctx.lr = 0x83706730;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83706740;
	sub_825952B8(ctx, base);
loc_83706740:
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

__attribute__((alias("__imp__sub_8370675C"))) PPC_WEAK_FUNC(sub_8370675C);
PPC_FUNC_IMPL(__imp__sub_8370675C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83706760"))) PPC_WEAK_FUNC(sub_83706760);
PPC_FUNC_IMPL(__imp__sub_83706760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83706768;
	__savegprlr_24(ctx, base);
	// stwu r1,-1568(r1)
	ea = -1568 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,222
	ctx.r11.s64 = 222;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// sth r10,85(r1)
	PPC_STORE_U16(ctx.r1.u32 + 85, ctx.r10.u16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82e74660
	ctx.lr = 0x837067A0;
	sub_82E74660(ctx, base);
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r31.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r30,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r30.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r31,720(r1)
	PPC_STORE_U8(ctx.r1.u32 + 720, ctx.r31.u8);
	// addi r25,r11,-27888
	ctx.r25.s64 = ctx.r11.s64 + -27888;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// addi r4,r25,-288
	ctx.r4.s64 = ctx.r25.s64 + -288;
	// bl 0x82472fc0
	ctx.lr = 0x837067C8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837067D4;
	sub_82E74C08(ctx, base);
	// lwz r9,740(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x837067e8
	if (cr6.lt) goto loc_837067E8;
	// lwz r3,720(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// bl 0x82416268
	ctx.lr = 0x837067E8;
	sub_82416268(ctx, base);
loc_837067E8:
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// addi r4,r26,20
	ctx.r4.s64 = ctx.r26.s64 + 20;
	// stw r30,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r30.u32);
	// stw r31,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,720(r1)
	PPC_STORE_U8(ctx.r1.u32 + 720, ctx.r31.u8);
	// blt cr6,0x83706808
	if (cr6.lt) goto loc_83706808;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83706808:
	// stw r30,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r31.u32);
	// stb r31,976(r1)
	PPC_STORE_U8(ctx.r1.u32 + 976, ctx.r31.u8);
loc_83706818:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83706818
	if (!cr6.eq) goto loc_83706818;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370683C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,976
	ctx.r4.s64 = ctx.r1.s64 + 976;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83706848;
	sub_82E74C08(ctx, base);
	// lwz r10,996(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370685c
	if (cr6.lt) goto loc_8370685C;
	// lwz r3,976(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// bl 0x82416268
	ctx.lr = 0x8370685C;
	sub_82416268(ctx, base);
loc_8370685C:
	// stw r30,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r30.u32);
	// addi r4,r25,-280
	ctx.r4.s64 = ctx.r25.s64 + -280;
	// stw r31,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,976(r1)
	PPC_STORE_U8(ctx.r1.u32 + 976, ctx.r31.u8);
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// stw r30,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r30.u32);
	// stw r31,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r31.u32);
	// stb r31,1072(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1072, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83706884;
	sub_82472FC0(ctx, base);
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83706890;
	sub_82E74C08(ctx, base);
	// lwz r11,1092(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1092);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837068a4
	if (cr6.lt) goto loc_837068A4;
	// lwz r3,1072(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1072);
	// bl 0x82416268
	ctx.lr = 0x837068A4;
	sub_82416268(ctx, base);
loc_837068A4:
	// stw r30,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r30.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r31,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r31.u32);
	// stb r31,1072(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1072, ctx.r31.u8);
	// lwz r4,48(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x837068BC;
	sub_82E746C0(ctx, base);
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// addi r4,r25,-272
	ctx.r4.s64 = ctx.r25.s64 + -272;
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82472fc0
	ctx.lr = 0x837068D8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837068E4;
	sub_82E74C08(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837068f8
	if (cr6.lt) goto loc_837068F8;
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82416268
	ctx.lr = 0x837068F8;
	sub_82416268(ctx, base);
loc_837068F8:
	// lwz r11,136(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// addi r4,r26,116
	ctx.r4.s64 = ctx.r26.s64 + 116;
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// blt cr6,0x83706918
	if (cr6.lt) goto loc_83706918;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83706918:
	// stw r30,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r31.u32);
	// stb r31,912(r1)
	PPC_STORE_U8(ctx.r1.u32 + 912, ctx.r31.u8);
loc_83706928:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83706928
	if (!cr6.eq) goto loc_83706928;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370694C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,912
	ctx.r4.s64 = ctx.r1.s64 + 912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83706958;
	sub_82E74C08(ctx, base);
	// lwz r10,932(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370696c
	if (cr6.lt) goto loc_8370696C;
	// lwz r3,912(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	// bl 0x82416268
	ctx.lr = 0x8370696C;
	sub_82416268(ctx, base);
loc_8370696C:
	// stw r30,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r30.u32);
	// addi r4,r25,-264
	ctx.r4.s64 = ctx.r25.s64 + -264;
	// stw r31,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,912(r1)
	PPC_STORE_U8(ctx.r1.u32 + 912, ctx.r31.u8);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r30,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r30.u32);
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83706994;
	sub_82472FC0(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837069A0;
	sub_82E74C08(ctx, base);
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837069b4
	if (cr6.lt) goto loc_837069B4;
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82416268
	ctx.lr = 0x837069B4;
	sub_82416268(ctx, base);
loc_837069B4:
	// lwz r11,164(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// addi r4,r26,144
	ctx.r4.s64 = ctx.r26.s64 + 144;
	// stw r30,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r30.u32);
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
	// blt cr6,0x837069d4
	if (cr6.lt) goto loc_837069D4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837069D4:
	// stw r30,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r31.u32);
	// stb r31,1136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1136, ctx.r31.u8);
loc_837069E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837069e4
	if (!cr6.eq) goto loc_837069E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83706A08;
	sub_82472FC0(ctx, base);
	// addi r4,r1,1136
	ctx.r4.s64 = ctx.r1.s64 + 1136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83706A14;
	sub_82E74C08(ctx, base);
	// lwz r10,1156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83706a28
	if (cr6.lt) goto loc_83706A28;
	// lwz r3,1136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1136);
	// bl 0x82416268
	ctx.lr = 0x83706A28;
	sub_82416268(ctx, base);
loc_83706A28:
	// stw r30,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r30.u32);
	// addi r4,r25,-256
	ctx.r4.s64 = ctx.r25.s64 + -256;
	// stw r31,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,1136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1136, ctx.r31.u8);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stw r30,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r30.u32);
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83706A50;
	sub_82472FC0(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83706A5C;
	sub_82E74C08(ctx, base);
	// lwz r11,484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83706a70
	if (cr6.lt) goto loc_83706A70;
	// lwz r3,464(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x82416268
	ctx.lr = 0x83706A70;
	sub_82416268(ctx, base);
loc_83706A70:
	// lwz r11,192(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 192);
	// addi r4,r26,172
	ctx.r4.s64 = ctx.r26.s64 + 172;
	// stw r30,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r30.u32);
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// blt cr6,0x83706a90
	if (cr6.lt) goto loc_83706A90;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83706A90:
	// stw r30,1220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1220, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,1216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1216, ctx.r31.u32);
	// stb r31,1200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1200, ctx.r31.u8);
loc_83706AA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83706aa0
	if (!cr6.eq) goto loc_83706AA0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83706AC4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,1200
	ctx.r4.s64 = ctx.r1.s64 + 1200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83706AD0;
	sub_82E74C08(ctx, base);
	// lwz r10,1220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1220);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83706ae4
	if (cr6.lt) goto loc_83706AE4;
	// lwz r3,1200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	// bl 0x82416268
	ctx.lr = 0x83706AE4;
	sub_82416268(ctx, base);
loc_83706AE4:
	// stw r30,1220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1220, ctx.r30.u32);
	// addi r4,r25,-244
	ctx.r4.s64 = ctx.r25.s64 + -244;
	// stw r31,1216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1216, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,1200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1200, ctx.r31.u8);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r30,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r30.u32);
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83706B0C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83706B18;
	sub_82E74C08(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83706b2c
	if (cr6.lt) goto loc_83706B2C;
	// lwz r3,528(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x82416268
	ctx.lr = 0x83706B2C;
	sub_82416268(ctx, base);
loc_83706B2C:
	// stw r30,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r30.u32);
	// addi r29,r26,-200
	ctx.r29.s64 = ctx.r26.s64 + -200;
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// addi r6,r1,1232
	ctx.r6.s64 = ctx.r1.s64 + 1232;
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
	// addi r4,r26,200
	ctx.r4.s64 = ctx.r26.s64 + 200;
	// stw r30,1252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1252, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,1248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1248, ctx.r31.u32);
	// stb r31,1232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1232, ctx.r31.u8);
	// lwz r5,216(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 216);
	// bl 0x83354d50
	ctx.lr = 0x83706B5C;
	sub_83354D50(ctx, base);
	// lwz r11,1252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1252);
	// lwz r4,1232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1232);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83706b70
	if (!cr6.lt) goto loc_83706B70;
	// addi r4,r1,1232
	ctx.r4.s64 = ctx.r1.s64 + 1232;
loc_83706B70:
	// stw r30,1124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1124, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r31.u32);
	// stb r31,1104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1104, ctx.r31.u8);
loc_83706B80:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83706b80
	if (!cr6.eq) goto loc_83706B80;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83706BA4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,1104
	ctx.r4.s64 = ctx.r1.s64 + 1104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83706BB0;
	sub_82E74C08(ctx, base);
	// lwz r10,1124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1124);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83706bc4
	if (cr6.lt) goto loc_83706BC4;
	// lwz r3,1104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// bl 0x82416268
	ctx.lr = 0x83706BC4;
	sub_82416268(ctx, base);
loc_83706BC4:
	// stw r30,1124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1124, ctx.r30.u32);
	// addi r4,r25,-236
	ctx.r4.s64 = ctx.r25.s64 + -236;
	// stw r31,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,1104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1104, ctx.r31.u8);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stw r30,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r30.u32);
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// stb r31,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83706BEC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83706BF8;
	sub_82E74C08(ctx, base);
	// lwz r11,612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83706c0c
	if (cr6.lt) goto loc_83706C0C;
	// lwz r3,592(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// bl 0x82416268
	ctx.lr = 0x83706C0C;
	sub_82416268(ctx, base);
loc_83706C0C:
	// lwz r11,240(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// addi r4,r26,220
	ctx.r4.s64 = ctx.r26.s64 + 220;
	// stw r30,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r30.u32);
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r31.u8);
	// blt cr6,0x83706c2c
	if (cr6.lt) goto loc_83706C2C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83706C2C:
	// stw r30,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r31.u32);
	// stb r31,1040(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1040, ctx.r31.u8);
loc_83706C3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83706c3c
	if (!cr6.eq) goto loc_83706C3C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83706C60;
	sub_82472FC0(ctx, base);
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83706C6C;
	sub_82E74C08(ctx, base);
	// lwz r10,1060(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83706c80
	if (cr6.lt) goto loc_83706C80;
	// lwz r3,1040(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1040);
	// bl 0x82416268
	ctx.lr = 0x83706C80;
	sub_82416268(ctx, base);
loc_83706C80:
	// stw r30,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r30.u32);
	// addi r4,r25,-224
	ctx.r4.s64 = ctx.r25.s64 + -224;
	// stw r31,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r31.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r31,1040(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1040, ctx.r31.u8);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// stw r30,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r30.u32);
	// stw r31,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r31.u32);
	// stb r31,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83706CA8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83706CB4;
	sub_82E74C08(ctx, base);
	// lwz r11,676(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83706cc8
	if (cr6.lt) goto loc_83706CC8;
	// lwz r3,656(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// bl 0x82416268
	ctx.lr = 0x83706CC8;
	sub_82416268(ctx, base);
loc_83706CC8:
	// lwz r11,268(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 268);
	// addi r4,r26,248
	ctx.r4.s64 = ctx.r26.s64 + 248;
	// stw r30,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r30.u32);
	// stw r31,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r31.u8);
	// blt cr6,0x83706ce8
	if (cr6.lt) goto loc_83706CE8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83706CE8:
	// stw r30,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r31.u32);
	// stb r31,1168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1168, ctx.r31.u8);
loc_83706CF8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83706cf8
	if (!cr6.eq) goto loc_83706CF8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83706D1C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,1168
	ctx.r4.s64 = ctx.r1.s64 + 1168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83706D28;
	sub_82E74C08(ctx, base);
	// lwz r10,1188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1188);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83706d3c
	if (cr6.lt) goto loc_83706D3C;
	// lwz r3,1168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1168);
	// bl 0x82416268
	ctx.lr = 0x83706D3C;
	sub_82416268(ctx, base);
loc_83706D3C:
	// stw r30,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r30.u32);
	// addi r4,r25,-216
	ctx.r4.s64 = ctx.r25.s64 + -216;
	// stw r31,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r31.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r31,1168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1168, ctx.r31.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83706D64;
	sub_82472FC0(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83706D70;
	sub_82E74C08(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83706d84
	if (cr6.lt) goto loc_83706D84;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x83706D84;
	sub_82416268(ctx, base);
loc_83706D84:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x83706D98;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r9,130
	ctx.r9.s64 = 130;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r27,8192
	ctx.r27.s64 = 8192;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r4,r25,-208
	ctx.r4.s64 = ctx.r25.s64 + -208;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r30,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r30.u32);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// stw r31,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r31.u32);
	// stb r31,944(r1)
	PPC_STORE_U8(ctx.r1.u32 + 944, ctx.r31.u8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x82472fc0
	ctx.lr = 0x83706DF0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,944
	ctx.r4.s64 = ctx.r1.s64 + 944;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83706DFC;
	sub_82E74C08(ctx, base);
	// lwz r10,964(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 964);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83706e10
	if (cr6.lt) goto loc_83706E10;
	// lwz r3,944(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	// bl 0x82416268
	ctx.lr = 0x83706E10;
	sub_82416268(ctx, base);
loc_83706E10:
	// stw r30,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r30.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r31,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r31.u32);
	// addi r4,r26,276
	ctx.r4.s64 = ctx.r26.s64 + 276;
	// stb r31,944(r1)
	PPC_STORE_U8(ctx.r1.u32 + 944, ctx.r31.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// lwz r5,292(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 292);
	// bl 0x83354d50
	ctx.lr = 0x83706E3C;
	sub_83354D50(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83706e50
	if (!cr6.lt) goto loc_83706E50;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_83706E50:
	// stw r30,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r31.u32);
	// stb r31,784(r1)
	PPC_STORE_U8(ctx.r1.u32 + 784, ctx.r31.u8);
loc_83706E60:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83706e60
	if (!cr6.eq) goto loc_83706E60;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83706E84;
	sub_82472FC0(ctx, base);
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83706E90;
	sub_82E74C08(ctx, base);
	// lwz r10,804(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83706ea4
	if (cr6.lt) goto loc_83706EA4;
	// lwz r3,784(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// bl 0x82416268
	ctx.lr = 0x83706EA4;
	sub_82416268(ctx, base);
loc_83706EA4:
	// stw r30,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r30.u32);
	// addi r4,r25,-196
	ctx.r4.s64 = ctx.r25.s64 + -196;
	// stw r31,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r31,784(r1)
	PPC_STORE_U8(ctx.r1.u32 + 784, ctx.r31.u8);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// stw r30,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, ctx.r30.u32);
	// stw r31,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r31.u32);
	// stb r31,1008(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1008, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83706ECC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,1008
	ctx.r4.s64 = ctx.r1.s64 + 1008;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83706ED8;
	sub_82E74C08(ctx, base);
	// lwz r11,1028(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1028);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83706eec
	if (cr6.lt) goto loc_83706EEC;
	// lwz r3,1008(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1008);
	// bl 0x82416268
	ctx.lr = 0x83706EEC;
	sub_82416268(ctx, base);
loc_83706EEC:
	// stw r30,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, ctx.r30.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stw r31,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r31.u32);
	// addi r4,r26,296
	ctx.r4.s64 = ctx.r26.s64 + 296;
	// stb r31,1008(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1008, ctx.r31.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// lwz r5,312(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 312);
	// bl 0x83354d50
	ctx.lr = 0x83706F18;
	sub_83354D50(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83706f2c
	if (!cr6.lt) goto loc_83706F2C;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_83706F2C:
	// stw r30,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r31.u32);
	// stb r31,848(r1)
	PPC_STORE_U8(ctx.r1.u32 + 848, ctx.r31.u8);
loc_83706F3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83706f3c
	if (!cr6.eq) goto loc_83706F3C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83706F60;
	sub_82472FC0(ctx, base);
	// addi r4,r1,848
	ctx.r4.s64 = ctx.r1.s64 + 848;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83706F6C;
	sub_82E74C08(ctx, base);
	// lwz r10,868(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83706f80
	if (cr6.lt) goto loc_83706F80;
	// lwz r3,848(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// bl 0x82416268
	ctx.lr = 0x83706F80;
	sub_82416268(ctx, base);
loc_83706F80:
	// stw r30,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r30.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r31,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r31.u32);
	// stb r31,848(r1)
	PPC_STORE_U8(ctx.r1.u32 + 848, ctx.r31.u8);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82e74890
	ctx.lr = 0x83706F98;
	sub_82E74890(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// lwz r28,132(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bge cr6,0x83706fc0
	if (!cr6.lt) goto loc_83706FC0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83706FC0;
	sub_82E745E0(ctx, base);
loc_83706FC0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x83706FD8;
	sub_831CE980(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r25,-184
	ctx.r4.s64 = ctx.r25.s64 + -184;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83707000;
	sub_82472FC0(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370700C;
	sub_82E74C08(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83707020
	if (cr6.lt) goto loc_83707020;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x83707020;
	sub_82416268(ctx, base);
loc_83707020:
	// lwz r11,336(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 336);
	// addi r4,r26,316
	ctx.r4.s64 = ctx.r26.s64 + 316;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// blt cr6,0x83707040
	if (cr6.lt) goto loc_83707040;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83707040:
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
loc_83707050:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83707050
	if (!cr6.eq) goto loc_83707050;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83707074;
	sub_82472FC0(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83707080;
	sub_82E74C08(ctx, base);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83707094
	if (cr6.lt) goto loc_83707094;
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82416268
	ctx.lr = 0x83707094;
	sub_82416268(ctx, base);
loc_83707094:
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// addi r4,r25,-176
	ctx.r4.s64 = ctx.r25.s64 + -176;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// li r5,17
	ctx.r5.s64 = 17;
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
	// bl 0x82472fc0
	ctx.lr = 0x837070BC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837070C8;
	sub_82E74C08(ctx, base);
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837070dc
	if (cr6.lt) goto loc_837070DC;
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82416268
	ctx.lr = 0x837070DC;
	sub_82416268(ctx, base);
loc_837070DC:
	// lwz r11,364(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 364);
	// addi r4,r26,344
	ctx.r4.s64 = ctx.r26.s64 + 344;
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// blt cr6,0x837070fc
	if (cr6.lt) goto loc_837070FC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837070FC:
	// stw r30,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
loc_8370710C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370710c
	if (!cr6.eq) goto loc_8370710C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83707130;
	sub_82472FC0(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370713C;
	sub_82E74C08(ctx, base);
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83707150
	if (cr6.lt) goto loc_83707150;
	// lwz r3,432(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x82416268
	ctx.lr = 0x83707150;
	sub_82416268(ctx, base);
loc_83707150:
	// stw r30,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r30.u32);
	// addi r4,r25,-156
	ctx.r4.s64 = ctx.r25.s64 + -156;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
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
	// bl 0x82472fc0
	ctx.lr = 0x83707178;
	sub_82472FC0(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83707184;
	sub_82E74C08(ctx, base);
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707198
	if (cr6.lt) goto loc_83707198;
	// lwz r3,496(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x82416268
	ctx.lr = 0x83707198;
	sub_82416268(ctx, base);
loc_83707198:
	// lwz r11,392(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 392);
	// addi r4,r26,372
	ctx.r4.s64 = ctx.r26.s64 + 372;
	// stw r30,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r30.u32);
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
	// blt cr6,0x837071b8
	if (cr6.lt) goto loc_837071B8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837071B8:
	// stw r30,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
loc_837071C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837071c8
	if (!cr6.eq) goto loc_837071C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x837071EC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837071F8;
	sub_82E74C08(ctx, base);
	// lwz r10,580(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370720c
	if (cr6.lt) goto loc_8370720C;
	// lwz r3,560(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x82416268
	ctx.lr = 0x8370720C;
	sub_82416268(ctx, base);
loc_8370720C:
	// stw r30,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r30.u32);
	// addi r4,r25,-140
	ctx.r4.s64 = ctx.r25.s64 + -140;
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stw r30,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r30.u32);
	// stw r31,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r31.u32);
	// stb r31,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83707234;
	sub_82472FC0(ctx, base);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83707240;
	sub_82E74C08(ctx, base);
	// lwz r11,644(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707254
	if (cr6.lt) goto loc_83707254;
	// lwz r3,624(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// bl 0x82416268
	ctx.lr = 0x83707254;
	sub_82416268(ctx, base);
loc_83707254:
	// lwz r10,420(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 420);
	// addi r11,r26,400
	ctx.r11.s64 = ctx.r26.s64 + 400;
	// stw r30,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r30.u32);
	// stw r31,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r31,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r31.u8);
	// blt cr6,0x83707274
	if (cr6.lt) goto loc_83707274;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83707274:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82475d40
	ctx.lr = 0x83707280;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370728C;
	sub_82E74C08(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824707c8
	ctx.lr = 0x83707294;
	sub_824707C8(ctx, base);
	// addi r4,r25,-128
	ctx.r4.s64 = ctx.r25.s64 + -128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82475d40
	ctx.lr = 0x837072A0;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837072AC;
	sub_82E74C08(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824707c8
	ctx.lr = 0x837072B4;
	sub_824707C8(ctx, base);
	// lwz r10,448(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 448);
	// addi r11,r26,428
	ctx.r11.s64 = ctx.r26.s64 + 428;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837072c8
	if (cr6.lt) goto loc_837072C8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837072C8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82475d40
	ctx.lr = 0x837072D4;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837072E0;
	sub_82E74C08(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824707c8
	ctx.lr = 0x837072E8;
	sub_824707C8(ctx, base);
	// addi r4,r25,-112
	ctx.r4.s64 = ctx.r25.s64 + -112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82475d40
	ctx.lr = 0x837072F4;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83707300;
	sub_82E74C08(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824707c8
	ctx.lr = 0x83707308;
	sub_824707C8(ctx, base);
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x831d2bf8
	ctx.lr = 0x83707310;
	sub_831D2BF8(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82e74ac8
	ctx.lr = 0x83707330;
	sub_82E74AC8(ctx, base);
	// addi r4,r25,-104
	ctx.r4.s64 = ctx.r25.s64 + -104;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82475d40
	ctx.lr = 0x8370733C;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e74c08
	ctx.lr = 0x83707348;
	sub_82E74C08(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824707c8
	ctx.lr = 0x83707350;
	sub_824707C8(ctx, base);
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x831d2bf8
	ctx.lr = 0x83707358;
	sub_831D2BF8(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82e74ac8
	ctx.lr = 0x83707378;
	sub_82E74AC8(ctx, base);
	// addi r4,r25,-96
	ctx.r4.s64 = ctx.r25.s64 + -96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82475d40
	ctx.lr = 0x83707384;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83707390;
	sub_82E74C08(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824707c8
	ctx.lr = 0x83707398;
	sub_824707C8(ctx, base);
	// lwz r9,476(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 476);
	// addi r11,r26,456
	ctx.r11.s64 = ctx.r26.s64 + 456;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x837073ac
	if (cr6.lt) goto loc_837073AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837073AC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82475d40
	ctx.lr = 0x837073B8;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x837073C4;
	sub_82E74C08(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824707c8
	ctx.lr = 0x837073CC;
	sub_824707C8(ctx, base);
	// addi r4,r25,-88
	ctx.r4.s64 = ctx.r25.s64 + -88;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82475d40
	ctx.lr = 0x837073D8;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x837073E4;
	sub_82E74C08(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824707c8
	ctx.lr = 0x837073EC;
	sub_824707C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,484(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 484);
	// bl 0x82e97d90
	ctx.lr = 0x837073F8;
	sub_82E97D90(ctx, base);
	// addi r4,r25,-80
	ctx.r4.s64 = ctx.r25.s64 + -80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82475d40
	ctx.lr = 0x83707404;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83707410;
	sub_82E74C08(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824707c8
	ctx.lr = 0x83707418;
	sub_824707C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,488(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 488);
	// addi r28,r26,488
	ctx.r28.s64 = ctx.r26.s64 + 488;
	// bl 0x82e749f8
	ctx.lr = 0x83707428;
	sub_82E749F8(ctx, base);
	// lwz r10,488(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 488);
	// lwz r11,496(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 496);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r29,r11
	ctx.r29.s64 = ctx.r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x8370746c
	if (cr6.eq) goto loc_8370746C;
loc_83707444:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82e97d90
	ctx.lr = 0x83707450;
	sub_82E97D90(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// bne cr6,0x83707444
	if (!cr6.eq) goto loc_83707444;
loc_8370746C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82e74890
	ctx.lr = 0x83707478;
	sub_82E74890(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82e74b98
	ctx.lr = 0x83707488;
	sub_82E74B98(ctx, base);
	// addi r4,r25,-72
	ctx.r4.s64 = ctx.r25.s64 + -72;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82475d40
	ctx.lr = 0x83707494;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e74c08
	ctx.lr = 0x837074A0;
	sub_82E74C08(ctx, base);
	// lwz r11,1476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1476);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837074b4
	if (cr6.lt) goto loc_837074B4;
	// lwz r3,1456(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1456);
	// bl 0x82416268
	ctx.lr = 0x837074B4;
	sub_82416268(ctx, base);
loc_837074B4:
	// stw r30,1476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1476, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,1472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1472, ctx.r31.u32);
	// addi r28,r26,504
	ctx.r28.s64 = ctx.r26.s64 + 504;
	// stb r31,1456(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1456, ctx.r31.u8);
	// lwz r4,504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 504);
	// bl 0x82e749f8
	ctx.lr = 0x837074D0;
	sub_82E749F8(ctx, base);
	// lwz r11,504(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 504);
	// lwz r10,512(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 512);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x83707514
	if (cr6.eq) goto loc_83707514;
loc_837074EC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82e97d90
	ctx.lr = 0x837074F8;
	sub_82E97D90(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// bne cr6,0x837074ec
	if (!cr6.eq) goto loc_837074EC;
loc_83707514:
	// stw r30,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r30.u32);
	// addi r4,r25,-68
	ctx.r4.s64 = ctx.r25.s64 + -68;
	// stw r31,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, ctx.r31.u8);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82472fc0
	ctx.lr = 0x83707530;
	sub_82472FC0(ctx, base);
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e74c08
	ctx.lr = 0x8370753C;
	sub_82E74C08(ctx, base);
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707550
	if (cr6.lt) goto loc_83707550;
	// lwz r3,688(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// bl 0x82416268
	ctx.lr = 0x83707550;
	sub_82416268(ctx, base);
loc_83707550:
	// stw r30,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r31.u32);
	// addi r28,r26,520
	ctx.r28.s64 = ctx.r26.s64 + 520;
	// stb r31,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, ctx.r31.u8);
	// lwz r4,520(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 520);
	// bl 0x82e749f8
	ctx.lr = 0x8370756C;
	sub_82E749F8(ctx, base);
	// lwz r11,520(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 520);
	// lwz r10,528(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 528);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x837075b0
	if (cr6.eq) goto loc_837075B0;
loc_83707588:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82e97d90
	ctx.lr = 0x83707594;
	sub_82E97D90(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// bne cr6,0x83707588
	if (!cr6.eq) goto loc_83707588;
loc_837075B0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82e74890
	ctx.lr = 0x837075BC;
	sub_82E74890(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bge cr6,0x837075e4
	if (!cr6.lt) goto loc_837075E4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e745e0
	ctx.lr = 0x837075E4;
	sub_82E745E0(ctx, base);
loc_837075E4:
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x837075FC;
	sub_831CE980(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r25,-56
	ctx.r4.s64 = ctx.r25.s64 + -56;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// stw r30,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r30.u32);
	// stw r31,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r31.u32);
	// stb r31,752(r1)
	PPC_STORE_U8(ctx.r1.u32 + 752, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83707624;
	sub_82472FC0(ctx, base);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83707630;
	sub_82E74C08(ctx, base);
	// lwz r10,772(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83707644
	if (cr6.lt) goto loc_83707644;
	// lwz r3,752(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// bl 0x82416268
	ctx.lr = 0x83707644;
	sub_82416268(ctx, base);
loc_83707644:
	// lwz r11,556(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 556);
	// addi r4,r26,536
	ctx.r4.s64 = ctx.r26.s64 + 536;
	// stw r30,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r30.u32);
	// stw r31,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,752(r1)
	PPC_STORE_U8(ctx.r1.u32 + 752, ctx.r31.u8);
	// blt cr6,0x83707664
	if (cr6.lt) goto loc_83707664;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83707664:
	// stw r30,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r31.u32);
	// stb r31,816(r1)
	PPC_STORE_U8(ctx.r1.u32 + 816, ctx.r31.u8);
loc_83707674:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83707674
	if (!cr6.eq) goto loc_83707674;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83707698;
	sub_82472FC0(ctx, base);
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837076A4;
	sub_82E74C08(ctx, base);
	// lwz r10,836(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837076b8
	if (cr6.lt) goto loc_837076B8;
	// lwz r3,816(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// bl 0x82416268
	ctx.lr = 0x837076B8;
	sub_82416268(ctx, base);
loc_837076B8:
	// stw r30,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r30.u32);
	// addi r4,r25,-36
	ctx.r4.s64 = ctx.r25.s64 + -36;
	// stw r31,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r31,816(r1)
	PPC_STORE_U8(ctx.r1.u32 + 816, ctx.r31.u8);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// stw r30,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r30.u32);
	// stw r31,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r31.u32);
	// stb r31,880(r1)
	PPC_STORE_U8(ctx.r1.u32 + 880, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x837076E0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837076EC;
	sub_82E74C08(ctx, base);
	// lwz r11,900(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 900);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707700
	if (cr6.lt) goto loc_83707700;
	// lwz r3,880(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	// bl 0x82416268
	ctx.lr = 0x83707700;
	sub_82416268(ctx, base);
loc_83707700:
	// lwz r10,584(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 584);
	// addi r11,r26,564
	ctx.r11.s64 = ctx.r26.s64 + 564;
	// stw r30,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r30.u32);
	// stw r31,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r31,880(r1)
	PPC_STORE_U8(ctx.r1.u32 + 880, ctx.r31.u8);
	// blt cr6,0x83707720
	if (cr6.lt) goto loc_83707720;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83707720:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x82475d40
	ctx.lr = 0x8370772C;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83707738;
	sub_82E74C08(ctx, base);
	// lwz r11,1316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1316);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370774c
	if (cr6.lt) goto loc_8370774C;
	// lwz r3,1296(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1296);
	// bl 0x82416268
	ctx.lr = 0x8370774C;
	sub_82416268(ctx, base);
loc_8370774C:
	// stw r30,1316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1316, ctx.r30.u32);
	// addi r4,r25,-20
	ctx.r4.s64 = ctx.r25.s64 + -20;
	// stw r31,1312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1312, ctx.r31.u32);
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// stb r31,1296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1296, ctx.r31.u8);
	// bl 0x82475d40
	ctx.lr = 0x83707764;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83707770;
	sub_82E74C08(ctx, base);
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707784
	if (cr6.lt) goto loc_83707784;
	// lwz r3,1424(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1424);
	// bl 0x82416268
	ctx.lr = 0x83707784;
	sub_82416268(ctx, base);
loc_83707784:
	// lwz r10,612(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 612);
	// addi r11,r26,592
	ctx.r11.s64 = ctx.r26.s64 + 592;
	// stw r30,1444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1444, ctx.r30.u32);
	// stw r31,1440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1440, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r31,1424(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1424, ctx.r31.u8);
	// blt cr6,0x837077a4
	if (cr6.lt) goto loc_837077A4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837077A4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x82475d40
	ctx.lr = 0x837077B0;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837077BC;
	sub_82E74C08(ctx, base);
	// lwz r11,1380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1380);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837077d0
	if (cr6.lt) goto loc_837077D0;
	// lwz r3,1360(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1360);
	// bl 0x82416268
	ctx.lr = 0x837077D0;
	sub_82416268(ctx, base);
loc_837077D0:
	// stw r30,1380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1380, ctx.r30.u32);
	// addi r4,r25,-16
	ctx.r4.s64 = ctx.r25.s64 + -16;
	// stw r31,1376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1376, ctx.r31.u32);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// stb r31,1360(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1360, ctx.r31.u8);
	// bl 0x82475d40
	ctx.lr = 0x837077E8;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837077F4;
	sub_82E74C08(ctx, base);
	// lwz r11,1284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1284);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707808
	if (cr6.lt) goto loc_83707808;
	// lwz r3,1264(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1264);
	// bl 0x82416268
	ctx.lr = 0x83707808;
	sub_82416268(ctx, base);
loc_83707808:
	// stw r30,1284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1284, ctx.r30.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r31,1280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1280, ctx.r31.u32);
	// addi r28,r26,624
	ctx.r28.s64 = ctx.r26.s64 + 624;
	// stb r31,1264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1264, ctx.r31.u8);
	// lwz r4,624(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 624);
	// bl 0x82e749f8
	ctx.lr = 0x83707824;
	sub_82E749F8(ctx, base);
	// lwz r11,624(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 624);
	// lwz r10,632(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 632);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x837078a8
	if (cr6.eq) goto loc_837078A8;
loc_83707840:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707854
	if (cr6.lt) goto loc_83707854;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x83707858
	goto loc_83707858;
loc_83707854:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83707858:
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x82475d40
	ctx.lr = 0x83707860;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370786C;
	sub_82E74C08(ctx, base);
	// lwz r11,1348(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1348);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707880
	if (cr6.lt) goto loc_83707880;
	// lwz r3,1328(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1328);
	// bl 0x82416268
	ctx.lr = 0x83707880;
	sub_82416268(ctx, base);
loc_83707880:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// stw r30,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, ctx.r30.u32);
	// stw r31,1344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1344, ctx.r31.u32);
	// stb r31,1328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1328, ctx.r31.u8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x83707840
	if (!cr6.eq) goto loc_83707840;
loc_837078A8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x82475d40
	ctx.lr = 0x837078B4;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837078C0;
	sub_82E74C08(ctx, base);
	// lwz r11,1412(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1412);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837078d4
	if (cr6.lt) goto loc_837078D4;
	// lwz r3,1392(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1392);
	// bl 0x82416268
	ctx.lr = 0x837078D4;
	sub_82416268(ctx, base);
loc_837078D4:
	// stw r30,1412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1412, ctx.r30.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r31,1408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1408, ctx.r31.u32);
	// stb r31,1392(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1392, ctx.r31.u8);
	// lwz r4,640(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 640);
	// bl 0x82e746c0
	ctx.lr = 0x837078EC;
	sub_82E746C0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x831cf100
	ctx.lr = 0x837078F4;
	sub_831CF100(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x831cf100
	ctx.lr = 0x837078FC;
	sub_831CF100(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707910
	if (cr6.lt) goto loc_83707910;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8386d088
	ctx.lr = 0x83707910;
	sub_8386D088(ctx, base);
loc_83707910:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x83707930
	if (cr6.lt) goto loc_83707930;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8386d088
	ctx.lr = 0x83707930;
	sub_8386D088(ctx, base);
loc_83707930:
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x831cf100
	ctx.lr = 0x83707944;
	sub_831CF100(ctx, base);
	// lwz r11,1252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1252);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707958
	if (cr6.lt) goto loc_83707958;
	// lwz r3,1232(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1232);
	// bl 0x8386d088
	ctx.lr = 0x83707958;
	sub_8386D088(ctx, base);
loc_83707958:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1568
	ctx.r1.s64 = ctx.r1.s64 + 1568;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83707964"))) PPC_WEAK_FUNC(sub_83707964);
PPC_FUNC_IMPL(__imp__sub_83707964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83707968"))) PPC_WEAK_FUNC(sub_83707968);
PPC_FUNC_IMPL(__imp__sub_83707968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83707970;
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
	ctx.lr = 0x83707998;
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
	// bge cr6,0x83707bdc
	if (!cr6.lt) goto loc_83707BDC;
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-27852
	ctx.r26.s64 = ctx.r11.s64 + -27852;
loc_837079D0:
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
	ctx.lr = 0x83707A04;
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
	ctx.lr = 0x83707A1C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83707ab0
	if (!cr6.eq) goto loc_83707AB0;
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
	ctx.lr = 0x83707A54;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83707a68
	if (!cr6.lt) goto loc_83707A68;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_83707A68:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83707A6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83707a6c
	if (!cr6.eq) goto loc_83707A6C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83707A90;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83707aa4
	if (cr6.lt) goto loc_83707AA4;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x83707AA4;
	sub_82416268(ctx, base);
loc_83707AA4:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_83707AB0:
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
	ctx.lr = 0x83707AC8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83707b04
	if (!cr6.eq) goto loc_83707B04;
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
	// bne cr6,0x83707afc
	if (!cr6.eq) goto loc_83707AFC;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83707b00
	goto loc_83707B00;
loc_83707AFC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83707B00:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_83707B04:
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
	ctx.lr = 0x83707B1C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83707bb0
	if (!cr6.eq) goto loc_83707BB0;
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
	ctx.lr = 0x83707B54;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83707b68
	if (!cr6.lt) goto loc_83707B68;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_83707B68:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83707B6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83707b6c
	if (!cr6.eq) goto loc_83707B6C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83707B90;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83707ba4
	if (cr6.lt) goto loc_83707BA4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x83707BA4;
	sub_82416268(ctx, base);
loc_83707BA4:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_83707BB0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707bc4
	if (cr6.lt) goto loc_83707BC4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x83707BC4;
	sub_82416268(ctx, base);
loc_83707BC4:
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
	// bne 0x837079d0
	if (!cr0.eq) goto loc_837079D0;
loc_83707BDC:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83707bf8
	if (cr6.eq) goto loc_83707BF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83707BF0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83707BF8;
	sub_82416268(ctx, base);
loc_83707BF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83707C04"))) PPC_WEAK_FUNC(sub_83707C04);
PPC_FUNC_IMPL(__imp__sub_83707C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83707C08"))) PPC_WEAK_FUNC(sub_83707C08);
PPC_FUNC_IMPL(__imp__sub_83707C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83707C10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83707C1C;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r29,r11,-28376
	ctx.r29.s64 = ctx.r11.s64 + -28376;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x83707C34;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-27744
	ctx.r7.s64 = ctx.r10.s64 + -27744;
	// addi r5,r8,-27760
	ctx.r5.s64 = ctx.r8.s64 + -27760;
	// addi r6,r9,-27756
	ctx.r6.s64 = ctx.r9.s64 + -27756;
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
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83707C7C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83707C98;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83707CB4;
	sub_824208C8(ctx, base);
	// stw r28,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r28.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// stb r30,420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 420, ctx.r30.u8);
	// addi r4,r29,60
	ctx.r4.s64 = ctx.r29.s64 + 60;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83707CD0;
	sub_824208C8(ctx, base);
	// stw r28,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r28.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// stb r30,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r30.u8);
	// addi r4,r29,76
	ctx.r4.s64 = ctx.r29.s64 + 76;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83707CEC;
	sub_824208C8(ctx, base);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// li r27,16
	ctx.r27.s64 = 16;
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// stw r27,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r27.u32);
	// addi r4,r29,92
	ctx.r4.s64 = ctx.r29.s64 + 92;
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// addi r11,r31,476
	ctx.r11.s64 = ctx.r31.s64 + 476;
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// stw r27,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r27.u32);
	// stw r28,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r28.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// stb r30,516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 516, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x83707D38;
	sub_824208C8(ctx, base);
	// stw r28,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r28.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// stb r30,544(r31)
	PPC_STORE_U8(ctx.r31.u32 + 544, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83707D54;
	sub_824208C8(ctx, base);
	// stw r28,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r28.u32);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// stb r30,572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 572, ctx.r30.u8);
	// addi r4,r29,124
	ctx.r4.s64 = ctx.r29.s64 + 124;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83707D70;
	sub_824208C8(ctx, base);
	// stw r28,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r28.u32);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// stb r30,600(r31)
	PPC_STORE_U8(ctx.r31.u32 + 600, ctx.r30.u8);
	// addi r4,r29,140
	ctx.r4.s64 = ctx.r29.s64 + 140;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83707D8C;
	sub_824208C8(ctx, base);
	// stw r28,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r28.u32);
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// addi r3,r31,628
	ctx.r3.s64 = ctx.r31.s64 + 628;
	// stb r30,628(r31)
	PPC_STORE_U8(ctx.r31.u32 + 628, ctx.r30.u8);
	// addi r4,r29,156
	ctx.r4.s64 = ctx.r29.s64 + 156;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x824208c8
	ctx.lr = 0x83707DA8;
	sub_824208C8(ctx, base);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// bl 0x835fe558
	ctx.lr = 0x83707DB0;
	sub_835FE558(ctx, base);
	// stw r28,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r28.u32);
	// stw r30,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r30.u32);
	// addi r3,r31,736
	ctx.r3.s64 = ctx.r31.s64 + 736;
	// stb r30,736(r31)
	PPC_STORE_U8(ctx.r31.u32 + 736, ctx.r30.u8);
	// addi r4,r29,160
	ctx.r4.s64 = ctx.r29.s64 + 160;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83707DCC;
	sub_824208C8(ctx, base);
	// stw r28,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r28.u32);
	// stw r30,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r30.u32);
	// addi r3,r31,764
	ctx.r3.s64 = ctx.r31.s64 + 764;
	// stb r30,764(r31)
	PPC_STORE_U8(ctx.r31.u32 + 764, ctx.r30.u8);
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x824208c8
	ctx.lr = 0x83707DE8;
	sub_824208C8(ctx, base);
	// stw r28,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r28.u32);
	// stw r30,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r30.u32);
	// addi r3,r31,792
	ctx.r3.s64 = ctx.r31.s64 + 792;
	// stb r30,792(r31)
	PPC_STORE_U8(ctx.r31.u32 + 792, ctx.r30.u8);
	// addi r4,r29,184
	ctx.r4.s64 = ctx.r29.s64 + 184;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83707E04;
	sub_824208C8(ctx, base);
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
	// stw r30,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r30.u32);
	// addi r3,r31,824
	ctx.r3.s64 = ctx.r31.s64 + 824;
	// std r30,832(r31)
	PPC_STORE_U64(ctx.r31.u32 + 832, ctx.r30.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d8c9b0
	ctx.lr = 0x83707E1C;
	sub_82D8C9B0(ctx, base);
	// stw r30,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// std r30,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r30,408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 408, ctx.r30.u64);
	// stw r27,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83707E38"))) PPC_WEAK_FUNC(sub_83707E38);
PPC_FUNC_IMPL(__imp__sub_83707E38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x837080b0
	sub_837080B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83707E40"))) PPC_WEAK_FUNC(sub_83707E40);
PPC_FUNC_IMPL(__imp__sub_83707E40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x837080b0
	sub_837080B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83707E48"))) PPC_WEAK_FUNC(sub_83707E48);
PPC_FUNC_IMPL(__imp__sub_83707E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83707E50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-27744
	ctx.r8.s64 = ctx.r11.s64 + -27744;
	// addi r7,r10,-27756
	ctx.r7.s64 = ctx.r10.s64 + -27756;
	// addi r6,r9,-27760
	ctx.r6.s64 = ctx.r9.s64 + -27760;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r3,r3,824
	ctx.r3.s64 = ctx.r3.s64 + 824;
	// stw r6,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r6.u32);
	// bl 0x82d8d2e8
	ctx.lr = 0x83707E84;
	sub_82D8D2E8(ctx, base);
	// lwz r5,812(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 812);
	// addi r27,r30,792
	ctx.r27.s64 = ctx.r30.s64 + 792;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83707e9c
	if (cr6.lt) goto loc_83707E9C;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83707E9C;
	sub_8386D088(ctx, base);
loc_83707E9C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// addi r28,r30,764
	ctx.r28.s64 = ctx.r30.s64 + 764;
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707ec8
	if (cr6.lt) goto loc_83707EC8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83707EC8;
	sub_8386D088(ctx, base);
loc_83707EC8:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,736
	ctx.r27.s64 = ctx.r30.s64 + 736;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 756);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707eec
	if (cr6.lt) goto loc_83707EEC;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83707EEC;
	sub_8386D088(ctx, base);
loc_83707EEC:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,656
	ctx.r28.s64 = ctx.r30.s64 + 656;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x824238b8
	ctx.lr = 0x83707F04;
	sub_824238B8(ctx, base);
	// addi r3,r28,48
	ctx.r3.s64 = ctx.r28.s64 + 48;
	// bl 0x824238b8
	ctx.lr = 0x83707F0C;
	sub_824238B8(ctx, base);
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// bl 0x824238b8
	ctx.lr = 0x83707F14;
	sub_824238B8(ctx, base);
	// lwz r11,676(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 676);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707f28
	if (cr6.lt) goto loc_83707F28;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83707F28;
	sub_8386D088(ctx, base);
loc_83707F28:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r26,r30,628
	ctx.r26.s64 = ctx.r30.s64 + 628;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 648);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707f4c
	if (cr6.lt) goto loc_83707F4C;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83707F4C;
	sub_8386D088(ctx, base);
loc_83707F4C:
	// stw r29,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r29.u32);
	// addi r27,r30,600
	ctx.r27.s64 = ctx.r30.s64 + 600;
	// stw r31,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r31.u32);
	// stb r31,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r31.u8);
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707f70
	if (cr6.lt) goto loc_83707F70;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83707F70;
	sub_8386D088(ctx, base);
loc_83707F70:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,572
	ctx.r28.s64 = ctx.r30.s64 + 572;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707f94
	if (cr6.lt) goto loc_83707F94;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83707F94;
	sub_8386D088(ctx, base);
loc_83707F94:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,544
	ctx.r27.s64 = ctx.r30.s64 + 544;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707fb8
	if (cr6.lt) goto loc_83707FB8;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83707FB8;
	sub_8386D088(ctx, base);
loc_83707FB8:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,516
	ctx.r28.s64 = ctx.r30.s64 + 516;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83707fdc
	if (cr6.lt) goto loc_83707FDC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83707FDC;
	sub_8386D088(ctx, base);
loc_83707FDC:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,448
	ctx.r27.s64 = ctx.r30.s64 + 448;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83708000
	if (cr6.lt) goto loc_83708000;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83708000;
	sub_8386D088(ctx, base);
loc_83708000:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,420
	ctx.r28.s64 = ctx.r30.s64 + 420;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83708024
	if (cr6.lt) goto loc_83708024;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83708024;
	sub_8386D088(ctx, base);
loc_83708024:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,372
	ctx.r27.s64 = ctx.r30.s64 + 372;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83708048
	if (cr6.lt) goto loc_83708048;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83708048;
	sub_8386D088(ctx, base);
loc_83708048:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,344
	ctx.r28.s64 = ctx.r30.s64 + 344;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370806c
	if (cr6.lt) goto loc_8370806C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370806C;
	sub_8386D088(ctx, base);
loc_8370806C:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,316
	ctx.r27.s64 = ctx.r30.s64 + 316;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83708090
	if (cr6.lt) goto loc_83708090;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83708090;
	sub_8386D088(ctx, base);
loc_83708090:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x837080A4;
	sub_82B6A590(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837080AC"))) PPC_WEAK_FUNC(sub_837080AC);
PPC_FUNC_IMPL(__imp__sub_837080AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837080B0"))) PPC_WEAK_FUNC(sub_837080B0);
PPC_FUNC_IMPL(__imp__sub_837080B0) {
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
	// bl 0x83707e48
	ctx.lr = 0x837080D0;
	sub_83707E48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837080f0
	if (cr6.eq) goto loc_837080F0;
	// bl 0x82595188
	ctx.lr = 0x837080E0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837080F0;
	sub_825952B8(ctx, base);
loc_837080F0:
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

__attribute__((alias("__imp__sub_8370810C"))) PPC_WEAK_FUNC(sub_8370810C);
PPC_FUNC_IMPL(__imp__sub_8370810C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83708110"))) PPC_WEAK_FUNC(sub_83708110);
PPC_FUNC_IMPL(__imp__sub_83708110) {
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
	ctx.lr = 0x83708128;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-28376
	ctx.r4.s64 = ctx.r11.s64 + -28376;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x824208c8
	ctx.lr = 0x8370813C;
	sub_824208C8(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r3,r7,-27696
	ctx.r3.s64 = ctx.r7.s64 + -27696;
	// addi r6,r10,-27712
	ctx.r6.s64 = ctx.r10.s64 + -27712;
	// addi r5,r9,-27724
	ctx.r5.s64 = ctx.r9.s64 + -27724;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-27728
	ctx.r4.s64 = ctx.r8.s64 + -27728;
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

__attribute__((alias("__imp__sub_83708184"))) PPC_WEAK_FUNC(sub_83708184);
PPC_FUNC_IMPL(__imp__sub_83708184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83708188"))) PPC_WEAK_FUNC(sub_83708188);
PPC_FUNC_IMPL(__imp__sub_83708188) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x837081a0
	sub_837081A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83708190"))) PPC_WEAK_FUNC(sub_83708190);
PPC_FUNC_IMPL(__imp__sub_83708190) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x837081a0
	sub_837081A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83708198"))) PPC_WEAK_FUNC(sub_83708198);
PPC_FUNC_IMPL(__imp__sub_83708198) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x837081a0
	sub_837081A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837081A0"))) PPC_WEAK_FUNC(sub_837081A0);
PPC_FUNC_IMPL(__imp__sub_837081A0) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-27712
	ctx.r7.s64 = ctx.r11.s64 + -27712;
	// addi r6,r10,-27724
	ctx.r6.s64 = ctx.r10.s64 + -27724;
	// addi r5,r9,-27728
	ctx.r5.s64 = ctx.r9.s64 + -27728;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-27696
	ctx.r4.s64 = ctx.r8.s64 + -27696;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x837081F0;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83708210
	if (cr6.eq) goto loc_83708210;
	// bl 0x82595188
	ctx.lr = 0x83708200;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83708210;
	sub_825952B8(ctx, base);
loc_83708210:
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

__attribute__((alias("__imp__sub_8370822C"))) PPC_WEAK_FUNC(sub_8370822C);
PPC_FUNC_IMPL(__imp__sub_8370822C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83708230"))) PPC_WEAK_FUNC(sub_83708230);
PPC_FUNC_IMPL(__imp__sub_83708230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83708238;
	__savegprlr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
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
	// li r10,134
	ctx.r10.s64 = 134;
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
	// bge cr6,0x83708278
	if (!cr6.lt) goto loc_83708278;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83708278;
	sub_82E745E0(ctx, base);
loc_83708278:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-27548
	ctx.r27.s64 = ctx.r11.s64 + -27548;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x837082C0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837082CC;
	sub_82E74C08(ctx, base);
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x837082e0
	if (cr6.lt) goto loc_837082E0;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x837082E0;
	sub_82416268(ctx, base);
loc_837082E0:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x83708300
	if (cr6.lt) goto loc_83708300;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83708300:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_83708310:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83708310
	if (!cr6.eq) goto loc_83708310;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83708334;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83708340;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83708354
	if (cr6.lt) goto loc_83708354;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83708354;
	sub_82416268(ctx, base);
loc_83708354:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370837C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83708388;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370839c
	if (cr6.lt) goto loc_8370839C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8370839C;
	sub_82416268(ctx, base);
loc_8370839C:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x837083B4;
	sub_82E746C0(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x837083D0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837083DC;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837083f0
	if (cr6.lt) goto loc_837083F0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x837083F0;
	sub_82416268(ctx, base);
loc_837083F0:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x83708410
	if (cr6.lt) goto loc_83708410;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83708410:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_83708420:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83708420
	if (!cr6.eq) goto loc_83708420;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83708444;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83708450;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83708464
	if (cr6.lt) goto loc_83708464;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83708464;
	sub_82416268(ctx, base);
loc_83708464:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370848C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83708498;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837084ac
	if (cr6.lt) goto loc_837084AC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x837084AC;
	sub_82416268(ctx, base);
loc_837084AC:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x837084cc
	if (cr6.lt) goto loc_837084CC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837084CC:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_837084DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837084dc
	if (!cr6.eq) goto loc_837084DC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83708500;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370850C;
	sub_82E74C08(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83708520
	if (cr6.lt) goto loc_83708520;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83708520;
	sub_82416268(ctx, base);
loc_83708520:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83708548;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83708554;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83708568
	if (cr6.lt) goto loc_83708568;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83708568;
	sub_82416268(ctx, base);
loc_83708568:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// ld r4,176(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 176);
	// bl 0x82ead258
	ctx.lr = 0x83708580;
	sub_82EAD258(ctx, base);
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82472fc0
	ctx.lr = 0x8370859C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837085A8;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837085bc
	if (cr6.lt) goto loc_837085BC;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x837085BC;
	sub_82416268(ctx, base);
loc_837085BC:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// ld r4,184(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 184);
	// bl 0x82ead258
	ctx.lr = 0x837085D4;
	sub_82EAD258(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837085E0"))) PPC_WEAK_FUNC(sub_837085E0);
PPC_FUNC_IMPL(__imp__sub_837085E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837085E8;
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
	ctx.lr = 0x83708610;
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
	// bge cr6,0x83708854
	if (!cr6.lt) goto loc_83708854;
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-27520
	ctx.r26.s64 = ctx.r11.s64 + -27520;
loc_83708648:
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
	ctx.lr = 0x8370867C;
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
	ctx.lr = 0x83708694;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83708728
	if (!cr6.eq) goto loc_83708728;
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
	ctx.lr = 0x837086CC;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x837086e0
	if (!cr6.lt) goto loc_837086E0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_837086E0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837086E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837086e4
	if (!cr6.eq) goto loc_837086E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83708708;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370871c
	if (cr6.lt) goto loc_8370871C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8370871C;
	sub_82416268(ctx, base);
loc_8370871C:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_83708728:
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
	ctx.lr = 0x83708740;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370877c
	if (!cr6.eq) goto loc_8370877C;
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
	// bne cr6,0x83708774
	if (!cr6.eq) goto loc_83708774;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83708778
	goto loc_83708778;
loc_83708774:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83708778:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_8370877C:
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
	ctx.lr = 0x83708794;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83708828
	if (!cr6.eq) goto loc_83708828;
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
	ctx.lr = 0x837087CC;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x837087e0
	if (!cr6.lt) goto loc_837087E0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_837087E0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837087E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837087e4
	if (!cr6.eq) goto loc_837087E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83708808;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370881c
	if (cr6.lt) goto loc_8370881C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8370881C;
	sub_82416268(ctx, base);
loc_8370881C:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_83708828:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370883c
	if (cr6.lt) goto loc_8370883C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8370883C;
	sub_82416268(ctx, base);
loc_8370883C:
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
	// bne 0x83708648
	if (!cr0.eq) goto loc_83708648;
loc_83708854:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83708870
	if (cr6.eq) goto loc_83708870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83708868;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83708870;
	sub_82416268(ctx, base);
loc_83708870:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370887C"))) PPC_WEAK_FUNC(sub_8370887C);
PPC_FUNC_IMPL(__imp__sub_8370887C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83708880"))) PPC_WEAK_FUNC(sub_83708880);
PPC_FUNC_IMPL(__imp__sub_83708880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83708888;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83708894;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-27640
	ctx.r29.s64 = ctx.r11.s64 + -27640;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x837088AC;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-27412
	ctx.r7.s64 = ctx.r10.s64 + -27412;
	// addi r5,r8,-27428
	ctx.r5.s64 = ctx.r8.s64 + -27428;
	// addi r6,r9,-27424
	ctx.r6.s64 = ctx.r9.s64 + -27424;
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
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837088F4;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83708910;
	sub_824208C8(ctx, base);
	// std r30,376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 376, ctx.r30.u64);
	// std r30,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83708924"))) PPC_WEAK_FUNC(sub_83708924);
PPC_FUNC_IMPL(__imp__sub_83708924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83708928"))) PPC_WEAK_FUNC(sub_83708928);
PPC_FUNC_IMPL(__imp__sub_83708928) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x837089d0
	sub_837089D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83708930"))) PPC_WEAK_FUNC(sub_83708930);
PPC_FUNC_IMPL(__imp__sub_83708930) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x837089d0
	sub_837089D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83708938"))) PPC_WEAK_FUNC(sub_83708938);
PPC_FUNC_IMPL(__imp__sub_83708938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83708940;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-27412
	ctx.r8.s64 = ctx.r11.s64 + -27412;
	// addi r7,r10,-27424
	ctx.r7.s64 = ctx.r10.s64 + -27424;
	// addi r6,r9,-27428
	ctx.r6.s64 = ctx.r9.s64 + -27428;
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
	// blt cr6,0x83708984
	if (cr6.lt) goto loc_83708984;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83708984;
	sub_8386D088(ctx, base);
loc_83708984:
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
	// blt cr6,0x837089b0
	if (cr6.lt) goto loc_837089B0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837089B0;
	sub_8386D088(ctx, base);
loc_837089B0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x837089C4;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837089CC"))) PPC_WEAK_FUNC(sub_837089CC);
PPC_FUNC_IMPL(__imp__sub_837089CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837089D0"))) PPC_WEAK_FUNC(sub_837089D0);
PPC_FUNC_IMPL(__imp__sub_837089D0) {
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
	// bl 0x83708938
	ctx.lr = 0x837089F0;
	sub_83708938(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83708a10
	if (cr6.eq) goto loc_83708A10;
	// bl 0x82595188
	ctx.lr = 0x83708A00;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83708A10;
	sub_825952B8(ctx, base);
loc_83708A10:
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

__attribute__((alias("__imp__sub_83708A2C"))) PPC_WEAK_FUNC(sub_83708A2C);
PPC_FUNC_IMPL(__imp__sub_83708A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83708A30"))) PPC_WEAK_FUNC(sub_83708A30);
PPC_FUNC_IMPL(__imp__sub_83708A30) {
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
	ctx.lr = 0x83708A48;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-27640
	ctx.r4.s64 = ctx.r11.s64 + -27640;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x824208c8
	ctx.lr = 0x83708A5C;
	sub_824208C8(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r3,r7,-27364
	ctx.r3.s64 = ctx.r7.s64 + -27364;
	// addi r6,r10,-27380
	ctx.r6.s64 = ctx.r10.s64 + -27380;
	// addi r5,r9,-27392
	ctx.r5.s64 = ctx.r9.s64 + -27392;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-27396
	ctx.r4.s64 = ctx.r8.s64 + -27396;
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

__attribute__((alias("__imp__sub_83708AA4"))) PPC_WEAK_FUNC(sub_83708AA4);
PPC_FUNC_IMPL(__imp__sub_83708AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83708AA8"))) PPC_WEAK_FUNC(sub_83708AA8);
PPC_FUNC_IMPL(__imp__sub_83708AA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83708ac0
	sub_83708AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83708AB0"))) PPC_WEAK_FUNC(sub_83708AB0);
PPC_FUNC_IMPL(__imp__sub_83708AB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83708ac0
	sub_83708AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83708AB8"))) PPC_WEAK_FUNC(sub_83708AB8);
PPC_FUNC_IMPL(__imp__sub_83708AB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83708ac0
	sub_83708AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83708AC0"))) PPC_WEAK_FUNC(sub_83708AC0);
PPC_FUNC_IMPL(__imp__sub_83708AC0) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-27380
	ctx.r7.s64 = ctx.r11.s64 + -27380;
	// addi r6,r10,-27392
	ctx.r6.s64 = ctx.r10.s64 + -27392;
	// addi r5,r9,-27396
	ctx.r5.s64 = ctx.r9.s64 + -27396;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-27364
	ctx.r4.s64 = ctx.r8.s64 + -27364;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x83708B10;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83708b30
	if (cr6.eq) goto loc_83708B30;
	// bl 0x82595188
	ctx.lr = 0x83708B20;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83708B30;
	sub_825952B8(ctx, base);
loc_83708B30:
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

__attribute__((alias("__imp__sub_83708B4C"))) PPC_WEAK_FUNC(sub_83708B4C);
PPC_FUNC_IMPL(__imp__sub_83708B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83708B50"))) PPC_WEAK_FUNC(sub_83708B50);
PPC_FUNC_IMPL(__imp__sub_83708B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83708B58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-23600
	ctx.r29.s64 = ctx.r11.s64 + -23600;
	// lwz r11,-23344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23344);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83708bac
	if (!cr6.eq) goto loc_83708BAC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-23344(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23344, ctx.r11.u32);
	// li r31,15
	ctx.r31.s64 = 15;
loc_83708B8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x83708B94;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x83708b8c
	if (!cr0.lt) goto loc_83708B8C;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,15320
	ctx.r3.s64 = ctx.r11.s64 + 15320;
	// bl 0x831cdcc8
	ctx.lr = 0x83708BAC;
	sub_831CDCC8(ctx, base);
loc_83708BAC:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83708BBC"))) PPC_WEAK_FUNC(sub_83708BBC);
PPC_FUNC_IMPL(__imp__sub_83708BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83708BC0"))) PPC_WEAK_FUNC(sub_83708BC0);
PPC_FUNC_IMPL(__imp__sub_83708BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83708BC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-23336
	ctx.r29.s64 = ctx.r11.s64 + -23336;
	// lwz r11,-22440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22440);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83708c1c
	if (!cr6.eq) goto loc_83708C1C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-22440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22440, ctx.r11.u32);
	// li r31,55
	ctx.r31.s64 = 55;
loc_83708BFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x83708C04;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x83708bfc
	if (!cr0.lt) goto loc_83708BFC;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,15400
	ctx.r3.s64 = ctx.r11.s64 + 15400;
	// bl 0x831cdcc8
	ctx.lr = 0x83708C1C;
	sub_831CDCC8(ctx, base);
loc_83708C1C:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83708C2C"))) PPC_WEAK_FUNC(sub_83708C2C);
PPC_FUNC_IMPL(__imp__sub_83708C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83708C30"))) PPC_WEAK_FUNC(sub_83708C30);
PPC_FUNC_IMPL(__imp__sub_83708C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83708C38;
	__savegprlr_23(ctx, base);
	// stwu r1,-1744(r1)
	ea = -1744 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,222
	ctx.r11.s64 = 222;
	// li r10,26
	ctx.r10.s64 = 26;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// sth r10,101(r1)
	PPC_STORE_U16(ctx.r1.u32 + 101, ctx.r10.u16);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82e74660
	ctx.lr = 0x83708C70;
	sub_82E74660(ctx, base);
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// addi r23,r11,-25536
	ctx.r23.s64 = ctx.r11.s64 + -25536;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r4,r23,-332
	ctx.r4.s64 = ctx.r23.s64 + -332;
	// bl 0x82472fc0
	ctx.lr = 0x83708C98;
	sub_82472FC0(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83708CA4;
	sub_82E74C08(ctx, base);
	// lwz r9,660(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x83708cb8
	if (cr6.lt) goto loc_83708CB8;
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x82416268
	ctx.lr = 0x83708CB8;
	sub_82416268(ctx, base);
loc_83708CB8:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// addi r4,r24,20
	ctx.r4.s64 = ctx.r24.s64 + 20;
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// blt cr6,0x83708cd8
	if (cr6.lt) goto loc_83708CD8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83708CD8:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_83708CE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83708ce8
	if (!cr6.eq) goto loc_83708CE8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83708D0C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83708D18;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83708d2c
	if (cr6.lt) goto loc_83708D2C;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83708D2C;
	sub_82416268(ctx, base);
loc_83708D2C:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r4,r23,-324
	ctx.r4.s64 = ctx.r23.s64 + -324;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// stw r30,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r30.u32);
	// stw r31,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r31.u32);
	// stb r31,960(r1)
	PPC_STORE_U8(ctx.r1.u32 + 960, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83708D54;
	sub_82472FC0(ctx, base);
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83708D60;
	sub_82E74C08(ctx, base);
	// lwz r11,980(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 980);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83708d74
	if (cr6.lt) goto loc_83708D74;
	// lwz r3,960(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// bl 0x82416268
	ctx.lr = 0x83708D74;
	sub_82416268(ctx, base);
loc_83708D74:
	// stw r30,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r31.u32);
	// stb r31,960(r1)
	PPC_STORE_U8(ctx.r1.u32 + 960, ctx.r31.u8);
	// lwz r4,48(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x83708D8C;
	sub_82E746C0(ctx, base);
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// addi r4,r23,-316
	ctx.r4.s64 = ctx.r23.s64 + -316;
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82472fc0
	ctx.lr = 0x83708DA8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83708DB4;
	sub_82E74C08(ctx, base);
	// lwz r11,692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83708dc8
	if (cr6.lt) goto loc_83708DC8;
	// lwz r3,672(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// bl 0x82416268
	ctx.lr = 0x83708DC8;
	sub_82416268(ctx, base);
loc_83708DC8:
	// lwz r11,136(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 136);
	// addi r4,r24,116
	ctx.r4.s64 = ctx.r24.s64 + 116;
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// blt cr6,0x83708de8
	if (cr6.lt) goto loc_83708DE8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83708DE8:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
loc_83708DF8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83708df8
	if (!cr6.eq) goto loc_83708DF8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83708E1C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83708E28;
	sub_82E74C08(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83708e3c
	if (cr6.lt) goto loc_83708E3C;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x83708E3C;
	sub_82416268(ctx, base);
loc_83708E3C:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// addi r4,r23,-308
	ctx.r4.s64 = ctx.r23.s64 + -308;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// stw r30,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r30.u32);
	// stw r31,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r31.u32);
	// stb r31,928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 928, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83708E64;
	sub_82472FC0(ctx, base);
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83708E70;
	sub_82E74C08(ctx, base);
	// lwz r11,948(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 948);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83708e84
	if (cr6.lt) goto loc_83708E84;
	// lwz r3,928(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// bl 0x82416268
	ctx.lr = 0x83708E84;
	sub_82416268(ctx, base);
loc_83708E84:
	// lwz r11,164(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 164);
	// addi r4,r24,144
	ctx.r4.s64 = ctx.r24.s64 + 144;
	// stw r30,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r30.u32);
	// stw r31,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 928, ctx.r31.u8);
	// blt cr6,0x83708ea4
	if (cr6.lt) goto loc_83708EA4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83708EA4:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
loc_83708EB4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83708eb4
	if (!cr6.eq) goto loc_83708EB4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83708ED8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83708EE4;
	sub_82E74C08(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83708ef8
	if (cr6.lt) goto loc_83708EF8;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x83708EF8;
	sub_82416268(ctx, base);
loc_83708EF8:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// addi r4,r23,-300
	ctx.r4.s64 = ctx.r23.s64 + -300;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// stw r30,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r30.u32);
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83708F20;
	sub_82472FC0(ctx, base);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83708F2C;
	sub_82E74C08(ctx, base);
	// lwz r11,756(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83708f40
	if (cr6.lt) goto loc_83708F40;
	// lwz r3,736(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// bl 0x82416268
	ctx.lr = 0x83708F40;
	sub_82416268(ctx, base);
loc_83708F40:
	// lwz r11,192(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 192);
	// addi r4,r24,172
	ctx.r4.s64 = ctx.r24.s64 + 172;
	// stw r30,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r30.u32);
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
	// blt cr6,0x83708f60
	if (cr6.lt) goto loc_83708F60;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83708F60:
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
loc_83708F70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83708f70
	if (!cr6.eq) goto loc_83708F70;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83708F94;
	sub_82472FC0(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83708FA0;
	sub_82E74C08(ctx, base);
	// lwz r10,564(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83708fb4
	if (cr6.lt) goto loc_83708FB4;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x83708FB4;
	sub_82416268(ctx, base);
loc_83708FB4:
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// addi r4,r23,-292
	ctx.r4.s64 = ctx.r23.s64 + -292;
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// stw r30,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r30.u32);
	// stw r31,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r31.u32);
	// stb r31,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83708FDC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83708FE8;
	sub_82E74C08(ctx, base);
	// lwz r11,884(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83708ffc
	if (cr6.lt) goto loc_83708FFC;
	// lwz r3,864(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// bl 0x82416268
	ctx.lr = 0x83708FFC;
	sub_82416268(ctx, base);
loc_83708FFC:
	// lwz r11,220(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 220);
	// addi r4,r24,200
	ctx.r4.s64 = ctx.r24.s64 + 200;
	// stw r30,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r30.u32);
	// stw r31,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r31.u8);
	// blt cr6,0x8370901c
	if (cr6.lt) goto loc_8370901C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370901C:
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
loc_8370902C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370902c
	if (!cr6.eq) goto loc_8370902C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83709050;
	sub_82472FC0(ctx, base);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370905C;
	sub_82E74C08(ctx, base);
	// lwz r10,628(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83709070
	if (cr6.lt) goto loc_83709070;
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x82416268
	ctx.lr = 0x83709070;
	sub_82416268(ctx, base);
loc_83709070:
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// addi r4,r23,-284
	ctx.r4.s64 = ctx.r23.s64 + -284;
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// stw r30,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r30.u32);
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83709098;
	sub_82472FC0(ctx, base);
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837090A4;
	sub_82E74C08(ctx, base);
	// lwz r11,820(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837090b8
	if (cr6.lt) goto loc_837090B8;
	// lwz r3,800(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// bl 0x82416268
	ctx.lr = 0x837090B8;
	sub_82416268(ctx, base);
loc_837090B8:
	// lwz r11,248(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 248);
	// addi r4,r24,228
	ctx.r4.s64 = ctx.r24.s64 + 228;
	// stw r30,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r30.u32);
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r31.u8);
	// blt cr6,0x837090d8
	if (cr6.lt) goto loc_837090D8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837090D8:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_837090E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837090e8
	if (!cr6.eq) goto loc_837090E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370910C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709118;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370912c
	if (cr6.lt) goto loc_8370912C;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8370912C;
	sub_82416268(ctx, base);
loc_8370912C:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// addi r4,r23,-276
	ctx.r4.s64 = ctx.r23.s64 + -276;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83709154;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709160;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709174
	if (cr6.lt) goto loc_83709174;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x83709174;
	sub_82416268(ctx, base);
loc_83709174:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x83709188;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r29,131
	ctx.r29.s64 = 131;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r26,8192
	ctx.r26.s64 = 8192;
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r4,r23,-268
	ctx.r4.s64 = ctx.r23.s64 + -268;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82472fc0
	ctx.lr = 0x837091E0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x837091EC;
	sub_82E74C08(ctx, base);
	// lwz r5,468(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83709200
	if (cr6.lt) goto loc_83709200;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x83709200;
	sub_82416268(ctx, base);
loc_83709200:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x83709214;
	sub_831D2BF8(ctx, base);
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r4,r23,-260
	ctx.r4.s64 = ctx.r23.s64 + -260;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// bl 0x82472fc0
	ctx.lr = 0x83709264;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x83709270;
	sub_82E74C08(ctx, base);
	// lwz r5,532(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83709284
	if (cr6.lt) goto loc_83709284;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x83709284;
	sub_82416268(ctx, base);
loc_83709284:
	// lwz r11,276(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 276);
	// addi r4,r24,256
	ctx.r4.s64 = ctx.r24.s64 + 256;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// blt cr6,0x837092a4
	if (cr6.lt) goto loc_837092A4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837092A4:
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
loc_837092B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837092b4
	if (!cr6.eq) goto loc_837092B4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x837092D8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x837092E4;
	sub_82E74C08(ctx, base);
	// lwz r10,596(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837092f8
	if (cr6.lt) goto loc_837092F8;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x82416268
	ctx.lr = 0x837092F8;
	sub_82416268(ctx, base);
loc_837092F8:
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// addi r4,r23,-252
	ctx.r4.s64 = ctx.r23.s64 + -252;
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83709320;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x8370932C;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709340
	if (cr6.lt) goto loc_83709340;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83709340;
	sub_82416268(ctx, base);
loc_83709340:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// lwz r4,284(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 284);
	// bl 0x82e97d90
	ctx.lr = 0x83709358;
	sub_82E97D90(ctx, base);
	// stw r30,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r30.u32);
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// addi r4,r23,-244
	ctx.r4.s64 = ctx.r23.s64 + -244;
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82472fc0
	ctx.lr = 0x83709374;
	sub_82472FC0(ctx, base);
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x83709380;
	sub_82E74C08(ctx, base);
	// lwz r11,724(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709394
	if (cr6.lt) goto loc_83709394;
	// lwz r3,704(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// bl 0x82416268
	ctx.lr = 0x83709394;
	sub_82416268(ctx, base);
loc_83709394:
	// stw r30,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r30.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// addi r28,r24,288
	ctx.r28.s64 = ctx.r24.s64 + 288;
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// lwz r4,288(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 288);
	// bl 0x82e749f8
	ctx.lr = 0x837093B0;
	sub_82E749F8(ctx, base);
	// lwz r11,288(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 288);
	// lwz r10,296(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 296);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x837093f4
	if (cr6.eq) goto loc_837093F4;
loc_837093CC:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82e97d90
	ctx.lr = 0x837093D8;
	sub_82E97D90(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// bne cr6,0x837093cc
	if (!cr6.eq) goto loc_837093CC;
loc_837093F4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82e74890
	ctx.lr = 0x83709400;
	sub_82E74890(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// lwz r28,108(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bge cr6,0x83709428
	if (!cr6.lt) goto loc_83709428;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e745e0
	ctx.lr = 0x83709428;
	sub_82E745E0(ctx, base);
loc_83709428:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x83709440;
	sub_831CE980(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r4,r23,-236
	ctx.r4.s64 = ctx.r23.s64 + -236;
	// add r8,r29,r9
	ctx.r8.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82472fc0
	ctx.lr = 0x83709468;
	sub_82472FC0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82e74890
	ctx.lr = 0x83709474;
	sub_82E74890(ctx, base);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// lwz r28,192(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bge cr6,0x83709490
	if (!cr6.lt) goto loc_83709490;
	// addi r28,r1,192
	ctx.r28.s64 = ctx.r1.s64 + 192;
loc_83709490:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x837094ac
	if (!cr6.lt) goto loc_837094AC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e745e0
	ctx.lr = 0x837094AC;
	sub_82E745E0(ctx, base);
loc_837094AC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x837094C4;
	sub_831CE980(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// add r7,r29,r9
	ctx.r7.u64 = ctx.r29.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// blt cr6,0x837094e4
	if (cr6.lt) goto loc_837094E4;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x837094E4;
	sub_82416268(ctx, base);
loc_837094E4:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r28,r24,304
	ctx.r28.s64 = ctx.r24.s64 + 304;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,304(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 304);
	// bl 0x82e749f8
	ctx.lr = 0x83709500;
	sub_82E749F8(ctx, base);
	// lwz r11,304(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 304);
	// lwz r10,312(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 312);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x83709544
	if (cr6.eq) goto loc_83709544;
loc_8370951C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82e97d90
	ctx.lr = 0x83709528;
	sub_82E97D90(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// bne cr6,0x8370951c
	if (!cr6.eq) goto loc_8370951C;
loc_83709544:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r23,-232
	ctx.r4.s64 = ctx.r23.s64 + -232;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82472fc0
	ctx.lr = 0x83709560;
	sub_82472FC0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82e74890
	ctx.lr = 0x8370956C;
	sub_82E74890(ctx, base);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bge cr6,0x83709588
	if (!cr6.lt) goto loc_83709588;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
loc_83709588:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x837095dc
	if (!cr6.lt) goto loc_837095DC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x837095ac
	if (!cr6.eq) goto loc_837095AC;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_837095AC:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x837095c4
	if (!cr6.lt) goto loc_837095C4;
loc_837095B8:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x837095b8
	if (cr6.lt) goto loc_837095B8;
loc_837095C4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831d3198
	ctx.lr = 0x837095D0;
	sub_831D3198(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_837095DC:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x837095F0;
	sub_831CE980(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// add r7,r9,r28
	ctx.r7.u64 = ctx.r9.u64 + ctx.r28.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// blt cr6,0x83709610
	if (cr6.lt) goto loc_83709610;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83709610;
	sub_82416268(ctx, base);
loc_83709610:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r28,r24,320
	ctx.r28.s64 = ctx.r24.s64 + 320;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwz r4,320(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 320);
	// bl 0x82e749f8
	ctx.lr = 0x8370962C;
	sub_82E749F8(ctx, base);
	// lwz r10,320(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 320);
	// lwz r11,328(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 328);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r29,r11
	ctx.r29.s64 = ctx.r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x83709670
	if (cr6.eq) goto loc_83709670;
loc_83709648:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82e97d90
	ctx.lr = 0x83709654;
	sub_82E97D90(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// bne cr6,0x83709648
	if (!cr6.eq) goto loc_83709648;
loc_83709670:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82e74890
	ctx.lr = 0x8370967C;
	sub_82E74890(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bge cr6,0x837096e0
	if (!cr6.lt) goto loc_837096E0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x837096ac
	if (!cr6.eq) goto loc_837096AC;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_837096AC:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x837096cc
	if (!cr6.lt) goto loc_837096CC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_837096C0:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x837096c0
	if (cr6.lt) goto loc_837096C0;
loc_837096CC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x837096D8;
	sub_831D3198(ctx, base);
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// stw r29,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r29.u32);
loc_837096E0:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x837096F8;
	sub_831CE980(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r23,-220
	ctx.r4.s64 = ctx.r23.s64 + -220;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83709720;
	sub_82472FC0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82e74890
	ctx.lr = 0x8370972C;
	sub_82E74890(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bge cr6,0x83709748
	if (!cr6.lt) goto loc_83709748;
	// addi r27,r1,160
	ctx.r27.s64 = ctx.r1.s64 + 160;
loc_83709748:
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bge cr6,0x837097a0
	if (!cr6.lt) goto loc_837097A0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8370976c
	if (!cr6.eq) goto loc_8370976C;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8370976C:
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x8370978c
	if (!cr6.lt) goto loc_8370978C;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83709780:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83709780
	if (cr6.lt) goto loc_83709780;
loc_8370978C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x83709798;
	sub_831D3198(ctx, base);
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// stw r29,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r29.u32);
loc_837097A0:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x837097B8;
	sub_831CE980(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837097d8
	if (cr6.lt) goto loc_837097D8;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x837097D8;
	sub_82416268(ctx, base);
loc_837097D8:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// ld r4,336(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 336);
	// bl 0x82ead258
	ctx.lr = 0x837097F0;
	sub_82EAD258(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r23,-212
	ctx.r4.s64 = ctx.r23.s64 + -212;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x8370980C;
	sub_82472FC0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82e74890
	ctx.lr = 0x83709818;
	sub_82E74890(ctx, base);
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r27,224(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bge cr6,0x83709834
	if (!cr6.lt) goto loc_83709834;
	// addi r27,r1,224
	ctx.r27.s64 = ctx.r1.s64 + 224;
loc_83709834:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x8370988c
	if (!cr6.lt) goto loc_8370988C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83709858
	if (!cr6.eq) goto loc_83709858;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_83709858:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x83709878
	if (!cr6.lt) goto loc_83709878;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8370986C:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x8370986c
	if (cr6.lt) goto loc_8370986C;
loc_83709878:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x83709884;
	sub_831D3198(ctx, base);
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// stw r29,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r29.u32);
loc_8370988C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x837098A4;
	sub_831CE980(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837098c4
	if (cr6.lt) goto loc_837098C4;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x837098C4;
	sub_82416268(ctx, base);
loc_837098C4:
	// lwz r11,364(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 364);
	// addi r4,r24,344
	ctx.r4.s64 = ctx.r24.s64 + 344;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x837098e4
	if (cr6.lt) goto loc_837098E4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837098E4:
	// stw r30,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
loc_837098F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837098f4
	if (!cr6.eq) goto loc_837098F4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83709918;
	sub_82472FC0(ctx, base);
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709924;
	sub_82E74C08(ctx, base);
	// lwz r10,788(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83709938
	if (cr6.lt) goto loc_83709938;
	// lwz r3,768(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// bl 0x82416268
	ctx.lr = 0x83709938;
	sub_82416268(ctx, base);
loc_83709938:
	// stw r30,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r30.u32);
	// addi r4,r23,-200
	ctx.r4.s64 = ctx.r23.s64 + -200;
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// stw r30,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r30.u32);
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83709960;
	sub_82472FC0(ctx, base);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370996C;
	sub_82E74C08(ctx, base);
	// lwz r11,852(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709980
	if (cr6.lt) goto loc_83709980;
	// lwz r3,832(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// bl 0x82416268
	ctx.lr = 0x83709980;
	sub_82416268(ctx, base);
loc_83709980:
	// lwz r11,392(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 392);
	// addi r4,r24,372
	ctx.r4.s64 = ctx.r24.s64 + 372;
	// stw r30,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r30.u32);
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
	// blt cr6,0x837099a0
	if (cr6.lt) goto loc_837099A0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837099A0:
	// stw r30,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r31.u32);
	// stb r31,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, ctx.r31.u8);
loc_837099B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837099b0
	if (!cr6.eq) goto loc_837099B0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x837099D4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837099E0;
	sub_82E74C08(ctx, base);
	// lwz r10,916(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837099f4
	if (cr6.lt) goto loc_837099F4;
	// lwz r3,896(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// bl 0x82416268
	ctx.lr = 0x837099F4;
	sub_82416268(ctx, base);
loc_837099F4:
	// stw r30,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r30.u32);
	// addi r4,r23,-192
	ctx.r4.s64 = ctx.r23.s64 + -192;
	// stw r31,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83709A1C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709A28;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709a3c
	if (cr6.lt) goto loc_83709A3C;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83709A3C;
	sub_82416268(ctx, base);
loc_83709A3C:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// lwz r4,400(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 400);
	// bl 0x82e97d90
	ctx.lr = 0x83709A54;
	sub_82E97D90(ctx, base);
	// addi r4,r23,-184
	ctx.r4.s64 = ctx.r23.s64 + -184;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82475d40
	ctx.lr = 0x83709A60;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709A6C;
	sub_82E74C08(ctx, base);
	// lwz r11,1012(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1012);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709a80
	if (cr6.lt) goto loc_83709A80;
	// lwz r3,992(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// bl 0x82416268
	ctx.lr = 0x83709A80;
	sub_82416268(ctx, base);
loc_83709A80:
	// lwz r10,424(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// addi r11,r24,404
	ctx.r11.s64 = ctx.r24.s64 + 404;
	// stw r30,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r30.u32);
	// stw r31,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r31,992(r1)
	PPC_STORE_U8(ctx.r1.u32 + 992, ctx.r31.u8);
	// blt cr6,0x83709aa0
	if (cr6.lt) goto loc_83709AA0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83709AA0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x82475d40
	ctx.lr = 0x83709AAC;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709AB8;
	sub_82E74C08(ctx, base);
	// lwz r11,1364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709acc
	if (cr6.lt) goto loc_83709ACC;
	// lwz r3,1344(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1344);
	// bl 0x82416268
	ctx.lr = 0x83709ACC;
	sub_82416268(ctx, base);
loc_83709ACC:
	// stw r30,1364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1364, ctx.r30.u32);
	// addi r4,r23,-168
	ctx.r4.s64 = ctx.r23.s64 + -168;
	// stw r31,1360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1360, ctx.r31.u32);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// stb r31,1344(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1344, ctx.r31.u8);
	// bl 0x82475d40
	ctx.lr = 0x83709AE4;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709AF0;
	sub_82E74C08(ctx, base);
	// lwz r11,1108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709b04
	if (cr6.lt) goto loc_83709B04;
	// lwz r3,1088(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	// bl 0x82416268
	ctx.lr = 0x83709B04;
	sub_82416268(ctx, base);
loc_83709B04:
	// lwz r10,452(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 452);
	// addi r11,r24,432
	ctx.r11.s64 = ctx.r24.s64 + 432;
	// stw r30,1108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1108, ctx.r30.u32);
	// stw r31,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r31,1088(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1088, ctx.r31.u8);
	// blt cr6,0x83709b24
	if (cr6.lt) goto loc_83709B24;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83709B24:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x82475d40
	ctx.lr = 0x83709B30;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709B3C;
	sub_82E74C08(ctx, base);
	// lwz r11,1620(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1620);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709b50
	if (cr6.lt) goto loc_83709B50;
	// lwz r3,1600(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1600);
	// bl 0x82416268
	ctx.lr = 0x83709B50;
	sub_82416268(ctx, base);
loc_83709B50:
	// stw r30,1620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1620, ctx.r30.u32);
	// addi r4,r23,-152
	ctx.r4.s64 = ctx.r23.s64 + -152;
	// stw r31,1616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1616, ctx.r31.u32);
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// stb r31,1600(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1600, ctx.r31.u8);
	// bl 0x82475d40
	ctx.lr = 0x83709B68;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709B74;
	sub_82E74C08(ctx, base);
	// lwz r11,1172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709b88
	if (cr6.lt) goto loc_83709B88;
	// lwz r3,1152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// bl 0x82416268
	ctx.lr = 0x83709B88;
	sub_82416268(ctx, base);
loc_83709B88:
	// lwz r10,480(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 480);
	// addi r11,r24,460
	ctx.r11.s64 = ctx.r24.s64 + 460;
	// stw r30,1172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1172, ctx.r30.u32);
	// stw r31,1168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1168, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r31,1152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1152, ctx.r31.u8);
	// blt cr6,0x83709ba8
	if (cr6.lt) goto loc_83709BA8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83709BA8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x82475d40
	ctx.lr = 0x83709BB4;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709BC0;
	sub_82E74C08(ctx, base);
	// lwz r11,1428(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1428);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709bd4
	if (cr6.lt) goto loc_83709BD4;
	// lwz r3,1408(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1408);
	// bl 0x82416268
	ctx.lr = 0x83709BD4;
	sub_82416268(ctx, base);
loc_83709BD4:
	// stw r30,1428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1428, ctx.r30.u32);
	// addi r4,r23,-136
	ctx.r4.s64 = ctx.r23.s64 + -136;
	// stw r31,1424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1424, ctx.r31.u32);
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// stb r31,1408(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1408, ctx.r31.u8);
	// bl 0x82475d40
	ctx.lr = 0x83709BEC;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709BF8;
	sub_82E74C08(ctx, base);
	// lwz r11,1236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1236);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709c0c
	if (cr6.lt) goto loc_83709C0C;
	// lwz r3,1216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1216);
	// bl 0x82416268
	ctx.lr = 0x83709C0C;
	sub_82416268(ctx, base);
loc_83709C0C:
	// lwz r10,508(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 508);
	// addi r11,r24,488
	ctx.r11.s64 = ctx.r24.s64 + 488;
	// stw r30,1236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1236, ctx.r30.u32);
	// stw r31,1232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1232, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r31,1216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1216, ctx.r31.u8);
	// blt cr6,0x83709c2c
	if (cr6.lt) goto loc_83709C2C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83709C2C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,1536
	ctx.r3.s64 = ctx.r1.s64 + 1536;
	// bl 0x82475d40
	ctx.lr = 0x83709C38;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709C44;
	sub_82E74C08(ctx, base);
	// lwz r11,1556(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1556);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709c58
	if (cr6.lt) goto loc_83709C58;
	// lwz r3,1536(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1536);
	// bl 0x82416268
	ctx.lr = 0x83709C58;
	sub_82416268(ctx, base);
loc_83709C58:
	// stw r30,1556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1556, ctx.r30.u32);
	// addi r4,r23,-116
	ctx.r4.s64 = ctx.r23.s64 + -116;
	// stw r31,1552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1552, ctx.r31.u32);
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// stb r31,1536(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1536, ctx.r31.u8);
	// bl 0x82475d40
	ctx.lr = 0x83709C70;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709C7C;
	sub_82E74C08(ctx, base);
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709c90
	if (cr6.lt) goto loc_83709C90;
	// lwz r3,1280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1280);
	// bl 0x82416268
	ctx.lr = 0x83709C90;
	sub_82416268(ctx, base);
loc_83709C90:
	// lwz r10,536(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 536);
	// addi r11,r24,516
	ctx.r11.s64 = ctx.r24.s64 + 516;
	// stw r30,1300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1300, ctx.r30.u32);
	// stw r31,1296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1296, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r31,1280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1280, ctx.r31.u8);
	// blt cr6,0x83709cb0
	if (cr6.lt) goto loc_83709CB0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83709CB0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,1472
	ctx.r3.s64 = ctx.r1.s64 + 1472;
	// bl 0x82475d40
	ctx.lr = 0x83709CBC;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709CC8;
	sub_82E74C08(ctx, base);
	// lwz r11,1492(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1492);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709cdc
	if (cr6.lt) goto loc_83709CDC;
	// lwz r3,1472(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1472);
	// bl 0x82416268
	ctx.lr = 0x83709CDC;
	sub_82416268(ctx, base);
loc_83709CDC:
	// stw r30,1492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1492, ctx.r30.u32);
	// addi r4,r23,-108
	ctx.r4.s64 = ctx.r23.s64 + -108;
	// stw r31,1488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1488, ctx.r31.u32);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// stb r31,1472(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1472, ctx.r31.u8);
	// bl 0x82475d40
	ctx.lr = 0x83709CF4;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709D00;
	sub_82E74C08(ctx, base);
	// lwz r11,1044(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1044);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709d14
	if (cr6.lt) goto loc_83709D14;
	// lwz r3,1024(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// bl 0x82416268
	ctx.lr = 0x83709D14;
	sub_82416268(ctx, base);
loc_83709D14:
	// lwz r10,564(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 564);
	// addi r11,r24,544
	ctx.r11.s64 = ctx.r24.s64 + 544;
	// stw r30,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r30.u32);
	// stw r31,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r31,1024(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1024, ctx.r31.u8);
	// blt cr6,0x83709d34
	if (cr6.lt) goto loc_83709D34;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83709D34:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82475d40
	ctx.lr = 0x83709D40;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709D4C;
	sub_82E74C08(ctx, base);
	// lwz r11,1076(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1076);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709d60
	if (cr6.lt) goto loc_83709D60;
	// lwz r3,1056(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1056);
	// bl 0x82416268
	ctx.lr = 0x83709D60;
	sub_82416268(ctx, base);
loc_83709D60:
	// stw r30,1076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1076, ctx.r30.u32);
	// addi r4,r23,-96
	ctx.r4.s64 = ctx.r23.s64 + -96;
	// stw r31,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r31.u32);
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// stb r31,1056(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1056, ctx.r31.u8);
	// bl 0x82475d40
	ctx.lr = 0x83709D78;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709D84;
	sub_82E74C08(ctx, base);
	// lwz r11,1140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709d98
	if (cr6.lt) goto loc_83709D98;
	// lwz r3,1120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1120);
	// bl 0x82416268
	ctx.lr = 0x83709D98;
	sub_82416268(ctx, base);
loc_83709D98:
	// stw r30,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r31.u32);
	// stb r31,1120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1120, ctx.r31.u8);
	// lwz r4,572(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 572);
	// bl 0x82e746c0
	ctx.lr = 0x83709DB0;
	sub_82E746C0(ctx, base);
	// addi r4,r23,-84
	ctx.r4.s64 = ctx.r23.s64 + -84;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x82475d40
	ctx.lr = 0x83709DBC;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709DC8;
	sub_82E74C08(ctx, base);
	// lwz r11,1204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1204);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709ddc
	if (cr6.lt) goto loc_83709DDC;
	// lwz r3,1184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1184);
	// bl 0x82416268
	ctx.lr = 0x83709DDC;
	sub_82416268(ctx, base);
loc_83709DDC:
	// stw r30,1204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1204, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,1200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1200, ctx.r31.u32);
	// stb r31,1184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1184, ctx.r31.u8);
	// lwz r4,576(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 576);
	// bl 0x82e746c0
	ctx.lr = 0x83709DF4;
	sub_82E746C0(ctx, base);
	// addi r4,r23,-72
	ctx.r4.s64 = ctx.r23.s64 + -72;
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x82475d40
	ctx.lr = 0x83709E00;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709E0C;
	sub_82E74C08(ctx, base);
	// lwz r11,1268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1268);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709e20
	if (cr6.lt) goto loc_83709E20;
	// lwz r3,1248(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1248);
	// bl 0x82416268
	ctx.lr = 0x83709E20;
	sub_82416268(ctx, base);
loc_83709E20:
	// stw r30,1268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1268, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,1264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1264, ctx.r31.u32);
	// stb r31,1248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1248, ctx.r31.u8);
	// lwz r4,580(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 580);
	// bl 0x82e746c0
	ctx.lr = 0x83709E38;
	sub_82E746C0(ctx, base);
	// addi r4,r23,-56
	ctx.r4.s64 = ctx.r23.s64 + -56;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82475d40
	ctx.lr = 0x83709E44;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709E50;
	sub_82E74C08(ctx, base);
	// lwz r11,1332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1332);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709e64
	if (cr6.lt) goto loc_83709E64;
	// lwz r3,1312(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1312);
	// bl 0x82416268
	ctx.lr = 0x83709E64;
	sub_82416268(ctx, base);
loc_83709E64:
	// stw r30,1332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1332, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,1328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1328, ctx.r31.u32);
	// stb r31,1312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1312, ctx.r31.u8);
	// lwz r4,584(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 584);
	// bl 0x82e746c0
	ctx.lr = 0x83709E7C;
	sub_82E746C0(ctx, base);
	// addi r4,r23,-48
	ctx.r4.s64 = ctx.r23.s64 + -48;
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x82475d40
	ctx.lr = 0x83709E88;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709E94;
	sub_82E74C08(ctx, base);
	// lwz r11,1396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1396);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709ea8
	if (cr6.lt) goto loc_83709EA8;
	// lwz r3,1376(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1376);
	// bl 0x82416268
	ctx.lr = 0x83709EA8;
	sub_82416268(ctx, base);
loc_83709EA8:
	// stw r30,1396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1396, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,1392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1392, ctx.r31.u32);
	// stb r31,1376(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1376, ctx.r31.u8);
	// lwz r4,588(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 588);
	// bl 0x82e746c0
	ctx.lr = 0x83709EC0;
	sub_82E746C0(ctx, base);
	// addi r4,r23,-40
	ctx.r4.s64 = ctx.r23.s64 + -40;
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x82475d40
	ctx.lr = 0x83709ECC;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709ED8;
	sub_82E74C08(ctx, base);
	// lwz r11,1460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1460);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709eec
	if (cr6.lt) goto loc_83709EEC;
	// lwz r3,1440(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1440);
	// bl 0x82416268
	ctx.lr = 0x83709EEC;
	sub_82416268(ctx, base);
loc_83709EEC:
	// stw r30,1460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1460, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,1456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1456, ctx.r31.u32);
	// stb r31,1440(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1440, ctx.r31.u8);
	// lwz r4,592(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 592);
	// bl 0x82e746c0
	ctx.lr = 0x83709F04;
	sub_82E746C0(ctx, base);
	// addi r4,r23,-16
	ctx.r4.s64 = ctx.r23.s64 + -16;
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// bl 0x82475d40
	ctx.lr = 0x83709F10;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709F1C;
	sub_82E74C08(ctx, base);
	// lwz r11,1524(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1524);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709f30
	if (cr6.lt) goto loc_83709F30;
	// lwz r3,1504(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1504);
	// bl 0x82416268
	ctx.lr = 0x83709F30;
	sub_82416268(ctx, base);
loc_83709F30:
	// stw r30,1524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1524, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,1520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1520, ctx.r31.u32);
	// addi r28,r24,600
	ctx.r28.s64 = ctx.r24.s64 + 600;
	// stb r31,1504(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1504, ctx.r31.u8);
	// lwz r4,600(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 600);
	// bl 0x82e749f8
	ctx.lr = 0x83709F4C;
	sub_82E749F8(ctx, base);
	// lwz r10,600(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 600);
	// lwz r11,608(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 608);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// extsw r29,r11
	ctx.r29.s64 = ctx.r11.s32;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x83709fd0
	if (cr6.eq) goto loc_83709FD0;
loc_83709F68:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709f7c
	if (cr6.lt) goto loc_83709F7C;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x83709f80
	goto loc_83709F80;
loc_83709F7C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83709F80:
	// addi r3,r1,1568
	ctx.r3.s64 = ctx.r1.s64 + 1568;
	// bl 0x82475d40
	ctx.lr = 0x83709F88;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709F94;
	sub_82E74C08(ctx, base);
	// lwz r11,1588(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709fa8
	if (cr6.lt) goto loc_83709FA8;
	// lwz r3,1568(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1568);
	// bl 0x82416268
	ctx.lr = 0x83709FA8;
	sub_82416268(ctx, base);
loc_83709FA8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// stw r30,1588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1588, ctx.r30.u32);
	// stw r31,1584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1584, ctx.r31.u32);
	// stb r31,1568(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1568, ctx.r31.u8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x83709f68
	if (!cr6.eq) goto loc_83709F68;
loc_83709FD0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,1632
	ctx.r3.s64 = ctx.r1.s64 + 1632;
	// bl 0x82475d40
	ctx.lr = 0x83709FDC;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83709FE8;
	sub_82E74C08(ctx, base);
	// lwz r11,1652(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1652);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83709ffc
	if (cr6.lt) goto loc_83709FFC;
	// lwz r3,1632(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1632);
	// bl 0x82416268
	ctx.lr = 0x83709FFC;
	sub_82416268(ctx, base);
loc_83709FFC:
	// stw r30,1652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1652, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,1648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1648, ctx.r31.u32);
	// stb r31,1632(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1632, ctx.r31.u8);
	// lwz r4,616(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 616);
	// bl 0x82e746c0
	ctx.lr = 0x8370A014;
	sub_82E746C0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x831cf100
	ctx.lr = 0x8370A01C;
	sub_831CF100(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831cf100
	ctx.lr = 0x8370A024;
	sub_831CF100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1744
	ctx.r1.s64 = ctx.r1.s64 + 1744;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370A030"))) PPC_WEAK_FUNC(sub_8370A030);
PPC_FUNC_IMPL(__imp__sub_8370A030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x8370A038;
	__savegprlr_16(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r24,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r24.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r24.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x83691bb8
	ctx.lr = 0x8370A060;
	sub_83691BB8(ctx, base);
	// lwz r10,552(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r11,556(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// add r16,r10,r11
	ctx.r16.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r16
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, xer);
	// bge cr6,0x8370b204
	if (!cr6.lt) goto loc_8370B204;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,11
	ctx.r8.s64 = 720896;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// li r22,15
	ctx.r22.s64 = 15;
	// li r21,4
	ctx.r21.s64 = 4;
	// ori r17,r8,1
	ctx.r17.u64 = ctx.r8.u64 | 1;
	// addi r20,r11,-24992
	ctx.r20.s64 = ctx.r11.s64 + -24992;
	// addi r18,r10,8980
	ctx.r18.s64 = ctx.r10.s64 + 8980;
	// addi r19,r9,26164
	ctx.r19.s64 = ctx.r9.s64 + 26164;
loc_8370A0A4:
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// addi r11,r1,864
	ctx.r11.s64 = ctx.r1.s64 + 864;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// ld r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// ld r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,872(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 872);
	// lwz r4,876(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// bl 0x82472fc0
	ctx.lr = 0x8370A0D4;
	sub_82472FC0(ctx, base);
	// addi r6,r20,-444
	ctx.r6.s64 = ctx.r20.s64 + -444;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A0EC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370a184
	if (!cr6.eq) goto loc_8370A184;
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
	// addi r11,r1,1008
	ctx.r11.s64 = ctx.r1.s64 + 1008;
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
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
	// lwz r4,1020(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1020);
	// lwz r5,1016(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1016);
	// bl 0x82472fc0
	ctx.lr = 0x8370A128;
	sub_82472FC0(ctx, base);
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8370a13c
	if (!cr6.lt) goto loc_8370A13C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_8370A13C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370A140:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370a140
	if (!cr6.eq) goto loc_8370A140;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r23,20
	ctx.r3.s64 = ctx.r23.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370A164;
	sub_824208C8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370a178
	if (cr6.lt) goto loc_8370A178;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8370A178;
	sub_82416268(ctx, base);
loc_8370A178:
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
loc_8370A184:
	// addi r6,r20,-436
	ctx.r6.s64 = ctx.r20.s64 + -436;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A19C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370a1dc
	if (!cr6.eq) goto loc_8370A1DC;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r10,r1,1040
	ctx.r10.s64 = ctx.r1.s64 + 1040;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,1040(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1040);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8370a1d4
	if (!cr6.eq) goto loc_8370A1D4;
	// ld r11,1048(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1048);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370a1d8
	goto loc_8370A1D8;
loc_8370A1D4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370A1D8:
	// stw r11,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r11.u32);
loc_8370A1DC:
	// addi r6,r20,-428
	ctx.r6.s64 = ctx.r20.s64 + -428;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A1F4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370a28c
	if (!cr6.eq) goto loc_8370A28C;
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// addi r11,r1,896
	ctx.r11.s64 = ctx.r1.s64 + 896;
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r24,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r24.u8);
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
	// lwz r4,908(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 908);
	// lwz r5,904(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 904);
	// bl 0x82472fc0
	ctx.lr = 0x8370A230;
	sub_82472FC0(ctx, base);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8370a244
	if (!cr6.lt) goto loc_8370A244;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_8370A244:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370A248:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370a248
	if (!cr6.eq) goto loc_8370A248;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r23,116
	ctx.r3.s64 = ctx.r23.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370A26C;
	sub_824208C8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370a280
	if (cr6.lt) goto loc_8370A280;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8370A280;
	sub_82416268(ctx, base);
loc_8370A280:
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// stb r24,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r24.u8);
loc_8370A28C:
	// addi r6,r20,-420
	ctx.r6.s64 = ctx.r20.s64 + -420;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A2A4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370a2f8
	if (!cr6.eq) goto loc_8370A2F8;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,576
	ctx.r10.s64 = ctx.r1.s64 + 576;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,576(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370a2dc
	if (!cr6.eq) goto loc_8370A2DC;
	// ld r11,584(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 584);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370a2f4
	goto loc_8370A2F4;
loc_8370A2DC:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370a2f0
	if (!cr6.eq) goto loc_8370A2F0;
	// ld r11,584(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 584);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370a2f4
	goto loc_8370A2F4;
loc_8370A2F0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370A2F4:
	// stw r11,148(r23)
	PPC_STORE_U32(ctx.r23.u32 + 148, ctx.r11.u32);
loc_8370A2F8:
	// addi r6,r20,-400
	ctx.r6.s64 = ctx.r20.s64 + -400;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A310;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370a444
	if (!cr6.eq) goto loc_8370A444;
	// addi r31,r23,152
	ctx.r31.s64 = ctx.r23.s64 + 152;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// stw r21,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r21.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r21,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r21.u32);
	// stw r30,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r30.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r29,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x8370A348;
	sub_8247B7D8(ctx, base);
	// lwz r3,160(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 160);
	// stw r24,152(r23)
	PPC_STORE_U32(ctx.r23.u32 + 152, ctx.r24.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8370a368
	if (cr6.eq) goto loc_8370A368;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x8247b268
	ctx.lr = 0x8370A360;
	sub_8247B268(ctx, base);
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
loc_8370A368:
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bge cr6,0x8370a444
	if (!cr6.lt) goto loc_8370A444;
loc_8370A388:
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addi r10,r1,1024
	ctx.r10.s64 = ctx.r1.s64 + 1024;
	// ld r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1024(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8370a3b4
	if (!cr6.eq) goto loc_8370A3B4;
	// ld r11,1032(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1032);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370a3b8
	goto loc_8370A3B8;
loc_8370A3B4:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_8370A3B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8370a414
	if (cr6.lt) goto loc_8370A414;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8370a404
	if (!cr6.gt) goto loc_8370A404;
	// stw r30,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r30.u32);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// stw r29,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r29.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r21,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r21.u32);
	// stw r21,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r21.u32);
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// bl 0x8247b270
	ctx.lr = 0x8370A3FC;
	sub_8247B270(ctx, base);
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// b 0x8370a408
	goto loc_8370A408;
loc_8370A404:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8370A408:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8370a438
	if (cr6.eq) goto loc_8370A438;
loc_8370A414:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8370a42c
	if (cr0.eq) goto loc_8370A42C;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_8370A42C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8370A438:
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// blt cr6,0x8370a388
	if (cr6.lt) goto loc_8370A388;
loc_8370A444:
	// addi r6,r20,-384
	ctx.r6.s64 = ctx.r20.s64 + -384;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A45C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370a4b0
	if (!cr6.eq) goto loc_8370A4B0;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,672
	ctx.r10.s64 = ctx.r1.s64 + 672;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,672(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370a494
	if (!cr6.eq) goto loc_8370A494;
	// ld r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 680);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370a4ac
	goto loc_8370A4AC;
loc_8370A494:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370a4a8
	if (!cr6.eq) goto loc_8370A4A8;
	// ld r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 680);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370a4ac
	goto loc_8370A4AC;
loc_8370A4A8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370A4AC:
	// stw r11,168(r23)
	PPC_STORE_U32(ctx.r23.u32 + 168, ctx.r11.u32);
loc_8370A4B0:
	// addi r6,r20,-372
	ctx.r6.s64 = ctx.r20.s64 + -372;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A4C8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370a560
	if (!cr6.eq) goto loc_8370A560;
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// addi r11,r1,928
	ctx.r11.s64 = ctx.r1.s64 + 928;
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r24,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r24.u8);
	// addi r10,r25,16
	ctx.r10.s64 = ctx.r25.s64 + 16;
	// ld r9,16(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// ld r8,24(r25)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,936(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 936);
	// lwz r4,940(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// bl 0x82472fc0
	ctx.lr = 0x8370A504;
	sub_82472FC0(ctx, base);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8370a518
	if (!cr6.lt) goto loc_8370A518;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_8370A518:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370A51C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370a51c
	if (!cr6.eq) goto loc_8370A51C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r23,172
	ctx.r3.s64 = ctx.r23.s64 + 172;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370A540;
	sub_824208C8(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370a554
	if (cr6.lt) goto loc_8370A554;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8370A554;
	sub_82416268(ctx, base);
loc_8370A554:
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// stb r24,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r24.u8);
loc_8370A560:
	// addi r6,r20,-364
	ctx.r6.s64 = ctx.r20.s64 + -364;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A578;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370a610
	if (!cr6.eq) goto loc_8370A610;
	// stw r24,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r24.u32);
	// addi r11,r1,992
	ctx.r11.s64 = ctx.r1.s64 + 992;
	// stb r24,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r24.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r22,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r22.u32);
	// addi r10,r25,16
	ctx.r10.s64 = ctx.r25.s64 + 16;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// ld r8,16(r25)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,1000(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1000);
	// lwz r4,1004(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// bl 0x82472fc0
	ctx.lr = 0x8370A5B4;
	sub_82472FC0(ctx, base);
	// lwz r7,276(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8370a5c8
	if (!cr6.lt) goto loc_8370A5C8;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_8370A5C8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370A5CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370a5cc
	if (!cr6.eq) goto loc_8370A5CC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r23,200
	ctx.r3.s64 = ctx.r23.s64 + 200;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370A5F0;
	sub_824208C8(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370a604
	if (cr6.lt) goto loc_8370A604;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8370A604;
	sub_82416268(ctx, base);
loc_8370A604:
	// stw r22,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r22.u32);
	// stw r24,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r24.u32);
	// stb r24,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r24.u8);
loc_8370A610:
	// addi r6,r20,-352
	ctx.r6.s64 = ctx.r20.s64 + -352;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A628;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370a6c0
	if (!cr6.eq) goto loc_8370A6C0;
	// stw r22,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r22.u32);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// stw r24,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r24.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stb r24,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r24.u8);
	// addi r10,r25,16
	ctx.r10.s64 = ctx.r25.s64 + 16;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// ld r8,16(r25)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,968(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 968);
	// lwz r4,972(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 972);
	// bl 0x82472fc0
	ctx.lr = 0x8370A664;
	sub_82472FC0(ctx, base);
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8370a678
	if (!cr6.lt) goto loc_8370A678;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
loc_8370A678:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370A67C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370a67c
	if (!cr6.eq) goto loc_8370A67C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r23,228
	ctx.r3.s64 = ctx.r23.s64 + 228;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370A6A0;
	sub_824208C8(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370a6b4
	if (cr6.lt) goto loc_8370A6B4;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8370A6B4;
	sub_82416268(ctx, base);
loc_8370A6B4:
	// stw r22,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r22.u32);
	// stw r24,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r24.u32);
	// stb r24,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r24.u8);
loc_8370A6C0:
	// addi r6,r20,-336
	ctx.r6.s64 = ctx.r20.s64 + -336;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A6D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370a770
	if (!cr6.eq) goto loc_8370A770;
	// stw r22,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r22.u32);
	// addi r11,r1,880
	ctx.r11.s64 = ctx.r1.s64 + 880;
	// stw r24,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r24.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stb r24,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r24.u8);
	// addi r10,r25,16
	ctx.r10.s64 = ctx.r25.s64 + 16;
	// ld r9,16(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// ld r8,24(r25)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,888(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 888);
	// lwz r4,892(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// bl 0x82472fc0
	ctx.lr = 0x8370A714;
	sub_82472FC0(ctx, base);
	// lwz r7,340(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8370a728
	if (!cr6.lt) goto loc_8370A728;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_8370A728:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370A72C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370a72c
	if (!cr6.eq) goto loc_8370A72C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r23,256
	ctx.r3.s64 = ctx.r23.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370A750;
	sub_824208C8(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370a764
	if (cr6.lt) goto loc_8370A764;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8370A764;
	sub_82416268(ctx, base);
loc_8370A764:
	// stw r22,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r22.u32);
	// stw r24,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r24.u32);
	// stb r24,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r24.u8);
loc_8370A770:
	// addi r6,r20,-324
	ctx.r6.s64 = ctx.r20.s64 + -324;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A788;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370a820
	if (!cr6.eq) goto loc_8370A820;
	// stw r22,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r22.u32);
	// addi r11,r1,912
	ctx.r11.s64 = ctx.r1.s64 + 912;
	// stw r24,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r24.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r24,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r24.u8);
	// addi r10,r25,16
	ctx.r10.s64 = ctx.r25.s64 + 16;
	// ld r9,16(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// ld r8,24(r25)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,920(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 920);
	// lwz r4,924(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 924);
	// bl 0x82472fc0
	ctx.lr = 0x8370A7C4;
	sub_82472FC0(ctx, base);
	// lwz r7,308(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8370a7d8
	if (!cr6.lt) goto loc_8370A7D8;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
loc_8370A7D8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370A7DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370a7dc
	if (!cr6.eq) goto loc_8370A7DC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r23,284
	ctx.r3.s64 = ctx.r23.s64 + 284;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370A800;
	sub_824208C8(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370a814
	if (cr6.lt) goto loc_8370A814;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8370A814;
	sub_82416268(ctx, base);
loc_8370A814:
	// stw r22,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r22.u32);
	// stw r24,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r24.u32);
	// stb r24,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r24.u8);
loc_8370A820:
	// addi r6,r20,-312
	ctx.r6.s64 = ctx.r20.s64 + -312;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A838;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370a88c
	if (!cr6.eq) goto loc_8370A88C;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,496(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370a870
	if (!cr6.eq) goto loc_8370A870;
	// ld r11,504(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 504);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370a888
	goto loc_8370A888;
loc_8370A870:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370a884
	if (!cr6.eq) goto loc_8370A884;
	// ld r11,504(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 504);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370a888
	goto loc_8370A888;
loc_8370A884:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370A888:
	// stw r11,312(r23)
	PPC_STORE_U32(ctx.r23.u32 + 312, ctx.r11.u32);
loc_8370A88C:
	// addi r6,r20,-300
	ctx.r6.s64 = ctx.r20.s64 + -300;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A8A4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370a8f8
	if (!cr6.eq) goto loc_8370A8F8;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,512(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370a8dc
	if (!cr6.eq) goto loc_8370A8DC;
	// ld r11,520(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 520);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370a8f4
	goto loc_8370A8F4;
loc_8370A8DC:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370a8f0
	if (!cr6.eq) goto loc_8370A8F0;
	// ld r11,520(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 520);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370a8f4
	goto loc_8370A8F4;
loc_8370A8F0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370A8F4:
	// stw r11,316(r23)
	PPC_STORE_U32(ctx.r23.u32 + 316, ctx.r11.u32);
loc_8370A8F8:
	// addi r6,r20,-288
	ctx.r6.s64 = ctx.r20.s64 + -288;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A910;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370a964
	if (!cr6.eq) goto loc_8370A964;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,592
	ctx.r10.s64 = ctx.r1.s64 + 592;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,592(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370a948
	if (!cr6.eq) goto loc_8370A948;
	// ld r11,600(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 600);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370a960
	goto loc_8370A960;
loc_8370A948:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370a95c
	if (!cr6.eq) goto loc_8370A95C;
	// ld r11,600(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 600);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370a960
	goto loc_8370A960;
loc_8370A95C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370A960:
	// stw r11,320(r23)
	PPC_STORE_U32(ctx.r23.u32 + 320, ctx.r11.u32);
loc_8370A964:
	// addi r6,r20,-276
	ctx.r6.s64 = ctx.r20.s64 + -276;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A97C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370a9d0
	if (!cr6.eq) goto loc_8370A9D0;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,624
	ctx.r10.s64 = ctx.r1.s64 + 624;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,624(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370a9b4
	if (!cr6.eq) goto loc_8370A9B4;
	// ld r11,632(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 632);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370a9cc
	goto loc_8370A9CC;
loc_8370A9B4:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370a9c8
	if (!cr6.eq) goto loc_8370A9C8;
	// ld r11,632(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 632);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370a9cc
	goto loc_8370A9CC;
loc_8370A9C8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370A9CC:
	// stw r11,324(r23)
	PPC_STORE_U32(ctx.r23.u32 + 324, ctx.r11.u32);
loc_8370A9D0:
	// addi r6,r20,-264
	ctx.r6.s64 = ctx.r20.s64 + -264;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370A9E8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370aa3c
	if (!cr6.eq) goto loc_8370AA3C;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,656
	ctx.r10.s64 = ctx.r1.s64 + 656;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,656(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370aa20
	if (!cr6.eq) goto loc_8370AA20;
	// ld r11,664(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 664);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370aa38
	goto loc_8370AA38;
loc_8370AA20:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370aa34
	if (!cr6.eq) goto loc_8370AA34;
	// ld r11,664(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 664);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370aa38
	goto loc_8370AA38;
loc_8370AA34:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370AA38:
	// stw r11,328(r23)
	PPC_STORE_U32(ctx.r23.u32 + 328, ctx.r11.u32);
loc_8370AA3C:
	// addi r6,r20,-252
	ctx.r6.s64 = ctx.r20.s64 + -252;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370AA54;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370aaa8
	if (!cr6.eq) goto loc_8370AAA8;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,688
	ctx.r10.s64 = ctx.r1.s64 + 688;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,688(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370aa8c
	if (!cr6.eq) goto loc_8370AA8C;
	// ld r11,696(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 696);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370aaa4
	goto loc_8370AAA4;
loc_8370AA8C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370aaa0
	if (!cr6.eq) goto loc_8370AAA0;
	// ld r11,696(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 696);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370aaa4
	goto loc_8370AAA4;
loc_8370AAA0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370AAA4:
	// stw r11,332(r23)
	PPC_STORE_U32(ctx.r23.u32 + 332, ctx.r11.u32);
loc_8370AAA8:
	// addi r6,r20,-240
	ctx.r6.s64 = ctx.r20.s64 + -240;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370AAC0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370ab14
	if (!cr6.eq) goto loc_8370AB14;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,720
	ctx.r10.s64 = ctx.r1.s64 + 720;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,720(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370aaf8
	if (!cr6.eq) goto loc_8370AAF8;
	// ld r11,728(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 728);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370ab10
	goto loc_8370AB10;
loc_8370AAF8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370ab0c
	if (!cr6.eq) goto loc_8370AB0C;
	// ld r11,728(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 728);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370ab10
	goto loc_8370AB10;
loc_8370AB0C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370AB10:
	// stw r11,336(r23)
	PPC_STORE_U32(ctx.r23.u32 + 336, ctx.r11.u32);
loc_8370AB14:
	// addi r6,r20,-228
	ctx.r6.s64 = ctx.r20.s64 + -228;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370AB2C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370ab80
	if (!cr6.eq) goto loc_8370AB80;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,752
	ctx.r10.s64 = ctx.r1.s64 + 752;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,752(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370ab64
	if (!cr6.eq) goto loc_8370AB64;
	// ld r11,760(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 760);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370ab7c
	goto loc_8370AB7C;
loc_8370AB64:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370ab78
	if (!cr6.eq) goto loc_8370AB78;
	// ld r11,760(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 760);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370ab7c
	goto loc_8370AB7C;
loc_8370AB78:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370AB7C:
	// stw r11,340(r23)
	PPC_STORE_U32(ctx.r23.u32 + 340, ctx.r11.u32);
loc_8370AB80:
	// addi r6,r20,-216
	ctx.r6.s64 = ctx.r20.s64 + -216;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370AB98;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370abec
	if (!cr6.eq) goto loc_8370ABEC;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,784
	ctx.r10.s64 = ctx.r1.s64 + 784;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,784(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370abd0
	if (!cr6.eq) goto loc_8370ABD0;
	// ld r11,792(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 792);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370abe8
	goto loc_8370ABE8;
loc_8370ABD0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370abe4
	if (!cr6.eq) goto loc_8370ABE4;
	// ld r11,792(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 792);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370abe8
	goto loc_8370ABE8;
loc_8370ABE4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370ABE8:
	// stw r11,344(r23)
	PPC_STORE_U32(ctx.r23.u32 + 344, ctx.r11.u32);
loc_8370ABEC:
	// addi r6,r20,-204
	ctx.r6.s64 = ctx.r20.s64 + -204;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370AC04;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370ac58
	if (!cr6.eq) goto loc_8370AC58;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,816
	ctx.r10.s64 = ctx.r1.s64 + 816;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,816(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370ac3c
	if (!cr6.eq) goto loc_8370AC3C;
	// ld r11,824(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 824);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370ac54
	goto loc_8370AC54;
loc_8370AC3C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370ac50
	if (!cr6.eq) goto loc_8370AC50;
	// ld r11,824(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 824);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370ac54
	goto loc_8370AC54;
loc_8370AC50:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370AC54:
	// stw r11,348(r23)
	PPC_STORE_U32(ctx.r23.u32 + 348, ctx.r11.u32);
loc_8370AC58:
	// addi r6,r20,-192
	ctx.r6.s64 = ctx.r20.s64 + -192;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370AC70;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370acc4
	if (!cr6.eq) goto loc_8370ACC4;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,848
	ctx.r10.s64 = ctx.r1.s64 + 848;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,848(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370aca8
	if (!cr6.eq) goto loc_8370ACA8;
	// ld r11,856(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 856);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370acc0
	goto loc_8370ACC0;
loc_8370ACA8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370acbc
	if (!cr6.eq) goto loc_8370ACBC;
	// ld r11,856(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 856);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370acc0
	goto loc_8370ACC0;
loc_8370ACBC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370ACC0:
	// stw r11,352(r23)
	PPC_STORE_U32(ctx.r23.u32 + 352, ctx.r11.u32);
loc_8370ACC4:
	// addi r6,r20,-176
	ctx.r6.s64 = ctx.r20.s64 + -176;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370ACDC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370ad30
	if (!cr6.eq) goto loc_8370AD30;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,768
	ctx.r10.s64 = ctx.r1.s64 + 768;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,768(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370ad14
	if (!cr6.eq) goto loc_8370AD14;
	// ld r11,776(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 776);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370ad2c
	goto loc_8370AD2C;
loc_8370AD14:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370ad28
	if (!cr6.eq) goto loc_8370AD28;
	// ld r11,776(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 776);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370ad2c
	goto loc_8370AD2C;
loc_8370AD28:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370AD2C:
	// stw r11,356(r23)
	PPC_STORE_U32(ctx.r23.u32 + 356, ctx.r11.u32);
loc_8370AD30:
	// addi r6,r20,-164
	ctx.r6.s64 = ctx.r20.s64 + -164;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370AD48;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370ad9c
	if (!cr6.eq) goto loc_8370AD9C;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,528
	ctx.r10.s64 = ctx.r1.s64 + 528;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,528(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370ad80
	if (!cr6.eq) goto loc_8370AD80;
	// ld r11,536(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 536);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370ad98
	goto loc_8370AD98;
loc_8370AD80:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370ad94
	if (!cr6.eq) goto loc_8370AD94;
	// ld r11,536(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 536);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370ad98
	goto loc_8370AD98;
loc_8370AD94:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370AD98:
	// stw r11,360(r23)
	PPC_STORE_U32(ctx.r23.u32 + 360, ctx.r11.u32);
loc_8370AD9C:
	// addi r6,r20,-152
	ctx.r6.s64 = ctx.r20.s64 + -152;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370ADB4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370ae08
	if (!cr6.eq) goto loc_8370AE08;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,704
	ctx.r10.s64 = ctx.r1.s64 + 704;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,704(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370adec
	if (!cr6.eq) goto loc_8370ADEC;
	// ld r11,712(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 712);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370ae04
	goto loc_8370AE04;
loc_8370ADEC:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370ae00
	if (!cr6.eq) goto loc_8370AE00;
	// ld r11,712(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 712);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370ae04
	goto loc_8370AE04;
loc_8370AE00:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370AE04:
	// stw r11,364(r23)
	PPC_STORE_U32(ctx.r23.u32 + 364, ctx.r11.u32);
loc_8370AE08:
	// addi r6,r20,-136
	ctx.r6.s64 = ctx.r20.s64 + -136;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370AE20;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370ae74
	if (!cr6.eq) goto loc_8370AE74;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,480(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370ae58
	if (!cr6.eq) goto loc_8370AE58;
	// ld r11,488(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 488);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370ae70
	goto loc_8370AE70;
loc_8370AE58:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370ae6c
	if (!cr6.eq) goto loc_8370AE6C;
	// ld r11,488(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 488);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370ae70
	goto loc_8370AE70;
loc_8370AE6C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370AE70:
	// stw r11,368(r23)
	PPC_STORE_U32(ctx.r23.u32 + 368, ctx.r11.u32);
loc_8370AE74:
	// addi r6,r20,-124
	ctx.r6.s64 = ctx.r20.s64 + -124;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,25
	ctx.r7.s64 = 25;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370AE8C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370aee0
	if (!cr6.eq) goto loc_8370AEE0;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,832
	ctx.r10.s64 = ctx.r1.s64 + 832;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,832(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370aec4
	if (!cr6.eq) goto loc_8370AEC4;
	// ld r11,840(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 840);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370aedc
	goto loc_8370AEDC;
loc_8370AEC4:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370aed8
	if (!cr6.eq) goto loc_8370AED8;
	// ld r11,840(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 840);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370aedc
	goto loc_8370AEDC;
loc_8370AED8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370AEDC:
	// stw r11,372(r23)
	PPC_STORE_U32(ctx.r23.u32 + 372, ctx.r11.u32);
loc_8370AEE0:
	// addi r6,r20,-96
	ctx.r6.s64 = ctx.r20.s64 + -96;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370AEF8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370af4c
	if (!cr6.eq) goto loc_8370AF4C;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,608(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370af30
	if (!cr6.eq) goto loc_8370AF30;
	// ld r11,616(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 616);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370af48
	goto loc_8370AF48;
loc_8370AF30:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370af44
	if (!cr6.eq) goto loc_8370AF44;
	// ld r11,616(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 616);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370af48
	goto loc_8370AF48;
loc_8370AF44:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370AF48:
	// stw r11,376(r23)
	PPC_STORE_U32(ctx.r23.u32 + 376, ctx.r11.u32);
loc_8370AF4C:
	// addi r6,r20,-76
	ctx.r6.s64 = ctx.r20.s64 + -76;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370AF64;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370afb8
	if (!cr6.eq) goto loc_8370AFB8;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,736
	ctx.r10.s64 = ctx.r1.s64 + 736;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,736(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370af9c
	if (!cr6.eq) goto loc_8370AF9C;
	// ld r11,744(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 744);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370afb4
	goto loc_8370AFB4;
loc_8370AF9C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370afb0
	if (!cr6.eq) goto loc_8370AFB0;
	// ld r11,744(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 744);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370afb4
	goto loc_8370AFB4;
loc_8370AFB0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370AFB4:
	// stw r11,380(r23)
	PPC_STORE_U32(ctx.r23.u32 + 380, ctx.r11.u32);
loc_8370AFB8:
	// addi r6,r20,-52
	ctx.r6.s64 = ctx.r20.s64 + -52;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370AFD0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370b024
	if (!cr6.eq) goto loc_8370B024;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,640
	ctx.r10.s64 = ctx.r1.s64 + 640;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,640(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370b008
	if (!cr6.eq) goto loc_8370B008;
	// ld r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 648);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370b020
	goto loc_8370B020;
loc_8370B008:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370b01c
	if (!cr6.eq) goto loc_8370B01C;
	// ld r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 648);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370b020
	goto loc_8370B020;
loc_8370B01C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370B020:
	// stw r11,384(r23)
	PPC_STORE_U32(ctx.r23.u32 + 384, ctx.r11.u32);
loc_8370B024:
	// addi r6,r20,-28
	ctx.r6.s64 = ctx.r20.s64 + -28;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370B03C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370b090
	if (!cr6.eq) goto loc_8370B090;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,800
	ctx.r10.s64 = ctx.r1.s64 + 800;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,800(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370b074
	if (!cr6.eq) goto loc_8370B074;
	// ld r11,808(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 808);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370b08c
	goto loc_8370B08C;
loc_8370B074:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370b088
	if (!cr6.eq) goto loc_8370B088;
	// ld r11,808(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 808);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370b08c
	goto loc_8370B08C;
loc_8370B088:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370B08C:
	// stw r11,388(r23)
	PPC_STORE_U32(ctx.r23.u32 + 388, ctx.r11.u32);
loc_8370B090:
	// addi r6,r20,-4
	ctx.r6.s64 = ctx.r20.s64 + -4;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370B0A8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370b180
	if (!cr6.eq) goto loc_8370B180;
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// addi r11,r1,944
	ctx.r11.s64 = ctx.r1.s64 + 944;
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r24,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r24.u8);
	// addi r10,r25,16
	ctx.r10.s64 = ctx.r25.s64 + 16;
	// ld r9,16(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// ld r8,24(r25)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,952(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 952);
	// lwz r4,956(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 956);
	// bl 0x82472fc0
	ctx.lr = 0x8370B0E4;
	sub_82472FC0(ctx, base);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8370b0f8
	if (!cr6.lt) goto loc_8370B0F8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_8370B0F8:
	// stw r22,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r22.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r24,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r24.u32);
	// stb r24,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r24.u8);
loc_8370B108:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370b108
	if (!cr6.eq) goto loc_8370B108;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370B12C;
	sub_824208C8(ctx, base);
	// addi r5,r23,392
	ctx.r5.s64 = ctx.r23.s64 + 392;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// lwz r6,448(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 448);
	// addi r3,r23,-200
	ctx.r3.s64 = ctx.r23.s64 + -200;
	// bl 0x83354a28
	ctx.lr = 0x8370B140;
	sub_83354A28(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370b154
	if (cr6.lt) goto loc_8370B154;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x8386d088
	ctx.lr = 0x8370B154;
	sub_8386D088(ctx, base);
loc_8370B154:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r22,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r22.u32);
	// stw r24,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r24.u8);
	// blt cr6,0x8370b174
	if (cr6.lt) goto loc_8370B174;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8370B174;
	sub_82416268(ctx, base);
loc_8370B174:
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// stb r24,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r24.u8);
loc_8370B180:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370B198;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370b1d8
	if (!cr6.eq) goto loc_8370B1D8;
	// ld r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 16);
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// ld r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 24);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,976(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8370b1d0
	if (!cr6.eq) goto loc_8370B1D0;
	// ld r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 984);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370b1d4
	goto loc_8370B1D4;
loc_8370B1D0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8370B1D4:
	// stw r11,452(r23)
	PPC_STORE_U32(ctx.r23.u32 + 452, ctx.r11.u32);
loc_8370B1D8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b1ec
	if (cr6.lt) goto loc_8370B1EC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8370B1EC;
	sub_82416268(ctx, base);
loc_8370B1EC:
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// cmplw cr6,r25,r16
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r16.u32, xer);
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// blt cr6,0x8370a0a4
	if (cr6.lt) goto loc_8370A0A4;
loc_8370B204:
	// lwz r31,560(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8370b220
	if (cr6.eq) goto loc_8370B220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8370B218;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8370B220;
	sub_82416268(ctx, base);
loc_8370B220:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370B22C"))) PPC_WEAK_FUNC(sub_8370B22C);
PPC_FUNC_IMPL(__imp__sub_8370B22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370B230"))) PPC_WEAK_FUNC(sub_8370B230);
PPC_FUNC_IMPL(__imp__sub_8370B230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8370B238;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8370B244;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,21
	ctx.r5.s64 = 21;
	// addi r29,r11,-26100
	ctx.r29.s64 = ctx.r11.s64 + -26100;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8370B25C;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-24880
	ctx.r7.s64 = ctx.r10.s64 + -24880;
	// addi r5,r8,-24896
	ctx.r5.s64 = ctx.r8.s64 + -24896;
	// addi r6,r9,-24892
	ctx.r6.s64 = ctx.r9.s64 + -24892;
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
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B2A4;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B2C0;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B2DC;
	sub_824208C8(ctx, base);
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stb r30,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r30.u8);
	// addi r4,r29,72
	ctx.r4.s64 = ctx.r29.s64 + 72;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B2F8;
	sub_824208C8(ctx, base);
	// stw r28,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r28.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// stb r30,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r30.u8);
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B314;
	sub_824208C8(ctx, base);
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// bl 0x835fe558
	ctx.lr = 0x8370B31C;
	sub_835FE558(ctx, base);
	// std r30,536(r31)
	PPC_STORE_U64(ctx.r31.u32 + 536, ctx.r30.u64);
	// stw r28,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r28.u32);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// addi r4,r29,104
	ctx.r4.s64 = ctx.r29.s64 + 104;
	// stb r30,544(r31)
	PPC_STORE_U8(ctx.r31.u32 + 544, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B33C;
	sub_824208C8(ctx, base);
	// stw r28,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r28.u32);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// stb r30,572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 572, ctx.r30.u8);
	// addi r4,r29,120
	ctx.r4.s64 = ctx.r29.s64 + 120;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B358;
	sub_824208C8(ctx, base);
	// stw r30,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r30.u32);
	// stw r28,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r28.u32);
	// addi r3,r31,604
	ctx.r3.s64 = ctx.r31.s64 + 604;
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// addi r4,r29,136
	ctx.r4.s64 = ctx.r29.s64 + 136;
	// stb r30,604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 604, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B378;
	sub_824208C8(ctx, base);
	// stw r28,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r28.u32);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// stb r30,632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 632, ctx.r30.u8);
	// addi r3,r31,632
	ctx.r3.s64 = ctx.r31.s64 + 632;
	// addi r4,r29,152
	ctx.r4.s64 = ctx.r29.s64 + 152;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B394;
	sub_824208C8(ctx, base);
	// stw r28,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r28.u32);
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// addi r3,r31,660
	ctx.r3.s64 = ctx.r31.s64 + 660;
	// stb r30,660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 660, ctx.r30.u8);
	// addi r4,r29,168
	ctx.r4.s64 = ctx.r29.s64 + 168;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B3B0;
	sub_824208C8(ctx, base);
	// stw r28,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r28.u32);
	// stw r30,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r30.u32);
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// stb r30,688(r31)
	PPC_STORE_U8(ctx.r31.u32 + 688, ctx.r30.u8);
	// addi r4,r29,184
	ctx.r4.s64 = ctx.r29.s64 + 184;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B3CC;
	sub_824208C8(ctx, base);
	// stw r28,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r28.u32);
	// stw r30,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r30.u32);
	// addi r3,r31,716
	ctx.r3.s64 = ctx.r31.s64 + 716;
	// stb r30,716(r31)
	PPC_STORE_U8(ctx.r31.u32 + 716, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r29,200
	ctx.r4.s64 = ctx.r29.s64 + 200;
	// bl 0x824208c8
	ctx.lr = 0x8370B3E8;
	sub_824208C8(ctx, base);
	// stw r28,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r28.u32);
	// stw r30,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r30.u32);
	// addi r3,r31,744
	ctx.r3.s64 = ctx.r31.s64 + 744;
	// stb r30,744(r31)
	PPC_STORE_U8(ctx.r31.u32 + 744, ctx.r30.u8);
	// addi r4,r29,216
	ctx.r4.s64 = ctx.r29.s64 + 216;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B404;
	sub_824208C8(ctx, base);
	// stw r30,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r30.u32);
	// stw r30,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r30.u32);
	// addi r3,r31,800
	ctx.r3.s64 = ctx.r31.s64 + 800;
	// stw r30,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
	// stw r30,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r30.u32);
	// stw r30,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r30.u32);
	// stw r30,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r30.u32);
	// stw r30,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r30.u32);
	// std r30,808(r31)
	PPC_STORE_U64(ctx.r31.u32 + 808, ctx.r30.u64);
	// bl 0x82d8c9b0
	ctx.lr = 0x8370B434;
	sub_82D8C9B0(ctx, base);
	// stw r30,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370B444"))) PPC_WEAK_FUNC(sub_8370B444);
PPC_FUNC_IMPL(__imp__sub_8370B444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370B448"))) PPC_WEAK_FUNC(sub_8370B448);
PPC_FUNC_IMPL(__imp__sub_8370B448) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8370b6c0
	sub_8370B6C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370B450"))) PPC_WEAK_FUNC(sub_8370B450);
PPC_FUNC_IMPL(__imp__sub_8370B450) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8370b6c0
	sub_8370B6C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370B458"))) PPC_WEAK_FUNC(sub_8370B458);
PPC_FUNC_IMPL(__imp__sub_8370B458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8370B460;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-24880
	ctx.r8.s64 = ctx.r11.s64 + -24880;
	// addi r7,r10,-24892
	ctx.r7.s64 = ctx.r10.s64 + -24892;
	// addi r6,r9,-24896
	ctx.r6.s64 = ctx.r9.s64 + -24896;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r3,r3,800
	ctx.r3.s64 = ctx.r3.s64 + 800;
	// stw r6,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r6.u32);
	// bl 0x82d8d2e8
	ctx.lr = 0x8370B494;
	sub_82D8D2E8(ctx, base);
	// lwz r5,764(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 764);
	// addi r28,r30,744
	ctx.r28.s64 = ctx.r30.s64 + 744;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370b4ac
	if (cr6.lt) goto loc_8370B4AC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B4AC;
	sub_8386D088(ctx, base);
loc_8370B4AC:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r27,r30,716
	ctx.r27.s64 = ctx.r30.s64 + 716;
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b4d8
	if (cr6.lt) goto loc_8370B4D8;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B4D8;
	sub_8386D088(ctx, base);
loc_8370B4D8:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,688
	ctx.r28.s64 = ctx.r30.s64 + 688;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b4fc
	if (cr6.lt) goto loc_8370B4FC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B4FC;
	sub_8386D088(ctx, base);
loc_8370B4FC:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,660
	ctx.r27.s64 = ctx.r30.s64 + 660;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b520
	if (cr6.lt) goto loc_8370B520;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B520;
	sub_8386D088(ctx, base);
loc_8370B520:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,632
	ctx.r28.s64 = ctx.r30.s64 + 632;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b544
	if (cr6.lt) goto loc_8370B544;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B544;
	sub_8386D088(ctx, base);
loc_8370B544:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,604
	ctx.r27.s64 = ctx.r30.s64 + 604;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b568
	if (cr6.lt) goto loc_8370B568;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B568;
	sub_8386D088(ctx, base);
loc_8370B568:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,572
	ctx.r28.s64 = ctx.r30.s64 + 572;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b58c
	if (cr6.lt) goto loc_8370B58C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B58C;
	sub_8386D088(ctx, base);
loc_8370B58C:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,544
	ctx.r27.s64 = ctx.r30.s64 + 544;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b5b0
	if (cr6.lt) goto loc_8370B5B0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B5B0;
	sub_8386D088(ctx, base);
loc_8370B5B0:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,456
	ctx.r28.s64 = ctx.r30.s64 + 456;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x824238b8
	ctx.lr = 0x8370B5C8;
	sub_824238B8(ctx, base);
	// addi r3,r28,48
	ctx.r3.s64 = ctx.r28.s64 + 48;
	// bl 0x824238b8
	ctx.lr = 0x8370B5D0;
	sub_824238B8(ctx, base);
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// bl 0x824238b8
	ctx.lr = 0x8370B5D8;
	sub_824238B8(ctx, base);
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b5ec
	if (cr6.lt) goto loc_8370B5EC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B5EC;
	sub_8386D088(ctx, base);
loc_8370B5EC:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,428
	ctx.r27.s64 = ctx.r30.s64 + 428;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b610
	if (cr6.lt) goto loc_8370B610;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B610;
	sub_8386D088(ctx, base);
loc_8370B610:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,400
	ctx.r28.s64 = ctx.r30.s64 + 400;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b634
	if (cr6.lt) goto loc_8370B634;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B634;
	sub_8386D088(ctx, base);
loc_8370B634:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,372
	ctx.r27.s64 = ctx.r30.s64 + 372;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b658
	if (cr6.lt) goto loc_8370B658;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B658;
	sub_8386D088(ctx, base);
loc_8370B658:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,344
	ctx.r28.s64 = ctx.r30.s64 + 344;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b67c
	if (cr6.lt) goto loc_8370B67C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B67C;
	sub_8386D088(ctx, base);
loc_8370B67C:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,316
	ctx.r27.s64 = ctx.r30.s64 + 316;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b6a0
	if (cr6.lt) goto loc_8370B6A0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B6A0;
	sub_8386D088(ctx, base);
loc_8370B6A0:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8370B6B4;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370B6BC"))) PPC_WEAK_FUNC(sub_8370B6BC);
PPC_FUNC_IMPL(__imp__sub_8370B6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370B6C0"))) PPC_WEAK_FUNC(sub_8370B6C0);
PPC_FUNC_IMPL(__imp__sub_8370B6C0) {
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
	// bl 0x8370b458
	ctx.lr = 0x8370B6E0;
	sub_8370B458(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8370b700
	if (cr6.eq) goto loc_8370B700;
	// bl 0x82595188
	ctx.lr = 0x8370B6F0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8370B700;
	sub_825952B8(ctx, base);
loc_8370B700:
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

__attribute__((alias("__imp__sub_8370B71C"))) PPC_WEAK_FUNC(sub_8370B71C);
PPC_FUNC_IMPL(__imp__sub_8370B71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370B720"))) PPC_WEAK_FUNC(sub_8370B720);
PPC_FUNC_IMPL(__imp__sub_8370B720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8370B728;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eaf8d8
	ctx.lr = 0x8370B734;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,21
	ctx.r5.s64 = 21;
	// addi r29,r11,-26100
	ctx.r29.s64 = ctx.r11.s64 + -26100;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8370B74C;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r8,-24860
	ctx.r4.s64 = ctx.r8.s64 + -24860;
	// addi r6,r10,-24844
	ctx.r6.s64 = ctx.r10.s64 + -24844;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// addi r5,r9,-24856
	ctx.r5.s64 = ctx.r9.s64 + -24856;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r11,r7,-24864
	ctx.r11.s64 = ctx.r7.s64 + -24864;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// li r4,800
	ctx.r4.s64 = 800;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// bl 0x82423930
	ctx.lr = 0x8370B79C;
	sub_82423930(ctx, base);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// addi r4,r29,584
	ctx.r4.s64 = ctx.r29.s64 + 584;
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x8370B7C0;
	sub_824208C8(ctx, base);
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stb r30,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r30.u8);
	// addi r4,r29,600
	ctx.r4.s64 = ctx.r29.s64 + 600;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B7DC;
	sub_824208C8(ctx, base);
	// stw r28,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r28.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// stb r30,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r30.u8);
	// addi r4,r29,616
	ctx.r4.s64 = ctx.r29.s64 + 616;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B7F8;
	sub_824208C8(ctx, base);
	// stw r28,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r28.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// stb r30,456(r31)
	PPC_STORE_U8(ctx.r31.u32 + 456, ctx.r30.u8);
	// addi r4,r29,632
	ctx.r4.s64 = ctx.r29.s64 + 632;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B814;
	sub_824208C8(ctx, base);
	// stw r28,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r28.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// addi r3,r31,484
	ctx.r3.s64 = ctx.r31.s64 + 484;
	// stb r30,484(r31)
	PPC_STORE_U8(ctx.r31.u32 + 484, ctx.r30.u8);
	// addi r4,r29,648
	ctx.r4.s64 = ctx.r29.s64 + 648;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370B830;
	sub_824208C8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// stw r10,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r10.u32);
	// li r8,150
	ctx.r8.s64 = 150;
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// addi r10,r31,584
	ctx.r10.s64 = ctx.r31.s64 + 584;
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r9,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r9.u32);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// stw r30,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// stw r8,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r8.u32);
loc_8370B89C:
	// stdu r30,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r30.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8370b89c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8370B89C;
	// li r11,56
	ctx.r11.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370B8B8"))) PPC_WEAK_FUNC(sub_8370B8B8);
PPC_FUNC_IMPL(__imp__sub_8370B8B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8370b9e8
	sub_8370B9E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370B8C0"))) PPC_WEAK_FUNC(sub_8370B8C0);
PPC_FUNC_IMPL(__imp__sub_8370B8C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8370b9e8
	sub_8370B9E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370B8C8"))) PPC_WEAK_FUNC(sub_8370B8C8);
PPC_FUNC_IMPL(__imp__sub_8370B8C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8370b9e8
	sub_8370B9E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370B8D0"))) PPC_WEAK_FUNC(sub_8370B8D0);
PPC_FUNC_IMPL(__imp__sub_8370B8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8370B8D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r11,-24844
	ctx.r7.s64 = ctx.r11.s64 + -24844;
	// addi r6,r10,-24856
	ctx.r6.s64 = ctx.r10.s64 + -24856;
	// addi r5,r9,-24860
	ctx.r5.s64 = ctx.r9.s64 + -24860;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-24864
	ctx.r4.s64 = ctx.r8.s64 + -24864;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r28,r3,484
	ctx.r28.s64 = ctx.r3.s64 + 484;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// lwz r3,504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x8370b928
	if (cr6.lt) goto loc_8370B928;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B928;
	sub_8386D088(ctx, base);
loc_8370B928:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r29,r30,456
	ctx.r29.s64 = ctx.r30.s64 + 456;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b954
	if (cr6.lt) goto loc_8370B954;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B954;
	sub_8386D088(ctx, base);
loc_8370B954:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,428
	ctx.r28.s64 = ctx.r30.s64 + 428;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b978
	if (cr6.lt) goto loc_8370B978;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B978;
	sub_8386D088(ctx, base);
loc_8370B978:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,400
	ctx.r29.s64 = ctx.r30.s64 + 400;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b99c
	if (cr6.lt) goto loc_8370B99C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B99C;
	sub_8386D088(ctx, base);
loc_8370B99C:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,372
	ctx.r28.s64 = ctx.r30.s64 + 372;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370b9c0
	if (cr6.lt) goto loc_8370B9C0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370B9C0;
	sub_8386D088(ctx, base);
loc_8370B9C0:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r3,r30,352
	ctx.r3.s64 = ctx.r30.s64 + 352;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x824238b8
	ctx.lr = 0x8370B9D4;
	sub_824238B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eaf978
	ctx.lr = 0x8370B9DC;
	sub_82EAF978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370B9E4"))) PPC_WEAK_FUNC(sub_8370B9E4);
PPC_FUNC_IMPL(__imp__sub_8370B9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370B9E8"))) PPC_WEAK_FUNC(sub_8370B9E8);
PPC_FUNC_IMPL(__imp__sub_8370B9E8) {
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
	// bl 0x8370b8d0
	ctx.lr = 0x8370BA08;
	sub_8370B8D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8370ba28
	if (cr6.eq) goto loc_8370BA28;
	// bl 0x82595188
	ctx.lr = 0x8370BA18;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8370BA28;
	sub_825952B8(ctx, base);
loc_8370BA28:
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

__attribute__((alias("__imp__sub_8370BA44"))) PPC_WEAK_FUNC(sub_8370BA44);
PPC_FUNC_IMPL(__imp__sub_8370BA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370BA48"))) PPC_WEAK_FUNC(sub_8370BA48);
PPC_FUNC_IMPL(__imp__sub_8370BA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8370BA50;
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
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r28,r11,27936
	ctx.r28.s64 = ctx.r11.s64 + 27936;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x8370BA90;
	sub_824208C8(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370BAB0;
	sub_824208C8(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370BAC0"))) PPC_WEAK_FUNC(sub_8370BAC0);
PPC_FUNC_IMPL(__imp__sub_8370BAC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8370BAC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,132
	ctx.r11.s64 = 132;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x8370bb08
	if (!cr6.lt) goto loc_8370BB08;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8370BB08;
	sub_82E745E0(ctx, base);
loc_8370BB08:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-24700
	ctx.r27.s64 = ctx.r11.s64 + -24700;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370BB50;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370BB5C;
	sub_82E74C08(ctx, base);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370bb70
	if (cr6.lt) goto loc_8370BB70;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8370BB70;
	sub_82416268(ctx, base);
loc_8370BB70:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x8370bb90
	if (cr6.lt) goto loc_8370BB90;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370BB90:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_8370BBA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370bba0
	if (!cr6.eq) goto loc_8370BBA0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370BBC4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370BBD0;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370bbe4
	if (cr6.lt) goto loc_8370BBE4;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8370BBE4;
	sub_82416268(ctx, base);
loc_8370BBE4:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370BC0C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370BC18;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370bc2c
	if (cr6.lt) goto loc_8370BC2C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8370BC2C;
	sub_82416268(ctx, base);
loc_8370BC2C:
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
	ctx.lr = 0x8370BC44;
	sub_82E746C0(ctx, base);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82472fc0
	ctx.lr = 0x8370BC60;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370BC6C;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370bc80
	if (cr6.lt) goto loc_8370BC80;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8370BC80;
	sub_82416268(ctx, base);
loc_8370BC80:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x8370bca0
	if (cr6.lt) goto loc_8370BCA0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370BCA0:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_8370BCB0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370bcb0
	if (!cr6.eq) goto loc_8370BCB0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370BCD4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370BCE0;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370bcf4
	if (cr6.lt) goto loc_8370BCF4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8370BCF4;
	sub_82416268(ctx, base);
loc_8370BCF4:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370BD1C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370BD28;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370bd3c
	if (cr6.lt) goto loc_8370BD3C;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8370BD3C;
	sub_82416268(ctx, base);
loc_8370BD3C:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x8370bd5c
	if (cr6.lt) goto loc_8370BD5C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370BD5C:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_8370BD6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370bd6c
	if (!cr6.eq) goto loc_8370BD6C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370BD90;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370BD9C;
	sub_82E74C08(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370bdb0
	if (cr6.lt) goto loc_8370BDB0;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8370BDB0;
	sub_82416268(ctx, base);
loc_8370BDB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370BDBC"))) PPC_WEAK_FUNC(sub_8370BDBC);
PPC_FUNC_IMPL(__imp__sub_8370BDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370BDC0"))) PPC_WEAK_FUNC(sub_8370BDC0);
PPC_FUNC_IMPL(__imp__sub_8370BDC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8370BDC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r30.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x83691bb8
	ctx.lr = 0x8370BDF0;
	sub_83691BB8(ctx, base);
	// lwz r10,376(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8370c4cc
	if (!cr6.lt) goto loc_8370C4CC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r26,r11,16
	ctx.r26.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r28,15
	ctx.r28.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r25,r11,-24588
	ctx.r25.s64 = ctx.r11.s64 + -24588;
loc_8370BE28:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r11,r1,432
	ctx.r11.s64 = ctx.r1.s64 + 432;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// addi r10,r26,-16
	ctx.r10.s64 = ctx.r26.s64 + -16;
	// ld r9,-8(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + -8);
	// ld r8,-16(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,440(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// lwz r4,444(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// bl 0x82472fc0
	ctx.lr = 0x8370BE5C;
	sub_82472FC0(ctx, base);
	// addi r6,r25,-104
	ctx.r6.s64 = ctx.r25.s64 + -104;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x8370BE74;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370bf08
	if (!cr6.eq) goto loc_8370BF08;
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// addi r11,r1,528
	ctx.r11.s64 = ctx.r1.s64 + 528;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// ld r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// ld r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,536(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// lwz r4,540(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// bl 0x82472fc0
	ctx.lr = 0x8370BEAC;
	sub_82472FC0(ctx, base);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8370bec0
	if (!cr6.lt) goto loc_8370BEC0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_8370BEC0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370BEC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370bec4
	if (!cr6.eq) goto loc_8370BEC4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r27,20
	ctx.r3.s64 = ctx.r27.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370BEE8;
	sub_824208C8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370befc
	if (cr6.lt) goto loc_8370BEFC;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x8370BEFC;
	sub_82416268(ctx, base);
loc_8370BEFC:
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
loc_8370BF08:
	// addi r6,r25,-96
	ctx.r6.s64 = ctx.r25.s64 + -96;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x8370BF20;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370bf5c
	if (!cr6.eq) goto loc_8370BF5C;
	// ld r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// ld r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,448(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8370bf54
	if (!cr6.eq) goto loc_8370BF54;
	// ld r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370bf58
	goto loc_8370BF58;
loc_8370BF54:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8370BF58:
	// stw r11,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
loc_8370BF5C:
	// addi r6,r25,-88
	ctx.r6.s64 = ctx.r25.s64 + -88;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x8370BF74;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370c008
	if (!cr6.eq) goto loc_8370C008;
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
	// ld r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// ld r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,520(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// lwz r4,524(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// bl 0x82472fc0
	ctx.lr = 0x8370BFAC;
	sub_82472FC0(ctx, base);
	// lwz r8,260(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8370bfc0
	if (!cr6.lt) goto loc_8370BFC0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_8370BFC0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370BFC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370bfc4
	if (!cr6.eq) goto loc_8370BFC4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r27,116
	ctx.r3.s64 = ctx.r27.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370BFE8;
	sub_824208C8(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370bffc
	if (cr6.lt) goto loc_8370BFFC;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x8370BFFC;
	sub_82416268(ctx, base);
loc_8370BFFC:
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
loc_8370C008:
	// addi r6,r25,-80
	ctx.r6.s64 = ctx.r25.s64 + -80;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x8370C020;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370c070
	if (!cr6.eq) goto loc_8370C070;
	// ld r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// ld r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370c054
	if (!cr6.eq) goto loc_8370C054;
	// ld r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370c06c
	goto loc_8370C06C;
loc_8370C054:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370c068
	if (!cr6.eq) goto loc_8370C068;
	// ld r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370c06c
	goto loc_8370C06C;
loc_8370C068:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8370C06C:
	// stw r11,148(r27)
	PPC_STORE_U32(ctx.r27.u32 + 148, ctx.r11.u32);
loc_8370C070:
	// addi r6,r25,-64
	ctx.r6.s64 = ctx.r25.s64 + -64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x8370C088;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370c4a0
	if (!cr6.eq) goto loc_8370C4A0;
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x83691bb8
	ctx.lr = 0x8370C0AC;
	sub_83691BB8(ctx, base);
	// lwz r10,280(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8370c484
	if (!cr6.lt) goto loc_8370C484;
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
loc_8370C0D8:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r11,r1,480
	ctx.r11.s64 = ctx.r1.s64 + 480;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
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
	// lwz r4,492(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r5,488(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// bl 0x82472fc0
	ctx.lr = 0x8370C10C;
	sub_82472FC0(ctx, base);
	// addi r6,r25,-52
	ctx.r6.s64 = ctx.r25.s64 + -52;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370C124;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370c160
	if (!cr6.eq) goto loc_8370C160;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,416(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8370c158
	if (!cr6.eq) goto loc_8370C158;
	// ld r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370c15c
	goto loc_8370C15C;
loc_8370C158:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8370C15C:
	// stw r11,152(r27)
	PPC_STORE_U32(ctx.r27.u32 + 152, ctx.r11.u32);
loc_8370C160:
	// addi r6,r25,-48
	ctx.r6.s64 = ctx.r25.s64 + -48;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370C178;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370c1c8
	if (!cr6.eq) goto loc_8370C1C8;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,400(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370c1ac
	if (!cr6.eq) goto loc_8370C1AC;
	// ld r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370c1c4
	goto loc_8370C1C4;
loc_8370C1AC:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370c1c0
	if (!cr6.eq) goto loc_8370C1C0;
	// ld r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370c1c4
	goto loc_8370C1C4;
loc_8370C1C0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8370C1C4:
	// stw r11,156(r27)
	PPC_STORE_U32(ctx.r27.u32 + 156, ctx.r11.u32);
loc_8370C1C8:
	// addi r6,r25,-40
	ctx.r6.s64 = ctx.r25.s64 + -40;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370C1E0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370c230
	if (!cr6.eq) goto loc_8370C230;
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
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370c214
	if (!cr6.eq) goto loc_8370C214;
	// ld r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370c22c
	goto loc_8370C22C;
loc_8370C214:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370c228
	if (!cr6.eq) goto loc_8370C228;
	// ld r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370c22c
	goto loc_8370C22C;
loc_8370C228:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8370C22C:
	// stw r11,160(r27)
	PPC_STORE_U32(ctx.r27.u32 + 160, ctx.r11.u32);
loc_8370C230:
	// addi r6,r25,-32
	ctx.r6.s64 = ctx.r25.s64 + -32;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370C248;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370c2dc
	if (!cr6.eq) goto loc_8370C2DC;
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,472(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// lwz r4,476(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// bl 0x82472fc0
	ctx.lr = 0x8370C280;
	sub_82472FC0(ctx, base);
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8370c294
	if (!cr6.lt) goto loc_8370C294;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_8370C294:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370C298:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370c298
	if (!cr6.eq) goto loc_8370C298;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r27,164
	ctx.r3.s64 = ctx.r27.s64 + 164;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370C2BC;
	sub_824208C8(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370c2d0
	if (cr6.lt) goto loc_8370C2D0;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x8370C2D0;
	sub_82416268(ctx, base);
loc_8370C2D0:
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
loc_8370C2DC:
	// addi r6,r25,-24
	ctx.r6.s64 = ctx.r25.s64 + -24;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370C2F4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370c344
	if (!cr6.eq) goto loc_8370C344;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370c328
	if (!cr6.eq) goto loc_8370C328;
	// ld r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370c340
	goto loc_8370C340;
loc_8370C328:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370c33c
	if (!cr6.eq) goto loc_8370C33C;
	// ld r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370c340
	goto loc_8370C340;
loc_8370C33C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8370C340:
	// stw r11,192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 192, ctx.r11.u32);
loc_8370C344:
	// addi r6,r25,-12
	ctx.r6.s64 = ctx.r25.s64 + -12;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370C35C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370c3f0
	if (!cr6.eq) goto loc_8370C3F0;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
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
	// lwz r5,504(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r4,508(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// bl 0x82472fc0
	ctx.lr = 0x8370C394;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8370c3a8
	if (!cr6.lt) goto loc_8370C3A8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_8370C3A8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370C3AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370c3ac
	if (!cr6.eq) goto loc_8370C3AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r27,196
	ctx.r3.s64 = ctx.r27.s64 + 196;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370C3D0;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370c3e4
	if (cr6.lt) goto loc_8370C3E4;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8370C3E4;
	sub_82416268(ctx, base);
loc_8370C3E4:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_8370C3F0:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8370C408;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370c458
	if (!cr6.eq) goto loc_8370C458;
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
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8370c43c
	if (!cr6.eq) goto loc_8370C43C;
	// ld r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370c454
	goto loc_8370C454;
loc_8370C43C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8370c450
	if (!cr6.eq) goto loc_8370C450;
	// ld r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8370c454
	goto loc_8370C454;
loc_8370C450:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8370C454:
	// stw r11,224(r27)
	PPC_STORE_U32(ctx.r27.u32 + 224, ctx.r11.u32);
loc_8370C458:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370c46c
	if (cr6.lt) goto loc_8370C46C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8370C46C;
	sub_82416268(ctx, base);
loc_8370C46C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x8370c0d8
	if (!cr0.eq) goto loc_8370C0D8;
loc_8370C484:
	// lwz r31,288(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8370c4a0
	if (cr6.eq) goto loc_8370C4A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8370C498;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8370C4A0;
	sub_82416268(ctx, base);
loc_8370C4A0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370c4b4
	if (cr6.lt) goto loc_8370C4B4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8370C4B4;
	sub_82416268(ctx, base);
loc_8370C4B4:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// bne 0x8370be28
	if (!cr0.eq) goto loc_8370BE28;
loc_8370C4CC:
	// lwz r31,384(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8370c4e8
	if (cr6.eq) goto loc_8370C4E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8370C4E0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8370C4E8;
	sub_82416268(ctx, base);
loc_8370C4E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370C4F4"))) PPC_WEAK_FUNC(sub_8370C4F4);
PPC_FUNC_IMPL(__imp__sub_8370C4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370C4F8"))) PPC_WEAK_FUNC(sub_8370C4F8);
PPC_FUNC_IMPL(__imp__sub_8370C4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8370C500;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8370C50C;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r30,r11,-24776
	ctx.r30.s64 = ctx.r11.s64 + -24776;
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824208c8
	ctx.lr = 0x8370C524;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-24480
	ctx.r7.s64 = ctx.r10.s64 + -24480;
	// addi r5,r8,-24496
	ctx.r5.s64 = ctx.r8.s64 + -24496;
	// addi r6,r9,-24492
	ctx.r6.s64 = ctx.r9.s64 + -24492;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r29,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r29.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// stb r29,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r29.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370C56C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r29,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r29.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r29,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r29.u8);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370C588;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370C594"))) PPC_WEAK_FUNC(sub_8370C594);
PPC_FUNC_IMPL(__imp__sub_8370C594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370C598"))) PPC_WEAK_FUNC(sub_8370C598);
PPC_FUNC_IMPL(__imp__sub_8370C598) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8370c640
	sub_8370C640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370C5A0"))) PPC_WEAK_FUNC(sub_8370C5A0);
PPC_FUNC_IMPL(__imp__sub_8370C5A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8370c640
	sub_8370C640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370C5A8"))) PPC_WEAK_FUNC(sub_8370C5A8);
PPC_FUNC_IMPL(__imp__sub_8370C5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8370C5B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-24480
	ctx.r8.s64 = ctx.r11.s64 + -24480;
	// addi r7,r10,-24492
	ctx.r7.s64 = ctx.r10.s64 + -24492;
	// addi r6,r9,-24496
	ctx.r6.s64 = ctx.r9.s64 + -24496;
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
	// blt cr6,0x8370c5f4
	if (cr6.lt) goto loc_8370C5F4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370C5F4;
	sub_8386D088(ctx, base);
loc_8370C5F4:
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
	// blt cr6,0x8370c620
	if (cr6.lt) goto loc_8370C620;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370C620;
	sub_8386D088(ctx, base);
loc_8370C620:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8370C634;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370C63C"))) PPC_WEAK_FUNC(sub_8370C63C);
PPC_FUNC_IMPL(__imp__sub_8370C63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370C640"))) PPC_WEAK_FUNC(sub_8370C640);
PPC_FUNC_IMPL(__imp__sub_8370C640) {
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
	// bl 0x8370c5a8
	ctx.lr = 0x8370C660;
	sub_8370C5A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8370c680
	if (cr6.eq) goto loc_8370C680;
	// bl 0x82595188
	ctx.lr = 0x8370C670;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8370C680;
	sub_825952B8(ctx, base);
loc_8370C680:
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

__attribute__((alias("__imp__sub_8370C69C"))) PPC_WEAK_FUNC(sub_8370C69C);
PPC_FUNC_IMPL(__imp__sub_8370C69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370C6A0"))) PPC_WEAK_FUNC(sub_8370C6A0);
PPC_FUNC_IMPL(__imp__sub_8370C6A0) {
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
	ctx.lr = 0x8370C6B8;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-24776
	ctx.r4.s64 = ctx.r11.s64 + -24776;
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x824208c8
	ctx.lr = 0x8370C6CC;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// addi r6,r10,-24444
	ctx.r6.s64 = ctx.r10.s64 + -24444;
	// addi r3,r7,-24464
	ctx.r3.s64 = ctx.r7.s64 + -24464;
	// addi r5,r9,-24456
	ctx.r5.s64 = ctx.r9.s64 + -24456;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r4,r8,-24460
	ctx.r4.s64 = ctx.r8.s64 + -24460;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// bl 0x8370ba48
	ctx.lr = 0x8370C70C;
	sub_8370BA48(ctx, base);
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

__attribute__((alias("__imp__sub_8370C724"))) PPC_WEAK_FUNC(sub_8370C724);
PPC_FUNC_IMPL(__imp__sub_8370C724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370C728"))) PPC_WEAK_FUNC(sub_8370C728);
PPC_FUNC_IMPL(__imp__sub_8370C728) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8370c7e8
	sub_8370C7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370C730"))) PPC_WEAK_FUNC(sub_8370C730);
PPC_FUNC_IMPL(__imp__sub_8370C730) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8370c7e8
	sub_8370C7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370C738"))) PPC_WEAK_FUNC(sub_8370C738);
PPC_FUNC_IMPL(__imp__sub_8370C738) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8370c7e8
	sub_8370C7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370C740"))) PPC_WEAK_FUNC(sub_8370C740);
PPC_FUNC_IMPL(__imp__sub_8370C740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8370C748;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r11,-24444
	ctx.r7.s64 = ctx.r11.s64 + -24444;
	// addi r6,r10,-24456
	ctx.r6.s64 = ctx.r10.s64 + -24456;
	// addi r5,r9,-24460
	ctx.r5.s64 = ctx.r9.s64 + -24460;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-24464
	ctx.r4.s64 = ctx.r8.s64 + -24464;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// addi r31,r3,352
	ctx.r31.s64 = ctx.r3.s64 + 352;
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// lwz r3,416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x8370c79c
	if (cr6.lt) goto loc_8370C79C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370C79C;
	sub_8386D088(ctx, base);
loc_8370C79C:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370c7c8
	if (cr6.lt) goto loc_8370C7C8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370C7C8;
	sub_8386D088(ctx, base);
loc_8370C7C8:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bl 0x82eaf978
	ctx.lr = 0x8370C7DC;
	sub_82EAF978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370C7E4"))) PPC_WEAK_FUNC(sub_8370C7E4);
PPC_FUNC_IMPL(__imp__sub_8370C7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370C7E8"))) PPC_WEAK_FUNC(sub_8370C7E8);
PPC_FUNC_IMPL(__imp__sub_8370C7E8) {
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
	// bl 0x8370c740
	ctx.lr = 0x8370C808;
	sub_8370C740(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8370c828
	if (cr6.eq) goto loc_8370C828;
	// bl 0x82595188
	ctx.lr = 0x8370C818;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8370C828;
	sub_825952B8(ctx, base);
loc_8370C828:
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

__attribute__((alias("__imp__sub_8370C844"))) PPC_WEAK_FUNC(sub_8370C844);
PPC_FUNC_IMPL(__imp__sub_8370C844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370C848"))) PPC_WEAK_FUNC(sub_8370C848);
PPC_FUNC_IMPL(__imp__sub_8370C848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8370C850;
	__savegprlr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,133
	ctx.r11.s64 = 133;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x8370c890
	if (!cr6.lt) goto loc_8370C890;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8370C890;
	sub_82E745E0(ctx, base);
loc_8370C890:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-24276
	ctx.r27.s64 = ctx.r11.s64 + -24276;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
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
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370C8D8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370C8E4;
	sub_82E74C08(ctx, base);
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370c8f8
	if (cr6.lt) goto loc_8370C8F8;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8370C8F8;
	sub_82416268(ctx, base);
loc_8370C8F8:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x8370c918
	if (cr6.lt) goto loc_8370C918;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370C918:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_8370C928:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370c928
	if (!cr6.eq) goto loc_8370C928;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370C94C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370C958;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370c96c
	if (cr6.lt) goto loc_8370C96C;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8370C96C;
	sub_82416268(ctx, base);
loc_8370C96C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370C994;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370C9A0;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370c9b4
	if (cr6.lt) goto loc_8370C9B4;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8370C9B4;
	sub_82416268(ctx, base);
loc_8370C9B4:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8370C9CC;
	sub_82E746C0(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x8370C9E8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370C9F4;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370ca08
	if (cr6.lt) goto loc_8370CA08;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8370CA08;
	sub_82416268(ctx, base);
loc_8370CA08:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x8370ca28
	if (cr6.lt) goto loc_8370CA28;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370CA28:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_8370CA38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370ca38
	if (!cr6.eq) goto loc_8370CA38;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370CA5C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370CA68;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370ca7c
	if (cr6.lt) goto loc_8370CA7C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8370CA7C;
	sub_82416268(ctx, base);
loc_8370CA7C:
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
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370CAA4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370CAB0;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370cac4
	if (cr6.lt) goto loc_8370CAC4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8370CAC4;
	sub_82416268(ctx, base);
loc_8370CAC4:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x8370cae4
	if (cr6.lt) goto loc_8370CAE4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370CAE4:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_8370CAF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370caf4
	if (!cr6.eq) goto loc_8370CAF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370CB18;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370CB24;
	sub_82E74C08(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370cb38
	if (cr6.lt) goto loc_8370CB38;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8370CB38;
	sub_82416268(ctx, base);
loc_8370CB38:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370CB60;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370CB6C;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370cb80
	if (cr6.lt) goto loc_8370CB80;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8370CB80;
	sub_82416268(ctx, base);
loc_8370CB80:
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// addi r4,r28,172
	ctx.r4.s64 = ctx.r28.s64 + 172;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x8370cba0
	if (cr6.lt) goto loc_8370CBA0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370CBA0:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_8370CBB0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370cbb0
	if (!cr6.eq) goto loc_8370CBB0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370CBD4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370CBE0;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370cbf4
	if (cr6.lt) goto loc_8370CBF4;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8370CBF4;
	sub_82416268(ctx, base);
loc_8370CBF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370CC00"))) PPC_WEAK_FUNC(sub_8370CC00);
PPC_FUNC_IMPL(__imp__sub_8370CC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8370CC08;
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
	ctx.lr = 0x8370CC30;
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
	// bge cr6,0x8370ce74
	if (!cr6.lt) goto loc_8370CE74;
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-24252
	ctx.r26.s64 = ctx.r11.s64 + -24252;
loc_8370CC68:
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
	ctx.lr = 0x8370CC9C;
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
	ctx.lr = 0x8370CCB4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370cd48
	if (!cr6.eq) goto loc_8370CD48;
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
	ctx.lr = 0x8370CCEC;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8370cd00
	if (!cr6.lt) goto loc_8370CD00;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_8370CD00:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370CD04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370cd04
	if (!cr6.eq) goto loc_8370CD04;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370CD28;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370cd3c
	if (cr6.lt) goto loc_8370CD3C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8370CD3C;
	sub_82416268(ctx, base);
loc_8370CD3C:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_8370CD48:
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
	ctx.lr = 0x8370CD60;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370cd9c
	if (!cr6.eq) goto loc_8370CD9C;
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
	// bne cr6,0x8370cd94
	if (!cr6.eq) goto loc_8370CD94;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370cd98
	goto loc_8370CD98;
loc_8370CD94:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8370CD98:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_8370CD9C:
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
	ctx.lr = 0x8370CDB4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370ce48
	if (!cr6.eq) goto loc_8370CE48;
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
	ctx.lr = 0x8370CDEC;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8370ce00
	if (!cr6.lt) goto loc_8370CE00;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_8370CE00:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370CE04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370ce04
	if (!cr6.eq) goto loc_8370CE04;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370CE28;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370ce3c
	if (cr6.lt) goto loc_8370CE3C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8370CE3C;
	sub_82416268(ctx, base);
loc_8370CE3C:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_8370CE48:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370ce5c
	if (cr6.lt) goto loc_8370CE5C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8370CE5C;
	sub_82416268(ctx, base);
loc_8370CE5C:
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
	// bne 0x8370cc68
	if (!cr0.eq) goto loc_8370CC68;
loc_8370CE74:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8370ce90
	if (cr6.eq) goto loc_8370CE90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8370CE88;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8370CE90;
	sub_82416268(ctx, base);
loc_8370CE90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370CE9C"))) PPC_WEAK_FUNC(sub_8370CE9C);
PPC_FUNC_IMPL(__imp__sub_8370CE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370CEA0"))) PPC_WEAK_FUNC(sub_8370CEA0);
PPC_FUNC_IMPL(__imp__sub_8370CEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8370CEA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8370CEB4;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-24376
	ctx.r29.s64 = ctx.r11.s64 + -24376;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8370CECC;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-24144
	ctx.r7.s64 = ctx.r10.s64 + -24144;
	// addi r5,r8,-24160
	ctx.r5.s64 = ctx.r8.s64 + -24160;
	// addi r6,r9,-24156
	ctx.r6.s64 = ctx.r9.s64 + -24156;
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
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370CF14;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370CF30;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370CF4C;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370CF58"))) PPC_WEAK_FUNC(sub_8370CF58);
PPC_FUNC_IMPL(__imp__sub_8370CF58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8370d020
	sub_8370D020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370CF60"))) PPC_WEAK_FUNC(sub_8370CF60);
PPC_FUNC_IMPL(__imp__sub_8370CF60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8370d020
	sub_8370D020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370CF68"))) PPC_WEAK_FUNC(sub_8370CF68);
PPC_FUNC_IMPL(__imp__sub_8370CF68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8370CF70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-24144
	ctx.r8.s64 = ctx.r11.s64 + -24144;
	// addi r7,r10,-24156
	ctx.r7.s64 = ctx.r10.s64 + -24156;
	// addi r6,r9,-24160
	ctx.r6.s64 = ctx.r9.s64 + -24160;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,372
	ctx.r29.s64 = ctx.r3.s64 + 372;
	// lwz r5,392(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370cfb4
	if (cr6.lt) goto loc_8370CFB4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370CFB4;
	sub_8386D088(ctx, base);
loc_8370CFB4:
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
	// blt cr6,0x8370cfe0
	if (cr6.lt) goto loc_8370CFE0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370CFE0;
	sub_8386D088(ctx, base);
loc_8370CFE0:
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
	// blt cr6,0x8370d004
	if (cr6.lt) goto loc_8370D004;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370D004;
	sub_8386D088(ctx, base);
loc_8370D004:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8370D018;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370D020"))) PPC_WEAK_FUNC(sub_8370D020);
PPC_FUNC_IMPL(__imp__sub_8370D020) {
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
	// bl 0x8370cf68
	ctx.lr = 0x8370D040;
	sub_8370CF68(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8370d060
	if (cr6.eq) goto loc_8370D060;
	// bl 0x82595188
	ctx.lr = 0x8370D050;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8370D060;
	sub_825952B8(ctx, base);
loc_8370D060:
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

__attribute__((alias("__imp__sub_8370D07C"))) PPC_WEAK_FUNC(sub_8370D07C);
PPC_FUNC_IMPL(__imp__sub_8370D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370D080"))) PPC_WEAK_FUNC(sub_8370D080);
PPC_FUNC_IMPL(__imp__sub_8370D080) {
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
	ctx.lr = 0x8370D098;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-24376
	ctx.r4.s64 = ctx.r11.s64 + -24376;
	// li r5,17
	ctx.r5.s64 = 17;
	// bl 0x824208c8
	ctx.lr = 0x8370D0AC;
	sub_824208C8(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r3,r7,-24096
	ctx.r3.s64 = ctx.r7.s64 + -24096;
	// addi r6,r10,-24112
	ctx.r6.s64 = ctx.r10.s64 + -24112;
	// addi r5,r9,-24124
	ctx.r5.s64 = ctx.r9.s64 + -24124;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-24128
	ctx.r4.s64 = ctx.r8.s64 + -24128;
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

__attribute__((alias("__imp__sub_8370D0F4"))) PPC_WEAK_FUNC(sub_8370D0F4);
PPC_FUNC_IMPL(__imp__sub_8370D0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370D0F8"))) PPC_WEAK_FUNC(sub_8370D0F8);
PPC_FUNC_IMPL(__imp__sub_8370D0F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8370d110
	sub_8370D110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370D100"))) PPC_WEAK_FUNC(sub_8370D100);
PPC_FUNC_IMPL(__imp__sub_8370D100) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8370d110
	sub_8370D110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370D108"))) PPC_WEAK_FUNC(sub_8370D108);
PPC_FUNC_IMPL(__imp__sub_8370D108) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8370d110
	sub_8370D110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370D110"))) PPC_WEAK_FUNC(sub_8370D110);
PPC_FUNC_IMPL(__imp__sub_8370D110) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-24112
	ctx.r7.s64 = ctx.r11.s64 + -24112;
	// addi r6,r10,-24124
	ctx.r6.s64 = ctx.r10.s64 + -24124;
	// addi r5,r9,-24128
	ctx.r5.s64 = ctx.r9.s64 + -24128;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-24096
	ctx.r4.s64 = ctx.r8.s64 + -24096;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x8370D160;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8370d180
	if (cr6.eq) goto loc_8370D180;
	// bl 0x82595188
	ctx.lr = 0x8370D170;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8370D180;
	sub_825952B8(ctx, base);
loc_8370D180:
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

__attribute__((alias("__imp__sub_8370D19C"))) PPC_WEAK_FUNC(sub_8370D19C);
PPC_FUNC_IMPL(__imp__sub_8370D19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370D1A0"))) PPC_WEAK_FUNC(sub_8370D1A0);
PPC_FUNC_IMPL(__imp__sub_8370D1A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8370D1A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,133
	ctx.r11.s64 = 133;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x8370d1e8
	if (!cr6.lt) goto loc_8370D1E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8370D1E8;
	sub_82E745E0(ctx, base);
loc_8370D1E8:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-23940
	ctx.r27.s64 = ctx.r11.s64 + -23940;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
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
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370D230;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370D23C;
	sub_82E74C08(ctx, base);
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370d250
	if (cr6.lt) goto loc_8370D250;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8370D250;
	sub_82416268(ctx, base);
loc_8370D250:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x8370d270
	if (cr6.lt) goto loc_8370D270;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370D270:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_8370D280:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370d280
	if (!cr6.eq) goto loc_8370D280;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370D2A4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370D2B0;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370d2c4
	if (cr6.lt) goto loc_8370D2C4;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8370D2C4;
	sub_82416268(ctx, base);
loc_8370D2C4:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370D2EC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370D2F8;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370d30c
	if (cr6.lt) goto loc_8370D30C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8370D30C;
	sub_82416268(ctx, base);
loc_8370D30C:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8370D324;
	sub_82E746C0(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x8370D340;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370D34C;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370d360
	if (cr6.lt) goto loc_8370D360;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8370D360;
	sub_82416268(ctx, base);
loc_8370D360:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x8370d380
	if (cr6.lt) goto loc_8370D380;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370D380:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_8370D390:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370d390
	if (!cr6.eq) goto loc_8370D390;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370D3B4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370D3C0;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370d3d4
	if (cr6.lt) goto loc_8370D3D4;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8370D3D4;
	sub_82416268(ctx, base);
loc_8370D3D4:
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
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370D3FC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370D408;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370d41c
	if (cr6.lt) goto loc_8370D41C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8370D41C;
	sub_82416268(ctx, base);
loc_8370D41C:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x8370d43c
	if (cr6.lt) goto loc_8370D43C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370D43C:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_8370D44C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370d44c
	if (!cr6.eq) goto loc_8370D44C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370D470;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370D47C;
	sub_82E74C08(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370d490
	if (cr6.lt) goto loc_8370D490;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8370D490;
	sub_82416268(ctx, base);
loc_8370D490:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370D4B8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370D4C4;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370d4d8
	if (cr6.lt) goto loc_8370D4D8;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8370D4D8;
	sub_82416268(ctx, base);
loc_8370D4D8:
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// addi r4,r28,172
	ctx.r4.s64 = ctx.r28.s64 + 172;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x8370d4f8
	if (cr6.lt) goto loc_8370D4F8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370D4F8:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_8370D508:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370d508
	if (!cr6.eq) goto loc_8370D508;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370D52C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370D538;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370d54c
	if (cr6.lt) goto loc_8370D54C;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8370D54C;
	sub_82416268(ctx, base);
loc_8370D54C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370D558"))) PPC_WEAK_FUNC(sub_8370D558);
PPC_FUNC_IMPL(__imp__sub_8370D558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8370D560;
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
	ctx.lr = 0x8370D588;
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
	// bge cr6,0x8370d7cc
	if (!cr6.lt) goto loc_8370D7CC;
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-23916
	ctx.r26.s64 = ctx.r11.s64 + -23916;
loc_8370D5C0:
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
	ctx.lr = 0x8370D5F4;
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
	ctx.lr = 0x8370D60C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370d6a0
	if (!cr6.eq) goto loc_8370D6A0;
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
	ctx.lr = 0x8370D644;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8370d658
	if (!cr6.lt) goto loc_8370D658;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_8370D658:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370D65C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370d65c
	if (!cr6.eq) goto loc_8370D65C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370D680;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370d694
	if (cr6.lt) goto loc_8370D694;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8370D694;
	sub_82416268(ctx, base);
loc_8370D694:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_8370D6A0:
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
	ctx.lr = 0x8370D6B8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370d6f4
	if (!cr6.eq) goto loc_8370D6F4;
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
	// bne cr6,0x8370d6ec
	if (!cr6.eq) goto loc_8370D6EC;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370d6f0
	goto loc_8370D6F0;
loc_8370D6EC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8370D6F0:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_8370D6F4:
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
	ctx.lr = 0x8370D70C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370d7a0
	if (!cr6.eq) goto loc_8370D7A0;
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
	ctx.lr = 0x8370D744;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8370d758
	if (!cr6.lt) goto loc_8370D758;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_8370D758:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370D75C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370d75c
	if (!cr6.eq) goto loc_8370D75C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370D780;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370d794
	if (cr6.lt) goto loc_8370D794;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8370D794;
	sub_82416268(ctx, base);
loc_8370D794:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_8370D7A0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370d7b4
	if (cr6.lt) goto loc_8370D7B4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8370D7B4;
	sub_82416268(ctx, base);
loc_8370D7B4:
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
	// bne 0x8370d5c0
	if (!cr0.eq) goto loc_8370D5C0;
loc_8370D7CC:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8370d7e8
	if (cr6.eq) goto loc_8370D7E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8370D7E0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8370D7E8;
	sub_82416268(ctx, base);
loc_8370D7E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370D7F4"))) PPC_WEAK_FUNC(sub_8370D7F4);
PPC_FUNC_IMPL(__imp__sub_8370D7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370D7F8"))) PPC_WEAK_FUNC(sub_8370D7F8);
PPC_FUNC_IMPL(__imp__sub_8370D7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8370D800;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8370D80C;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-24040
	ctx.r29.s64 = ctx.r11.s64 + -24040;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8370D824;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-23808
	ctx.r7.s64 = ctx.r10.s64 + -23808;
	// addi r5,r8,-23824
	ctx.r5.s64 = ctx.r8.s64 + -23824;
	// addi r6,r9,-23820
	ctx.r6.s64 = ctx.r9.s64 + -23820;
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
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370D86C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370D888;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370D8A4;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370D8B0"))) PPC_WEAK_FUNC(sub_8370D8B0);
PPC_FUNC_IMPL(__imp__sub_8370D8B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8370d978
	sub_8370D978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370D8B8"))) PPC_WEAK_FUNC(sub_8370D8B8);
PPC_FUNC_IMPL(__imp__sub_8370D8B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8370d978
	sub_8370D978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370D8C0"))) PPC_WEAK_FUNC(sub_8370D8C0);
PPC_FUNC_IMPL(__imp__sub_8370D8C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8370D8C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-23808
	ctx.r8.s64 = ctx.r11.s64 + -23808;
	// addi r7,r10,-23820
	ctx.r7.s64 = ctx.r10.s64 + -23820;
	// addi r6,r9,-23824
	ctx.r6.s64 = ctx.r9.s64 + -23824;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,372
	ctx.r29.s64 = ctx.r3.s64 + 372;
	// lwz r5,392(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370d90c
	if (cr6.lt) goto loc_8370D90C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370D90C;
	sub_8386D088(ctx, base);
loc_8370D90C:
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
	// blt cr6,0x8370d938
	if (cr6.lt) goto loc_8370D938;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370D938;
	sub_8386D088(ctx, base);
loc_8370D938:
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
	// blt cr6,0x8370d95c
	if (cr6.lt) goto loc_8370D95C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370D95C;
	sub_8386D088(ctx, base);
loc_8370D95C:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8370D970;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370D978"))) PPC_WEAK_FUNC(sub_8370D978);
PPC_FUNC_IMPL(__imp__sub_8370D978) {
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
	// bl 0x8370d8c0
	ctx.lr = 0x8370D998;
	sub_8370D8C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8370d9b8
	if (cr6.eq) goto loc_8370D9B8;
	// bl 0x82595188
	ctx.lr = 0x8370D9A8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8370D9B8;
	sub_825952B8(ctx, base);
loc_8370D9B8:
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

__attribute__((alias("__imp__sub_8370D9D4"))) PPC_WEAK_FUNC(sub_8370D9D4);
PPC_FUNC_IMPL(__imp__sub_8370D9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370D9D8"))) PPC_WEAK_FUNC(sub_8370D9D8);
PPC_FUNC_IMPL(__imp__sub_8370D9D8) {
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
	ctx.lr = 0x8370D9F0;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-24040
	ctx.r4.s64 = ctx.r11.s64 + -24040;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x824208c8
	ctx.lr = 0x8370DA04;
	sub_824208C8(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r3,r7,-23760
	ctx.r3.s64 = ctx.r7.s64 + -23760;
	// addi r6,r10,-23776
	ctx.r6.s64 = ctx.r10.s64 + -23776;
	// addi r5,r9,-23788
	ctx.r5.s64 = ctx.r9.s64 + -23788;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-23792
	ctx.r4.s64 = ctx.r8.s64 + -23792;
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

__attribute__((alias("__imp__sub_8370DA4C"))) PPC_WEAK_FUNC(sub_8370DA4C);
PPC_FUNC_IMPL(__imp__sub_8370DA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370DA50"))) PPC_WEAK_FUNC(sub_8370DA50);
PPC_FUNC_IMPL(__imp__sub_8370DA50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8370da68
	sub_8370DA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370DA58"))) PPC_WEAK_FUNC(sub_8370DA58);
PPC_FUNC_IMPL(__imp__sub_8370DA58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8370da68
	sub_8370DA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370DA60"))) PPC_WEAK_FUNC(sub_8370DA60);
PPC_FUNC_IMPL(__imp__sub_8370DA60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8370da68
	sub_8370DA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370DA68"))) PPC_WEAK_FUNC(sub_8370DA68);
PPC_FUNC_IMPL(__imp__sub_8370DA68) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-23776
	ctx.r7.s64 = ctx.r11.s64 + -23776;
	// addi r6,r10,-23788
	ctx.r6.s64 = ctx.r10.s64 + -23788;
	// addi r5,r9,-23792
	ctx.r5.s64 = ctx.r9.s64 + -23792;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-23760
	ctx.r4.s64 = ctx.r8.s64 + -23760;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x8370DAB8;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8370dad8
	if (cr6.eq) goto loc_8370DAD8;
	// bl 0x82595188
	ctx.lr = 0x8370DAC8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8370DAD8;
	sub_825952B8(ctx, base);
loc_8370DAD8:
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

__attribute__((alias("__imp__sub_8370DAF4"))) PPC_WEAK_FUNC(sub_8370DAF4);
PPC_FUNC_IMPL(__imp__sub_8370DAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370DAF8"))) PPC_WEAK_FUNC(sub_8370DAF8);
PPC_FUNC_IMPL(__imp__sub_8370DAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8370DB00;
	__savegprlr_22(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,137
	ctx.r11.s64 = 137;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x8370db40
	if (!cr6.lt) goto loc_8370DB40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8370DB40;
	sub_82E745E0(ctx, base);
loc_8370DB40:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r26,r11,-23440
	ctx.r26.s64 = ctx.r11.s64 + -23440;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r26,-208
	ctx.r4.s64 = ctx.r26.s64 + -208;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370DB88;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370DB94;
	sub_82E74C08(ctx, base);
	// lwz r5,532(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370dba8
	if (cr6.lt) goto loc_8370DBA8;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x8370DBA8;
	sub_82416268(ctx, base);
loc_8370DBA8:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// addi r4,r24,20
	ctx.r4.s64 = ctx.r24.s64 + 20;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// blt cr6,0x8370dbc8
	if (cr6.lt) goto loc_8370DBC8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370DBC8:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_8370DBD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370dbd8
	if (!cr6.eq) goto loc_8370DBD8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370DBFC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370DC08;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370dc1c
	if (cr6.lt) goto loc_8370DC1C;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8370DC1C;
	sub_82416268(ctx, base);
loc_8370DC1C:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r4,r26,-200
	ctx.r4.s64 = ctx.r26.s64 + -200;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// stw r30,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r30.u32);
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370DC44;
	sub_82472FC0(ctx, base);
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370DC50;
	sub_82E74C08(ctx, base);
	// lwz r11,724(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370dc64
	if (cr6.lt) goto loc_8370DC64;
	// lwz r3,704(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// bl 0x82416268
	ctx.lr = 0x8370DC64;
	sub_82416268(ctx, base);
loc_8370DC64:
	// stw r30,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// lwz r4,48(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8370DC7C;
	sub_82E746C0(ctx, base);
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// addi r4,r26,-192
	ctx.r4.s64 = ctx.r26.s64 + -192;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82472fc0
	ctx.lr = 0x8370DC98;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370DCA4;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370dcb8
	if (cr6.lt) goto loc_8370DCB8;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x8370DCB8;
	sub_82416268(ctx, base);
loc_8370DCB8:
	// lwz r11,136(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 136);
	// addi r4,r24,116
	ctx.r4.s64 = ctx.r24.s64 + 116;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x8370dcd8
	if (cr6.lt) goto loc_8370DCD8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370DCD8:
	// stw r30,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r31.u32);
	// stb r31,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, ctx.r31.u8);
loc_8370DCE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370dce8
	if (!cr6.eq) goto loc_8370DCE8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370DD0C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370DD18;
	sub_82E74C08(ctx, base);
	// lwz r10,916(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370dd2c
	if (cr6.lt) goto loc_8370DD2C;
	// lwz r3,896(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// bl 0x82416268
	ctx.lr = 0x8370DD2C;
	sub_82416268(ctx, base);
loc_8370DD2C:
	// stw r30,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r30.u32);
	// addi r4,r26,-184
	ctx.r4.s64 = ctx.r26.s64 + -184;
	// stw r31,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, ctx.r31.u8);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370DD54;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370DD60;
	sub_82E74C08(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370dd74
	if (cr6.lt) goto loc_8370DD74;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x8370DD74;
	sub_82416268(ctx, base);
loc_8370DD74:
	// lwz r11,164(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 164);
	// addi r4,r24,144
	ctx.r4.s64 = ctx.r24.s64 + 144;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// blt cr6,0x8370dd94
	if (cr6.lt) goto loc_8370DD94;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370DD94:
	// stw r30,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
loc_8370DDA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370dda4
	if (!cr6.eq) goto loc_8370DDA4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370DDC8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370DDD4;
	sub_82E74C08(ctx, base);
	// lwz r10,788(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370dde8
	if (cr6.lt) goto loc_8370DDE8;
	// lwz r3,768(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// bl 0x82416268
	ctx.lr = 0x8370DDE8;
	sub_82416268(ctx, base);
loc_8370DDE8:
	// stw r30,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r30.u32);
	// addi r4,r26,-176
	ctx.r4.s64 = ctx.r26.s64 + -176;
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370DE10;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370DE1C;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370de30
	if (cr6.lt) goto loc_8370DE30;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8370DE30;
	sub_82416268(ctx, base);
loc_8370DE30:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x8370DE44;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r25,130
	ctx.r25.s64 = 130;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// li r22,8192
	ctx.r22.s64 = 8192;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r22.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r4,r26,-164
	ctx.r4.s64 = ctx.r26.s64 + -164;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// li r5,14
	ctx.r5.s64 = 14;
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r30,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r30.u32);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// stw r31,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r31.u32);
	// stb r31,1024(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1024, ctx.r31.u8);
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82472fc0
	ctx.lr = 0x8370DE9C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8370DEA8;
	sub_82E74C08(ctx, base);
	// lwz r5,1044(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1044);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370debc
	if (cr6.lt) goto loc_8370DEBC;
	// lwz r3,1024(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// bl 0x82416268
	ctx.lr = 0x8370DEBC;
	sub_82416268(ctx, base);
loc_8370DEBC:
	// stw r30,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r31,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r31.u32);
	// stb r31,1024(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1024, ctx.r31.u8);
	// lwz r4,172(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 172);
	// bl 0x82e97d90
	ctx.lr = 0x8370DED4;
	sub_82E97D90(ctx, base);
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// addi r4,r26,-148
	ctx.r4.s64 = ctx.r26.s64 + -148;
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82472fc0
	ctx.lr = 0x8370DEF0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8370DEFC;
	sub_82E74C08(ctx, base);
	// lwz r11,596(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370df10
	if (cr6.lt) goto loc_8370DF10;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x82416268
	ctx.lr = 0x8370DF10;
	sub_82416268(ctx, base);
loc_8370DF10:
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// addi r23,r24,-200
	ctx.r23.s64 = ctx.r24.s64 + -200;
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// addi r4,r24,176
	ctx.r4.s64 = ctx.r24.s64 + 176;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// lwz r5,192(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 192);
	// bl 0x83354d50
	ctx.lr = 0x8370DF40;
	sub_83354D50(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8370df54
	if (!cr6.lt) goto loc_8370DF54;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_8370DF54:
	// stw r30,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
loc_8370DF64:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370df64
	if (!cr6.eq) goto loc_8370DF64;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370DF88;
	sub_82472FC0(ctx, base);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8370DF94;
	sub_82E74C08(ctx, base);
	// lwz r10,852(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370dfa8
	if (cr6.lt) goto loc_8370DFA8;
	// lwz r3,832(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// bl 0x82416268
	ctx.lr = 0x8370DFA8;
	sub_82416268(ctx, base);
loc_8370DFA8:
	// stw r30,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82e74890
	ctx.lr = 0x8370DFC0;
	sub_82E74890(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// lwz r27,148(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bge cr6,0x8370dfe8
	if (!cr6.lt) goto loc_8370DFE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8370DFE8;
	sub_82E745E0(ctx, base);
loc_8370DFE8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x8370E000;
	sub_831CE980(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r26,-140
	ctx.r4.s64 = ctx.r26.s64 + -140;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370E028;
	sub_82472FC0(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370E034;
	sub_82E74C08(ctx, base);
	// lwz r10,660(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370e048
	if (cr6.lt) goto loc_8370E048;
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x82416268
	ctx.lr = 0x8370E048;
	sub_82416268(ctx, base);
loc_8370E048:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x8370E05C;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// addi r4,r26,-124
	ctx.r4.s64 = ctx.r26.s64 + -124;
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r30,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r30.u32);
	// stw r31,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r31.u32);
	// stb r31,960(r1)
	PPC_STORE_U8(ctx.r1.u32 + 960, ctx.r31.u8);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// bl 0x82472fc0
	ctx.lr = 0x8370E0AC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8370E0B8;
	sub_82E74C08(ctx, base);
	// lwz r5,980(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 980);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370e0cc
	if (cr6.lt) goto loc_8370E0CC;
	// lwz r3,960(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// bl 0x82416268
	ctx.lr = 0x8370E0CC;
	sub_82416268(ctx, base);
loc_8370E0CC:
	// stw r30,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r31.u32);
	// stb r31,960(r1)
	PPC_STORE_U8(ctx.r1.u32 + 960, ctx.r31.u8);
	// lwz r4,196(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 196);
	// bl 0x82e97d90
	ctx.lr = 0x8370E0E4;
	sub_82E97D90(ctx, base);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// addi r4,r26,-108
	ctx.r4.s64 = ctx.r26.s64 + -108;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82472fc0
	ctx.lr = 0x8370E100;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8370E10C;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370e120
	if (cr6.lt) goto loc_8370E120;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8370E120;
	sub_82416268(ctx, base);
loc_8370E120:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// addi r4,r24,200
	ctx.r4.s64 = ctx.r24.s64 + 200;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r5,216(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 216);
	// bl 0x83354d50
	ctx.lr = 0x8370E14C;
	sub_83354D50(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8370e160
	if (!cr6.lt) goto loc_8370E160;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_8370E160:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_8370E170:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370e170
	if (!cr6.eq) goto loc_8370E170;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370E194;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8370E1A0;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370e1b4
	if (cr6.lt) goto loc_8370E1B4;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8370E1B4;
	sub_82416268(ctx, base);
loc_8370E1B4:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82e74890
	ctx.lr = 0x8370E1CC;
	sub_82E74890(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// lwz r27,132(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bge cr6,0x8370e1f4
	if (!cr6.lt) goto loc_8370E1F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8370E1F4;
	sub_82E745E0(ctx, base);
loc_8370E1F4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x8370E20C;
	sub_831CE980(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r26,-100
	ctx.r4.s64 = ctx.r26.s64 + -100;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370E234;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370E240;
	sub_82E74C08(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370e254
	if (cr6.lt) goto loc_8370E254;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x8370E254;
	sub_82416268(ctx, base);
loc_8370E254:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x8370E268;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// addi r4,r26,-84
	ctx.r4.s64 = ctx.r26.s64 + -84;
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// bl 0x82472fc0
	ctx.lr = 0x8370E2B8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8370E2C4;
	sub_82E74C08(ctx, base);
	// lwz r5,500(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370e2d8
	if (cr6.lt) goto loc_8370E2D8;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x8370E2D8;
	sub_82416268(ctx, base);
loc_8370E2D8:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// lwz r4,220(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 220);
	// bl 0x82e97d90
	ctx.lr = 0x8370E2F0;
	sub_82E97D90(ctx, base);
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// addi r4,r26,-68
	ctx.r4.s64 = ctx.r26.s64 + -68;
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82472fc0
	ctx.lr = 0x8370E30C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8370E318;
	sub_82E74C08(ctx, base);
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370e32c
	if (cr6.lt) goto loc_8370E32C;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x8370E32C;
	sub_82416268(ctx, base);
loc_8370E32C:
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// addi r4,r24,224
	ctx.r4.s64 = ctx.r24.s64 + 224;
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// lwz r5,240(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 240);
	// bl 0x83354d50
	ctx.lr = 0x8370E358;
	sub_83354D50(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8370e36c
	if (!cr6.lt) goto loc_8370E36C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_8370E36C:
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
loc_8370E37C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370e37c
	if (!cr6.eq) goto loc_8370E37C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370E3A0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8370E3AC;
	sub_82E74C08(ctx, base);
	// lwz r10,628(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370e3c0
	if (cr6.lt) goto loc_8370E3C0;
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x82416268
	ctx.lr = 0x8370E3C0;
	sub_82416268(ctx, base);
loc_8370E3C0:
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82e74890
	ctx.lr = 0x8370E3D8;
	sub_82E74890(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bge cr6,0x8370e400
	if (!cr6.lt) goto loc_8370E400;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8370E400;
	sub_82E745E0(ctx, base);
loc_8370E400:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x8370E418;
	sub_831CE980(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r26,-60
	ctx.r4.s64 = ctx.r26.s64 + -60;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370E440;
	sub_82472FC0(ctx, base);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370E44C;
	sub_82E74C08(ctx, base);
	// lwz r10,692(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370e460
	if (cr6.lt) goto loc_8370E460;
	// lwz r3,672(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// bl 0x82416268
	ctx.lr = 0x8370E460;
	sub_82416268(ctx, base);
loc_8370E460:
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// lwz r4,244(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 244);
	// bl 0x82e746c0
	ctx.lr = 0x8370E478;
	sub_82E746C0(ctx, base);
	// stw r30,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r30.u32);
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// addi r4,r26,-44
	ctx.r4.s64 = ctx.r26.s64 + -44;
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82472fc0
	ctx.lr = 0x8370E494;
	sub_82472FC0(ctx, base);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370E4A0;
	sub_82E74C08(ctx, base);
	// lwz r11,756(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370e4b4
	if (cr6.lt) goto loc_8370E4B4;
	// lwz r3,736(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// bl 0x82416268
	ctx.lr = 0x8370E4B4;
	sub_82416268(ctx, base);
loc_8370E4B4:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r30,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r30.u32);
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x8370E4C8;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r9,133
	ctx.r9.s64 = 133;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r4,r26,-36
	ctx.r4.s64 = ctx.r26.s64 + -36;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r30,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r30.u32);
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r31.u8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x82472fc0
	ctx.lr = 0x8370E51C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370E528;
	sub_82E74C08(ctx, base);
	// lwz r10,820(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370e53c
	if (cr6.lt) goto loc_8370E53C;
	// lwz r3,800(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// bl 0x82416268
	ctx.lr = 0x8370E53C;
	sub_82416268(ctx, base);
loc_8370E53C:
	// stw r30,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r31.u8);
	// lwz r4,248(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 248);
	// bl 0x82e746c0
	ctx.lr = 0x8370E554;
	sub_82E746C0(ctx, base);
	// stw r30,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r30.u32);
	// stw r31,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r31.u32);
	// addi r4,r26,-32
	ctx.r4.s64 = ctx.r26.s64 + -32;
	// stb r31,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82472fc0
	ctx.lr = 0x8370E570;
	sub_82472FC0(ctx, base);
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370E57C;
	sub_82E74C08(ctx, base);
	// lwz r11,884(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370e590
	if (cr6.lt) goto loc_8370E590;
	// lwz r3,864(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// bl 0x82416268
	ctx.lr = 0x8370E590;
	sub_82416268(ctx, base);
loc_8370E590:
	// stw r30,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r31.u32);
	// stb r31,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r31.u8);
	// lwz r4,252(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 252);
	// bl 0x82e746c0
	ctx.lr = 0x8370E5A8;
	sub_82E746C0(ctx, base);
	// stw r30,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r30.u32);
	// stw r31,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r31.u32);
	// addi r4,r26,-20
	ctx.r4.s64 = ctx.r26.s64 + -20;
	// stb r31,928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 928, ctx.r31.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82472fc0
	ctx.lr = 0x8370E5C4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370E5D0;
	sub_82E74C08(ctx, base);
	// lwz r11,948(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 948);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370e5e4
	if (cr6.lt) goto loc_8370E5E4;
	// lwz r3,928(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// bl 0x82416268
	ctx.lr = 0x8370E5E4;
	sub_82416268(ctx, base);
loc_8370E5E4:
	// stw r30,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r31.u32);
	// stb r31,928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 928, ctx.r31.u8);
	// lwz r4,256(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 256);
	// bl 0x82e97d90
	ctx.lr = 0x8370E5FC;
	sub_82E97D90(ctx, base);
	// stw r30,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r30.u32);
	// stw r31,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r31.u32);
	// addi r4,r26,-8
	ctx.r4.s64 = ctx.r26.s64 + -8;
	// stb r31,992(r1)
	PPC_STORE_U8(ctx.r1.u32 + 992, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82472fc0
	ctx.lr = 0x8370E618;
	sub_82472FC0(ctx, base);
	// addi r4,r1,992
	ctx.r4.s64 = ctx.r1.s64 + 992;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370E624;
	sub_82E74C08(ctx, base);
	// lwz r11,1012(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1012);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370e638
	if (cr6.lt) goto loc_8370E638;
	// lwz r3,992(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// bl 0x82416268
	ctx.lr = 0x8370E638;
	sub_82416268(ctx, base);
loc_8370E638:
	// stw r30,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r31.u32);
	// addi r27,r24,264
	ctx.r27.s64 = ctx.r24.s64 + 264;
	// stb r31,992(r1)
	PPC_STORE_U8(ctx.r1.u32 + 992, ctx.r31.u8);
	// lwz r4,264(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 264);
	// bl 0x82e749f8
	ctx.lr = 0x8370E654;
	sub_82E749F8(ctx, base);
	// lwz r11,264(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 264);
	// lwz r10,272(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 272);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r28,r10
	ctx.r28.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x8370e698
	if (cr6.eq) goto loc_8370E698;
loc_8370E670:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82e97d90
	ctx.lr = 0x8370E67C;
	sub_82E97D90(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x8370e670
	if (!cr6.eq) goto loc_8370E670;
loc_8370E698:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82475d40
	ctx.lr = 0x8370E6A4;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8370E6B0;
	sub_82E74C08(ctx, base);
	// lwz r11,1076(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1076);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370e6c4
	if (cr6.lt) goto loc_8370E6C4;
	// lwz r3,1056(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1056);
	// bl 0x82416268
	ctx.lr = 0x8370E6C4;
	sub_82416268(ctx, base);
loc_8370E6C4:
	// stw r30,1076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1076, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r31.u32);
	// addi r27,r24,280
	ctx.r27.s64 = ctx.r24.s64 + 280;
	// stb r31,1056(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1056, ctx.r31.u8);
	// lwz r4,280(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 280);
	// bl 0x82e749f8
	ctx.lr = 0x8370E6E0;
	sub_82E749F8(ctx, base);
	// lwz r11,280(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 280);
	// lwz r10,288(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 288);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r28,r10
	ctx.r28.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x8370e724
	if (cr6.eq) goto loc_8370E724;
loc_8370E6FC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82e97d90
	ctx.lr = 0x8370E708;
	sub_82E97D90(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x8370e6fc
	if (!cr6.eq) goto loc_8370E6FC;
loc_8370E724:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82e74890
	ctx.lr = 0x8370E730;
	sub_82E74890(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bge cr6,0x8370e758
	if (!cr6.lt) goto loc_8370E758;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8370E758;
	sub_82E745E0(ctx, base);
loc_8370E758:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x8370E770;
	sub_831CE980(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x831cf100
	ctx.lr = 0x8370E784;
	sub_831CF100(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370e798
	if (cr6.lt) goto loc_8370E798;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8386d088
	ctx.lr = 0x8370E798;
	sub_8386D088(ctx, base);
loc_8370E798:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x831cf100
	ctx.lr = 0x8370E7AC;
	sub_831CF100(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370e7c0
	if (cr6.lt) goto loc_8370E7C0;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8386d088
	ctx.lr = 0x8370E7C0;
	sub_8386D088(ctx, base);
loc_8370E7C0:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x831cf100
	ctx.lr = 0x8370E7D4;
	sub_831CF100(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370e7e8
	if (cr6.lt) goto loc_8370E7E8;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x8386d088
	ctx.lr = 0x8370E7E8;
	sub_8386D088(ctx, base);
loc_8370E7E8:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x831cf100
	ctx.lr = 0x8370E7FC;
	sub_831CF100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370E808"))) PPC_WEAK_FUNC(sub_8370E808);
PPC_FUNC_IMPL(__imp__sub_8370E808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8370E810;
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
	ctx.lr = 0x8370E838;
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
	// bge cr6,0x8370ea7c
	if (!cr6.lt) goto loc_8370EA7C;
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-23412
	ctx.r26.s64 = ctx.r11.s64 + -23412;
loc_8370E870:
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
	ctx.lr = 0x8370E8A4;
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
	ctx.lr = 0x8370E8BC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370e950
	if (!cr6.eq) goto loc_8370E950;
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
	ctx.lr = 0x8370E8F4;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8370e908
	if (!cr6.lt) goto loc_8370E908;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_8370E908:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370E90C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370e90c
	if (!cr6.eq) goto loc_8370E90C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370E930;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370e944
	if (cr6.lt) goto loc_8370E944;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8370E944;
	sub_82416268(ctx, base);
loc_8370E944:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_8370E950:
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
	ctx.lr = 0x8370E968;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370e9a4
	if (!cr6.eq) goto loc_8370E9A4;
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
	// bne cr6,0x8370e99c
	if (!cr6.eq) goto loc_8370E99C;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370e9a0
	goto loc_8370E9A0;
loc_8370E99C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8370E9A0:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_8370E9A4:
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
	ctx.lr = 0x8370E9BC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370ea50
	if (!cr6.eq) goto loc_8370EA50;
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
	ctx.lr = 0x8370E9F4;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8370ea08
	if (!cr6.lt) goto loc_8370EA08;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_8370EA08:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370EA0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370ea0c
	if (!cr6.eq) goto loc_8370EA0C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370EA30;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370ea44
	if (cr6.lt) goto loc_8370EA44;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8370EA44;
	sub_82416268(ctx, base);
loc_8370EA44:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_8370EA50:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370ea64
	if (cr6.lt) goto loc_8370EA64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8370EA64;
	sub_82416268(ctx, base);
loc_8370EA64:
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
	// bne 0x8370e870
	if (!cr0.eq) goto loc_8370E870;
loc_8370EA7C:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8370ea98
	if (cr6.eq) goto loc_8370EA98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8370EA90;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8370EA98;
	sub_82416268(ctx, base);
loc_8370EA98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370EAA4"))) PPC_WEAK_FUNC(sub_8370EAA4);
PPC_FUNC_IMPL(__imp__sub_8370EAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370EAA8"))) PPC_WEAK_FUNC(sub_8370EAA8);
PPC_FUNC_IMPL(__imp__sub_8370EAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8370EAB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8370EABC;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-23704
	ctx.r29.s64 = ctx.r11.s64 + -23704;
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8370EAD4;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-23304
	ctx.r7.s64 = ctx.r10.s64 + -23304;
	// addi r5,r8,-23320
	ctx.r5.s64 = ctx.r8.s64 + -23320;
	// addi r6,r9,-23316
	ctx.r6.s64 = ctx.r9.s64 + -23316;
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
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370EB1C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370EB38;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// sth r30,388(r31)
	PPC_STORE_U16(ctx.r31.u32 + 388, ctx.r30.u16);
	// addi r10,r31,372
	ctx.r10.s64 = ctx.r31.s64 + 372;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// addi r10,r31,396
	ctx.r10.s64 = ctx.r31.s64 + 396;
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// addi r9,r31,420
	ctx.r9.s64 = ctx.r31.s64 + 420;
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// sth r30,412(r31)
	PPC_STORE_U16(ctx.r31.u32 + 412, ctx.r30.u16);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// sth r30,436(r31)
	PPC_STORE_U16(ctx.r31.u32 + 436, ctx.r30.u16);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// bl 0x83694088
	ctx.lr = 0x8370EB9C;
	sub_83694088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370EBA8"))) PPC_WEAK_FUNC(sub_8370EBA8);
PPC_FUNC_IMPL(__imp__sub_8370EBA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8370ec60
	sub_8370EC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370EBB0"))) PPC_WEAK_FUNC(sub_8370EBB0);
PPC_FUNC_IMPL(__imp__sub_8370EBB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8370ec60
	sub_8370EC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370EBB8"))) PPC_WEAK_FUNC(sub_8370EBB8);
PPC_FUNC_IMPL(__imp__sub_8370EBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8370EBC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-23304
	ctx.r8.s64 = ctx.r11.s64 + -23304;
	// addi r7,r10,-23316
	ctx.r7.s64 = ctx.r10.s64 + -23316;
	// addi r6,r9,-23320
	ctx.r6.s64 = ctx.r9.s64 + -23320;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r30,r3,448
	ctx.r30.s64 = ctx.r3.s64 + 448;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x824238b8
	ctx.lr = 0x8370EBF8;
	sub_824238B8(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x824238b8
	ctx.lr = 0x8370EC00;
	sub_824238B8(ctx, base);
	// lwz r5,364(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// addi r29,r31,344
	ctx.r29.s64 = ctx.r31.s64 + 344;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370ec18
	if (cr6.lt) goto loc_8370EC18;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370EC18;
	sub_8386D088(ctx, base);
loc_8370EC18:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// addi r30,r31,316
	ctx.r30.s64 = ctx.r31.s64 + 316;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370ec44
	if (cr6.lt) goto loc_8370EC44;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370EC44;
	sub_8386D088(ctx, base);
loc_8370EC44:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8370EC58;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370EC60"))) PPC_WEAK_FUNC(sub_8370EC60);
PPC_FUNC_IMPL(__imp__sub_8370EC60) {
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
	// bl 0x8370ebb8
	ctx.lr = 0x8370EC80;
	sub_8370EBB8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8370eca0
	if (cr6.eq) goto loc_8370ECA0;
	// bl 0x82595188
	ctx.lr = 0x8370EC90;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8370ECA0;
	sub_825952B8(ctx, base);
loc_8370ECA0:
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

__attribute__((alias("__imp__sub_8370ECBC"))) PPC_WEAK_FUNC(sub_8370ECBC);
PPC_FUNC_IMPL(__imp__sub_8370ECBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370ECC0"))) PPC_WEAK_FUNC(sub_8370ECC0);
PPC_FUNC_IMPL(__imp__sub_8370ECC0) {
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
	ctx.lr = 0x8370ECD8;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-23704
	ctx.r4.s64 = ctx.r11.s64 + -23704;
	// li r5,22
	ctx.r5.s64 = 22;
	// bl 0x824208c8
	ctx.lr = 0x8370ECEC;
	sub_824208C8(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r3,r7,-23256
	ctx.r3.s64 = ctx.r7.s64 + -23256;
	// addi r6,r10,-23272
	ctx.r6.s64 = ctx.r10.s64 + -23272;
	// addi r5,r9,-23284
	ctx.r5.s64 = ctx.r9.s64 + -23284;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-23288
	ctx.r4.s64 = ctx.r8.s64 + -23288;
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

__attribute__((alias("__imp__sub_8370ED34"))) PPC_WEAK_FUNC(sub_8370ED34);
PPC_FUNC_IMPL(__imp__sub_8370ED34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370ED38"))) PPC_WEAK_FUNC(sub_8370ED38);
PPC_FUNC_IMPL(__imp__sub_8370ED38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8370ed50
	sub_8370ED50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370ED40"))) PPC_WEAK_FUNC(sub_8370ED40);
PPC_FUNC_IMPL(__imp__sub_8370ED40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8370ed50
	sub_8370ED50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370ED48"))) PPC_WEAK_FUNC(sub_8370ED48);
PPC_FUNC_IMPL(__imp__sub_8370ED48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8370ed50
	sub_8370ED50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370ED50"))) PPC_WEAK_FUNC(sub_8370ED50);
PPC_FUNC_IMPL(__imp__sub_8370ED50) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-23272
	ctx.r7.s64 = ctx.r11.s64 + -23272;
	// addi r6,r10,-23284
	ctx.r6.s64 = ctx.r10.s64 + -23284;
	// addi r5,r9,-23288
	ctx.r5.s64 = ctx.r9.s64 + -23288;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-23256
	ctx.r4.s64 = ctx.r8.s64 + -23256;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x8370EDA0;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8370edc0
	if (cr6.eq) goto loc_8370EDC0;
	// bl 0x82595188
	ctx.lr = 0x8370EDB0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8370EDC0;
	sub_825952B8(ctx, base);
loc_8370EDC0:
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

__attribute__((alias("__imp__sub_8370EDDC"))) PPC_WEAK_FUNC(sub_8370EDDC);
PPC_FUNC_IMPL(__imp__sub_8370EDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370EDE0"))) PPC_WEAK_FUNC(sub_8370EDE0);
PPC_FUNC_IMPL(__imp__sub_8370EDE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8370EDE8;
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
	// bge cr6,0x8370ee28
	if (!cr6.lt) goto loc_8370EE28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8370EE28;
	sub_82E745E0(ctx, base);
loc_8370EE28:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-23116
	ctx.r27.s64 = ctx.r11.s64 + -23116;
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
	ctx.lr = 0x8370EE70;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370EE7C;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370ee90
	if (cr6.lt) goto loc_8370EE90;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8370EE90;
	sub_82416268(ctx, base);
loc_8370EE90:
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
	// blt cr6,0x8370eeb0
	if (cr6.lt) goto loc_8370EEB0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370EEB0:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_8370EEC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370eec0
	if (!cr6.eq) goto loc_8370EEC0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370EEE4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370EEF0;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370ef04
	if (cr6.lt) goto loc_8370EF04;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8370EF04;
	sub_82416268(ctx, base);
loc_8370EF04:
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
	ctx.lr = 0x8370EF2C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370EF38;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370ef4c
	if (cr6.lt) goto loc_8370EF4C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8370EF4C;
	sub_82416268(ctx, base);
loc_8370EF4C:
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
	ctx.lr = 0x8370EF64;
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
	ctx.lr = 0x8370EF80;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370EF8C;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370efa0
	if (cr6.lt) goto loc_8370EFA0;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8370EFA0;
	sub_82416268(ctx, base);
loc_8370EFA0:
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
	// blt cr6,0x8370efc0
	if (cr6.lt) goto loc_8370EFC0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370EFC0:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_8370EFD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370efd0
	if (!cr6.eq) goto loc_8370EFD0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370EFF4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370F000;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370f014
	if (cr6.lt) goto loc_8370F014;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8370F014;
	sub_82416268(ctx, base);
loc_8370F014:
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
	ctx.lr = 0x8370F03C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370F048;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370f05c
	if (cr6.lt) goto loc_8370F05C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8370F05C;
	sub_82416268(ctx, base);
loc_8370F05C:
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
	// blt cr6,0x8370f07c
	if (cr6.lt) goto loc_8370F07C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370F07C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_8370F08C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370f08c
	if (!cr6.eq) goto loc_8370F08C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370F0B0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370F0BC;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370f0d0
	if (cr6.lt) goto loc_8370F0D0;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8370F0D0;
	sub_82416268(ctx, base);
loc_8370F0D0:
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
	ctx.lr = 0x8370F0F8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370F104;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370f118
	if (cr6.lt) goto loc_8370F118;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8370F118;
	sub_82416268(ctx, base);
loc_8370F118:
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
	ctx.lr = 0x8370F130;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370F13C"))) PPC_WEAK_FUNC(sub_8370F13C);
PPC_FUNC_IMPL(__imp__sub_8370F13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370F140"))) PPC_WEAK_FUNC(sub_8370F140);
PPC_FUNC_IMPL(__imp__sub_8370F140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8370F148;
	__savegprlr_26(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83691bb8
	ctx.lr = 0x8370F170;
	sub_83691BB8(ctx, base);
	// lwz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8370f460
	if (!cr6.lt) goto loc_8370F460;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-23072
	ctx.r26.s64 = ctx.r11.s64 + -23072;
loc_8370F1A8:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// ld r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + -8);
	// ld r8,-16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x82472fc0
	ctx.lr = 0x8370F1DC;
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
	ctx.lr = 0x8370F1F4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370f288
	if (!cr6.eq) goto loc_8370F288;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x82472fc0
	ctx.lr = 0x8370F22C;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8370f240
	if (!cr6.lt) goto loc_8370F240;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_8370F240:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370F244:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370f244
	if (!cr6.eq) goto loc_8370F244;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370F268;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370f27c
	if (cr6.lt) goto loc_8370F27C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8370F27C;
	sub_82416268(ctx, base);
loc_8370F27C:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_8370F288:
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
	ctx.lr = 0x8370F2A0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370f2dc
	if (!cr6.eq) goto loc_8370F2DC;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8370f2d4
	if (!cr6.eq) goto loc_8370F2D4;
	// ld r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8370f2d8
	goto loc_8370F2D8;
loc_8370F2D4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8370F2D8:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_8370F2DC:
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
	ctx.lr = 0x8370F2F4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370f388
	if (!cr6.eq) goto loc_8370F388;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x8370F32C;
	sub_82472FC0(ctx, base);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8370f340
	if (!cr6.lt) goto loc_8370F340;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_8370F340:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370F344:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370f344
	if (!cr6.eq) goto loc_8370F344;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370F368;
	sub_824208C8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370f37c
	if (cr6.lt) goto loc_8370F37C;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x8370F37C;
	sub_82416268(ctx, base);
loc_8370F37C:
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
loc_8370F388:
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
	ctx.lr = 0x8370F3A0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8370f434
	if (!cr6.eq) goto loc_8370F434;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x82472fc0
	ctx.lr = 0x8370F3D8;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8370f3ec
	if (!cr6.lt) goto loc_8370F3EC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_8370F3EC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8370F3F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370f3f0
	if (!cr6.eq) goto loc_8370F3F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,148
	ctx.r3.s64 = ctx.r28.s64 + 148;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8370F414;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370f428
	if (cr6.lt) goto loc_8370F428;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8370F428;
	sub_82416268(ctx, base);
loc_8370F428:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_8370F434:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370f448
	if (cr6.lt) goto loc_8370F448;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8370F448;
	sub_82416268(ctx, base);
loc_8370F448:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bne 0x8370f1a8
	if (!cr0.eq) goto loc_8370F1A8;
loc_8370F460:
	// lwz r31,224(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8370f47c
	if (cr6.eq) goto loc_8370F47C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8370F474;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8370F47C;
	sub_82416268(ctx, base);
loc_8370F47C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370F488"))) PPC_WEAK_FUNC(sub_8370F488);
PPC_FUNC_IMPL(__imp__sub_8370F488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8370F490;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8370F49C;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-23200
	ctx.r29.s64 = ctx.r11.s64 + -23200;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8370F4B4;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-22960
	ctx.r7.s64 = ctx.r10.s64 + -22960;
	// addi r5,r8,-22976
	ctx.r5.s64 = ctx.r8.s64 + -22976;
	// addi r6,r9,-22972
	ctx.r6.s64 = ctx.r9.s64 + -22972;
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
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370F4FC;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370F518;
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

__attribute__((alias("__imp__sub_8370F528"))) PPC_WEAK_FUNC(sub_8370F528);
PPC_FUNC_IMPL(__imp__sub_8370F528) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8370f5d0
	sub_8370F5D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370F530"))) PPC_WEAK_FUNC(sub_8370F530);
PPC_FUNC_IMPL(__imp__sub_8370F530) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8370f5d0
	sub_8370F5D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370F538"))) PPC_WEAK_FUNC(sub_8370F538);
PPC_FUNC_IMPL(__imp__sub_8370F538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8370F540;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-22960
	ctx.r8.s64 = ctx.r11.s64 + -22960;
	// addi r7,r10,-22972
	ctx.r7.s64 = ctx.r10.s64 + -22972;
	// addi r6,r9,-22976
	ctx.r6.s64 = ctx.r9.s64 + -22976;
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
	// blt cr6,0x8370f584
	if (cr6.lt) goto loc_8370F584;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370F584;
	sub_8386D088(ctx, base);
loc_8370F584:
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
	// blt cr6,0x8370f5b0
	if (cr6.lt) goto loc_8370F5B0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370F5B0;
	sub_8386D088(ctx, base);
loc_8370F5B0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8370F5C4;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370F5CC"))) PPC_WEAK_FUNC(sub_8370F5CC);
PPC_FUNC_IMPL(__imp__sub_8370F5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370F5D0"))) PPC_WEAK_FUNC(sub_8370F5D0);
PPC_FUNC_IMPL(__imp__sub_8370F5D0) {
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
	// bl 0x8370f538
	ctx.lr = 0x8370F5F0;
	sub_8370F538(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8370f610
	if (cr6.eq) goto loc_8370F610;
	// bl 0x82595188
	ctx.lr = 0x8370F600;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8370F610;
	sub_825952B8(ctx, base);
loc_8370F610:
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

__attribute__((alias("__imp__sub_8370F62C"))) PPC_WEAK_FUNC(sub_8370F62C);
PPC_FUNC_IMPL(__imp__sub_8370F62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370F630"))) PPC_WEAK_FUNC(sub_8370F630);
PPC_FUNC_IMPL(__imp__sub_8370F630) {
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
	ctx.lr = 0x8370F64C;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r30,r11,-23200
	ctx.r30.s64 = ctx.r11.s64 + -23200;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824208c8
	ctx.lr = 0x8370F664;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// addi r6,r10,-22924
	ctx.r6.s64 = ctx.r10.s64 + -22924;
	// addi r5,r9,-22936
	ctx.r5.s64 = ctx.r9.s64 + -22936;
	// addi r4,r8,-22940
	ctx.r4.s64 = ctx.r8.s64 + -22940;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r3,r7,-22944
	ctx.r3.s64 = ctx.r7.s64 + -22944;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// stw r10,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r10.u32);
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// stb r11,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r11.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8370F6B8;
	sub_824208C8(ctx, base);
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

__attribute__((alias("__imp__sub_8370F6D4"))) PPC_WEAK_FUNC(sub_8370F6D4);
PPC_FUNC_IMPL(__imp__sub_8370F6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370F6D8"))) PPC_WEAK_FUNC(sub_8370F6D8);
PPC_FUNC_IMPL(__imp__sub_8370F6D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8370f788
	sub_8370F788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370F6E0"))) PPC_WEAK_FUNC(sub_8370F6E0);
PPC_FUNC_IMPL(__imp__sub_8370F6E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8370f788
	sub_8370F788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370F6E8"))) PPC_WEAK_FUNC(sub_8370F6E8);
PPC_FUNC_IMPL(__imp__sub_8370F6E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8370f788
	sub_8370F788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370F6F0"))) PPC_WEAK_FUNC(sub_8370F6F0);
PPC_FUNC_IMPL(__imp__sub_8370F6F0) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r11,-22924
	ctx.r7.s64 = ctx.r11.s64 + -22924;
	// addi r6,r10,-22936
	ctx.r6.s64 = ctx.r10.s64 + -22936;
	// addi r5,r9,-22940
	ctx.r5.s64 = ctx.r9.s64 + -22940;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-22944
	ctx.r4.s64 = ctx.r8.s64 + -22944;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r30,r3,348
	ctx.r30.s64 = ctx.r3.s64 + 348;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// lwz r3,368(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x8370f750
	if (cr6.lt) goto loc_8370F750;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8370F750;
	sub_8386D088(ctx, base);
loc_8370F750:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x82eaf978
	ctx.lr = 0x8370F76C;
	sub_82EAF978(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8370F784"))) PPC_WEAK_FUNC(sub_8370F784);
PPC_FUNC_IMPL(__imp__sub_8370F784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370F788"))) PPC_WEAK_FUNC(sub_8370F788);
PPC_FUNC_IMPL(__imp__sub_8370F788) {
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
	// bl 0x8370f6f0
	ctx.lr = 0x8370F7A8;
	sub_8370F6F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8370f7c8
	if (cr6.eq) goto loc_8370F7C8;
	// bl 0x82595188
	ctx.lr = 0x8370F7B8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8370F7C8;
	sub_825952B8(ctx, base);
loc_8370F7C8:
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

__attribute__((alias("__imp__sub_8370F7E4"))) PPC_WEAK_FUNC(sub_8370F7E4);
PPC_FUNC_IMPL(__imp__sub_8370F7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8370F7E8"))) PPC_WEAK_FUNC(sub_8370F7E8);
PPC_FUNC_IMPL(__imp__sub_8370F7E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8370F7F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,140
	ctx.r10.s64 = 140;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x8370f830
	if (!cr6.lt) goto loc_8370F830;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8370F830;
	sub_82E745E0(ctx, base);
loc_8370F830:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r28,r11,-22588
	ctx.r28.s64 = ctx.r11.s64 + -22588;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r28,-156
	ctx.r4.s64 = ctx.r28.s64 + -156;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370F878;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370F884;
	sub_82E74C08(ctx, base);
	// lwz r5,404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8370f898
	if (cr6.lt) goto loc_8370F898;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x8370F898;
	sub_82416268(ctx, base);
loc_8370F898:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x8370f8b8
	if (cr6.lt) goto loc_8370F8B8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370F8B8:
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
loc_8370F8C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370f8c8
	if (!cr6.eq) goto loc_8370F8C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370F8EC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370F8F8;
	sub_82E74C08(ctx, base);
	// lwz r10,660(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370f90c
	if (cr6.lt) goto loc_8370F90C;
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x82416268
	ctx.lr = 0x8370F90C;
	sub_82416268(ctx, base);
loc_8370F90C:
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// addi r4,r28,-148
	ctx.r4.s64 = ctx.r28.s64 + -148;
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370F934;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370F940;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370f954
	if (cr6.lt) goto loc_8370F954;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8370F954;
	sub_82416268(ctx, base);
loc_8370F954:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8370F96C;
	sub_82E746C0(ctx, base);
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// addi r4,r28,-140
	ctx.r4.s64 = ctx.r28.s64 + -140;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82472fc0
	ctx.lr = 0x8370F988;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370F994;
	sub_82E74C08(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370f9a8
	if (cr6.lt) goto loc_8370F9A8;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x8370F9A8;
	sub_82416268(ctx, base);
loc_8370F9A8:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// blt cr6,0x8370f9c8
	if (cr6.lt) goto loc_8370F9C8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370F9C8:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_8370F9D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370f9d8
	if (!cr6.eq) goto loc_8370F9D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370F9FC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370FA08;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370fa1c
	if (cr6.lt) goto loc_8370FA1C;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8370FA1C;
	sub_82416268(ctx, base);
loc_8370FA1C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r28,-132
	ctx.r4.s64 = ctx.r28.s64 + -132;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370FA44;
	sub_82472FC0(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370FA50;
	sub_82E74C08(ctx, base);
	// lwz r11,596(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370fa64
	if (cr6.lt) goto loc_8370FA64;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x82416268
	ctx.lr = 0x8370FA64;
	sub_82416268(ctx, base);
loc_8370FA64:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// blt cr6,0x8370fa84
	if (cr6.lt) goto loc_8370FA84;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370FA84:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_8370FA94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370fa94
	if (!cr6.eq) goto loc_8370FA94;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370FAB8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370FAC4;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370fad8
	if (cr6.lt) goto loc_8370FAD8;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8370FAD8;
	sub_82416268(ctx, base);
loc_8370FAD8:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r4,r28,-124
	ctx.r4.s64 = ctx.r28.s64 + -124;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370FB00;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370FB0C;
	sub_82E74C08(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370fb20
	if (cr6.lt) goto loc_8370FB20;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x8370FB20;
	sub_82416268(ctx, base);
loc_8370FB20:
	// lwz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// addi r4,r29,172
	ctx.r4.s64 = ctx.r29.s64 + 172;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// blt cr6,0x8370fb40
	if (cr6.lt) goto loc_8370FB40;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370FB40:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_8370FB50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370fb50
	if (!cr6.eq) goto loc_8370FB50;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370FB74;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370FB80;
	sub_82E74C08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370fb94
	if (cr6.lt) goto loc_8370FB94;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8370FB94;
	sub_82416268(ctx, base);
loc_8370FB94:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r28,-112
	ctx.r4.s64 = ctx.r28.s64 + -112;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370FBBC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370FBC8;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370fbdc
	if (cr6.lt) goto loc_8370FBDC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8370FBDC;
	sub_82416268(ctx, base);
loc_8370FBDC:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwz r4,200(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// bl 0x82e746c0
	ctx.lr = 0x8370FBF4;
	sub_82E746C0(ctx, base);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r4,r28,-92
	ctx.r4.s64 = ctx.r28.s64 + -92;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82472fc0
	ctx.lr = 0x8370FC10;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370FC1C;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370fc30
	if (cr6.lt) goto loc_8370FC30;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8370FC30;
	sub_82416268(ctx, base);
loc_8370FC30:
	// lwz r11,224(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// addi r4,r29,204
	ctx.r4.s64 = ctx.r29.s64 + 204;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x8370fc50
	if (cr6.lt) goto loc_8370FC50;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370FC50:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_8370FC60:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370fc60
	if (!cr6.eq) goto loc_8370FC60;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370FC84;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370FC90;
	sub_82E74C08(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370fca4
	if (cr6.lt) goto loc_8370FCA4;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8370FCA4;
	sub_82416268(ctx, base);
loc_8370FCA4:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// addi r4,r28,-72
	ctx.r4.s64 = ctx.r28.s64 + -72;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370FCCC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370FCD8;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370fcec
	if (cr6.lt) goto loc_8370FCEC;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8370FCEC;
	sub_82416268(ctx, base);
loc_8370FCEC:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// lwz r4,232(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// bl 0x82e746c0
	ctx.lr = 0x8370FD04;
	sub_82E746C0(ctx, base);
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// addi r4,r28,-56
	ctx.r4.s64 = ctx.r28.s64 + -56;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82472fc0
	ctx.lr = 0x8370FD20;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370FD2C;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370fd40
	if (cr6.lt) goto loc_8370FD40;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8370FD40;
	sub_82416268(ctx, base);
loc_8370FD40:
	// lwz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// addi r4,r29,236
	ctx.r4.s64 = ctx.r29.s64 + 236;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// blt cr6,0x8370fd60
	if (cr6.lt) goto loc_8370FD60;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370FD60:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
loc_8370FD70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370fd70
	if (!cr6.eq) goto loc_8370FD70;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370FD94;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370FDA0;
	sub_82E74C08(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370fdb4
	if (cr6.lt) goto loc_8370FDB4;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x8370FDB4;
	sub_82416268(ctx, base);
loc_8370FDB4:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// addi r4,r28,-44
	ctx.r4.s64 = ctx.r28.s64 + -44;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370FDDC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370FDE8;
	sub_82E74C08(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370fdfc
	if (cr6.lt) goto loc_8370FDFC;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x8370FDFC;
	sub_82416268(ctx, base);
loc_8370FDFC:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// lwz r4,264(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// bl 0x82e746c0
	ctx.lr = 0x8370FE14;
	sub_82E746C0(ctx, base);
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// li r5,18
	ctx.r5.s64 = 18;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82472fc0
	ctx.lr = 0x8370FE30;
	sub_82472FC0(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370FE3C;
	sub_82E74C08(ctx, base);
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370fe50
	if (cr6.lt) goto loc_8370FE50;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x8370FE50;
	sub_82416268(ctx, base);
loc_8370FE50:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// addi r4,r29,268
	ctx.r4.s64 = ctx.r29.s64 + 268;
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// blt cr6,0x8370fe70
	if (cr6.lt) goto loc_8370FE70;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8370FE70:
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
loc_8370FE80:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8370fe80
	if (!cr6.eq) goto loc_8370FE80;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8370FEA4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370FEB0;
	sub_82E74C08(ctx, base);
	// lwz r10,628(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8370fec4
	if (cr6.lt) goto loc_8370FEC4;
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x82416268
	ctx.lr = 0x8370FEC4;
	sub_82416268(ctx, base);
loc_8370FEC4:
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8370FEEC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8370FEF8;
	sub_82E74C08(ctx, base);
	// lwz r11,692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8370ff0c
	if (cr6.lt) goto loc_8370FF0C;
	// lwz r3,672(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// bl 0x82416268
	ctx.lr = 0x8370FF0C;
	sub_82416268(ctx, base);
loc_8370FF0C:
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// lwz r4,296(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// bl 0x82e746c0
	ctx.lr = 0x8370FF24;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8370FF30"))) PPC_WEAK_FUNC(sub_8370FF30);
PPC_FUNC_IMPL(__imp__sub_8370FF30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8370FF38;
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
	ctx.lr = 0x8370FF60;
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
	// bge cr6,0x837101a4
	if (!cr6.lt) goto loc_837101A4;
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-22564
	ctx.r26.s64 = ctx.r11.s64 + -22564;
loc_8370FF98:
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
	ctx.lr = 0x8370FFCC;
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
	ctx.lr = 0x8370FFE4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83710078
	if (!cr6.eq) goto loc_83710078;
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
	ctx.lr = 0x8371001C;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83710030
	if (!cr6.lt) goto loc_83710030;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_83710030:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83710034:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83710034
	if (!cr6.eq) goto loc_83710034;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83710058;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8371006c
	if (cr6.lt) goto loc_8371006C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8371006C;
	sub_82416268(ctx, base);
loc_8371006C:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_83710078:
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
	ctx.lr = 0x83710090;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837100cc
	if (!cr6.eq) goto loc_837100CC;
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
	// bne cr6,0x837100c4
	if (!cr6.eq) goto loc_837100C4;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x837100c8
	goto loc_837100C8;
loc_837100C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_837100C8:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_837100CC:
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
	ctx.lr = 0x837100E4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83710178
	if (!cr6.eq) goto loc_83710178;
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
	ctx.lr = 0x8371011C;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83710130
	if (!cr6.lt) goto loc_83710130;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_83710130:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83710134:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83710134
	if (!cr6.eq) goto loc_83710134;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83710158;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8371016c
	if (cr6.lt) goto loc_8371016C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8371016C;
	sub_82416268(ctx, base);
loc_8371016C:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_83710178:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8371018c
	if (cr6.lt) goto loc_8371018C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8371018C;
	sub_82416268(ctx, base);
loc_8371018C:
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
	// bne 0x8370ff98
	if (!cr0.eq) goto loc_8370FF98;
loc_837101A4:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837101c0
	if (cr6.eq) goto loc_837101C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x837101B8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x837101C0;
	sub_82416268(ctx, base);
loc_837101C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837101CC"))) PPC_WEAK_FUNC(sub_837101CC);
PPC_FUNC_IMPL(__imp__sub_837101CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837101D0"))) PPC_WEAK_FUNC(sub_837101D0);
PPC_FUNC_IMPL(__imp__sub_837101D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837101D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x837101E4;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-22856
	ctx.r29.s64 = ctx.r11.s64 + -22856;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x837101FC;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-22456
	ctx.r7.s64 = ctx.r10.s64 + -22456;
	// addi r5,r8,-22472
	ctx.r5.s64 = ctx.r8.s64 + -22472;
	// addi r6,r9,-22468
	ctx.r6.s64 = ctx.r9.s64 + -22468;
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
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83710244;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83710260;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8371027C;
	sub_824208C8(ctx, base);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// stb r30,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8371029C;
	sub_824208C8(ctx, base);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r28,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r28.u32);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// addi r4,r29,80
	ctx.r4.s64 = ctx.r29.s64 + 80;
	// stb r30,436(r31)
	PPC_STORE_U8(ctx.r31.u32 + 436, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837102BC;
	sub_824208C8(ctx, base);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// stw r28,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r28.u32);
	// addi r3,r31,468
	ctx.r3.s64 = ctx.r31.s64 + 468;
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// stb r30,468(r31)
	PPC_STORE_U8(ctx.r31.u32 + 468, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837102DC;
	sub_824208C8(ctx, base);
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837102EC"))) PPC_WEAK_FUNC(sub_837102EC);
PPC_FUNC_IMPL(__imp__sub_837102EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837102F0"))) PPC_WEAK_FUNC(sub_837102F0);
PPC_FUNC_IMPL(__imp__sub_837102F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83710428
	sub_83710428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837102F8"))) PPC_WEAK_FUNC(sub_837102F8);
PPC_FUNC_IMPL(__imp__sub_837102F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83710428
	sub_83710428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83710300"))) PPC_WEAK_FUNC(sub_83710300);
PPC_FUNC_IMPL(__imp__sub_83710300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83710308;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-22456
	ctx.r8.s64 = ctx.r11.s64 + -22456;
	// addi r7,r10,-22468
	ctx.r7.s64 = ctx.r10.s64 + -22468;
	// addi r6,r9,-22472
	ctx.r6.s64 = ctx.r9.s64 + -22472;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,468
	ctx.r29.s64 = ctx.r3.s64 + 468;
	// lwz r5,488(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8371034c
	if (cr6.lt) goto loc_8371034C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8371034C;
	sub_8386D088(ctx, base);
loc_8371034C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r28,r30,436
	ctx.r28.s64 = ctx.r30.s64 + 436;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710378
	if (cr6.lt) goto loc_83710378;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83710378;
	sub_8386D088(ctx, base);
loc_83710378:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,404
	ctx.r29.s64 = ctx.r30.s64 + 404;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8371039c
	if (cr6.lt) goto loc_8371039C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8371039C;
	sub_8386D088(ctx, base);
loc_8371039C:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,372
	ctx.r28.s64 = ctx.r30.s64 + 372;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837103c0
	if (cr6.lt) goto loc_837103C0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837103C0;
	sub_8386D088(ctx, base);
loc_837103C0:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,344
	ctx.r29.s64 = ctx.r30.s64 + 344;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837103e4
	if (cr6.lt) goto loc_837103E4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837103E4;
	sub_8386D088(ctx, base);
loc_837103E4:
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
	// blt cr6,0x83710408
	if (cr6.lt) goto loc_83710408;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83710408;
	sub_8386D088(ctx, base);
loc_83710408:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8371041C;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83710424"))) PPC_WEAK_FUNC(sub_83710424);
PPC_FUNC_IMPL(__imp__sub_83710424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83710428"))) PPC_WEAK_FUNC(sub_83710428);
PPC_FUNC_IMPL(__imp__sub_83710428) {
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
	// bl 0x83710300
	ctx.lr = 0x83710448;
	sub_83710300(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83710468
	if (cr6.eq) goto loc_83710468;
	// bl 0x82595188
	ctx.lr = 0x83710458;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83710468;
	sub_825952B8(ctx, base);
loc_83710468:
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

__attribute__((alias("__imp__sub_83710484"))) PPC_WEAK_FUNC(sub_83710484);
PPC_FUNC_IMPL(__imp__sub_83710484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83710488"))) PPC_WEAK_FUNC(sub_83710488);
PPC_FUNC_IMPL(__imp__sub_83710488) {
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
	ctx.lr = 0x837104A0;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-22856
	ctx.r4.s64 = ctx.r11.s64 + -22856;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x824208c8
	ctx.lr = 0x837104B4;
	sub_824208C8(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r3,r7,-22408
	ctx.r3.s64 = ctx.r7.s64 + -22408;
	// addi r6,r10,-22424
	ctx.r6.s64 = ctx.r10.s64 + -22424;
	// addi r5,r9,-22436
	ctx.r5.s64 = ctx.r9.s64 + -22436;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-22440
	ctx.r4.s64 = ctx.r8.s64 + -22440;
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

__attribute__((alias("__imp__sub_837104FC"))) PPC_WEAK_FUNC(sub_837104FC);
PPC_FUNC_IMPL(__imp__sub_837104FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83710500"))) PPC_WEAK_FUNC(sub_83710500);
PPC_FUNC_IMPL(__imp__sub_83710500) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83710518
	sub_83710518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83710508"))) PPC_WEAK_FUNC(sub_83710508);
PPC_FUNC_IMPL(__imp__sub_83710508) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83710518
	sub_83710518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83710510"))) PPC_WEAK_FUNC(sub_83710510);
PPC_FUNC_IMPL(__imp__sub_83710510) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83710518
	sub_83710518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83710518"))) PPC_WEAK_FUNC(sub_83710518);
PPC_FUNC_IMPL(__imp__sub_83710518) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-22424
	ctx.r7.s64 = ctx.r11.s64 + -22424;
	// addi r6,r10,-22436
	ctx.r6.s64 = ctx.r10.s64 + -22436;
	// addi r5,r9,-22440
	ctx.r5.s64 = ctx.r9.s64 + -22440;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-22408
	ctx.r4.s64 = ctx.r8.s64 + -22408;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x83710568;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83710588
	if (cr6.eq) goto loc_83710588;
	// bl 0x82595188
	ctx.lr = 0x83710578;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83710588;
	sub_825952B8(ctx, base);
loc_83710588:
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

__attribute__((alias("__imp__sub_837105A4"))) PPC_WEAK_FUNC(sub_837105A4);
PPC_FUNC_IMPL(__imp__sub_837105A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837105A8"))) PPC_WEAK_FUNC(sub_837105A8);
PPC_FUNC_IMPL(__imp__sub_837105A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837105B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-1008(r1)
	ea = -1008 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,143
	ctx.r11.s64 = 143;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x837105f0
	if (!cr6.lt) goto loc_837105F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e745e0
	ctx.lr = 0x837105F0;
	sub_82E745E0(ctx, base);
loc_837105F0:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r26,r11,-22024
	ctx.r26.s64 = ctx.r11.s64 + -22024;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r4,r26,-232
	ctx.r4.s64 = ctx.r26.s64 + -232;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// stw r30,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r30.u32);
	// stw r31,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r31.u32);
	// stb r31,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83710638;
	sub_82472FC0(ctx, base);
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710644;
	sub_82E74C08(ctx, base);
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83710658
	if (cr6.lt) goto loc_83710658;
	// lwz r3,688(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// bl 0x82416268
	ctx.lr = 0x83710658;
	sub_82416268(ctx, base);
loc_83710658:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// addi r4,r25,20
	ctx.r4.s64 = ctx.r25.s64 + 20;
	// stw r30,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r30.u32);
	// stw r31,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, ctx.r31.u8);
	// blt cr6,0x83710678
	if (cr6.lt) goto loc_83710678;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83710678:
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
loc_83710688:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83710688
	if (!cr6.eq) goto loc_83710688;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x837106AC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837106B8;
	sub_82E74C08(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837106cc
	if (cr6.lt) goto loc_837106CC;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x837106CC;
	sub_82416268(ctx, base);
loc_837106CC:
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// addi r4,r26,-224
	ctx.r4.s64 = ctx.r26.s64 + -224;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stw r30,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r30.u32);
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x837106F4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710700;
	sub_82E74C08(ctx, base);
	// lwz r11,580(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710714
	if (cr6.lt) goto loc_83710714;
	// lwz r3,560(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x82416268
	ctx.lr = 0x83710714;
	sub_82416268(ctx, base);
loc_83710714:
	// stw r30,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
	// lwz r4,48(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8371072C;
	sub_82E746C0(ctx, base);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// addi r4,r26,-216
	ctx.r4.s64 = ctx.r26.s64 + -216;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82472fc0
	ctx.lr = 0x83710748;
	sub_82472FC0(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710754;
	sub_82E74C08(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710768
	if (cr6.lt) goto loc_83710768;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x83710768;
	sub_82416268(ctx, base);
loc_83710768:
	// lwz r11,136(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 136);
	// addi r4,r25,116
	ctx.r4.s64 = ctx.r25.s64 + 116;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// blt cr6,0x83710788
	if (cr6.lt) goto loc_83710788;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83710788:
	// stw r30,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r31.u32);
	// stb r31,752(r1)
	PPC_STORE_U8(ctx.r1.u32 + 752, ctx.r31.u8);
loc_83710798:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83710798
	if (!cr6.eq) goto loc_83710798;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x837107BC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837107C8;
	sub_82E74C08(ctx, base);
	// lwz r10,772(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837107dc
	if (cr6.lt) goto loc_837107DC;
	// lwz r3,752(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// bl 0x82416268
	ctx.lr = 0x837107DC;
	sub_82416268(ctx, base);
loc_837107DC:
	// stw r30,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r30.u32);
	// addi r4,r26,-208
	ctx.r4.s64 = ctx.r26.s64 + -208;
	// stw r31,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,752(r1)
	PPC_STORE_U8(ctx.r1.u32 + 752, ctx.r31.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83710804;
	sub_82472FC0(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710810;
	sub_82E74C08(ctx, base);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710824
	if (cr6.lt) goto loc_83710824;
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82416268
	ctx.lr = 0x83710824;
	sub_82416268(ctx, base);
loc_83710824:
	// lwz r11,164(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 164);
	// addi r4,r25,144
	ctx.r4.s64 = ctx.r25.s64 + 144;
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// blt cr6,0x83710844
	if (cr6.lt) goto loc_83710844;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83710844:
	// stw r30,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r31.u32);
	// stb r31,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r31.u8);
loc_83710854:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83710854
	if (!cr6.eq) goto loc_83710854;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83710878;
	sub_82472FC0(ctx, base);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710884;
	sub_82E74C08(ctx, base);
	// lwz r10,644(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83710898
	if (cr6.lt) goto loc_83710898;
	// lwz r3,624(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// bl 0x82416268
	ctx.lr = 0x83710898;
	sub_82416268(ctx, base);
loc_83710898:
	// stw r30,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r30.u32);
	// addi r4,r26,-200
	ctx.r4.s64 = ctx.r26.s64 + -200;
	// stw r31,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r31.u8);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x837108C0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837108CC;
	sub_82E74C08(ctx, base);
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837108e0
	if (cr6.lt) goto loc_837108E0;
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82416268
	ctx.lr = 0x837108E0;
	sub_82416268(ctx, base);
loc_837108E0:
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// lwz r4,172(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x837108F8;
	sub_82E746C0(ctx, base);
	// stw r30,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r30.u32);
	// stw r31,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r31.u32);
	// addi r4,r26,-188
	ctx.r4.s64 = ctx.r26.s64 + -188;
	// stb r31,880(r1)
	PPC_STORE_U8(ctx.r1.u32 + 880, ctx.r31.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82472fc0
	ctx.lr = 0x83710914;
	sub_82472FC0(ctx, base);
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710920;
	sub_82E74C08(ctx, base);
	// lwz r11,900(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 900);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710934
	if (cr6.lt) goto loc_83710934;
	// lwz r3,880(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	// bl 0x82416268
	ctx.lr = 0x83710934;
	sub_82416268(ctx, base);
loc_83710934:
	// lwz r11,196(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 196);
	// addi r4,r25,176
	ctx.r4.s64 = ctx.r25.s64 + 176;
	// stw r30,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r30.u32);
	// stw r31,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,880(r1)
	PPC_STORE_U8(ctx.r1.u32 + 880, ctx.r31.u8);
	// blt cr6,0x83710954
	if (cr6.lt) goto loc_83710954;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83710954:
	// stw r30,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
loc_83710964:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83710964
	if (!cr6.eq) goto loc_83710964;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83710988;
	sub_82472FC0(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710994;
	sub_82E74C08(ctx, base);
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837109a8
	if (cr6.lt) goto loc_837109A8;
	// lwz r3,432(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x82416268
	ctx.lr = 0x837109A8;
	sub_82416268(ctx, base);
loc_837109A8:
	// stw r30,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r30.u32);
	// addi r4,r26,-176
	ctx.r4.s64 = ctx.r26.s64 + -176;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x837109D0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837109DC;
	sub_82E74C08(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837109f0
	if (cr6.lt) goto loc_837109F0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x837109F0;
	sub_82416268(ctx, base);
loc_837109F0:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// lwz r4,204(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// bl 0x82e746c0
	ctx.lr = 0x83710A08;
	sub_82E746C0(ctx, base);
	// stw r30,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r30.u32);
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// addi r4,r26,-156
	ctx.r4.s64 = ctx.r26.s64 + -156;
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82472fc0
	ctx.lr = 0x83710A24;
	sub_82472FC0(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710A30;
	sub_82E74C08(ctx, base);
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710a44
	if (cr6.lt) goto loc_83710A44;
	// lwz r3,496(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x82416268
	ctx.lr = 0x83710A44;
	sub_82416268(ctx, base);
loc_83710A44:
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// addi r4,r25,208
	ctx.r4.s64 = ctx.r25.s64 + 208;
	// stw r30,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r30.u32);
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
	// blt cr6,0x83710a64
	if (cr6.lt) goto loc_83710A64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83710A64:
	// stw r30,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r31.u32);
	// stb r31,816(r1)
	PPC_STORE_U8(ctx.r1.u32 + 816, ctx.r31.u8);
loc_83710A74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83710a74
	if (!cr6.eq) goto loc_83710A74;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83710A98;
	sub_82472FC0(ctx, base);
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710AA4;
	sub_82E74C08(ctx, base);
	// lwz r10,836(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83710ab8
	if (cr6.lt) goto loc_83710AB8;
	// lwz r3,816(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// bl 0x82416268
	ctx.lr = 0x83710AB8;
	sub_82416268(ctx, base);
loc_83710AB8:
	// stw r30,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r30.u32);
	// addi r4,r26,-144
	ctx.r4.s64 = ctx.r26.s64 + -144;
	// stw r31,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r31,816(r1)
	PPC_STORE_U8(ctx.r1.u32 + 816, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83710AE0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710AEC;
	sub_82E74C08(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710b00
	if (cr6.lt) goto loc_83710B00;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x83710B00;
	sub_82416268(ctx, base);
loc_83710B00:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// lwz r4,236(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 236);
	// bl 0x82e746c0
	ctx.lr = 0x83710B18;
	sub_82E746C0(ctx, base);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r4,r26,-132
	ctx.r4.s64 = ctx.r26.s64 + -132;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82472fc0
	ctx.lr = 0x83710B34;
	sub_82472FC0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710B40;
	sub_82E74C08(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710b54
	if (cr6.lt) goto loc_83710B54;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x83710B54;
	sub_82416268(ctx, base);
loc_83710B54:
	// lwz r11,260(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 260);
	// addi r4,r25,240
	ctx.r4.s64 = ctx.r25.s64 + 240;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// blt cr6,0x83710b74
	if (cr6.lt) goto loc_83710B74;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83710B74:
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
loc_83710B84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83710b84
	if (!cr6.eq) goto loc_83710B84;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83710BA8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710BB4;
	sub_82E74C08(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83710bc8
	if (cr6.lt) goto loc_83710BC8;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x83710BC8;
	sub_82416268(ctx, base);
loc_83710BC8:
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// addi r4,r26,-120
	ctx.r4.s64 = ctx.r26.s64 + -120;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83710BF0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710BFC;
	sub_82E74C08(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710c10
	if (cr6.lt) goto loc_83710C10;
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82416268
	ctx.lr = 0x83710C10;
	sub_82416268(ctx, base);
loc_83710C10:
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// lwz r4,268(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 268);
	// bl 0x82e746c0
	ctx.lr = 0x83710C28;
	sub_82E746C0(ctx, base);
	// stw r30,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r30.u32);
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// addi r4,r26,-96
	ctx.r4.s64 = ctx.r26.s64 + -96;
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82472fc0
	ctx.lr = 0x83710C44;
	sub_82472FC0(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710C50;
	sub_82E74C08(ctx, base);
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710c64
	if (cr6.lt) goto loc_83710C64;
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82416268
	ctx.lr = 0x83710C64;
	sub_82416268(ctx, base);
loc_83710C64:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r30,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r30.u32);
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x83710C78;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r9,133
	ctx.r9.s64 = 133;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r8,8192
	ctx.r8.s64 = 8192;
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r4,r26,-84
	ctx.r4.s64 = ctx.r26.s64 + -84;
	// stb r6,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r6.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r30,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r30.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82472fc0
	ctx.lr = 0x83710CD0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x83710CDC;
	sub_82E74C08(ctx, base);
	// lwz r9,484(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x83710cf0
	if (cr6.lt) goto loc_83710CF0;
	// lwz r3,464(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x82416268
	ctx.lr = 0x83710CF0;
	sub_82416268(ctx, base);
loc_83710CF0:
	// stw r30,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// lwz r4,272(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 272);
	// bl 0x82e97d90
	ctx.lr = 0x83710D08;
	sub_82E97D90(ctx, base);
	// stw r30,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r30.u32);
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// addi r4,r26,-76
	ctx.r4.s64 = ctx.r26.s64 + -76;
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82472fc0
	ctx.lr = 0x83710D24;
	sub_82472FC0(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x83710D30;
	sub_82E74C08(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710d44
	if (cr6.lt) goto loc_83710D44;
	// lwz r3,528(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x82416268
	ctx.lr = 0x83710D44;
	sub_82416268(ctx, base);
loc_83710D44:
	// stw r30,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
	// lwz r4,276(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 276);
	// bl 0x82e97d90
	ctx.lr = 0x83710D5C;
	sub_82E97D90(ctx, base);
	// stw r30,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r30.u32);
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// addi r4,r26,-68
	ctx.r4.s64 = ctx.r26.s64 + -68;
	// stb r31,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r31.u8);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82472fc0
	ctx.lr = 0x83710D78;
	sub_82472FC0(ctx, base);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x83710D84;
	sub_82E74C08(ctx, base);
	// lwz r11,612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710d98
	if (cr6.lt) goto loc_83710D98;
	// lwz r3,592(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// bl 0x82416268
	ctx.lr = 0x83710D98;
	sub_82416268(ctx, base);
loc_83710D98:
	// stw r30,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// stb r31,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r31.u8);
	// lwz r4,280(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 280);
	// bl 0x82e97d90
	ctx.lr = 0x83710DB0;
	sub_82E97D90(ctx, base);
	// stw r30,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r30.u32);
	// stw r31,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r31.u32);
	// addi r4,r26,-60
	ctx.r4.s64 = ctx.r26.s64 + -60;
	// stb r31,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r31.u8);
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82472fc0
	ctx.lr = 0x83710DCC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x83710DD8;
	sub_82E74C08(ctx, base);
	// lwz r11,676(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710dec
	if (cr6.lt) goto loc_83710DEC;
	// lwz r3,656(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// bl 0x82416268
	ctx.lr = 0x83710DEC;
	sub_82416268(ctx, base);
loc_83710DEC:
	// stw r30,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r31.u32);
	// stb r31,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r31.u8);
	// lwz r4,284(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 284);
	// bl 0x82e97d90
	ctx.lr = 0x83710E04;
	sub_82E97D90(ctx, base);
	// stw r30,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r30.u32);
	// stw r31,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r31.u32);
	// addi r4,r26,-36
	ctx.r4.s64 = ctx.r26.s64 + -36;
	// stb r31,720(r1)
	PPC_STORE_U8(ctx.r1.u32 + 720, ctx.r31.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82472fc0
	ctx.lr = 0x83710E20;
	sub_82472FC0(ctx, base);
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x83710E2C;
	sub_82E74C08(ctx, base);
	// lwz r11,740(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710e40
	if (cr6.lt) goto loc_83710E40;
	// lwz r3,720(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// bl 0x82416268
	ctx.lr = 0x83710E40;
	sub_82416268(ctx, base);
loc_83710E40:
	// stw r30,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r31.u32);
	// stb r31,720(r1)
	PPC_STORE_U8(ctx.r1.u32 + 720, ctx.r31.u8);
	// lwz r4,288(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 288);
	// bl 0x82e97d90
	ctx.lr = 0x83710E58;
	sub_82E97D90(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82e74890
	ctx.lr = 0x83710E64;
	sub_82E74890(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bge cr6,0x83710e8c
	if (!cr6.lt) goto loc_83710E8C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83710E8C;
	sub_82E745E0(ctx, base);
loc_83710E8C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x83710EA4;
	sub_831CE980(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r26,-24
	ctx.r4.s64 = ctx.r26.s64 + -24;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// stw r30,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r30.u32);
	// stw r31,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r31.u32);
	// stb r31,784(r1)
	PPC_STORE_U8(ctx.r1.u32 + 784, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83710ECC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710ED8;
	sub_82E74C08(ctx, base);
	// lwz r10,804(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83710eec
	if (cr6.lt) goto loc_83710EEC;
	// lwz r3,784(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// bl 0x82416268
	ctx.lr = 0x83710EEC;
	sub_82416268(ctx, base);
loc_83710EEC:
	// stw r30,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r31.u32);
	// stb r31,784(r1)
	PPC_STORE_U8(ctx.r1.u32 + 784, ctx.r31.u8);
	// lwz r4,292(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 292);
	// bl 0x82e97d90
	ctx.lr = 0x83710F04;
	sub_82E97D90(ctx, base);
	// stw r30,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r30.u32);
	// stw r31,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r31.u32);
	// addi r4,r26,-12
	ctx.r4.s64 = ctx.r26.s64 + -12;
	// stb r31,848(r1)
	PPC_STORE_U8(ctx.r1.u32 + 848, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82472fc0
	ctx.lr = 0x83710F20;
	sub_82472FC0(ctx, base);
	// addi r4,r1,848
	ctx.r4.s64 = ctx.r1.s64 + 848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710F2C;
	sub_82E74C08(ctx, base);
	// lwz r11,868(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710f40
	if (cr6.lt) goto loc_83710F40;
	// lwz r3,848(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// bl 0x82416268
	ctx.lr = 0x83710F40;
	sub_82416268(ctx, base);
loc_83710F40:
	// stw r30,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r31.u32);
	// stb r31,848(r1)
	PPC_STORE_U8(ctx.r1.u32 + 848, ctx.r31.u8);
	// lwz r4,296(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 296);
	// bl 0x82e97d90
	ctx.lr = 0x83710F58;
	sub_82E97D90(ctx, base);
	// stw r30,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r30.u32);
	// stw r31,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r31,912(r1)
	PPC_STORE_U8(ctx.r1.u32 + 912, ctx.r31.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x82472fc0
	ctx.lr = 0x83710F74;
	sub_82472FC0(ctx, base);
	// addi r4,r1,912
	ctx.r4.s64 = ctx.r1.s64 + 912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83710F80;
	sub_82E74C08(ctx, base);
	// lwz r11,932(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83710f94
	if (cr6.lt) goto loc_83710F94;
	// lwz r3,912(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	// bl 0x82416268
	ctx.lr = 0x83710F94;
	sub_82416268(ctx, base);
loc_83710F94:
	// stw r30,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r31.u32);
	// stb r31,912(r1)
	PPC_STORE_U8(ctx.r1.u32 + 912, ctx.r31.u8);
	// lwz r4,300(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 300);
	// bl 0x82e746c0
	ctx.lr = 0x83710FAC;
	sub_82E746C0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x831cf100
	ctx.lr = 0x83710FB4;
	sub_831CF100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1008
	ctx.r1.s64 = ctx.r1.s64 + 1008;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83710FC0"))) PPC_WEAK_FUNC(sub_83710FC0);
PPC_FUNC_IMPL(__imp__sub_83710FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83710FC8;
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
	ctx.lr = 0x83710FF0;
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
	// bge cr6,0x83711234
	if (!cr6.lt) goto loc_83711234;
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-22000
	ctx.r26.s64 = ctx.r11.s64 + -22000;
loc_83711028:
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
	ctx.lr = 0x8371105C;
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
	ctx.lr = 0x83711074;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83711108
	if (!cr6.eq) goto loc_83711108;
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
	ctx.lr = 0x837110AC;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x837110c0
	if (!cr6.lt) goto loc_837110C0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_837110C0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837110C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837110c4
	if (!cr6.eq) goto loc_837110C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x837110E8;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837110fc
	if (cr6.lt) goto loc_837110FC;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x837110FC;
	sub_82416268(ctx, base);
loc_837110FC:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_83711108:
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
	ctx.lr = 0x83711120;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8371115c
	if (!cr6.eq) goto loc_8371115C;
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
	// bne cr6,0x83711154
	if (!cr6.eq) goto loc_83711154;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83711158
	goto loc_83711158;
loc_83711154:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83711158:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_8371115C:
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
	ctx.lr = 0x83711174;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83711208
	if (!cr6.eq) goto loc_83711208;
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
	ctx.lr = 0x837111AC;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x837111c0
	if (!cr6.lt) goto loc_837111C0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_837111C0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837111C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837111c4
	if (!cr6.eq) goto loc_837111C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x837111E8;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837111fc
	if (cr6.lt) goto loc_837111FC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x837111FC;
	sub_82416268(ctx, base);
loc_837111FC:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_83711208:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8371121c
	if (cr6.lt) goto loc_8371121C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8371121C;
	sub_82416268(ctx, base);
loc_8371121C:
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
	// bne 0x83711028
	if (!cr0.eq) goto loc_83711028;
loc_83711234:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83711250
	if (cr6.eq) goto loc_83711250;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83711248;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83711250;
	sub_82416268(ctx, base);
loc_83711250:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8371125C"))) PPC_WEAK_FUNC(sub_8371125C);
PPC_FUNC_IMPL(__imp__sub_8371125C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83711260"))) PPC_WEAK_FUNC(sub_83711260);
PPC_FUNC_IMPL(__imp__sub_83711260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83711268;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83711274;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-22352
	ctx.r29.s64 = ctx.r11.s64 + -22352;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8371128C;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-21892
	ctx.r7.s64 = ctx.r10.s64 + -21892;
	// addi r5,r8,-21908
	ctx.r5.s64 = ctx.r8.s64 + -21908;
	// addi r6,r9,-21904
	ctx.r6.s64 = ctx.r9.s64 + -21904;
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
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837112D4;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837112F0;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83711310;
	sub_824208C8(ctx, base);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// stw r28,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r28.u32);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// stb r30,408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 408, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83711330;
	sub_824208C8(ctx, base);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stw r28,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r28.u32);
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// addi r4,r29,80
	ctx.r4.s64 = ctx.r29.s64 + 80;
	// stb r30,440(r31)
	PPC_STORE_U8(ctx.r31.u32 + 440, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83711350;
	sub_824208C8(ctx, base);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711380"))) PPC_WEAK_FUNC(sub_83711380);
PPC_FUNC_IMPL(__imp__sub_83711380) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83711490
	sub_83711490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711388"))) PPC_WEAK_FUNC(sub_83711388);
PPC_FUNC_IMPL(__imp__sub_83711388) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83711490
	sub_83711490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711390"))) PPC_WEAK_FUNC(sub_83711390);
PPC_FUNC_IMPL(__imp__sub_83711390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83711398;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-21892
	ctx.r8.s64 = ctx.r11.s64 + -21892;
	// addi r7,r10,-21904
	ctx.r7.s64 = ctx.r10.s64 + -21904;
	// addi r6,r9,-21908
	ctx.r6.s64 = ctx.r9.s64 + -21908;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r28,r3,440
	ctx.r28.s64 = ctx.r3.s64 + 440;
	// lwz r5,460(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x837113dc
	if (cr6.lt) goto loc_837113DC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x837113DC;
	sub_8386D088(ctx, base);
loc_837113DC:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r29,r30,408
	ctx.r29.s64 = ctx.r30.s64 + 408;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83711408
	if (cr6.lt) goto loc_83711408;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83711408;
	sub_8386D088(ctx, base);
loc_83711408:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,376
	ctx.r28.s64 = ctx.r30.s64 + 376;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8371142c
	if (cr6.lt) goto loc_8371142C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8371142C;
	sub_8386D088(ctx, base);
loc_8371142C:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,344
	ctx.r29.s64 = ctx.r30.s64 + 344;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83711450
	if (cr6.lt) goto loc_83711450;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83711450;
	sub_8386D088(ctx, base);
loc_83711450:
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
	// blt cr6,0x83711474
	if (cr6.lt) goto loc_83711474;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83711474;
	sub_8386D088(ctx, base);
loc_83711474:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x83711488;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711490"))) PPC_WEAK_FUNC(sub_83711490);
PPC_FUNC_IMPL(__imp__sub_83711490) {
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
	// bl 0x83711390
	ctx.lr = 0x837114B0;
	sub_83711390(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837114d0
	if (cr6.eq) goto loc_837114D0;
	// bl 0x82595188
	ctx.lr = 0x837114C0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837114D0;
	sub_825952B8(ctx, base);
loc_837114D0:
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

__attribute__((alias("__imp__sub_837114EC"))) PPC_WEAK_FUNC(sub_837114EC);
PPC_FUNC_IMPL(__imp__sub_837114EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837114F0"))) PPC_WEAK_FUNC(sub_837114F0);
PPC_FUNC_IMPL(__imp__sub_837114F0) {
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
	ctx.lr = 0x83711508;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-22352
	ctx.r4.s64 = ctx.r11.s64 + -22352;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8371151C;
	sub_824208C8(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r3,r7,-21844
	ctx.r3.s64 = ctx.r7.s64 + -21844;
	// addi r6,r10,-21860
	ctx.r6.s64 = ctx.r10.s64 + -21860;
	// addi r5,r9,-21872
	ctx.r5.s64 = ctx.r9.s64 + -21872;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-21876
	ctx.r4.s64 = ctx.r8.s64 + -21876;
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

__attribute__((alias("__imp__sub_83711564"))) PPC_WEAK_FUNC(sub_83711564);
PPC_FUNC_IMPL(__imp__sub_83711564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83711568"))) PPC_WEAK_FUNC(sub_83711568);
PPC_FUNC_IMPL(__imp__sub_83711568) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83711580
	sub_83711580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711570"))) PPC_WEAK_FUNC(sub_83711570);
PPC_FUNC_IMPL(__imp__sub_83711570) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83711580
	sub_83711580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711578"))) PPC_WEAK_FUNC(sub_83711578);
PPC_FUNC_IMPL(__imp__sub_83711578) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83711580
	sub_83711580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711580"))) PPC_WEAK_FUNC(sub_83711580);
PPC_FUNC_IMPL(__imp__sub_83711580) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-21860
	ctx.r7.s64 = ctx.r11.s64 + -21860;
	// addi r6,r10,-21872
	ctx.r6.s64 = ctx.r10.s64 + -21872;
	// addi r5,r9,-21876
	ctx.r5.s64 = ctx.r9.s64 + -21876;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-21844
	ctx.r4.s64 = ctx.r8.s64 + -21844;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x837115D0;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837115f0
	if (cr6.eq) goto loc_837115F0;
	// bl 0x82595188
	ctx.lr = 0x837115E0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837115F0;
	sub_825952B8(ctx, base);
loc_837115F0:
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

__attribute__((alias("__imp__sub_8371160C"))) PPC_WEAK_FUNC(sub_8371160C);
PPC_FUNC_IMPL(__imp__sub_8371160C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83711610"))) PPC_WEAK_FUNC(sub_83711610);
PPC_FUNC_IMPL(__imp__sub_83711610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83711618;
	__savegprlr_27(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,134
	ctx.r11.s64 = 134;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x83711658
	if (!cr6.lt) goto loc_83711658;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83711658;
	sub_82E745E0(ctx, base);
loc_83711658:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-21664
	ctx.r27.s64 = ctx.r11.s64 + -21664;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x837116A0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837116AC;
	sub_82E74C08(ctx, base);
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x837116c0
	if (cr6.lt) goto loc_837116C0;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x837116C0;
	sub_82416268(ctx, base);
loc_837116C0:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// blt cr6,0x837116e0
	if (cr6.lt) goto loc_837116E0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837116E0:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
loc_837116F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837116f0
	if (!cr6.eq) goto loc_837116F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83711714;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83711720;
	sub_82E74C08(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83711734
	if (cr6.lt) goto loc_83711734;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x83711734;
	sub_82416268(ctx, base);
loc_83711734:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8371175C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83711768;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8371177c
	if (cr6.lt) goto loc_8371177C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8371177C;
	sub_82416268(ctx, base);
loc_8371177C:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x83711794;
	sub_82E746C0(ctx, base);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82472fc0
	ctx.lr = 0x837117B0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837117BC;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837117d0
	if (cr6.lt) goto loc_837117D0;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x837117D0;
	sub_82416268(ctx, base);
loc_837117D0:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x837117f0
	if (cr6.lt) goto loc_837117F0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837117F0:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_83711800:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83711800
	if (!cr6.eq) goto loc_83711800;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83711824;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83711830;
	sub_82E74C08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83711844
	if (cr6.lt) goto loc_83711844;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83711844;
	sub_82416268(ctx, base);
loc_83711844:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8371186C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83711878;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8371188c
	if (cr6.lt) goto loc_8371188C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8371188C;
	sub_82416268(ctx, base);
loc_8371188C:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x837118ac
	if (cr6.lt) goto loc_837118AC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837118AC:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_837118BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837118bc
	if (!cr6.eq) goto loc_837118BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x837118E0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837118EC;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83711900
	if (cr6.lt) goto loc_83711900;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83711900;
	sub_82416268(ctx, base);
loc_83711900:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83711928;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83711934;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83711948
	if (cr6.lt) goto loc_83711948;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83711948;
	sub_82416268(ctx, base);
loc_83711948:
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// addi r4,r28,172
	ctx.r4.s64 = ctx.r28.s64 + 172;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x83711968
	if (cr6.lt) goto loc_83711968;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83711968:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_83711978:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83711978
	if (!cr6.eq) goto loc_83711978;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8371199C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837119A8;
	sub_82E74C08(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837119bc
	if (cr6.lt) goto loc_837119BC;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x837119BC;
	sub_82416268(ctx, base);
loc_837119BC:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x837119E4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837119F0;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83711a04
	if (cr6.lt) goto loc_83711A04;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x83711A04;
	sub_82416268(ctx, base);
loc_83711A04:
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// addi r4,r28,200
	ctx.r4.s64 = ctx.r28.s64 + 200;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// blt cr6,0x83711a24
	if (cr6.lt) goto loc_83711A24;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83711A24:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
loc_83711A34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83711a34
	if (!cr6.eq) goto loc_83711A34;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83711A58;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83711A64;
	sub_82E74C08(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83711a78
	if (cr6.lt) goto loc_83711A78;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x83711A78;
	sub_82416268(ctx, base);
loc_83711A78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711A84"))) PPC_WEAK_FUNC(sub_83711A84);
PPC_FUNC_IMPL(__imp__sub_83711A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83711A88"))) PPC_WEAK_FUNC(sub_83711A88);
PPC_FUNC_IMPL(__imp__sub_83711A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83711A90;
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
	ctx.lr = 0x83711AB8;
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
	// bge cr6,0x83711cfc
	if (!cr6.lt) goto loc_83711CFC;
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-21636
	ctx.r26.s64 = ctx.r11.s64 + -21636;
loc_83711AF0:
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
	ctx.lr = 0x83711B24;
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
	ctx.lr = 0x83711B3C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83711bd0
	if (!cr6.eq) goto loc_83711BD0;
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
	ctx.lr = 0x83711B74;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83711b88
	if (!cr6.lt) goto loc_83711B88;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_83711B88:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83711B8C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83711b8c
	if (!cr6.eq) goto loc_83711B8C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83711BB0;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83711bc4
	if (cr6.lt) goto loc_83711BC4;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x83711BC4;
	sub_82416268(ctx, base);
loc_83711BC4:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_83711BD0:
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
	ctx.lr = 0x83711BE8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83711c24
	if (!cr6.eq) goto loc_83711C24;
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
	// bne cr6,0x83711c1c
	if (!cr6.eq) goto loc_83711C1C;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83711c20
	goto loc_83711C20;
loc_83711C1C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83711C20:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_83711C24:
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
	ctx.lr = 0x83711C3C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83711cd0
	if (!cr6.eq) goto loc_83711CD0;
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
	ctx.lr = 0x83711C74;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83711c88
	if (!cr6.lt) goto loc_83711C88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_83711C88:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83711C8C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83711c8c
	if (!cr6.eq) goto loc_83711C8C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83711CB0;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83711cc4
	if (cr6.lt) goto loc_83711CC4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x83711CC4;
	sub_82416268(ctx, base);
loc_83711CC4:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_83711CD0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83711ce4
	if (cr6.lt) goto loc_83711CE4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x83711CE4;
	sub_82416268(ctx, base);
loc_83711CE4:
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
	// bne 0x83711af0
	if (!cr0.eq) goto loc_83711AF0;
loc_83711CFC:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83711d18
	if (cr6.eq) goto loc_83711D18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83711D10;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83711D18;
	sub_82416268(ctx, base);
loc_83711D18:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711D24"))) PPC_WEAK_FUNC(sub_83711D24);
PPC_FUNC_IMPL(__imp__sub_83711D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83711D28"))) PPC_WEAK_FUNC(sub_83711D28);
PPC_FUNC_IMPL(__imp__sub_83711D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83711D30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83711D3C;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-21792
	ctx.r29.s64 = ctx.r11.s64 + -21792;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x83711D54;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-21528
	ctx.r7.s64 = ctx.r10.s64 + -21528;
	// addi r5,r8,-21544
	ctx.r5.s64 = ctx.r8.s64 + -21544;
	// addi r6,r9,-21540
	ctx.r6.s64 = ctx.r9.s64 + -21540;
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
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83711D9C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83711DB8;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83711DD4;
	sub_824208C8(ctx, base);
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stb r30,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r30.u8);
	// addi r4,r29,72
	ctx.r4.s64 = ctx.r29.s64 + 72;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83711DF0;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711DFC"))) PPC_WEAK_FUNC(sub_83711DFC);
PPC_FUNC_IMPL(__imp__sub_83711DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83711E00"))) PPC_WEAK_FUNC(sub_83711E00);
PPC_FUNC_IMPL(__imp__sub_83711E00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83711ef0
	sub_83711EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711E08"))) PPC_WEAK_FUNC(sub_83711E08);
PPC_FUNC_IMPL(__imp__sub_83711E08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83711ef0
	sub_83711EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711E10"))) PPC_WEAK_FUNC(sub_83711E10);
PPC_FUNC_IMPL(__imp__sub_83711E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83711E18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-21528
	ctx.r8.s64 = ctx.r11.s64 + -21528;
	// addi r7,r10,-21540
	ctx.r7.s64 = ctx.r10.s64 + -21540;
	// addi r6,r9,-21544
	ctx.r6.s64 = ctx.r9.s64 + -21544;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,400
	ctx.r30.s64 = ctx.r3.s64 + 400;
	// lwz r5,420(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83711e5c
	if (cr6.lt) goto loc_83711E5C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83711E5C;
	sub_8386D088(ctx, base);
loc_83711E5C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r29,r28,372
	ctx.r29.s64 = ctx.r28.s64 + 372;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,392(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83711e88
	if (cr6.lt) goto loc_83711E88;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83711E88;
	sub_8386D088(ctx, base);
loc_83711E88:
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
	// blt cr6,0x83711eac
	if (cr6.lt) goto loc_83711EAC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83711EAC;
	sub_8386D088(ctx, base);
loc_83711EAC:
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
	// blt cr6,0x83711ed0
	if (cr6.lt) goto loc_83711ED0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83711ED0;
	sub_8386D088(ctx, base);
loc_83711ED0:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x83711EE4;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711EEC"))) PPC_WEAK_FUNC(sub_83711EEC);
PPC_FUNC_IMPL(__imp__sub_83711EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83711EF0"))) PPC_WEAK_FUNC(sub_83711EF0);
PPC_FUNC_IMPL(__imp__sub_83711EF0) {
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
	// bl 0x83711e10
	ctx.lr = 0x83711F10;
	sub_83711E10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83711f30
	if (cr6.eq) goto loc_83711F30;
	// bl 0x82595188
	ctx.lr = 0x83711F20;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83711F30;
	sub_825952B8(ctx, base);
loc_83711F30:
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

__attribute__((alias("__imp__sub_83711F4C"))) PPC_WEAK_FUNC(sub_83711F4C);
PPC_FUNC_IMPL(__imp__sub_83711F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83711F50"))) PPC_WEAK_FUNC(sub_83711F50);
PPC_FUNC_IMPL(__imp__sub_83711F50) {
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
	ctx.lr = 0x83711F68;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-21792
	ctx.r4.s64 = ctx.r11.s64 + -21792;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x824208c8
	ctx.lr = 0x83711F7C;
	sub_824208C8(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r3,r7,-21480
	ctx.r3.s64 = ctx.r7.s64 + -21480;
	// addi r6,r10,-21496
	ctx.r6.s64 = ctx.r10.s64 + -21496;
	// addi r5,r9,-21508
	ctx.r5.s64 = ctx.r9.s64 + -21508;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-21512
	ctx.r4.s64 = ctx.r8.s64 + -21512;
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

__attribute__((alias("__imp__sub_83711FC4"))) PPC_WEAK_FUNC(sub_83711FC4);
PPC_FUNC_IMPL(__imp__sub_83711FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83711FC8"))) PPC_WEAK_FUNC(sub_83711FC8);
PPC_FUNC_IMPL(__imp__sub_83711FC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83711fe0
	sub_83711FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711FD0"))) PPC_WEAK_FUNC(sub_83711FD0);
PPC_FUNC_IMPL(__imp__sub_83711FD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83711fe0
	sub_83711FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711FD8"))) PPC_WEAK_FUNC(sub_83711FD8);
PPC_FUNC_IMPL(__imp__sub_83711FD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83711fe0
	sub_83711FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83711FE0"))) PPC_WEAK_FUNC(sub_83711FE0);
PPC_FUNC_IMPL(__imp__sub_83711FE0) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-21496
	ctx.r7.s64 = ctx.r11.s64 + -21496;
	// addi r6,r10,-21508
	ctx.r6.s64 = ctx.r10.s64 + -21508;
	// addi r5,r9,-21512
	ctx.r5.s64 = ctx.r9.s64 + -21512;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-21480
	ctx.r4.s64 = ctx.r8.s64 + -21480;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x83712030;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83712050
	if (cr6.eq) goto loc_83712050;
	// bl 0x82595188
	ctx.lr = 0x83712040;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83712050;
	sub_825952B8(ctx, base);
loc_83712050:
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

__attribute__((alias("__imp__sub_8371206C"))) PPC_WEAK_FUNC(sub_8371206C);
PPC_FUNC_IMPL(__imp__sub_8371206C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83712070"))) PPC_WEAK_FUNC(sub_83712070);
PPC_FUNC_IMPL(__imp__sub_83712070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83712078;
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
	// bge cr6,0x837120b8
	if (!cr6.lt) goto loc_837120B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e745e0
	ctx.lr = 0x837120B8;
	sub_82E745E0(ctx, base);
loc_837120B8:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-21324
	ctx.r27.s64 = ctx.r11.s64 + -21324;
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
	ctx.lr = 0x83712100;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8371210C;
	sub_82E74C08(ctx, base);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83712120
	if (cr6.lt) goto loc_83712120;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83712120;
	sub_82416268(ctx, base);
loc_83712120:
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
	// blt cr6,0x83712140
	if (cr6.lt) goto loc_83712140;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83712140:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83712150:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83712150
	if (!cr6.eq) goto loc_83712150;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83712174;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83712180;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83712194
	if (cr6.lt) goto loc_83712194;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83712194;
	sub_82416268(ctx, base);
loc_83712194:
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
	ctx.lr = 0x837121BC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837121C8;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837121dc
	if (cr6.lt) goto loc_837121DC;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x837121DC;
	sub_82416268(ctx, base);
loc_837121DC:
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
	ctx.lr = 0x837121F4;
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
	ctx.lr = 0x83712210;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8371221C;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83712230
	if (cr6.lt) goto loc_83712230;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83712230;
	sub_82416268(ctx, base);
loc_83712230:
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
	// blt cr6,0x83712250
	if (cr6.lt) goto loc_83712250;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83712250:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_83712260:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83712260
	if (!cr6.eq) goto loc_83712260;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83712284;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83712290;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837122a4
	if (cr6.lt) goto loc_837122A4;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x837122A4;
	sub_82416268(ctx, base);
loc_837122A4:
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
	ctx.lr = 0x837122CC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837122D8;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837122ec
	if (cr6.lt) goto loc_837122EC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x837122EC;
	sub_82416268(ctx, base);
loc_837122EC:
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
	// blt cr6,0x8371230c
	if (cr6.lt) goto loc_8371230C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8371230C:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_8371231C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8371231c
	if (!cr6.eq) goto loc_8371231C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83712340;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8371234C;
	sub_82E74C08(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83712360
	if (cr6.lt) goto loc_83712360;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83712360;
	sub_82416268(ctx, base);
loc_83712360:
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
	ctx.lr = 0x83712388;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83712394;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837123a8
	if (cr6.lt) goto loc_837123A8;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x837123A8;
	sub_82416268(ctx, base);
loc_837123A8:
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
	ctx.lr = 0x837123C0;
	sub_82E746C0(ctx, base);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82472fc0
	ctx.lr = 0x837123DC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x837123E8;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837123fc
	if (cr6.lt) goto loc_837123FC;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x837123FC;
	sub_82416268(ctx, base);
loc_837123FC:
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
	// blt cr6,0x8371241c
	if (cr6.lt) goto loc_8371241C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8371241C:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
loc_8371242C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8371242c
	if (!cr6.eq) goto loc_8371242C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83712450;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8371245C;
	sub_82E74C08(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83712470
	if (cr6.lt) goto loc_83712470;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x83712470;
	sub_82416268(ctx, base);
loc_83712470:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8371247C"))) PPC_WEAK_FUNC(sub_8371247C);
PPC_FUNC_IMPL(__imp__sub_8371247C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83712480"))) PPC_WEAK_FUNC(sub_83712480);
PPC_FUNC_IMPL(__imp__sub_83712480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83712488;
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
	ctx.lr = 0x837124B0;
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
	// bge cr6,0x837126f4
	if (!cr6.lt) goto loc_837126F4;
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r11,-21300
	ctx.r26.s64 = ctx.r11.s64 + -21300;
loc_837124E8:
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
	ctx.lr = 0x8371251C;
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
	ctx.lr = 0x83712534;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837125c8
	if (!cr6.eq) goto loc_837125C8;
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
	ctx.lr = 0x8371256C;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83712580
	if (!cr6.lt) goto loc_83712580;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_83712580:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83712584:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83712584
	if (!cr6.eq) goto loc_83712584;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x837125A8;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837125bc
	if (cr6.lt) goto loc_837125BC;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x837125BC;
	sub_82416268(ctx, base);
loc_837125BC:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_837125C8:
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
	ctx.lr = 0x837125E0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8371261c
	if (!cr6.eq) goto loc_8371261C;
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
	// bne cr6,0x83712614
	if (!cr6.eq) goto loc_83712614;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83712618
	goto loc_83712618;
loc_83712614:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83712618:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_8371261C:
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
	ctx.lr = 0x83712634;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837126c8
	if (!cr6.eq) goto loc_837126C8;
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
	ctx.lr = 0x8371266C;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83712680
	if (!cr6.lt) goto loc_83712680;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_83712680:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83712684:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83712684
	if (!cr6.eq) goto loc_83712684;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x837126A8;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837126bc
	if (cr6.lt) goto loc_837126BC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x837126BC;
	sub_82416268(ctx, base);
loc_837126BC:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_837126C8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837126dc
	if (cr6.lt) goto loc_837126DC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x837126DC;
	sub_82416268(ctx, base);
loc_837126DC:
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
	// bne 0x837124e8
	if (!cr0.eq) goto loc_837124E8;
loc_837126F4:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83712710
	if (cr6.eq) goto loc_83712710;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83712708;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83712710;
	sub_82416268(ctx, base);
loc_83712710:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8371271C"))) PPC_WEAK_FUNC(sub_8371271C);
PPC_FUNC_IMPL(__imp__sub_8371271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83712720"))) PPC_WEAK_FUNC(sub_83712720);
PPC_FUNC_IMPL(__imp__sub_83712720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83712728;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83712734;
	sub_82D95768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-21424
	ctx.r29.s64 = ctx.r11.s64 + -21424;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8371274C;
	sub_824208C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r10,-21192
	ctx.r7.s64 = ctx.r10.s64 + -21192;
	// addi r5,r8,-21208
	ctx.r5.s64 = ctx.r8.s64 + -21208;
	// addi r6,r9,-21204
	ctx.r6.s64 = ctx.r9.s64 + -21204;
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
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83712794;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837127B0;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x837127D0;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837127DC"))) PPC_WEAK_FUNC(sub_837127DC);
PPC_FUNC_IMPL(__imp__sub_837127DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837127E0"))) PPC_WEAK_FUNC(sub_837127E0);
PPC_FUNC_IMPL(__imp__sub_837127E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x837128a8
	sub_837128A8(ctx, base);
	return;
}

