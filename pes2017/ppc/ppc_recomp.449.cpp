#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83814984"))) PPC_WEAK_FUNC(sub_83814984);
PPC_FUNC_IMPL(__imp__sub_83814984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83814988"))) PPC_WEAK_FUNC(sub_83814988);
PPC_FUNC_IMPL(__imp__sub_83814988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83814990;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,116(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x838149e0
	if (cr6.eq) goto loc_838149E0;
loc_838149B0:
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r10,44
	ctx.r6.s64 = ctx.r10.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83814088
	ctx.lr = 0x838149C8;
	sub_83814088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d48938
	ctx.lr = 0x838149D0;
	sub_82D48938(ctx, base);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x838149b0
	if (!cr6.eq) goto loc_838149B0;
loc_838149E0:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83814908
	ctx.lr = 0x838149F0;
	sub_83814908(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x83814a34
	if (cr6.eq) goto loc_83814A34;
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// addi r28,r31,112
	ctx.r28.s64 = ctx.r31.s64 + 112;
loc_83814A08:
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83814670
	ctx.lr = 0x83814A14;
	sub_83814670(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d4a7a8
	ctx.lr = 0x83814A24;
	sub_82D4A7A8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83814a08
	if (!cr6.eq) goto loc_83814A08;
loc_83814A34:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x83814a78
	if (cr6.eq) goto loc_83814A78;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// addi r28,r31,96
	ctx.r28.s64 = ctx.r31.s64 + 96;
loc_83814A4C:
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83813f20
	ctx.lr = 0x83814A58;
	sub_83813F20(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d49ed0
	ctx.lr = 0x83814A68;
	sub_82D49ED0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83814a4c
	if (!cr6.eq) goto loc_83814A4C;
loc_83814A78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83814A84"))) PPC_WEAK_FUNC(sub_83814A84);
PPC_FUNC_IMPL(__imp__sub_83814A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83814A88"))) PPC_WEAK_FUNC(sub_83814A88);
PPC_FUNC_IMPL(__imp__sub_83814A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83814A90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x83814b04
	if (cr6.eq) goto loc_83814B04;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_83814AAC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x83814AC0;
	sub_8259CB28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r9.u32);
	// bl 0x83813d38
	ctx.lr = 0x83814AE4;
	sub_83813D38(ctx, base);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x83814410
	ctx.lr = 0x83814AF0;
	sub_83814410(ctx, base);
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// addi r30,r30,76
	ctx.r30.s64 = ctx.r30.s64 + 76;
	// addi r8,r31,-32
	ctx.r8.s64 = ctx.r31.s64 + -32;
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bne cr6,0x83814aac
	if (!cr6.eq) goto loc_83814AAC;
loc_83814B04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83814B10"))) PPC_WEAK_FUNC(sub_83814B10);
PPC_FUNC_IMPL(__imp__sub_83814B10) {
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
	// bl 0x838137a0
	ctx.lr = 0x83814B30;
	sub_838137A0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// addi r10,r11,-4268
	ctx.r10.s64 = ctx.r11.s64 + -4268;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// bl 0x83813cb0
	ctx.lr = 0x83814B50;
	sub_83813CB0(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// bl 0x83814570
	ctx.lr = 0x83814B5C;
	sub_83814570(ctx, base);
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r8,22768
	ctx.r7.s64 = ctx.r8.s64 + 22768;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83814B84"))) PPC_WEAK_FUNC(sub_83814B84);
PPC_FUNC_IMPL(__imp__sub_83814B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83814B88"))) PPC_WEAK_FUNC(sub_83814B88);
PPC_FUNC_IMPL(__imp__sub_83814B88) {
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
	// addi r10,r11,22768
	ctx.r10.s64 = ctx.r11.s64 + 22768;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d49d20
	ctx.lr = 0x83814BB4;
	sub_82D49D20(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83814bd4
	if (cr6.eq) goto loc_83814BD4;
	// bl 0x82595188
	ctx.lr = 0x83814BC4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83814BD4;
	sub_825952B8(ctx, base);
loc_83814BD4:
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

__attribute__((alias("__imp__sub_83814BF0"))) PPC_WEAK_FUNC(sub_83814BF0);
PPC_FUNC_IMPL(__imp__sub_83814BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83814BF8;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x83814d4c
	if (cr6.eq) goto loc_83814D4C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lbz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lbz r18,80(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// addi r31,r5,24
	ctx.r31.s64 = ctx.r5.s64 + 24;
	// addi r30,r3,64
	ctx.r30.s64 = ctx.r3.s64 + 64;
	// li r22,15
	ctx.r22.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r24,40
	ctx.r24.s64 = 40;
	// li r20,60
	ctx.r20.s64 = 60;
	// addi r26,r11,31660
	ctx.r26.s64 = ctx.r11.s64 + 31660;
	// addi r25,r10,-4268
	ctx.r25.s64 = ctx.r10.s64 + -4268;
	// addi r21,r9,22768
	ctx.r21.s64 = ctx.r9.s64 + 22768;
loc_83814C48:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83814d34
	if (cr6.eq) goto loc_83814D34;
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r29.u8);
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// bl 0x8259cb28
	ctx.lr = 0x83814C74;
	sub_8259CB28(ctx, base);
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,-28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// lwz r9,-24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lwz r8,-16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r7,-20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r4,r6,r24
	ctx.r4.s32 = PPCDivide(ctx.r6.s32, ctx.r24.s32);
	// bl 0x838a5420
	ctx.lr = 0x83814CB8;
	sub_838A5420(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83814ce0
	if (cr6.eq) goto loc_83814CE0;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// lwz r3,-20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83813a48
	ctx.lr = 0x83814CDC;
	sub_83813A48(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_83814CE0:
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// addi r28,r31,36
	ctx.r28.s64 = ctx.r31.s64 + 36;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r4,r9,r20
	ctx.r4.s32 = PPCDivide(ctx.r9.s32, ctx.r20.s32);
	// bl 0x82dd9c78
	ctx.lr = 0x83814D08;
	sub_82DD9C78(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83814d30
	if (cr6.eq) goto loc_83814D30;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x838141c0
	ctx.lr = 0x83814D2C;
	sub_838141C0(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
loc_83814D30:
	// stw r21,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r21.u32);
loc_83814D34:
	// addi r30,r30,76
	ctx.r30.s64 = ctx.r30.s64 + 76;
	// addi r27,r27,76
	ctx.r27.s64 = ctx.r27.s64 + 76;
	// addi r11,r30,-64
	ctx.r11.s64 = ctx.r30.s64 + -64;
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// cmplw cr6,r11,r17
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, xer);
	// bne cr6,0x83814c48
	if (!cr6.eq) goto loc_83814C48;
loc_83814D4C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83814D58"))) PPC_WEAK_FUNC(sub_83814D58);
PPC_FUNC_IMPL(__imp__sub_83814D58) {
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
	// beq cr6,0x83814da4
	if (cr6.eq) goto loc_83814DA4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83814a88
	ctx.lr = 0x83814D8C;
	sub_83814A88(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838133a0
	ctx.lr = 0x83814DA0;
	sub_838133A0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83814DA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83814DBC"))) PPC_WEAK_FUNC(sub_83814DBC);
PPC_FUNC_IMPL(__imp__sub_83814DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83814DC0"))) PPC_WEAK_FUNC(sub_83814DC0);
PPC_FUNC_IMPL(__imp__sub_83814DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83814DC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x83814f10
	if (cr6.eq) goto loc_83814F10;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,76
	ctx.r29.s64 = 76;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r3,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r3.s64;
	// divw. r10,r11,r29
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83814e08
	if (!cr0.eq) goto loc_83814E08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83814d58
	ctx.lr = 0x83814DFC;
	sub_83814D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83814E08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// divw r9,r9,r29
	ctx.r9.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83814e6c
	if (cr6.gt) goto loc_83814E6C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x83814a88
	ctx.lr = 0x83814E30;
	sub_83814A88(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838133a0
	ctx.lr = 0x83814E40;
	sub_838133A0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// mulli r10,r7,76
	ctx.r10.s64 = ctx.r7.s64 * 76;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83814E6C:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bgt cr6,0x83814ea4
	if (cr6.gt) goto loc_83814EA4;
	// mulli r10,r9,76
	ctx.r10.s64 = ctx.r9.s64 * 76;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r29,r10,r3
	ctx.r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83814a88
	ctx.lr = 0x83814E98;
	sub_83814A88(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x83814efc
	goto loc_83814EFC;
loc_83814EA4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83814ed0
	if (cr6.eq) goto loc_83814ED0;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x838133a0
	ctx.lr = 0x83814EBC;
	sub_838133A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83814ED0;
	sub_825952B8(ctx, base);
loc_83814ED0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r4,r9,r29
	ctx.r4.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// bl 0x83813460
	ctx.lr = 0x83814EE8;
	sub_83813460(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83814f10
	if (cr6.eq) goto loc_83814F10;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_83814EFC:
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83814bf0
	ctx.lr = 0x83814F0C;
	sub_83814BF0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_83814F10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83814F1C"))) PPC_WEAK_FUNC(sub_83814F1C);
PPC_FUNC_IMPL(__imp__sub_83814F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83814F20"))) PPC_WEAK_FUNC(sub_83814F20);
PPC_FUNC_IMPL(__imp__sub_83814F20) {
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
	// beq cr6,0x83814f6c
	if (cr6.eq) goto loc_83814F6C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8381d740
	ctx.lr = 0x83814F54;
	sub_8381D740(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83813400
	ctx.lr = 0x83814F68;
	sub_83813400(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83814F6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83814F84"))) PPC_WEAK_FUNC(sub_83814F84);
PPC_FUNC_IMPL(__imp__sub_83814F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83814F88"))) PPC_WEAK_FUNC(sub_83814F88);
PPC_FUNC_IMPL(__imp__sub_83814F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83814F90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22760
	ctx.r9.s64 = ctx.r10.s64 + 22760;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x83815000
	if (cr6.eq) goto loc_83815000;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8381d740
	ctx.lr = 0x83814FE8;
	sub_8381D740(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83813400
	ctx.lr = 0x83814FFC;
	sub_83813400(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_83815000:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x83815034
	if (cr6.eq) goto loc_83815034;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83814a88
	ctx.lr = 0x8381501C;
	sub_83814A88(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x838133a0
	ctx.lr = 0x83815030;
	sub_838133A0(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_83815034:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815040"))) PPC_WEAK_FUNC(sub_83815040);
PPC_FUNC_IMPL(__imp__sub_83815040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83815048;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83814f88
	ctx.lr = 0x83815064;
	sub_83814F88(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8381be08
	ctx.lr = 0x83815070;
	sub_8381BE08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83814988
	ctx.lr = 0x83815080;
	sub_83814988(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83813820
	ctx.lr = 0x83815088;
	sub_83813820(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815094"))) PPC_WEAK_FUNC(sub_83815094);
PPC_FUNC_IMPL(__imp__sub_83815094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815098"))) PPC_WEAK_FUNC(sub_83815098);
PPC_FUNC_IMPL(__imp__sub_83815098) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838150ec
	if (cr6.eq) goto loc_838150EC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838150ec
	if (cr6.eq) goto loc_838150EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x83200a70
	ctx.lr = 0x838150D0;
	sub_83200A70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838150f0
	if (!cr6.eq) goto loc_838150F0;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x838150f0
	goto loc_838150F0;
loc_838150EC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_838150F0:
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

__attribute__((alias("__imp__sub_83815108"))) PPC_WEAK_FUNC(sub_83815108);
PPC_FUNC_IMPL(__imp__sub_83815108) {
	PPC_FUNC_PROLOGUE();
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
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x83200ca8
	ctx.lr = 0x83815128;
	sub_83200CA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83815138"))) PPC_WEAK_FUNC(sub_83815138);
PPC_FUNC_IMPL(__imp__sub_83815138) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x83200970
	sub_83200970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815140"))) PPC_WEAK_FUNC(sub_83815140);
PPC_FUNC_IMPL(__imp__sub_83815140) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x832008f8
	sub_832008F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815148"))) PPC_WEAK_FUNC(sub_83815148);
PPC_FUNC_IMPL(__imp__sub_83815148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f4,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83200d30
	sub_83200D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815160"))) PPC_WEAK_FUNC(sub_83815160);
PPC_FUNC_IMPL(__imp__sub_83815160) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x83200d30
	sub_83200D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815168"))) PPC_WEAK_FUNC(sub_83815168);
PPC_FUNC_IMPL(__imp__sub_83815168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f4,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83200da8
	sub_83200DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815180"))) PPC_WEAK_FUNC(sub_83815180);
PPC_FUNC_IMPL(__imp__sub_83815180) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x83200da8
	sub_83200DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815188"))) PPC_WEAK_FUNC(sub_83815188);
PPC_FUNC_IMPL(__imp__sub_83815188) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cdcf0
	ctx.lr = 0x838151BC;
	sub_831CDCF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x832011c8
	ctx.lr = 0x838151C8;
	sub_832011C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838151d8
	if (!cr6.eq) goto loc_838151D8;
	// lhz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_838151D8:
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

__attribute__((alias("__imp__sub_838151F0"))) PPC_WEAK_FUNC(sub_838151F0);
PPC_FUNC_IMPL(__imp__sub_838151F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x83200fb0
	sub_83200FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838151F8"))) PPC_WEAK_FUNC(sub_838151F8);
PPC_FUNC_IMPL(__imp__sub_838151F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x83200f40
	sub_83200F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815200"))) PPC_WEAK_FUNC(sub_83815200);
PPC_FUNC_IMPL(__imp__sub_83815200) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x83201028
	sub_83201028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815208"))) PPC_WEAK_FUNC(sub_83815208);
PPC_FUNC_IMPL(__imp__sub_83815208) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83815230
	if (!cr6.eq) goto loc_83815230;
loc_83815228:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83815288
	goto loc_83815288;
loc_83815230:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83815228
	if (cr6.eq) goto loc_83815228;
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,5
	ctx.r3.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ff6a0
	ctx.lr = 0x8381524C;
	sub_831FF6A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83815228
	if (cr6.lt) goto loc_83815228;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324ef28
	ctx.lr = 0x83815260;
	sub_8324EF28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ff6a0
	ctx.lr = 0x83815270;
	sub_831FF6A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83815228
	if (cr6.lt) goto loc_83815228;
	// bl 0x83819ad0
	ctx.lr = 0x8381527C;
	sub_83819AD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83819710
	ctx.lr = 0x83815288;
	sub_83819710(ctx, base);
loc_83815288:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838152A0"))) PPC_WEAK_FUNC(sub_838152A0);
PPC_FUNC_IMPL(__imp__sub_838152A0) {
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
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ff6a0
	ctx.lr = 0x838152C8;
	sub_831FF6A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x838152d8
	if (!cr6.lt) goto loc_838152D8;
loc_838152D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x838152fc
	goto loc_838152FC;
loc_838152D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x831ff6a0
	ctx.lr = 0x838152E4;
	sub_831FF6A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x838152d0
	if (cr6.lt) goto loc_838152D0;
	// bl 0x83819ad0
	ctx.lr = 0x838152F0;
	sub_83819AD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83819710
	ctx.lr = 0x838152FC;
	sub_83819710(ctx, base);
loc_838152FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83815314"))) PPC_WEAK_FUNC(sub_83815314);
PPC_FUNC_IMPL(__imp__sub_83815314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815318"))) PPC_WEAK_FUNC(sub_83815318);
PPC_FUNC_IMPL(__imp__sub_83815318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83815320;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8381533c
	if (!cr6.eq) goto loc_8381533C;
loc_83815330:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8381533C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83815330
	if (cr6.eq) goto loc_83815330;
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,5
	ctx.r3.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ff6a0
	ctx.lr = 0x83815358;
	sub_831FF6A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83815330
	if (cr6.lt) goto loc_83815330;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,23056
	ctx.r4.s64 = ctx.r11.s64 + 23056;
	// bl 0x8324ef28
	ctx.lr = 0x83815370;
	sub_8324EF28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ff6a0
	ctx.lr = 0x83815380;
	sub_831FF6A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83815330
	if (cr6.lt) goto loc_83815330;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324f198
	ctx.lr = 0x83815394;
	sub_8324F198(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ff6a0
	ctx.lr = 0x838153A4;
	sub_831FF6A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83815330
	if (cr6.lt) goto loc_83815330;
	// bl 0x83819ad0
	ctx.lr = 0x838153B0;
	sub_83819AD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83819710
	ctx.lr = 0x838153BC;
	sub_83819710(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838153C4"))) PPC_WEAK_FUNC(sub_838153C4);
PPC_FUNC_IMPL(__imp__sub_838153C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838153C8"))) PPC_WEAK_FUNC(sub_838153C8);
PPC_FUNC_IMPL(__imp__sub_838153C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838153D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r29,36(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x83815cb0
	ctx.lr = 0x838153E8;
	sub_83815CB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83295af0
	ctx.lr = 0x838153F0;
	sub_83295AF0(ctx, base);
	// bl 0x83294b98
	ctx.lr = 0x838153F4;
	sub_83294B98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83815408
	if (cr6.eq) goto loc_83815408;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83815408:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241c348
	ctx.lr = 0x83815410;
	sub_8241C348(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83249990
	ctx.lr = 0x83815420;
	sub_83249990(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815428"))) PPC_WEAK_FUNC(sub_83815428);
PPC_FUNC_IMPL(__imp__sub_83815428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83815430;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8381f210
	ctx.lr = 0x83815444;
	sub_8381F210(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8381f0b8
	ctx.lr = 0x8381544C;
	sub_8381F0B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83818558
	ctx.lr = 0x83815454;
	sub_83818558(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83818258
	ctx.lr = 0x83815460;
	sub_83818258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x838128c0
	ctx.lr = 0x83815470;
	sub_838128C0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83818560
	ctx.lr = 0x83815480;
	sub_83818560(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815488"))) PPC_WEAK_FUNC(sub_83815488);
PPC_FUNC_IMPL(__imp__sub_83815488) {
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
	// bl 0x83818558
	ctx.lr = 0x838154A0;
	sub_83818558(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83818640
	ctx.lr = 0x838154A8;
	sub_83818640(ctx, base);
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

__attribute__((alias("__imp__sub_838154BC"))) PPC_WEAK_FUNC(sub_838154BC);
PPC_FUNC_IMPL(__imp__sub_838154BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838154C0"))) PPC_WEAK_FUNC(sub_838154C0);
PPC_FUNC_IMPL(__imp__sub_838154C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838154C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8381f210
	ctx.lr = 0x838154DC;
	sub_8381F210(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8381f0b8
	ctx.lr = 0x838154E4;
	sub_8381F0B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8381bd20
	ctx.lr = 0x838154EC;
	sub_8381BD20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8381baa8
	ctx.lr = 0x838154F8;
	sub_8381BAA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x838128c0
	ctx.lr = 0x83815508;
	sub_838128C0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83818560
	ctx.lr = 0x83815518;
	sub_83818560(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815520"))) PPC_WEAK_FUNC(sub_83815520);
PPC_FUNC_IMPL(__imp__sub_83815520) {
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
	// bl 0x8381bd20
	ctx.lr = 0x83815538;
	sub_8381BD20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83818640
	ctx.lr = 0x83815540;
	sub_83818640(ctx, base);
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

__attribute__((alias("__imp__sub_83815554"))) PPC_WEAK_FUNC(sub_83815554);
PPC_FUNC_IMPL(__imp__sub_83815554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815558"))) PPC_WEAK_FUNC(sub_83815558);
PPC_FUNC_IMPL(__imp__sub_83815558) {
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
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83819ad0
	ctx.lr = 0x83815578;
	sub_83819AD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83819630
	ctx.lr = 0x83815580;
	sub_83819630(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83204bf8
	ctx.lr = 0x83815590;
	sub_83204BF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x838155a0
	if (!cr6.lt) goto loc_838155A0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x838155e0
	goto loc_838155E0;
loc_838155A0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838155dc
	if (cr6.eq) goto loc_838155DC;
	// li r11,26
	ctx.r11.s64 = 26;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x838155BC;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x838155D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x838155DC;
	sub_82595170(ctx, base);
loc_838155DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_838155E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838155F8"))) PPC_WEAK_FUNC(sub_838155F8);
PPC_FUNC_IMPL(__imp__sub_838155F8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x83815634
	if (!cr6.lt) goto loc_83815634;
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
loc_83815634:
	// stfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83200e20
	ctx.lr = 0x83815640;
	sub_83200E20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83815654
	if (cr6.lt) goto loc_83815654;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_83815654:
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

__attribute__((alias("__imp__sub_83815668"))) PPC_WEAK_FUNC(sub_83815668);
PPC_FUNC_IMPL(__imp__sub_83815668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83815670;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,23040
	ctx.r4.s64 = ctx.r11.s64 + 23040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83815208
	ctx.lr = 0x83815688;
	sub_83815208(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838156a0
	if (!cr6.eq) goto loc_838156A0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838156A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83812960
	ctx.lr = 0x838156AC;
	sub_83812960(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x838156c0
	if (cr6.lt) goto loc_838156C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
loc_838156C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83812c48
	ctx.lr = 0x838156C8;
	sub_83812C48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838156D4"))) PPC_WEAK_FUNC(sub_838156D4);
PPC_FUNC_IMPL(__imp__sub_838156D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838156D8"))) PPC_WEAK_FUNC(sub_838156D8);
PPC_FUNC_IMPL(__imp__sub_838156D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838156E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,23044
	ctx.r4.s64 = ctx.r11.s64 + 23044;
	// bl 0x83815208
	ctx.lr = 0x838156F4;
	sub_83815208(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8381570c
	if (!cr6.eq) goto loc_8381570C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8381570C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83812918
	ctx.lr = 0x83815714;
	sub_83812918(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83815728
	if (cr6.lt) goto loc_83815728;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
loc_83815728:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83812c48
	ctx.lr = 0x83815730;
	sub_83812C48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8381573C"))) PPC_WEAK_FUNC(sub_8381573C);
PPC_FUNC_IMPL(__imp__sub_8381573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815740"))) PPC_WEAK_FUNC(sub_83815740);
PPC_FUNC_IMPL(__imp__sub_83815740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83815748;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,23048
	ctx.r4.s64 = ctx.r11.s64 + 23048;
	// bl 0x83815208
	ctx.lr = 0x8381575C;
	sub_83815208(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83815774
	if (!cr6.eq) goto loc_83815774;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83815774:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838129a8
	ctx.lr = 0x8381577C;
	sub_838129A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83815790
	if (cr6.lt) goto loc_83815790;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
loc_83815790:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83812c48
	ctx.lr = 0x83815798;
	sub_83812C48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838157A4"))) PPC_WEAK_FUNC(sub_838157A4);
PPC_FUNC_IMPL(__imp__sub_838157A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838157A8"))) PPC_WEAK_FUNC(sub_838157A8);
PPC_FUNC_IMPL(__imp__sub_838157A8) {
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
	// clrlwi r30,r4,24
	ctx.r30.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838157d8
	if (cr6.eq) goto loc_838157D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// b 0x838157e0
	goto loc_838157E0;
loc_838157D8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
loc_838157E0:
	// stfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83200e20
	ctx.lr = 0x838157EC;
	sub_83200E20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83815844
	if (cr6.lt) goto loc_83815844;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_838157FC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83815814
	if (!cr6.eq) goto loc_83815814;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838156d8
	ctx.lr = 0x8381580C;
	sub_838156D8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8381584c
	if (cr6.eq) goto loc_8381584C;
loc_83815814:
	// subfic r11,r30,0
	xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
loc_8381582C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83815844:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x838157fc
	if (!cr6.eq) goto loc_838157FC;
loc_8381584C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8381582c
	goto loc_8381582C;
}

__attribute__((alias("__imp__sub_83815854"))) PPC_WEAK_FUNC(sub_83815854);
PPC_FUNC_IMPL(__imp__sub_83815854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815858"))) PPC_WEAK_FUNC(sub_83815858);
PPC_FUNC_IMPL(__imp__sub_83815858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83815860;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,23152
	ctx.r10.s64 = ctx.r11.s64 + 23152;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8381589c
	if (cr6.lt) goto loc_8381589C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8381589C;
	sub_825952B8(ctx, base);
loc_8381589C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838158d0
	if (cr6.eq) goto loc_838158D0;
	// bl 0x82595188
	ctx.lr = 0x838158C0;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x838158D0;
	sub_825952B8(ctx, base);
loc_838158D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838158DC"))) PPC_WEAK_FUNC(sub_838158DC);
PPC_FUNC_IMPL(__imp__sub_838158DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838158E0"))) PPC_WEAK_FUNC(sub_838158E0);
PPC_FUNC_IMPL(__imp__sub_838158E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838158E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,23152
	ctx.r9.s64 = ctx.r11.s64 + 23152;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_83815920:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83815920
	if (!cr6.eq) goto loc_83815920;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83815944;
	sub_8259CC28(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// bl 0x831ff6a0
	ctx.lr = 0x8381596C;
	sub_831FF6A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83815980
	if (cr6.lt) goto loc_83815980;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x831ff6a0
	ctx.lr = 0x83815980;
	sub_831FF6A0(ctx, base);
loc_83815980:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8381598C"))) PPC_WEAK_FUNC(sub_8381598C);
PPC_FUNC_IMPL(__imp__sub_8381598C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815990"))) PPC_WEAK_FUNC(sub_83815990);
PPC_FUNC_IMPL(__imp__sub_83815990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83815998;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83201028
	ctx.lr = 0x838159B4;
	sub_83201028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83200ea8
	ctx.lr = 0x838159C4;
	sub_83200EA8(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83200ea8
	ctx.lr = 0x838159D4;
	sub_83200EA8(ctx, base);
	// li r11,26
	ctx.r11.s64 = 26;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x838159EC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83815a10
	if (cr6.eq) goto loc_83815A10;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x838158e0
	ctx.lr = 0x83815A04;
	sub_838158E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83815a1c
	if (!cr6.eq) goto loc_83815A1C;
loc_83815A10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83815A1C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83200e20
	ctx.lr = 0x83815A28;
	sub_83200E20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83815a38
	if (cr6.lt) goto loc_83815A38;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_83815A38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815A44"))) PPC_WEAK_FUNC(sub_83815A44);
PPC_FUNC_IMPL(__imp__sub_83815A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815A48"))) PPC_WEAK_FUNC(sub_83815A48);
PPC_FUNC_IMPL(__imp__sub_83815A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83815A50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83815ad0
	if (cr6.eq) goto loc_83815AD0;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83815ad0
	if (cr6.eq) goto loc_83815AD0;
	// bl 0x83200290
	ctx.lr = 0x83815A70;
	sub_83200290(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ff6a0
	ctx.lr = 0x83815A80;
	sub_831FF6A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83815ad0
	if (cr6.lt) goto loc_83815AD0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204b10
	ctx.lr = 0x83815A9C;
	sub_83204B10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ff6a0
	ctx.lr = 0x83815AAC;
	sub_831FF6A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83815ad0
	if (cr6.lt) goto loc_83815AD0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83815990
	ctx.lr = 0x83815AC4;
	sub_83815990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83815adc
	if (!cr6.eq) goto loc_83815ADC;
loc_83815AD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83815ADC:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83200e20
	ctx.lr = 0x83815AE8;
	sub_83200E20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83815af8
	if (cr6.lt) goto loc_83815AF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_83815AF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815B04"))) PPC_WEAK_FUNC(sub_83815B04);
PPC_FUNC_IMPL(__imp__sub_83815B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815B08"))) PPC_WEAK_FUNC(sub_83815B08);
PPC_FUNC_IMPL(__imp__sub_83815B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r6,r11,23424
	ctx.r6.s64 = ctx.r11.s64 + 23424;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294c00
	sub_83294C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815B24"))) PPC_WEAK_FUNC(sub_83815B24);
PPC_FUNC_IMPL(__imp__sub_83815B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815B28"))) PPC_WEAK_FUNC(sub_83815B28);
PPC_FUNC_IMPL(__imp__sub_83815B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r6,r11,23428
	ctx.r6.s64 = ctx.r11.s64 + 23428;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294c00
	sub_83294C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815B44"))) PPC_WEAK_FUNC(sub_83815B44);
PPC_FUNC_IMPL(__imp__sub_83815B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815B48"))) PPC_WEAK_FUNC(sub_83815B48);
PPC_FUNC_IMPL(__imp__sub_83815B48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// addi r6,r10,23432
	ctx.r6.s64 = ctx.r10.s64 + 23432;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294c00
	sub_83294C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815B68"))) PPC_WEAK_FUNC(sub_83815B68);
PPC_FUNC_IMPL(__imp__sub_83815B68) {
	PPC_FUNC_PROLOGUE();
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
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// addi r6,r11,23436
	ctx.r6.s64 = ctx.r11.s64 + 23436;
	// li r5,14
	ctx.r5.s64 = 14;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83294c00
	ctx.lr = 0x83815B94;
	sub_83294C00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83815BA4"))) PPC_WEAK_FUNC(sub_83815BA4);
PPC_FUNC_IMPL(__imp__sub_83815BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815BA8"))) PPC_WEAK_FUNC(sub_83815BA8);
PPC_FUNC_IMPL(__imp__sub_83815BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r6,r11,23440
	ctx.r6.s64 = ctx.r11.s64 + 23440;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294c00
	sub_83294C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815BC4"))) PPC_WEAK_FUNC(sub_83815BC4);
PPC_FUNC_IMPL(__imp__sub_83815BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815BC8"))) PPC_WEAK_FUNC(sub_83815BC8);
PPC_FUNC_IMPL(__imp__sub_83815BC8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x83295030
	sub_83295030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815BD4"))) PPC_WEAK_FUNC(sub_83815BD4);
PPC_FUNC_IMPL(__imp__sub_83815BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815BD8"))) PPC_WEAK_FUNC(sub_83815BD8);
PPC_FUNC_IMPL(__imp__sub_83815BD8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x83295030
	sub_83295030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815BE8"))) PPC_WEAK_FUNC(sub_83815BE8);
PPC_FUNC_IMPL(__imp__sub_83815BE8) {
	PPC_FUNC_PROLOGUE();
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
	// stfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x83295030
	ctx.lr = 0x83815C08;
	sub_83295030(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83815C18"))) PPC_WEAK_FUNC(sub_83815C18);
PPC_FUNC_IMPL(__imp__sub_83815C18) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x83295030
	sub_83295030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815C24"))) PPC_WEAK_FUNC(sub_83815C24);
PPC_FUNC_IMPL(__imp__sub_83815C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815C28"))) PPC_WEAK_FUNC(sub_83815C28);
PPC_FUNC_IMPL(__imp__sub_83815C28) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83294dc0
	sub_83294DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815C30"))) PPC_WEAK_FUNC(sub_83815C30);
PPC_FUNC_IMPL(__imp__sub_83815C30) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83815c74
	if (cr6.eq) goto loc_83815C74;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r31,r11,23472
	ctx.r31.s64 = ctx.r11.s64 + 23472;
	// addi r5,r31,-4
	ctx.r5.s64 = ctx.r31.s64 + -4;
	// bl 0x83295250
	ctx.lr = 0x83815C68;
	sub_83295250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83815c7c
	if (!cr6.eq) goto loc_83815C7C;
loc_83815C74:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83815c94
	goto loc_83815C94;
loc_83815C7C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832953a0
	ctx.lr = 0x83815C94;
	sub_832953A0(ctx, base);
loc_83815C94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83815CAC"))) PPC_WEAK_FUNC(sub_83815CAC);
PPC_FUNC_IMPL(__imp__sub_83815CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815CB0"))) PPC_WEAK_FUNC(sub_83815CB0);
PPC_FUNC_IMPL(__imp__sub_83815CB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83815CB8"))) PPC_WEAK_FUNC(sub_83815CB8);
PPC_FUNC_IMPL(__imp__sub_83815CB8) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x83294958
	ctx.lr = 0x83815CD4;
	sub_83294958(ctx, base);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83815cf0
	if (cr6.eq) goto loc_83815CF0;
	// li r11,26
	ctx.r11.s64 = 26;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83815CF0;
	sub_825952B8(ctx, base);
loc_83815CF0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83815d10
	if (cr6.lt) goto loc_83815D10;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83815D10;
	sub_825952B8(ctx, base);
loc_83815D10:
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

__attribute__((alias("__imp__sub_83815D38"))) PPC_WEAK_FUNC(sub_83815D38);
PPC_FUNC_IMPL(__imp__sub_83815D38) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
loc_83815D68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83815d68
	if (!cr6.eq) goto loc_83815D68;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83815D8C;
	sub_8259CC28(ctx, base);
	// li r10,26
	ctx.r10.s64 = 26;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// li r4,1568
	ctx.r4.s64 = 1568;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82595718
	ctx.lr = 0x83815DB0;
	sub_82595718(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1568
	ctx.r5.s64 = 1568;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x832948b0
	ctx.lr = 0x83815DC4;
	sub_832948B0(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x83815ddc
	if (cr6.lt) goto loc_83815DDC;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83815de0
	goto loc_83815DE0;
loc_83815DDC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_83815DE0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294c00
	ctx.lr = 0x83815DEC;
	sub_83294C00(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83815E0C"))) PPC_WEAK_FUNC(sub_83815E0C);
PPC_FUNC_IMPL(__imp__sub_83815E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815E10"))) PPC_WEAK_FUNC(sub_83815E10);
PPC_FUNC_IMPL(__imp__sub_83815E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83815E18;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83815E34;
	sub_82596FE8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83815e50
	if (!cr6.eq) goto loc_83815E50;
loc_83815E3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83815E40:
	// bl 0x82597088
	ctx.lr = 0x83815E44;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83815E50:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83815e3c
	if (cr6.eq) goto loc_83815E3C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83815e3c
	if (cr6.eq) goto loc_83815E3C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83815e3c
	if (cr6.eq) goto loc_83815E3C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83815E7C;
	sub_837B0C10(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837e78b8
	ctx.lr = 0x83815E8C;
	sub_837E78B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83815E94;
	sub_8387E8E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83815e40
	if (cr6.eq) goto loc_83815E40;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// bl 0x82597088
	ctx.lr = 0x83815ED0;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83815EDC"))) PPC_WEAK_FUNC(sub_83815EDC);
PPC_FUNC_IMPL(__imp__sub_83815EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83815EE0"))) PPC_WEAK_FUNC(sub_83815EE0);
PPC_FUNC_IMPL(__imp__sub_83815EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83815EE8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,45(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 45);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83815f10
	if (cr6.eq) goto loc_83815F10;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x83815F10;
	sub_831CC188(ctx, base);
loc_83815F10:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x837c05a0
	ctx.lr = 0x83815F1C;
	sub_837C05A0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x83815f38
	if (cr6.eq) goto loc_83815F38;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x83815f5c
	goto loc_83815F5C;
loc_83815F38:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83815f50
	if (cr6.eq) goto loc_83815F50;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x83815f5c
	goto loc_83815F5C;
loc_83815F50:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x83816048
	if (!cr6.eq) goto loc_83816048;
loc_83815F5C:
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83815f70
	if (!cr6.eq) goto loc_83815F70;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_83815F70:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x83815f88
	if (!cr6.eq) goto loc_83815F88;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x83815fa0
	goto loc_83815FA0;
loc_83815F88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x83815f9c
	if (!cr6.eq) goto loc_83815F9C;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x83815fa0
	goto loc_83815FA0;
loc_83815F9C:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_83815FA0:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x83815ff0
	if (!cr6.eq) goto loc_83815FF0;
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83815fc4
	if (cr6.eq) goto loc_83815FC4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x83815fec
	goto loc_83815FEC;
loc_83815FC4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83815fec
	if (!cr6.eq) goto loc_83815FEC;
loc_83815FD8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83815fd8
	if (cr6.eq) goto loc_83815FD8;
loc_83815FEC:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83815FF0:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x838160dc
	if (!cr6.eq) goto loc_838160DC;
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83816018
	if (cr6.eq) goto loc_83816018;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x838160dc
	goto loc_838160DC;
loc_83816018:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83816040
	if (!cr6.eq) goto loc_83816040;
loc_8381602C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8381602c
	if (cr6.eq) goto loc_8381602C;
loc_83816040:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x838160dc
	goto loc_838160DC;
loc_83816048:
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
	// bne cr6,0x83816068
	if (!cr6.eq) goto loc_83816068;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x83816090
	goto loc_83816090;
loc_83816068:
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8381607c
	if (!cr6.eq) goto loc_8381607C;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_8381607C:
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
loc_83816090:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x838160a8
	if (!cr6.eq) goto loc_838160A8;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x838160c4
	goto loc_838160C4;
loc_838160A8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x838160c0
	if (!cr6.eq) goto loc_838160C0;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x838160c4
	goto loc_838160C4;
loc_838160C0:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_838160C4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,44(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 44);
	// lbz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 44);
	// stb r9,44(r25)
	PPC_STORE_U8(ctx.r25.u32 + 44, ctx.r9.u8);
	// stb r10,44(r26)
	PPC_STORE_U8(ctx.r26.u32 + 44, ctx.r10.u8);
loc_838160DC:
	// lbz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83816274
	if (!cr6.eq) goto loc_83816274;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x83816270
	if (cr6.eq) goto loc_83816270;
loc_83816100:
	// lbz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83816270
	if (!cr6.eq) goto loc_83816270;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x838161b8
	if (!cr6.eq) goto loc_838161B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83816140
	if (!cr6.eq) goto loc_83816140;
	// stb r30,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835840a0
	ctx.lr = 0x8381613C;
	sub_835840A0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83816140:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8381620c
	if (!cr6.eq) goto loc_8381620C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8381616c
	if (!cr6.eq) goto loc_8381616C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x83816208
	if (cr6.eq) goto loc_83816208;
loc_8381616C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83816194
	if (!cr6.eq) goto loc_83816194;
	// stb r30,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83b63848
	ctx.lr = 0x83816190;
	sub_83B63848(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83816194:
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, ctx.r30.u8);
	// bl 0x835840a0
	ctx.lr = 0x838161B4;
	sub_835840A0(ctx, base);
	// b 0x83816270
	goto loc_83816270;
loc_838161B8:
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838161dc
	if (!cr6.eq) goto loc_838161DC;
	// stb r30,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83b63848
	ctx.lr = 0x838161D8;
	sub_83B63848(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_838161DC:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8381620c
	if (!cr6.eq) goto loc_8381620C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83816228
	if (!cr6.eq) goto loc_83816228;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83816228
	if (!cr6.eq) goto loc_83816228;
loc_83816208:
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
loc_8381620C:
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
	// bne cr6,0x83816100
	if (!cr6.eq) goto loc_83816100;
	// b 0x83816270
	goto loc_83816270;
loc_83816228:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83816250
	if (!cr6.eq) goto loc_83816250;
	// stb r30,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835840a0
	ctx.lr = 0x8381624C;
	sub_835840A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83816250:
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, ctx.r30.u8);
	// bl 0x83b63848
	ctx.lr = 0x83816270;
	sub_83B63848(ctx, base);
loc_83816270:
	// stb r30,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r30.u8);
loc_83816274:
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// addi r31,r26,12
	ctx.r31.s64 = ctx.r26.s64 + 12;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83816298
	if (cr6.lt) goto loc_83816298;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x83816298;
	sub_825952B8(ctx, base);
loc_83816298:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x838162B8;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838162cc
	if (cr6.eq) goto loc_838162CC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_838162CC:
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

__attribute__((alias("__imp__sub_838162DC"))) PPC_WEAK_FUNC(sub_838162DC);
PPC_FUNC_IMPL(__imp__sub_838162DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838162E0"))) PPC_WEAK_FUNC(sub_838162E0);
PPC_FUNC_IMPL(__imp__sub_838162E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x838162E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,45(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 45);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8381636c
	if (!cr6.eq) goto loc_8381636C;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83816310:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x838162e0
	ctx.lr = 0x8381631C;
	sub_838162E0(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// blt cr6,0x83816340
	if (cr6.lt) goto loc_83816340;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83816340;
	sub_825952B8(ctx, base);
loc_83816340:
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x8381635C;
	sub_825952B8(ctx, base);
	// lbz r11,45(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 45);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83816310
	if (cr6.eq) goto loc_83816310;
loc_8381636C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83816374"))) PPC_WEAK_FUNC(sub_83816374);
PPC_FUNC_IMPL(__imp__sub_83816374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83816378"))) PPC_WEAK_FUNC(sub_83816378);
PPC_FUNC_IMPL(__imp__sub_83816378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83816380;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83816398;
	sub_82596FE8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838163b4
	if (!cr6.eq) goto loc_838163B4;
loc_838163A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x838163A8;
	sub_82597088(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838163B4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838163a0
	if (cr6.eq) goto loc_838163A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x838163CC;
	sub_837B0C10(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837e78b8
	ctx.lr = 0x838163DC;
	sub_837E78B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x838163E4;
	sub_8387E8E0(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x8381644c
	if (cr6.eq) goto loc_8381644C;
	// lwz r31,40(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838163a0
	if (cr6.eq) goto loc_838163A0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bgt 0x8381644c
	if (cr0.gt) goto loc_8381644C;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-1952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83816428
	if (cr6.eq) goto loc_83816428;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8381f628
	ctx.lr = 0x83816428;
	sub_8381F628(ctx, base);
loc_83816428:
	// li r11,26
	ctx.r11.s64 = 26;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8381643C;
	sub_825952B8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83815ee0
	ctx.lr = 0x8381644C;
	sub_83815EE0(ctx, base);
loc_8381644C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x83816454;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83816460"))) PPC_WEAK_FUNC(sub_83816460);
PPC_FUNC_IMPL(__imp__sub_83816460) {
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
	// bl 0x838162e0
	ctx.lr = 0x83816480;
	sub_838162E0(ctx, base);
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

__attribute__((alias("__imp__sub_838164B4"))) PPC_WEAK_FUNC(sub_838164B4);
PPC_FUNC_IMPL(__imp__sub_838164B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838164B8"))) PPC_WEAK_FUNC(sub_838164B8);
PPC_FUNC_IMPL(__imp__sub_838164B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838164C0;
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
	// bne cr6,0x8381650c
	if (!cr6.eq) goto loc_8381650C;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x8381650c
	if (!cr6.eq) goto loc_8381650C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83816460
	ctx.lr = 0x838164F4;
	sub_83816460(ctx, base);
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
loc_8381650C:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x8381653c
	if (cr6.eq) goto loc_8381653C;
loc_83816514:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x837c05a0
	ctx.lr = 0x83816520;
	sub_837C05A0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83815ee0
	ctx.lr = 0x83816530;
	sub_83815EE0(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x83816514
	if (!cr6.eq) goto loc_83816514;
loc_8381653C:
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

__attribute__((alias("__imp__sub_8381654C"))) PPC_WEAK_FUNC(sub_8381654C);
PPC_FUNC_IMPL(__imp__sub_8381654C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83816550"))) PPC_WEAK_FUNC(sub_83816550);
PPC_FUNC_IMPL(__imp__sub_83816550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83816558;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce778
	ctx.lr = 0x83816560;
	__savefpr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83816594;
	sub_82596FE8(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x838165b8
	if (!cr6.eq) goto loc_838165B8;
loc_8381659C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x838165A4;
	sub_82597088(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7c4
	ctx.lr = 0x838165B4;
	__restfpr_28(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_838165B8:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381659c
	if (cr6.eq) goto loc_8381659C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x838165D0;
	sub_837B0C10(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837e78b8
	ctx.lr = 0x838165E0;
	sub_837E78B8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x838165E8;
	sub_8387E8E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8381660c
	if (cr6.eq) goto loc_8381660C;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x83816750
	goto loc_83816750;
loc_8381660C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8381659c
	if (cr6.eq) goto loc_8381659C;
	// clrlwi r25,r24,16
	ctx.r25.u64 = ctx.r24.u32 & 0xFFFF;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8381659c
	if (cr6.eq) goto loc_8381659C;
	// clrlwi r26,r23,16
	ctx.r26.u64 = ctx.r23.u32 & 0xFFFF;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8381659c
	if (cr6.eq) goto loc_8381659C;
	// li r11,26
	ctx.r11.s64 = 26;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x83816644;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833cb2e8
	ctx.lr = 0x83816654;
	sub_833CB2E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d28578
	ctx.lr = 0x83816660;
	sub_82D28578(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r3,-1952(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83816698
	if (cr6.eq) goto loc_83816698;
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83816694
	if (cr6.eq) goto loc_83816694;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8381f6a0
	ctx.lr = 0x83816684;
	sub_8381F6A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83816698
	if (cr6.eq) goto loc_83816698;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x83816698
	goto loc_83816698;
loc_83816694:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_83816698:
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// lbz r10,351(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// extsw r9,r25
	ctx.r9.s64 = ctx.r25.s32;
	// sth r24,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r24.u16);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,-10804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// sth r23,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r23.u16);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f4,f7,f29
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// fmuls f1,f7,f28
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// fmuls f5,f8,f30
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fctidz f0,f4
	ctx.f0.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// fctidz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// fctidz f2,f5
	ctx.f2.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f2,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f2.u64);
	// lhz r11,110(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lhz r10,110(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// fctidz f3,f6
	ctx.f3.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f3.u64);
	// lhz r6,102(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lhz r9,110(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// sth r6,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r6.u16);
	// sth r9,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r9.u16);
	// bl 0x82d5bec0
	ctx.lr = 0x83816750;
	sub_82D5BEC0(ctx, base);
loc_83816750:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x83816758;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7c4
	ctx.lr = 0x83816768;
	__restfpr_28(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8381676C"))) PPC_WEAK_FUNC(sub_8381676C);
PPC_FUNC_IMPL(__imp__sub_8381676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83816770"))) PPC_WEAK_FUNC(sub_83816770);
PPC_FUNC_IMPL(__imp__sub_83816770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83816778;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8381678C;
	sub_82596FE8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x83816800
	if (cr6.eq) goto loc_83816800;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// li r27,26
	ctx.r27.s64 = 26;
loc_838167A8:
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838167e8
	if (cr6.eq) goto loc_838167E8;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838167d8
	if (!cr6.eq) goto loc_838167D8;
	// lwz r4,-1952(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1952);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838167d8
	if (cr6.eq) goto loc_838167D8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8381f5a8
	ctx.lr = 0x838167D8;
	sub_8381F5A8(ctx, base);
loc_838167D8:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x838167E8;
	sub_825952B8(ctx, base);
loc_838167E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837c05a0
	ctx.lr = 0x838167F0;
	sub_837C05A0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x838167a8
	if (!cr6.eq) goto loc_838167A8;
loc_83816800:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x838162e0
	ctx.lr = 0x83816810;
	sub_838162E0(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bl 0x82597088
	ctx.lr = 0x83816838;
	sub_82597088(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596f90
	ctx.lr = 0x83816840;
	sub_82596F90(ctx, base);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x838164b8
	ctx.lr = 0x83816854;
	sub_838164B8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// bl 0x825952b8
	ctx.lr = 0x83816868;
	sub_825952B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83816870"))) PPC_WEAK_FUNC(sub_83816870);
PPC_FUNC_IMPL(__imp__sub_83816870) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838168c4
	if (cr6.eq) goto loc_838168C4;
	// li r11,26
	ctx.r11.s64 = 26;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x838168A0;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83816770
	ctx.lr = 0x838168A8;
	sub_83816770(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x838168AC;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x838168BC;
	sub_825952B8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x838168C4;
	sub_82595170(ctx, base);
loc_838168C4:
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

__attribute__((alias("__imp__sub_838168D8"))) PPC_WEAK_FUNC(sub_838168D8);
PPC_FUNC_IMPL(__imp__sub_838168D8) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x837dfc58
	ctx.lr = 0x838168FC;
	sub_837DFC58(ctx, base);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fa8
	ctx.lr = 0x83816908;
	sub_82596FA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83816910;
	sub_82596FE8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x838162e0
	ctx.lr = 0x83816920;
	sub_838162E0(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
	// bl 0x82597088
	ctx.lr = 0x83816948;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_83816964"))) PPC_WEAK_FUNC(sub_83816964);
PPC_FUNC_IMPL(__imp__sub_83816964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83816968"))) PPC_WEAK_FUNC(sub_83816968);
PPC_FUNC_IMPL(__imp__sub_83816968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83816970;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// lwz r3,-2340(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2340);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83816a10
	if (!cr6.eq) goto loc_83816A10;
	// li r29,26
	ctx.r29.s64 = 26;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8381699C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838169b0
	if (cr6.eq) goto loc_838169B0;
	// bl 0x838168d8
	ctx.lr = 0x838169A8;
	sub_838168D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x838169b4
	goto loc_838169B4;
loc_838169B0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_838169B4:
	// lwz r3,-2340(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2340);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838169d0
	if (!cr6.eq) goto loc_838169D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-2340(r30)
	PPC_STORE_U32(ctx.r30.u32 + -2340, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838169D0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83816a10
	if (cr6.eq) goto loc_83816A10;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595150
	ctx.lr = 0x838169E8;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83816770
	ctx.lr = 0x838169F0;
	sub_83816770(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x838169F4;
	sub_82595188(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x83816A04;
	sub_825952B8(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595170
	ctx.lr = 0x83816A0C;
	sub_82595170(ctx, base);
	// lwz r3,-2340(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2340);
loc_83816A10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83816A18"))) PPC_WEAK_FUNC(sub_83816A18);
PPC_FUNC_IMPL(__imp__sub_83816A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83816A20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1280
	ctx.r8.s64 = 1280;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// li r7,720
	ctx.r7.s64 = 720;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stb r30,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, ctx.r30.u8);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// bl 0x831fd348
	ctx.lr = 0x83816A8C;
	sub_831FD348(ctx, base);
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// bl 0x831fd348
	ctx.lr = 0x83816A94;
	sub_831FD348(ctx, base);
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// stb r30,209(r31)
	PPC_STORE_U8(ctx.r31.u32 + 209, ctx.r30.u8);
	// addi r11,r31,216
	ctx.r11.s64 = ctx.r31.s64 + 216;
	// stb r30,210(r31)
	PPC_STORE_U8(ctx.r31.u32 + 210, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,211(r31)
	PPC_STORE_U8(ctx.r31.u32 + 211, ctx.r30.u8);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83816AD4"))) PPC_WEAK_FUNC(sub_83816AD4);
PPC_FUNC_IMPL(__imp__sub_83816AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83816AD8"))) PPC_WEAK_FUNC(sub_83816AD8);
PPC_FUNC_IMPL(__imp__sub_83816AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r10,r11,-2304
	ctx.r10.s64 = ctx.r11.s64 + -2304;
	// lbz r3,211(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 211);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83816AE8"))) PPC_WEAK_FUNC(sub_83816AE8);
PPC_FUNC_IMPL(__imp__sub_83816AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83816AF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-2304
	ctx.r30.s64 = ctx.r11.s64 + -2304;
	// addi r31,r30,216
	ctx.r31.s64 = ctx.r30.s64 + 216;
	// stb r3,211(r30)
	PPC_STORE_U8(ctx.r30.u32 + 211, ctx.r3.u8);
loc_83816B08:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83816b1c
	if (cr6.eq) goto loc_83816B1C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb2f8
	ctx.lr = 0x83816B1C;
	sub_833CB2F8(ctx, base);
loc_83816B1C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r11,r30,232
	ctx.r11.s64 = ctx.r30.s64 + 232;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x83816b08
	if (cr6.lt) goto loc_83816B08;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83816B40"))) PPC_WEAK_FUNC(sub_83816B40);
PPC_FUNC_IMPL(__imp__sub_83816B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r10,r11,-2304
	ctx.r10.s64 = ctx.r11.s64 + -2304;
	// lwz r3,212(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83816B50"))) PPC_WEAK_FUNC(sub_83816B50);
PPC_FUNC_IMPL(__imp__sub_83816B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r10,r11,-2304
	ctx.r10.s64 = ctx.r11.s64 + -2304;
	// stw r3,212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 212, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83816B60"))) PPC_WEAK_FUNC(sub_83816B60);
PPC_FUNC_IMPL(__imp__sub_83816B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83816B68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83816968
	ctx.lr = 0x83816B78;
	sub_83816968(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8381f210
	ctx.lr = 0x83816B80;
	sub_8381F210(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-2304
	ctx.r3.s64 = ctx.r11.s64 + -2304;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8381fbd0
	ctx.lr = 0x83816B9C;
	sub_8381FBD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83816BA4"))) PPC_WEAK_FUNC(sub_83816BA4);
PPC_FUNC_IMPL(__imp__sub_83816BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83816BA8"))) PPC_WEAK_FUNC(sub_83816BA8);
PPC_FUNC_IMPL(__imp__sub_83816BA8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-2304
	ctx.r3.s64 = ctx.r11.s64 + -2304;
	// bl 0x83a7c9c0
	ctx.lr = 0x83816BC4;
	sub_83A7C9C0(ctx, base);
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

__attribute__((alias("__imp__sub_83816BD8"))) PPC_WEAK_FUNC(sub_83816BD8);
PPC_FUNC_IMPL(__imp__sub_83816BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-2304
	ctx.r3.s64 = ctx.r11.s64 + -2304;
	// b 0x8381fac8
	sub_8381FAC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83816BE8"))) PPC_WEAK_FUNC(sub_83816BE8);
PPC_FUNC_IMPL(__imp__sub_83816BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-2304
	ctx.r3.s64 = ctx.r11.s64 + -2304;
	// b 0x8381fae8
	sub_8381FAE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83816BF4"))) PPC_WEAK_FUNC(sub_83816BF4);
PPC_FUNC_IMPL(__imp__sub_83816BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83816BF8"))) PPC_WEAK_FUNC(sub_83816BF8);
PPC_FUNC_IMPL(__imp__sub_83816BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-2304
	ctx.r3.s64 = ctx.r11.s64 + -2304;
	// b 0x8381fba0
	sub_8381FBA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83816C04"))) PPC_WEAK_FUNC(sub_83816C04);
PPC_FUNC_IMPL(__imp__sub_83816C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83816C08"))) PPC_WEAK_FUNC(sub_83816C08);
PPC_FUNC_IMPL(__imp__sub_83816C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83816C10;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x833cb3a8
	ctx.lr = 0x83816C3C;
	sub_833CB3A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3a0
	ctx.lr = 0x83816C48;
	sub_833CB3A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x833cb3c0
	ctx.lr = 0x83816C54;
	sub_833CB3C0(ctx, base);
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// slw r5,r10,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x833cb3b0
	ctx.lr = 0x83816C70;
	sub_833CB3B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833cb3b8
	ctx.lr = 0x83816C84;
	sub_833CB3B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb348
	ctx.lr = 0x83816C90;
	sub_833CB348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3d8
	ctx.lr = 0x83816C9C;
	sub_833CB3D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb518
	ctx.lr = 0x83816CAC;
	sub_833CB518(ctx, base);
	// extsw r9,r29
	ctx.r9.s64 = ctx.r29.s32;
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
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
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// frsp f31,f12
	ctx.f31.f64 = double(float(ctx.f12.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x833cb570
	ctx.lr = 0x83816CE4;
	sub_833CB570(ctx, base);
	// add r7,r30,r27
	ctx.r7.u64 = ctx.r30.u64 + ctx.r27.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f30,f9
	ctx.f30.f64 = double(float(ctx.f9.f64));
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x833cb570
	ctx.lr = 0x83816D0C;
	sub_833CB570(ctx, base);
	// add r5,r29,r26
	ctx.r5.u64 = ctx.r29.u64 + ctx.r26.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f31,f7
	ctx.f31.f64 = double(float(ctx.f7.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x833cb570
	ctx.lr = 0x83816D34;
	sub_833CB570(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x833cb570
	ctx.lr = 0x83816D44;
	sub_833CB570(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d28578
	ctx.lr = 0x83816D4C;
	sub_82D28578(ctx, base);
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// addi r11,r3,-2304
	ctx.r11.s64 = ctx.r3.s64 + -2304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 192);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x83816d6c
	if (!cr6.eq) goto loc_83816D6C;
	// li r4,2
	ctx.r4.s64 = 2;
loc_83816D6C:
	// bl 0x833cb3d8
	ctx.lr = 0x83816D70;
	sub_833CB3D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb3c8
	ctx.lr = 0x83816D7C;
	sub_833CB3C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb3a8
	ctx.lr = 0x83816D88;
	sub_833CB3A8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb3a0
	ctx.lr = 0x83816D94;
	sub_833CB3A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83816DA4"))) PPC_WEAK_FUNC(sub_83816DA4);
PPC_FUNC_IMPL(__imp__sub_83816DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83816DA8"))) PPC_WEAK_FUNC(sub_83816DA8);
PPC_FUNC_IMPL(__imp__sub_83816DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83816DB0;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r22,r11,-2304
	ctx.r22.s64 = ctx.r11.s64 + -2304;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x825832e8
	ctx.lr = 0x83816DDC;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x83816DE4;
	sub_830FF290(ctx, base);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83816ecc
	if (cr6.eq) goto loc_83816ECC;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lfs f5,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// lfs f3,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r9,r28
	ctx.r9.s64 = ctx.r28.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fcfid f2,f11
	ctx.f2.f64 = double(ctx.f11.s64);
	// lfs f0,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfs f13,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f4,f10
	ctx.f4.f64 = double(ctx.f10.s64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fsubs f7,f11,f3
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// frsp f8,f2
	ctx.f8.f64 = double(float(ctx.f2.f64));
	// frsp f9,f4
	ctx.f9.f64 = double(float(ctx.f4.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsubs f10,f6,f5
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f5,f9,f1
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fctiwz f13,f3
	ctx.f13.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// fmuls f6,f10,f1
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fctiwz f0,f4
	ctx.f0.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// fctiwz f1,f5
	ctx.f1.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f2,f6
	ctx.f2.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// add r24,r9,r11
	ctx.r24.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r23,r11,r10
	ctx.r23.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83816ECC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb3c8
	ctx.lr = 0x83816ED8;
	sub_833CB3C8(ctx, base);
	// clrlwi r7,r25,16
	ctx.r7.u64 = ctx.r25.u32 & 0xFFFF;
	// clrlwi r6,r26,16
	ctx.r6.u64 = ctx.r26.u32 & 0xFFFF;
	// extsh r5,r23
	ctx.r5.s64 = ctx.r23.s16;
	// extsh r4,r24
	ctx.r4.s64 = ctx.r24.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb3d0
	ctx.lr = 0x83816EF0;
	sub_833CB3D0(ctx, base);
	// cmplwi cr6,r21,1
	cr6.compare<uint32_t>(ctx.r21.u32, 1, xer);
	// blt cr6,0x83816f88
	if (cr6.lt) goto loc_83816F88;
	// beq cr6,0x83816f34
	if (cr6.eq) goto loc_83816F34;
	// cmplwi cr6,r21,3
	cr6.compare<uint32_t>(ctx.r21.u32, 3, xer);
	// bge cr6,0x83816fec
	if (!cr6.lt) goto loc_83816FEC;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83816c08
	ctx.lr = 0x83816F20;
	sub_83816C08(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8381fa80
	ctx.lr = 0x83816F2C;
	sub_8381FA80(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83816F34:
	// lbz r11,208(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83816fec
	if (cr6.eq) goto loc_83816FEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb3a8
	ctx.lr = 0x83816F4C;
	sub_833CB3A8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb3a0
	ctx.lr = 0x83816F58;
	sub_833CB3A0(ctx, base);
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb3c0
	ctx.lr = 0x83816F64;
	sub_833CB3C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,255
	ctx.r6.s64 = 255;
	// slw r11,r11,r20
	ctx.r11.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r20.u8 & 0x3F));
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb3b0
	ctx.lr = 0x83816F80;
	sub_833CB3B0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x83816fdc
	goto loc_83816FDC;
loc_83816F88:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8381fa80
	ctx.lr = 0x83816F94;
	sub_8381FA80(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb3a8
	ctx.lr = 0x83816FA0;
	sub_833CB3A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb3a0
	ctx.lr = 0x83816FAC;
	sub_833CB3A0(ctx, base);
	// addi r11,r20,-1
	ctx.r11.s64 = ctx.r20.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// slw r30,r10,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x833cb3c0
	ctx.lr = 0x83816FC4;
	sub_833CB3C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb3b0
	ctx.lr = 0x83816FD8;
	sub_833CB3B0(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
loc_83816FDC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb3b8
	ctx.lr = 0x83816FEC;
	sub_833CB3B8(ctx, base);
loc_83816FEC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83816FF4"))) PPC_WEAK_FUNC(sub_83816FF4);
PPC_FUNC_IMPL(__imp__sub_83816FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83816FF8"))) PPC_WEAK_FUNC(sub_83816FF8);
PPC_FUNC_IMPL(__imp__sub_83816FF8) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r10,-2304
	ctx.r3.s64 = ctx.r10.s64 + -2304;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r31,7
	ctx.r31.s64 = 7;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// stb r9,210(r3)
	PPC_STORE_U8(ctx.r3.u32 + 210, ctx.r9.u8);
	// bgt cr6,0x838170c4
	if (cr6.gt) goto loc_838170C4;
	// lis r12,-31871
	ctx.r12.s64 = -2088697856;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28740
	ctx.r12.s64 = ctx.r12.s64 + 28740;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83817080;
	case 1:
		goto loc_838170C4;
	case 2:
		goto loc_838170C4;
	case 3:
		goto loc_83817088;
	case 4:
		goto loc_838170C4;
	case 5:
		goto loc_83817090;
	case 6:
		goto loc_83817098;
	case 7:
		goto loc_838170C4;
	case 8:
		goto loc_838170A0;
	case 9:
		goto loc_838170A8;
	case 10:
		goto loc_838170B0;
	case 11:
		goto loc_838170C4;
	case 12:
		goto loc_838170B8;
	case 13:
		goto loc_838170C4;
	case 14:
		goto loc_838170C4;
	default:
		return;
	}
	// lwz r28,28800(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28800);
	// lwz r28,28868(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28868);
	// lwz r28,28868(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28868);
	// lwz r28,28808(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28808);
	// lwz r28,28868(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28868);
	// lwz r28,28816(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28816);
	// lwz r28,28824(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28824);
	// lwz r28,28868(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28868);
	// lwz r28,28832(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28832);
	// lwz r28,28840(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28840);
	// lwz r28,28848(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28848);
	// lwz r28,28868(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28868);
	// lwz r28,28856(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28856);
	// lwz r28,28868(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28868);
	// lwz r28,28868(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28868);
loc_83817080:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x838170c8
	goto loc_838170C8;
loc_83817088:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x838170c8
	goto loc_838170C8;
loc_83817090:
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x838170c8
	goto loc_838170C8;
loc_83817098:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x838170c8
	goto loc_838170C8;
loc_838170A0:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x838170c8
	goto loc_838170C8;
loc_838170A8:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x838170c8
	goto loc_838170C8;
loc_838170B0:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x838170c8
	goto loc_838170C8;
loc_838170B8:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,210(r3)
	PPC_STORE_U8(ctx.r3.u32 + 210, ctx.r9.u8);
	// b 0x838170c8
	goto loc_838170C8;
loc_838170C4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_838170C8:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838170ec
	if (!cr6.eq) goto loc_838170EC;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838170ec
	if (cr6.eq) goto loc_838170EC;
	// bl 0x825832e8
	ctx.lr = 0x838170E4;
	sub_825832E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x833cb390
	ctx.lr = 0x838170EC;
	sub_833CB390(ctx, base);
loc_838170EC:
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

__attribute__((alias("__imp__sub_83817100"))) PPC_WEAK_FUNC(sub_83817100);
PPC_FUNC_IMPL(__imp__sub_83817100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce760
	ctx.lr = 0x83817110;
	__savefpr_22(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f28,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f28.f64 = double(temp.f32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,156(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_8381713C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8381713c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8381713C;
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f13,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lfs f7,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
loc_83817194:
	// lfs f27,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f26,f11,f27
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// lfs f25,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f24,f7,f27
	ctx.f24.f64 = double(float(ctx.f7.f64 * ctx.f27.f64));
	// lfs f23,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f22,f3,f27
	ctx.f22.f64 = double(float(ctx.f3.f64 * ctx.f27.f64));
	// lfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f27,f30,f27
	ctx.f27.f64 = double(float(ctx.f30.f64 * ctx.f27.f64));
	// fmadds f26,f10,f0,f26
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f26.f64));
	// fmadds f24,f6,f0,f24
	ctx.f24.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f24.f64));
	// fmadds f22,f2,f0,f22
	ctx.f22.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f22.f64));
	// fmadds f0,f29,f0,f27
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f27.f64));
	// fmadds f27,f13,f25,f26
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f25.f64 + ctx.f26.f64));
	// fmadds f26,f9,f25,f24
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f25.f64 + ctx.f24.f64));
	// fmadds f24,f5,f25,f22
	ctx.f24.f64 = double(float(ctx.f5.f64 * ctx.f25.f64 + ctx.f22.f64));
	// fmadds f0,f1,f25,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f25.f64 + ctx.f0.f64));
	// fmadds f27,f12,f23,f27
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f23.f64 + ctx.f27.f64));
	// stfs f27,4(r10)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f27,f8,f23,f26
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f23.f64 + ctx.f26.f64));
	// stfs f27,8(r10)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f27,f4,f23,f24
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f23.f64 + ctx.f24.f64));
	// stfs f27,12(r10)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f0,f31,f23,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f23.f64 + ctx.f0.f64));
	// stfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83817194
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83817194;
	// li r10,6
	ctx.r10.s64 = 6;
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83817218:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83817218
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83817218;
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32211
	ctx.r7.s64 = -2110980096;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f12,26152(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,24552(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24552);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,11412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11412);
	ctx.f11.f64 = double(temp.f32);
loc_83817248:
	// lfs f10,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f5,f7,f28
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// fmuls f4,f0,f28
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f3,f9,f28
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fmadds f2,f0,f13,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f1,f7,f12,f6
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f0,f10,f28,f4
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f4.f64));
	// fadds f8,f4,f5
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f7,f2,f5
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fadds f6,f1,f4
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fadds f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fadds f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f2,f7,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// stfs f2,4(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f1,f6,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// stfs f1,8(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fadds f0,f5,f9
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fadds f10,f4,f3
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfsu f10,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83817248
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83817248;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,24452
	ctx.r3.s64 = ctx.r11.s64 + 24452;
	// bl 0x83102db0
	ctx.lr = 0x838172C0;
	sub_83102DB0(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// addi r3,r10,-2304
	ctx.r3.s64 = ctx.r10.s64 + -2304;
	// bl 0x825832e8
	ctx.lr = 0x838172CC;
	sub_825832E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x833cb3e8
	ctx.lr = 0x838172D4;
	sub_833CB3E8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce7ac
	ctx.lr = 0x838172E0;
	__restfpr_22(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838172EC"))) PPC_WEAK_FUNC(sub_838172EC);
PPC_FUNC_IMPL(__imp__sub_838172EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838172F0"))) PPC_WEAK_FUNC(sub_838172F0);
PPC_FUNC_IMPL(__imp__sub_838172F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x838172F8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r7,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r8,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r8.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r9,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r9.u64);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// std r10,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r10.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// bgt cr6,0x83817364
	if (cr6.gt) goto loc_83817364;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83817348
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83817348;
	// bdzf 4*cr6+eq,0x83817348
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83817348;
	// bdzf 4*cr6+eq,0x83817350
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83817350;
	// bdzf 4*cr6+eq,0x83817358
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83817358;
	// bne cr6,0x83817360
	if (!cr6.eq) goto loc_83817360;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83817364
	goto loc_83817364;
loc_83817348:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83817364
	goto loc_83817364;
loc_83817350:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x83817364
	goto loc_83817364;
loc_83817358:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x83817364
	goto loc_83817364;
loc_83817360:
	// li r4,4
	ctx.r4.s64 = 4;
loc_83817364:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// bl 0x833cb518
	ctx.lr = 0x83817370;
	sub_833CB518(ctx, base);
	// lwz r22,264(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r21,256(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x838173c8
	if (!cr6.gt) goto loc_838173C8;
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_83817398:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// ble cr6,0x838173c4
	if (!cr6.gt) goto loc_838173C4;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x838173c4
	if (!cr6.eq) goto loc_838173C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// blt cr6,0x83817398
	if (cr6.lt) goto loc_83817398;
	// b 0x838173c8
	goto loc_838173C8;
loc_838173C4:
	// li r8,0
	ctx.r8.s64 = 0;
loc_838173C8:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r29,r11,-2304
	ctx.r29.s64 = ctx.r11.s64 + -2304;
	// beq cr6,0x838173ec
	if (cr6.eq) goto loc_838173EC;
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 240, ctx.r11.u32);
	// bne cr6,0x838174a8
	if (!cr6.eq) goto loc_838174A8;
loc_838173EC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x838174a8
	if (!cr6.gt) goto loc_838174A8;
	// rlwinm r26,r28,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,280(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r24,272(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r27,248(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r23,240(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
loc_83817408:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x83817428
	if (!cr6.gt) goto loc_83817428;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f2,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cb580
	ctx.lr = 0x83817428;
	sub_833CB580(ctx, base);
loc_83817428:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// ble cr6,0x83817450
	if (!cr6.gt) goto loc_83817450;
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwinm r5,r10,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// rlwinm r4,r10,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// bl 0x83779190
	ctx.lr = 0x83817450;
	sub_83779190(ctx, base);
loc_83817450:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// ble cr6,0x8381749c
	if (!cr6.gt) goto loc_8381749C;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,192(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 192);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x8381748c
	if (cr6.eq) goto loc_8381748C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// bl 0x831fcbb0
	ctx.lr = 0x8381748C;
	sub_831FCBB0(ctx, base);
loc_8381748C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cb570
	ctx.lr = 0x8381749C;
	sub_833CB570(ctx, base);
loc_8381749C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 + ctx.r26.u64;
	// bne 0x83817408
	if (!cr0.eq) goto loc_83817408;
loc_838174A8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d28578
	ctx.lr = 0x838174B0;
	sub_82D28578(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838174B8"))) PPC_WEAK_FUNC(sub_838174B8);
PPC_FUNC_IMPL(__imp__sub_838174B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838174C0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce740
	ctx.lr = 0x838174C8;
	__savefpr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stfs f5,356(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f24,f1
	ctx.f24.f64 = ctx.f1.f64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fmr f23,f2
	ctx.f23.f64 = ctx.f2.f64;
	// fmr f22,f3
	ctx.f22.f64 = ctx.f3.f64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// fmr f21,f4
	ctx.f21.f64 = ctx.f4.f64;
	// fmr f28,f5
	ctx.f28.f64 = ctx.f5.f64;
	// bl 0x833cb518
	ctx.lr = 0x838174F8;
	sub_833CB518(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// lfs f31,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// lfs f20,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f30,f28,f31,f31
	ctx.f30.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f31.f64));
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// stfs f20,80(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// blt cr6,0x838177bc
	if (cr6.lt) goto loc_838177BC;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,7944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7944);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x83817554
	goto loc_83817554;
loc_83817550:
	// lfs f28,356(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f28.f64 = double(temp.f32);
loc_83817554:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fmuls f27,f9,f13
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x831d1a10
	ctx.lr = 0x83817580;
	sub_831D1A10(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x831d1930
	ctx.lr = 0x8381758C;
	sub_831D1930(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// li r7,255
	ctx.r7.s64 = 255;
	// fmuls f7,f26,f28
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f28.f64));
	// li r6,255
	ctx.r6.s64 = 255;
	// fadds f6,f26,f20
	ctx.f6.f64 = double(float(ctx.f26.f64 + ctx.f20.f64));
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f5,f8,f28
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fadds f4,f8,f20
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f20.f64));
	// fadds f3,f7,f20
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f20.f64));
	// fmuls f28,f6,f31
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fadds f2,f5,f20
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f20.f64));
	// fmuls f27,f4,f31
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f26,f3,f31
	ctx.f26.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fmuls f25,f2,f31
	ctx.f25.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// bl 0x83779190
	ctx.lr = 0x838175D0;
	sub_83779190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f25
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f25.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x833cb580
	ctx.lr = 0x838175E0;
	sub_833CB580(ctx, base);
	// fmadds f19,f25,f21,f23
	ctx.fpscr.disableFlushMode();
	ctx.f19.f64 = double(float(ctx.f25.f64 * ctx.f21.f64 + ctx.f23.f64));
	// fmadds f18,f26,f22,f24
	ctx.f18.f64 = double(float(ctx.f26.f64 * ctx.f22.f64 + ctx.f24.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f19
	ctx.f2.f64 = ctx.f19.f64;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// bl 0x833cb570
	ctx.lr = 0x838175F8;
	sub_833CB570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x833cb580
	ctx.lr = 0x83817608;
	sub_833CB580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmadds f2,f21,f31,f23
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f21.f64 * ctx.f31.f64 + ctx.f23.f64));
	// fmadds f1,f22,f31,f24
	ctx.f1.f64 = double(float(ctx.f22.f64 * ctx.f31.f64 + ctx.f24.f64));
	// bl 0x833cb570
	ctx.lr = 0x83817618;
	sub_833CB570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x833cb580
	ctx.lr = 0x83817628;
	sub_833CB580(ctx, base);
	// fmadds f17,f29,f21,f23
	ctx.fpscr.disableFlushMode();
	ctx.f17.f64 = double(float(ctx.f29.f64 * ctx.f21.f64 + ctx.f23.f64));
	// fmadds f16,f30,f22,f24
	ctx.f16.f64 = double(float(ctx.f30.f64 * ctx.f22.f64 + ctx.f24.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f17
	ctx.f2.f64 = ctx.f17.f64;
	// fmr f1,f16
	ctx.f1.f64 = ctx.f16.f64;
	// bl 0x833cb570
	ctx.lr = 0x83817640;
	sub_833CB570(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83779190
	ctx.lr = 0x83817658;
	sub_83779190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x833cb580
	ctx.lr = 0x83817668;
	sub_833CB580(ctx, base);
	// fmadds f15,f27,f21,f23
	ctx.fpscr.disableFlushMode();
	ctx.f15.f64 = double(float(ctx.f27.f64 * ctx.f21.f64 + ctx.f23.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmadds f14,f28,f22,f24
	ctx.f14.f64 = double(float(ctx.f28.f64 * ctx.f22.f64 + ctx.f24.f64));
	// fmr f2,f15
	ctx.f2.f64 = ctx.f15.f64;
	// fmr f1,f14
	ctx.f1.f64 = ctx.f14.f64;
	// bl 0x833cb570
	ctx.lr = 0x83817680;
	sub_833CB570(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83779190
	ctx.lr = 0x83817698;
	sub_83779190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f25
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f25.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x833cb580
	ctx.lr = 0x838176A8;
	sub_833CB580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f19
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f19.f64;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// bl 0x833cb570
	ctx.lr = 0x838176B8;
	sub_833CB570(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83779190
	ctx.lr = 0x838176D0;
	sub_83779190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x833cb580
	ctx.lr = 0x838176E0;
	sub_833CB580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f17
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f17.f64;
	// fmr f1,f16
	ctx.f1.f64 = ctx.f16.f64;
	// bl 0x833cb570
	ctx.lr = 0x838176F0;
	sub_833CB570(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83779190
	ctx.lr = 0x83817708;
	sub_83779190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x833cb580
	ctx.lr = 0x83817718;
	sub_833CB580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f15
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f15.f64;
	// fmr f1,f14
	ctx.f1.f64 = ctx.f14.f64;
	// bl 0x833cb570
	ctx.lr = 0x83817728;
	sub_833CB570(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83779190
	ctx.lr = 0x83817740;
	sub_83779190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x833cb580
	ctx.lr = 0x83817750;
	sub_833CB580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f17
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f17.f64;
	// fmr f1,f16
	ctx.f1.f64 = ctx.f16.f64;
	// bl 0x833cb570
	ctx.lr = 0x83817760;
	sub_833CB570(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83779190
	ctx.lr = 0x83817778;
	sub_83779190(ctx, base);
	// lfs f29,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x833cb580
	ctx.lr = 0x83817790;
	sub_833CB580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmadds f2,f29,f21,f23
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f21.f64 + ctx.f23.f64));
	// fmadds f1,f30,f22,f24
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f22.f64 + ctx.f24.f64));
	// bl 0x833cb570
	ctx.lr = 0x838177A0;
	sub_833CB570(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
	// stfs f27,84(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// fmr f29,f25
	ctx.f29.f64 = ctx.f25.f64;
	// ble cr6,0x83817550
	if (!cr6.gt) goto loc_83817550;
loc_838177BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d28578
	ctx.lr = 0x838177C4;
	sub_82D28578(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce78c
	ctx.lr = 0x838177D0;
	__restfpr_14(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838177D4"))) PPC_WEAK_FUNC(sub_838177D4);
PPC_FUNC_IMPL(__imp__sub_838177D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838177D8"))) PPC_WEAK_FUNC(sub_838177D8);
PPC_FUNC_IMPL(__imp__sub_838177D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x83817800
	if (!cr6.eq) goto loc_83817800;
	// lfs f13,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beqlr cr6
	if (cr6.eq) return;
loc_83817800:
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// addi r3,r10,-2304
	ctx.r3.s64 = ctx.r10.s64 + -2304;
	// lbz r10,210(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 210);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// beq cr6,0x8381783c
	if (cr6.eq) goto loc_8381783C;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x83817838
	if (cr6.eq) goto loc_83817838;
	// b 0x83820510
	sub_83820510(ctx, base);
	return;
loc_83817838:
	// b 0x8381fcd0
	sub_8381FCD0(ctx, base);
	return;
loc_8381783C:
	// b 0x8381fc00
	sub_8381FC00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83817840"))) PPC_WEAK_FUNC(sub_83817840);
PPC_FUNC_IMPL(__imp__sub_83817840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83817844"))) PPC_WEAK_FUNC(sub_83817844);
PPC_FUNC_IMPL(__imp__sub_83817844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83817848"))) PPC_WEAK_FUNC(sub_83817848);
PPC_FUNC_IMPL(__imp__sub_83817848) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r8,-2304
	ctx.r11.s64 = ctx.r8.s64 + -2304;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// stb r10,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r10.u8);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r6,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r6.u64);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r5.u64);
	// ld r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// std r4,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r4.u64);
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83817880"))) PPC_WEAK_FUNC(sub_83817880);
PPC_FUNC_IMPL(__imp__sub_83817880) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r31,r11,-2304
	ctx.r31.s64 = ctx.r11.s64 + -2304;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838178A8:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x838178a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838178A8;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x83102db0
	ctx.lr = 0x838178BC;
	sub_83102DB0(ctx, base);
	// lbz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838178d0
	if (cr6.eq) goto loc_838178D0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x83102db0
	ctx.lr = 0x838178D0;
	sub_83102DB0(ctx, base);
loc_838178D0:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83102db0
	ctx.lr = 0x838178D8;
	sub_83102DB0(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x83817100
	ctx.lr = 0x838178E4;
	sub_83817100(ctx, base);
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

__attribute__((alias("__imp__sub_838178F8"))) PPC_WEAK_FUNC(sub_838178F8);
PPC_FUNC_IMPL(__imp__sub_838178F8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-2304
	ctx.r30.s64 = ctx.r11.s64 + -2304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x83817920;
	sub_825832E8(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,192(r30)
	PPC_STORE_U8(ctx.r30.u32 + 192, ctx.r11.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83817940
	if (cr6.eq) goto loc_83817940;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833cb3d8
	ctx.lr = 0x8381793C;
	sub_833CB3D8(ctx, base);
	// b 0x83817974
	goto loc_83817974;
loc_83817940:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x833cb3d8
	ctx.lr = 0x83817948;
	sub_833CB3D8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8381796c
	if (cr6.eq) goto loc_8381796C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// addi r10,r30,120
	ctx.r10.s64 = ctx.r30.s64 + 120;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83817960:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x83817960
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83817960;
loc_8381796C:
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x83102db0
	ctx.lr = 0x83817974;
	sub_83102DB0(ctx, base);
loc_83817974:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8381798C"))) PPC_WEAK_FUNC(sub_8381798C);
PPC_FUNC_IMPL(__imp__sub_8381798C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83817990"))) PPC_WEAK_FUNC(sub_83817990);
PPC_FUNC_IMPL(__imp__sub_83817990) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-2304
	ctx.r9.s64 = ctx.r10.s64 + -2304;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838179B8"))) PPC_WEAK_FUNC(sub_838179B8);
PPC_FUNC_IMPL(__imp__sub_838179B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838179C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,-2304
	ctx.r29.s64 = ctx.r11.s64 + -2304;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// bl 0x83815e10
	ctx.lr = 0x838179E4;
	sub_83815E10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838179f8
	if (cr6.eq) goto loc_838179F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838179F8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,232(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8381ee10
	ctx.lr = 0x83817A08;
	sub_8381EE10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83817A10"))) PPC_WEAK_FUNC(sub_83817A10);
PPC_FUNC_IMPL(__imp__sub_83817A10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83817a24
	if (!cr6.eq) goto loc_83817A24;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83817A24:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,-2304
	ctx.r10.s64 = ctx.r11.s64 + -2304;
	// lwz r3,232(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// b 0x8381ef08
	sub_8381EF08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83817A38"))) PPC_WEAK_FUNC(sub_83817A38);
PPC_FUNC_IMPL(__imp__sub_83817A38) {
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
	// rlwinm r11,r3,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x83817a70
	if (!cr6.eq) goto loc_83817A70;
loc_83817A58:
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
loc_83817A70:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x83817a58
	if (cr6.eq) goto loc_83817A58;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,-2304
	ctx.r10.s64 = ctx.r11.s64 + -2304;
	// lwz r3,232(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// bl 0x8381efe8
	ctx.lr = 0x83817A8C;
	sub_8381EFE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83817a58
	if (cr6.eq) goto loc_83817A58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lhz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83817b4c
	if (cr6.eq) goto loc_83817B4C;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lhz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x83817b4c
	if (!cr6.gt) goto loc_83817B4C;
loc_83817AE8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83817afc
	if (!cr6.lt) goto loc_83817AFC;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_83817AFC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83817b10
	if (!cr6.gt) goto loc_83817B10;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_83817B10:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83817b24
	if (!cr6.lt) goto loc_83817B24;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_83817B24:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83817b38
	if (!cr6.gt) goto loc_83817B38;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_83817B38:
	// lhz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x83817ae8
	if (cr6.lt) goto loc_83817AE8;
loc_83817B4C:
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

__attribute__((alias("__imp__sub_83817B64"))) PPC_WEAK_FUNC(sub_83817B64);
PPC_FUNC_IMPL(__imp__sub_83817B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83817B68"))) PPC_WEAK_FUNC(sub_83817B68);
PPC_FUNC_IMPL(__imp__sub_83817B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f31,f0,f1
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f31,f8
	cr6.compare(ctx.f31.f64, ctx.f8.f64);
	// bge cr6,0x83817ba0
	if (!cr6.lt) goto loc_83817BA0;
	// fcmpu cr6,f0,f3
	cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// bge cr6,0x83817bbc
	if (!cr6.lt) goto loc_83817BBC;
	// fcmpu cr6,f0,f5
	cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bge cr6,0x83817bbc
	if (!cr6.lt) goto loc_83817BBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83817bc0
	goto loc_83817BC0;
loc_83817BA0:
	// fcmpu cr6,f31,f8
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f8.f64);
	// ble cr6,0x83817bbc
	if (!cr6.gt) goto loc_83817BBC;
	// fcmpu cr6,f0,f3
	cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// ble cr6,0x83817bbc
	if (!cr6.gt) goto loc_83817BBC;
	// fcmpu cr6,f0,f5
	cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// bgt cr6,0x83817bc0
	if (cr6.gt) goto loc_83817BC0;
loc_83817BBC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83817BC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83817cac
	if (cr6.eq) goto loc_83817CAC;
	// fsubs f7,f13,f2
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fcmpu cr6,f7,f8
	cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bge cr6,0x83817bf0
	if (!cr6.lt) goto loc_83817BF0;
	// fcmpu cr6,f13,f4
	cr6.compare(ctx.f13.f64, ctx.f4.f64);
	// bge cr6,0x83817c0c
	if (!cr6.lt) goto loc_83817C0C;
	// fcmpu cr6,f13,f6
	cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// bge cr6,0x83817c0c
	if (!cr6.lt) goto loc_83817C0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83817c10
	goto loc_83817C10;
loc_83817BF0:
	// fcmpu cr6,f7,f8
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// ble cr6,0x83817c0c
	if (!cr6.gt) goto loc_83817C0C;
	// fcmpu cr6,f13,f4
	cr6.compare(ctx.f13.f64, ctx.f4.f64);
	// ble cr6,0x83817c0c
	if (!cr6.gt) goto loc_83817C0C;
	// fcmpu cr6,f13,f6
	cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// bgt cr6,0x83817c10
	if (cr6.gt) goto loc_83817C10;
loc_83817C0C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83817C10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83817cac
	if (cr6.eq) goto loc_83817CAC;
	// fsubs f10,f4,f2
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// fsubs f13,f5,f1
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// fsubs f9,f3,f1
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fsubs f12,f6,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// lfs f11,24556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24556);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmsubs f0,f12,f9,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x83817c54
	if (!cr6.gt) goto loc_83817C54;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lfs f11,5080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5080);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x83817cac
	if (cr6.lt) goto loc_83817CAC;
loc_83817C54:
	// fmuls f11,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmsubs f6,f13,f7,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 - ctx.f11.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fneg f13,f5
	ctx.f13.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f8
	cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// blt cr6,0x83817cac
	if (cr6.lt) goto loc_83817CAC;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x83817cac
	if (cr6.gt) goto loc_83817CAC;
	// fmuls f11,f10,f31
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmsubs f10,f9,f7,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f11.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f8
	cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// blt cr6,0x83817cac
	if (cr6.lt) goto loc_83817CAC;
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x83817cac
	if (cr6.gt) goto loc_83817CAC;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x83817cb0
	if (!cr6.gt) goto loc_83817CB0;
loc_83817CAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83817CB0:
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83817CB8"))) PPC_WEAK_FUNC(sub_83817CB8);
PPC_FUNC_IMPL(__imp__sub_83817CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83817CC0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-2304
	ctx.r10.s64 = ctx.r11.s64 + -2304;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,232(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// bl 0x8381efe8
	ctx.lr = 0x83817CE0;
	sub_8381EFE8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83817cf4
	if (!cr6.eq) goto loc_83817CF4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83817CF4:
	// lhz r24,28(r27)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r27.u32 + 28);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// ble cr6,0x83817db8
	if (!cr6.gt) goto loc_83817DB8;
	// lwz r29,48(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// li r25,3
	ctx.r25.s64 = 3;
loc_83817D0C:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x83817d9c
	if (!cr6.eq) goto loc_83817D9C;
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// divw. r28,r10,r25
	ctx.r28.s32 = PPCDivide(ctx.r10.s32, ctx.r25.s32);
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble 0x83817d9c
	if (!cr0.gt) goto loc_83817D9C;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,32(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
loc_83817D34:
	// add r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lhzx r10,r6,r5
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r8,r8,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// rotlwi r11,r3,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lfs f2,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f6,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x83817b68
	ctx.lr = 0x83817D7C;
	sub_83817B68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83817d9c
	if (!cr6.eq) goto loc_83817D9C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r6,r6,6
	ctx.r6.s64 = ctx.r6.s64 + 6;
	// cmpw cr6,r4,r28
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r28.s32, xer);
	// blt cr6,0x83817d34
	if (cr6.lt) goto loc_83817D34;
loc_83817D9C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83817db8
	if (!cr6.eq) goto loc_83817DB8;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpw cr6,r26,r24
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, xer);
	// blt cr6,0x83817d0c
	if (cr6.lt) goto loc_83817D0C;
loc_83817DB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83817DC4"))) PPC_WEAK_FUNC(sub_83817DC4);
PPC_FUNC_IMPL(__imp__sub_83817DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83817DC8"))) PPC_WEAK_FUNC(sub_83817DC8);
PPC_FUNC_IMPL(__imp__sub_83817DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r3,r11,1512
	ctx.r3.s64 = ctx.r11.s64 + 1512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83817DD4"))) PPC_WEAK_FUNC(sub_83817DD4);
PPC_FUNC_IMPL(__imp__sub_83817DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83817DD8"))) PPC_WEAK_FUNC(sub_83817DD8);
PPC_FUNC_IMPL(__imp__sub_83817DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83817DE0;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce778
	ctx.lr = 0x83817DE8;
	__savefpr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r31,r5,16
	ctx.r31.s64 = ctx.r5.s64 + 16;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r24,r5,32
	ctx.r24.s64 = ctx.r5.s64 + 32;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x83817e20
	if (!cr6.eq) goto loc_83817E20;
	// lfs f0,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8381805c
	if (cr6.eq) goto loc_8381805C;
loc_83817E20:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r23,r11,-2304
	ctx.r23.s64 = ctx.r11.s64 + -2304;
	// lbz r11,210(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 210);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8381805c
	if (!cr6.eq) goto loc_8381805C;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// ble cr6,0x8381805c
	if (!cr6.gt) goto loc_8381805C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83817e6c
	if (cr6.eq) goto loc_83817E6C;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
loc_83817E6C:
	// rlwinm r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83817e80
	if (cr6.eq) goto loc_83817E80;
	// li r10,2
	ctx.r10.s64 = 2;
loc_83817E80:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r22,4
	ctx.r22.s64 = 4;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83817eb0
	if (cr6.eq) goto loc_83817EB0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
loc_83817EB0:
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83817ee0
	if (cr6.eq) goto loc_83817EE0;
	// li r21,2
	ctx.r21.s64 = 2;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x83817ef4
	goto loc_83817EF4;
loc_83817EE0:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83817efc
	if (cr6.eq) goto loc_83817EFC;
	// li r21,3
	ctx.r21.s64 = 3;
	// li r10,3
	ctx.r10.s64 = 3;
loc_83817EF4:
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
loc_83817EFC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x825832e8
	ctx.lr = 0x83817F08;
	sub_825832E8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x833cb3e0
	ctx.lr = 0x83817F18;
	sub_833CB3E0(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lwz r11,-1952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83817f5c
	if (cr6.eq) goto loc_83817F5C;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83817f5c
	if (!cr6.gt) goto loc_83817F5C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8381f5a8
	ctx.lr = 0x83817F48;
	sub_8381F5A8(ctx, base);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x83817f5c
	if (!cr6.eq) goto loc_83817F5C;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
loc_83817F5C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833cb348
	ctx.lr = 0x83817F64;
	sub_833CB348(ctx, base);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x83817fb0
	if (cr6.eq) goto loc_83817FB0;
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r10,r25,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r8,r29,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x838172f0
	ctx.lr = 0x83817FA0;
	sub_838172F0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce7c4
	ctx.lr = 0x83817FAC;
	__restfpr_28(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83817FB0:
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// addi r31,r1,120
	ctx.r31.s64 = ctx.r1.s64 + 120;
	// li r29,2
	ctx.r29.s64 = 2;
loc_83817FCC:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// ble cr6,0x8381802c
	if (!cr6.gt) goto loc_8381802C;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r23,32
	ctx.r4.s64 = ctx.r23.s64 + 32;
	// mullw r11,r26,r30
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r30.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x831fcbb0
	ctx.lr = 0x83818008;
	sub_831FCBB0(ctx, base);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x8381801c
	if (!cr6.eq) goto loc_8381801C;
	// lfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f29.f64 = double(temp.f32);
	// b 0x8381802c
	goto loc_8381802C;
loc_8381801C:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f28,f0,f30
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fsubs f31,f13,f29
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
loc_8381802C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83817fcc
	if (!cr0.eq) goto loc_83817FCC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// li r8,64
	ctx.r8.s64 = 64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f5,-3692(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3692);
	ctx.f5.f64 = double(temp.f32);
	// bl 0x838174b8
	ctx.lr = 0x8381805C;
	sub_838174B8(ctx, base);
loc_8381805C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce7c4
	ctx.lr = 0x83818068;
	__restfpr_28(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8381806C"))) PPC_WEAK_FUNC(sub_8381806C);
PPC_FUNC_IMPL(__imp__sub_8381806C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818070"))) PPC_WEAK_FUNC(sub_83818070);
PPC_FUNC_IMPL(__imp__sub_83818070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838180cc
	if (!cr6.eq) goto loc_838180CC;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8381808C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x838180a0
	if (!cr6.lt) goto loc_838180A0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x838180c0
	goto loc_838180C0;
loc_838180A0:
	// lbz r8,21(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838180b8
	if (cr6.eq) goto loc_838180B8;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x838180b8
	if (!cr6.lt) goto loc_838180B8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_838180B8:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_838180C0:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8381808c
	if (cr6.eq) goto loc_8381808C;
loc_838180CC:
	// lbz r11,21(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838180e4
	if (cr6.eq) goto loc_838180E4;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x838180e8
	goto loc_838180E8;
loc_838180E4:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_838180E8:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83818120
	if (!cr6.eq) goto loc_83818120;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_838180F8:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x83818110
	if (!cr6.lt) goto loc_83818110;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83818114
	goto loc_83818114;
loc_83818110:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83818114:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838180f8
	if (cr6.eq) goto loc_838180F8;
loc_83818120:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8381812C"))) PPC_WEAK_FUNC(sub_8381812C);
PPC_FUNC_IMPL(__imp__sub_8381812C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818130"))) PPC_WEAK_FUNC(sub_83818130);
PPC_FUNC_IMPL(__imp__sub_83818130) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83818164;
	sub_82595718(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// beq 0x838181a0
	if (cr0.eq) goto loc_838181A0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_838181A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838181B8"))) PPC_WEAK_FUNC(sub_838181B8);
PPC_FUNC_IMPL(__imp__sub_838181B8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833ecc50
	ctx.lr = 0x838181EC;
	sub_833ECC50(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83818214
	if (!cr6.eq) goto loc_83818214;
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
loc_83818214:
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x833ecc50
	ctx.lr = 0x83818228;
	sub_833ECC50(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83818240
	if (cr6.eq) goto loc_83818240;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_83818240:
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

__attribute__((alias("__imp__sub_83818254"))) PPC_WEAK_FUNC(sub_83818254);
PPC_FUNC_IMPL(__imp__sub_83818254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818258"))) PPC_WEAK_FUNC(sub_83818258);
PPC_FUNC_IMPL(__imp__sub_83818258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83818260;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r29,r8,16
	ctx.r29.u64 = ctx.r8.u32 & 0xFFFF;
	// oris r27,r11,768
	ctx.r27.u64 = ctx.r11.u64 | 50331648;
	// sth r29,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r29.u16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// or r26,r10,r27
	ctx.r26.u64 = ctx.r10.u64 | ctx.r27.u64;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// bl 0x833ecc50
	ctx.lr = 0x838182A4;
	sub_833ECC50(ctx, base);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x83818318
	if (cr6.eq) goto loc_83818318;
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addic. r10,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r10.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83818318
	if (cr0.eq) goto loc_83818318;
loc_838182C8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833ecc50
	ctx.lr = 0x838182D8;
	sub_833ECC50(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83818318
	if (cr6.eq) goto loc_83818318;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// or r26,r11,r27
	ctx.r26.u64 = ctx.r11.u64 | ctx.r27.u64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// sth r11,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r11.u16);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x838182c8
	if (cr6.lt) goto loc_838182C8;
loc_83818318:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83818324"))) PPC_WEAK_FUNC(sub_83818324);
PPC_FUNC_IMPL(__imp__sub_83818324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818328"))) PPC_WEAK_FUNC(sub_83818328);
PPC_FUNC_IMPL(__imp__sub_83818328) {
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
	// li r11,26
	ctx.r11.s64 = 26;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8381834C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83818378
	if (cr6.eq) goto loc_83818378;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83818378:
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

__attribute__((alias("__imp__sub_8381838C"))) PPC_WEAK_FUNC(sub_8381838C);
PPC_FUNC_IMPL(__imp__sub_8381838C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818390"))) PPC_WEAK_FUNC(sub_83818390);
PPC_FUNC_IMPL(__imp__sub_83818390) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8381840c
	if (cr6.eq) goto loc_8381840C;
	// li r11,26
	ctx.r11.s64 = 26;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x838183C4;
	sub_82595150(ctx, base);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x838183e8
	if (cr6.lt) goto loc_838183E8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x838183E8;
	sub_825952B8(ctx, base);
loc_838183E8:
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
	// bl 0x82416268
	ctx.lr = 0x83818404;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8381840C;
	sub_82595170(ctx, base);
loc_8381840C:
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

__attribute__((alias("__imp__sub_83818424"))) PPC_WEAK_FUNC(sub_83818424);
PPC_FUNC_IMPL(__imp__sub_83818424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818428"))) PPC_WEAK_FUNC(sub_83818428);
PPC_FUNC_IMPL(__imp__sub_83818428) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8381b9d0
	ctx.lr = 0x8381844C;
	sub_8381B9D0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r31,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r31.u16);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cd17d8
	ctx.lr = 0x83818464;
	sub_82CD17D8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8381849C"))) PPC_WEAK_FUNC(sub_8381849C);
PPC_FUNC_IMPL(__imp__sub_8381849C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838184A0"))) PPC_WEAK_FUNC(sub_838184A0);
PPC_FUNC_IMPL(__imp__sub_838184A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838184A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// lwz r3,-2044(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2044);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83818550
	if (!cr6.eq) goto loc_83818550;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-2048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2048);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x838184d4
	if (!cr6.eq) goto loc_838184D4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838184D4:
	// li r29,26
	ctx.r29.s64 = 26;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x838184EC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83818500
	if (cr6.eq) goto loc_83818500;
	// bl 0x83818428
	ctx.lr = 0x838184F8;
	sub_83818428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83818504
	goto loc_83818504;
loc_83818500:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83818504:
	// lwz r3,-2044(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2044);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83818520
	if (!cr6.eq) goto loc_83818520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-2044(r30)
	PPC_STORE_U32(ctx.r30.u32 + -2044, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83818520:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83818550
	if (cr6.eq) goto loc_83818550;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83818538;
	sub_82595150(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8381bb78
	ctx.lr = 0x83818544;
	sub_8381BB78(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8381854C;
	sub_82595170(ctx, base);
	// lwz r3,-2044(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2044);
loc_83818550:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83818558"))) PPC_WEAK_FUNC(sub_83818558);
PPC_FUNC_IMPL(__imp__sub_83818558) {
	PPC_FUNC_PROLOGUE();
	// b 0x838184a0
	sub_838184A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8381855C"))) PPC_WEAK_FUNC(sub_8381855C);
PPC_FUNC_IMPL(__imp__sub_8381855C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818560"))) PPC_WEAK_FUNC(sub_83818560);
PPC_FUNC_IMPL(__imp__sub_83818560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83818568;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r28,r4,16,24,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833ecc50
	ctx.lr = 0x83818590;
	sub_833ECC50(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83818604
	if (!cr6.eq) goto loc_83818604;
	// li r11,26
	ctx.r11.s64 = 26;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x838185B8;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838185d4
	if (cr6.eq) goto loc_838185D4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8381b9d0
	ctx.lr = 0x838185D0;
	sub_8381B9D0(ctx, base);
	// b 0x838185d8
	goto loc_838185D8;
loc_838185D4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_838185D8:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83818130
	ctx.lr = 0x838185EC;
	sub_83818130(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x837ba1c0
	ctx.lr = 0x83818600;
	sub_837BA1C0(ctx, base);
	// b 0x83818608
	goto loc_83818608;
loc_83818604:
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_83818608:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83818130
	ctx.lr = 0x8381861C;
	sub_83818130(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x837ba1c0
	ctx.lr = 0x83818630;
	sub_837BA1C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8381863C"))) PPC_WEAK_FUNC(sub_8381863C);
PPC_FUNC_IMPL(__imp__sub_8381863C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818640"))) PPC_WEAK_FUNC(sub_83818640);
PPC_FUNC_IMPL(__imp__sub_83818640) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833ecc50
	ctx.lr = 0x83818678;
	sub_833ECC50(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83818690
	if (!cr6.eq) goto loc_83818690;
loc_83818688:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83818704
	goto loc_83818704;
loc_83818690:
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x833ecc50
	ctx.lr = 0x838186A4;
	sub_833ECC50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83818688
	if (cr6.eq) goto loc_83818688;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833e35f8
	ctx.lr = 0x838186C0;
	sub_833E35F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83818700
	if (!cr6.eq) goto loc_83818700;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833e35f8
	ctx.lr = 0x838186D8;
	sub_833E35F8(ctx, base);
	// li r11,26
	ctx.r11.s64 = 26;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x838186EC;
	sub_82595150(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8381bb78
	ctx.lr = 0x838186F8;
	sub_8381BB78(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83818700;
	sub_82595170(ctx, base);
loc_83818700:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83818704:
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

__attribute__((alias("__imp__sub_8381871C"))) PPC_WEAK_FUNC(sub_8381871C);
PPC_FUNC_IMPL(__imp__sub_8381871C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818720"))) PPC_WEAK_FUNC(sub_83818720);
PPC_FUNC_IMPL(__imp__sub_83818720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83818754"))) PPC_WEAK_FUNC(sub_83818754);
PPC_FUNC_IMPL(__imp__sub_83818754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818758"))) PPC_WEAK_FUNC(sub_83818758);
PPC_FUNC_IMPL(__imp__sub_83818758) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fc978
	sub_831FC978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8381875C"))) PPC_WEAK_FUNC(sub_8381875C);
PPC_FUNC_IMPL(__imp__sub_8381875C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818760"))) PPC_WEAK_FUNC(sub_83818760);
PPC_FUNC_IMPL(__imp__sub_83818760) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fc278
	sub_831FC278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83818764"))) PPC_WEAK_FUNC(sub_83818764);
PPC_FUNC_IMPL(__imp__sub_83818764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818768"))) PPC_WEAK_FUNC(sub_83818768);
PPC_FUNC_IMPL(__imp__sub_83818768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x831fc850
	sub_831FC850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83818770"))) PPC_WEAK_FUNC(sub_83818770);
PPC_FUNC_IMPL(__imp__sub_83818770) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,14480
	ctx.r9.s64 = ctx.r11.s64 + 14480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x838187b0
	if (cr6.eq) goto loc_838187B0;
	// bl 0x82595188
	ctx.lr = 0x838187A0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x838187B0;
	sub_825952B8(ctx, base);
loc_838187B0:
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

__attribute__((alias("__imp__sub_838187C8"))) PPC_WEAK_FUNC(sub_838187C8);
PPC_FUNC_IMPL(__imp__sub_838187C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838187D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x838187DC;
	sub_83102DB0(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x838187E0;
	sub_83102DB0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,1048
	ctx.r30.s64 = ctx.r29.s64 + 1048;
loc_838187E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83820678
	ctx.lr = 0x838187F0;
	sub_83820678(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83818818
	if (cr6.eq) goto loc_83818818;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83818810;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8381882c
	if (!cr6.eq) goto loc_8381882C;
loc_83818818:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x838187e8
	if (cr6.lt) goto loc_838187E8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8381882C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83818834"))) PPC_WEAK_FUNC(sub_83818834);
PPC_FUNC_IMPL(__imp__sub_83818834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818838"))) PPC_WEAK_FUNC(sub_83818838);
PPC_FUNC_IMPL(__imp__sub_83818838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83818840;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r11,2012
	ctx.r11.s64 = ctx.r11.s64 + 2012;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
loc_8381885C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381889c
	if (cr6.eq) goto loc_8381889C;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_83818870:
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x833cb2c8
	ctx.lr = 0x83818884;
	sub_833CB2C8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83818870
	if (cr6.lt) goto loc_83818870;
loc_8381889C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(ctx.r27.u32, 4, xer);
	// blt cr6,0x8381885c
	if (cr6.lt) goto loc_8381885C;
	// stw r25,1060(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1060, ctx.r25.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stw r25,1064(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1064, ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r25,1068(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1068, ctx.r25.u32);
	// addi r11,r26,1060
	ctx.r11.s64 = ctx.r26.s64 + 1060;
	// stw r25,1072(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1072, ctx.r25.u32);
	// bl 0x833cb2c8
	ctx.lr = 0x838188CC;
	sub_833CB2C8(ctx, base);
	// stw r3,1076(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1076, ctx.r3.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x833cb2c8
	ctx.lr = 0x838188DC;
	sub_833CB2C8(ctx, base);
	// stw r3,1080(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1080, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838188EC"))) PPC_WEAK_FUNC(sub_838188EC);
PPC_FUNC_IMPL(__imp__sub_838188EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838188F0"))) PPC_WEAK_FUNC(sub_838188F0);
PPC_FUNC_IMPL(__imp__sub_838188F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838188F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,2012
	ctx.r11.s64 = ctx.r11.s64 + 2012;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_83818910:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83818948
	if (cr6.eq) goto loc_83818948;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83818924:
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x833cb2f8
	ctx.lr = 0x83818934;
	sub_833CB2F8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x83818924
	if (cr6.lt) goto loc_83818924;
loc_83818948:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x83818910
	if (!cr0.eq) goto loc_83818910;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1076(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1076);
	// bl 0x833cb2f8
	ctx.lr = 0x83818960;
	sub_833CB2F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1080(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1080);
	// bl 0x833cb2f8
	ctx.lr = 0x8381896C;
	sub_833CB2F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83818978"))) PPC_WEAK_FUNC(sub_83818978);
PPC_FUNC_IMPL(__imp__sub_83818978) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83816b40
	ctx.lr = 0x83818998;
	sub_83816B40(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838189b8
	if (cr6.eq) goto loc_838189B8;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838189d8
	if (cr6.eq) goto loc_838189D8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838189c8
	if (!cr6.eq) goto loc_838189C8;
loc_838189B8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// b 0x838189cc
	goto loc_838189CC;
loc_838189C8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_838189CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83206170
	ctx.lr = 0x838189D8;
	sub_83206170(ctx, base);
loc_838189D8:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_838189F4"))) PPC_WEAK_FUNC(sub_838189F4);
PPC_FUNC_IMPL(__imp__sub_838189F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838189F8"))) PPC_WEAK_FUNC(sub_838189F8);
PPC_FUNC_IMPL(__imp__sub_838189F8) {
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
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x83818a20
	if (cr6.eq) goto loc_83818A20;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83818a24
	if (!cr6.eq) goto loc_83818A24;
loc_83818A20:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83818A24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83818a68
	if (cr6.eq) goto loc_83818A68;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x83818a50
	if (!cr6.eq) goto loc_83818A50;
	// lwz r3,1076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1076);
	// bl 0x833cb2e8
	ctx.lr = 0x83818A40;
	sub_833CB2E8(ctx, base);
	// lwz r3,1076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1076);
	// bl 0x83820f10
	ctx.lr = 0x83818A48;
	sub_83820F10(ctx, base);
	// lwz r3,1076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1076);
	// b 0x83818a64
	goto loc_83818A64;
loc_83818A50:
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// bl 0x833cb2e8
	ctx.lr = 0x83818A58;
	sub_833CB2E8(ctx, base);
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// bl 0x83820fb8
	ctx.lr = 0x83818A60;
	sub_83820FB8(ctx, base);
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
loc_83818A64:
	// bl 0x833cb2d8
	ctx.lr = 0x83818A68;
	sub_833CB2D8(ctx, base);
loc_83818A68:
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

__attribute__((alias("__imp__sub_83818A7C"))) PPC_WEAK_FUNC(sub_83818A7C);
PPC_FUNC_IMPL(__imp__sub_83818A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818A80"))) PPC_WEAK_FUNC(sub_83818A80);
PPC_FUNC_IMPL(__imp__sub_83818A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83818A88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,2012
	ctx.r9.s64 = ctx.r11.s64 + 2012;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwzx r29,r7,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83818ac8
	if (!cr6.eq) goto loc_83818AC8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83818AC8:
	// bl 0x83816b40
	ctx.lr = 0x83818ACC;
	sub_83816B40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83818af8
	if (cr6.eq) goto loc_83818AF8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83818af8
	if (!cr6.eq) goto loc_83818AF8;
	// xor r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// b 0x83818afc
	goto loc_83818AFC;
loc_83818AF8:
	// li r30,2
	ctx.r30.s64 = 2;
loc_83818AFC:
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838189f8
	ctx.lr = 0x83818B0C;
	sub_838189F8(ctx, base);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x83818b40
	if (cr6.eq) goto loc_83818B40;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x83818b48
	if (!cr6.eq) goto loc_83818B48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833cb2e8
	ctx.lr = 0x83818B24;
	sub_833CB2E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83816ba8
	ctx.lr = 0x83818B2C;
	sub_83816BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83816bd8
	ctx.lr = 0x83818B34;
	sub_83816BD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832034f0
	ctx.lr = 0x83818B40;
	sub_832034F0(ctx, base);
loc_83818B40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833cb2d8
	ctx.lr = 0x83818B48;
	sub_833CB2D8(ctx, base);
loc_83818B48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83818B54"))) PPC_WEAK_FUNC(sub_83818B54);
PPC_FUNC_IMPL(__imp__sub_83818B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818B58"))) PPC_WEAK_FUNC(sub_83818B58);
PPC_FUNC_IMPL(__imp__sub_83818B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83818B60;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x83816ad8
	ctx.lr = 0x83818B70;
	sub_83816AD8(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r11,r11,2012
	ctx.r11.s64 = ctx.r11.s64 + 2012;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
loc_83818B88:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83818c20
	if (cr6.eq) goto loc_83818C20;
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r22,r21,24
	ctx.r22.u64 = ctx.r21.u32 & 0xFF;
	// li r27,0
	ctx.r27.s64 = 0;
loc_83818BA0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83818bc4
	if (cr6.eq) goto loc_83818BC4;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83818a80
	ctx.lr = 0x83818BC0;
	sub_83818A80(ctx, base);
	// b 0x83818c04
	goto loc_83818C04;
loc_83818BC4:
	// lwz r11,-4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// lwzx r31,r11,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83818c04
	if (cr6.eq) goto loc_83818C04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb2e8
	ctx.lr = 0x83818BDC;
	sub_833CB2E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83816ba8
	ctx.lr = 0x83818BE4;
	sub_83816BA8(ctx, base);
	// add r29,r30,r28
	ctx.r29.u64 = ctx.r30.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83816bd8
	ctx.lr = 0x83818BF0;
	sub_83816BD8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832034f0
	ctx.lr = 0x83818BFC;
	sub_832034F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb2d8
	ctx.lr = 0x83818C04;
	sub_833CB2D8(ctx, base);
loc_83818C04:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83818ba0
	if (cr6.lt) goto loc_83818BA0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_83818C20:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmplwi cr6,r25,4
	cr6.compare<uint32_t>(ctx.r25.u32, 4, xer);
	// blt cr6,0x83818b88
	if (cr6.lt) goto loc_83818B88;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83818C3C"))) PPC_WEAK_FUNC(sub_83818C3C);
PPC_FUNC_IMPL(__imp__sub_83818C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818C40"))) PPC_WEAK_FUNC(sub_83818C40);
PPC_FUNC_IMPL(__imp__sub_83818C40) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83816ad8
	ctx.lr = 0x83818C68;
	sub_83816AD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83818c88
	if (cr6.eq) goto loc_83818C88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83818978
	ctx.lr = 0x83818C84;
	sub_83818978(ctx, base);
	// b 0x83818c94
	goto loc_83818C94;
loc_83818C88:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83206170
	ctx.lr = 0x83818C94;
	sub_83206170(ctx, base);
loc_83818C94:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r10,-2016(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2016);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83818cb4
	if (cr6.eq) goto loc_83818CB4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83818CB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83818CB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83818b58
	ctx.lr = 0x83818CC0;
	sub_83818B58(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83818CC4;
	sub_83102DB0(ctx, base);
	// bl 0x83816b40
	ctx.lr = 0x83818CC8;
	sub_83816B40(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x83816b50
	ctx.lr = 0x83818CD0;
	sub_83816B50(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83818CD4;
	sub_83102DB0(ctx, base);
	// bl 0x83821188
	ctx.lr = 0x83818CD8;
	sub_83821188(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83818CDC;
	sub_83102DB0(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83818CE0;
	sub_83102DB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83818D00"))) PPC_WEAK_FUNC(sub_83818D00);
PPC_FUNC_IMPL(__imp__sub_83818D00) {
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
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r9,r11,25692
	ctx.r9.s64 = ctx.r11.s64 + 25692;
	// addi r8,r10,14480
	ctx.r8.s64 = ctx.r10.s64 + 14480;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83818d4c
	if (cr6.eq) goto loc_83818D4C;
	// bl 0x82595188
	ctx.lr = 0x83818D3C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83818D4C;
	sub_825952B8(ctx, base);
loc_83818D4C:
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

__attribute__((alias("__imp__sub_83818D64"))) PPC_WEAK_FUNC(sub_83818D64);
PPC_FUNC_IMPL(__imp__sub_83818D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818D68"))) PPC_WEAK_FUNC(sub_83818D68);
PPC_FUNC_IMPL(__imp__sub_83818D68) {
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
	// bl 0x838188f0
	ctx.lr = 0x83818D78;
	sub_838188F0(ctx, base);
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

__attribute__((alias("__imp__sub_83818D8C"))) PPC_WEAK_FUNC(sub_83818D8C);
PPC_FUNC_IMPL(__imp__sub_83818D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818D90"))) PPC_WEAK_FUNC(sub_83818D90);
PPC_FUNC_IMPL(__imp__sub_83818D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83818D98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,1056
	ctx.r31.s64 = ctx.r3.s64 + 1056;
	// li r30,3
	ctx.r30.s64 = 3;
	// li r28,26
	ctx.r28.s64 = 26;
	// li r27,0
	ctx.r27.s64 = 0;
loc_83818DB0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83818e18
	if (cr6.eq) goto loc_83818E18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83818DD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83818e18
	if (cr6.eq) goto loc_83818E18;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83818DEC;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83818e0c
	if (cr6.eq) goto loc_83818E0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83818E0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83818E0C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83818E14;
	sub_82595170(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83818E18:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bne 0x83818db0
	if (!cr0.eq) goto loc_83818DB0;
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r11,-2020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2020);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83818e6c
	if (cr6.eq) goto loc_83818E6C;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83818E44;
	sub_82595150(ctx, base);
	// lwz r3,-2020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2020);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83818e64
	if (cr6.eq) goto loc_83818E64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83818E64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83818E64:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83818E6C;
	sub_82595170(ctx, base);
loc_83818E6C:
	// bl 0x83821250
	ctx.lr = 0x83818E70;
	sub_83821250(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83818E74;
	sub_83102DB0(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83818E78;
	sub_83102DB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83818E84"))) PPC_WEAK_FUNC(sub_83818E84);
PPC_FUNC_IMPL(__imp__sub_83818E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818E88"))) PPC_WEAK_FUNC(sub_83818E88);
PPC_FUNC_IMPL(__imp__sub_83818E88) {
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
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,25688
	ctx.r9.s64 = ctx.r10.s64 + 25688;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r5,960
	ctx.r5.s64 = 960;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83818EE0;
	sub_831CDCF0(ctx, base);
	// stw r30,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r30.u32);
	// stw r30,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r30.u32);
	// stw r30,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r30.u32);
	// stw r30,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r30.u32);
	// stw r30,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r30.u32);
	// stw r30,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r30.u32);
	// stw r30,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r30.u32);
	// stw r30,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r30.u32);
	// stw r30,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r30.u32);
	// stw r30,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r30.u32);
	// stw r30,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r30.u32);
	// stw r30,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83818F30"))) PPC_WEAK_FUNC(sub_83818F30);
PPC_FUNC_IMPL(__imp__sub_83818F30) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,25692
	ctx.r10.s64 = ctx.r11.s64 + 25692;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83818e88
	ctx.lr = 0x83818F58;
	sub_83818E88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r11,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r11.u32);
	// addi r11,r31,1048
	ctx.r11.s64 = ctx.r31.s64 + 1048;
	// bl 0x83818838
	ctx.lr = 0x83818F74;
	sub_83818838(ctx, base);
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

__attribute__((alias("__imp__sub_83818F8C"))) PPC_WEAK_FUNC(sub_83818F8C);
PPC_FUNC_IMPL(__imp__sub_83818F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83818F90"))) PPC_WEAK_FUNC(sub_83818F90);
PPC_FUNC_IMPL(__imp__sub_83818F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83818F98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// lwz r3,-2020(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2020);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83819034
	if (!cr6.eq) goto loc_83819034;
	// li r29,26
	ctx.r29.s64 = 26;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,1084
	ctx.r4.s64 = 1084;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83818FC4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83818fd8
	if (cr6.eq) goto loc_83818FD8;
	// bl 0x83818f30
	ctx.lr = 0x83818FD0;
	sub_83818F30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83818fdc
	goto loc_83818FDC;
loc_83818FD8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83818FDC:
	// lwz r3,-2020(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2020);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83818ff8
	if (!cr6.eq) goto loc_83818FF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-2020(r30)
	PPC_STORE_U32(ctx.r30.u32 + -2020, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83818FF8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83819034
	if (cr6.eq) goto loc_83819034;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83819010;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83819028;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83819030;
	sub_82595170(ctx, base);
	// lwz r3,-2020(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2020);
loc_83819034:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8381903C"))) PPC_WEAK_FUNC(sub_8381903C);
PPC_FUNC_IMPL(__imp__sub_8381903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83819040"))) PPC_WEAK_FUNC(sub_83819040);
PPC_FUNC_IMPL(__imp__sub_83819040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83819048;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83821110
	ctx.lr = 0x8381905C;
	sub_83821110(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8381909c
	if (cr6.eq) goto loc_8381909C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8381909c
	if (cr6.eq) goto loc_8381909C;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83816b60
	ctx.lr = 0x83819080;
	sub_83816B60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83204bf8
	ctx.lr = 0x83819090;
	sub_83204BF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8381909C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a8c428
	ctx.lr = 0x838190AC;
	sub_82A8C428(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,25540
	ctx.r29.s64 = ctx.r11.s64 + 25540;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82473550
	ctx.lr = 0x838190C0;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474170
	ctx.lr = 0x838190C8;
	sub_82474170(ctx, base);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x82473550
	ctx.lr = 0x838190D0;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x838190D8;
	sub_82474170(ctx, base);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// bl 0x82473550
	ctx.lr = 0x838190E0;
	sub_82473550(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82a79160
	ctx.lr = 0x838190E8;
	sub_82A79160(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r9,r10,15320
	ctx.r9.s64 = ctx.r10.s64 + 15320;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// bl 0x831ccf00
	ctx.lr = 0x838190FC;
	sub_831CCF00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83819108"))) PPC_WEAK_FUNC(sub_83819108);
PPC_FUNC_IMPL(__imp__sub_83819108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83819110;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83819154
	if (cr6.lt) goto loc_83819154;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83819148;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x83819154;
	sub_831CC150(ctx, base);
loc_83819154:
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
	// bne cr6,0x83819184
	if (!cr6.eq) goto loc_83819184;
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
	// b 0x838191c4
	goto loc_838191C4;
loc_83819184:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838191ac
	if (cr6.eq) goto loc_838191AC;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x838191c4
	if (!cr6.eq) goto loc_838191C4;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x838191c4
	goto loc_838191C4;
loc_838191AC:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x838191c4
	if (!cr6.eq) goto loc_838191C4;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_838191C4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838192e8
	if (!cr6.eq) goto loc_838192E8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_838191E0:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x83819268
	if (!cr6.eq) goto loc_83819268;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83819228
	if (!cr6.eq) goto loc_83819228;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,32(r8)
	PPC_STORE_U8(ctx.r8.u32 + 32, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x838192d8
	goto loc_838192D8;
loc_83819228:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83819240
	if (!cr6.eq) goto loc_83819240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c67fd0
	ctx.lr = 0x83819240;
	sub_82C67FD0(ctx, base);
loc_83819240:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82c68048
	ctx.lr = 0x83819264;
	sub_82C68048(ctx, base);
	// b 0x838192d8
	goto loc_838192D8;
loc_83819268:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8381929c
	if (!cr6.eq) goto loc_8381929C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,32(r8)
	PPC_STORE_U8(ctx.r8.u32 + 32, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x838192d8
	goto loc_838192D8;
loc_8381929C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x838192b4
	if (!cr6.eq) goto loc_838192B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c68048
	ctx.lr = 0x838192B4;
	sub_82C68048(ctx, base);
loc_838192B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82c67fd0
	ctx.lr = 0x838192D8;
	sub_82C67FD0(ctx, base);
loc_838192D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838191e0
	if (cr6.eq) goto loc_838191E0;
loc_838192E8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83819304"))) PPC_WEAK_FUNC(sub_83819304);
PPC_FUNC_IMPL(__imp__sub_83819304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83819308"))) PPC_WEAK_FUNC(sub_83819308);
PPC_FUNC_IMPL(__imp__sub_83819308) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8381933C;
	sub_82595718(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r11.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r10.u8);
	// stb r10,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r10.u8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// beq 0x83819378
	if (cr0.eq) goto loc_83819378;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_83819378:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83819390"))) PPC_WEAK_FUNC(sub_83819390);
PPC_FUNC_IMPL(__imp__sub_83819390) {
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
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824e2e20
	ctx.lr = 0x838193B8;
	sub_824E2E20(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x838193e0
	if (!cr6.eq) goto loc_838193E0;
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
loc_838193E0:
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83819408"))) PPC_WEAK_FUNC(sub_83819408);
PPC_FUNC_IMPL(__imp__sub_83819408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83819410;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838194ac
	if (!cr6.eq) goto loc_838194AC;
	// ld r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16);
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
loc_83819444:
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83819474
	if (cr6.eq) goto loc_83819474;
	// cmpld cr6,r10,r9
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, xer);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// blt cr6,0x83819464
	if (cr6.lt) goto loc_83819464;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83819464:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r31,r7,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x83819488
	goto loc_83819488;
loc_83819474:
	// cmpld cr6,r9,r10
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, xer);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// blt cr6,0x83819484
	if (cr6.lt) goto loc_83819484;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83819484:
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
loc_83819488:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8381949c
	if (cr6.eq) goto loc_8381949C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x838194a0
	goto loc_838194A0;
loc_8381949C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_838194A0:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83819444
	if (cr6.eq) goto loc_83819444;
loc_838194AC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381950c
	if (cr6.eq) goto loc_8381950C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x83819504
	if (!cr6.eq) goto loc_83819504;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83819108
	ctx.lr = 0x838194E8;
	sub_83819108(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83819504:
	// bl 0x82ff8298
	ctx.lr = 0x83819508;
	sub_82FF8298(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8381950C:
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// ld r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r27.u32 + 16);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// blt cr6,0x83819524
	if (cr6.lt) goto loc_83819524;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83819524:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83819564
	if (cr6.eq) goto loc_83819564;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83819108
	ctx.lr = 0x83819548;
	sub_83819108(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83819564:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83819578;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83819590"))) PPC_WEAK_FUNC(sub_83819590);
PPC_FUNC_IMPL(__imp__sub_83819590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83819598;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83819610
	if (cr6.eq) goto loc_83819610;
	// ld r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83572958
	ctx.lr = 0x838195C0;
	sub_83572958(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83819608
	if (cr6.eq) goto loc_83819608;
	// li r11,26
	ctx.r11.s64 = 26;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x838195E0;
	sub_82595150(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83819600
	if (cr6.eq) goto loc_83819600;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83819600;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83819600:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83819608;
	sub_82595170(ctx, base);
loc_83819608:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83819610:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b49068
	ctx.lr = 0x83819620;
	sub_83B49068(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8381962C"))) PPC_WEAK_FUNC(sub_8381962C);
PPC_FUNC_IMPL(__imp__sub_8381962C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83819630"))) PPC_WEAK_FUNC(sub_83819630);
PPC_FUNC_IMPL(__imp__sub_83819630) {
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
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// beq cr6,0x838196a0
	if (cr6.eq) goto loc_838196A0;
loc_83819660:
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bne cr6,0x83819688
	if (!cr6.eq) goto loc_83819688;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83819590
	ctx.lr = 0x8381967C;
	sub_83819590(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// b 0x83819694
	goto loc_83819694;
loc_83819688:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83456c38
	ctx.lr = 0x83819690;
	sub_83456C38(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83819694:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bne cr6,0x83819660
	if (!cr6.eq) goto loc_83819660;
loc_838196A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838196B8"))) PPC_WEAK_FUNC(sub_838196B8);
PPC_FUNC_IMPL(__imp__sub_838196B8) {
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
	// bl 0x83819308
	ctx.lr = 0x838196E0;
	sub_83819308(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83819408
	ctx.lr = 0x838196F4;
	sub_83819408(ctx, base);
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

__attribute__((alias("__imp__sub_83819710"))) PPC_WEAK_FUNC(sub_83819710);
PPC_FUNC_IMPL(__imp__sub_83819710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83819718;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rldicr r11,r4,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83819390
	ctx.lr = 0x8381973C;
	sub_83819390(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838197b4
	if (!cr6.eq) goto loc_838197B4;
	// li r11,26
	ctx.r11.s64 = 26;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8381975C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8381977c
	if (cr6.eq) goto loc_8381977C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83813920
	ctx.lr = 0x83819770;
	sub_83813920(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83819788
	if (!cr6.eq) goto loc_83819788;
loc_8381977C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83819788:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// std r28,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r28.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// bl 0x838196b8
	ctx.lr = 0x838197B0;
	sub_838196B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838197B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838197BC"))) PPC_WEAK_FUNC(sub_838197BC);
PPC_FUNC_IMPL(__imp__sub_838197BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838197C0"))) PPC_WEAK_FUNC(sub_838197C0);
PPC_FUNC_IMPL(__imp__sub_838197C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838197C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x838197e8
	if (!cr6.eq) goto loc_838197E8;
loc_838197DC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838197E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x838197F0;
	sub_825832D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x838197FC;
	sub_831F8200(ctx, base);
	// rldicr r11,r3,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824e2e20
	ctx.lr = 0x8381981C;
	sub_824E2E20(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// beq cr6,0x838197dc
	if (cr6.eq) goto loc_838197DC;
	// addic. r11,r5,24
	xer.ca = ctx.r5.u32 > 4294967271;
	ctx.r11.s64 = ctx.r5.s64 + 24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x838197dc
	if (cr0.eq) goto loc_838197DC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// ble 0x83819850
	if (!cr0.gt) goto loc_83819850;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83819850:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83819590
	ctx.lr = 0x8381985C;
	sub_83819590(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83819868"))) PPC_WEAK_FUNC(sub_83819868);
PPC_FUNC_IMPL(__imp__sub_83819868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83819870;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x838198f4
	if (cr6.eq) goto loc_838198F4;
	// li r29,26
	ctx.r29.s64 = 26;
loc_83819894:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838198dc
	if (cr6.eq) goto loc_838198DC;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x838198B0;
	sub_82595150(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838198d0
	if (cr6.eq) goto loc_838198D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838198D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_838198D0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x838198D8;
	sub_82595170(ctx, base);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
loc_838198DC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83456c38
	ctx.lr = 0x838198E4;
	sub_83456C38(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83819894
	if (!cr6.eq) goto loc_83819894;
loc_838198F4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82dad478
	ctx.lr = 0x83819904;
	sub_82DAD478(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x83b49740
	ctx.lr = 0x83819934;
	sub_83B49740(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x825952b8
	ctx.lr = 0x83819948;
	sub_825952B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83819950"))) PPC_WEAK_FUNC(sub_83819950);
PPC_FUNC_IMPL(__imp__sub_83819950) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838199a4
	if (cr6.eq) goto loc_838199A4;
	// li r11,26
	ctx.r11.s64 = 26;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83819980;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83819868
	ctx.lr = 0x83819988;
	sub_83819868(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x8381998C;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8381999C;
	sub_825952B8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x838199A4;
	sub_82595170(ctx, base);
loc_838199A4:
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

__attribute__((alias("__imp__sub_838199B8"))) PPC_WEAK_FUNC(sub_838199B8);
PPC_FUNC_IMPL(__imp__sub_838199B8) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x835ebbc8
	ctx.lr = 0x838199D8;
	sub_835EBBC8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82dad478
	ctx.lr = 0x838199E8;
	sub_82DAD478(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_83819A20"))) PPC_WEAK_FUNC(sub_83819A20);
PPC_FUNC_IMPL(__imp__sub_83819A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83819A28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// lwz r3,-2004(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2004);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83819ac8
	if (!cr6.eq) goto loc_83819AC8;
	// li r29,26
	ctx.r29.s64 = 26;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83819A54;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83819a68
	if (cr6.eq) goto loc_83819A68;
	// bl 0x838199b8
	ctx.lr = 0x83819A60;
	sub_838199B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83819a6c
	goto loc_83819A6C;
loc_83819A68:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83819A6C:
	// lwz r3,-2004(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2004);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83819a88
	if (!cr6.eq) goto loc_83819A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-2004(r30)
	PPC_STORE_U32(ctx.r30.u32 + -2004, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83819A88:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83819ac8
	if (cr6.eq) goto loc_83819AC8;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595150
	ctx.lr = 0x83819AA0;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83819868
	ctx.lr = 0x83819AA8;
	sub_83819868(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x83819AAC;
	sub_82595188(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x83819ABC;
	sub_825952B8(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595170
	ctx.lr = 0x83819AC4;
	sub_82595170(ctx, base);
	// lwz r3,-2004(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2004);
loc_83819AC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83819AD0"))) PPC_WEAK_FUNC(sub_83819AD0);
PPC_FUNC_IMPL(__imp__sub_83819AD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83819a20
	sub_83819A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83819AD4"))) PPC_WEAK_FUNC(sub_83819AD4);
PPC_FUNC_IMPL(__imp__sub_83819AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83819AD8"))) PPC_WEAK_FUNC(sub_83819AD8);
PPC_FUNC_IMPL(__imp__sub_83819AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83819AE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-4008
	ctx.r10.s64 = ctx.r11.s64 + -4008;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// bl 0x825749e0
	ctx.lr = 0x83819B14;
	sub_825749E0(ctx, base);
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// li r8,26
	ctx.r8.s64 = 26;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// addi r7,r9,26508
	ctx.r7.s64 = ctx.r9.s64 + 26508;
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// stb r30,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83819B44;
	sub_82595718(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83819B54"))) PPC_WEAK_FUNC(sub_83819B54);
PPC_FUNC_IMPL(__imp__sub_83819B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83819B58"))) PPC_WEAK_FUNC(sub_83819B58);
PPC_FUNC_IMPL(__imp__sub_83819B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83819b68
	if (!cr6.eq) goto loc_83819B68;
	// blr 
	return;
loc_83819B68:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x83819b88
	if (cr6.lt) goto loc_83819B88;
	// cmplwi cr6,r11,160
	cr6.compare<uint32_t>(ctx.r11.u32, 160, xer);
	// bge cr6,0x83819b88
	if (!cr6.lt) goto loc_83819B88;
	// blr 
	return;
loc_83819B88:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83819bb8
	if (cr6.eq) goto loc_83819BB8;
	// subf r10,r4,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r4.s64;
loc_83819B98:
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbzx r8,r10,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83819b98
	if (!cr6.eq) goto loc_83819B98;
loc_83819BB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83819BC4"))) PPC_WEAK_FUNC(sub_83819BC4);
PPC_FUNC_IMPL(__imp__sub_83819BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83819BC8"))) PPC_WEAK_FUNC(sub_83819BC8);
PPC_FUNC_IMPL(__imp__sub_83819BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83819bd8
	if (cr6.eq) goto loc_83819BD8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_83819BD8:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83819c20
	if (!cr6.gt) goto loc_83819C20;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83819BF0:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83819c08
	if (cr6.eq) goto loc_83819C08;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_83819C08:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// blt cr6,0x83819bf0
	if (cr6.lt) goto loc_83819BF0;
loc_83819C20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83819C28"))) PPC_WEAK_FUNC(sub_83819C28);
PPC_FUNC_IMPL(__imp__sub_83819C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83819cb4
	if (!cr6.gt) goto loc_83819CB4;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_83819C40:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83819ca0
	if (cr6.eq) goto loc_83819CA0;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x83819c70
	if (cr6.lt) goto loc_83819C70;
	// cmplwi cr6,r10,160
	cr6.compare<uint32_t>(ctx.r10.u32, 160, xer);
	// blt cr6,0x83819ca0
	if (cr6.lt) goto loc_83819CA0;
loc_83819C70:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83819c9c
	if (cr6.eq) goto loc_83819C9C;
loc_83819C7C:
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83819c7c
	if (!cr6.eq) goto loc_83819C7C;
loc_83819C9C:
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
loc_83819CA0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, xer);
	// blt cr6,0x83819c40
	if (cr6.lt) goto loc_83819C40;
loc_83819CB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83819CBC"))) PPC_WEAK_FUNC(sub_83819CBC);
PPC_FUNC_IMPL(__imp__sub_83819CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83819CC0"))) PPC_WEAK_FUNC(sub_83819CC0);
PPC_FUNC_IMPL(__imp__sub_83819CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83819CC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r4,26(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 26);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83819d94
	if (cr6.eq) goto loc_83819D94;
	// li r25,26
	ctx.r25.s64 = 26;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83819CF0;
	sub_82595718(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r5,26(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 26);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x83819D00;
	sub_83294018(ctx, base);
	// lhz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83819d7c
	if (cr6.eq) goto loc_83819D7C;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
loc_83819D18:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83819d68
	if (cr6.eq) goto loc_83819D68;
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83819d68
	if (!cr6.eq) goto loc_83819D68;
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbzx r11,r31,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83819d68
	if (!cr6.eq) goto loc_83819D68;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r11,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8381f210
	ctx.lr = 0x83819D5C;
	sub_8381F210(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8381ed28
	ctx.lr = 0x83819D64;
	sub_8381ED28(ctx, base);
	// stbx r26,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r26.u8);
loc_83819D68:
	// lhz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x83819d18
	if (cr6.lt) goto loc_83819D18;
loc_83819D7C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83819d94
	if (cr6.eq) goto loc_83819D94;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83819D94;
	sub_825952B8(ctx, base);
loc_83819D94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83819DA0"))) PPC_WEAK_FUNC(sub_83819DA0);
PPC_FUNC_IMPL(__imp__sub_83819DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 28);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r8,48(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
loc_83819DBC:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r6,r10,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83819ddc
	if (cr6.eq) goto loc_83819DDC;
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83819df0
	if (!cr6.eq) goto loc_83819DF0;
loc_83819DDC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x83819dbc
	if (cr6.lt) goto loc_83819DBC;
	// blr 
	return;
loc_83819DF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83819DF8"))) PPC_WEAK_FUNC(sub_83819DF8);
PPC_FUNC_IMPL(__imp__sub_83819DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83819E00;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83819da0
	ctx.lr = 0x83819E0C;
	sub_83819DA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381a044
	if (cr6.eq) goto loc_8381A044;
	// li r23,26
	ctx.r23.s64 = 26;
	// lhz r4,26(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 26);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83819E30;
	sub_82595718(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8381a044
	if (cr6.eq) goto loc_8381A044;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lhz r4,22(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// bl 0x82595718
	ctx.lr = 0x83819E50;
	sub_82595718(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83819e78
	if (!cr6.eq) goto loc_83819E78;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x83819E6C;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83819E78:
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r5,26(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83294018
	ctx.lr = 0x83819E88;
	sub_83294018(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r5,22(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// bl 0x83294018
	ctx.lr = 0x83819E98;
	sub_83294018(ctx, base);
	// lhz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381a024
	if (cr6.eq) goto loc_8381A024;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_83819EB0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8381a010
	if (cr6.eq) goto loc_8381A010;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381a010
	if (cr6.eq) goto loc_8381A010;
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// beq cr6,0x83819f04
	if (cr6.eq) goto loc_83819F04;
	// bl 0x8381f210
	ctx.lr = 0x83819EF4;
	sub_8381F210(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8381ed28
	ctx.lr = 0x83819EFC;
	sub_8381ED28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83819f24
	goto loc_83819F24;
loc_83819F04:
	// bl 0x8381f210
	ctx.lr = 0x83819F08;
	sub_8381F210(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8381ed28
	ctx.lr = 0x83819F10;
	sub_8381ED28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8381a010
	if (!cr6.gt) goto loc_8381A010;
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// stbx r27,r11,r25
	PPC_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r27.u8);
loc_83819F24:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8381a010
	if (!cr6.gt) goto loc_8381A010;
	// bl 0x8381f210
	ctx.lr = 0x83819F30;
	sub_8381F210(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8381ec68
	ctx.lr = 0x83819F3C;
	sub_8381EC68(ctx, base);
	// lhz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 152);
	// lhz r9,154(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 154);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 156);
	// lhz r11,158(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 158);
	// lhz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// frsp f0,f8
	ctx.f0.f64 = double(float(ctx.f8.f64));
	// frsp f12,f9
	ctx.f12.f64 = double(float(ctx.f9.f64));
	// beq cr6,0x8381a000
	if (cr6.eq) goto loc_8381A000;
	// li r8,0
	ctx.r8.s64 = 0;
loc_83819FA0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lhzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r10,r9,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83819fec
	if (!cr6.eq) goto loc_83819FEC;
	// fsubs f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfsx f8,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f10,f8,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f0.f64));
	// stfsx f7,r11,r10
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f9,f6,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f13.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stbx r27,r9,r28
	PPC_STORE_U8(ctx.r9.u32 + ctx.r28.u32, ctx.r27.u8);
loc_83819FEC:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// blt cr6,0x83819fa0
	if (cr6.lt) goto loc_83819FA0;
loc_8381A000:
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stb r10,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r10.u8);
loc_8381A010:
	// lhz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, xer);
	// blt cr6,0x83819eb0
	if (cr6.lt) goto loc_83819EB0;
loc_8381A024:
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x8381A034;
	sub_825952B8(ctx, base);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x8381A044;
	sub_825952B8(ctx, base);
loc_8381A044:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8381A050"))) PPC_WEAK_FUNC(sub_8381A050);
PPC_FUNC_IMPL(__imp__sub_8381A050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r11,26320
	ctx.r9.s64 = ctx.r11.s64 + 26320;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,84
	ctx.r8.s64 = 84;
loc_8381A068:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8381a068
	if (!cr6.eq) goto loc_8381A068;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// beq cr6,0x8381a0bc
	if (cr6.eq) goto loc_8381A0BC;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwimi r10,r7,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r7,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r10,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r9,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// beq cr6,0x8381a0b8
	if (cr6.eq) goto loc_8381A0B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8381A0B8:
	// li r6,1
	ctx.r6.s64 = 1;
loc_8381A0BC:
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a0e8
	if (cr6.eq) goto loc_8381A0E8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r10,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 | ctx.r6.u64;
loc_8381A0E8:
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// addi r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 + 24;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8381a0fc
	if (cr6.eq) goto loc_8381A0FC;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8381A0FC:
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8381a10c
	if (cr6.eq) goto loc_8381A10C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8381A10C:
	// rlwinm r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8381a11c
	if (cr6.eq) goto loc_8381A11C;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8381A11C:
	// rlwinm r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8381a12c
	if (cr6.eq) goto loc_8381A12C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8381A12C:
	// rlwinm r8,r11,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8381a13c
	if (cr6.eq) goto loc_8381A13C;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8381A13C:
	// rlwinm r8,r11,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8381a14c
	if (cr6.eq) goto loc_8381A14C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8381A14C:
	// rlwinm r8,r11,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8381a15c
	if (cr6.eq) goto loc_8381A15C;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8381A15C:
	// rlwinm r8,r11,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8381a16c
	if (cr6.eq) goto loc_8381A16C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8381A16C:
	// rlwinm r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwimi r11,r3,16,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r10,r3,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r11,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r10,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// or r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 | ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8381A1A8"))) PPC_WEAK_FUNC(sub_8381A1A8);
PPC_FUNC_IMPL(__imp__sub_8381A1A8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a2c4
	if (cr6.eq) goto loc_8381A2C4;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r6.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8381a228
	if (!cr6.eq) goto loc_8381A228;
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
loc_8381A228:
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8381a2c4
	if (!cr6.gt) goto loc_8381A2C4;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8381A24C:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8381a26c
	if (!cr6.eq) goto loc_8381A26C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8381a274
	goto loc_8381A274;
loc_8381A26C:
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8381A274:
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a294
	if (cr6.eq) goto loc_8381A294;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83819b58
	ctx.lr = 0x8381A294;
	sub_83819B58(ctx, base);
loc_8381A294:
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381a2a8
	if (cr6.eq) goto loc_8381A2A8;
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8381A2A8:
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8381a24c
	if (cr6.lt) goto loc_8381A24C;
loc_8381A2C4:
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

__attribute__((alias("__imp__sub_8381A2DC"))) PPC_WEAK_FUNC(sub_8381A2DC);
PPC_FUNC_IMPL(__imp__sub_8381A2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8381A2E0"))) PPC_WEAK_FUNC(sub_8381A2E0);
PPC_FUNC_IMPL(__imp__sub_8381A2E0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a36c
	if (cr6.eq) goto loc_8381A36C;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381a334
	if (cr6.eq) goto loc_8381A334;
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8381A334:
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8381a36c
	if (cr6.eq) goto loc_8381A36C;
	// lwz r4,16(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// bl 0x83819bc8
	ctx.lr = 0x8381A350;
	sub_83819BC8(ctx, base);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a36c
	if (cr6.eq) goto loc_8381A36C;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x83819c28
	ctx.lr = 0x8381A36C;
	sub_83819C28(ctx, base);
loc_8381A36C:
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

__attribute__((alias("__imp__sub_8381A380"))) PPC_WEAK_FUNC(sub_8381A380);
PPC_FUNC_IMPL(__imp__sub_8381A380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a3ec
	if (cr6.eq) goto loc_8381A3EC;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r7.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8381a3e0
	if (!cr6.eq) goto loc_8381A3E0;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8381A3E0:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
loc_8381A3EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8381A3F4"))) PPC_WEAK_FUNC(sub_8381A3F4);
PPC_FUNC_IMPL(__imp__sub_8381A3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8381A3F8"))) PPC_WEAK_FUNC(sub_8381A3F8);
PPC_FUNC_IMPL(__imp__sub_8381A3F8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a484
	if (cr6.eq) goto loc_8381A484;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381a44c
	if (cr6.eq) goto loc_8381A44C;
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8381A44C:
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8381a484
	if (cr6.eq) goto loc_8381A484;
	// lwz r4,16(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// bl 0x83819bc8
	ctx.lr = 0x8381A468;
	sub_83819BC8(ctx, base);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a484
	if (cr6.eq) goto loc_8381A484;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x83819c28
	ctx.lr = 0x8381A484;
	sub_83819C28(ctx, base);
loc_8381A484:
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

__attribute__((alias("__imp__sub_8381A498"))) PPC_WEAK_FUNC(sub_8381A498);
PPC_FUNC_IMPL(__imp__sub_8381A498) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a598
	if (cr6.eq) goto loc_8381A598;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r6.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8381a518
	if (!cr6.eq) goto loc_8381A518;
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
loc_8381A518:
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8381a598
	if (!cr6.gt) goto loc_8381A598;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8381A53C:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwzx r8,r6,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lhzx r9,r6,r5
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// rlwinm r11,r8,9,7,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0x1FF0000;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r4,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u32);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8381a580
	if (cr6.eq) goto loc_8381A580;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83819b58
	ctx.lr = 0x8381A57C;
	sub_83819B58(ctx, base);
	// stwx r3,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r3.u32);
loc_8381A580:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8381a53c
	if (cr6.lt) goto loc_8381A53C;
loc_8381A598:
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

__attribute__((alias("__imp__sub_8381A5B0"))) PPC_WEAK_FUNC(sub_8381A5B0);
PPC_FUNC_IMPL(__imp__sub_8381A5B0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a63c
	if (cr6.eq) goto loc_8381A63C;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381a604
	if (cr6.eq) goto loc_8381A604;
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8381A604:
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8381a63c
	if (cr6.eq) goto loc_8381A63C;
	// lwz r4,16(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// bl 0x83819bc8
	ctx.lr = 0x8381A620;
	sub_83819BC8(ctx, base);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a63c
	if (cr6.eq) goto loc_8381A63C;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x83819c28
	ctx.lr = 0x8381A63C;
	sub_83819C28(ctx, base);
loc_8381A63C:
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

__attribute__((alias("__imp__sub_8381A650"))) PPC_WEAK_FUNC(sub_8381A650);
PPC_FUNC_IMPL(__imp__sub_8381A650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a6bc
	if (cr6.eq) goto loc_8381A6BC;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r7.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8381a6b0
	if (!cr6.eq) goto loc_8381A6B0;
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8381A6B0:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
loc_8381A6BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8381A6C4"))) PPC_WEAK_FUNC(sub_8381A6C4);
PPC_FUNC_IMPL(__imp__sub_8381A6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8381A6C8"))) PPC_WEAK_FUNC(sub_8381A6C8);
PPC_FUNC_IMPL(__imp__sub_8381A6C8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a754
	if (cr6.eq) goto loc_8381A754;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381a71c
	if (cr6.eq) goto loc_8381A71C;
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8381A71C:
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8381a754
	if (cr6.eq) goto loc_8381A754;
	// lwz r4,16(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// bl 0x83819bc8
	ctx.lr = 0x8381A738;
	sub_83819BC8(ctx, base);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a754
	if (cr6.eq) goto loc_8381A754;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x83819c28
	ctx.lr = 0x8381A754;
	sub_83819C28(ctx, base);
loc_8381A754:
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

__attribute__((alias("__imp__sub_8381A768"))) PPC_WEAK_FUNC(sub_8381A768);
PPC_FUNC_IMPL(__imp__sub_8381A768) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a884
	if (cr6.eq) goto loc_8381A884;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, ctx.r6.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8381a7e8
	if (!cr6.eq) goto loc_8381A7E8;
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
loc_8381A7E8:
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8381a884
	if (!cr6.gt) goto loc_8381A884;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8381A80C:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8381a82c
	if (!cr6.eq) goto loc_8381A82C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8381a834
	goto loc_8381A834;
loc_8381A82C:
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8381A834:
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a854
	if (cr6.eq) goto loc_8381A854;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83819b58
	ctx.lr = 0x8381A854;
	sub_83819B58(ctx, base);
loc_8381A854:
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381a868
	if (cr6.eq) goto loc_8381A868;
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8381A868:
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8381a80c
	if (cr6.lt) goto loc_8381A80C;
loc_8381A884:
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

__attribute__((alias("__imp__sub_8381A89C"))) PPC_WEAK_FUNC(sub_8381A89C);
PPC_FUNC_IMPL(__imp__sub_8381A89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8381A8A0"))) PPC_WEAK_FUNC(sub_8381A8A0);
PPC_FUNC_IMPL(__imp__sub_8381A8A0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a92c
	if (cr6.eq) goto loc_8381A92C;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381a8f4
	if (cr6.eq) goto loc_8381A8F4;
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8381A8F4:
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8381a92c
	if (cr6.eq) goto loc_8381A92C;
	// lwz r4,16(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// bl 0x83819bc8
	ctx.lr = 0x8381A910;
	sub_83819BC8(ctx, base);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381a92c
	if (cr6.eq) goto loc_8381A92C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x83819c28
	ctx.lr = 0x8381A92C;
	sub_83819C28(ctx, base);
loc_8381A92C:
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

__attribute__((alias("__imp__sub_8381A940"))) PPC_WEAK_FUNC(sub_8381A940);
PPC_FUNC_IMPL(__imp__sub_8381A940) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381ab58
	if (cr6.eq) goto loc_8381AB58;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r7.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381a9b0
	if (cr6.eq) goto loc_8381A9B0;
	// lwz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8381A9B0:
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8381a9dc
	if (!cr6.eq) goto loc_8381A9DC;
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
loc_8381A9DC:
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8381ab58
	if (!cr6.gt) goto loc_8381AB58;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8381A9F0:
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8381aa10
	if (!cr6.eq) goto loc_8381AA10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8381aa18
	goto loc_8381AA18;
loc_8381AA10:
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8381AA18:
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381aa38
	if (cr6.eq) goto loc_8381AA38;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83819b58
	ctx.lr = 0x8381AA38;
	sub_83819B58(ctx, base);
loc_8381AA38:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381aa4c
	if (cr6.eq) goto loc_8381AA4C;
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8381AA4C:
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381ab40
	if (cr6.eq) goto loc_8381AB40;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8381aa68
	if (cr6.eq) goto loc_8381AA68;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8381AA68:
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8381aa7c
	if (cr6.eq) goto loc_8381AA7C;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8381AA7C:
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8381aa90
	if (cr6.eq) goto loc_8381AA90;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8381AA90:
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8381aaa4
	if (cr6.eq) goto loc_8381AAA4;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8381AAA4:
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8381aab8
	if (cr6.eq) goto loc_8381AAB8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8381AAB8:
	// lhz r9,26(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381aafc
	if (cr6.eq) goto loc_8381AAFC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8381AAD0:
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381aae4
	if (cr6.eq) goto loc_8381AAE4;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8381AAE4:
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lhz r9,26(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// blt cr6,0x8381aad0
	if (cr6.lt) goto loc_8381AAD0;
loc_8381AAFC:
	// lhz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8381ab40
	if (cr6.eq) goto loc_8381AB40;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8381AB10:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8381ab28
	if (cr6.eq) goto loc_8381AB28;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8381AB28:
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lhz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// blt cr6,0x8381ab10
	if (cr6.lt) goto loc_8381AB10;
loc_8381AB40:
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8381a9f0
	if (cr6.lt) goto loc_8381A9F0;
loc_8381AB58:
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

__attribute__((alias("__imp__sub_8381AB70"))) PPC_WEAK_FUNC(sub_8381AB70);
PPC_FUNC_IMPL(__imp__sub_8381AB70) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381abfc
	if (cr6.eq) goto loc_8381ABFC;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381abc4
	if (cr6.eq) goto loc_8381ABC4;
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8381ABC4:
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8381abfc
	if (cr6.eq) goto loc_8381ABFC;
	// lwz r4,16(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// bl 0x83819bc8
	ctx.lr = 0x8381ABE0;
	sub_83819BC8(ctx, base);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381abfc
	if (cr6.eq) goto loc_8381ABFC;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x83819c28
	ctx.lr = 0x8381ABFC;
	sub_83819C28(ctx, base);
loc_8381ABFC:
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

__attribute__((alias("__imp__sub_8381AC10"))) PPC_WEAK_FUNC(sub_8381AC10);
PPC_FUNC_IMPL(__imp__sub_8381AC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381ac8c
	if (cr6.eq) goto loc_8381AC8C;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381ac54
	if (cr6.eq) goto loc_8381AC54;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8381AC54:
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381ac8c
	if (cr6.eq) goto loc_8381AC8C;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8381ac80
	if (!cr6.eq) goto loc_8381AC80;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8381AC80:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_8381AC8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8381AC94"))) PPC_WEAK_FUNC(sub_8381AC94);
PPC_FUNC_IMPL(__imp__sub_8381AC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8381AC98"))) PPC_WEAK_FUNC(sub_8381AC98);
PPC_FUNC_IMPL(__imp__sub_8381AC98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381ad14
	if (cr6.eq) goto loc_8381AD14;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r11,104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381acdc
	if (cr6.eq) goto loc_8381ACDC;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8381ACDC:
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381ad14
	if (cr6.eq) goto loc_8381AD14;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8381ad08
	if (!cr6.eq) goto loc_8381AD08;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8381AD08:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_8381AD14:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8381AD1C"))) PPC_WEAK_FUNC(sub_8381AD1C);
PPC_FUNC_IMPL(__imp__sub_8381AD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8381AD20"))) PPC_WEAK_FUNC(sub_8381AD20);
PPC_FUNC_IMPL(__imp__sub_8381AD20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8381AD28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381ade8
	if (cr6.eq) goto loc_8381ADE8;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381ad74
	if (cr6.eq) goto loc_8381AD74;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8381AD74:
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8381ade8
	if (!cr6.gt) goto loc_8381ADE8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8381AD90:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8381adb8
	if (!cr6.eq) goto loc_8381ADB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8381adc0
	goto loc_8381ADC0;
loc_8381ADB8:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8381ADC0:
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x83203c90
	ctx.lr = 0x8381ADD0;
	sub_83203C90(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x8381ad90
	if (cr6.lt) goto loc_8381AD90;
loc_8381ADE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8381ADF4"))) PPC_WEAK_FUNC(sub_8381ADF4);
PPC_FUNC_IMPL(__imp__sub_8381ADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8381ADF8"))) PPC_WEAK_FUNC(sub_8381ADF8);
PPC_FUNC_IMPL(__imp__sub_8381ADF8) {
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
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8381ae38
	if (cr6.eq) goto loc_8381AE38;
	// li r11,26
	ctx.r11.s64 = 26;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8381AE30;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_8381AE38:
	// lbz r11,29(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381ae68
	if (cr6.eq) goto loc_8381AE68;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x8381AE4C;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x8381ae68
	if (cr6.gt) goto loc_8381AE68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8381AE68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8381AE68:
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

__attribute__((alias("__imp__sub_8381AE7C"))) PPC_WEAK_FUNC(sub_8381AE7C);
PPC_FUNC_IMPL(__imp__sub_8381AE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8381AE80"))) PPC_WEAK_FUNC(sub_8381AE80);
PPC_FUNC_IMPL(__imp__sub_8381AE80) {
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
	// li r11,26
	ctx.r11.s64 = 26;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8381AEAC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8381aed0
	if (cr6.eq) goto loc_8381AED0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83819ad8
	ctx.lr = 0x8381AEBC;
	sub_83819AD8(ctx, base);
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
loc_8381AED0:
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

__attribute__((alias("__imp__sub_8381AEE8"))) PPC_WEAK_FUNC(sub_8381AEE8);
PPC_FUNC_IMPL(__imp__sub_8381AEE8) {
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
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r11,26508
	ctx.r10.s64 = ctx.r11.s64 + 26508;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8381af34
	if (cr6.eq) goto loc_8381AF34;
	// li r11,26
	ctx.r11.s64 = 26;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8381AF2C;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_8381AF34:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-32552
	ctx.r9.s64 = ctx.r11.s64 + -32552;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8381af60
	if (cr6.eq) goto loc_8381AF60;
	// bl 0x82595188
	ctx.lr = 0x8381AF50;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8381AF60;
	sub_825952B8(ctx, base);
loc_8381AF60:
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

__attribute__((alias("__imp__sub_8381AF7C"))) PPC_WEAK_FUNC(sub_8381AF7C);
PPC_FUNC_IMPL(__imp__sub_8381AF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8381AF80"))) PPC_WEAK_FUNC(sub_8381AF80);
PPC_FUNC_IMPL(__imp__sub_8381AF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8381AF88;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8381afa4
	if (cr6.lt) goto loc_8381AFA4;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8381afa8
	goto loc_8381AFA8;
loc_8381AFA4:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8381AFA8:
	// bl 0x8381f210
	ctx.lr = 0x8381AFAC;
	sub_8381F210(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8381f038
	ctx.lr = 0x8381AFB4;
	sub_8381F038(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8381afcc
	if (!cr6.eq) goto loc_8381AFCC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8381AFCC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8381b0fc
	if (!cr6.eq) goto loc_8381B0FC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8381b08c
	if (!cr6.gt) goto loc_8381B08C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82595718
	ctx.lr = 0x8381B010;
	sub_82595718(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8381b08c
	if (cr6.eq) goto loc_8381B08C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x8381B028;
	sub_83294018(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8381b088
	if (!cr6.gt) goto loc_8381B088;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r26,-4
	ctx.r27.s64 = ctx.r26.s64 + -4;
loc_8381B044:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83204500
	ctx.lr = 0x8381B060;
	sub_83204500(ctx, base);
	// stwu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r27.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83204720
	ctx.lr = 0x8381B070;
	sub_83204720(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, xer);
	// blt cr6,0x8381b044
	if (cr6.lt) goto loc_8381B044;
loc_8381B088:
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
loc_8381B08C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8381b0fc
	if (cr6.eq) goto loc_8381B0FC;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8381b0fc
	if (!cr6.gt) goto loc_8381B0FC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8381B0B4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8381b0e4
	if (cr6.eq) goto loc_8381B0E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83819cc0
	ctx.lr = 0x8381B0D8;
	sub_83819CC0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83819df8
	ctx.lr = 0x8381B0E4;
	sub_83819DF8(ctx, base);
loc_8381B0E4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x8381b0b4
	if (cr6.lt) goto loc_8381B0B4;
loc_8381B0FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8381B108"))) PPC_WEAK_FUNC(sub_8381B108);
PPC_FUNC_IMPL(__imp__sub_8381B108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8381B110;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8381b12c
	if (cr6.lt) goto loc_8381B12C;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8381b130
	goto loc_8381B130;
loc_8381B12C:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8381B130:
	// bl 0x8381f210
	ctx.lr = 0x8381B134;
	sub_8381F210(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8381f3a0
	ctx.lr = 0x8381B13C;
	sub_8381F3A0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x8381b19c
	if (cr6.eq) goto loc_8381B19C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8381B150:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8381b188
	if (cr6.eq) goto loc_8381B188;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x8381B168;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x8381b18c
	if (cr6.gt) goto loc_8381B18C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8381B184;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8381b18c
	goto loc_8381B18C;
loc_8381B188:
	// stb r28,29(r30)
	PPC_STORE_U8(ctx.r30.u32 + 29, ctx.r28.u8);
loc_8381B18C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x8381b150
	if (!cr6.eq) goto loc_8381B150;
loc_8381B19C:
	// li r11,26
	ctx.r11.s64 = 26;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595150
	ctx.lr = 0x8381B1B0;
	sub_82595150(ctx, base);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8381b1cc
	if (cr6.eq) goto loc_8381B1CC;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8381B1CC;
	sub_825952B8(ctx, base);
loc_8381B1CC:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8381b1f8
	if (cr6.lt) goto loc_8381B1F8;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8381B1F8;
	sub_825952B8(ctx, base);
loc_8381B1F8:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x82416268
	ctx.lr = 0x8381B210;
	sub_82416268(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595170
	ctx.lr = 0x8381B218;
	sub_82595170(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8381B220"))) PPC_WEAK_FUNC(sub_8381B220);
PPC_FUNC_IMPL(__imp__sub_8381B220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8381B228;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// bl 0x8381f210
	ctx.lr = 0x8381B264;
	sub_8381F210(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8381f280
	ctx.lr = 0x8381B26C;
	sub_8381F280(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8381B270:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8381b270
	if (!cr6.eq) goto loc_8381B270;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8381B298;
	sub_8259CC28(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x8381b2c8
	if (cr6.eq) goto loc_8381B2C8;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x8381B2C0;
	sub_831CE420(ctx, base);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_8381B2C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8381B2D4"))) PPC_WEAK_FUNC(sub_8381B2D4);
PPC_FUNC_IMPL(__imp__sub_8381B2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

