#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83A777E4"))) PPC_WEAK_FUNC(sub_83A777E4);
PPC_FUNC_IMPL(__imp__sub_83A777E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A777E8"))) PPC_WEAK_FUNC(sub_83A777E8);
PPC_FUNC_IMPL(__imp__sub_83A777E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A777F8"))) PPC_WEAK_FUNC(sub_83A777F8);
PPC_FUNC_IMPL(__imp__sub_83A777F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A77800;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a77834
	if (cr6.eq) goto loc_83A77834;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a77834
	if (cr6.eq) goto loc_83A77834;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A77834;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A77834:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
loc_83A7783C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a77854
	if (cr6.eq) goto loc_83A77854;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7db30
	ctx.lr = 0x83A77854;
	sub_83A7DB30(ctx, base);
loc_83A77854:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x83a7783c
	if (cr6.lt) goto loc_83A7783C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A77878;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A77880"))) PPC_WEAK_FUNC(sub_83A77880);
PPC_FUNC_IMPL(__imp__sub_83A77880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A77888;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a778bc
	if (!cr6.eq) goto loc_83A778BC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-5032
	ctx.r4.s64 = ctx.r11.s64 + -5032;
loc_83A778B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A778B8;
	sub_831EA418(ctx, base);
	// b 0x83a77a28
	goto loc_83A77A28;
loc_83A778BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r10,-5040
	ctx.r5.s64 = ctx.r10.s64 + -5040;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,96
	ctx.r4.s64 = 96;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A778E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne 0x83a77908
	if (!cr0.eq) goto loc_83A77908;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,26228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26228);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a77a28
	if (cr6.eq) goto loc_83A77A28;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-5052
	ctx.r4.s64 = ctx.r11.s64 + -5052;
	// b 0x83a778b0
	goto loc_83A778B0;
loc_83A77908:
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A77918;
	sub_831CDCF0(ctx, base);
	// clrlwi. r11,r27,28
	ctx.r11.u64 = ctx.r27.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83a77928
	if (!cr0.eq) goto loc_83A77928;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x83a77930
	goto loc_83A77930;
loc_83A77928:
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_83A77930:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a7db08
	ctx.lr = 0x83A7793C;
	sub_83A7DB08(ctx, base);
	// clrlwi r26,r3,16
	ctx.r26.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mulli r28,r26,40
	ctx.r28.s64 = ctx.r26.s64 * 40;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r5,r10,-5060
	ctx.r5.s64 = ctx.r10.s64 + -5060;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83A77968;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x83a779cc
	if (!cr0.eq) goto loc_83A779CC;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// bl 0x83a777f8
	ctx.lr = 0x83A779AC;
	sub_83A777F8(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,26228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26228);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a77a28
	if (cr6.eq) goto loc_83A77A28;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-5072
	ctx.r4.s64 = ctx.r11.s64 + -5072;
	// b 0x83a778b0
	goto loc_83A778B0;
loc_83A779CC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A779DC;
	sub_831CDCF0(ctx, base);
	// clrlwi. r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83a779ec
	if (!cr0.eq) goto loc_83A779EC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// b 0x83a779f4
	goto loc_83A779F4;
loc_83A779EC:
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
loc_83A779F4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7dbb0
	ctx.lr = 0x83A77A18;
	sub_83A7DBB0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x83a77a2c
	if (!cr0.eq) goto loc_83A77A2C;
	// bl 0x83a777f8
	ctx.lr = 0x83A77A28;
	sub_83A777F8(ctx, base);
loc_83A77A28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A77A2C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A77A34"))) PPC_WEAK_FUNC(sub_83A77A34);
PPC_FUNC_IMPL(__imp__sub_83A77A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A77A38"))) PPC_WEAK_FUNC(sub_83A77A38);
PPC_FUNC_IMPL(__imp__sub_83A77A38) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83a77880
	sub_83A77880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A77A48"))) PPC_WEAK_FUNC(sub_83A77A48);
PPC_FUNC_IMPL(__imp__sub_83A77A48) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a77a74
	if (cr6.eq) goto loc_83A77A74;
	// bl 0x832d1a68
	ctx.lr = 0x83A77A6C;
	sub_832D1A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A77A74:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A77A84;
	sub_831CDCF0(ctx, base);
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

__attribute__((alias("__imp__sub_83A77A98"))) PPC_WEAK_FUNC(sub_83A77A98);
PPC_FUNC_IMPL(__imp__sub_83A77A98) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82417108
	ctx.lr = 0x83A77AB8;
	sub_82417108(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832d2b50
	ctx.lr = 0x83A77AC0;
	sub_832D2B50(ctx, base);
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

__attribute__((alias("__imp__sub_83A77AD4"))) PPC_WEAK_FUNC(sub_83A77AD4);
PPC_FUNC_IMPL(__imp__sub_83A77AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A77AD8"))) PPC_WEAK_FUNC(sub_83A77AD8);
PPC_FUNC_IMPL(__imp__sub_83A77AD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x832d2b10
	sub_832D2B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A77AE0"))) PPC_WEAK_FUNC(sub_83A77AE0);
PPC_FUNC_IMPL(__imp__sub_83A77AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A77B00;
	sub_831CDCF0(ctx, base);
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r31,r11,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// bl 0x832d2a70
	ctx.lr = 0x83A77B1C;
	sub_832D2A70(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a77b44
	if (!cr0.eq) goto loc_83A77B44;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-4948
	ctx.r4.s64 = ctx.r11.s64 + -4948;
	// bl 0x831ea3f0
	ctx.lr = 0x83A77B34;
	sub_831EA3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77a48
	ctx.lr = 0x83A77B3C;
	sub_83A77A48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a77b48
	goto loc_83A77B48;
loc_83A77B44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A77B48:
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

__attribute__((alias("__imp__sub_83A77B5C"))) PPC_WEAK_FUNC(sub_83A77B5C);
PPC_FUNC_IMPL(__imp__sub_83A77B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A77B60"))) PPC_WEAK_FUNC(sub_83A77B60);
PPC_FUNC_IMPL(__imp__sub_83A77B60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x83a75ef8
	sub_83A75EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A77B68"))) PPC_WEAK_FUNC(sub_83A77B68);
PPC_FUNC_IMPL(__imp__sub_83A77B68) {
	PPC_FUNC_PROLOGUE();
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// stw r3,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A77B78"))) PPC_WEAK_FUNC(sub_83A77B78);
PPC_FUNC_IMPL(__imp__sub_83A77B78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// twllei r5,0
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r11,r11,r5
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r5.u32);
	// mullw r3,r11,r5
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A77BA0"))) PPC_WEAK_FUNC(sub_83A77BA0);
PPC_FUNC_IMPL(__imp__sub_83A77BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A77BA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rotlwi r30,r5,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// add r11,r30,r4
	ctx.r11.u64 = ctx.r30.u64 + ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r11,-256
	ctx.r4.s64 = ctx.r11.s64 + -256;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A77BD4;
	sub_831CE980(ctx, base);
	// rotlwi r11,r27,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// addi r6,r29,256
	ctx.r6.s64 = ctx.r29.s64 + 256;
	// addi r7,r11,-256
	ctx.r7.s64 = ctx.r11.s64 + -256;
	// addi r5,r30,-256
	ctx.r5.s64 = ctx.r30.s64 + -256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a7ddd0
	ctx.lr = 0x83A77BF0;
	sub_83A7DDD0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble 0x83a77c14
	if (!cr0.gt) goto loc_83A77C14;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A77C08;
	sub_831CE980(ctx, base);
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// b 0x83a77c18
	goto loc_83A77C18;
loc_83A77C14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A77C18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A77C20"))) PPC_WEAK_FUNC(sub_83A77C20);
PPC_FUNC_IMPL(__imp__sub_83A77C20) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7e028
	ctx.lr = 0x83A77C3C;
	sub_83A7E028(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83a77c50
	if (!cr6.lt) goto loc_83A77C50;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x83a77c54
	goto loc_83A77C54;
loc_83A77C50:
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
loc_83A77C54:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A77C6C"))) PPC_WEAK_FUNC(sub_83A77C6C);
PPC_FUNC_IMPL(__imp__sub_83A77C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A77C70"))) PPC_WEAK_FUNC(sub_83A77C70);
PPC_FUNC_IMPL(__imp__sub_83A77C70) {
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
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bge cr6,0x83a77c8c
	if (!cr6.lt) goto loc_83A77C8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a77ca4
	goto loc_83A77CA4;
loc_83A77C8C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-4836
	ctx.r4.s64 = ctx.r11.s64 + -4836;
	// bl 0x83b66170
	ctx.lr = 0x83A77C9C;
	sub_83B66170(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_83A77CA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A77CB4"))) PPC_WEAK_FUNC(sub_83A77CB4);
PPC_FUNC_IMPL(__imp__sub_83A77CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A77CB8"))) PPC_WEAK_FUNC(sub_83A77CB8);
PPC_FUNC_IMPL(__imp__sub_83A77CB8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A77CD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A77CE8"))) PPC_WEAK_FUNC(sub_83A77CE8);
PPC_FUNC_IMPL(__imp__sub_83A77CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A77CF0;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a77d28
	if (!cr6.eq) goto loc_83A77D28;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-4756
	ctx.r4.s64 = ctx.r11.s64 + -4756;
loc_83A77D14:
	// li r5,-2
	ctx.r5.s64 = -2;
loc_83A77D18:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A77D20;
	sub_831EA418(ctx, base);
loc_83A77D20:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a77dbc
	goto loc_83A77DBC;
loc_83A77D28:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a77d3c
	if (!cr6.eq) goto loc_83A77D3C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-4768
	ctx.r4.s64 = ctx.r11.s64 + -4768;
	// b 0x83a77d14
	goto loc_83A77D14;
loc_83A77D3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A77D4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a77d68
	if (!cr6.lt) goto loc_83A77D68;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-4780
	ctx.r4.s64 = ctx.r11.s64 + -4780;
	// b 0x83a77d18
	goto loc_83A77D18;
loc_83A77D68:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A77D74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A77D90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a77dac
	if (!cr0.eq) goto loc_83A77DAC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-4824
	ctx.r4.s64 = ctx.r11.s64 + -4824;
	// bl 0x831ea3f0
	ctx.lr = 0x83A77DA8;
	sub_831EA3F0(ctx, base);
	// b 0x83a77d20
	goto loc_83A77D20;
loc_83A77DAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_83A77DBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A77DC4"))) PPC_WEAK_FUNC(sub_83A77DC4);
PPC_FUNC_IMPL(__imp__sub_83A77DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A77DC8"))) PPC_WEAK_FUNC(sub_83A77DC8);
PPC_FUNC_IMPL(__imp__sub_83A77DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a77de0
	if (!cr6.eq) goto loc_83A77DE0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-4732
	ctx.r4.s64 = ctx.r11.s64 + -4732;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A77DE0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a77dfc
	if (!cr6.eq) goto loc_83A77DFC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-4744
	ctx.r4.s64 = ctx.r11.s64 + -4744;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A77DFC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A77E0C"))) PPC_WEAK_FUNC(sub_83A77E0C);
PPC_FUNC_IMPL(__imp__sub_83A77E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A77E10"))) PPC_WEAK_FUNC(sub_83A77E10);
PPC_FUNC_IMPL(__imp__sub_83A77E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A77E18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r31,r10,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r29,r11,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A77E48;
	sub_831CDCF0(ctx, base);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a77e58
	if (cr0.eq) goto loc_83A77E58;
	// subfic r11,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r11.s64;
loc_83A77E58:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// stb r10,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r10.u8);
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// subf r10,r8,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r8.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// subf r9,r29,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r29.s64;
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// addi r9,r9,-24
	ctx.r9.s64 = ctx.r9.s64 + -24;
	// addi r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 + 24;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r10.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A77EBC"))) PPC_WEAK_FUNC(sub_83A77EBC);
PPC_FUNC_IMPL(__imp__sub_83A77EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A77EC0"))) PPC_WEAK_FUNC(sub_83A77EC0);
PPC_FUNC_IMPL(__imp__sub_83A77EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_83A77EC8:
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a77f80
	if (!cr0.eq) goto loc_83A77F80;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// addi r6,r3,28
	ctx.r6.s64 = ctx.r3.s64 + 28;
	// lhz r31,14(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x83a77f00
	if (cr6.lt) goto loc_83A77F00;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_83A77F00:
	// divwu r11,r6,r9
	ctx.r11.u32 = PPCDivide(ctx.r6.u32, ctx.r9.u32);
	// twllei r9,0
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// subf. r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a77f18
	if (cr0.eq) goto loc_83A77F18;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_83A77F18:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// bgt cr6,0x83a77f3c
	if (cr6.gt) goto loc_83A77F3C;
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a77f8c
	if (cr0.eq) goto loc_83A77F8C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83a77f8c
	if (cr6.eq) goto loc_83A77F8C;
loc_83A77F3C:
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// bne cr6,0x83a77f80
	if (!cr6.eq) goto loc_83A77F80;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bge cr6,0x83a77f50
	if (!cr6.lt) goto loc_83A77F50;
	// li r10,8
	ctx.r10.s64 = 8;
loc_83A77F50:
	// divwu r11,r6,r10
	ctx.r11.u32 = PPCDivide(ctx.r6.u32, ctx.r10.u32);
	// twllei r10,0
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// subf. r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a77f68
	if (cr0.eq) goto loc_83A77F68;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_83A77F68:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a77f80
	if (!cr6.eq) goto loc_83A77F80;
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83a77f8c
	if (cr6.eq) goto loc_83A77F8C;
loc_83A77F80:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a77ec8
	if (!cr6.eq) goto loc_83A77EC8;
loc_83A77F8C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A77F94"))) PPC_WEAK_FUNC(sub_83A77F94);
PPC_FUNC_IMPL(__imp__sub_83A77F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A77F98"))) PPC_WEAK_FUNC(sub_83A77F98);
PPC_FUNC_IMPL(__imp__sub_83A77F98) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a77ffc
	if (cr6.eq) goto loc_83A77FFC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a77fec
	if (cr6.eq) goto loc_83A77FEC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83a77fdc
	if (cr6.eq) goto loc_83A77FDC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-4452
	ctx.r4.s64 = ctx.r11.s64 + -4452;
	// b 0x83a77fe4
	goto loc_83A77FE4;
loc_83A77FDC:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-4512
	ctx.r4.s64 = ctx.r11.s64 + -4512;
loc_83A77FE4:
	// bl 0x831ea3f0
	ctx.lr = 0x83A77FE8;
	sub_831EA3F0(ctx, base);
	// b 0x83a7806c
	goto loc_83A7806C;
loc_83A77FEC:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x83a77ec0
	ctx.lr = 0x83A77FF4;
	sub_83A77EC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83a7806c
	goto loc_83A7806C;
loc_83A77FFC:
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_83A78000:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a78060
	if (!cr0.eq) goto loc_83A78060;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x83a78054
	if (!cr6.eq) goto loc_83A78054;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bge cr6,0x83a7802c
	if (!cr6.lt) goto loc_83A7802C;
	// li r10,8
	ctx.r10.s64 = 8;
loc_83A7802C:
	// divwu r9,r11,r10
	ctx.r9.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// twllei r10,0
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf. r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a78044
	if (cr0.eq) goto loc_83A78044;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_83A78044:
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83a7806c
	if (cr6.eq) goto loc_83A7806C;
loc_83A78054:
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a7806c
	if (cr0.eq) goto loc_83A7806C;
loc_83A78060:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a78000
	if (!cr6.eq) goto loc_83A78000;
loc_83A7806C:
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

__attribute__((alias("__imp__sub_83A78084"))) PPC_WEAK_FUNC(sub_83A78084);
PPC_FUNC_IMPL(__imp__sub_83A78084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A78088"))) PPC_WEAK_FUNC(sub_83A78088);
PPC_FUNC_IMPL(__imp__sub_83A78088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A78090;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lhz r9,14(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r4,28
	ctx.r8.s64 = ctx.r4.s64 + 28;
	// cmpwi cr6,r7,8
	cr6.compare<int32_t>(ctx.r7.s32, 8, xer);
	// addi r25,r11,28
	ctx.r25.s64 = ctx.r11.s64 + 28;
	// bge cr6,0x83a780cc
	if (!cr6.lt) goto loc_83A780CC;
	// li r7,8
	ctx.r7.s64 = 8;
loc_83A780CC:
	// divwu r11,r8,r7
	ctx.r11.u32 = PPCDivide(ctx.r8.u32, ctx.r7.u32);
	// twllei r7,0
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// subf. r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a780e4
	if (cr0.eq) goto loc_83A780E4;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
loc_83A780E4:
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// li r10,4
	ctx.r10.s64 = 4;
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// beq cr6,0x83a78100
	if (cr6.eq) goto loc_83A78100;
	// subfic r10,r10,8
	xer.ca = ctx.r10.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r10.s64;
loc_83A78100:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmpw cr6,r25,r10
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, xer);
	// bge cr6,0x83a78118
	if (!cr6.lt) goto loc_83A78118;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a781c4
	goto loc_83A781C4;
loc_83A78118:
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r9,r10,7
	ctx.r9.s64 = ctx.r10.s64 + 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r30,r9,0,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A78140;
	sub_831CDCF0(ctx, base);
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a78150
	if (cr0.eq) goto loc_83A78150;
	// subfic r11,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r11.s64;
loc_83A78150:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// subf r9,r10,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r10.s64;
	// sth r10,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r10.u16);
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
	// subf r11,r27,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r27.s64;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 + 28;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// sth r28,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r28.u16);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stb r10,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r10.u8);
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// sth r29,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r29.u16);
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
	// stw r11,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a781bc
	if (!cr6.eq) goto loc_83A781BC;
	// stw r30,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r30.u32);
	// b 0x83a781c0
	goto loc_83A781C0;
loc_83A781BC:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_83A781C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A781C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A781CC"))) PPC_WEAK_FUNC(sub_83A781CC);
PPC_FUNC_IMPL(__imp__sub_83A781CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A781D0"))) PPC_WEAK_FUNC(sub_83A781D0);
PPC_FUNC_IMPL(__imp__sub_83A781D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a781ec
	if (!cr6.eq) goto loc_83A781EC;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_83A781EC:
	// subf r8,r5,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bgt cr6,0x83a781fc
	if (cr6.gt) goto loc_83A781FC;
	// li r11,8
	ctx.r11.s64 = 8;
loc_83A781FC:
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a78220
	if (cr0.eq) goto loc_83A78220;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
loc_83A78220:
	// divwu r10,r8,r11
	ctx.r10.u32 = PPCDivide(ctx.r8.u32, ctx.r11.u32);
	// twllei r11,0
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lhz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r10,-28
	ctx.r11.s64 = ctx.r10.s64 + -28;
	// addi r7,r9,28
	ctx.r7.s64 = ctx.r9.s64 + 28;
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x83a782b0
	if (!cr6.lt) goto loc_83A782B0;
	// lbz r11,13(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a78264
	if (!cr0.eq) goto loc_83A78264;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a7835c
	goto loc_83A7835C;
loc_83A78264:
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// sth r9,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r9.u16);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// stb r10,13(r4)
	PPC_STORE_U8(ctx.r4.u32 + 13, ctx.r10.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stb r9,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, ctx.r9.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// sth r11,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r11.u16);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// b 0x83a7835c
	goto loc_83A7835C;
loc_83A782B0:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,-28
	ctx.r10.s64 = ctx.r10.s64 + -28;
	// addi r7,r4,-4
	ctx.r7.s64 = ctx.r4.s64 + -4;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// addi r31,r10,28
	ctx.r31.s64 = ctx.r10.s64 + 28;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r8,31
	ctx.r8.s64 = ctx.r8.s64 + 31;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// rlwinm r8,r8,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// sth r9,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// clrlwi. r10,r7,29
	ctx.r10.u64 = ctx.r7.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stb r5,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r5.u8);
	// stw r31,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r31.u32);
	// beq 0x83a78310
	if (cr0.eq) goto loc_83A78310;
	// subfic r10,r10,8
	xer.ca = ctx.r10.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r10.s64;
loc_83A78310:
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// sth r10,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r10.u16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a78324
	if (cr6.eq) goto loc_83A78324;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_83A78324:
	// lhz r10,14(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// sth r9,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r9.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a78358
	if (!cr6.eq) goto loc_83A78358;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_83A78358:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_83A7835C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A78364"))) PPC_WEAK_FUNC(sub_83A78364);
PPC_FUNC_IMPL(__imp__sub_83A78364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A78368"))) PPC_WEAK_FUNC(sub_83A78368);
PPC_FUNC_IMPL(__imp__sub_83A78368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A78370;
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
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge cr6,0x83a78398
	if (!cr6.lt) goto loc_83A78398;
loc_83A78390:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a784bc
	goto loc_83A784BC;
loc_83A78398:
	// clrlwi r6,r30,16
	ctx.r6.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77f98
	ctx.lr = 0x83A783AC;
	sub_83A77F98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a78390
	if (cr0.eq) goto loc_83A78390;
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// blt cr6,0x83a783c8
	if (cr6.lt) goto loc_83A783C8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83A783C8:
	// divwu r9,r10,r11
	ctx.r9.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// twllei r11,0
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf. r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a783e0
	if (cr0.eq) goto loc_83A783E0;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_83A783E0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bne cr6,0x83a78430
	if (!cr6.eq) goto loc_83A78430;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a78430
	if (!cr6.eq) goto loc_83A78430;
	// lbz r10,13(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83a78390
	if (cr0.eq) goto loc_83A78390;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r28,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r28.u8);
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stb r8,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r8.u8);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// b 0x83a78474
	goto loc_83A78474;
loc_83A78430:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// beq cr6,0x83a7845c
	if (cr6.eq) goto loc_83A7845C;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bne cr6,0x83a78390
	if (!cr6.eq) goto loc_83A78390;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a781d0
	ctx.lr = 0x83A78458;
	sub_83A781D0(ctx, base);
	// b 0x83a78474
	goto loc_83A78474;
loc_83A7845C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a78088
	ctx.lr = 0x83A78474;
	sub_83A78088(ctx, base);
loc_83A78474:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a78390
	if (cr6.eq) goto loc_83A78390;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a784b0
	if (!cr6.lt) goto loc_83A784B0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83A784B0:
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
loc_83A784BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A784C4"))) PPC_WEAK_FUNC(sub_83A784C4);
PPC_FUNC_IMPL(__imp__sub_83A784C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A784C8"))) PPC_WEAK_FUNC(sub_83A784C8);
PPC_FUNC_IMPL(__imp__sub_83A784C8) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83a78368
	sub_83A78368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A784DC"))) PPC_WEAK_FUNC(sub_83A784DC);
PPC_FUNC_IMPL(__imp__sub_83A784DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A784E0"))) PPC_WEAK_FUNC(sub_83A784E0);
PPC_FUNC_IMPL(__imp__sub_83A784E0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x83a78368
	sub_83A78368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A784F4"))) PPC_WEAK_FUNC(sub_83A784F4);
PPC_FUNC_IMPL(__imp__sub_83A784F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A784F8"))) PPC_WEAK_FUNC(sub_83A784F8);
PPC_FUNC_IMPL(__imp__sub_83A784F8) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x83a78368
	sub_83A78368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7850C"))) PPC_WEAK_FUNC(sub_83A7850C);
PPC_FUNC_IMPL(__imp__sub_83A7850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A78510"))) PPC_WEAK_FUNC(sub_83A78510);
PPC_FUNC_IMPL(__imp__sub_83A78510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83a78544
	if (!cr6.eq) goto loc_83A78544;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// lhz r9,14(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_83A78544:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a78560
	if (cr6.eq) goto loc_83A78560;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_83A78560:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r31,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, ctx.r31.u8);
	// beq cr6,0x83a785c0
	if (cr6.eq) goto loc_83A785C0;
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83a785c0
	if (!cr0.eq) goto loc_83A785C0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lhz r8,14(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// lhz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// beq cr6,0x83a785ac
	if (cr6.eq) goto loc_83A785AC;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83A785AC:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83a785c4
	if (!cr6.eq) goto loc_83A785C4;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x83a785c4
	goto loc_83A785C4;
loc_83A785C0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83A785C4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a78670
	if (cr6.eq) goto loc_83A78670;
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83a78670
	if (!cr0.eq) goto loc_83A78670;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r6,14(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// lhz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a78614
	if (cr6.eq) goto loc_83A78614;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_83A78614:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x83a7862c
	if (!cr6.eq) goto loc_83A7862C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a78638
	if (!cr6.eq) goto loc_83A78638;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// b 0x83a78638
	goto loc_83A78638;
loc_83A7862C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a78638
	if (!cr6.eq) goto loc_83A78638;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_83A78638:
	// lbz r9,13(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83a78648
	if (!cr0.eq) goto loc_83A78648;
	// stb r31,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r31.u8);
loc_83A78648:
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a78658
	if (!cr6.eq) goto loc_83A78658;
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
loc_83A78658:
	// lhz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
loc_83A78670:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A78678"))) PPC_WEAK_FUNC(sub_83A78678);
PPC_FUNC_IMPL(__imp__sub_83A78678) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,13(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83a786a4
	if (!cr6.eq) goto loc_83A786A4;
	// bl 0x83a78510
	ctx.lr = 0x83A7869C;
	sub_83A78510(ctx, base);
loc_83A7869C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83a787b0
	goto loc_83A787B0;
loc_83A786A4:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83a787ac
	if (!cr6.eq) goto loc_83A787AC;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// lhz r9,14(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a78790
	if (cr6.eq) goto loc_83A78790;
	// lbz r11,13(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a78790
	if (!cr0.eq) goto loc_83A78790;
	// lhz r7,14(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lhz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r9,28
	ctx.r7.s64 = ctx.r9.s64 + 28;
	// beq cr6,0x83a78730
	if (cr6.eq) goto loc_83A78730;
loc_83A78710:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x83a78730
	if (cr6.eq) goto loc_83A78730;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83a78710
	if (!cr6.eq) goto loc_83A78710;
loc_83A78730:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stb r9,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
	// clrlwi. r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stb r9,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r9.u8);
	// beq 0x83a7874c
	if (cr0.eq) goto loc_83A7874C;
	// subfic r8,r8,8
	xer.ca = ctx.r8.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r8.s64;
loc_83A7874C:
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r9,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// addi r9,r8,28
	ctx.r9.s64 = ctx.r8.s64 + 28;
	// sth r8,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r8.u16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x83a78788
	if (cr6.eq) goto loc_83A78788;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x83a7869c
	goto loc_83A7869C;
loc_83A78788:
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x83a7869c
	goto loc_83A7869C;
loc_83A78790:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r9,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, ctx.r9.u8);
	// bne cr6,0x83a7869c
	if (!cr6.eq) goto loc_83A7869C;
	// stb r9,13(r4)
	PPC_STORE_U8(ctx.r4.u32 + 13, ctx.r9.u8);
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// b 0x83a7869c
	goto loc_83A7869C;
loc_83A787AC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A787B0:
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

__attribute__((alias("__imp__sub_83A787C4"))) PPC_WEAK_FUNC(sub_83A787C4);
PPC_FUNC_IMPL(__imp__sub_83A787C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A787C8"))) PPC_WEAK_FUNC(sub_83A787C8);
PPC_FUNC_IMPL(__imp__sub_83A787C8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a787e8
	if (!cr6.eq) goto loc_83A787E8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-4352
	ctx.r4.s64 = ctx.r11.s64 + -4352;
	// b 0x83a78818
	goto loc_83A78818;
loc_83A787E8:
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bgt cr6,0x83a78810
	if (cr6.gt) goto loc_83A78810;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// blt cr6,0x83a78810
	if (cr6.lt) goto loc_83A78810;
	// lwz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// bl 0x83a78678
	ctx.lr = 0x83A7880C;
	sub_83A78678(ctx, base);
	// b 0x83a78824
	goto loc_83A78824;
loc_83A78810:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-4392
	ctx.r4.s64 = ctx.r11.s64 + -4392;
loc_83A78818:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A78820;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A78824:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A78834"))) PPC_WEAK_FUNC(sub_83A78834);
PPC_FUNC_IMPL(__imp__sub_83A78834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A78838"))) PPC_WEAK_FUNC(sub_83A78838);
PPC_FUNC_IMPL(__imp__sub_83A78838) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,26240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26240);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a78868
	if (!cr6.eq) goto loc_83A78868;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-4320
	ctx.r4.s64 = ctx.r11.s64 + -4320;
	// bl 0x831ea3f0
	ctx.lr = 0x83A78860;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a78870
	goto loc_83A78870;
loc_83A78868:
	// bl 0x83a75cd8
	ctx.lr = 0x83A7886C;
	sub_83A75CD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A78870:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A78880"))) PPC_WEAK_FUNC(sub_83A78880);
PPC_FUNC_IMPL(__imp__sub_83A78880) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,26240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26240);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a788b0
	if (!cr6.eq) goto loc_83A788B0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-4280
	ctx.r4.s64 = ctx.r11.s64 + -4280;
	// bl 0x831ea3f0
	ctx.lr = 0x83A788A8;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a788b8
	goto loc_83A788B8;
loc_83A788B0:
	// bl 0x83a75d58
	ctx.lr = 0x83A788B4;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A788B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A788C8"))) PPC_WEAK_FUNC(sub_83A788C8);
PPC_FUNC_IMPL(__imp__sub_83A788C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bge cr6,0x83a788d4
	if (!cr6.lt) goto loc_83A788D4;
	// li r3,8
	ctx.r3.s64 = 8;
loc_83A788D4:
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A788DC"))) PPC_WEAK_FUNC(sub_83A788DC);
PPC_FUNC_IMPL(__imp__sub_83A788DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A788E0"))) PPC_WEAK_FUNC(sub_83A788E0);
PPC_FUNC_IMPL(__imp__sub_83A788E0) {
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
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,26236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26236);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,26236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26236, ctx.r11.u32);
	// lwz r11,26236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26236);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a78928
	if (!cr6.eq) goto loc_83A78928;
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// lwz r3,26240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26240);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a78928
	if (cr6.eq) goto loc_83A78928;
	// bl 0x83a75c60
	ctx.lr = 0x83A78920;
	sub_83A75C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,26240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26240, ctx.r11.u32);
loc_83A78928:
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

__attribute__((alias("__imp__sub_83A7893C"))) PPC_WEAK_FUNC(sub_83A7893C);
PPC_FUNC_IMPL(__imp__sub_83A7893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A78940"))) PPC_WEAK_FUNC(sub_83A78940);
PPC_FUNC_IMPL(__imp__sub_83A78940) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a7896c
	if (cr6.eq) goto loc_83A7896C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A78968;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a7898c
	goto loc_83A7898C;
loc_83A7896C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,11564
	ctx.r4.s64 = ctx.r11.s64 + 11564;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A78988;
	sub_831EA308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A7898C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7899C"))) PPC_WEAK_FUNC(sub_83A7899C);
PPC_FUNC_IMPL(__imp__sub_83A7899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A789A0"))) PPC_WEAK_FUNC(sub_83A789A0);
PPC_FUNC_IMPL(__imp__sub_83A789A0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a789c8
	if (cr6.eq) goto loc_83A789C8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A789C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a789e8
	goto loc_83A789E8;
loc_83A789C8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,11512
	ctx.r4.s64 = ctx.r11.s64 + 11512;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A789E4;
	sub_831EA308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A789E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A789F8"))) PPC_WEAK_FUNC(sub_83A789F8);
PPC_FUNC_IMPL(__imp__sub_83A789F8) {
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
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x83a78a14
	if (!cr6.eq) goto loc_83A78A14;
	// bl 0x83a78940
	ctx.lr = 0x83A78A10;
	sub_83A78940(ctx, base);
	// b 0x83a78a38
	goto loc_83A78A38;
loc_83A78A14:
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83a78a24
	if (!cr6.eq) goto loc_83A78A24;
	// bl 0x83a789a0
	ctx.lr = 0x83A78A20;
	sub_83A789A0(ctx, base);
	// b 0x83a78a38
	goto loc_83A78A38;
loc_83A78A24:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-4192
	ctx.r4.s64 = ctx.r11.s64 + -4192;
	// bl 0x831ea3f0
	ctx.lr = 0x83A78A34;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A78A38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A78A48"))) PPC_WEAK_FUNC(sub_83A78A48);
PPC_FUNC_IMPL(__imp__sub_83A78A48) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a78a70
	if (cr6.eq) goto loc_83A78A70;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A78A6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a78a90
	goto loc_83A78A90;
loc_83A78A70:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,11396
	ctx.r4.s64 = ctx.r11.s64 + 11396;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A78A8C;
	sub_831EA308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A78A90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A78AA0"))) PPC_WEAK_FUNC(sub_83A78AA0);
PPC_FUNC_IMPL(__imp__sub_83A78AA0) {
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
	// cmpwi cr6,r4,24
	cr6.compare<int32_t>(ctx.r4.s32, 24, xer);
	// bgt cr6,0x83a78acc
	if (cr6.gt) goto loc_83A78ACC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a78af4
	goto loc_83A78AF4;
loc_83A78ACC:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A78ADC;
	sub_831CDCF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77e10
	ctx.lr = 0x83A78AE8;
	sub_83A77E10(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r11,r11,-15332
	ctx.r11.s64 = ctx.r11.s64 + -15332;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_83A78AF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A78B0C"))) PPC_WEAK_FUNC(sub_83A78B0C);
PPC_FUNC_IMPL(__imp__sub_83A78B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A78B10"))) PPC_WEAK_FUNC(sub_83A78B10);
PPC_FUNC_IMPL(__imp__sub_83A78B10) {
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
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_83A78B24:
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x83a78510
	ctx.lr = 0x83A78B2C;
	sub_83A78510(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a78b24
	if (!cr6.eq) goto loc_83A78B24;
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

__attribute__((alias("__imp__sub_83A78B4C"))) PPC_WEAK_FUNC(sub_83A78B4C);
PPC_FUNC_IMPL(__imp__sub_83A78B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A78B50"))) PPC_WEAK_FUNC(sub_83A78B50);
PPC_FUNC_IMPL(__imp__sub_83A78B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A78B58;
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
	// bl 0x83a78838
	ctx.lr = 0x83A78B70;
	sub_83A78838(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a78368
	ctx.lr = 0x83A78B88;
	sub_83A78368(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a78880
	ctx.lr = 0x83A78B90;
	sub_83A78880(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A78B9C"))) PPC_WEAK_FUNC(sub_83A78B9C);
PPC_FUNC_IMPL(__imp__sub_83A78B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A78BA0"))) PPC_WEAK_FUNC(sub_83A78BA0);
PPC_FUNC_IMPL(__imp__sub_83A78BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A78BA8;
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
	// bl 0x83a78838
	ctx.lr = 0x83A78BC0;
	sub_83A78838(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a78368
	ctx.lr = 0x83A78BD8;
	sub_83A78368(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a78880
	ctx.lr = 0x83A78BE0;
	sub_83A78880(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A78BEC"))) PPC_WEAK_FUNC(sub_83A78BEC);
PPC_FUNC_IMPL(__imp__sub_83A78BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A78BF0"))) PPC_WEAK_FUNC(sub_83A78BF0);
PPC_FUNC_IMPL(__imp__sub_83A78BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A78BF8;
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
	// bl 0x83a78838
	ctx.lr = 0x83A78C10;
	sub_83A78838(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a78368
	ctx.lr = 0x83A78C28;
	sub_83A78368(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a78880
	ctx.lr = 0x83A78C30;
	sub_83A78880(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A78C3C"))) PPC_WEAK_FUNC(sub_83A78C3C);
PPC_FUNC_IMPL(__imp__sub_83A78C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A78C40"))) PPC_WEAK_FUNC(sub_83A78C40);
PPC_FUNC_IMPL(__imp__sub_83A78C40) {
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
	// bl 0x83a78838
	ctx.lr = 0x83A78C60;
	sub_83A78838(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a787c8
	ctx.lr = 0x83A78C6C;
	sub_83A787C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a78880
	ctx.lr = 0x83A78C74;
	sub_83A78880(ctx, base);
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

__attribute__((alias("__imp__sub_83A78C90"))) PPC_WEAK_FUNC(sub_83A78C90);
PPC_FUNC_IMPL(__imp__sub_83A78C90) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,26236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26236);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26236, ctx.r11.u32);
	// lwz r11,26236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26236);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a78cf8
	if (!cr6.eq) goto loc_83A78CF8;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// addi r31,r11,26232
	ctx.r31.s64 = ctx.r11.s64 + 26232;
	// addi r10,r10,-4608
	ctx.r10.s64 = ctx.r10.s64 + -4608;
	// stw r10,26232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26232, ctx.r10.u32);
	// bl 0x831ea640
	ctx.lr = 0x83A78CD4;
	sub_831EA640(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a75be8
	ctx.lr = 0x83A78CE0;
	sub_83A75BE8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a78cf8
	if (!cr0.eq) goto loc_83A78CF8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-4240
	ctx.r4.s64 = ctx.r11.s64 + -4240;
	// bl 0x831ea3f0
	ctx.lr = 0x83A78CF8;
	sub_831EA3F0(ctx, base);
loc_83A78CF8:
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

__attribute__((alias("__imp__sub_83A78D0C"))) PPC_WEAK_FUNC(sub_83A78D0C);
PPC_FUNC_IMPL(__imp__sub_83A78D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A78D10"))) PPC_WEAK_FUNC(sub_83A78D10);
PPC_FUNC_IMPL(__imp__sub_83A78D10) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A78D54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fmuls f13,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// lfs f0,-27208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27208);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// fcfid f13,f12
	ctx.f13.f64 = double(ctx.f12.s64);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r30,r9,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83a78db4
	if (cr6.gt) goto loc_83A78DB4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83A78DB4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A78DC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// bgt cr6,0x83a78de8
	if (cr6.gt) goto loc_83A78DE8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A78DE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83A78DE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A78E10"))) PPC_WEAK_FUNC(sub_83A78E10);
PPC_FUNC_IMPL(__imp__sub_83A78E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A78E18;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce774
	ctx.lr = 0x83A78E20;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A78E54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// frsp f27,f0
	ctx.f27.f64 = double(float(ctx.f0.f64));
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A78E80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x83a78f08
	if (!cr6.lt) goto loc_83A78F08;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A78EB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a78f4c
	if (cr0.eq) goto loc_83A78F4C;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83a78ed4
	if (cr6.eq) goto loc_83A78ED4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83A78ED4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83a78d10
	ctx.lr = 0x83A78EE8;
	sub_83A78D10(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A78F00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x83a78f48
	goto loc_83A78F48;
loc_83A78F08:
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A78F18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a78f48
	if (cr0.eq) goto loc_83A78F48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bne cr6,0x83a78f48
	if (!cr6.eq) goto loc_83A78F48;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A78F48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A78F48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83A78F4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7c0
	ctx.lr = 0x83A78F58;
	__restfpr_27(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A78F5C"))) PPC_WEAK_FUNC(sub_83A78F5C);
PPC_FUNC_IMPL(__imp__sub_83A78F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A78F60"))) PPC_WEAK_FUNC(sub_83A78F60);
PPC_FUNC_IMPL(__imp__sub_83A78F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A78F68;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83a78ff0
	goto loc_83A78FF0;
loc_83A78F88:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A78FA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a78fec
	if (!cr0.eq) goto loc_83A78FEC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A78FBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a78fec
	if (cr0.eq) goto loc_83A78FEC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f4,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83a78e10
	ctx.lr = 0x83A78FE0;
	sub_83A78E10(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a78fec
	if (cr0.eq) goto loc_83A78FEC;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_83A78FEC:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_83A78FF0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83a78f88
	if (!cr6.eq) goto loc_83A78F88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A79008"))) PPC_WEAK_FUNC(sub_83A79008);
PPC_FUNC_IMPL(__imp__sub_83A79008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A79010;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a79178
	if (cr6.eq) goto loc_83A79178;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r29,r10,32768
	ctx.r29.u64 = ctx.r10.u64 | 32768;
	// lfs f30,-8312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8312);
	ctx.f30.f64 = double(temp.f32);
loc_83A79044:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A7905C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a7916c
	if (cr0.eq) goto loc_83A7916C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A79078;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a7916c
	if (!cr0.eq) goto loc_83A7916C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A79094;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// beq 0x83a790b8
	if (cr0.eq) goto loc_83A790B8;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A790B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a7916c
	goto loc_83A7916C;
loc_83A790B8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A790C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a7916c
	if (!cr0.eq) goto loc_83A7916C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A790E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// bgt cr6,0x83a79118
	if (cr6.gt) goto loc_83A79118;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83A79118:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A7912C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// bgt cr6,0x83a7914c
	if (cr6.gt) goto loc_83A7914C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A79148;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83A7914C:
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A79168;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r31.u32);
loc_83A7916C:
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83a79044
	if (!cr6.eq) goto loc_83A79044;
loc_83A79178:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7918C"))) PPC_WEAK_FUNC(sub_83A7918C);
PPC_FUNC_IMPL(__imp__sub_83A7918C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A79190"))) PPC_WEAK_FUNC(sub_83A79190);
PPC_FUNC_IMPL(__imp__sub_83A79190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A79198;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a792d0
	if (cr6.eq) goto loc_83A792D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r29,r10,32768
	ctx.r29.u64 = ctx.r10.u64 | 32768;
	// lfs f30,-8312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8312);
	ctx.f30.f64 = double(temp.f32);
loc_83A791CC:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A791E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a792c4
	if (cr0.eq) goto loc_83A792C4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A79200;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a792c4
	if (!cr0.eq) goto loc_83A792C4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A7921C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a792c4
	if (cr0.eq) goto loc_83A792C4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A7923C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// bgt cr6,0x83a79270
	if (cr6.gt) goto loc_83A79270;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83A79270:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A79284;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// bgt cr6,0x83a792a4
	if (cr6.gt) goto loc_83A792A4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A792A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83A792A4:
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A792C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r31.u32);
loc_83A792C4:
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83a791cc
	if (!cr6.eq) goto loc_83A791CC;
loc_83A792D0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A792E4"))) PPC_WEAK_FUNC(sub_83A792E4);
PPC_FUNC_IMPL(__imp__sub_83A792E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A792E8"))) PPC_WEAK_FUNC(sub_83A792E8);
PPC_FUNC_IMPL(__imp__sub_83A792E8) {
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
	ctx.lr = 0x83A792F0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a7944c
	if (cr6.eq) goto loc_83A7944C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A79320;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a7944c
	if (!cr0.eq) goto loc_83A7944C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A79340;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a79444
	if (cr0.eq) goto loc_83A79444;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a79444
	if (cr6.eq) goto loc_83A79444;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A7936C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-8312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8312);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bctrl 
	ctx.lr = 0x83A793B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A793CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// subf r29,r3,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r3.s64;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83a793e4
	if (cr6.gt) goto loc_83A793E4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83A793E4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A793FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// bgt cr6,0x83a79420
	if (cr6.gt) goto loc_83A79420;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A7941C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83A79420:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A7943C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// blt cr6,0x83a7944c
	if (cr6.lt) goto loc_83A7944C;
loc_83A79444:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_83A7944C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A79458"))) PPC_WEAK_FUNC(sub_83A79458);
PPC_FUNC_IMPL(__imp__sub_83A79458) {
	PPC_FUNC_PROLOGUE();
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
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f0,340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fdivs f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// fadds f12,f13,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f0,f12,f1,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fdivs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f2
	cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x83a794e0
	if (!cr6.lt) goto loc_83A794E0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,-4152
	ctx.r4.s64 = ctx.r11.s64 + -4152;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831ea400
	ctx.lr = 0x83A794D4;
	sub_831EA400(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83a79524
	goto loc_83A79524;
loc_83A794E0:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// fsubs f11,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lfs f0,23372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-15272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15272);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_83A79524:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A79534"))) PPC_WEAK_FUNC(sub_83A79534);
PPC_FUNC_IMPL(__imp__sub_83A79534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A79538"))) PPC_WEAK_FUNC(sub_83A79538);
PPC_FUNC_IMPL(__imp__sub_83A79538) {
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
	ctx.lr = 0x83A79540;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a79560
	if (!cr6.eq) goto loc_83A79560;
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83a79564
	goto loc_83A79564;
loc_83A79560:
	// lfs f0,52(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
loc_83A79564:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r31,32(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x83a795c8
	goto loc_83A795C8;
loc_83A7958C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A795A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a795c4
	if (cr0.eq) goto loc_83A795C4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A795C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_83A795C4:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83A795C8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a7958c
	if (!cr6.eq) goto loc_83A7958C;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,64(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A795FC"))) PPC_WEAK_FUNC(sub_83A795FC);
PPC_FUNC_IMPL(__imp__sub_83A795FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A79600"))) PPC_WEAK_FUNC(sub_83A79600);
PPC_FUNC_IMPL(__imp__sub_83A79600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// stw r3,26324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26324, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7960C"))) PPC_WEAK_FUNC(sub_83A7960C);
PPC_FUNC_IMPL(__imp__sub_83A7960C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A79610"))) PPC_WEAK_FUNC(sub_83A79610);
PPC_FUNC_IMPL(__imp__sub_83A79610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r31,8
	ctx.r31.s64 = 8;
loc_83A79624:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a7e068
	ctx.lr = 0x83A7962C;
	sub_83A7E068(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a79624
	if (!cr0.eq) goto loc_83A79624;
	// li r3,1248
	ctx.r3.s64 = 1248;
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

__attribute__((alias("__imp__sub_83A7964C"))) PPC_WEAK_FUNC(sub_83A7964C);
PPC_FUNC_IMPL(__imp__sub_83A7964C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A79650"))) PPC_WEAK_FUNC(sub_83A79650);
PPC_FUNC_IMPL(__imp__sub_83A79650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,26320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26320);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A79668"))) PPC_WEAK_FUNC(sub_83A79668);
PPC_FUNC_IMPL(__imp__sub_83A79668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f1,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A79680"))) PPC_WEAK_FUNC(sub_83A79680);
PPC_FUNC_IMPL(__imp__sub_83A79680) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A796B0;
	sub_83A75CD8(ctx, base);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A796BC;
	sub_83A75D58(ctx, base);
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

__attribute__((alias("__imp__sub_83A796D8"))) PPC_WEAK_FUNC(sub_83A796D8);
PPC_FUNC_IMPL(__imp__sub_83A796D8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A79708;
	sub_83A75CD8(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A79728;
	sub_83A75D58(ctx, base);
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

__attribute__((alias("__imp__sub_83A79744"))) PPC_WEAK_FUNC(sub_83A79744);
PPC_FUNC_IMPL(__imp__sub_83A79744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A79748"))) PPC_WEAK_FUNC(sub_83A79748);
PPC_FUNC_IMPL(__imp__sub_83A79748) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// bne cr6,0x83a79774
	if (!cr6.eq) goto loc_83A79774;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// b 0x83a79784
	goto loc_83A79784;
loc_83A79774:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83A79784:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A797B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwa r10,48(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 48));
	// lfs f11,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfs f0,340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// frsp f9,f8
	ctx.f9.f64 = double(float(ctx.f8.f64));
	// stfs f11,60(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// fdivs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fdivs f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x83a79888
	if (!cr6.lt) goto loc_83A79888;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// addi r4,r11,-3944
	ctx.r4.s64 = ctx.r11.s64 + -3944;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831ea400
	ctx.lr = 0x83A79858;
	sub_831EA400(ctx, base);
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-4024
	ctx.r4.s64 = ctx.r11.s64 + -4024;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831ea410
	ctx.lr = 0x83A79888;
	sub_831EA410(ctx, base);
loc_83A79888:
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

__attribute__((alias("__imp__sub_83A798A0"))) PPC_WEAK_FUNC(sub_83A798A0);
PPC_FUNC_IMPL(__imp__sub_83A798A0) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A798C0;
	sub_83A75CD8(ctx, base);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x83a798dc
	if (!cr6.eq) goto loc_83A798DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// b 0x83a79964
	goto loc_83A79964;
loc_83A798DC:
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x83a798ec
	if (!cr6.eq) goto loc_83A798EC;
	// lfs f3,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// b 0x83a798f0
	goto loc_83A798F0;
loc_83A798EC:
	// lfs f3,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
loc_83A798F0:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f2,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83a79458
	ctx.lr = 0x83A79900;
	sub_83A79458(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83a79538
	ctx.lr = 0x83A7990C;
	sub_83A79538(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bgt cr6,0x83a79918
	if (cr6.gt) goto loc_83A79918;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_83A79918:
	// stfs f31,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83a78f60
	ctx.lr = 0x83A79928;
	sub_83A78F60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a79964
	if (!cr0.eq) goto loc_83A79964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83a79008
	ctx.lr = 0x83A7993C;
	sub_83A79008(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a79964
	if (!cr0.eq) goto loc_83A79964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83a79190
	ctx.lr = 0x83A79950;
	sub_83A79190(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a79964
	if (!cr0.eq) goto loc_83A79964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83a792e8
	ctx.lr = 0x83A79964;
	sub_83A792E8(ctx, base);
loc_83A79964:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A7996C;
	sub_83A75D58(ctx, base);
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

__attribute__((alias("__imp__sub_83A79984"))) PPC_WEAK_FUNC(sub_83A79984);
PPC_FUNC_IMPL(__imp__sub_83A79984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A79988"))) PPC_WEAK_FUNC(sub_83A79988);
PPC_FUNC_IMPL(__imp__sub_83A79988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A79990;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31739
	ctx.r29.s64 = -2080047104;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r29,26328
	ctx.r28.s64 = ctx.r29.s64 + 26328;
	// lwz r3,-4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// bl 0x83a7e068
	ctx.lr = 0x83A799B0;
	sub_83A7E068(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A799C4;
	sub_831CE980(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lfs f0,26328(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 26328);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a799dc
	if (cr6.eq) goto loc_83A799DC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x83a799e0
	goto loc_83A799E0;
loc_83A799DC:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
loc_83A799E0:
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a799f4
	if (cr6.eq) goto loc_83A799F4;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// b 0x83a799f8
	goto loc_83A799F8;
loc_83A799F4:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_83A799F8:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,-18580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18580);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fadds f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x83a79458
	ctx.lr = 0x83A79A28;
	sub_83A79458(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A79A34"))) PPC_WEAK_FUNC(sub_83A79A34);
PPC_FUNC_IMPL(__imp__sub_83A79A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A79A38"))) PPC_WEAK_FUNC(sub_83A79A38);
PPC_FUNC_IMPL(__imp__sub_83A79A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A79A40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31739
	ctx.r27.s64 = -2080047104;
	// lwz r11,26320(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26320);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a79aa4
	if (cr6.eq) goto loc_83A79AA4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a79a9c
	if (!cr6.eq) goto loc_83A79A9C;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,20416
	ctx.r28.s64 = ctx.r11.s64 + 20416;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_83A79A6C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a79a84
	if (cr6.eq) goto loc_83A79A84;
	// bl 0x83a75c60
	ctx.lr = 0x83A79A80;
	sub_83A75C60(ctx, base);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
loc_83A79A84:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r11,r28,32
	ctx.r11.s64 = ctx.r28.s64 + 32;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a79a6c
	if (cr6.lt) goto loc_83A79A6C;
	// lwz r11,26320(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26320);
loc_83A79A9C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,26320(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26320, ctx.r11.u32);
loc_83A79AA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A79AAC"))) PPC_WEAK_FUNC(sub_83A79AAC);
PPC_FUNC_IMPL(__imp__sub_83A79AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A79AB0"))) PPC_WEAK_FUNC(sub_83A79AB0);
PPC_FUNC_IMPL(__imp__sub_83A79AB0) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r30,r11,20416
	ctx.r30.s64 = ctx.r11.s64 + 20416;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_83A79AD0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a798a0
	ctx.lr = 0x83A79AD8;
	sub_83A798A0(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a79ad0
	if (cr6.lt) goto loc_83A79AD0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A79B00"))) PPC_WEAK_FUNC(sub_83A79B00);
PPC_FUNC_IMPL(__imp__sub_83A79B00) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A79B30;
	sub_83A75CD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a79748
	ctx.lr = 0x83A79B3C;
	sub_83A79748(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A79B48;
	sub_83A75D58(ctx, base);
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

__attribute__((alias("__imp__sub_83A79B64"))) PPC_WEAK_FUNC(sub_83A79B64);
PPC_FUNC_IMPL(__imp__sub_83A79B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A79B68"))) PPC_WEAK_FUNC(sub_83A79B68);
PPC_FUNC_IMPL(__imp__sub_83A79B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A79B70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A79B90;
	sub_83A75CD8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x83a79ba4
	if (!cr6.eq) goto loc_83A79BA4;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_83A79BA4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A79BC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a79c14
	if (!cr6.eq) goto loc_83A79C14;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bne cr6,0x83a79c58
	if (!cr6.eq) goto loc_83A79C58;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// b 0x83a79c58
	goto loc_83A79C58;
loc_83A79C14:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a79c58
	if (cr0.eq) goto loc_83A79C58;
loc_83A79C1C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83a79c34
	if (cr6.eq) goto loc_83A79C34;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83a79c1c
	if (!cr0.eq) goto loc_83A79C1C;
loc_83A79C34:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a79c58
	if (cr6.eq) goto loc_83A79C58;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83a79c58
	if (!cr6.eq) goto loc_83A79C58;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_83A79C58:
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A79C70;
	sub_83A75D58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A79C78"))) PPC_WEAK_FUNC(sub_83A79C78);
PPC_FUNC_IMPL(__imp__sub_83A79C78) {
	PPC_FUNC_PROLOGUE();
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A79CB4;
	sub_83A75CD8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwa r10,48(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 48));
	// lfs f13,340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// fdivs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 / ctx.f12.f64));
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fdivs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x83a79d54
	if (!cr6.lt) goto loc_83A79D54;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-3872
	ctx.r4.s64 = ctx.r11.s64 + -3872;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// bl 0x831ea400
	ctx.lr = 0x83A79D4C;
	sub_831EA400(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83a79d58
	goto loc_83A79D58;
loc_83A79D54:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83A79D58:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A79D60;
	sub_83A75D58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A79D84"))) PPC_WEAK_FUNC(sub_83A79D84);
PPC_FUNC_IMPL(__imp__sub_83A79D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A79D88"))) PPC_WEAK_FUNC(sub_83A79D88);
PPC_FUNC_IMPL(__imp__sub_83A79D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A79D90;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b68
	ctx.lr = 0x83A79DAC;
	sub_83A77B68(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A79DBC;
	sub_83A77B78(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A79DCC;
	sub_831CE980(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,26328
	ctx.r11.s64 = ctx.r11.s64 + 26328;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a79df8
	if (cr6.eq) goto loc_83A79DF8;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83a79dfc
	goto loc_83A79DFC;
loc_83A79DF8:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
loc_83A79DFC:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,-18580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18580);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// bl 0x83a77b78
	ctx.lr = 0x83A79E80;
	sub_83A77B78(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a75be8
	ctx.lr = 0x83A79E88;
	sub_83A75BE8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a79ebc
	if (!cr0.eq) goto loc_83A79EBC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-4068
	ctx.r4.s64 = ctx.r11.s64 + -4068;
	// bl 0x831ea3f0
	ctx.lr = 0x83A79EA0;
	sub_831EA3F0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a79eb4
	if (cr6.eq) goto loc_83A79EB4;
	// bl 0x83a75c60
	ctx.lr = 0x83A79EB0;
	sub_83A75C60(ctx, base);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_83A79EB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a79ec4
	goto loc_83A79EC4;
loc_83A79EBC:
	// stfs f31,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A79EC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A79ED0"))) PPC_WEAK_FUNC(sub_83A79ED0);
PPC_FUNC_IMPL(__imp__sub_83A79ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A79ED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31739
	ctx.r28.s64 = -2080047104;
	// lwz r11,26320(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26320);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83a79f2c
	if (cr6.gt) goto loc_83A79F2C;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,20416
	ctx.r29.s64 = ctx.r11.s64 + 20416;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83A79EFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a7e068
	ctx.lr = 0x83A79F04;
	sub_83A7E068(ctx, base);
	// li r5,156
	ctx.r5.s64 = 156;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a79d88
	ctx.lr = 0x83A79F10;
	sub_83A79D88(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,32
	ctx.r11.s64 = ctx.r29.s64 + 32;
	// addi r30,r30,156
	ctx.r30.s64 = ctx.r30.s64 + 156;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a79efc
	if (cr6.lt) goto loc_83A79EFC;
	// lwz r11,26320(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26320);
loc_83A79F2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,26320(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26320, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A79F40"))) PPC_WEAK_FUNC(sub_83A79F40);
PPC_FUNC_IMPL(__imp__sub_83A79F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A79F48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a79f7c
	if (!cr6.gt) goto loc_83A79F7C;
loc_83A79F74:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a79fac
	goto loc_83A79FAC;
loc_83A79F7C:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a789f8
	ctx.lr = 0x83A79F8C;
	sub_83A789F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83a79f74
	if (cr0.eq) goto loc_83A79F74;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A79FA4;
	sub_831CDCF0(ctx, base);
	// stwx r29,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A79FAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A79FB4"))) PPC_WEAK_FUNC(sub_83A79FB4);
PPC_FUNC_IMPL(__imp__sub_83A79FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A79FB8"))) PPC_WEAK_FUNC(sub_83A79FB8);
PPC_FUNC_IMPL(__imp__sub_83A79FB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// b 0x83a78a48
	sub_83A78A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A79FC8"))) PPC_WEAK_FUNC(sub_83A79FC8);
PPC_FUNC_IMPL(__imp__sub_83A79FC8) {
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
	// bl 0x83a788c8
	ctx.lr = 0x83A79FD8;
	sub_83A788C8(ctx, base);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A79FEC"))) PPC_WEAK_FUNC(sub_83A79FEC);
PPC_FUNC_IMPL(__imp__sub_83A79FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A79FF0"))) PPC_WEAK_FUNC(sub_83A79FF0);
PPC_FUNC_IMPL(__imp__sub_83A79FF0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x83a79f40
	sub_83A79F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7A000"))) PPC_WEAK_FUNC(sub_83A7A000);
PPC_FUNC_IMPL(__imp__sub_83A7A000) {
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
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A7A020;
	sub_831CDCF0(ctx, base);
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

__attribute__((alias("__imp__sub_83A7A038"))) PPC_WEAK_FUNC(sub_83A7A038);
PPC_FUNC_IMPL(__imp__sub_83A7A038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a7a074
	if (!cr6.eq) goto loc_83A7A074;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_83A7A074:
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A090"))) PPC_WEAK_FUNC(sub_83A7A090);
PPC_FUNC_IMPL(__imp__sub_83A7A090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,11(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r4,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r4.u32);
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A0D8"))) PPC_WEAK_FUNC(sub_83A7A0D8);
PPC_FUNC_IMPL(__imp__sub_83A7A0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a7a0f4
	if (cr6.eq) goto loc_83A7A0F4;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// b 0x83a7a0fc
	goto loc_83A7A0FC;
loc_83A7A0F4:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
loc_83A7A0FC:
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// stb r4,11(r5)
	PPC_STORE_U8(ctx.r5.u32 + 11, ctx.r4.u8);
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A7A134"))) PPC_WEAK_FUNC(sub_83A7A134);
PPC_FUNC_IMPL(__imp__sub_83A7A134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A138"))) PPC_WEAK_FUNC(sub_83A7A138);
PPC_FUNC_IMPL(__imp__sub_83A7A138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a7a150
	goto loc_83A7A150;
loc_83A7A148:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83A7A150:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a7a148
	if (!cr6.eq) goto loc_83A7A148;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A15C"))) PPC_WEAK_FUNC(sub_83A7A15C);
PPC_FUNC_IMPL(__imp__sub_83A7A15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A160"))) PPC_WEAK_FUNC(sub_83A7A160);
PPC_FUNC_IMPL(__imp__sub_83A7A160) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A170"))) PPC_WEAK_FUNC(sub_83A7A170);
PPC_FUNC_IMPL(__imp__sub_83A7A170) {
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
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A7A190;
	sub_831CDCF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83A7A1B0"))) PPC_WEAK_FUNC(sub_83A7A1B0);
PPC_FUNC_IMPL(__imp__sub_83A7A1B0) {
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
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A7A1D0;
	sub_831CDCF0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83A7A1F0"))) PPC_WEAK_FUNC(sub_83A7A1F0);
PPC_FUNC_IMPL(__imp__sub_83A7A1F0) {
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
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A7A210;
	sub_831CDCF0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83A7A230"))) PPC_WEAK_FUNC(sub_83A7A230);
PPC_FUNC_IMPL(__imp__sub_83A7A230) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A23C"))) PPC_WEAK_FUNC(sub_83A7A23C);
PPC_FUNC_IMPL(__imp__sub_83A7A23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A240"))) PPC_WEAK_FUNC(sub_83A7A240);
PPC_FUNC_IMPL(__imp__sub_83A7A240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf. r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x83a7a28c
	if (!cr0.gt) goto loc_83A7A28C;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a7a284
	if (cr0.eq) goto loc_83A7A284;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
loc_83A7A268:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// lbz r7,9(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x83a7a268
	if (cr6.lt) goto loc_83A7A268;
loc_83A7A284:
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
loc_83A7A28C:
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A29C"))) PPC_WEAK_FUNC(sub_83A7A29C);
PPC_FUNC_IMPL(__imp__sub_83A7A29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A2A0"))) PPC_WEAK_FUNC(sub_83A7A2A0);
PPC_FUNC_IMPL(__imp__sub_83A7A2A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf. r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x83a7a2e0
	if (!cr0.gt) goto loc_83A7A2E0;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a7a2e0
	if (cr0.eq) goto loc_83A7A2E0;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
loc_83A7A2C4:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lbz r8,9(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x83a7a2c4
	if (cr6.lt) goto loc_83A7A2C4;
loc_83A7A2E0:
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A2EC"))) PPC_WEAK_FUNC(sub_83A7A2EC);
PPC_FUNC_IMPL(__imp__sub_83A7A2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A2F0"))) PPC_WEAK_FUNC(sub_83A7A2F0);
PPC_FUNC_IMPL(__imp__sub_83A7A2F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x83a7a300
	if (!cr6.gt) goto loc_83A7A300;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_83A7A300:
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
loc_83A7A31C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83a7a31c
	if (cr6.lt) goto loc_83A7A31C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A33C"))) PPC_WEAK_FUNC(sub_83A7A33C);
PPC_FUNC_IMPL(__imp__sub_83A7A33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A340"))) PPC_WEAK_FUNC(sub_83A7A340);
PPC_FUNC_IMPL(__imp__sub_83A7A340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A7A348;
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
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// blt cr6,0x83a7a388
	if (cr6.lt) goto loc_83A7A388;
	// beq cr6,0x83a7a3b8
	if (cr6.eq) goto loc_83A7A3B8;
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// blt cr6,0x83a7a3b0
	if (cr6.lt) goto loc_83A7A3B0;
	// beq cr6,0x83a7a3a8
	if (cr6.eq) goto loc_83A7A3A8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-3784
	ctx.r4.s64 = ctx.r11.s64 + -3784;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A7A388;
	sub_831EA418(ctx, base);
loc_83A7A388:
	// li r7,0
	ctx.r7.s64 = 0;
loc_83A7A38C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a789f8
	ctx.lr = 0x83A7A3A0;
	sub_83A789F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A7A3A8:
	// li r7,3
	ctx.r7.s64 = 3;
	// b 0x83a7a38c
	goto loc_83A7A38C;
loc_83A7A3B0:
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x83a7a38c
	goto loc_83A7A38C;
loc_83A7A3B8:
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x83a7a38c
	goto loc_83A7A38C;
}

__attribute__((alias("__imp__sub_83A7A3C0"))) PPC_WEAK_FUNC(sub_83A7A3C0);
PPC_FUNC_IMPL(__imp__sub_83A7A3C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a78a48
	sub_83A78A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7A3C4"))) PPC_WEAK_FUNC(sub_83A7A3C4);
PPC_FUNC_IMPL(__imp__sub_83A7A3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A3C8"))) PPC_WEAK_FUNC(sub_83A7A3C8);
PPC_FUNC_IMPL(__imp__sub_83A7A3C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A7A3D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x83a7a40c
	if (cr6.lt) goto loc_83A7A40C;
	// beq cr6,0x83a7a454
	if (cr6.eq) goto loc_83A7A454;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x83a7a44c
	if (cr6.lt) goto loc_83A7A44C;
	// beq cr6,0x83a7a444
	if (cr6.eq) goto loc_83A7A444;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-3772
	ctx.r4.s64 = ctx.r11.s64 + -3772;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A7A40C;
	sub_831EA418(ctx, base);
loc_83A7A40C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83A7A410:
	// lis r11,-31832
	ctx.r11.s64 = -2086141952;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lis r10,-31832
	ctx.r10.s64 = -2086141952;
	// addi r11,r11,-23744
	ctx.r11.s64 = ctx.r11.s64 + -23744;
	// addi r10,r10,-23616
	ctx.r10.s64 = ctx.r10.s64 + -23616;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77880
	ctx.lr = 0x83A7A43C;
	sub_83A77880(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A7A444:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x83a7a410
	goto loc_83A7A410;
loc_83A7A44C:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x83a7a410
	goto loc_83A7A410;
loc_83A7A454:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83a7a410
	goto loc_83A7A410;
}

__attribute__((alias("__imp__sub_83A7A45C"))) PPC_WEAK_FUNC(sub_83A7A45C);
PPC_FUNC_IMPL(__imp__sub_83A7A45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A460"))) PPC_WEAK_FUNC(sub_83A7A460);
PPC_FUNC_IMPL(__imp__sub_83A7A460) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83a7a3c8
	sub_83A7A3C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7A470"))) PPC_WEAK_FUNC(sub_83A7A470);
PPC_FUNC_IMPL(__imp__sub_83A7A470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bge cr6,0x83a7a48c
	if (!cr6.lt) goto loc_83A7A48C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x83a7a4e4
	goto loc_83A7A4E4;
loc_83A7A48C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
loc_83A7A4E4:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A4EC"))) PPC_WEAK_FUNC(sub_83A7A4EC);
PPC_FUNC_IMPL(__imp__sub_83A7A4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A4F0"))) PPC_WEAK_FUNC(sub_83A7A4F0);
PPC_FUNC_IMPL(__imp__sub_83A7A4F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x83a7a504
	if (cr6.lt) goto loc_83A7A504;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
loc_83A7A504:
	// clrlwi. r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a7a678
	if (cr0.eq) goto loc_83A7A678;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// blt cr6,0x83a7a678
	if (cr6.lt) goto loc_83A7A678;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r6,3(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lbz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r10,8(r5)
	PPC_STORE_U8(ctx.r5.u32 + 8, ctx.r10.u8);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r10,9(r5)
	PPC_STORE_U8(ctx.r5.u32 + 9, ctx.r10.u8);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,10(r5)
	PPC_STORE_U16(ctx.r5.u32 + 10, ctx.r10.u16);
	// lbzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r10,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r10.u8);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r10,13(r5)
	PPC_STORE_U8(ctx.r5.u32 + 13, ctx.r10.u8);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r10,14(r5)
	PPC_STORE_U8(ctx.r5.u32 + 14, ctx.r10.u8);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// stb r10,15(r5)
	PPC_STORE_U8(ctx.r5.u32 + 15, ctx.r10.u8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stb r10,16(r5)
	PPC_STORE_U8(ctx.r5.u32 + 16, ctx.r10.u8);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r10.u32);
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r11.u32);
	// blr 
	return;
loc_83A7A678:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A680"))) PPC_WEAK_FUNC(sub_83A7A680);
PPC_FUNC_IMPL(__imp__sub_83A7A680) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a7a470
	ctx.lr = 0x83A7A6B0;
	sub_83A7A470(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a7a6c0
	if (!cr0.eq) goto loc_83A7A6C0;
loc_83A7A6B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a7a6fc
	goto loc_83A7A6FC;
loc_83A7A6C0:
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x83a7a6b8
	if (cr6.lt) goto loc_83A7A6B8;
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// lbz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r9,11(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83A7A6FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A714"))) PPC_WEAK_FUNC(sub_83A7A714);
PPC_FUNC_IMPL(__imp__sub_83A7A714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A718"))) PPC_WEAK_FUNC(sub_83A7A718);
PPC_FUNC_IMPL(__imp__sub_83A7A718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// addi r11,r11,-3688
	ctx.r11.s64 = ctx.r11.s64 + -3688;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,26336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A730"))) PPC_WEAK_FUNC(sub_83A7A730);
PPC_FUNC_IMPL(__imp__sub_83A7A730) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a75be8
	sub_83A75BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7A734"))) PPC_WEAK_FUNC(sub_83A7A734);
PPC_FUNC_IMPL(__imp__sub_83A7A734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A738"))) PPC_WEAK_FUNC(sub_83A7A738);
PPC_FUNC_IMPL(__imp__sub_83A7A738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,26344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26344);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a7a758
	if (!cr6.eq) goto loc_83A7A758;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// lis r8,-31739
	ctx.r8.s64 = -2080047104;
	// addi r9,r9,-3504
	ctx.r9.s64 = ctx.r9.s64 + -3504;
	// stw r9,26340(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26340, ctx.r9.u32);
loc_83A7A758:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26344, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A764"))) PPC_WEAK_FUNC(sub_83A7A764);
PPC_FUNC_IMPL(__imp__sub_83A7A764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A768"))) PPC_WEAK_FUNC(sub_83A7A768);
PPC_FUNC_IMPL(__imp__sub_83A7A768) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,26344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26344);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,26344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26344, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A77C"))) PPC_WEAK_FUNC(sub_83A7A77C);
PPC_FUNC_IMPL(__imp__sub_83A7A77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A780"))) PPC_WEAK_FUNC(sub_83A7A780);
PPC_FUNC_IMPL(__imp__sub_83A7A780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r31,128
	ctx.r31.s64 = 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7b140
	ctx.lr = 0x83A7A7B8;
	sub_83A7B140(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83a7b140
	ctx.lr = 0x83A7A7D4;
	sub_83A7B140(ctx, base);
	// addi r10,r3,7
	ctx.r10.s64 = ctx.r3.s64 + 7;
	// mulli r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 * 12;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addi r9,r11,19
	ctx.r9.s64 = ctx.r11.s64 + 19;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
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

__attribute__((alias("__imp__sub_83A7A818"))) PPC_WEAK_FUNC(sub_83A7A818);
PPC_FUNC_IMPL(__imp__sub_83A7A818) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7a88c
	if (cr6.eq) goto loc_83A7A88C;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a7a858
	if (cr6.eq) goto loc_83A7A858;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a7a858
	if (cr6.eq) goto loc_83A7A858;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A7A858;
	sub_83A78A48(ctx, base);
loc_83A7A858:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7a868
	if (cr6.eq) goto loc_83A7A868;
	// bl 0x83a7bd40
	ctx.lr = 0x83A7A868;
	sub_83A7BD40(ctx, base);
loc_83A7A868:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7a878
	if (cr6.eq) goto loc_83A7A878;
	// bl 0x83a7bd40
	ctx.lr = 0x83A7A878;
	sub_83A7BD40(ctx, base);
loc_83A7A878:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a7a88c
	if (cr6.eq) goto loc_83A7A88C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A7A88C;
	sub_83A78A48(ctx, base);
loc_83A7A88C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A8A4"))) PPC_WEAK_FUNC(sub_83A7A8A4);
PPC_FUNC_IMPL(__imp__sub_83A7A8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A8A8"))) PPC_WEAK_FUNC(sub_83A7A8A8);
PPC_FUNC_IMPL(__imp__sub_83A7A8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A8BC"))) PPC_WEAK_FUNC(sub_83A7A8BC);
PPC_FUNC_IMPL(__imp__sub_83A7A8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A8C0"))) PPC_WEAK_FUNC(sub_83A7A8C0);
PPC_FUNC_IMPL(__imp__sub_83A7A8C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A8D4"))) PPC_WEAK_FUNC(sub_83A7A8D4);
PPC_FUNC_IMPL(__imp__sub_83A7A8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A8D8"))) PPC_WEAK_FUNC(sub_83A7A8D8);
PPC_FUNC_IMPL(__imp__sub_83A7A8D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A7A8E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A7A8FC;
	sub_83A7BDA0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a7a940
	if (cr0.eq) goto loc_83A7A940;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
loc_83A7A90C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A7A920;
	sub_83A7BD70(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stdu r11,8(r29)
	ea = 8 + ctx.r29.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r29.u32 = ea;
	// bl 0x83a7bda0
	ctx.lr = 0x83A7A938;
	sub_83A7BDA0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a7a90c
	if (!cr0.eq) goto loc_83A7A90C;
loc_83A7A940:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83a7a978
	if (!cr6.gt) goto loc_83A7A978;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83A7A958:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x83a7bd80
	ctx.lr = 0x83A7A970;
	sub_83A7BD80(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x83a7a958
	if (cr6.gt) goto loc_83A7A958;
loc_83A7A978:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7A980"))) PPC_WEAK_FUNC(sub_83A7A980);
PPC_FUNC_IMPL(__imp__sub_83A7A980) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A988"))) PPC_WEAK_FUNC(sub_83A7A988);
PPC_FUNC_IMPL(__imp__sub_83A7A988) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A9B0"))) PPC_WEAK_FUNC(sub_83A7A9B0);
PPC_FUNC_IMPL(__imp__sub_83A7A9B0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A9B8"))) PPC_WEAK_FUNC(sub_83A7A9B8);
PPC_FUNC_IMPL(__imp__sub_83A7A9B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7A9C4"))) PPC_WEAK_FUNC(sub_83A7A9C4);
PPC_FUNC_IMPL(__imp__sub_83A7A9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7A9C8"))) PPC_WEAK_FUNC(sub_83A7A9C8);
PPC_FUNC_IMPL(__imp__sub_83A7A9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A7A9D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// lwz r29,20(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,24(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A7A9FC;
	sub_83A7BD70(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x83a7aa28
	if (!cr6.gt) goto loc_83A7AA28;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83A7AA10:
	// lbzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83a7aa50
	if (!cr0.eq) goto loc_83A7AA50;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a7aa10
	if (cr6.lt) goto loc_83A7AA10;
loc_83A7AA28:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A7AA38;
	sub_83A7BD90(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83A7AA3C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7bd90
	ctx.lr = 0x83A7AA48;
	sub_83A7BD90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A7AA50:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7bdb0
	ctx.lr = 0x83A7AA60;
	sub_83A7BDB0(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A7AA70;
	sub_83A7BD80(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A7AA80;
	sub_83A7BD90(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x83a7aa3c
	goto loc_83A7AA3C;
}

__attribute__((alias("__imp__sub_83A7AA88"))) PPC_WEAK_FUNC(sub_83A7AA88);
PPC_FUNC_IMPL(__imp__sub_83A7AA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A7AA90;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A7AAAC;
	sub_831CDCF0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77b68
	ctx.lr = 0x83A7AABC;
	sub_83A77B68(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a77b78
	ctx.lr = 0x83A7AACC;
	sub_83A77B78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a7aadc
	if (!cr0.eq) goto loc_83A7AADC;
loc_83A7AAD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a7abf4
	goto loc_83A7ABF4;
loc_83A7AADC:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// mulli r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 * 12;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stb r30,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a77b78
	ctx.lr = 0x83A7AB08;
	sub_83A77B78(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne 0x83a7ab20
	if (!cr0.eq) goto loc_83A7AB20;
loc_83A7AB14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7a818
	ctx.lr = 0x83A7AB1C;
	sub_83A7A818(ctx, base);
	// b 0x83a7aad4
	goto loc_83A7AAD4;
loc_83A7AB20:
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r28,128
	ctx.r28.s64 = 128;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x83a7b140
	ctx.lr = 0x83A7AB3C;
	sub_83A7B140(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a77b78
	ctx.lr = 0x83A7AB50;
	sub_83A77B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7b168
	ctx.lr = 0x83A7AB60;
	sub_83A7B168(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a7ab14
	if (cr0.eq) goto loc_83A7AB14;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7b140
	ctx.lr = 0x83A7AB78;
	sub_83A7B140(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a77b78
	ctx.lr = 0x83A7AB8C;
	sub_83A77B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7b168
	ctx.lr = 0x83A7AB9C;
	sub_83A7B168(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a7ab14
	if (cr0.eq) goto loc_83A7AB14;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,8
	ctx.r5.s64 = 8;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x83A7ABE8;
	sub_831CDCF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x83A7ABF0;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A7ABF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7ABFC"))) PPC_WEAK_FUNC(sub_83A7ABFC);
PPC_FUNC_IMPL(__imp__sub_83A7ABFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7AC00"))) PPC_WEAK_FUNC(sub_83A7AC00);
PPC_FUNC_IMPL(__imp__sub_83A7AC00) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r30.u8);
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// b 0x83a7ac4c
	goto loc_83A7AC4C;
loc_83A7AC28:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7bd70
	ctx.lr = 0x83A7AC3C;
	sub_83A7BD70(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83a7bd90
	ctx.lr = 0x83A7AC4C;
	sub_83A7BD90(ctx, base);
loc_83A7AC4C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83a7bda0
	ctx.lr = 0x83A7AC58;
	sub_83A7BDA0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a7ac28
	if (!cr0.eq) goto loc_83A7AC28;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// bl 0x831cdcf0
	ctx.lr = 0x83A7AC78;
	sub_831CDCF0(ctx, base);
	// stb r30,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r30.u8);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83a7bd60
	ctx.lr = 0x83A7AC84;
	sub_83A7BD60(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a7bd60
	ctx.lr = 0x83A7AC8C;
	sub_83A7BD60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// stb r8,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r8.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7ACE0"))) PPC_WEAK_FUNC(sub_83A7ACE0);
PPC_FUNC_IMPL(__imp__sub_83A7ACE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A7ACE8;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r25,20(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lwz r27,16(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r24,8(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bne cr6,0x83a7ad4c
	if (!cr6.eq) goto loc_83A7AD4C;
	// mulli r31,r24,12
	ctx.r31.s64 = ctx.r24.s64 * 12;
	// b 0x83a7ad28
	goto loc_83A7AD28;
loc_83A7AD18:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r31,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7bd90
	ctx.lr = 0x83A7AD28;
	sub_83A7BD90(ctx, base);
loc_83A7AD28:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r31,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7bd70
	ctx.lr = 0x83A7AD3C;
	sub_83A7BD70(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a7ad18
	if (!cr6.eq) goto loc_83A7AD18;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_83A7AD4C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A7AD60;
	sub_83A7BD70(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x83a7ae54
	goto loc_83A7AE54;
loc_83A7AD68:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// ble cr6,0x83a7ae38
	if (!cr6.gt) goto loc_83A7AE38;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_83A7AD78:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7adb4
	if (cr6.eq) goto loc_83A7ADB4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7bd70
	ctx.lr = 0x83A7AD94;
	sub_83A7BD70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83a7adc8
	if (cr6.eq) goto loc_83A7ADC8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7bd80
	ctx.lr = 0x83A7ADB4;
	sub_83A7BD80(ctx, base);
loc_83A7ADB4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r30,r24
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, xer);
	// blt cr6,0x83a7ad78
	if (cr6.lt) goto loc_83A7AD78;
	// b 0x83a7ae38
	goto loc_83A7AE38;
loc_83A7ADC8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bge cr6,0x83a7addc
	if (!cr6.lt) goto loc_83A7ADDC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83A7ADDC:
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7bdb0
	ctx.lr = 0x83A7ADF0;
	sub_83A7BDB0(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a7bdb0
	ctx.lr = 0x83A7AE04;
	sub_83A7BDB0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A7AE14;
	sub_83A7BD90(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A7AE24;
	sub_83A7BD80(ctx, base);
	// mulli r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 * 12;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7bd80
	ctx.lr = 0x83A7AE38;
	sub_83A7BD80(ctx, base);
loc_83A7AE38:
	// cmpw cr6,r30,r24
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// beq cr6,0x83a7ae74
	if (cr6.eq) goto loc_83A7AE74;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A7AE54;
	sub_83A7BD70(ctx, base);
loc_83A7AE54:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a7ad68
	if (!cr6.eq) goto loc_83A7AD68;
	// lbz r11,5(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 5);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83a7ae7c
	if (!cr6.eq) goto loc_83A7AE7C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83a7b084
	goto loc_83A7B084;
loc_83A7AE74:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7bd80
	ctx.lr = 0x83A7AE7C;
	sub_83A7BD80(ctx, base);
loc_83A7AE7C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A7AE88;
	sub_83A7BDA0(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// b 0x83a7b050
	goto loc_83A7B050;
loc_83A7AE94:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r31,r4,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r4.s64;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a7aec4
	if (!cr0.eq) goto loc_83A7AEC4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A7AEB8;
	sub_83A7BD80(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a7a9c8
	ctx.lr = 0x83A7AEC0;
	sub_83A7A9C8(ctx, base);
	// b 0x83a7b044
	goto loc_83A7B044;
loc_83A7AEC4:
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A7AED4;
	sub_83A7A4F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a7b0a8
	if (cr0.eq) goto loc_83A7B0A8;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x83a7af3c
	if (!cr6.lt) goto loc_83A7AF3C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ble cr6,0x83a7b0b0
	if (!cr6.gt) goto loc_83A7B0B0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A7AF0C;
	sub_83A7BD70(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x83a7b09c
	if (cr6.lt) goto loc_83A7B09C;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// b 0x83a7af44
	goto loc_83A7AF44;
loc_83A7AF3C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_83A7AF44:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// bl 0x83a7bdb0
	ctx.lr = 0x83A7AF4C;
	sub_83A7BDB0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A7AF5C;
	sub_83A7BD80(ctx, base);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// ble cr6,0x83a7b03c
	if (!cr6.gt) goto loc_83A7B03C;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
loc_83A7AF6C:
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a7afa8
	if (cr6.eq) goto loc_83A7AFA8;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a7af90
	if (cr6.eq) goto loc_83A7AF90;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83a7afa8
	if (!cr6.eq) goto loc_83A7AFA8;
loc_83A7AF90:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x83a7afbc
	if (cr6.eq) goto loc_83A7AFBC;
	// lbz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x83a7afbc
	if (cr6.eq) goto loc_83A7AFBC;
loc_83A7AFA8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r30,r24
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, xer);
	// blt cr6,0x83a7af6c
	if (cr6.lt) goto loc_83A7AF6C;
	// b 0x83a7b03c
	goto loc_83A7B03C;
loc_83A7AFBC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a7b2a0
	ctx.lr = 0x83A7AFC4;
	sub_83A7B2A0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x83a7b08c
	if (!cr6.gt) goto loc_83A7B08C;
	// mulli r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 * 12;
	// lwzx r3,r31,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// bl 0x83a7b2a0
	ctx.lr = 0x83A7AFD8;
	sub_83A7B2A0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x83a7b08c
	if (!cr6.gt) goto loc_83A7B08C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r31,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7bd90
	ctx.lr = 0x83A7AFF0;
	sub_83A7BD90(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A7B000;
	sub_83A7BD90(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a7b03c
	if (cr6.eq) goto loc_83A7B03C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwzx r3,r31,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7bd90
	ctx.lr = 0x83A7B024;
	sub_83A7BD90(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A7B034;
	sub_83A7BD90(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
loc_83A7B03C:
	// cmpw cr6,r30,r24
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, xer);
	// beq cr6,0x83a7b08c
	if (cr6.eq) goto loc_83A7B08C;
loc_83A7B044:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A7B050;
	sub_83A7BDA0(ctx, base);
loc_83A7B050:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A7B068;
	sub_83A7BD70(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a7ae94
	if (!cr6.eq) goto loc_83A7AE94;
	// lbz r11,6(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 6);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83a7b0b8
	if (!cr6.eq) goto loc_83A7B0B8;
	// li r11,2
	ctx.r11.s64 = 2;
loc_83A7B084:
	// stb r11,5(r23)
	PPC_STORE_U8(ctx.r23.u32 + 5, ctx.r11.u8);
	// b 0x83a7b0b8
	goto loc_83A7B0B8;
loc_83A7B08C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a7b0a8
	if (cr6.eq) goto loc_83A7B0A8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
loc_83A7B09C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A7B0A8;
	sub_83A7BD80(ctx, base);
loc_83A7B0A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
loc_83A7B0B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7bd80
	ctx.lr = 0x83A7B0B8;
	sub_83A7BD80(ctx, base);
loc_83A7B0B8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7B0C0"))) PPC_WEAK_FUNC(sub_83A7B0C0);
PPC_FUNC_IMPL(__imp__sub_83A7B0C0) {
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
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a7b0f0
	if (cr6.eq) goto loc_83A7B0F0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a7b0f8
	if (!cr6.eq) goto loc_83A7B0F8;
loc_83A7B0F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7ace0
	ctx.lr = 0x83A7B0F8;
	sub_83A7ACE0(ctx, base);
loc_83A7B0F8:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b128
	if (cr6.eq) goto loc_83A7B128;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7bd70
	ctx.lr = 0x83A7B118;
	sub_83A7BD70(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83a7bd80
	ctx.lr = 0x83A7B128;
	sub_83A7BD80(ctx, base);
loc_83A7B128:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7B140"))) PPC_WEAK_FUNC(sub_83A7B140);
PPC_FUNC_IMPL(__imp__sub_83A7B140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a7b154
	if (!cr6.eq) goto loc_83A7B154;
	// li r10,120
	ctx.r10.s64 = 120;
loc_83A7B154:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7B168"))) PPC_WEAK_FUNC(sub_83A7B168);
PPC_FUNC_IMPL(__imp__sub_83A7B168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A7B170;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b68
	ctx.lr = 0x83A7B188;
	sub_83A77B68(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A7B198;
	sub_83A77B78(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A7B1A8;
	sub_831CDCF0(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// addi r11,r11,-15268
	ctx.r11.s64 = ctx.r11.s64 + -15268;
	// addi r10,r10,-3372
	ctx.r10.s64 = ctx.r10.s64 + -3372;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a7b208
	if (!cr6.eq) goto loc_83A7B208;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A7B1E0;
	sub_83A77B78(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a75be8
	ctx.lr = 0x83A7B1E8;
	sub_83A75BE8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a7b20c
	if (!cr0.eq) goto loc_83A7B20C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-3408
	ctx.r4.s64 = ctx.r11.s64 + -3408;
	// bl 0x831ea3f0
	ctx.lr = 0x83A7B200;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a7b298
	goto loc_83A7B298;
loc_83A7B208:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_83A7B20C:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x83a77b78
	ctx.lr = 0x83A7B23C;
	sub_83A77B78(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a7b28c
	if (!cr6.gt) goto loc_83A7B28C;
loc_83A7B254:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A7B26C;
	sub_831CDCF0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a7b254
	if (cr6.lt) goto loc_83A7B254;
loc_83A7B28C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x83A7B294;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A7B298:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7B2A0"))) PPC_WEAK_FUNC(sub_83A7B2A0);
PPC_FUNC_IMPL(__imp__sub_83A7B2A0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b2c8
	if (cr6.eq) goto loc_83A7B2C8;
	// bl 0x83a75cd8
	ctx.lr = 0x83A7B2C8;
	sub_83A75CD8(ctx, base);
loc_83A7B2C8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83a7b2dc
	goto loc_83A7B2DC;
loc_83A7B2D4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_83A7B2DC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a7b2d4
	if (!cr6.eq) goto loc_83A7B2D4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b2f4
	if (cr6.eq) goto loc_83A7B2F4;
	// bl 0x83a75d58
	ctx.lr = 0x83A7B2F4;
	sub_83A75D58(ctx, base);
loc_83A7B2F4:
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

__attribute__((alias("__imp__sub_83A7B310"))) PPC_WEAK_FUNC(sub_83A7B310);
PPC_FUNC_IMPL(__imp__sub_83A7B310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A7B318;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b330
	if (cr6.eq) goto loc_83A7B330;
	// bl 0x83a75cd8
	ctx.lr = 0x83A7B330;
	sub_83A75CD8(ctx, base);
loc_83A7B330:
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
	// li r28,4
	ctx.r28.s64 = 4;
	// b 0x83a7b360
	goto loc_83A7B360;
loc_83A7B33C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A7B354;
	sub_831CDCF0(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r31,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r31.u32);
loc_83A7B360:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a7b33c
	if (!cr6.eq) goto loc_83A7B33C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// bne 0x83a7b360
	if (!cr0.eq) goto loc_83A7B360;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b38c
	if (cr6.eq) goto loc_83A7B38C;
	// bl 0x83a75d58
	ctx.lr = 0x83A7B38C;
	sub_83A75D58(ctx, base);
loc_83A7B38C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7B394"))) PPC_WEAK_FUNC(sub_83A7B394);
PPC_FUNC_IMPL(__imp__sub_83A7B394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7B398"))) PPC_WEAK_FUNC(sub_83A7B398);
PPC_FUNC_IMPL(__imp__sub_83A7B398) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b3c4
	if (cr6.eq) goto loc_83A7B3C4;
	// bl 0x83a75cd8
	ctx.lr = 0x83A7B3C4;
	sub_83A75CD8(ctx, base);
loc_83A7B3C4:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// b 0x83a7b3e4
	goto loc_83A7B3E4;
loc_83A7B3D8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_83A7B3E4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a7b3d8
	if (!cr6.eq) goto loc_83A7B3D8;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b3fc
	if (cr6.eq) goto loc_83A7B3FC;
	// bl 0x83a75d58
	ctx.lr = 0x83A7B3FC;
	sub_83A75D58(ctx, base);
loc_83A7B3FC:
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

__attribute__((alias("__imp__sub_83A7B418"))) PPC_WEAK_FUNC(sub_83A7B418);
PPC_FUNC_IMPL(__imp__sub_83A7B418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A7B420;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b444
	if (cr6.eq) goto loc_83A7B444;
	// bl 0x83a75cd8
	ctx.lr = 0x83A7B444;
	sub_83A75CD8(ctx, base);
loc_83A7B444:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a7b4cc
	if (cr6.eq) goto loc_83A7B4CC;
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// bgt cr6,0x83a7b498
	if (cr6.gt) goto loc_83A7B498;
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A7B488;
	sub_831CDCF0(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// b 0x83a7b4d8
	goto loc_83A7B4D8;
loc_83A7B498:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a7b4cc
	if (!cr6.eq) goto loc_83A7B4CC;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7bdb0
	ctx.lr = 0x83A7B4B8;
	sub_83A7BDB0(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// b 0x83a7b4d8
	goto loc_83A7B4D8;
loc_83A7B4CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83A7B4D8:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b4e8
	if (cr6.eq) goto loc_83A7B4E8;
	// bl 0x83a75d58
	ctx.lr = 0x83A7B4E8;
	sub_83A75D58(ctx, base);
loc_83A7B4E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7B4F0"))) PPC_WEAK_FUNC(sub_83A7B4F0);
PPC_FUNC_IMPL(__imp__sub_83A7B4F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A7B4F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a7b5e8
	if (!cr6.gt) goto loc_83A7B5E8;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a7b5e8
	if (cr6.eq) goto loc_83A7B5E8;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b530
	if (cr6.eq) goto loc_83A7B530;
	// bl 0x83a75cd8
	ctx.lr = 0x83A7B530;
	sub_83A75CD8(ctx, base);
loc_83A7B530:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// b 0x83a7b554
	goto loc_83A7B554;
loc_83A7B548:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83A7B554:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a7b548
	if (!cr6.eq) goto loc_83A7B548;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a7b598
	if (!cr6.eq) goto loc_83A7B598;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a7b598
	if (cr6.eq) goto loc_83A7B598;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83a7b598
	if (!cr6.eq) goto loc_83A7B598;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x83a7b5d8
	goto loc_83A7B5D8;
loc_83A7B598:
	// lwz r31,36(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a7b5d8
	if (cr6.eq) goto loc_83A7B5D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A7B5BC;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a7b5d8
	if (cr6.eq) goto loc_83A7B5D8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_83A7B5D8:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b5e8
	if (cr6.eq) goto loc_83A7B5E8;
	// bl 0x83a75d58
	ctx.lr = 0x83A7B5E8;
	sub_83A75D58(ctx, base);
loc_83A7B5E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7B5F0"))) PPC_WEAK_FUNC(sub_83A7B5F0);
PPC_FUNC_IMPL(__imp__sub_83A7B5F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A7B5F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a7b6d8
	if (!cr6.gt) goto loc_83A7B6D8;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a7b6d8
	if (cr6.eq) goto loc_83A7B6D8;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b630
	if (cr6.eq) goto loc_83A7B630;
	// bl 0x83a75cd8
	ctx.lr = 0x83A7B630;
	sub_83A75CD8(ctx, base);
loc_83A7B630:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// bne cr6,0x83a7b680
	if (!cr6.eq) goto loc_83A7B680;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a7b680
	if (cr6.eq) goto loc_83A7B680;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83a7b680
	if (!cr6.eq) goto loc_83A7B680;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x83a7b6c8
	goto loc_83A7B6C8;
loc_83A7B680:
	// lwz r31,36(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a7b6c8
	if (cr6.eq) goto loc_83A7B6C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A7B6A4;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a7b6c8
	if (cr6.eq) goto loc_83A7B6C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stwx r31,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r31.u32);
loc_83A7B6C8:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b6d8
	if (cr6.eq) goto loc_83A7B6D8;
	// bl 0x83a75d58
	ctx.lr = 0x83A7B6D8;
	sub_83A75D58(ctx, base);
loc_83A7B6D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7B6E0"))) PPC_WEAK_FUNC(sub_83A7B6E0);
PPC_FUNC_IMPL(__imp__sub_83A7B6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,68
	ctx.r8.s64 = 68;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a7b6f4
	if (!cr6.eq) goto loc_83A7B6F4;
	// li r8,140
	ctx.r8.s64 = 140;
loc_83A7B6F4:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7B710"))) PPC_WEAK_FUNC(sub_83A7B710);
PPC_FUNC_IMPL(__imp__sub_83A7B710) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b68
	ctx.lr = 0x83A7B738;
	sub_83A77B68(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A7B748;
	sub_83A77B78(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A7B758;
	sub_831CDCF0(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// addi r11,r11,-15244
	ctx.r11.s64 = ctx.r11.s64 + -15244;
	// addi r10,r10,-3320
	ctx.r10.s64 = ctx.r10.s64 + -3320;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a7b7b4
	if (!cr6.eq) goto loc_83A7B7B4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A7B78C;
	sub_83A77B78(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a75be8
	ctx.lr = 0x83A7B794;
	sub_83A75BE8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a7b7bc
	if (!cr0.eq) goto loc_83A7B7BC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-3360
	ctx.r4.s64 = ctx.r11.s64 + -3360;
	// bl 0x831ea3f0
	ctx.lr = 0x83A7B7AC;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a7b804
	goto loc_83A7B804;
loc_83A7B7B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83A7B7BC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83a77b78
	ctx.lr = 0x83A7B7DC;
	sub_83A77B78(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x83a7bd60
	ctx.lr = 0x83A7B7F8;
	sub_83A7BD60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x83A7B800;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A7B804:
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

__attribute__((alias("__imp__sub_83A7B81C"))) PPC_WEAK_FUNC(sub_83A7B81C);
PPC_FUNC_IMPL(__imp__sub_83A7B81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7B820"))) PPC_WEAK_FUNC(sub_83A7B820);
PPC_FUNC_IMPL(__imp__sub_83A7B820) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b84c
	if (cr6.eq) goto loc_83A7B84C;
	// bl 0x83a75c60
	ctx.lr = 0x83A7B844;
	sub_83A75C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83A7B84C:
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

__attribute__((alias("__imp__sub_83A7B860"))) PPC_WEAK_FUNC(sub_83A7B860);
PPC_FUNC_IMPL(__imp__sub_83A7B860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83a7b870
	if (!cr6.eq) goto loc_83A7B870;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
loc_83A7B870:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83a7b880
	if (!cr6.eq) goto loc_83A7B880;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
loc_83A7B880:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7B888"))) PPC_WEAK_FUNC(sub_83A7B888);
PPC_FUNC_IMPL(__imp__sub_83A7B888) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b8ac
	if (cr6.eq) goto loc_83A7B8AC;
	// bl 0x83a75cd8
	ctx.lr = 0x83A7B8AC;
	sub_83A75CD8(ctx, base);
loc_83A7B8AC:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// beq cr6,0x83a7b8e4
	if (cr6.eq) goto loc_83A7B8E4;
	// bl 0x83a75d58
	ctx.lr = 0x83A7B8E4;
	sub_83A75D58(ctx, base);
loc_83A7B8E4:
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

__attribute__((alias("__imp__sub_83A7B8F8"))) PPC_WEAK_FUNC(sub_83A7B8F8);
PPC_FUNC_IMPL(__imp__sub_83A7B8F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A7B900;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7b924
	if (cr6.eq) goto loc_83A7B924;
	// bl 0x83a75cd8
	ctx.lr = 0x83A7B924;
	sub_83A75CD8(ctx, base);
loc_83A7B924:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83a7b9b8
	if (!cr6.eq) goto loc_83A7B9B8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a7b950
	if (cr6.lt) goto loc_83A7B950;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A7B950:
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// blt cr6,0x83a7b960
	if (cr6.lt) goto loc_83A7B960;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83A7B960:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// divwu r7,r10,r9
	ctx.r7.u32 = PPCDivide(ctx.r10.u32, ctx.r9.u32);
	// twllei r9,0
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x83a7ba58
	goto loc_83A7BA58;
loc_83A7B9B8:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x83a7ba4c
	if (!cr6.eq) goto loc_83A7BA4C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a7b9e4
	if (cr6.lt) goto loc_83A7B9E4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A7B9E4:
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// blt cr6,0x83a7b9f4
	if (cr6.lt) goto loc_83A7B9F4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83A7B9F4:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// twllei r9,0
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// divwu r7,r10,r9
	ctx.r7.u32 = PPCDivide(ctx.r10.u32, ctx.r9.u32);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// b 0x83a7ba58
	goto loc_83A7BA58;
loc_83A7BA4C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83A7BA58:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7ba68
	if (cr6.eq) goto loc_83A7BA68;
	// bl 0x83a75d58
	ctx.lr = 0x83A7BA68;
	sub_83A75D58(ctx, base);
loc_83A7BA68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7BA70"))) PPC_WEAK_FUNC(sub_83A7BA70);
PPC_FUNC_IMPL(__imp__sub_83A7BA70) {
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
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a7bbb0
	if (cr6.eq) goto loc_83A7BBB0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83a7bbb0
	if (cr6.eq) goto loc_83A7BBB0;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83a7bb58
	if (!cr6.eq) goto loc_83A7BB58;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83a7bae4
	if (!cr6.lt) goto loc_83A7BAE4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a7bad0
	if (cr6.lt) goto loc_83A7BAD0;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_83A7BAD0:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A7BAE4;
	sub_831CE980(ctx, base);
loc_83A7BAE4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a7bb24
	if (!cr6.gt) goto loc_83A7BB24;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a7bb14
	if (cr6.lt) goto loc_83A7BB14;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A7BB14:
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A7BB24;
	sub_831CE980(ctx, base);
loc_83A7BB24:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7bb34
	if (cr6.eq) goto loc_83A7BB34;
	// bl 0x83a75cd8
	ctx.lr = 0x83A7BB34;
	sub_83A75CD8(ctx, base);
loc_83A7BB34:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x83a7bb90
	goto loc_83A7BB90;
loc_83A7BB58:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83a7bba4
	if (!cr6.eq) goto loc_83A7BBA4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7bb70
	if (cr6.eq) goto loc_83A7BB70;
	// bl 0x83a75cd8
	ctx.lr = 0x83A7BB70;
	sub_83A75CD8(ctx, base);
loc_83A7BB70:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83A7BB90:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7bbb0
	if (cr6.eq) goto loc_83A7BBB0;
	// bl 0x83a75d58
	ctx.lr = 0x83A7BBA0;
	sub_83A75D58(ctx, base);
	// b 0x83a7bbb0
	goto loc_83A7BBB0;
loc_83A7BBA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83A7BBB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7BBC8"))) PPC_WEAK_FUNC(sub_83A7BBC8);
PPC_FUNC_IMPL(__imp__sub_83A7BBC8) {
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
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a7bd28
	if (!cr6.gt) goto loc_83A7BD28;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a7bd28
	if (cr6.eq) goto loc_83A7BD28;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83a7bc84
	if (!cr6.eq) goto loc_83A7BC84;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7bc14
	if (cr6.eq) goto loc_83A7BC14;
	// bl 0x83a75cd8
	ctx.lr = 0x83A7BC14;
	sub_83A75CD8(ctx, base);
loc_83A7BC14:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// twllei r11,0
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divwu r8,r10,r11
	ctx.r8.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// divwu r7,r9,r11
	ctx.r7.u32 = PPCDivide(ctx.r9.u32, ctx.r11.u32);
	// twllei r11,0
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x83a7bd08
	if (!cr6.eq) goto loc_83A7BD08;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x83a7bd08
	goto loc_83A7BD08;
loc_83A7BC84:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83a7bd1c
	if (!cr6.eq) goto loc_83A7BD1C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7bc9c
	if (cr6.eq) goto loc_83A7BC9C;
	// bl 0x83a75cd8
	ctx.lr = 0x83A7BC9C;
	sub_83A75CD8(ctx, base);
loc_83A7BC9C:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// twllei r11,0
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divwu r8,r10,r11
	ctx.r8.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// divwu r7,r9,r11
	ctx.r7.u32 = PPCDivide(ctx.r9.u32, ctx.r11.u32);
	// twllei r11,0
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x83a7bd08
	if (!cr6.eq) goto loc_83A7BD08;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_83A7BD08:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7bd28
	if (cr6.eq) goto loc_83A7BD28;
	// bl 0x83a75d58
	ctx.lr = 0x83A7BD18;
	sub_83A75D58(ctx, base);
	// b 0x83a7bd28
	goto loc_83A7BD28;
loc_83A7BD1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83A7BD28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7BD40"))) PPC_WEAK_FUNC(sub_83A7BD40);
PPC_FUNC_IMPL(__imp__sub_83A7BD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// addi r11,r11,-3232
	ctx.r11.s64 = ctx.r11.s64 + -3232;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,26348(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26348, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A7BD60"))) PPC_WEAK_FUNC(sub_83A7BD60);
PPC_FUNC_IMPL(__imp__sub_83A7BD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A7BD70"))) PPC_WEAK_FUNC(sub_83A7BD70);
PPC_FUNC_IMPL(__imp__sub_83A7BD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A7BD80"))) PPC_WEAK_FUNC(sub_83A7BD80);
PPC_FUNC_IMPL(__imp__sub_83A7BD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A7BD90"))) PPC_WEAK_FUNC(sub_83A7BD90);
PPC_FUNC_IMPL(__imp__sub_83A7BD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A7BDA0"))) PPC_WEAK_FUNC(sub_83A7BDA0);
PPC_FUNC_IMPL(__imp__sub_83A7BDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A7BDB0"))) PPC_WEAK_FUNC(sub_83A7BDB0);
PPC_FUNC_IMPL(__imp__sub_83A7BDB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x83a7bdd8
	if (!cr6.gt) goto loc_83A7BDD8;
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
loc_83A7BDD8:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// bne 0x83a7bdf4
	if (!cr0.eq) goto loc_83A7BDF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83a7be00
	goto loc_83A7BE00;
loc_83A7BDF4:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_83A7BE00:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7BE08"))) PPC_WEAK_FUNC(sub_83A7BE08);
PPC_FUNC_IMPL(__imp__sub_83A7BE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A7BE24"))) PPC_WEAK_FUNC(sub_83A7BE24);
PPC_FUNC_IMPL(__imp__sub_83A7BE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7BE28"))) PPC_WEAK_FUNC(sub_83A7BE28);
PPC_FUNC_IMPL(__imp__sub_83A7BE28) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a7be50
	if (!cr6.gt) goto loc_83A7BE50;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A7BE50:
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x83a7bdb0
	ctx.lr = 0x83A7BE6C;
	sub_83A7BDB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A7BE88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A7BEA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83A7BEB8"))) PPC_WEAK_FUNC(sub_83A7BEB8);
PPC_FUNC_IMPL(__imp__sub_83A7BEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A7BEC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83a7b6e0
	ctx.lr = 0x83A7BED4;
	sub_83A7B6E0(ctx, base);
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,-3320
	ctx.r5.s64 = ctx.r11.s64 + -3320;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a789f8
	ctx.lr = 0x83A7BEF4;
	sub_83A789F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a7bf18
	if (!cr0.eq) goto loc_83A7BF18;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-3128
	ctx.r4.s64 = ctx.r11.s64 + -3128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A7BF10;
	sub_831EA418(ctx, base);
loc_83A7BF10:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a7bf50
	goto loc_83A7BF50;
loc_83A7BF18:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r5,r28,-8
	ctx.r5.s64 = ctx.r28.s64 + -8;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7b710
	ctx.lr = 0x83A7BF2C;
	sub_83A7B710(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a7bf44
	if (!cr0.eq) goto loc_83A7BF44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A7BF40;
	sub_83A78A48(ctx, base);
	// b 0x83a7bf10
	goto loc_83A7BF10;
loc_83A7BF44:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r11,r11,-15220
	ctx.r11.s64 = ctx.r11.s64 + -15220;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_83A7BF50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7BF58"))) PPC_WEAK_FUNC(sub_83A7BF58);
PPC_FUNC_IMPL(__imp__sub_83A7BF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A7BF60;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83a788c8
	ctx.lr = 0x83A7BF7C;
	sub_83A788C8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83a7b6e0
	ctx.lr = 0x83A7BFA4;
	sub_83A7B6E0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7BFB4"))) PPC_WEAK_FUNC(sub_83A7BFB4);
PPC_FUNC_IMPL(__imp__sub_83A7BFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7BFB8"))) PPC_WEAK_FUNC(sub_83A7BFB8);
PPC_FUNC_IMPL(__imp__sub_83A7BFB8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x83a7beb8
	ctx.lr = 0x83A7BFEC;
	sub_83A7BEB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7BFFC"))) PPC_WEAK_FUNC(sub_83A7BFFC);
PPC_FUNC_IMPL(__imp__sub_83A7BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7C000"))) PPC_WEAK_FUNC(sub_83A7C000);
PPC_FUNC_IMPL(__imp__sub_83A7C000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A7C008;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83a7b140
	ctx.lr = 0x83A7C01C;
	sub_83A7B140(ctx, base);
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,-3372
	ctx.r5.s64 = ctx.r11.s64 + -3372;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a789f8
	ctx.lr = 0x83A7C03C;
	sub_83A789F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a7c060
	if (!cr0.eq) goto loc_83A7C060;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-3116
	ctx.r4.s64 = ctx.r11.s64 + -3116;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A7C058;
	sub_831EA418(ctx, base);
loc_83A7C058:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a7c098
	goto loc_83A7C098;
loc_83A7C060:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r5,r28,-8
	ctx.r5.s64 = ctx.r28.s64 + -8;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7b168
	ctx.lr = 0x83A7C074;
	sub_83A7B168(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a7c08c
	if (!cr0.eq) goto loc_83A7C08C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A7C088;
	sub_83A78A48(ctx, base);
	// b 0x83a7c058
	goto loc_83A7C058;
loc_83A7C08C:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r11,r11,-15196
	ctx.r11.s64 = ctx.r11.s64 + -15196;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_83A7C098:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7C0A0"))) PPC_WEAK_FUNC(sub_83A7C0A0);
PPC_FUNC_IMPL(__imp__sub_83A7C0A0) {
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
	// lwz r30,-8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// addi r31,r3,-8
	ctx.r31.s64 = ctx.r3.s64 + -8;
	// bl 0x83a7b820
	ctx.lr = 0x83A7C0C0;
	sub_83A7B820(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A7C0CC;
	sub_83A78A48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7C0E4"))) PPC_WEAK_FUNC(sub_83A7C0E4);
PPC_FUNC_IMPL(__imp__sub_83A7C0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7C0E8"))) PPC_WEAK_FUNC(sub_83A7C0E8);
PPC_FUNC_IMPL(__imp__sub_83A7C0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A7C0F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83a788c8
	ctx.lr = 0x83A7C108;
	sub_83A788C8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83a7b140
	ctx.lr = 0x83A7C124;
	sub_83A7B140(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7C134"))) PPC_WEAK_FUNC(sub_83A7C134);
PPC_FUNC_IMPL(__imp__sub_83A7C134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7C138"))) PPC_WEAK_FUNC(sub_83A7C138);
PPC_FUNC_IMPL(__imp__sub_83A7C138) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7c000
	ctx.lr = 0x83A7C164;
	sub_83A7C000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7C174"))) PPC_WEAK_FUNC(sub_83A7C174);
PPC_FUNC_IMPL(__imp__sub_83A7C174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7C178"))) PPC_WEAK_FUNC(sub_83A7C178);
PPC_FUNC_IMPL(__imp__sub_83A7C178) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,-15172
	ctx.r10.s64 = ctx.r10.s64 + -15172;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7C190"))) PPC_WEAK_FUNC(sub_83A7C190);
PPC_FUNC_IMPL(__imp__sub_83A7C190) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,26352
	ctx.r9.s64 = ctx.r10.s64 + 26352;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26352, ctx.r11.u32);
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7C1AC"))) PPC_WEAK_FUNC(sub_83A7C1AC);
PPC_FUNC_IMPL(__imp__sub_83A7C1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7C1B0"))) PPC_WEAK_FUNC(sub_83A7C1B0);
PPC_FUNC_IMPL(__imp__sub_83A7C1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83A7C1B8;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,64
	cr6.compare<int32_t>(ctx.r4.s32, 64, xer);
	// blt cr6,0x83a7c5e0
	if (cr6.lt) goto loc_83A7C5E0;
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// stw r23,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r23.u32);
	// lis r11,18499
	ctx.r11.s64 = 1212350464;
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// lbz r9,3(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// ori r11,r11,16640
	ctx.r11.u64 = ctx.r11.u64 | 16640;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r8,r8,24,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x7FFFFFFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a7c5e0
	if (!cr6.eq) goto loc_83A7C5E0;
	// addi r11,r3,6
	ctx.r11.s64 = ctx.r3.s64 + 6;
	// lbz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r10,7(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r8,26221
	ctx.r8.s64 = 1718419456;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// ori r8,r8,29696
	ctx.r8.u64 = ctx.r8.u64 | 29696;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r6,24,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7FFFFFFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x83a7c5e0
	if (!cr6.eq) goto loc_83A7C5E0;
	// lbzu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r21.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lis r10,25455
	ctx.r10.s64 = 1668218880;
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// ori r9,r10,28016
	ctx.r9.u64 = ctx.r10.u64 | 28016;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbzu r6,3(r11)
	ea = 3 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r8,r6,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r22,r10,r7
	ctx.r22.u64 = ctx.r10.u64 | ctx.r7.u64;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// lbzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbzu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// or r28,r6,r8
	ctx.r28.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r20,r10,r7
	ctx.r20.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// or r19,r10,r8
	ctx.r19.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83a7c344
	if (!cr6.eq) goto loc_83A7C344;
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x83a7c360
	goto loc_83A7C360;
loc_83A7C344:
	// lis r9,25701
	ctx.r9.s64 = 1684340736;
	// ori r9,r9,25344
	ctx.r9.u64 = ctx.r9.u64 | 25344;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83a7c5e0
	if (!cr6.eq) goto loc_83A7C5E0;
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_83A7C360:
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// or r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lis r9,24948
	ctx.r9.s64 = 1634992128;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r8,r6,24,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7FFFFFFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// ori r9,r9,26624
	ctx.r9.u64 = ctx.r9.u64 | 26624;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83a7c3b0
	if (!cr6.eq) goto loc_83A7C3B0;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_83A7C3B0:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lis r9,27759
	ctx.r9.s64 = 1819213824;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r8,r6,24,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7FFFFFFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// ori r9,r9,28528
	ctx.r9.u64 = ctx.r9.u64 | 28528;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83a7c49c
	if (!cr6.eq) goto loc_83A7C49C;
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// li r27,-1
	ctx.r27.s64 = -1;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 | ctx.r7.u64;
	// lbzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r9,r8,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r8,r7,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFFFFFC00;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// subf r8,r28,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r28.s64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rotlwi r5,r4,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r4,r4,10,0,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0xFFFFFC00;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// mullw r10,r7,r29
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// mullw r7,r3,r29
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// subf r6,r6,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r6.s64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r26,r10,r30
	ctx.r26.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r25,r8,r9
	ctx.r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r24,r7,r30
	ctx.r24.u64 = ctx.r7.u64 + ctx.r30.u64;
	// subf r23,r28,r6
	ctx.r23.s64 = ctx.r6.s64 - ctx.r28.s64;
loc_83A7C49C:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lis r9,25449
	ctx.r9.s64 = 1667825664;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r8,r6,24,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7FFFFFFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// ori r9,r9,28776
	ctx.r9.u64 = ctx.r9.u64 | 28776;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83a7c4e4
	if (!cr6.eq) goto loc_83A7C4E4;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_83A7C4E4:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lis r9,29302
	ctx.r9.s64 = 1920335872;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r8,r6,24,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7FFFFFFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// ori r9,r9,24832
	ctx.r9.u64 = ctx.r9.u64 | 24832;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83a7c55c
	if (!cr6.eq) goto loc_83A7C55C;
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// b 0x83a7c564
	goto loc_83A7C564;
loc_83A7C55C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_83A7C564:
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A7C570;
	sub_831EA7A0(ctx, base);
	// rlwinm r11,r20,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 10) & 0xFFFFFC00;
	// li r8,3
	ctx.r8.s64 = 3;
	// stfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// subf r9,r19,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r19.s64;
	// stw r21,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r21.u32);
	// mullw r10,r22,r29
	ctx.r10.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r29.s32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r25,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r25.u32);
	// stw r24,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// stw r23,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r23.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r28.s64;
	// srawi r10,r10,7
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 7;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r30,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r30.u32);
	// b 0x83a7c5e4
	goto loc_83A7C5E4;
loc_83A7C5E0:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_83A7C5E4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7C5F0"))) PPC_WEAK_FUNC(sub_83A7C5F0);
PPC_FUNC_IMPL(__imp__sub_83A7C5F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,-3104
	ctx.r10.s64 = ctx.r10.s64 + -3104;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7C608"))) PPC_WEAK_FUNC(sub_83A7C608);
PPC_FUNC_IMPL(__imp__sub_83A7C608) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r11,r11,3584
	ctx.r11.s64 = ctx.r11.s64 * 3584;
	// addi r11,r11,1064
	ctx.r11.s64 = ctx.r11.s64 + 1064;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7C620"))) PPC_WEAK_FUNC(sub_83A7C620);
PPC_FUNC_IMPL(__imp__sub_83A7C620) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7c64c
	if (cr6.eq) goto loc_83A7C64C;
	// bl 0x83a7e0f8
	ctx.lr = 0x83A7C644;
	sub_83A7E0F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A7C64C:
	// bl 0x83a7e0c0
	ctx.lr = 0x83A7C650;
	sub_83A7E0C0(ctx, base);
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

__attribute__((alias("__imp__sub_83A7C668"))) PPC_WEAK_FUNC(sub_83A7C668);
PPC_FUNC_IMPL(__imp__sub_83A7C668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83A7C670;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,356(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r20,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r20.u32);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmpwi cr6,r9,128
	cr6.compare<int32_t>(ctx.r9.s32, 128, xer);
	// blt cr6,0x83a7c9b4
	if (cr6.lt) goto loc_83A7C9B4;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x83a7c890
	if (!cr0.eq) goto loc_83A7C890;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r10,r11,26352
	ctx.r10.s64 = ctx.r11.s64 + 26352;
	// lwz r4,26352(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26352);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x83a7e170
	ctx.lr = 0x83A7C6DC;
	sub_83A7E170(ctx, base);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
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
	// bl 0x83a7fb40
	ctx.lr = 0x83A7C6F8;
	sub_83A7FB40(ctx, base);
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beq cr6,0x83a7c9b4
	if (cr6.eq) goto loc_83A7C9B4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// beq cr6,0x83a7c728
	if (cr6.eq) goto loc_83A7C728;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-3072
	ctx.r4.s64 = ctx.r11.s64 + -3072;
	// bl 0x831ea3f0
	ctx.lr = 0x83A7C720;
	sub_831EA3F0(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83a7c9b8
	goto loc_83A7C9B8;
loc_83A7C728:
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7e3e0
	ctx.lr = 0x83A7C734;
	sub_83A7E3E0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// bl 0x83a7e450
	ctx.lr = 0x83A7C748;
	sub_83A7E450(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// stb r11,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r11.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7e488
	ctx.lr = 0x83A7C764;
	sub_83A7E488(ctx, base);
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7e4f8
	ctx.lr = 0x83A7C77C;
	sub_83A7E4F8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// lwa r8,108(r1)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 108));
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// lwa r10,104(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 104));
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lbz r4,11(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// rldicr r10,r10,10,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 10) & 0xFFFFFFFFFFFFFC00;
	// lwa r3,12(r31)
	ctx.r3.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 12));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addic r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// rldicr r29,r9,10,53
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u64, 10) & 0xFFFFFFFFFFFFFC00;
	// subf r9,r7,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
	// subf r10,r8,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r8.s64;
	// subfe r7,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// ble cr6,0x83a7c818
	if (!cr6.gt) goto loc_83A7C818;
	// cmpd cr6,r3,r7
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r7.s64, xer);
	// blt cr6,0x83a7c818
	if (cr6.lt) goto loc_83A7C818;
	// subf r7,r9,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r9.s64;
	// tdllei r11,0
	// rotldi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// divd r4,r7,r11
	ctx.r4.s64 = PPCDivide(ctx.r7.s64, ctx.r11.s64);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// mulld r10,r4,r11
	ctx.r10.s64 = ctx.r4.s64 * ctx.r11.s64;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// andc r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// tdlgei r7,-1
loc_83A7C818:
	// sradi r9,r10,9
	xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r10.s64 >> 9;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// rldicl r11,r9,10,54
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 10) & 0x3FF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sradi r9,r11,10
	xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r11.s64 >> 10;
	// sradi r11,r10,10
	xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r10.s64 >> 10;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rldicr r11,r11,10,53
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 10) & 0xFFFFFFFFFFFFFC00;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// ble cr6,0x83a7c864
	if (!cr6.gt) goto loc_83A7C864;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// rldicr r11,r11,10,53
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 10) & 0xFFFFFFFFFFFFFC00;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// b 0x83a7c874
	goto loc_83A7C874;
loc_83A7C864:
	// lwa r10,112(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 112));
	// lwa r11,116(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 116));
	// rldicr r10,r10,10,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 10) & 0xFFFFFFFFFFFFFC00;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_83A7C874:
	// stw r20,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r20.u32);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// rldicr r10,r9,10,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 10) & 0xFFFFFFFFFFFFFC00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x83a7e580
	ctx.lr = 0x83A7C88C;
	sub_83A7E580(ctx, base);
	// b 0x83a7c9b4
	goto loc_83A7C9B4;
loc_83A7C890:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7e598
	ctx.lr = 0x83A7C898;
	sub_83A7E598(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a7c8dc
	if (cr6.eq) goto loc_83A7C8DC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83a7c8c4
	if (!cr6.gt) goto loc_83A7C8C4;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,72
	cr6.compare<uint32_t>(ctx.r11.u32, 72, xer);
	// bne cr6,0x83a7c8c4
	if (!cr6.eq) goto loc_83A7C8C4;
	// stb r20,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r20.u8);
	// b 0x83a7c9b4
	goto loc_83A7C9B4;
loc_83A7C8C4:
	// ld r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpdi cr6,r5,0
	cr6.compare<int64_t>(ctx.r5.s64, 0, xer);
	// ble cr6,0x83a7c8dc
	if (!cr6.gt) goto loc_83A7C8DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwa r4,16(r31)
	ctx.r4.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 16));
	// bl 0x83a7e580
	ctx.lr = 0x83A7C8DC;
	sub_83A7E580(ctx, base);
loc_83A7C8DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7e720
	ctx.lr = 0x83A7C8E8;
	sub_83A7E720(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a7c998
	if (cr6.eq) goto loc_83A7C998;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
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
	// bl 0x83a7fc98
	ctx.lr = 0x83A7C910;
	sub_83A7FC98(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bne 0x83a7c9b4
	if (!cr0.eq) goto loc_83A7C9B4;
	// b 0x83a7c998
	goto loc_83A7C998;
loc_83A7C924:
	// subf r11,r24,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r24.s64;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// blt cr6,0x83a7c9b0
	if (cr6.lt) goto loc_83A7C9B0;
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83a7c974
	if (!cr0.gt) goto loc_83A7C974;
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// subf r7,r7,r23
	ctx.r7.s64 = ctx.r23.s64 - ctx.r7.s64;
loc_83A7C958:
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x83a7c958
	if (cr6.lt) goto loc_83A7C958;
loc_83A7C974:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// li r6,128
	ctx.r6.s64 = 128;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83a803f8
	ctx.lr = 0x83A7C990;
	sub_83A803F8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_83A7C998:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7e720
	ctx.lr = 0x83A7C9A4;
	sub_83A7E720(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a7c924
	if (cr6.eq) goto loc_83A7C924;
loc_83A7C9B0:
	// stw r24,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r24.u32);
loc_83A7C9B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A7C9B8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7C9C0"))) PPC_WEAK_FUNC(sub_83A7C9C0);
PPC_FUNC_IMPL(__imp__sub_83A7C9C0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7C9CC"))) PPC_WEAK_FUNC(sub_83A7C9CC);
PPC_FUNC_IMPL(__imp__sub_83A7C9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7C9D0"))) PPC_WEAK_FUNC(sub_83A7C9D0);
PPC_FUNC_IMPL(__imp__sub_83A7C9D0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83a7e180
	ctx.lr = 0x83A7C9EC;
	sub_83A7E180(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r11,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r11.u8);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83A7CA24"))) PPC_WEAK_FUNC(sub_83A7CA24);
PPC_FUNC_IMPL(__imp__sub_83A7CA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7CA28"))) PPC_WEAK_FUNC(sub_83A7CA28);
PPC_FUNC_IMPL(__imp__sub_83A7CA28) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7CA3C"))) PPC_WEAK_FUNC(sub_83A7CA3C);
PPC_FUNC_IMPL(__imp__sub_83A7CA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7CA40"))) PPC_WEAK_FUNC(sub_83A7CA40);
PPC_FUNC_IMPL(__imp__sub_83A7CA40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A7CA48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x83a7e080
	ctx.lr = 0x83A7CA64;
	sub_83A7E080(ctx, base);
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r31,r11,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A7CA78;
	sub_831EA7A0(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mulli r11,r3,3584
	ctx.r11.s64 = ctx.r3.s64 * 3584;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,1024
	ctx.r6.s64 = ctx.r11.s64 + 1024;
	// bl 0x83a7f9c0
	ctx.lr = 0x83A7CA94;
	sub_83A7F9C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a7caa8
	if (cr0.eq) goto loc_83A7CAA8;
	// bl 0x83a7e0c0
	ctx.lr = 0x83A7CAA0;
	sub_83A7E0C0(ctx, base);
	// li r3,-5
	ctx.r3.s64 = -5;
	// b 0x83a7cac0
	goto loc_83A7CAC0;
loc_83A7CAA8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// bl 0x83a7c9d0
	ctx.lr = 0x83A7CAB8;
	sub_83A7C9D0(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A7CAC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7CAC8"))) PPC_WEAK_FUNC(sub_83A7CAC8);
PPC_FUNC_IMPL(__imp__sub_83A7CAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83A7CAD0;
	__savegprlr_21(ctx, base);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// lbz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// mulli r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 * 18;
	// divwu r22,r6,r10
	ctx.r22.u32 = PPCDivide(ctx.r6.u32, ctx.r10.u32);
	// twllei r10,0
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a7caf0
	if (cr6.lt) goto loc_83A7CAF0;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_83A7CAF0:
	// addi r11,r4,31
	ctx.r11.s64 = ctx.r4.s64 + 31;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a7cb04
	if (cr6.lt) goto loc_83A7CB04;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_83A7CB04:
	// lha r27,168(r3)
	ctx.r27.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 168));
	// li r21,0
	ctx.r21.s64 = 0;
	// lha r26,170(r3)
	ctx.r26.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 170));
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83a7cc8c
	if (cr6.eq) goto loc_83A7CC8C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r30,r5,-1
	ctx.r30.s64 = ctx.r5.s64 + -1;
	// addi r24,r11,-2784
	ctx.r24.s64 = ctx.r11.s64 + -2784;
loc_83A7CB28:
	// lbz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a7cc7c
	if (cr0.eq) goto loc_83A7CC7C;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// addi r29,r3,170
	ctx.r29.s64 = ctx.r3.s64 + 170;
loc_83A7CB40:
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83a7cc8c
	if (!cr0.eq) goto loc_83A7CC8C;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// lha r4,162(r3)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 162));
	// li r11,16
	ctx.r11.s64 = 16;
	// lha r8,164(r3)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 164));
	// lha r5,166(r3)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 166));
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// add r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 + ctx.r5.u64;
	// xor r10,r6,r4
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// clrlwi r8,r11,17
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFF;
	// clrlwi r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
	// sth r8,162(r3)
	PPC_STORE_U16(ctx.r3.u32 + 162, ctx.r8.u16);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lha r6,4(r29)
	ctx.r6.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + 4));
	// lha r10,2(r29)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + 2));
	// extsh r31,r4
	ctx.r31.s64 = ctx.r4.s16;
	// add r11,r25,r8
	ctx.r11.u64 = ctx.r25.u64 + ctx.r8.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
loc_83A7CBAC:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// mullw r4,r8,r26
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r26.s32);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// mullw r5,r10,r27
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// srawi r8,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// rlwinm r4,r11,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// srawi r5,r5,12
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 12;
	// mullw r11,r31,r8
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// lwzx r4,r4,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r24.u32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(ctx.r11.s32, 32767, xer);
	// bgt cr6,0x83a7cbe8
	if (cr6.gt) goto loc_83A7CBE8;
	// cmpwi cr6,r11,-32768
	cr6.compare<int32_t>(ctx.r11.s32, -32768, xer);
	// bge cr6,0x83a7cc04
	if (!cr6.lt) goto loc_83A7CC04;
loc_83A7CBE8:
	// cmpwi cr6,r11,-32768
	cr6.compare<int32_t>(ctx.r11.s32, -32768, xer);
	// bge cr6,0x83a7cbf8
	if (!cr6.lt) goto loc_83A7CBF8;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// b 0x83a7cc04
	goto loc_83A7CC04;
loc_83A7CBF8:
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(ctx.r11.s32, 32767, xer);
	// ble cr6,0x83a7cc04
	if (!cr6.gt) goto loc_83A7CC04;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_83A7CC04:
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// sth r11,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r11.u16);
	// mullw r8,r11,r27
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r10,r31,r4
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// srawi r5,r8,12
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 12;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	cr6.compare<int32_t>(ctx.r10.s32, 32767, xer);
	// bgt cr6,0x83a7cc34
	if (cr6.gt) goto loc_83A7CC34;
	// cmpwi cr6,r10,-32768
	cr6.compare<int32_t>(ctx.r10.s32, -32768, xer);
	// bge cr6,0x83a7cc50
	if (!cr6.lt) goto loc_83A7CC50;
loc_83A7CC34:
	// cmpwi cr6,r10,-32768
	cr6.compare<int32_t>(ctx.r10.s32, -32768, xer);
	// bge cr6,0x83a7cc44
	if (!cr6.lt) goto loc_83A7CC44;
	// li r10,-32768
	ctx.r10.s64 = -32768;
	// b 0x83a7cc50
	goto loc_83A7CC50;
loc_83A7CC44:
	// cmpwi cr6,r10,32767
	cr6.compare<int32_t>(ctx.r10.s32, 32767, xer);
	// ble cr6,0x83a7cc50
	if (!cr6.gt) goto loc_83A7CC50;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_83A7CC50:
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sthu r5,2(r6)
	ea = 2 + ctx.r6.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r6.u32 = ea;
	// bdnz 0x83a7cbac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7CBAC;
	// sth r5,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r5.u16);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// sthu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r29.u32 = ea;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lbz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a7cb40
	if (cr6.lt) goto loc_83A7CB40;
loc_83A7CC7C:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r25,r25,64
	ctx.r25.s64 = ctx.r25.s64 + 64;
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r22.u32, xer);
	// blt cr6,0x83a7cb28
	if (cr6.lt) goto loc_83A7CB28;
loc_83A7CC8C:
	// lbz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// rlwinm r3,r21,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 5) & 0xFFFFFFE0;
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// mulli r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 * 18;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7CCA4"))) PPC_WEAK_FUNC(sub_83A7CCA4);
PPC_FUNC_IMPL(__imp__sub_83A7CCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7CCA8"))) PPC_WEAK_FUNC(sub_83A7CCA8);
PPC_FUNC_IMPL(__imp__sub_83A7CCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83A7CCB0;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,16
	ctx.r26.s64 = 16;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// lbz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// stw r7,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r7.u32);
	// addi r29,r3,48
	ctx.r29.s64 = ctx.r3.s64 + 48;
	// stw r9,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// addi r28,r3,64
	ctx.r28.s64 = ctx.r3.s64 + 64;
	// lvrx128 v62,r26,r3
	temp.u32 = ctx.r26.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r27,r3,80
	ctx.r27.s64 = ctx.r3.s64 + 80;
	// lvlx128 v61,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvrx128 v57,r26,r31
	temp.u32 = ctx.r26.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// vor128 v5,v61,v57
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// lvlx128 v63,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v57,r26,r29
	temp.u32 = ctx.r26.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v56,r26,r30
	temp.u32 = ctx.r26.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v60,v60,v57
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vor128 v61,v63,v56
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// lvlx128 v59,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v63,r26,r28
	temp.u32 = ctx.r26.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v57,r26,r27
	temp.u32 = ctx.r26.u32 + ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v59,v59,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vor128 v58,v58,v57
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// beq cr6,0x83a7cd4c
	if (cr6.eq) goto loc_83A7CD4C;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r10,-2716
	ctx.r4.s64 = ctx.r10.s64 + -2716;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A7CD44;
	sub_831EA308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a7cf80
	goto loc_83A7CF80;
loc_83A7CD4C:
	// mulli r9,r11,18
	ctx.r9.s64 = ctx.r11.s64 * 18;
	// lha r22,164(r3)
	ctx.r22.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 164));
	// divwu r23,r6,r9
	ctx.r23.u32 = PPCDivide(ctx.r6.u32, ctx.r9.u32);
	// lha r21,166(r3)
	ctx.r21.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 166));
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// lha r28,162(r3)
	ctx.r28.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 162));
	// twllei r9,0
	// addi r19,r3,162
	ctx.r19.s64 = ctx.r3.s64 + 162;
	// cmplw cr6,r23,r10
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a7cd78
	if (cr6.lt) goto loc_83A7CD78;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
loc_83A7CD78:
	// addi r10,r4,31
	ctx.r10.s64 = ctx.r4.s64 + 31;
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r23,r10
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a7cd8c
	if (cr6.lt) goto loc_83A7CD8C;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
loc_83A7CD8C:
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83a7cf68
	if (cr6.eq) goto loc_83A7CF68;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// lfs f0,-2720(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2720);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r8,-2848
	ctx.r27.s64 = ctx.r8.s64 + -2848;
	// lfs f13,23672(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 23672);
	ctx.f13.f64 = double(temp.f32);
loc_83A7CDB8:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a7cf58
	if (cr6.eq) goto loc_83A7CF58;
	// lwz r30,292(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r6,r3,100
	ctx.r6.s64 = ctx.r3.s64 + 100;
loc_83A7CDCC:
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rlwimi r9,r8,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm. r9,r8,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83a7cf6c
	if (!cr0.eq) goto loc_83A7CF6C;
	// xor r9,r8,r28
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r28.u64;
	// lvlx128 v63,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r8,r9,19
	ctx.r8.u64 = ctx.r9.u32 & 0x1FFF;
	// vspltw128 v0,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r4,r6,-4
	ctx.r4.s64 = ctx.r6.s64 + -4;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// mullw r5,r22,r28
	ctx.r5.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r28.s32);
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// li r8,4
	ctx.r8.s64 = 4;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// add r9,r5,r21
	ctx.r9.u64 = ctx.r5.u64 + ctx.r21.u64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// add r5,r31,r25
	ctx.r5.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// clrlwi r28,r9,1
	ctx.r28.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v57,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v57,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// vmulfp128 v13,v61,v57
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v12,v60,v57
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v11,v59,v57
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v10,v58,v57
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v57.f32)));
loc_83A7CE60:
	// vmulfp128 v9,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// addi r31,r8,16
	ctx.r31.s64 = ctx.r8.s64 + 16;
	// rlwinm r29,r9,30,2,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r9,r9,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// rlwinm r18,r7,30,2,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lvlx128 v63,r29,r27
	temp.u32 = ctx.r29.u32 + ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r9,r27
	temp.u32 = ctx.r9.u32 + ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v8,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvlx128 v63,r18,r27
	temp.u32 = ctx.r18.u32 + ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v7,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// lvlx128 v57,r7,r27
	temp.u32 = ctx.r7.u32 + ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v6,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v9,v5,v0,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vspltw128 v0,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// vmaddfp v9,v13,v8,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v9,v12,v7,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v9,v11,v6,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v10,v0,v9
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// stvlx v0,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// vspltw128 v63,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// stvrx v0,r8,r26
	ea = ctx.r8.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lbz r9,3(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbzu r29,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r29.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rlwinm r7,r9,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// lvlx128 v57,r7,r27
	temp.u32 = ctx.r7.u32 + ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v9,v62,v63
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// rlwinm r7,r29,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFC;
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// lvlx128 v63,r7,r27
	temp.u32 = ctx.r7.u32 + ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmaddfp v6,v5,v0,v9
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// rlwinm r29,r29,2,26,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// vspltw128 v8,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// rlwinm r9,r9,30,2,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// lvlx128 v56,r29,r27
	temp.u32 = ctx.r29.u32 + ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v55,r9,r27
	temp.u32 = ctx.r9.u32 + ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v7,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// vmaddfp v7,v13,v7,v6
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vspltw128 v9,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v0,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// vmaddfp v8,v12,v8,v7
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v9,v11,v9,v8
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v10,v0,v9
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// stvlx v0,0,r31
	ea = ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// vspltw128 v63,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// stvrx v0,r31,r26
	ea = ctx.r31.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// bdnz 0x83a7ce60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7CE60;
	// lfs f12,124(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f12,120(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a7cdcc
	if (cr6.lt) goto loc_83A7CDCC;
loc_83A7CF58:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r25,r25,128
	ctx.r25.s64 = ctx.r25.s64 + 128;
	// cmplw cr6,r20,r23
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r23.u32, xer);
	// blt cr6,0x83a7cdb8
	if (cr6.lt) goto loc_83A7CDB8;
loc_83A7CF68:
	// sth r28,0(r19)
	PPC_STORE_U16(ctx.r19.u32 + 0, ctx.r28.u16);
loc_83A7CF6C:
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mullw r11,r20,r11
	ctx.r11.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r11.s32);
	// mulli r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 * 18;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// rlwinm r3,r20,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 5) & 0xFFFFFFE0;
loc_83A7CF80:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7CF88"))) PPC_WEAK_FUNC(sub_83A7CF88);
PPC_FUNC_IMPL(__imp__sub_83A7CF88) {
	PPC_FUNC_PROLOGUE();
	// li r5,204
	ctx.r5.s64 = 204;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831cdcf0
	sub_831CDCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7CF94"))) PPC_WEAK_FUNC(sub_83A7CF94);
PPC_FUNC_IMPL(__imp__sub_83A7CF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7CF98"))) PPC_WEAK_FUNC(sub_83A7CF98);
PPC_FUNC_IMPL(__imp__sub_83A7CF98) {
	PPC_FUNC_PROLOGUE();
	// stb r4,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7CFA0"))) PPC_WEAK_FUNC(sub_83A7CFA0);
PPC_FUNC_IMPL(__imp__sub_83A7CFA0) {
	PPC_FUNC_PROLOGUE();
	// sth r4,162(r3)
	PPC_STORE_U16(ctx.r3.u32 + 162, ctx.r4.u16);
	// sth r5,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, ctx.r5.u16);
	// sth r6,166(r3)
	PPC_STORE_U16(ctx.r3.u32 + 166, ctx.r6.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7CFB0"))) PPC_WEAK_FUNC(sub_83A7CFB0);
PPC_FUNC_IMPL(__imp__sub_83A7CFB0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,162(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 162);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lhz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 164);
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// lhz r11,166(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 166);
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7CFCC"))) PPC_WEAK_FUNC(sub_83A7CFCC);
PPC_FUNC_IMPL(__imp__sub_83A7CFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7CFD0"))) PPC_WEAK_FUNC(sub_83A7CFD0);
PPC_FUNC_IMPL(__imp__sub_83A7CFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// addi r9,r4,43
	ctx.r9.s64 = ctx.r4.s64 + 43;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r8,r4,12
	ctx.r8.s64 = ctx.r4.s64 + 12;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,21704(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21704);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// sthx r5,r9,r3
	PPC_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u16);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// sth r6,174(r11)
	PPC_STORE_U16(ctx.r11.u32 + 174, ctx.r6.u16);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r8,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,100(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7D03C"))) PPC_WEAK_FUNC(sub_83A7D03C);
PPC_FUNC_IMPL(__imp__sub_83A7D03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7D040"))) PPC_WEAK_FUNC(sub_83A7D040);
PPC_FUNC_IMPL(__imp__sub_83A7D040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// stfs f2,100(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7D05C"))) PPC_WEAK_FUNC(sub_83A7D05C);
PPC_FUNC_IMPL(__imp__sub_83A7D05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7D060"))) PPC_WEAK_FUNC(sub_83A7D060);
PPC_FUNC_IMPL(__imp__sub_83A7D060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,7944(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7944);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,-2240(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -2240);
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcfid f0,f12
	ctx.f0.f64 = double(ctx.f12.s64);
	// fcfid f12,f11
	ctx.f12.f64 = double(ctx.f11.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// bl 0x831d1a10
	ctx.lr = 0x83A7D0C0;
	sub_831D1A10(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lfs f12,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// fsubs f8,f31,f12
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// lfs f0,9008(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fsubs f9,f31,f9
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f11,-2700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2700);
	ctx.f11.f64 = double(temp.f32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f10,-2704(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2704);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,-5560(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -5560);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fsubs f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fadds f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fdivs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// sth r9,168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 168, ctx.r9.u16);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// fcfid f0,f11
	ctx.f0.f64 = double(ctx.f11.s64);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// sth r9,170(r31)
	PPC_STORE_U16(ctx.r31.u32 + 170, ctx.r9.u16);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmadds f11,f0,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_83A7D1AC:
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83A7D1B8:
	// lfs f11,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f10,f13,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfsu f11,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83a7d1b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7D1B8;
	// stfsu f12,20(r8)
	ea = 20 + ctx.r8.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83a7d1ac
	if (!cr0.eq) goto loc_83A7D1AC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7D1F8"))) PPC_WEAK_FUNC(sub_83A7D1F8);
PPC_FUNC_IMPL(__imp__sub_83A7D1F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,20
	cr6.compare<uint32_t>(ctx.r4.u32, 20, xer);
	// bge cr6,0x83a7d214
	if (!cr6.lt) goto loc_83A7D214;
loc_83A7D204:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A7D208:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// b 0x83a7d244
	goto loc_83A7D244;
loc_83A7D214:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,32768
	cr6.compare<uint32_t>(ctx.r10.u32, 32768, xer);
	// beq cr6,0x83a7d228
	if (cr6.eq) goto loc_83A7D228;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83a7d208
	goto loc_83A7D208;
loc_83A7D228:
	// lha r10,2(r11)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 2));
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// blt cr6,0x83a7d204
	if (cr6.lt) goto loc_83A7D204;
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// lbz r11,19(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
loc_83A7D244:
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7D24C"))) PPC_WEAK_FUNC(sub_83A7D24C);
PPC_FUNC_IMPL(__imp__sub_83A7D24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7D250"))) PPC_WEAK_FUNC(sub_83A7D250);
PPC_FUNC_IMPL(__imp__sub_83A7D250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bge cr6,0x83a7d264
	if (!cr6.lt) goto loc_83A7D264;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a7d36c
	goto loc_83A7D36C;
loc_83A7D264:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r4,1(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(ctx.r11.u32, 32768, xer);
	// beq cr6,0x83a7d288
	if (cr6.eq) goto loc_83A7D288;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83a7d36c
	goto loc_83A7D36C;
loc_83A7D288:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r4,3(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lbz r9,10(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r6,11(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// lbz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lbz r10,14(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// lbz r9,15(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// lbz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83a7d338
	if (!cr0.eq) goto loc_83A7D338;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x83a7d368
	goto loc_83A7D368;
loc_83A7D338:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// twllei r11,0
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r8,r8,r11
	ctx.r8.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twlgei r11,-1
loc_83A7D368:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A7D36C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7D374"))) PPC_WEAK_FUNC(sub_83A7D374);
PPC_FUNC_IMPL(__imp__sub_83A7D374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7D378"))) PPC_WEAK_FUNC(sub_83A7D378);
PPC_FUNC_IMPL(__imp__sub_83A7D378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x83a7d1f8
	ctx.lr = 0x83A7D39C;
	sub_83A7D1F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83a7d444
	if (cr0.lt) goto loc_83A7D444;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x83a7d42c
	if (cr6.lt) goto loc_83A7D42C;
	// lha r11,2(r9)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 2));
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(ctx.r11.s32, 28, xer);
	// bge cr6,0x83a7d3c4
	if (!cr6.lt) goto loc_83A7D3C4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a7d444
	goto loc_83A7D444;
loc_83A7D3C4:
	// lhz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 24);
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// lhz r11,26(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 26);
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
	// lhz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 28);
	// sth r11,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r11.u16);
	// lhz r11,30(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 30);
	// sth r11,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// lbz r11,7(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x83a7d440
	if (cr6.lt) goto loc_83A7D440;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83a7d440
	if (!cr6.gt) goto loc_83A7D440;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// addi r10,r9,30
	ctx.r10.s64 = ctx.r9.s64 + 30;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// subf r9,r8,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_83A7D410:
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sthx r8,r9,r11
	PPC_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u16);
	// lhzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x83a7d410
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7D410;
	// b 0x83a7d440
	goto loc_83A7D440;
loc_83A7D42C:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// sth r11,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r11.u16);
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
loc_83A7D440:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A7D444:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7D454"))) PPC_WEAK_FUNC(sub_83A7D454);
PPC_FUNC_IMPL(__imp__sub_83A7D454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7D458"))) PPC_WEAK_FUNC(sub_83A7D458);
PPC_FUNC_IMPL(__imp__sub_83A7D458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A7D460;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x83a7d1f8
	ctx.lr = 0x83A7D488;
	sub_83A7D1F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83a7d56c
	if (cr0.lt) goto loc_83A7D56C;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,48
	ctx.r11.s64 = 48;
	// cmplwi cr6,r6,4
	cr6.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// bne cr6,0x83a7d4bc
	if (!cr6.eq) goto loc_83A7D4BC;
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// li r11,60
	ctx.r11.s64 = 60;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x83a7d4bc
	if (cr6.lt) goto loc_83A7D4BC;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_83A7D4BC:
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x83a7d4cc
	if (!cr6.lt) goto loc_83A7D4CC;
loc_83A7D4C4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a7d56c
	goto loc_83A7D56C;
loc_83A7D4CC:
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 2));
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a7d4c4
	if (cr6.lt) goto loc_83A7D4C4;
	// li r11,20
	ctx.r11.s64 = 20;
	// cmplwi cr6,r6,4
	cr6.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// bne cr6,0x83a7d504
	if (!cr6.eq) goto loc_83A7D504;
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// li r11,32
	ctx.r11.s64 = 32;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x83a7d504
	if (cr6.lt) goto loc_83A7D504;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_83A7D504:
	// lhax r10,r11,r31
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// beq cr6,0x83a7d528
	if (cr6.eq) goto loc_83A7D528;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83a7d56c
	goto loc_83A7D56C;
loc_83A7D528:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_83A7D56C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7D574"))) PPC_WEAK_FUNC(sub_83A7D574);
PPC_FUNC_IMPL(__imp__sub_83A7D574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7D578"))) PPC_WEAK_FUNC(sub_83A7D578);
PPC_FUNC_IMPL(__imp__sub_83A7D578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A7D580;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x83a7d1f8
	ctx.lr = 0x83A7D5AC;
	sub_83A7D1F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83a7d6cc
	if (cr0.lt) goto loc_83A7D6CC;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,60
	ctx.r11.s64 = 60;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83a7d5e0
	if (!cr6.eq) goto loc_83A7D5E0;
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// li r11,72
	ctx.r11.s64 = 72;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x83a7d5e0
	if (cr6.lt) goto loc_83A7D5E0;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_83A7D5E0:
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x83a7d5f0
	if (!cr6.lt) goto loc_83A7D5F0;
loc_83A7D5E8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a7d6cc
	goto loc_83A7D6CC;
loc_83A7D5F0:
	// lha r10,2(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 2));
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a7d5e8
	if (cr6.lt) goto loc_83A7D5E8;
	// li r11,20
	ctx.r11.s64 = 20;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83a7d628
	if (!cr6.eq) goto loc_83A7D628;
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// li r11,32
	ctx.r11.s64 = 32;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x83a7d628
	if (cr6.lt) goto loc_83A7D628;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_83A7D628:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83a7d640
	if (cr0.eq) goto loc_83A7D640;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_83A7D640:
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r9,16713
	ctx.r9.s64 = 1095303168;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r9,r9,20038
	ctx.r9.u64 = ctx.r9.u64 | 20038;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83a7d688
	if (cr6.eq) goto loc_83A7D688;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83a7d6cc
	goto loc_83A7D6CC;
loc_83A7D688:
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x83A7D6A4;
	sub_831CE980(ctx, base);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r10,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r10.u16);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r11,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r11.u16);
loc_83A7D6CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7D6D4"))) PPC_WEAK_FUNC(sub_83A7D6D4);
PPC_FUNC_IMPL(__imp__sub_83A7D6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7D6D8"))) PPC_WEAK_FUNC(sub_83A7D6D8);
PPC_FUNC_IMPL(__imp__sub_83A7D6D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A7D6E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// addi r6,r5,1
	ctx.r6.s64 = ctx.r5.s64 + 1;
	// sth r9,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r9.u16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,26360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26360, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83a7d1f8
	ctx.lr = 0x83A7D710;
	sub_83A7D1F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83a7d720
	if (!cr0.lt) goto loc_83A7D720;
loc_83A7D718:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a7d7e8
	goto loc_83A7D7E8;
loc_83A7D720:
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r9,r31,5
	ctx.r9.s64 = ctx.r31.s64 + 5;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 + 3;
	// addi r6,r31,2
	ctx.r6.s64 = ctx.r31.s64 + 2;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7d250
	ctx.lr = 0x83A7D754;
	sub_83A7D250(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83a7d718
	if (cr0.lt) goto loc_83A7D718;
	// lhz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x83a7d718
	if (cr6.lt) goto loc_83A7D718;
	// addi r6,r31,38
	ctx.r6.s64 = ctx.r31.s64 + 38;
	// addi r5,r31,22
	ctx.r5.s64 = ctx.r31.s64 + 22;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7d378
	ctx.lr = 0x83A7D77C;
	sub_83A7D378(ctx, base);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r31,64
	ctx.r8.s64 = ctx.r31.s64 + 64;
	// addi r7,r31,62
	ctx.r7.s64 = ctx.r31.s64 + 62;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7d458
	ctx.lr = 0x83A7D7A4;
	sub_83A7D458(ctx, base);
	// addi r8,r31,98
	ctx.r8.s64 = ctx.r31.s64 + 98;
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7d578
	ctx.lr = 0x83A7D7BC;
	sub_83A7D578(ctx, base);
	// cmpwi cr6,r30,18
	cr6.compare<int32_t>(ctx.r30.s32, 18, xer);
	// blt cr6,0x83a7d7e4
	if (cr6.lt) goto loc_83A7D7E4;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(ctx.r11.u32, 32768, xer);
	// bne cr6,0x83a7d7e4
	if (!cr6.eq) goto loc_83A7D7E4;
	// lha r11,2(r29)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + 2));
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// blt cr6,0x83a7d7e4
	if (cr6.lt) goto loc_83A7D7E4;
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
loc_83A7D7E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83A7D7E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7D7F0"))) PPC_WEAK_FUNC(sub_83A7D7F0);
PPC_FUNC_IMPL(__imp__sub_83A7D7F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A7D7F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// addi r6,r5,1
	ctx.r6.s64 = ctx.r5.s64 + 1;
	// sth r9,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r9.u16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,26360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26360, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83a7d1f8
	ctx.lr = 0x83A7D828;
	sub_83A7D1F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83a7d838
	if (!cr0.lt) goto loc_83A7D838;
loc_83A7D830:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a7d8f4
	goto loc_83A7D8F4;
loc_83A7D838:
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r9,r31,5
	ctx.r9.s64 = ctx.r31.s64 + 5;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 + 3;
	// addi r6,r31,2
	ctx.r6.s64 = ctx.r31.s64 + 2;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7d250
	ctx.lr = 0x83A7D86C;
	sub_83A7D250(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83a7d830
	if (cr0.lt) goto loc_83A7D830;
	// addi r6,r31,38
	ctx.r6.s64 = ctx.r31.s64 + 38;
	// addi r5,r31,22
	ctx.r5.s64 = ctx.r31.s64 + 22;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7d378
	ctx.lr = 0x83A7D888;
	sub_83A7D378(ctx, base);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r31,64
	ctx.r8.s64 = ctx.r31.s64 + 64;
	// addi r7,r31,62
	ctx.r7.s64 = ctx.r31.s64 + 62;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7d458
	ctx.lr = 0x83A7D8B0;
	sub_83A7D458(ctx, base);
	// addi r8,r31,98
	ctx.r8.s64 = ctx.r31.s64 + 98;
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7d578
	ctx.lr = 0x83A7D8C8;
	sub_83A7D578(ctx, base);
	// cmpwi cr6,r29,18
	cr6.compare<int32_t>(ctx.r29.s32, 18, xer);
	// blt cr6,0x83a7d8f0
	if (cr6.lt) goto loc_83A7D8F0;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(ctx.r11.u32, 32768, xer);
	// bne cr6,0x83a7d8f0
	if (!cr6.eq) goto loc_83A7D8F0;
	// lha r11,2(r30)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + 2));
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// blt cr6,0x83a7d8f0
	if (cr6.lt) goto loc_83A7D8F0;
	// lhz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
loc_83A7D8F0:
	// lhz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
loc_83A7D8F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7D8FC"))) PPC_WEAK_FUNC(sub_83A7D8FC);
PPC_FUNC_IMPL(__imp__sub_83A7D8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7D900"))) PPC_WEAK_FUNC(sub_83A7D900);
PPC_FUNC_IMPL(__imp__sub_83A7D900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// addi r11,r11,-2624
	ctx.r11.s64 = ctx.r11.s64 + -2624;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,26364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26364, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7D918"))) PPC_WEAK_FUNC(sub_83A7D918);
PPC_FUNC_IMPL(__imp__sub_83A7D918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,26368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26368);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26368, ctx.r11.u32);
	// lwz r11,26368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26368);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x83a80430
	sub_83A80430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7D938"))) PPC_WEAK_FUNC(sub_83A7D938);
PPC_FUNC_IMPL(__imp__sub_83A7D938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

