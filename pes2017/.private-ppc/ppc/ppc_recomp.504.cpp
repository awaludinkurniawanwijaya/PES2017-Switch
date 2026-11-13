#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83A9510C"))) PPC_WEAK_FUNC(sub_83A9510C);
PPC_FUNC_IMPL(__imp__sub_83A9510C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A95110"))) PPC_WEAK_FUNC(sub_83A95110);
PPC_FUNC_IMPL(__imp__sub_83A95110) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83a94f00
	sub_83A94F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A95118"))) PPC_WEAK_FUNC(sub_83A95118);
PPC_FUNC_IMPL(__imp__sub_83A95118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A95120;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83a94108
	ctx.lr = 0x83A95134;
	sub_83A94108(ctx, base);
	// subf r7,r3,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r3.s64;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// twllei r11,0
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divwu r10,r10,r11
	ctx.r10.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// divw r11,r7,r10
	ctx.r11.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// twllei r10,0
	// andc r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// add r27,r11,r8
	ctx.r27.u64 = ctx.r11.u64 + ctx.r8.u64;
	// twlgei r10,-1
	// bl 0x83a77b68
	ctx.lr = 0x83A95188;
	sub_83A77B68(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A95198;
	sub_83A77B78(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A951AC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83a951ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A951AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x83a77b78
	ctx.lr = 0x83A951F0;
	sub_83A77B78(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a75be8
	ctx.lr = 0x83A951F8;
	sub_83A75BE8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a95220
	if (!cr0.eq) goto loc_83A95220;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,19844
	ctx.r4.s64 = ctx.r11.s64 + 19844;
	// bl 0x831ea3f0
	ctx.lr = 0x83A95210;
	sub_831EA3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a94e00
	ctx.lr = 0x83A95218;
	sub_83A94E00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a95420
	goto loc_83A95420;
loc_83A95220:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 * 20;
	// bl 0x83a77b78
	ctx.lr = 0x83A95234;
	sub_83A77B78(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a952a4
	if (!cr6.gt) goto loc_83A952A4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83A9524C:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r30.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r9.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83a9524c
	if (cr6.lt) goto loc_83A9524C;
loc_83A952A4:
	// li r5,8
	ctx.r5.s64 = 8;
	// rlwinm r4,r27,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A952B4;
	sub_83A77B78(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// beq cr6,0x83a9536c
	if (cr6.eq) goto loc_83A9536C;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_83A952D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83a77b78
	ctx.lr = 0x83A952E0;
	sub_83A77B78(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x83b676d0
	ctx.lr = 0x83A952F4;
	sub_83B676D0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bne cr6,0x83a95314
	if (!cr6.eq) goto loc_83A95314;
	// bl 0x83129970
	ctx.lr = 0x83A9530C;
	sub_83129970(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// b 0x83a95344
	goto loc_83A95344;
loc_83A95314:
	// bl 0x83129970
	ctx.lr = 0x83A95318;
	sub_83129970(ctx, base);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x83129970
	ctx.lr = 0x83A95328;
	sub_83129970(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x83129970
	ctx.lr = 0x83A9533C;
	sub_83129970(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_83A95344:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x83129970
	ctx.lr = 0x83A95350;
	sub_83129970(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bne 0x83a952d0
	if (!cr0.eq) goto loc_83A952D0;
loc_83A9536C:
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a953f8
	if (!cr6.gt) goto loc_83A953F8;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83A95390:
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83a953ac
	if (!cr6.eq) goto loc_83A953AC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// b 0x83a953d4
	goto loc_83A953D4;
loc_83A953AC:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r30.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
loc_83A953D4:
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x83a95390
	if (cr6.lt) goto loc_83A95390;
loc_83A953F8:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_83A95420:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A95428"))) PPC_WEAK_FUNC(sub_83A95428);
PPC_FUNC_IMPL(__imp__sub_83A95428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A95430;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a95474
	if (cr6.lt) goto loc_83A95474;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,20004
	ctx.r4.s64 = ctx.r11.s64 + 20004;
loc_83A95464:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9546C;
	sub_831EA3F0(ctx, base);
loc_83A9546C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a9564c
	goto loc_83A9564C;
loc_83A95474:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a954b0
	if (cr6.eq) goto loc_83A954B0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// bne cr6,0x83a95498
	if (!cr6.eq) goto loc_83A95498;
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
loc_83A95498:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// bne cr6,0x83a954c8
	if (!cr6.eq) goto loc_83A954C8;
loc_83A954B0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,19992
	ctx.r4.s64 = ctx.r11.s64 + 19992;
loc_83A954B8:
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A954C4;
	sub_831EA418(ctx, base);
	// b 0x83a9546c
	goto loc_83A9546C;
loc_83A954C8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83ac1d80
	ctx.lr = 0x83A954D4;
	sub_83AC1D80(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrldi r10,r29,32
	ctx.r10.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmadds f0,f13,f0,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f1.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// bne cr6,0x83a955dc
	if (!cr6.eq) goto loc_83A955DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a9558c
	if (!cr6.gt) goto loc_83A9558C;
loc_83A9552C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a955b0
	if (cr6.eq) goto loc_83A955B0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bne cr6,0x83a95550
	if (!cr6.eq) goto loc_83A95550;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// b 0x83a95554
	goto loc_83A95554;
loc_83A95550:
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
loc_83A95554:
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// beq cr6,0x83a955b0
	if (cr6.eq) goto loc_83A955B0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83ac2938
	ctx.lr = 0x83A9557C;
	sub_83AC2938(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a9552c
	if (cr6.lt) goto loc_83A9552C;
loc_83A9558C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// bne cr6,0x83a955bc
	if (!cr6.eq) goto loc_83A955BC;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x83a955c8
	goto loc_83A955C8;
loc_83A955B0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,19980
	ctx.r4.s64 = ctx.r11.s64 + 19980;
	// b 0x83a954b8
	goto loc_83A954B8;
loc_83A955BC:
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83A955C8:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83a95618
	goto loc_83A95618;
loc_83A955DC:
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// bne cr6,0x83a955fc
	if (!cr6.eq) goto loc_83A955FC;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x83a95608
	goto loc_83A95608;
loc_83A955FC:
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83A95608:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_83A95618:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a94b30
	ctx.lr = 0x83A95620;
	sub_83A94B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a94c00
	ctx.lr = 0x83A95628;
	sub_83A94C00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a95648
	if (!cr0.eq) goto loc_83A95648;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a94f90
	ctx.lr = 0x83A9563C;
	sub_83A94F90(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,19888
	ctx.r4.s64 = ctx.r11.s64 + 19888;
	// b 0x83a95464
	goto loc_83A95464;
loc_83A95648:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A9564C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A95654"))) PPC_WEAK_FUNC(sub_83A95654);
PPC_FUNC_IMPL(__imp__sub_83A95654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A95658"))) PPC_WEAK_FUNC(sub_83A95658);
PPC_FUNC_IMPL(__imp__sub_83A95658) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a75cd8
	ctx.lr = 0x83A9567C;
	sub_83A75CD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a94f90
	ctx.lr = 0x83A95688;
	sub_83A94F90(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83a75d58
	ctx.lr = 0x83A95690;
	sub_83A75D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A956A8"))) PPC_WEAK_FUNC(sub_83A956A8);
PPC_FUNC_IMPL(__imp__sub_83A956A8) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x83a75cd8
	ctx.lr = 0x83A956C4;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a94b30
	ctx.lr = 0x83A956CC;
	sub_83A94B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a94c00
	ctx.lr = 0x83A956D4;
	sub_83A94C00(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83a75d58
	ctx.lr = 0x83A956DC;
	sub_83A75D58(ctx, base);
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

__attribute__((alias("__imp__sub_83A956F0"))) PPC_WEAK_FUNC(sub_83A956F0);
PPC_FUNC_IMPL(__imp__sub_83A956F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A956F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x83a77b68
	ctx.lr = 0x83A95714;
	sub_83A77B68(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A95724;
	sub_83A77B78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// bl 0x83a94800
	ctx.lr = 0x83A95738;
	sub_83A94800(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a95764
	if (!cr0.eq) goto loc_83A95764;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20072
	ctx.r4.s64 = ctx.r11.s64 + 20072;
loc_83A9574C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A95754;
	sub_831EA418(ctx, base);
loc_83A95754:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83A95758:
	// bl 0x83a82de8
	ctx.lr = 0x83A9575C;
	sub_83A82DE8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a95818
	goto loc_83A95818;
loc_83A95764:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a94108
	ctx.lr = 0x83A9576C;
	sub_83A94108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// blt cr6,0x83a95754
	if (cr6.lt) goto loc_83A95754;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A95788;
	sub_83A77B78(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x83a957a0
	if (!cr0.eq) goto loc_83A957A0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,20060
	ctx.r4.s64 = ctx.r11.s64 + 20060;
	// b 0x83a9574c
	goto loc_83A9574C;
loc_83A957A0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a95118
	ctx.lr = 0x83A957AC;
	sub_83A95118(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// bne 0x83a957c0
	if (!cr0.eq) goto loc_83A957C0;
loc_83A957B8:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x83a95758
	goto loc_83A95758;
loc_83A957C0:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,27264
	ctx.r10.s64 = ctx.r11.s64 + 27264;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A957D0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a957f4
	if (cr6.eq) goto loc_83A957F4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a957d0
	if (cr6.lt) goto loc_83A957D0;
	// b 0x83a957fc
	goto loc_83A957FC;
loc_83A957F4:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
loc_83A957FC:
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83a95810
	if (!cr6.eq) goto loc_83A95810;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83a94e00
	ctx.lr = 0x83A9580C;
	sub_83A94E00(ctx, base);
	// b 0x83a957b8
	goto loc_83A957B8;
loc_83A95810:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83A95818:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A95820"))) PPC_WEAK_FUNC(sub_83A95820);
PPC_FUNC_IMPL(__imp__sub_83A95820) {
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
	// bl 0x83a83240
	ctx.lr = 0x83A95838;
	sub_83A83240(ctx, base);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// beq cr6,0x83a95880
	if (cr6.eq) goto loc_83A95880;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// bge cr6,0x83a95864
	if (!cr6.lt) goto loc_83A95864;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,27264
	ctx.r10.s64 = ctx.r10.s64 + 27264;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x83a95868
	goto loc_83A95868;
loc_83A95864:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83A95868:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a95880
	if (cr6.eq) goto loc_83A95880;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a94e00
	ctx.lr = 0x83A95878;
	sub_83A94E00(ctx, base);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x83a95884
	goto loc_83A95884;
loc_83A95880:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83A95884:
	// bl 0x83a83248
	ctx.lr = 0x83A95888;
	sub_83A83248(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a95898
	if (cr6.eq) goto loc_83A95898;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a82de8
	ctx.lr = 0x83A95898;
	sub_83A82DE8(ctx, base);
loc_83A95898:
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

__attribute__((alias("__imp__sub_83A958AC"))) PPC_WEAK_FUNC(sub_83A958AC);
PPC_FUNC_IMPL(__imp__sub_83A958AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A958B0"))) PPC_WEAK_FUNC(sub_83A958B0);
PPC_FUNC_IMPL(__imp__sub_83A958B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83a95658
	sub_83A95658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A958B8"))) PPC_WEAK_FUNC(sub_83A958B8);
PPC_FUNC_IMPL(__imp__sub_83A958B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83a94050
	ctx.lr = 0x83A958C8;
	sub_83A94050(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a958d8
	if (cr0.eq) goto loc_83A958D8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83a956a8
	ctx.lr = 0x83A958D8;
	sub_83A956A8(ctx, base);
loc_83A958D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A958E8"))) PPC_WEAK_FUNC(sub_83A958E8);
PPC_FUNC_IMPL(__imp__sub_83A958E8) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a75cd8
	ctx.lr = 0x83A9590C;
	sub_83A75CD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a95428
	ctx.lr = 0x83A95918;
	sub_83A95428(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83a75d58
	ctx.lr = 0x83A95924;
	sub_83A75D58(ctx, base);
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

__attribute__((alias("__imp__sub_83A95940"))) PPC_WEAK_FUNC(sub_83A95940);
PPC_FUNC_IMPL(__imp__sub_83A95940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A95948;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9599c
	if (!cr6.eq) goto loc_83A9599C;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r4,r4,48000
	ctx.r4.u64 = ctx.r4.u64 | 48000;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x83a89f60
	ctx.lr = 0x83A95980;
	sub_83A89F60(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_83A9599C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a949b0
	ctx.lr = 0x83A959A4;
	sub_83A949B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83a959b4
	if (!cr0.lt) goto loc_83A959B4;
loc_83A959AC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a95a14
	goto loc_83A95A14;
loc_83A959B4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a82d48
	ctx.lr = 0x83A959C8;
	sub_83A82D48(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a959f0
	if (!cr0.eq) goto loc_83A959F0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,20084
	ctx.r4.s64 = ctx.r11.s64 + 20084;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A959E4;
	sub_831EA418(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a82de8
	ctx.lr = 0x83A959EC;
	sub_83A82DE8(ctx, base);
	// b 0x83a959ac
	goto loc_83A959AC;
loc_83A959F0:
	// bl 0x83a83240
	ctx.lr = 0x83A959F4;
	sub_83A83240(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a956f0
	ctx.lr = 0x83A95A08;
	sub_83A956F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a83248
	ctx.lr = 0x83A95A10;
	sub_83A83248(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A95A14:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A95A1C"))) PPC_WEAK_FUNC(sub_83A95A1C);
PPC_FUNC_IMPL(__imp__sub_83A95A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A95A20"))) PPC_WEAK_FUNC(sub_83A95A20);
PPC_FUNC_IMPL(__imp__sub_83A95A20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83a958e8
	sub_83A958E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A95A28"))) PPC_WEAK_FUNC(sub_83A95A28);
PPC_FUNC_IMPL(__imp__sub_83A95A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A95A30;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a95a4c
	if (!cr6.eq) goto loc_83A95A4C;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
loc_83A95A4C:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea798
	ctx.lr = 0x83A95A5C;
	sub_831EA798(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83acd3f0
	ctx.lr = 0x83A95A6C;
	sub_83ACD3F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a95aa8
	if (cr0.eq) goto loc_83A95AA8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// std r8,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// std r6,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r6.u64);
loc_83A95AA8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A95AB0"))) PPC_WEAK_FUNC(sub_83A95AB0);
PPC_FUNC_IMPL(__imp__sub_83A95AB0) {
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
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r31,r30,27296
	ctx.r31.s64 = ctx.r30.s64 + 27296;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83a75be8
	ctx.lr = 0x83A95AD8;
	sub_83A75BE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,27296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27296, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A95B0C"))) PPC_WEAK_FUNC(sub_83A95B0C);
PPC_FUNC_IMPL(__imp__sub_83A95B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A95B10"))) PPC_WEAK_FUNC(sub_83A95B10);
PPC_FUNC_IMPL(__imp__sub_83A95B10) {
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
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// lwz r3,27308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27308);
	// bl 0x83a75c60
	ctx.lr = 0x83A95B2C;
	sub_83A75C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27308, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A95B48"))) PPC_WEAK_FUNC(sub_83A95B48);
PPC_FUNC_IMPL(__imp__sub_83A95B48) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x83a979c0
	ctx.lr = 0x83A95B70;
	sub_83A979C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83a95b80
	if (!cr0.lt) goto loc_83A95B80;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a95ba4
	goto loc_83A95BA4;
loc_83A95B80:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a95b98
	if (cr6.eq) goto loc_83A95B98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea6f8
	ctx.lr = 0x83A95B90;
	sub_831EA6F8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// b 0x83a95b9c
	goto loc_83A95B9C;
loc_83A95B98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A95B9C:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
loc_83A95BA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A95BBC"))) PPC_WEAK_FUNC(sub_83A95BBC);
PPC_FUNC_IMPL(__imp__sub_83A95BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A95BC0"))) PPC_WEAK_FUNC(sub_83A95BC0);
PPC_FUNC_IMPL(__imp__sub_83A95BC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A95BCC"))) PPC_WEAK_FUNC(sub_83A95BCC);
PPC_FUNC_IMPL(__imp__sub_83A95BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A95BD0"))) PPC_WEAK_FUNC(sub_83A95BD0);
PPC_FUNC_IMPL(__imp__sub_83A95BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,27296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A95BEC"))) PPC_WEAK_FUNC(sub_83A95BEC);
PPC_FUNC_IMPL(__imp__sub_83A95BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A95BF0"))) PPC_WEAK_FUNC(sub_83A95BF0);
PPC_FUNC_IMPL(__imp__sub_83A95BF0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a95c6c
	if (cr6.eq) goto loc_83A95C6C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a95c64
	if (cr6.eq) goto loc_83A95C64;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83a95c5c
	if (cr6.eq) goto loc_83A95C5C;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// beq cr6,0x83a95c50
	if (cr6.eq) goto loc_83A95C50;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r10,20236
	ctx.r4.s64 = ctx.r10.s64 + 20236;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A95C4C;
	sub_831EA418(ctx, base);
	// b 0x83a95c74
	goto loc_83A95C74;
loc_83A95C50:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x83a95c70
	goto loc_83A95C70;
loc_83A95C5C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83a95c70
	goto loc_83A95C70;
loc_83A95C64:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83a95c70
	goto loc_83A95C70;
loc_83A95C6C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83A95C70:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83A95C74:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// beq 0x83a95ca8
	if (cr0.eq) goto loc_83A95CA8;
	// lhz r11,38(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 38);
	// b 0x83a95cac
	goto loc_83A95CAC;
loc_83A95CA8:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
loc_83A95CAC:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A95CC8"))) PPC_WEAK_FUNC(sub_83A95CC8);
PPC_FUNC_IMPL(__imp__sub_83A95CC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a99aa0
	sub_83A99AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A95CCC"))) PPC_WEAK_FUNC(sub_83A95CCC);
PPC_FUNC_IMPL(__imp__sub_83A95CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A95CD0"))) PPC_WEAK_FUNC(sub_83A95CD0);
PPC_FUNC_IMPL(__imp__sub_83A95CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lis r10,296
	ctx.r10.s64 = 19398656;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A95CE4"))) PPC_WEAK_FUNC(sub_83A95CE4);
PPC_FUNC_IMPL(__imp__sub_83A95CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A95CE8"))) PPC_WEAK_FUNC(sub_83A95CE8);
PPC_FUNC_IMPL(__imp__sub_83A95CE8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a95d14
	if (!cr6.eq) goto loc_83A95D14;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20248
	ctx.r4.s64 = ctx.r11.s64 + 20248;
	// bl 0x831ea418
	ctx.lr = 0x83A95D0C;
	sub_831EA418(ctx, base);
loc_83A95D0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a95d2c
	goto loc_83A95D2C;
loc_83A95D14:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a95d0c
	if (cr6.eq) goto loc_83A95D0C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a99fb8
	ctx.lr = 0x83A95D2C;
	sub_83A99FB8(ctx, base);
loc_83A95D2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A95D3C"))) PPC_WEAK_FUNC(sub_83A95D3C);
PPC_FUNC_IMPL(__imp__sub_83A95D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A95D40"))) PPC_WEAK_FUNC(sub_83A95D40);
PPC_FUNC_IMPL(__imp__sub_83A95D40) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a95d6c
	if (!cr6.eq) goto loc_83A95D6C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20260
	ctx.r4.s64 = ctx.r11.s64 + 20260;
	// bl 0x831ea418
	ctx.lr = 0x83A95D64;
	sub_831EA418(ctx, base);
loc_83A95D64:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a95d84
	goto loc_83A95D84;
loc_83A95D6C:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a95d64
	if (cr6.eq) goto loc_83A95D64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a99fb8
	ctx.lr = 0x83A95D84;
	sub_83A99FB8(ctx, base);
loc_83A95D84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A95D94"))) PPC_WEAK_FUNC(sub_83A95D94);
PPC_FUNC_IMPL(__imp__sub_83A95D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A95D98"))) PPC_WEAK_FUNC(sub_83A95D98);
PPC_FUNC_IMPL(__imp__sub_83A95D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// stw r3,27284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27284, ctx.r3.u32);
	// stw r4,27288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27288, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A95DAC"))) PPC_WEAK_FUNC(sub_83A95DAC);
PPC_FUNC_IMPL(__imp__sub_83A95DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A95DB0"))) PPC_WEAK_FUNC(sub_83A95DB0);
PPC_FUNC_IMPL(__imp__sub_83A95DB0) {
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
	// li r5,35
	ctx.r5.s64 = 35;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83a9e4b0
	ctx.lr = 0x83A95DD4;
	sub_83A9E4B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9d690
	ctx.lr = 0x83A95DDC;
	sub_83A9D690(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a95ce8
	ctx.lr = 0x83A95DE4;
	sub_83A95CE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a95d40
	ctx.lr = 0x83A95DF0;
	sub_83A95D40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a95e18
	if (cr6.eq) goto loc_83A95E18;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acd4c8
	ctx.lr = 0x83A95E08;
	sub_83ACD4C8(ctx, base);
	// li r5,35
	ctx.r5.s64 = 35;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9e5c0
	ctx.lr = 0x83A95E18;
	sub_83A9E5C0(ctx, base);
loc_83A95E18:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a95e3c
	if (cr6.eq) goto loc_83A95E3C;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83acd4c8
	ctx.lr = 0x83A95E2C;
	sub_83ACD4C8(ctx, base);
	// li r5,35
	ctx.r5.s64 = 35;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9e5c0
	ctx.lr = 0x83A95E3C;
	sub_83A9E5C0(ctx, base);
loc_83A95E3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A95E54"))) PPC_WEAK_FUNC(sub_83A95E54);
PPC_FUNC_IMPL(__imp__sub_83A95E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A95E58"))) PPC_WEAK_FUNC(sub_83A95E58);
PPC_FUNC_IMPL(__imp__sub_83A95E58) {
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
	// li r5,35
	ctx.r5.s64 = 35;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83a9e4b0
	ctx.lr = 0x83A95E7C;
	sub_83A9E4B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a95e8c
	if (cr0.eq) goto loc_83A95E8C;
loc_83A95E84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a95f14
	goto loc_83A95F14;
loc_83A95E8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a95ce8
	ctx.lr = 0x83A95E94;
	sub_83A95CE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a95d40
	ctx.lr = 0x83A95EA0;
	sub_83A95D40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a95ed8
	if (cr6.eq) goto loc_83A95ED8;
	// li r5,35
	ctx.r5.s64 = 35;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9e5c0
	ctx.lr = 0x83A95EBC;
	sub_83A9E5C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a95e84
	if (!cr0.eq) goto loc_83A95E84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ace480
	ctx.lr = 0x83A95ED0;
	sub_83ACE480(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a95e84
	if (!cr0.eq) goto loc_83A95E84;
loc_83A95ED8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a95f10
	if (cr6.eq) goto loc_83A95F10;
	// li r5,35
	ctx.r5.s64 = 35;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9e5c0
	ctx.lr = 0x83A95EF0;
	sub_83A9E5C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a95e84
	if (!cr0.eq) goto loc_83A95E84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ace480
	ctx.lr = 0x83A95F04;
	sub_83ACE480(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x83a95f14
	if (!cr0.eq) goto loc_83A95F14;
loc_83A95F10:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A95F14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A95F2C"))) PPC_WEAK_FUNC(sub_83A95F2C);
PPC_FUNC_IMPL(__imp__sub_83A95F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A95F30"))) PPC_WEAK_FUNC(sub_83A95F30);
PPC_FUNC_IMPL(__imp__sub_83A95F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A95F38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,27296
	ctx.r31.s64 = ctx.r11.s64 + 27296;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a75cd8
	ctx.lr = 0x83A95F50;
	sub_83A75CD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq cr6,0x83a95f94
	if (cr6.eq) goto loc_83A95F94;
loc_83A95F60:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a95f80
	if (cr6.eq) goto loc_83A95F80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x83a993f0
	ctx.lr = 0x83A95F78;
	sub_83A993F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a95f8c
	if (!cr0.eq) goto loc_83A95F8C;
loc_83A95F80:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a95f60
	if (!cr6.eq) goto loc_83A95F60;
loc_83A95F8C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a95f9c
	if (!cr6.eq) goto loc_83A95F9C;
loc_83A95F94:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83a95fa0
	goto loc_83A95FA0;
loc_83A95F9C:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83A95FA0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a75d58
	ctx.lr = 0x83A95FA8;
	sub_83A75D58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A95FB4"))) PPC_WEAK_FUNC(sub_83A95FB4);
PPC_FUNC_IMPL(__imp__sub_83A95FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A95FB8"))) PPC_WEAK_FUNC(sub_83A95FB8);
PPC_FUNC_IMPL(__imp__sub_83A95FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A95FC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,27296
	ctx.r31.s64 = ctx.r11.s64 + 27296;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a75cd8
	ctx.lr = 0x83A95FD8;
	sub_83A75CD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq cr6,0x83a9601c
	if (cr6.eq) goto loc_83A9601C;
loc_83A95FE8:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a96008
	if (cr6.eq) goto loc_83A96008;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x83a99418
	ctx.lr = 0x83A96000;
	sub_83A99418(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a96014
	if (!cr0.eq) goto loc_83A96014;
loc_83A96008:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a95fe8
	if (!cr6.eq) goto loc_83A95FE8;
loc_83A96014:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a96024
	if (!cr6.eq) goto loc_83A96024;
loc_83A9601C:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83a96028
	goto loc_83A96028;
loc_83A96024:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83A96028:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a75d58
	ctx.lr = 0x83A96030;
	sub_83A75D58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9603C"))) PPC_WEAK_FUNC(sub_83A9603C);
PPC_FUNC_IMPL(__imp__sub_83A9603C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A96040"))) PPC_WEAK_FUNC(sub_83A96040);
PPC_FUNC_IMPL(__imp__sub_83A96040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A96048;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,27296(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27296);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a96090
	if (cr6.eq) goto loc_83A96090;
loc_83A96060:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x839f82f0
	ctx.lr = 0x83A96074;
	sub_839F82F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a96088
	if (cr0.eq) goto loc_83A96088;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a96060
	if (!cr6.eq) goto loc_83A96060;
loc_83A96088:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a96098
	if (!cr6.eq) goto loc_83A96098;
loc_83A96090:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a9609c
	goto loc_83A9609C;
loc_83A96098:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83A9609C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A960A4"))) PPC_WEAK_FUNC(sub_83A960A4);
PPC_FUNC_IMPL(__imp__sub_83A960A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A960A8"))) PPC_WEAK_FUNC(sub_83A960A8);
PPC_FUNC_IMPL(__imp__sub_83A960A8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,27296
	ctx.r31.s64 = ctx.r11.s64 + 27296;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a75cd8
	ctx.lr = 0x83A960D0;
	sub_83A75CD8(ctx, base);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a960fc
	if (!cr6.eq) goto loc_83A960FC;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// b 0x83a96100
	goto loc_83A96100;
loc_83A960FC:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_83A96100:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A96120;
	sub_83A75D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A96138"))) PPC_WEAK_FUNC(sub_83A96138);
PPC_FUNC_IMPL(__imp__sub_83A96138) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a9616c
	if (!cr6.eq) goto loc_83A9616C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,20284
	ctx.r4.s64 = ctx.r11.s64 + 20284;
loc_83A9615C:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A96168;
	sub_831EA418(ctx, base);
	// b 0x83a961ac
	goto loc_83A961AC;
loc_83A9616C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96190
	if (!cr6.eq) goto loc_83A96190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a95fb8
	ctx.lr = 0x83A9617C;
	sub_83A95FB8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a96190
	if (!cr0.eq) goto loc_83A96190;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,20272
	ctx.r4.s64 = ctx.r11.s64 + 20272;
	// b 0x83a9615c
	goto loc_83A9615C;
loc_83A96190:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83a99b78
	ctx.lr = 0x83A9619C;
	sub_83A99B78(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// ble cr6,0x83a961b0
	if (!cr6.gt) goto loc_83A961B0;
loc_83A961AC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A961B0:
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

__attribute__((alias("__imp__sub_83A961C4"))) PPC_WEAK_FUNC(sub_83A961C4);
PPC_FUNC_IMPL(__imp__sub_83A961C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A961C8"))) PPC_WEAK_FUNC(sub_83A961C8);
PPC_FUNC_IMPL(__imp__sub_83A961C8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x83a961fc
	if (!cr6.lt) goto loc_83A961FC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,20308
	ctx.r4.s64 = ctx.r11.s64 + 20308;
loc_83A961EC:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A961F8;
	sub_831EA418(ctx, base);
	// b 0x83a96238
	goto loc_83A96238;
loc_83A961FC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96220
	if (!cr6.eq) goto loc_83A96220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a95f30
	ctx.lr = 0x83A9620C;
	sub_83A95F30(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a96220
	if (!cr0.eq) goto loc_83A96220;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,20296
	ctx.r4.s64 = ctx.r11.s64 + 20296;
	// b 0x83a961ec
	goto loc_83A961EC;
loc_83A96220:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83a99bd8
	ctx.lr = 0x83A9622C;
	sub_83A99BD8(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// bne cr6,0x83a9623c
	if (!cr6.eq) goto loc_83A9623C;
loc_83A96238:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A9623C:
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

__attribute__((alias("__imp__sub_83A96250"))) PPC_WEAK_FUNC(sub_83A96250);
PPC_FUNC_IMPL(__imp__sub_83A96250) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a96284
	if (!cr6.eq) goto loc_83A96284;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,20332
	ctx.r4.s64 = ctx.r11.s64 + 20332;
loc_83A96274:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A96280;
	sub_831EA418(ctx, base);
	// b 0x83a962c0
	goto loc_83A962C0;
loc_83A96284:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a962a8
	if (!cr6.eq) goto loc_83A962A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a95fb8
	ctx.lr = 0x83A96294;
	sub_83A95FB8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a962a8
	if (!cr0.eq) goto loc_83A962A8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,20320
	ctx.r4.s64 = ctx.r11.s64 + 20320;
	// b 0x83a96274
	goto loc_83A96274;
loc_83A962A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83a99c20
	ctx.lr = 0x83A962B4;
	sub_83A99C20(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// bne cr6,0x83a962c4
	if (!cr6.eq) goto loc_83A962C4;
loc_83A962C0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A962C4:
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

__attribute__((alias("__imp__sub_83A962D8"))) PPC_WEAK_FUNC(sub_83A962D8);
PPC_FUNC_IMPL(__imp__sub_83A962D8) {
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
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x83a9632c
	if (!cr6.lt) goto loc_83A9632C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,20356
	ctx.r4.s64 = ctx.r11.s64 + 20356;
loc_83A96304:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A96310;
	sub_831EA418(ctx, base);
loc_83A96310:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A96314:
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
loc_83A9632C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96350
	if (!cr6.eq) goto loc_83A96350;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a95f30
	ctx.lr = 0x83A9633C;
	sub_83A95F30(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a96350
	if (!cr0.eq) goto loc_83A96350;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,20344
	ctx.r4.s64 = ctx.r11.s64 + 20344;
	// b 0x83a96304
	goto loc_83A96304;
loc_83A96350:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a99c68
	ctx.lr = 0x83A96368;
	sub_83A99C68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a96310
	if (cr0.eq) goto loc_83A96310;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a963c4
	if (!cr6.gt) goto loc_83A963C4;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_83A96384:
	// li r11,8
	ctx.r11.s64 = 8;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A96394:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a963a8
	if (cr0.eq) goto loc_83A963A8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_83A963A8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83a96394
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A96394;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x83a96384
	if (!cr0.eq) goto loc_83A96384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83a96314
	goto loc_83A96314;
loc_83A963C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a96314
	goto loc_83A96314;
}

__attribute__((alias("__imp__sub_83A963CC"))) PPC_WEAK_FUNC(sub_83A963CC);
PPC_FUNC_IMPL(__imp__sub_83A963CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A963D0"))) PPC_WEAK_FUNC(sub_83A963D0);
PPC_FUNC_IMPL(__imp__sub_83A963D0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x83a96410
	if (!cr6.lt) goto loc_83A96410;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,20392
	ctx.r4.s64 = ctx.r11.s64 + 20392;
loc_83A963FC:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A96408;
	sub_831EA418(ctx, base);
loc_83A96408:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a96474
	goto loc_83A96474;
loc_83A96410:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a96424
	if (!cr6.eq) goto loc_83A96424;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,20380
	ctx.r4.s64 = ctx.r11.s64 + 20380;
	// b 0x83a963fc
	goto loc_83A963FC;
loc_83A96424:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96448
	if (!cr6.eq) goto loc_83A96448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a95f30
	ctx.lr = 0x83A96434;
	sub_83A95F30(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a96448
	if (!cr0.eq) goto loc_83A96448;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,20368
	ctx.r4.s64 = ctx.r11.s64 + 20368;
	// b 0x83a963fc
	goto loc_83A963FC;
loc_83A96448:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a99d20
	ctx.lr = 0x83A9645C;
	sub_83A99D20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a96408
	if (cr0.eq) goto loc_83A96408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a95bf0
	ctx.lr = 0x83A96470;
	sub_83A95BF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A96474:
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

__attribute__((alias("__imp__sub_83A9648C"))) PPC_WEAK_FUNC(sub_83A9648C);
PPC_FUNC_IMPL(__imp__sub_83A9648C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A96490"))) PPC_WEAK_FUNC(sub_83A96490);
PPC_FUNC_IMPL(__imp__sub_83A96490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A96498;
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a964cc
	if (!cr6.eq) goto loc_83A964CC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,20416
	ctx.r4.s64 = ctx.r11.s64 + 20416;
loc_83A964B8:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A964C4;
	sub_831EA418(ctx, base);
loc_83A964C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a96518
	goto loc_83A96518;
loc_83A964CC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a964f0
	if (!cr6.eq) goto loc_83A964F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a95f30
	ctx.lr = 0x83A964DC;
	sub_83A95F30(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a964f0
	if (!cr0.eq) goto loc_83A964F0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,20404
	ctx.r4.s64 = ctx.r11.s64 + 20404;
	// b 0x83a964b8
	goto loc_83A964B8;
loc_83A964F0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a98698
	ctx.lr = 0x83A96500;
	sub_83A98698(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a964c4
	if (cr0.eq) goto loc_83A964C4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x83a99440
	ctx.lr = 0x83A96518;
	sub_83A99440(ctx, base);
loc_83A96518:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A96520"))) PPC_WEAK_FUNC(sub_83A96520);
PPC_FUNC_IMPL(__imp__sub_83A96520) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96570
	if (!cr6.eq) goto loc_83A96570;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83a95f30
	ctx.lr = 0x83A9654C;
	sub_83A95F30(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a96570
	if (!cr0.eq) goto loc_83A96570;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20428
	ctx.r4.s64 = ctx.r11.s64 + 20428;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A96568;
	sub_831EA418(ctx, base);
loc_83A96568:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a96594
	goto loc_83A96594;
loc_83A96570:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a98698
	ctx.lr = 0x83A96580;
	sub_83A98698(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a96568
	if (cr0.eq) goto loc_83A96568;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a996e0
	ctx.lr = 0x83A96594;
	sub_83A996E0(ctx, base);
loc_83A96594:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A965AC"))) PPC_WEAK_FUNC(sub_83A965AC);
PPC_FUNC_IMPL(__imp__sub_83A965AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A965B0"))) PPC_WEAK_FUNC(sub_83A965B0);
PPC_FUNC_IMPL(__imp__sub_83A965B0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83a95db0
	ctx.lr = 0x83A965CC;
	sub_83A95DB0(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,27292
	ctx.r31.s64 = ctx.r11.s64 + 27292;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83a75cd8
	ctx.lr = 0x83A965DC;
	sub_83A75CD8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a96678
	if (cr6.eq) goto loc_83A96678;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a96610
	if (!cr6.eq) goto loc_83A96610;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x83a96654
	if (!cr6.eq) goto loc_83A96654;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x83a96650
	goto loc_83A96650;
loc_83A96610:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a96654
	if (cr6.eq) goto loc_83A96654;
loc_83A96618:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83a96630
	if (cr6.eq) goto loc_83A96630;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83a96618
	if (!cr0.eq) goto loc_83A96618;
loc_83A96630:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a96654
	if (cr6.eq) goto loc_83A96654;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a96654
	if (!cr6.eq) goto loc_83A96654;
loc_83A96650:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83A96654:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
loc_83A96678:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83a75d58
	ctx.lr = 0x83A96680;
	sub_83A75D58(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a96690
	if (cr6.eq) goto loc_83A96690;
	// bl 0x83a97a98
	ctx.lr = 0x83A96690;
	sub_83A97A98(ctx, base);
loc_83A96690:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A966A8"))) PPC_WEAK_FUNC(sub_83A966A8);
PPC_FUNC_IMPL(__imp__sub_83A966A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x83a966cc
	if (!cr6.lt) goto loc_83A966CC;
loc_83A966C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a966f0
	goto loc_83A966F0;
loc_83A966CC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a966e4
	if (!cr6.eq) goto loc_83A966E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a95f30
	ctx.lr = 0x83A966DC;
	sub_83A95F30(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a966c4
	if (cr0.eq) goto loc_83A966C4;
loc_83A966E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83a993f0
	ctx.lr = 0x83A966F0;
	sub_83A993F0(ctx, base);
loc_83A966F0:
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

__attribute__((alias("__imp__sub_83A96704"))) PPC_WEAK_FUNC(sub_83A96704);
PPC_FUNC_IMPL(__imp__sub_83A96704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A96708"))) PPC_WEAK_FUNC(sub_83A96708);
PPC_FUNC_IMPL(__imp__sub_83A96708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A96710;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r28,r11,27296
	ctx.r28.s64 = ctx.r11.s64 + 27296;
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a967c4
	if (!cr6.gt) goto loc_83A967C4;
	// b 0x83a967b8
	goto loc_83A967B8;
loc_83A9672C:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x83a96768
	goto loc_83A96768;
loc_83A9673C:
	// bl 0x83a81a70
	ctx.lr = 0x83A96740;
	sub_83A81A70(ctx, base);
	// bl 0x83a824e0
	ctx.lr = 0x83A96744;
	sub_83A824E0(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83a75e98
	ctx.lr = 0x83A9674C;
	sub_83A75E98(ctx, base);
	// li r11,3000
	ctx.r11.s64 = 3000;
	// divwu r11,r30,r11
	ctx.r11.u32 = PPCDivide(ctx.r30.u32, ctx.r11.u32);
	// mulli r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 * 3000;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,2999
	cr6.compare<uint32_t>(ctx.r11.u32, 2999, xer);
	// beq cr6,0x83a96788
	if (cr6.eq) goto loc_83A96788;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_83A96768:
	// bl 0x83a82480
	ctx.lr = 0x83A9676C;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a95db0
	ctx.lr = 0x83A96774;
	sub_83A95DB0(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A96778;
	sub_83A824C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a95e58
	ctx.lr = 0x83A96780;
	sub_83A95E58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9673c
	if (cr0.eq) goto loc_83A9673C;
loc_83A96788:
	// bl 0x83a82480
	ctx.lr = 0x83A9678C;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a965b0
	ctx.lr = 0x83A96794;
	sub_83A965B0(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A96798;
	sub_83A824C0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a967b0
	if (cr6.eq) goto loc_83A967B0;
	// bl 0x83a999c8
	ctx.lr = 0x83A967A8;
	sub_83A999C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83A967B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a82de8
	ctx.lr = 0x83A967B8;
	sub_83A82DE8(ctx, base);
loc_83A967B8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9672c
	if (!cr6.eq) goto loc_83A9672C;
loc_83A967C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A967CC"))) PPC_WEAK_FUNC(sub_83A967CC);
PPC_FUNC_IMPL(__imp__sub_83A967CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A967D0"))) PPC_WEAK_FUNC(sub_83A967D0);
PPC_FUNC_IMPL(__imp__sub_83A967D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A967D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a967fc
	if (!cr6.eq) goto loc_83A967FC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20440
	ctx.r4.s64 = ctx.r11.s64 + 20440;
	// bl 0x831ea418
	ctx.lr = 0x83A967F8;
	sub_831EA418(ctx, base);
	// b 0x83a96884
	goto loc_83A96884;
loc_83A967FC:
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83a96834
	goto loc_83A96834;
loc_83A96808:
	// bl 0x83a81a70
	ctx.lr = 0x83A9680C;
	sub_83A81A70(ctx, base);
	// bl 0x83a824e0
	ctx.lr = 0x83A96810;
	sub_83A824E0(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83a75e98
	ctx.lr = 0x83A96818;
	sub_83A75E98(ctx, base);
	// li r11,3000
	ctx.r11.s64 = 3000;
	// divwu r11,r30,r11
	ctx.r11.u32 = PPCDivide(ctx.r30.u32, ctx.r11.u32);
	// mulli r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 * 3000;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,2999
	cr6.compare<uint32_t>(ctx.r11.u32, 2999, xer);
	// beq cr6,0x83a96854
	if (cr6.eq) goto loc_83A96854;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_83A96834:
	// bl 0x83a82480
	ctx.lr = 0x83A96838;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a95db0
	ctx.lr = 0x83A96840;
	sub_83A95DB0(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A96844;
	sub_83A824C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a95e58
	ctx.lr = 0x83A9684C;
	sub_83A95E58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a96808
	if (cr0.eq) goto loc_83A96808;
loc_83A96854:
	// bl 0x83a82480
	ctx.lr = 0x83A96858;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a965b0
	ctx.lr = 0x83A96860;
	sub_83A965B0(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A96864;
	sub_83A824C0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9687c
	if (cr6.eq) goto loc_83A9687C;
	// bl 0x83a999c8
	ctx.lr = 0x83A96874;
	sub_83A999C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83A9687C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a82de8
	ctx.lr = 0x83A96884;
	sub_83A82DE8(ctx, base);
loc_83A96884:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9688C"))) PPC_WEAK_FUNC(sub_83A9688C);
PPC_FUNC_IMPL(__imp__sub_83A9688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A96890"))) PPC_WEAK_FUNC(sub_83A96890);
PPC_FUNC_IMPL(__imp__sub_83A96890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A96898;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a96aa0
	if (cr6.eq) goto loc_83A96AA0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83a96aa0
	if (!cr6.gt) goto loc_83A96AA0;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,27296
	ctx.r31.s64 = ctx.r11.s64 + 27296;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a75cd8
	ctx.lr = 0x83A968D4;
	sub_83A75CD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r8,r30,r29
	ctx.r8.u64 = ctx.r30.u64 + ctx.r29.u64;
	// b 0x83a96904
	goto loc_83A96904;
loc_83A968E0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x83a96900
	if (!cr6.lt) goto loc_83A96900;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a96934
	if (cr6.lt) goto loc_83A96934;
loc_83A96900:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83A96904:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a968e0
	if (!cr6.eq) goto loc_83A968E0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83A96910:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a75d58
	ctx.lr = 0x83A96918;
	sub_83A75D58(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x83a9693c
	if (!cr6.eq) goto loc_83A9693C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,20520
	ctx.r4.s64 = ctx.r11.s64 + 20520;
	// bl 0x831ea3f0
	ctx.lr = 0x83A96930;
	sub_831EA3F0(ctx, base);
	// b 0x83a96ab4
	goto loc_83A96AB4;
loc_83A96934:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x83a96910
	goto loc_83A96910;
loc_83A9693C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a95b48
	ctx.lr = 0x83A96950;
	sub_83A95B48(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x83a96ab4
	if (cr0.lt) goto loc_83A96AB4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a82d48
	ctx.lr = 0x83A9696C;
	sub_83A82D48(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a96984
	if (!cr0.eq) goto loc_83A96984;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,20504
	ctx.r4.s64 = ctx.r11.s64 + 20504;
	// b 0x83a96aac
	goto loc_83A96AAC;
loc_83A96984:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a77b68
	ctx.lr = 0x83A96990;
	sub_83A77B68(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b78
	ctx.lr = 0x83A969A0;
	sub_83A77B78(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x83a979c0
	ctx.lr = 0x83A969BC;
	sub_83A979C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b78
	ctx.lr = 0x83A969D0;
	sub_83A77B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a979c8
	ctx.lr = 0x83A969E0;
	sub_83A979C8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83102db0
	ctx.lr = 0x83A969EC;
	sub_83102DB0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a99b08
	ctx.lr = 0x83A969FC;
	sub_83A99B08(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a99368
	ctx.lr = 0x83A96A0C;
	sub_83A99368(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a96a90
	if (cr0.eq) goto loc_83A96A90;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83a96a90
	if (cr6.eq) goto loc_83A96A90;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a96a90
	if (cr0.eq) goto loc_83A96A90;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ea6f8
	ctx.lr = 0x83A96A30;
	sub_831EA6F8(ctx, base);
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a77b78
	ctx.lr = 0x83A96A44;
	sub_83A77B78(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831ea658
	ctx.lr = 0x83A96A54;
	sub_831EA658(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83a99e40
	ctx.lr = 0x83A96A6C;
	sub_83A99E40(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a96a90
	if (!cr0.eq) goto loc_83A96A90;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,20464
	ctx.r4.s64 = ctx.r11.s64 + 20464;
	// bl 0x831ea3f0
	ctx.lr = 0x83A96A84;
	sub_831EA3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a967d0
	ctx.lr = 0x83A96A8C;
	sub_83A967D0(ctx, base);
	// b 0x83a96ab4
	goto loc_83A96AB4;
loc_83A96A90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a960a8
	ctx.lr = 0x83A96A98;
	sub_83A960A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83a96ab8
	goto loc_83A96AB8;
loc_83A96AA0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20452
	ctx.r4.s64 = ctx.r11.s64 + 20452;
loc_83A96AAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A96AB4;
	sub_831EA418(ctx, base);
loc_83A96AB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A96AB8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A96AC0"))) PPC_WEAK_FUNC(sub_83A96AC0);
PPC_FUNC_IMPL(__imp__sub_83A96AC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a96890
	sub_83A96890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A96AC4"))) PPC_WEAK_FUNC(sub_83A96AC4);
PPC_FUNC_IMPL(__imp__sub_83A96AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A96AC8"))) PPC_WEAK_FUNC(sub_83A96AC8);
PPC_FUNC_IMPL(__imp__sub_83A96AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,27384
	ctx.r11.s64 = ctx.r11.s64 + 27384;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A96B0C"))) PPC_WEAK_FUNC(sub_83A96B0C);
PPC_FUNC_IMPL(__imp__sub_83A96B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A96B10"))) PPC_WEAK_FUNC(sub_83A96B10);
PPC_FUNC_IMPL(__imp__sub_83A96B10) {
	PPC_FUNC_PROLOGUE();
	// li r3,236
	ctx.r3.s64 = 236;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A96B18"))) PPC_WEAK_FUNC(sub_83A96B18);
PPC_FUNC_IMPL(__imp__sub_83A96B18) {
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
	// bne cr6,0x83a96b48
	if (!cr6.eq) goto loc_83A96B48;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20660
	ctx.r4.s64 = ctx.r11.s64 + 20660;
	// bl 0x831ea418
	ctx.lr = 0x83A96B44;
	sub_831EA418(ctx, base);
	// b 0x83a96b8c
	goto loc_83A96B8C;
loc_83A96B48:
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x83ab8720
	ctx.lr = 0x83A96B50;
	sub_83AB8720(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stb r10,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r10.u8);
loc_83A96B8C:
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

__attribute__((alias("__imp__sub_83A96BA0"))) PPC_WEAK_FUNC(sub_83A96BA0);
PPC_FUNC_IMPL(__imp__sub_83A96BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96bb8
	if (!cr6.eq) goto loc_83A96BB8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20684
	ctx.r4.s64 = ctx.r11.s64 + 20684;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96BB8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a96bd4
	if (!cr6.eq) goto loc_83A96BD4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20672
	ctx.r4.s64 = ctx.r11.s64 + 20672;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96BD4:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A96BF8"))) PPC_WEAK_FUNC(sub_83A96BF8);
PPC_FUNC_IMPL(__imp__sub_83A96BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96c10
	if (!cr6.eq) goto loc_83A96C10;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20708
	ctx.r4.s64 = ctx.r11.s64 + 20708;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96C10:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a96c2c
	if (!cr6.eq) goto loc_83A96C2C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20696
	ctx.r4.s64 = ctx.r11.s64 + 20696;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96C2C:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A96C50"))) PPC_WEAK_FUNC(sub_83A96C50);
PPC_FUNC_IMPL(__imp__sub_83A96C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96c68
	if (!cr6.eq) goto loc_83A96C68;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20732
	ctx.r4.s64 = ctx.r11.s64 + 20732;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96C68:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a96c84
	if (!cr6.eq) goto loc_83A96C84;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20720
	ctx.r4.s64 = ctx.r11.s64 + 20720;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96C84:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A96CA8"))) PPC_WEAK_FUNC(sub_83A96CA8);
PPC_FUNC_IMPL(__imp__sub_83A96CA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96ce0
	if (!cr6.eq) goto loc_83A96CE0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20744
	ctx.r4.s64 = ctx.r11.s64 + 20744;
	// bl 0x831ea418
	ctx.lr = 0x83A96CDC;
	sub_831EA418(ctx, base);
	// b 0x83a96d08
	goto loc_83A96D08;
loc_83A96CE0:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83ab04c0
	ctx.lr = 0x83A96CEC;
	sub_83AB04C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// stfs f31,180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
loc_83A96D08:
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

__attribute__((alias("__imp__sub_83A96D20"))) PPC_WEAK_FUNC(sub_83A96D20);
PPC_FUNC_IMPL(__imp__sub_83A96D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83ab04c0
	ctx.lr = 0x83A96D40;
	sub_83AB04C0(ctx, base);
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x83ab8750
	ctx.lr = 0x83A96D50;
	sub_83AB8750(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A96D64"))) PPC_WEAK_FUNC(sub_83A96D64);
PPC_FUNC_IMPL(__imp__sub_83A96D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A96D68"))) PPC_WEAK_FUNC(sub_83A96D68);
PPC_FUNC_IMPL(__imp__sub_83A96D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96d80
	if (!cr6.eq) goto loc_83A96D80;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20756
	ctx.r4.s64 = ctx.r11.s64 + 20756;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96D80:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f2,188(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A96D94"))) PPC_WEAK_FUNC(sub_83A96D94);
PPC_FUNC_IMPL(__imp__sub_83A96D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A96D98"))) PPC_WEAK_FUNC(sub_83A96D98);
PPC_FUNC_IMPL(__imp__sub_83A96D98) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ab8768
	sub_83AB8768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A96D9C"))) PPC_WEAK_FUNC(sub_83A96D9C);
PPC_FUNC_IMPL(__imp__sub_83A96D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A96DA0"))) PPC_WEAK_FUNC(sub_83A96DA0);
PPC_FUNC_IMPL(__imp__sub_83A96DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96db8
	if (!cr6.eq) goto loc_83A96DB8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20768
	ctx.r4.s64 = ctx.r11.s64 + 20768;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96DB8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A96DC8"))) PPC_WEAK_FUNC(sub_83A96DC8);
PPC_FUNC_IMPL(__imp__sub_83A96DC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ab8780
	sub_83AB8780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A96DCC"))) PPC_WEAK_FUNC(sub_83A96DCC);
PPC_FUNC_IMPL(__imp__sub_83A96DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A96DD0"))) PPC_WEAK_FUNC(sub_83A96DD0);
PPC_FUNC_IMPL(__imp__sub_83A96DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96de8
	if (!cr6.eq) goto loc_83A96DE8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20780
	ctx.r4.s64 = ctx.r11.s64 + 20780;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96DE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,168(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A96DF8"))) PPC_WEAK_FUNC(sub_83A96DF8);
PPC_FUNC_IMPL(__imp__sub_83A96DF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ab8790
	sub_83AB8790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A96DFC"))) PPC_WEAK_FUNC(sub_83A96DFC);
PPC_FUNC_IMPL(__imp__sub_83A96DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A96E00"))) PPC_WEAK_FUNC(sub_83A96E00);
PPC_FUNC_IMPL(__imp__sub_83A96E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96e18
	if (!cr6.eq) goto loc_83A96E18;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20792
	ctx.r4.s64 = ctx.r11.s64 + 20792;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96E18:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A96E28"))) PPC_WEAK_FUNC(sub_83A96E28);
PPC_FUNC_IMPL(__imp__sub_83A96E28) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A96E30"))) PPC_WEAK_FUNC(sub_83A96E30);
PPC_FUNC_IMPL(__imp__sub_83A96E30) {
	PPC_FUNC_PROLOGUE();
	// li r3,168
	ctx.r3.s64 = 168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A96E38"))) PPC_WEAK_FUNC(sub_83A96E38);
PPC_FUNC_IMPL(__imp__sub_83A96E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96e50
	if (!cr6.eq) goto loc_83A96E50;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20804
	ctx.r4.s64 = ctx.r11.s64 + 20804;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96E50:
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// b 0x83ab8710
	sub_83AB8710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A96E58"))) PPC_WEAK_FUNC(sub_83A96E58);
PPC_FUNC_IMPL(__imp__sub_83A96E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96e70
	if (!cr6.eq) goto loc_83A96E70;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20828
	ctx.r4.s64 = ctx.r11.s64 + 20828;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96E70:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a96e8c
	if (!cr6.eq) goto loc_83A96E8C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20816
	ctx.r4.s64 = ctx.r11.s64 + 20816;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96E8C:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A96EA8"))) PPC_WEAK_FUNC(sub_83A96EA8);
PPC_FUNC_IMPL(__imp__sub_83A96EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96ec0
	if (!cr6.eq) goto loc_83A96EC0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20852
	ctx.r4.s64 = ctx.r11.s64 + 20852;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96EC0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a96edc
	if (!cr6.eq) goto loc_83A96EDC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20840
	ctx.r4.s64 = ctx.r11.s64 + 20840;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96EDC:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A96EF8"))) PPC_WEAK_FUNC(sub_83A96EF8);
PPC_FUNC_IMPL(__imp__sub_83A96EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a96f10
	if (!cr6.eq) goto loc_83A96F10;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20912
	ctx.r4.s64 = ctx.r11.s64 + 20912;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96F10:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a96f2c
	if (!cr6.eq) goto loc_83A96F2C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20900
	ctx.r4.s64 = ctx.r11.s64 + 20900;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96F2C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a96f48
	if (!cr6.eq) goto loc_83A96F48;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20888
	ctx.r4.s64 = ctx.r11.s64 + 20888;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96F48:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f11,f10,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f12,f9,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmadds f11,f8,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x83a96fa4
	if (!cr6.eq) goto loc_83A96FA4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20876
	ctx.r4.s64 = ctx.r11.s64 + 20876;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96FA4:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bne cr6,0x83a96fc0
	if (!cr6.eq) goto loc_83A96FC0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20864
	ctx.r4.s64 = ctx.r11.s64 + 20864;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A96FC0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A97018"))) PPC_WEAK_FUNC(sub_83A97018);
PPC_FUNC_IMPL(__imp__sub_83A97018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a97030
	if (!cr6.eq) goto loc_83A97030;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20924
	ctx.r4.s64 = ctx.r11.s64 + 20924;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A97030:
	// stfs f1,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A97038"))) PPC_WEAK_FUNC(sub_83A97038);
PPC_FUNC_IMPL(__imp__sub_83A97038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a97050
	if (!cr6.eq) goto loc_83A97050;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20948
	ctx.r4.s64 = ctx.r11.s64 + 20948;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A97050:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a9706c
	if (!cr6.eq) goto loc_83A9706C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20936
	ctx.r4.s64 = ctx.r11.s64 + 20936;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9706C:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A97088"))) PPC_WEAK_FUNC(sub_83A97088);
PPC_FUNC_IMPL(__imp__sub_83A97088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a970a0
	if (!cr6.eq) goto loc_83A970A0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20960
	ctx.r4.s64 = ctx.r11.s64 + 20960;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A970A0:
	// stfs f1,136(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A970A8"))) PPC_WEAK_FUNC(sub_83A970A8);
PPC_FUNC_IMPL(__imp__sub_83A970A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a970c0
	if (!cr6.eq) goto loc_83A970C0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20972
	ctx.r4.s64 = ctx.r11.s64 + 20972;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A970C0:
	// stfs f1,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A970C8"))) PPC_WEAK_FUNC(sub_83A970C8);
PPC_FUNC_IMPL(__imp__sub_83A970C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A970D0"))) PPC_WEAK_FUNC(sub_83A970D0);
PPC_FUNC_IMPL(__imp__sub_83A970D0) {
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
	// bl 0x83a82480
	ctx.lr = 0x83A970E0;
	sub_83A82480(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,27400
	ctx.r10.s64 = ctx.r11.s64 + 27400;
	// lwz r11,-12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// b 0x83a97100
	goto loc_83A97100;
loc_83A970F4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r9,108(r8)
	PPC_STORE_U8(ctx.r8.u32 + 108, ctx.r9.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83A97100:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a970f4
	if (!cr6.eq) goto loc_83A970F4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x83a9711c
	goto loc_83A9711C;
loc_83A97110:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83A9711C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a97110
	if (!cr6.eq) goto loc_83A97110;
	// bl 0x83a824c0
	ctx.lr = 0x83A97128;
	sub_83A824C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A97138"))) PPC_WEAK_FUNC(sub_83A97138);
PPC_FUNC_IMPL(__imp__sub_83A97138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A97140;
	__savegprlr_29(ctx, base);
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
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a97164
	if (!cr6.eq) goto loc_83A97164;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_83A97164:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,236
	ctx.r5.s64 = 236;
	// bl 0x83a82d48
	ctx.lr = 0x83A97170;
	sub_83A82D48(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a97190
	if (!cr0.eq) goto loc_83A97190;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,20984
	ctx.r4.s64 = ctx.r11.s64 + 20984;
	// bl 0x831ea418
	ctx.lr = 0x83A97188;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a972a8
	goto loc_83A972A8;
loc_83A97190:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,236
	ctx.r4.s64 = 236;
	// bl 0x83a77b68
	ctx.lr = 0x83A9719C;
	sub_83A77B68(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,228
	ctx.r4.s64 = 228;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b78
	ctx.lr = 0x83A971AC;
	sub_83A77B78(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x83102db0
	ctx.lr = 0x83A971C0;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ab8720
	ctx.lr = 0x83A971C8;
	sub_83AB8720(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x83ab8720
	ctx.lr = 0x83A971D8;
	sub_83AB8720(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stb r10,157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 157, ctx.r10.u8);
	// stb r10,158(r31)
	PPC_STORE_U8(ctx.r31.u32 + 158, ctx.r10.u8);
	// stb r10,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r10.u8);
	// stb r10,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r10.u8);
	// stb r10,161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 161, ctx.r10.u8);
	// stb r10,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r10.u8);
	// stb r10,162(r31)
	PPC_STORE_U8(ctx.r31.u32 + 162, ctx.r10.u8);
	// stb r10,163(r31)
	PPC_STORE_U8(ctx.r31.u32 + 163, ctx.r10.u8);
	// stb r10,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r10.u8);
	// stb r10,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r10.u8);
	// stb r10,166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 166, ctx.r10.u8);
	// bl 0x831ce980
	ctx.lr = 0x83A97254;
	sub_831CE980(ctx, base);
	// stb r29,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r29.u8);
	// stw r31,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r31.u32);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// bl 0x83a82480
	ctx.lr = 0x83A97268;
	sub_83A82480(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,27388
	ctx.r11.s64 = ctx.r11.s64 + 27388;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a97284
	if (!cr6.eq) goto loc_83A97284;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x83a97290
	goto loc_83A97290;
loc_83A97284:
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
loc_83A97290:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A972A4;
	sub_83A824C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A972A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A972B0"))) PPC_WEAK_FUNC(sub_83A972B0);
PPC_FUNC_IMPL(__imp__sub_83A972B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A972B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a972dc
	if (!cr6.eq) goto loc_83A972DC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20996
	ctx.r4.s64 = ctx.r11.s64 + 20996;
	// bl 0x831ea418
	ctx.lr = 0x83A972D8;
	sub_831EA418(ctx, base);
	// b 0x83a97378
	goto loc_83A97378;
loc_83A972DC:
	// bl 0x83a82480
	ctx.lr = 0x83A972E0;
	sub_83A82480(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// addi r11,r11,27388
	ctx.r11.s64 = ctx.r11.s64 + 27388;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a97314
	if (!cr6.eq) goto loc_83A97314;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83a97358
	if (!cr6.eq) goto loc_83A97358;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x83a97354
	goto loc_83A97354;
loc_83A97314:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a97358
	if (cr6.eq) goto loc_83A97358;
loc_83A9731C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83a97334
	if (cr6.eq) goto loc_83A97334;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83a9731c
	if (!cr0.eq) goto loc_83A9731C;
loc_83A97334:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a97358
	if (cr6.eq) goto loc_83A97358;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x83a97358
	if (!cr6.eq) goto loc_83A97358;
loc_83A97354:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83A97358:
	// stw r29,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r29.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A9736C;
	sub_83A824C0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x83a82de8
	ctx.lr = 0x83A97378;
	sub_83A82DE8(ctx, base);
loc_83A97378:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A97380"))) PPC_WEAK_FUNC(sub_83A97380);
PPC_FUNC_IMPL(__imp__sub_83A97380) {
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
	// bne cr6,0x83a973b0
	if (!cr6.eq) goto loc_83A973B0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,21008
	ctx.r4.s64 = ctx.r11.s64 + 21008;
	// bl 0x831ea418
	ctx.lr = 0x83A973AC;
	sub_831EA418(ctx, base);
	// b 0x83a973f4
	goto loc_83A973F4;
loc_83A973B0:
	// bl 0x83a82480
	ctx.lr = 0x83A973B4;
	sub_83A82480(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A973C4;
	sub_831CE980(ctx, base);
	// lbz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83a973f0
	if (!cr6.eq) goto loc_83A973F0;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x83A973E0;
	sub_831CE980(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// stb r10,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r10.u8);
loc_83A973F0:
	// bl 0x83a824c0
	ctx.lr = 0x83A973F4;
	sub_83A824C0(ctx, base);
loc_83A973F4:
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

__attribute__((alias("__imp__sub_83A97408"))) PPC_WEAK_FUNC(sub_83A97408);
PPC_FUNC_IMPL(__imp__sub_83A97408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A97410;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,168
	ctx.r5.s64 = 168;
	// bl 0x83a82d48
	ctx.lr = 0x83A97428;
	sub_83A82D48(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a97448
	if (!cr0.eq) goto loc_83A97448;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,21020
	ctx.r4.s64 = ctx.r11.s64 + 21020;
	// bl 0x831ea418
	ctx.lr = 0x83A97440;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a974dc
	goto loc_83A974DC;
loc_83A97448:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x83a77b68
	ctx.lr = 0x83A97454;
	sub_83A77B68(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b78
	ctx.lr = 0x83A97464;
	sub_83A77B78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x83102db0
	ctx.lr = 0x83A97478;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ab8710
	ctx.lr = 0x83A97480;
	sub_83AB8710(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x83ab8710
	ctx.lr = 0x83A97488;
	sub_83AB8710(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r31,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r31.u32);
	// addi r30,r31,148
	ctx.r30.s64 = ctx.r31.s64 + 148;
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// bl 0x83a82480
	ctx.lr = 0x83A9749C;
	sub_83A82480(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,27400
	ctx.r11.s64 = ctx.r11.s64 + 27400;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a974b8
	if (!cr6.eq) goto loc_83A974B8;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x83a974c4
	goto loc_83A974C4;
loc_83A974B8:
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
loc_83A974C4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A974D8;
	sub_83A824C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A974DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A974E4"))) PPC_WEAK_FUNC(sub_83A974E4);
PPC_FUNC_IMPL(__imp__sub_83A974E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A974E8"))) PPC_WEAK_FUNC(sub_83A974E8);
PPC_FUNC_IMPL(__imp__sub_83A974E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A974F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a97514
	if (!cr6.eq) goto loc_83A97514;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,21032
	ctx.r4.s64 = ctx.r11.s64 + 21032;
	// bl 0x831ea418
	ctx.lr = 0x83A97510;
	sub_831EA418(ctx, base);
	// b 0x83a975b0
	goto loc_83A975B0;
loc_83A97514:
	// bl 0x83a82480
	ctx.lr = 0x83A97518;
	sub_83A82480(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r30,148
	ctx.r31.s64 = ctx.r30.s64 + 148;
	// addi r11,r11,27400
	ctx.r11.s64 = ctx.r11.s64 + 27400;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a9754c
	if (!cr6.eq) goto loc_83A9754C;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83a97590
	if (!cr6.eq) goto loc_83A97590;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x83a9758c
	goto loc_83A9758C;
loc_83A9754C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a97590
	if (cr6.eq) goto loc_83A97590;
loc_83A97554:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83a9756c
	if (cr6.eq) goto loc_83A9756C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83a97554
	if (!cr0.eq) goto loc_83A97554;
loc_83A9756C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a97590
	if (cr6.eq) goto loc_83A97590;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x83a97590
	if (!cr6.eq) goto loc_83A97590;
loc_83A9758C:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83A97590:
	// stw r29,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r29.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A975A4;
	sub_83A824C0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// bl 0x83a82de8
	ctx.lr = 0x83A975B0;
	sub_83A82DE8(ctx, base);
loc_83A975B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A975B8"))) PPC_WEAK_FUNC(sub_83A975B8);
PPC_FUNC_IMPL(__imp__sub_83A975B8) {
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
	// bne cr6,0x83a975e8
	if (!cr6.eq) goto loc_83A975E8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,21044
	ctx.r4.s64 = ctx.r11.s64 + 21044;
	// bl 0x831ea418
	ctx.lr = 0x83A975E4;
	sub_831EA418(ctx, base);
	// b 0x83a97608
	goto loc_83A97608;
loc_83A975E8:
	// bl 0x83a82480
	ctx.lr = 0x83A975EC;
	sub_83A82480(ctx, base);
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A975FC;
	sub_831CE980(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A97608;
	sub_83A824C0(ctx, base);
loc_83A97608:
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

__attribute__((alias("__imp__sub_83A9761C"))) PPC_WEAK_FUNC(sub_83A9761C);
PPC_FUNC_IMPL(__imp__sub_83A9761C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A97620"))) PPC_WEAK_FUNC(sub_83A97620);
PPC_FUNC_IMPL(__imp__sub_83A97620) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,27384
	ctx.r31.s64 = ctx.r11.s64 + 27384;
	// lwz r11,27384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27384);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x83a97678
	if (!cr0.eq) goto loc_83A97678;
	// b 0x83a97654
	goto loc_83A97654;
loc_83A9764C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83a974e8
	ctx.lr = 0x83A97654;
	sub_83A974E8(ctx, base);
loc_83A97654:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9764c
	if (!cr6.eq) goto loc_83A9764C;
	// b 0x83a9766c
	goto loc_83A9766C;
loc_83A97664:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83a972b0
	ctx.lr = 0x83A9766C;
	sub_83A972B0(ctx, base);
loc_83A9766C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a97664
	if (!cr6.eq) goto loc_83A97664;
loc_83A97678:
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

__attribute__((alias("__imp__sub_83A9768C"))) PPC_WEAK_FUNC(sub_83A9768C);
PPC_FUNC_IMPL(__imp__sub_83A9768C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A97690"))) PPC_WEAK_FUNC(sub_83A97690);
PPC_FUNC_IMPL(__imp__sub_83A97690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A97698;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a97830
	if (cr6.eq) goto loc_83A97830;
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A976BC;
	sub_831CDCF0(ctx, base);
	// lwz r29,196(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa3ce8
	ctx.lr = 0x83A976C8;
	sub_83AA3CE8(ctx, base);
	// addic. r11,r29,80
	xer.ca = ctx.r29.u32 > 4294967215;
	ctx.r11.s64 = ctx.r29.s64 + 80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq 0x83a976ec
	if (cr0.eq) goto loc_83A976EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83A976EC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a97728
	if (cr6.eq) goto loc_83A97728;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a97720
	if (cr6.eq) goto loc_83A97720;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83a97718
	if (cr6.eq) goto loc_83A97718;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83a97740
	if (!cr6.eq) goto loc_83A97740;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x83a9772c
	goto loc_83A9772C;
loc_83A97718:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x83a9772c
	goto loc_83A9772C;
loc_83A97720:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x83a9772c
	goto loc_83A9772C;
loc_83A97728:
	// li r11,4
	ctx.r11.s64 = 4;
loc_83A9772C:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83A97740:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lbz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 188);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lbz r11,186(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 186);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83a977f4
	if (cr6.eq) goto loc_83A977F4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x83a977ec
	if (cr6.eq) goto loc_83A977EC;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x83a977e4
	if (cr6.eq) goto loc_83A977E4;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// beq cr6,0x83a977dc
	if (cr6.eq) goto loc_83A977DC;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// beq cr6,0x83a977d4
	if (cr6.eq) goto loc_83A977D4;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83a977c8
	if (cr6.eq) goto loc_83A977C8;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// ori r10,r9,2
	ctx.r10.u64 = ctx.r9.u64 | 2;
	// addic r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x83a977f8
	goto loc_83A977F8;
loc_83A977C8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x83a977f8
	goto loc_83A977F8;
loc_83A977D4:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x83a977f8
	goto loc_83A977F8;
loc_83A977DC:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x83a977f8
	goto loc_83A977F8;
loc_83A977E4:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83a977f8
	goto loc_83A977F8;
loc_83A977EC:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83a977f8
	goto loc_83A977F8;
loc_83A977F4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83A977F8:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lbz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x83acab30
	ctx.lr = 0x83A97828;
	sub_83ACAB30(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A97830:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A97838"))) PPC_WEAK_FUNC(sub_83A97838);
PPC_FUNC_IMPL(__imp__sub_83A97838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A97840;
	__savegprlr_26(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x83a97690
	ctx.lr = 0x83A97864;
	sub_83A97690(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a97690
	ctx.lr = 0x83A97874;
	sub_83A97690(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a97690
	ctx.lr = 0x83A97884;
	sub_83A97690(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a97894
	if (cr6.eq) goto loc_83A97894;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
loc_83A97894:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,27412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27412);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A978B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A978BC"))) PPC_WEAK_FUNC(sub_83A978BC);
PPC_FUNC_IMPL(__imp__sub_83A978BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A978C0"))) PPC_WEAK_FUNC(sub_83A978C0);
PPC_FUNC_IMPL(__imp__sub_83A978C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A978C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x83a82480
	ctx.lr = 0x83A978D8;
	sub_83A82480(ctx, base);
	// bl 0x83a83240
	ctx.lr = 0x83A978DC;
	sub_83A83240(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a97948
	if (cr6.eq) goto loc_83A97948;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83aca700
	ctx.lr = 0x83A978F8;
	sub_83ACA700(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a97948
	if (!cr6.gt) goto loc_83A97948;
loc_83A97908:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,187(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 187);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a97934
	if (cr0.eq) goto loc_83A97934;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83a97690
	ctx.lr = 0x83A97924;
	sub_83A97690(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x83A97934;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A97934:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,252
	ctx.r31.s64 = ctx.r31.s64 + 252;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a97908
	if (cr6.lt) goto loc_83A97908;
loc_83A97948:
	// bl 0x83a83248
	ctx.lr = 0x83A9794C;
	sub_83A83248(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A97950;
	sub_83A824C0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A97958"))) PPC_WEAK_FUNC(sub_83A97958);
PPC_FUNC_IMPL(__imp__sub_83A97958) {
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
	// bl 0x83a82480
	ctx.lr = 0x83A97978;
	sub_83A82480(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r31,27412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27412, ctx.r31.u32);
	// bne cr6,0x83a97994
	if (!cr6.eq) goto loc_83A97994;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a979a0
	goto loc_83A979A0;
loc_83A97994:
	// lis r11,-31831
	ctx.r11.s64 = -2086076416;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,30776
	ctx.r3.s64 = ctx.r11.s64 + 30776;
loc_83A979A0:
	// bl 0x83acba90
	ctx.lr = 0x83A979A4;
	sub_83ACBA90(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A979A8;
	sub_83A824C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A979C0"))) PPC_WEAK_FUNC(sub_83A979C0);
PPC_FUNC_IMPL(__imp__sub_83A979C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,2504
	ctx.r3.s64 = 2504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A979C8"))) PPC_WEAK_FUNC(sub_83A979C8);
PPC_FUNC_IMPL(__imp__sub_83A979C8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,21228
	ctx.r5.s64 = ctx.r11.s64 + 21228;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea658
	ctx.lr = 0x83A979F8;
	sub_831EA658(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,21196
	ctx.r5.s64 = ctx.r11.s64 + 21196;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831ea658
	ctx.lr = 0x83A97A0C;
	sub_831EA658(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A97A18;
	sub_831EA7A0(ctx, base);
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r10,r10,2464
	ctx.r10.s64 = ctx.r10.s64 + 2464;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r10,2404(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2404, ctx.r10.u32);
	// stw r11,2400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2400, ctx.r11.u32);
	// stw r11,2408(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2408, ctx.r11.u32);
	// stw r11,2412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2412, ctx.r11.u32);
	// stw r11,2420(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2420, ctx.r11.u32);
	// stw r11,2424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2424, ctx.r11.u32);
	// stw r11,2428(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2428, ctx.r11.u32);
	// stw r11,2432(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2432, ctx.r11.u32);
	// stw r11,2436(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2436, ctx.r11.u32);
	// stw r11,2448(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2448, ctx.r11.u32);
	// lwz r10,27472(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27472);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r11,27472(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27472, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A97A98"))) PPC_WEAK_FUNC(sub_83A97A98);
PPC_FUNC_IMPL(__imp__sub_83A97A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A97AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83aa83f8
	ctx.lr = 0x83A97AB0;
	sub_83AA83F8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x83a97ac4
	goto loc_83A97AC4;
loc_83A97AB8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83abbfb8
	ctx.lr = 0x83A97AC0;
	sub_83ABBFB8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_83A97AC4:
	// lwz r30,2452(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2452);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a97afc
	if (cr6.eq) goto loc_83A97AFC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r11.u32);
	// bne cr6,0x83a97ae4
	if (!cr6.eq) goto loc_83A97AE4;
	// stw r29,2456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2456, ctx.r29.u32);
loc_83A97AE4:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lwz r11,2460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2460);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2460, ctx.r11.u32);
	// bne cr6,0x83a97ab8
	if (!cr6.eq) goto loc_83A97AB8;
loc_83A97AFC:
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A97B0C"))) PPC_WEAK_FUNC(sub_83A97B0C);
PPC_FUNC_IMPL(__imp__sub_83A97B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A97B10"))) PPC_WEAK_FUNC(sub_83A97B10);
PPC_FUNC_IMPL(__imp__sub_83A97B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a97b50
	if (cr6.eq) goto loc_83A97B50;
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a97b50
	if (!cr6.eq) goto loc_83A97B50;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r5,88(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,21260
	ctx.r4.s64 = ctx.r11.s64 + 21260;
	// bl 0x831ea400
	ctx.lr = 0x83A97B48;
	sub_831EA400(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a97b6c
	goto loc_83A97B6C;
loc_83A97B50:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,524
	ctx.r3.s64 = ctx.r3.s64 + 524;
	// bl 0x83ac4b38
	ctx.lr = 0x83A97B5C;
	sub_83AC4B38(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_83A97B6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A97B7C"))) PPC_WEAK_FUNC(sub_83A97B7C);
PPC_FUNC_IMPL(__imp__sub_83A97B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A97B80"))) PPC_WEAK_FUNC(sub_83A97B80);
PPC_FUNC_IMPL(__imp__sub_83A97B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A97B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,424
	ctx.r3.s64 = ctx.r3.s64 + 424;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x83ac4860
	ctx.lr = 0x83A97BA4;
	sub_83AC4860(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a97bcc
	if (cr0.eq) goto loc_83A97BCC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// b 0x83a97bd0
	goto loc_83A97BD0;
loc_83A97BCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A97BD0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A97BD8"))) PPC_WEAK_FUNC(sub_83A97BD8);
PPC_FUNC_IMPL(__imp__sub_83A97BD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A97BE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r3,816
	ctx.r3.s64 = ctx.r3.s64 + 816;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x83ac52a0
	ctx.lr = 0x83A97C04;
	sub_83AC52A0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a97c48
	if (cr6.eq) goto loc_83A97C48;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83a97c48
	if (cr6.eq) goto loc_83A97C48;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,1344
	ctx.r3.s64 = ctx.r30.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83A97C24;
	sub_83AC6090(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83ab3320
	ctx.lr = 0x83A97C48;
	sub_83AB3320(ctx, base);
loc_83A97C48:
	// lhz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 176);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a97d94
	if (cr0.eq) goto loc_83A97D94;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r25,r30,1224
	ctx.r25.s64 = ctx.r30.s64 + 1224;
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
loc_83A97C64:
	// lbzu r11,2(r27)
	ea = 2 + ctx.r27.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lbz r10,-1(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + -1);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83ac5f10
	ctx.lr = 0x83A97C84;
	sub_83AC5F10(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a97cc8
	if (cr6.eq) goto loc_83A97CC8;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83a97cc8
	if (cr6.eq) goto loc_83A97CC8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,1344
	ctx.r3.s64 = ctx.r30.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83A97CA4;
	sub_83AC6090(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83ab3320
	ctx.lr = 0x83A97CC8;
	sub_83AB3320(ctx, base);
loc_83A97CC8:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r3,r30,1344
	ctx.r3.s64 = ctx.r30.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83A97CD8;
	sub_83AC6090(ctx, base);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_83A97CDC:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// beq 0x83a97d7c
	if (cr0.eq) goto loc_83A97D7C;
	// cmpwi cr6,r11,2000
	cr6.compare<int32_t>(ctx.r11.s32, 2000, xer);
	// beq cr6,0x83a97d24
	if (cr6.eq) goto loc_83A97D24;
	// cmpwi cr6,r11,2003
	cr6.compare<int32_t>(ctx.r11.s32, 2003, xer);
	// beq cr6,0x83a97d24
	if (cr6.eq) goto loc_83A97D24;
	// cmpwi cr6,r11,4000
	cr6.compare<int32_t>(ctx.r11.s32, 4000, xer);
	// beq cr6,0x83a97d7c
	if (cr6.eq) goto loc_83A97D7C;
	// lbz r11,-1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83a97cdc
	goto loc_83A97CDC;
loc_83A97D24:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83a99ff8
	ctx.lr = 0x83A97D64;
	sub_83A99FF8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne 0x83a97d94
	if (!cr0.eq) goto loc_83A97D94;
	// cmplwi cr6,r28,2003
	cr6.compare<uint32_t>(ctx.r28.u32, 2003, xer);
	// bne cr6,0x83a97cdc
	if (!cr6.eq) goto loc_83A97CDC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x83a97cdc
	goto loc_83A97CDC;
loc_83A97D7C:
	// clrlwi r11,r23,16
	ctx.r11.u64 = ctx.r23.u32 & 0xFFFF;
	// lhz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 176);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r23,r11,16
	ctx.r23.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r23,r10
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a97c64
	if (cr6.lt) goto loc_83A97C64;
loc_83A97D94:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A97DA0"))) PPC_WEAK_FUNC(sub_83A97DA0);
PPC_FUNC_IMPL(__imp__sub_83A97DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83A97DA8;
	__savegprlr_22(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r3,944
	ctx.r3.s64 = ctx.r3.s64 + 944;
	// li r24,0
	ctx.r24.s64 = 0;
	// bl 0x83ac5690
	ctx.lr = 0x83A97DCC;
	sub_83AC5690(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83a97e10
	if (cr6.eq) goto loc_83A97E10;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83a97e10
	if (cr6.eq) goto loc_83A97E10;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1344
	ctx.r3.s64 = ctx.r31.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83A97DEC;
	sub_83AC6090(ctx, base);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83ab3320
	ctx.lr = 0x83A97E10;
	sub_83AB3320(ctx, base);
loc_83A97E10:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,1072
	ctx.r3.s64 = ctx.r31.s64 + 1072;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83ac5c28
	ctx.lr = 0x83A97E38;
	sub_83AC5C28(ctx, base);
	// lhz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a97fac
	if (cr0.eq) goto loc_83A97FAC;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r25,r31,1224
	ctx.r25.s64 = ctx.r31.s64 + 1224;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// addi r28,r10,-1
	ctx.r28.s64 = ctx.r10.s64 + -1;
loc_83A97E5C:
	// lbzu r11,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lbzu r10,2(r28)
	ea = 2 + ctx.r28.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lbz r9,-1(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + -1);
	// lbz r8,-1(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + -1);
	// rlwimi r11,r9,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r10,r8,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x83ac5f10
	ctx.lr = 0x83A97E8C;
	sub_83AC5F10(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac5f10
	ctx.lr = 0x83A97EA0;
	sub_83AC5F10(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83a97ee4
	if (cr6.eq) goto loc_83A97EE4;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83a97ee4
	if (cr6.eq) goto loc_83A97EE4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1344
	ctx.r3.s64 = ctx.r31.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83A97EC0;
	sub_83AC6090(ctx, base);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83ab3320
	ctx.lr = 0x83A97EE4;
	sub_83AB3320(ctx, base);
loc_83A97EE4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// addi r3,r31,1344
	ctx.r3.s64 = ctx.r31.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83A97EF4;
	sub_83AC6090(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83A97EFC:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a97f80
	if (cr0.eq) goto loc_83A97F80;
	// cmpwi cr6,r11,2000
	cr6.compare<int32_t>(ctx.r11.s32, 2000, xer);
	// beq cr6,0x83a97f38
	if (cr6.eq) goto loc_83A97F38;
	// cmpwi cr6,r11,4000
	cr6.compare<int32_t>(ctx.r11.s32, 4000, xer);
	// beq cr6,0x83a97f80
	if (cr6.eq) goto loc_83A97F80;
	// lbz r11,-1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x83a97f84
	goto loc_83A97F84;
loc_83A97F38:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83a99ff8
	ctx.lr = 0x83A97F78;
	sub_83A99FF8(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq 0x83a97f84
	if (cr0.eq) goto loc_83A97F84;
loc_83A97F80:
	// li r26,1
	ctx.r26.s64 = 1;
loc_83A97F84:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x83a97efc
	if (cr6.eq) goto loc_83A97EFC;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne cr6,0x83a97fac
	if (!cr6.eq) goto loc_83A97FAC;
	// clrlwi r11,r23,16
	ctx.r11.u64 = ctx.r23.u32 & 0xFFFF;
	// lhz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r23,r11,16
	ctx.r23.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r23,r10
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a97e5c
	if (cr6.lt) goto loc_83A97E5C;
loc_83A97FAC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A97FB8"))) PPC_WEAK_FUNC(sub_83A97FB8);
PPC_FUNC_IMPL(__imp__sub_83A97FB8) {
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
	// addi r3,r3,712
	ctx.r3.s64 = ctx.r3.s64 + 712;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83ac4fc8
	ctx.lr = 0x83A97FDC;
	sub_83AC4FC8(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r11,292
	ctx.r11.s64 = 19136512;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a98008
	if (cr6.lt) goto loc_83A98008;
	// lhz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83a98008
	if (cr6.eq) goto loc_83A98008;
	// addi r5,r30,40
	ctx.r5.s64 = ctx.r30.s64 + 40;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r31,2108
	ctx.r3.s64 = ctx.r31.s64 + 2108;
	// bl 0x83ac6ad0
	ctx.lr = 0x83A98008;
	sub_83AC6AD0(ctx, base);
loc_83A98008:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A98020"))) PPC_WEAK_FUNC(sub_83A98020);
PPC_FUNC_IMPL(__imp__sub_83A98020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A98028;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lfs f30,26160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26160);
	ctx.f30.f64 = double(temp.f32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83a98070
	if (cr6.eq) goto loc_83A98070;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a8f6f0
	ctx.lr = 0x83A9806C;
	sub_83A8F6F0(ctx, base);
	// b 0x83a98080
	goto loc_83A98080;
loc_83A98070:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,1512
	ctx.r3.s64 = ctx.r27.s64 + 1512;
	// bl 0x83ac6350
	ctx.lr = 0x83A98080;
	sub_83AC6350(ctx, base);
loc_83A98080:
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x83a98094
	if (cr6.eq) goto loc_83A98094;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a982d8
	goto loc_83A982D8;
loc_83A98094:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// cmpwi cr6,r11,37
	cr6.compare<int32_t>(ctx.r11.s32, 37, xer);
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x83a980d0
	if (cr6.gt) goto loc_83A980D0;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(ctx.r11.s32, 36, xer);
	// bge cr6,0x83a980fc
	if (!cr6.lt) goto loc_83A980FC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a980fc
	if (cr6.eq) goto loc_83A980FC;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83a980f0
	if (cr6.eq) goto loc_83A980F0;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bne cr6,0x83a9810c
	if (!cr6.eq) goto loc_83A9810C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f30,-23848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f30.f64 = double(temp.f32);
	// b 0x83a9810c
	goto loc_83A9810C;
loc_83A980D0:
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(ctx.r11.s32, 38, xer);
	// beq cr6,0x83a98104
	if (cr6.eq) goto loc_83A98104;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x83a9810c
	if (!cr6.gt) goto loc_83A9810C;
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(ctx.r11.s32, 42, xer);
	// ble cr6,0x83a980fc
	if (!cr6.gt) goto loc_83A980FC;
	// cmpwi cr6,r11,51
	cr6.compare<int32_t>(ctx.r11.s32, 51, xer);
	// bgt cr6,0x83a9810c
	if (cr6.gt) goto loc_83A9810C;
loc_83A980F0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f30,-23488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f30.f64 = double(temp.f32);
	// b 0x83a9810c
	goto loc_83A9810C;
loc_83A980FC:
	// fmr f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f0.f64;
	// b 0x83a9810c
	goto loc_83A9810C;
loc_83A98104:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f30,-23580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f30.f64 = double(temp.f32);
loc_83A9810C:
	// lfs f13,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f29,f13
	cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// beq cr6,0x83a982cc
	if (cr6.eq) goto loc_83A982CC;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm. r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lfs f0,9008(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// beq 0x83a981ec
	if (cr0.eq) goto loc_83A981EC;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r6,-3
	ctx.r6.s64 = ctx.r6.s64 + -3;
loc_83A98158:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lbz r31,-1(r6)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r6.u32 + -1);
	// lbz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r26,1(r6)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// rlwimi r4,r31,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r31,2(r6)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwimi r26,r4,8,0,23
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFFFFFF00) | (ctx.r26.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r31,r26,8,0,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r26.u32, 8) & 0xFFFFFF00) | (ctx.r31.u64 & 0xFFFFFFFF000000FF);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f29,f13
	cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// ble cr6,0x83a981ec
	if (!cr6.gt) goto loc_83A981EC;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r4,1(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// rotlwi r26,r8,8
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// or r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 | ctx.r4.u64;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f31,f12,f30
	ctx.f31.f64 = double(float(ctx.f12.f64 / ctx.f30.f64));
	// bge cr6,0x83a981d0
	if (!cr6.lt) goto loc_83A981D0;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
loc_83A981D0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a981dc
	if (cr6.eq) goto loc_83A981DC;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
loc_83A981DC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a98158
	if (cr6.lt) goto loc_83A98158;
loc_83A981EC:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lbz r10,1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f30,f12,f30
	ctx.f30.f64 = double(float(ctx.f12.f64 / ctx.f30.f64));
	// beq cr6,0x83a98240
	if (cr6.eq) goto loc_83A98240;
	// lbz r11,1(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f12,8976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8976);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f2,f11,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
loc_83A98240:
	// fcmpu cr6,f29,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// bge cr6,0x83a98290
	if (!cr6.lt) goto loc_83A98290;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83a98290
	if (cr6.eq) goto loc_83A98290;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a98270
	if (!cr6.eq) goto loc_83A98270;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f12,f30,f31
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmadds f0,f13,f0,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f31.f64));
	// b 0x83a98288
	goto loc_83A98288;
loc_83A98270:
	// fsubs f12,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// bl 0x83ab04d8
	ctx.lr = 0x83A98280;
	sub_83AB04D8(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fmadds f0,f1,f0,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
loc_83A98288:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x83a98294
	goto loc_83A98294;
loc_83A98290:
	// stfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_83A98294:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,124(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// beq cr6,0x83a982b8
	if (cr6.eq) goto loc_83A982B8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a8f788
	ctx.lr = 0x83A982B4;
	sub_83A8F788(ctx, base);
	// b 0x83a982d4
	goto loc_83A982D4;
loc_83A982B8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,1512
	ctx.r3.s64 = ctx.r27.s64 + 1512;
	// bl 0x83ac6598
	ctx.lr = 0x83A982C8;
	sub_83AC6598(ctx, base);
	// b 0x83a982d4
	goto loc_83A982D4;
loc_83A982CC:
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_83A982D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A982D8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A982EC"))) PPC_WEAK_FUNC(sub_83A982EC);
PPC_FUNC_IMPL(__imp__sub_83A982EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A982F0"))) PPC_WEAK_FUNC(sub_83A982F0);
PPC_FUNC_IMPL(__imp__sub_83A982F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A982F8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// rlwinm. r11,r4,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x83a98334
	if (cr0.eq) goto loc_83A98334;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x83a8f510
	ctx.lr = 0x83A98330;
	sub_83A8F510(ctx, base);
	// b 0x83a98348
	goto loc_83A98348;
loc_83A98334:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,1404
	ctx.r3.s64 = ctx.r30.s64 + 1404;
	// bl 0x83ac6138
	ctx.lr = 0x83A98348;
	sub_83AC6138(ctx, base);
loc_83A98348:
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a983bc
	if (!cr6.eq) goto loc_83A983BC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a983bc
	if (cr0.eq) goto loc_83A983BC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
loc_83A98370:
	// lbzu r11,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83a98020
	ctx.lr = 0x83A98398;
	sub_83A98020(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a983cc
	if (!cr0.eq) goto loc_83A983CC;
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a98370
	if (cr6.lt) goto loc_83A98370;
loc_83A983BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A983C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A983CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a983c0
	goto loc_83A983C0;
}

__attribute__((alias("__imp__sub_83A983D4"))) PPC_WEAK_FUNC(sub_83A983D4);
PPC_FUNC_IMPL(__imp__sub_83A983D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A983D8"))) PPC_WEAK_FUNC(sub_83A983D8);
PPC_FUNC_IMPL(__imp__sub_83A983D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm. r10,r4,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a98400
	if (cr0.eq) goto loc_83A98400;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a8f510
	ctx.lr = 0x83A983FC;
	sub_83A8F510(ctx, base);
	// b 0x83a98414
	goto loc_83A98414;
loc_83A98400:
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,1404
	ctx.r3.s64 = ctx.r3.s64 + 1404;
	// bl 0x83ac6138
	ctx.lr = 0x83A98414;
	sub_83AC6138(ctx, base);
loc_83A98414:
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A98428"))) PPC_WEAK_FUNC(sub_83A98428);
PPC_FUNC_IMPL(__imp__sub_83A98428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm. r10,r4,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// beq 0x83a9845c
	if (cr0.eq) goto loc_83A9845C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83a8f598
	ctx.lr = 0x83A98454;
	sub_83A8F598(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83a984a4
	goto loc_83A984A4;
loc_83A9845C:
	// lwz r11,1404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1404);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lhz r11,10(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 10);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_83A984A4:
	// rlwinm r3,r11,31,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A984B8"))) PPC_WEAK_FUNC(sub_83A984B8);
PPC_FUNC_IMPL(__imp__sub_83A984B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm. r10,r4,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a984e0
	if (cr0.eq) goto loc_83A984E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a8f510
	ctx.lr = 0x83A984DC;
	sub_83A8F510(ctx, base);
	// b 0x83a984f4
	goto loc_83A984F4;
loc_83A984E0:
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,1404
	ctx.r3.s64 = ctx.r3.s64 + 1404;
	// bl 0x83ac6138
	ctx.lr = 0x83A984F4;
	sub_83AC6138(ctx, base);
loc_83A984F4:
	// lhz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A98508"))) PPC_WEAK_FUNC(sub_83A98508);
PPC_FUNC_IMPL(__imp__sub_83A98508) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm. r11,r4,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// beq 0x83a98568
	if (cr0.eq) goto loc_83A98568;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83a8f598
	ctx.lr = 0x83A9853C;
	sub_83A8F598(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r31,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83a8f708
	ctx.lr = 0x83A98560;
	sub_83A8F708(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x83a98684
	goto loc_83A98684;
loc_83A98568:
	// lwz r5,1404(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1404);
	// rlwinm r8,r31,1,15,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FFFE;
	// lwz r4,1512(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1512);
	// lwz r11,36(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r6,20(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mullw r6,r9,r6
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// lhz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r6,36(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lhz r9,10(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 10);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lhz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x83a98658
	if (!cr0.eq) goto loc_83A98658;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lhz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x83a98668
	goto loc_83A98668;
loc_83A98658:
	// lwz r11,1512(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1512);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
loc_83A98668:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
loc_83A98684:
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

__attribute__((alias("__imp__sub_83A98698"))) PPC_WEAK_FUNC(sub_83A98698);
PPC_FUNC_IMPL(__imp__sub_83A98698) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a986c8
	if (!cr6.eq) goto loc_83A986C8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// b 0x83a986e8
	goto loc_83A986E8;
loc_83A986C8:
	// addi r3,r3,424
	ctx.r3.s64 = ctx.r3.s64 + 424;
	// bl 0x83ac4a00
	ctx.lr = 0x83A986D0;
	sub_83AC4A00(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
	// addis r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -65536;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83A986E8:
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

__attribute__((alias("__imp__sub_83A986FC"))) PPC_WEAK_FUNC(sub_83A986FC);
PPC_FUNC_IMPL(__imp__sub_83A986FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A98700"))) PPC_WEAK_FUNC(sub_83A98700);
PPC_FUNC_IMPL(__imp__sub_83A98700) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a98754
	if (cr6.eq) goto loc_83A98754;
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9876c
	if (cr6.eq) goto loc_83A9876C;
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9876c
	if (!cr6.eq) goto loc_83A9876C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r5,88(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,21320
	ctx.r4.s64 = ctx.r11.s64 + 21320;
	// bl 0x831ea400
	ctx.lr = 0x83A98754;
	sub_831EA400(ctx, base);
loc_83A98754:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A98758:
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
loc_83A9876C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,524
	ctx.r3.s64 = ctx.r3.s64 + 524;
	// bl 0x83ac8808
	ctx.lr = 0x83A98778;
	sub_83AC8808(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a98754
	if (cr0.eq) goto loc_83A98754;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x83a98758
	goto loc_83A98758;
}

__attribute__((alias("__imp__sub_83A98790"))) PPC_WEAK_FUNC(sub_83A98790);
PPC_FUNC_IMPL(__imp__sub_83A98790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a987ac
	if (!cr6.eq) goto loc_83A987AC;
loc_83A9879C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// blr 
	return;
loc_83A987AC:
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a9879c
	if (!cr6.gt) goto loc_83A9879C;
	// sth r4,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r4.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A987C8"))) PPC_WEAK_FUNC(sub_83A987C8);
PPC_FUNC_IMPL(__imp__sub_83A987C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A987D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r25,r3,4
	ctx.r25.s64 = ctx.r3.s64 + 4;
	// stw r29,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,2400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2400, ctx.r29.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x83ac3cb8
	ctx.lr = 0x83A987F4;
	sub_83AC3CB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a98814
	if (!cr0.eq) goto loc_83A98814;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,21664
	ctx.r4.s64 = ctx.r11.s64 + 21664;
loc_83A98804:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9880C;
	sub_831EA3F0(ctx, base);
loc_83A9880C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a9925c
	goto loc_83A9925C;
loc_83A98814:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,6
	ctx.r10.s64 = 393216;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83a98830
	if (!cr6.lt) goto loc_83A98830;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,21592
	ctx.r4.s64 = ctx.r11.s64 + 21592;
	// b 0x83a98804
	goto loc_83A98804;
loc_83A98830:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98840;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98860
	if (!cr6.eq) goto loc_83A98860;
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac4808
	ctx.lr = 0x83A98858;
	sub_83AC4808(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98860:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98870;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98888
	if (!cr6.eq) goto loc_83A98888;
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac7d90
	ctx.lr = 0x83A98888;
	sub_83AC7D90(ctx, base);
loc_83A98888:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98898;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a988b8
	if (!cr6.eq) goto loc_83A988B8;
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac4ce0
	ctx.lr = 0x83A988B0;
	sub_83AC4CE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A988B8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A988C8;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a988e8
	if (!cr6.eq) goto loc_83A988E8;
	// addi r3,r31,712
	ctx.r3.s64 = ctx.r31.s64 + 712;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac4f70
	ctx.lr = 0x83A988E0;
	sub_83AC4F70(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A988E8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A988F8;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98920
	if (!cr6.eq) goto loc_83A98920;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98920
	if (cr6.eq) goto loc_83A98920;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac51f0
	ctx.lr = 0x83A98918;
	sub_83AC51F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98920:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98930;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98958
	if (!cr6.eq) goto loc_83A98958;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98958
	if (cr6.eq) goto loc_83A98958;
	// addi r3,r31,1224
	ctx.r3.s64 = ctx.r31.s64 + 1224;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac6800
	ctx.lr = 0x83A98950;
	sub_83AC6800(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98958:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98968;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98990
	if (!cr6.eq) goto loc_83A98990;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98990
	if (cr6.eq) goto loc_83A98990;
	// addi r3,r31,1344
	ctx.r3.s64 = ctx.r31.s64 + 1344;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac6700
	ctx.lr = 0x83A98988;
	sub_83AC6700(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98990:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A989A0;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a989c8
	if (!cr6.eq) goto loc_83A989C8;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a989c8
	if (cr6.eq) goto loc_83A989C8;
	// addi r3,r31,1404
	ctx.r3.s64 = ctx.r31.s64 + 1404;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac76b8
	ctx.lr = 0x83A989C0;
	sub_83AC76B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A989C8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A989D8;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98a00
	if (!cr6.eq) goto loc_83A98A00;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98a00
	if (cr6.eq) goto loc_83A98A00;
	// addi r3,r31,1512
	ctx.r3.s64 = ctx.r31.s64 + 1512;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac62f8
	ctx.lr = 0x83A989F8;
	sub_83AC62F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98A00:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98A10;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98a38
	if (!cr6.eq) goto loc_83A98A38;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98a38
	if (cr6.eq) goto loc_83A98A38;
	// addi r3,r31,1596
	ctx.r3.s64 = ctx.r31.s64 + 1596;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac6700
	ctx.lr = 0x83A98A30;
	sub_83AC6700(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98A38:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98A48;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98a70
	if (!cr6.eq) goto loc_83A98A70;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98a70
	if (cr6.eq) goto loc_83A98A70;
	// addi r3,r31,1656
	ctx.r3.s64 = ctx.r31.s64 + 1656;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac7d90
	ctx.lr = 0x83A98A68;
	sub_83AC7D90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98A70:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98A80;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98aa8
	if (!cr6.eq) goto loc_83A98AA8;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98aa8
	if (cr6.eq) goto loc_83A98AA8;
	// addi r3,r31,1720
	ctx.r3.s64 = ctx.r31.s64 + 1720;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac6620
	ctx.lr = 0x83A98AA0;
	sub_83AC6620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98AA8:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x83a98b08
	if (!cr6.eq) goto loc_83A98B08;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98AC0;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98b08
	if (!cr6.eq) goto loc_83A98B08;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a98af8
	if (cr6.eq) goto loc_83A98AF8;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r31,2412
	ctx.r9.s64 = ctx.r31.s64 + 2412;
	// addi r8,r31,2416
	ctx.r8.s64 = ctx.r31.s64 + 2416;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,2420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2420, ctx.r9.u32);
	// stw r8,2428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2428, ctx.r8.u32);
	// stw r7,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r7.u32);
	// stw r10,2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2424, ctx.r10.u32);
	// b 0x83a98b04
	goto loc_83A98B04;
loc_83A98AF8:
	// stw r29,2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2424, ctx.r29.u32);
	// stw r29,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r29.u32);
	// stw r29,2412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2412, ctx.r29.u32);
loc_83A98B04:
	// stw r11,2432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2432, ctx.r11.u32);
loc_83A98B08:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a98cac
	if (cr6.lt) goto loc_83A98CAC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98B28;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98bf8
	if (!cr6.eq) goto loc_83A98BF8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lhz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rotlwi. r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,2384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2384, ctx.r11.u32);
	// ble 0x83a98b8c
	if (!cr0.gt) goto loc_83A98B8C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83A98B54:
	// lwz r9,2384(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r29,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r9,2384(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// lwz r9,2384(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r29,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r29.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lhz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a98b54
	if (cr6.lt) goto loc_83A98B54;
loc_83A98B8C:
	// lwz r11,2384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lhz r8,78(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 78);
	// stw r29,2388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2388, ctx.r29.u32);
	// stw r29,2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2392, ctx.r29.u32);
	// stw r29,2396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2396, ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x83a98bf8
	if (cr0.eq) goto loc_83A98BF8;
loc_83A98BB4:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,2388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2388);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a98bd0
	if (!cr6.eq) goto loc_83A98BD0;
	// stw r11,2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2392, ctx.r11.u32);
	// b 0x83a98bd4
	goto loc_83A98BD4;
loc_83A98BD0:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83A98BD4:
	// lwz r10,2396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2396);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,2388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2388, ctx.r11.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,2396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2396, ctx.r10.u32);
	// lhz r10,78(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 78);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a98bb4
	if (cr6.lt) goto loc_83A98BB4;
loc_83A98BF8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,293
	ctx.r10.s64 = 19202048;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a98cb0
	if (cr6.lt) goto loc_83A98CB0;
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x83a98cb0
	if (!cr6.lt) goto loc_83A98CB0;
	// lhz r11,102(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 102);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a98cb0
	if (cr0.eq) goto loc_83A98CB0;
loc_83A98C24:
	// lwz r11,2388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2388);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a98c98
	if (cr6.eq) goto loc_83A98C98;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,2388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2388, ctx.r10.u32);
	// bne cr6,0x83a98c44
	if (!cr6.eq) goto loc_83A98C44;
	// stw r29,2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2392, ctx.r29.u32);
loc_83A98C44:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,2396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2396);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,2396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2396, ctx.r10.u32);
	// beq cr6,0x83a98c98
	if (cr6.eq) goto loc_83A98C98;
	// lwz r9,2384(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a98c7c
	if (!cr6.eq) goto loc_83A98C7C;
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lwz r10,2384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// b 0x83a98c88
	goto loc_83A98C88;
loc_83A98C7C:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,2384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_83A98C88:
	// lwz r11,2384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_83A98C98:
	// lhz r11,102(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 102);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a98c24
	if (cr6.lt) goto loc_83A98C24;
	// b 0x83a98cb0
	goto loc_83A98CB0;
loc_83A98CAC:
	// stw r29,2384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2384, ctx.r29.u32);
loc_83A98CB0:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a98cf8
	if (cr6.lt) goto loc_83A98CF8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98CD0;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98cf8
	if (!cr6.eq) goto loc_83A98CF8;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98cf8
	if (cr6.eq) goto loc_83A98CF8;
	// addi r3,r31,1792
	ctx.r3.s64 = ctx.r31.s64 + 1792;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac6700
	ctx.lr = 0x83A98CF0;
	sub_83AC6700(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98CF8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,80
	ctx.r10.s64 = 5242880;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a98d40
	if (cr6.lt) goto loc_83A98D40;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98D18;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98d40
	if (!cr6.eq) goto loc_83A98D40;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98d40
	if (cr6.eq) goto loc_83A98D40;
	// addi r3,r31,1852
	ctx.r3.s64 = ctx.r31.s64 + 1852;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac7d90
	ctx.lr = 0x83A98D38;
	sub_83AC7D90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98D40:
	// lis r28,294
	ctx.r28.s64 = 19267584;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x83a98dd4
	if (!cr6.eq) goto loc_83A98DD4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,96
	ctx.r10.s64 = 6291456;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a98dd4
	if (cr6.lt) goto loc_83A98DD4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98D6C;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98dd4
	if (!cr6.eq) goto loc_83A98DD4;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98dd4
	if (cr6.eq) goto loc_83A98DD4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// blt cr6,0x83a98dc8
	if (cr6.lt) goto loc_83A98DC8;
	// addi r30,r31,2324
	ctx.r30.s64 = ctx.r31.s64 + 2324;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac6700
	ctx.lr = 0x83A98D9C;
	sub_83AC6700(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac6c78
	ctx.lr = 0x83A98DB8;
	sub_83AC6C78(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r10.u32);
	// b 0x83a98dd0
	goto loc_83A98DD0;
loc_83A98DC8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r5,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r5.u32);
loc_83A98DD0:
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
loc_83A98DD4:
	// lis r11,129
	ctx.r11.s64 = 8454144;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a98e58
	if (cr6.lt) goto loc_83A98E58;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98DF8;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98e20
	if (!cr6.eq) goto loc_83A98E20;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98e20
	if (cr6.eq) goto loc_83A98E20;
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac51f0
	ctx.lr = 0x83A98E18;
	sub_83AC51F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98E20:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98E30;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98e58
	if (!cr6.eq) goto loc_83A98E58;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98e58
	if (cr6.eq) goto loc_83A98E58;
	// addi r3,r31,1072
	ctx.r3.s64 = ctx.r31.s64 + 1072;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac5b78
	ctx.lr = 0x83A98E50;
	sub_83AC5B78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98E58:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,277
	ctx.r10.s64 = 18153472;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a98ea0
	if (cr6.lt) goto loc_83A98EA0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98E78;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98ea0
	if (!cr6.eq) goto loc_83A98EA0;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98ea0
	if (cr6.eq) goto loc_83A98EA0;
	// addi r3,r31,1916
	ctx.r3.s64 = ctx.r31.s64 + 1916;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac6800
	ctx.lr = 0x83A98E98;
	sub_83AC6800(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98EA0:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r26,278
	ctx.r26.s64 = 18219008;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// blt cr6,0x83a98ee8
	if (cr6.lt) goto loc_83A98EE8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98EC0;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98ee8
	if (!cr6.eq) goto loc_83A98EE8;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98ee8
	if (cr6.eq) goto loc_83A98EE8;
	// addi r3,r31,2036
	ctx.r3.s64 = ctx.r31.s64 + 2036;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac6620
	ctx.lr = 0x83A98EE0;
	sub_83AC6620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98EE8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,291
	ctx.r10.s64 = 19070976;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a98f30
	if (cr6.lt) goto loc_83A98F30;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98F08;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98f30
	if (!cr6.eq) goto loc_83A98F30;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98f30
	if (cr6.eq) goto loc_83A98F30;
	// addi r3,r31,2108
	ctx.r3.s64 = ctx.r31.s64 + 2108;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac7d90
	ctx.lr = 0x83A98F28;
	sub_83AC7D90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98F30:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,292
	ctx.r10.s64 = 19136512;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a98f78
	if (cr6.lt) goto loc_83A98F78;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98F50;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98f78
	if (!cr6.eq) goto loc_83A98F78;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98f78
	if (cr6.eq) goto loc_83A98F78;
	// addi r3,r31,2172
	ctx.r3.s64 = ctx.r31.s64 + 2172;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac7de8
	ctx.lr = 0x83A98F70;
	sub_83AC7DE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
loc_83A98F78:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// blt cr6,0x83a9900c
	if (cr6.lt) goto loc_83A9900C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A98F94;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a98fc4
	if (!cr6.eq) goto loc_83A98FC4;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a98fc4
	if (cr6.eq) goto loc_83A98FC4;
	// addi r3,r31,2260
	ctx.r3.s64 = ctx.r31.s64 + 2260;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ac7d90
	ctx.lr = 0x83A98FB4;
	sub_83AC7D90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9880c
	if (cr0.eq) goto loc_83A9880C;
	// lwz r11,2308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2308);
	// stw r11,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r11.u32);
loc_83A98FC4:
	// lwz r11,2436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9900c
	if (cr6.eq) goto loc_83A9900C;
	// lwz r10,2424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2424);
	// rlwinm r8,r11,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// lwz r7,2432(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2432);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,2420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2420, ctx.r11.u32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,2428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2428, ctx.r10.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x83a9900c
	if (!cr6.gt) goto loc_83A9900C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,21548
	ctx.r4.s64 = ctx.r11.s64 + 21548;
	// b 0x83a98804
	goto loc_83A98804;
loc_83A9900C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x83a99048
	if (!cr6.eq) goto loc_83A99048;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a99048
	if (!cr6.eq) goto loc_83A99048;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r10,27284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27284);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a99048
	if (cr6.eq) goto loc_83A99048;
	// lwz r11,27284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27284);
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,27288(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27288);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A99048;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A99048:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r27,r11,-14692
	ctx.r27.s64 = ctx.r11.s64 + -14692;
	// lwz r11,-14692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14692);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a991fc
	if (cr6.eq) goto loc_83A991FC;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A99068:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83a99084
	if (!cr0.eq) goto loc_83A99084;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83a99068
	if (cr6.lt) goto loc_83A99068;
	// b 0x83a991fc
	goto loc_83A991FC;
loc_83A99084:
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x83a8cb40
	ctx.lr = 0x83A9908C;
	sub_83A8CB40(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a990a0
	if (!cr0.eq) goto loc_83A990A0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,21508
	ctx.r4.s64 = ctx.r11.s64 + 21508;
	// b 0x83a991f4
	goto loc_83A991F4;
loc_83A990A0:
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A990B0:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x83a990c8
	if (cr6.eq) goto loc_83A990C8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83A990C8:
	// bdnz 0x83a990b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A990B0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83a991fc
	if (!cr6.eq) goto loc_83A991FC;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// blt cr6,0x83a991d4
	if (cr6.lt) goto loc_83A991D4;
	// lwz r11,2084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a991fc
	if (!cr6.gt) goto loc_83A991FC;
	// addi r28,r31,2036
	ctx.r28.s64 = ctx.r31.s64 + 2036;
loc_83A990F4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83ac6a60
	ctx.lr = 0x83A99108;
	sub_83AC6A60(ctx, base);
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x83a991b8
	if (cr6.gt) goto loc_83A991B8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83a99150
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A99150;
	// bdzf 4*cr6+eq,0x83a9915c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A9915C;
	// bdzf 4*cr6+eq,0x83a9916c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A9916C;
	// bdzf 4*cr6+eq,0x83a99178
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A99178;
	// bdzf 4*cr6+eq,0x83a99184
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A99184;
	// bdzf 4*cr6+eq,0x83a99190
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A99190;
	// bdzf 4*cr6+eq,0x83a991a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A991A0;
	// bne cr6,0x83a991ac
	if (!cr6.eq) goto loc_83A991AC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83a8fca0
	ctx.lr = 0x83A9914C;
	sub_83A8FCA0(ctx, base);
	// b 0x83a991b4
	goto loc_83A991B4;
loc_83A99150:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a8fc28
	ctx.lr = 0x83A99158;
	sub_83A8FC28(ctx, base);
	// b 0x83a991b4
	goto loc_83A991B4;
loc_83A9915C:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83a8d2a0
	ctx.lr = 0x83A99168;
	sub_83A8D2A0(ctx, base);
	// b 0x83a991b4
	goto loc_83A991B4;
loc_83A9916C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a8f400
	ctx.lr = 0x83A99174;
	sub_83A8F400(ctx, base);
	// b 0x83a991b4
	goto loc_83A991B4;
loc_83A99178:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a8f338
	ctx.lr = 0x83A99180;
	sub_83A8F338(ctx, base);
	// b 0x83a991b4
	goto loc_83A991B4;
loc_83A99184:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a8d0a8
	ctx.lr = 0x83A9918C;
	sub_83A8D0A8(ctx, base);
	// b 0x83a991b4
	goto loc_83A991B4;
loc_83A99190:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a8cb70
	ctx.lr = 0x83A9919C;
	sub_83A8CB70(ctx, base);
	// b 0x83a991b4
	goto loc_83A991B4;
loc_83A991A0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a8cdc8
	ctx.lr = 0x83A991A8;
	sub_83A8CDC8(ctx, base);
	// b 0x83a991b4
	goto loc_83A991B4;
loc_83A991AC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a8ceb8
	ctx.lr = 0x83A991B4;
	sub_83A8CEB8(ctx, base);
loc_83A991B4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83A991B8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x83a991d4
	if (cr6.eq) goto loc_83A991D4;
	// lwz r11,2084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a990f4
	if (cr6.lt) goto loc_83A990F4;
	// b 0x83a991fc
	goto loc_83A991FC;
loc_83A991D4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a991ec
	if (cr6.eq) goto loc_83A991EC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,21444
	ctx.r4.s64 = ctx.r11.s64 + 21444;
	// b 0x83a991f4
	goto loc_83A991F4;
loc_83A991EC:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,21380
	ctx.r4.s64 = ctx.r11.s64 + 21380;
loc_83A991F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea3f0
	ctx.lr = 0x83A991FC;
	sub_831EA3F0(ctx, base);
loc_83A991FC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ac3fb0
	ctx.lr = 0x83A9920C;
	sub_83AC3FB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a99258
	if (!cr6.eq) goto loc_83A99258;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a99258
	if (cr6.eq) goto loc_83A99258;
	// lwz r3,2404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2404);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a99258
	if (cr6.eq) goto loc_83A99258;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x831ea7a0
	ctx.lr = 0x83A99234;
	sub_831EA7A0(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,2404(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2404);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83ace730
	ctx.lr = 0x83A99248;
	sub_83ACE730(ctx, base);
	// stw r3,2400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2400, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x83a9925c
	if (cr0.eq) goto loc_83A9925C;
loc_83A99258:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A9925C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A99264"))) PPC_WEAK_FUNC(sub_83A99264);
PPC_FUNC_IMPL(__imp__sub_83A99264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A99268"))) PPC_WEAK_FUNC(sub_83A99268);
PPC_FUNC_IMPL(__imp__sub_83A99268) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2448);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2448, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A99278"))) PPC_WEAK_FUNC(sub_83A99278);
PPC_FUNC_IMPL(__imp__sub_83A99278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2448);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stw r3,2448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2448, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9928C"))) PPC_WEAK_FUNC(sub_83A9928C);
PPC_FUNC_IMPL(__imp__sub_83A9928C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A99290"))) PPC_WEAK_FUNC(sub_83A99290);
PPC_FUNC_IMPL(__imp__sub_83A99290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r10,2456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2456);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a992b0
	if (!cr6.eq) goto loc_83A992B0;
	// stw r4,2452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2452, ctx.r4.u32);
	// b 0x83a992bc
	goto loc_83A992BC;
loc_83A992B0:
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,2456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2456);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_83A992BC:
	// lwz r11,2460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2460);
	// stw r4,2456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2456, ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2460, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A992D0"))) PPC_WEAK_FUNC(sub_83A992D0);
PPC_FUNC_IMPL(__imp__sub_83A992D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,2452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2452);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a992f8
	if (!cr6.eq) goto loc_83A992F8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,2452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2452, ctx.r11.u32);
	// bne cr6,0x83a9933c
	if (!cr6.eq) goto loc_83A9933C;
	// stw r9,2456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2456, ctx.r9.u32);
	// b 0x83a9933c
	goto loc_83A9933C;
loc_83A992F8:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a9933c
	if (cr0.eq) goto loc_83A9933C;
loc_83A99300:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x83a99318
	if (cr6.eq) goto loc_83A99318;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83a99300
	if (!cr0.eq) goto loc_83A99300;
loc_83A99318:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9933c
	if (cr6.eq) goto loc_83A9933C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,2456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2456);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a9933c
	if (!cr6.eq) goto loc_83A9933C;
	// stw r11,2456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2456, ctx.r11.u32);
loc_83A9933C:
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r11,2460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2460);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2460, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A99350"))) PPC_WEAK_FUNC(sub_83A99350);
PPC_FUNC_IMPL(__imp__sub_83A99350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,2420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2420);
	// rlwinm r10,r4,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A99368"))) PPC_WEAK_FUNC(sub_83A99368);
PPC_FUNC_IMPL(__imp__sub_83A99368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a99390
	if (cr6.eq) goto loc_83A99390;
	// lwz r11,2432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2432);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83a993a4
	goto loc_83A993A4;
loc_83A99390:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,21740
	ctx.r4.s64 = ctx.r11.s64 + 21740;
	// bl 0x831ea3f0
	ctx.lr = 0x83A993A0;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A993A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A993B4"))) PPC_WEAK_FUNC(sub_83A993B4);
PPC_FUNC_IMPL(__imp__sub_83A993B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A993B8"))) PPC_WEAK_FUNC(sub_83A993B8);
PPC_FUNC_IMPL(__imp__sub_83A993B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2400(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2400);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A993C0"))) PPC_WEAK_FUNC(sub_83A993C0);
PPC_FUNC_IMPL(__imp__sub_83A993C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x83a993d4
	if (!cr6.eq) goto loc_83A993D4;
loc_83A993CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A993D4:
	// lwz r11,2420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a993cc
	if (cr6.eq) goto loc_83A993CC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A993EC"))) PPC_WEAK_FUNC(sub_83A993EC);
PPC_FUNC_IMPL(__imp__sub_83A993EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A993F0"))) PPC_WEAK_FUNC(sub_83A993F0);
PPC_FUNC_IMPL(__imp__sub_83A993F0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a98698
	ctx.lr = 0x83A99404;
	sub_83A98698(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A99414"))) PPC_WEAK_FUNC(sub_83A99414);
PPC_FUNC_IMPL(__imp__sub_83A99414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A99418"))) PPC_WEAK_FUNC(sub_83A99418);
PPC_FUNC_IMPL(__imp__sub_83A99418) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a98700
	ctx.lr = 0x83A9942C;
	sub_83A98700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9943C"))) PPC_WEAK_FUNC(sub_83A9943C);
PPC_FUNC_IMPL(__imp__sub_83A9943C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A99440"))) PPC_WEAK_FUNC(sub_83A99440);
PPC_FUNC_IMPL(__imp__sub_83A99440) {
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
	ctx.lr = 0x83A99448;
	__savegprlr_29(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83a9946c
	if (!cr6.eq) goto loc_83A9946C;
loc_83A99464:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a996d8
	goto loc_83A996D8;
loc_83A9946C:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,424
	ctx.r3.s64 = ctx.r29.s64 + 424;
	// bl 0x83ac4860
	ctx.lr = 0x83A9947C;
	sub_83AC4860(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a99464
	if (cr0.eq) goto loc_83A99464;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a97b10
	ctx.lr = 0x83A99490;
	sub_83A97B10(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bne cr6,0x83a994bc
	if (!cr6.eq) goto loc_83A994BC;
	// std r8,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r8.u64);
	// b 0x83a994c4
	goto loc_83A994C4;
loc_83A994BC:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_83A994C4:
	// lis r9,0
	ctx.r9.s64 = 0;
	// sth r8,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r8.u16);
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// sth r11,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r11.u16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A994F4:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83a994f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A994F4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r8,173(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 173);
	// lis r7,-32203
	ctx.r7.s64 = -2110455808;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// li r10,100
	ctx.r10.s64 = 100;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// addi r7,r7,-22544
	ctx.r7.s64 = ctx.r7.s64 + -22544;
	// sth r30,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r30.u16);
	// stb r10,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r10.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r8.u8);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// bl 0x83ab8730
	ctx.lr = 0x83A99548;
	sub_83AB8730(ctx, base);
	// lfs f2,264(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x83ab04c8
	ctx.lr = 0x83A99564;
	sub_83AB04C8(ctx, base);
	// lfs f0,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// sth r30,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r30.u16);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// sth r30,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r30.u16);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// sth r30,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r30.u16);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// sth r30,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r30.u16);
	// lfs f12,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f12.f64 = double(temp.f32);
	// sth r30,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r30.u16);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// sth r30,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r30.u16);
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// beq cr6,0x83a99610
	if (cr6.eq) goto loc_83A99610;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83a995f0
	if (cr6.eq) goto loc_83A995F0;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83a996ac
	if (!cr6.eq) goto loc_83A996AC;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r3,r29,944
	ctx.r3.s64 = ctx.r29.s64 + 944;
	// lwz r6,56(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x83ac5690
	ctx.lr = 0x83A995E0;
	sub_83AC5690(ctx, base);
	// lhz r11,234(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 234);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// sth r11,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r11.u16);
	// b 0x83a99630
	goto loc_83A99630;
loc_83A995F0:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r6,56(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r3,r29,816
	ctx.r3.s64 = ctx.r29.s64 + 816;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// bl 0x83ac52a0
	ctx.lr = 0x83A99604;
	sub_83AC52A0(ctx, base);
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// b 0x83a9962c
	goto loc_83A9962C;
loc_83A99610:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r6,56(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r3,r29,588
	ctx.r3.s64 = ctx.r29.s64 + 588;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// bl 0x83ac4d88
	ctx.lr = 0x83A99624;
	sub_83AC4D88(ctx, base);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
loc_83A9962C:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83A99630:
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83a996ac
	if (cr6.eq) goto loc_83A996AC;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r3,r29,1344
	ctx.r3.s64 = ctx.r29.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83A99644;
	sub_83AC6090(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83ab52f8
	ctx.lr = 0x83A99658;
	sub_83AB52F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f2,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83ab04c8
	ctx.lr = 0x83A9966C;
	sub_83AB04C8(ctx, base);
	// lhz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// lhz r10,130(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// sth r11,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r11.u16);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// sth r10,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r10.u16);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// sth r9,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r9.u16);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f11,76(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f10,80(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
loc_83A996AC:
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a996bc
	if (cr0.eq) goto loc_83A996BC;
	// sth r11,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r11.u16);
loc_83A996BC:
	// lbz r11,101(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r10,103(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// stb r10,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r10.u8);
	// stb r9,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r9.u8);
loc_83A996D8:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A996E0"))) PPC_WEAK_FUNC(sub_83A996E0);
PPC_FUNC_IMPL(__imp__sub_83A996E0) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a997cc
	if (cr6.eq) goto loc_83A997CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// sth r10,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// addi r3,r3,424
	ctx.r3.s64 = ctx.r3.s64 + 424;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// bl 0x83ac4860
	ctx.lr = 0x83A99728;
	sub_83AC4860(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a997cc
	if (cr0.eq) goto loc_83A997CC;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a99760
	if (cr6.eq) goto loc_83A99760;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83a997a0
	if (!cr6.eq) goto loc_83A997A0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x83ac52a0
	ctx.lr = 0x83A99758;
	sub_83AC52A0(ctx, base);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// b 0x83a99778
	goto loc_83A99778;
loc_83A99760:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// bl 0x83ac4d88
	ctx.lr = 0x83A99774;
	sub_83AC4D88(ctx, base);
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
loc_83A99778:
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83a997a0
	if (cr6.eq) goto loc_83A997A0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1344
	ctx.r3.s64 = ctx.r31.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83A9978C;
	sub_83AC6090(ctx, base);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83ab52f8
	ctx.lr = 0x83A997A0;
	sub_83AB52F8(ctx, base);
loc_83A997A0:
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a997cc
	if (cr0.eq) goto loc_83A997CC;
	// lhz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a997cc
	if (cr6.eq) goto loc_83A997CC;
	// lwz r10,2384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83a997d0
	goto loc_83A997D0;
loc_83A997CC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A997D0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A997E4"))) PPC_WEAK_FUNC(sub_83A997E4);
PPC_FUNC_IMPL(__imp__sub_83A997E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A997E8"))) PPC_WEAK_FUNC(sub_83A997E8);
PPC_FUNC_IMPL(__imp__sub_83A997E8) {
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
	// lhz r9,42(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 42);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x83a99858
	if (cr0.eq) goto loc_83A99858;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_83A99824:
	// lbzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rlwimi r11,r8,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// beq cr6,0x83a99874
	if (cr6.eq) goto loc_83A99874;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// lhz r8,42(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 42);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// blt cr6,0x83a99824
	if (cr6.lt) goto loc_83A99824;
loc_83A99858:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A9985C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83A99874:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,1072
	ctx.r3.s64 = ctx.r3.s64 + 1072;
	// bl 0x83ac5c28
	ctx.lr = 0x83A99888;
	sub_83AC5C28(ctx, base);
	// sth r31,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r31.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a9985c
	goto loc_83A9985C;
}

__attribute__((alias("__imp__sub_83A99894"))) PPC_WEAK_FUNC(sub_83A99894);
PPC_FUNC_IMPL(__imp__sub_83A99894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A99898"))) PPC_WEAK_FUNC(sub_83A99898);
PPC_FUNC_IMPL(__imp__sub_83A99898) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a998c8
	if (!cr6.eq) goto loc_83A998C8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83a8f7a0
	ctx.lr = 0x83A998C4;
	sub_83A8F7A0(ctx, base);
	// b 0x83a998d8
	goto loc_83A998D8;
loc_83A998C8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1720
	ctx.r3.s64 = ctx.r11.s64 + 1720;
	// bl 0x83ac6678
	ctx.lr = 0x83A998D8;
	sub_83AC6678(ctx, base);
loc_83A998D8:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_83A99910"))) PPC_WEAK_FUNC(sub_83A99910);
PPC_FUNC_IMPL(__imp__sub_83A99910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// stw r3,-14692(r11)
	PPC_STORE_U32(ctx.r11.u32 + -14692, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9991C"))) PPC_WEAK_FUNC(sub_83A9991C);
PPC_FUNC_IMPL(__imp__sub_83A9991C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A99920"))) PPC_WEAK_FUNC(sub_83A99920);
PPC_FUNC_IMPL(__imp__sub_83A99920) {
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
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// ble cr6,0x83a99950
	if (!cr6.gt) goto loc_83A99950;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,21784
	ctx.r4.s64 = ctx.r11.s64 + 21784;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A99950;
	sub_831EA418(ctx, base);
loc_83A99950:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// stw r31,-14688(r11)
	PPC_STORE_U32(ctx.r11.u32 + -14688, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_83A9996C"))) PPC_WEAK_FUNC(sub_83A9996C);
PPC_FUNC_IMPL(__imp__sub_83A9996C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A99970"))) PPC_WEAK_FUNC(sub_83A99970);
PPC_FUNC_IMPL(__imp__sub_83A99970) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r3,r3,2172
	ctx.r3.s64 = ctx.r3.s64 + 2172;
	// b 0x83ac6b18
	sub_83AC6B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9997C"))) PPC_WEAK_FUNC(sub_83A9997C);
PPC_FUNC_IMPL(__imp__sub_83A9997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A99980"))) PPC_WEAK_FUNC(sub_83A99980);
PPC_FUNC_IMPL(__imp__sub_83A99980) {
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
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lis r9,294
	ctx.r9.s64 = 19267584;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83a999b8
	if (cr6.lt) goto loc_83A999B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,2260
	ctx.r3.s64 = ctx.r11.s64 + 2260;
	// bl 0x83ac6bc8
	ctx.lr = 0x83A999B4;
	sub_83AC6BC8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83A999B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A999C8"))) PPC_WEAK_FUNC(sub_83A999C8);
PPC_FUNC_IMPL(__imp__sub_83A999C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A999D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2400);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a999fc
	if (cr6.eq) goto loc_83A999FC;
	// bl 0x83a82480
	ctx.lr = 0x83A999EC;
	sub_83A82480(ctx, base);
	// lwz r3,2400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2400);
	// bl 0x83abbf58
	ctx.lr = 0x83A999F4;
	sub_83ABBF58(ctx, base);
	// stw r28,2400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2400, ctx.r28.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A999FC;
	sub_83A824C0(ctx, base);
loc_83A999FC:
	// lwz r11,2420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a99a94
	if (cr6.eq) goto loc_83A99A94;
	// lwz r11,2436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a99a94
	if (!cr6.gt) goto loc_83A99A94;
loc_83A99A18:
	// lwz r11,2420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2420);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a99a84
	if (cr6.eq) goto loc_83A99A84;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83a99a48
	if (!cr6.eq) goto loc_83A99A48;
	// lwz r10,2408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2408);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a99a48
	if (cr6.eq) goto loc_83A99A48;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x83a99a84
	goto loc_83A99A84;
loc_83A99A48:
	// bl 0x83a82480
	ctx.lr = 0x83A99A4C;
	sub_83A82480(ctx, base);
	// lwz r11,2420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2420);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x83abbf58
	ctx.lr = 0x83A99A58;
	sub_83ABBF58(ctx, base);
	// lwz r11,2420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2420);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A99A64;
	sub_83A824C0(ctx, base);
	// lwz r11,2428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a99a84
	if (cr6.eq) goto loc_83A99A84;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x83a82de8
	ctx.lr = 0x83A99A7C;
	sub_83A82DE8(ctx, base);
	// lwz r11,2428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
loc_83A99A84:
	// lwz r11,2436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a99a18
	if (cr6.lt) goto loc_83A99A18;
loc_83A99A94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A99A9C"))) PPC_WEAK_FUNC(sub_83A99A9C);
PPC_FUNC_IMPL(__imp__sub_83A99A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A99AA0"))) PPC_WEAK_FUNC(sub_83A99AA0);
PPC_FUNC_IMPL(__imp__sub_83A99AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A99AA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-2576(r1)
	ea = -2576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,2464
	ctx.r4.s64 = 2464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A99AC4;
	sub_831EA7A0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a987c8
	ctx.lr = 0x83A99AD8;
	sub_83A987C8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a99aec
	if (cr0.eq) goto loc_83A99AEC;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// b 0x83a99b00
	goto loc_83A99B00;
loc_83A99AEC:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,21800
	ctx.r4.s64 = ctx.r11.s64 + 21800;
	// bl 0x831ea3f0
	ctx.lr = 0x83A99AFC;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A99B00:
	// addi r1,r1,2576
	ctx.r1.s64 = ctx.r1.s64 + 2576;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A99B08"))) PPC_WEAK_FUNC(sub_83A99B08);
PPC_FUNC_IMPL(__imp__sub_83A99B08) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a99b3c
	if (cr6.eq) goto loc_83A99B3C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,22052
	ctx.r4.s64 = ctx.r11.s64 + 22052;
	// bl 0x831ea3f0
	ctx.lr = 0x83A99B38;
	sub_831EA3F0(ctx, base);
	// b 0x83a99b64
	goto loc_83A99B64;
loc_83A99B3C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a987c8
	ctx.lr = 0x83A99B48;
	sub_83A987C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a99b64
	if (!cr0.eq) goto loc_83A99B64;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,21928
	ctx.r4.s64 = ctx.r11.s64 + 21928;
	// bl 0x831ea3f0
	ctx.lr = 0x83A99B5C;
	sub_831EA3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a97a98
	ctx.lr = 0x83A99B64;
	sub_83A97A98(ctx, base);
loc_83A99B64:
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

__attribute__((alias("__imp__sub_83A99B78"))) PPC_WEAK_FUNC(sub_83A99B78);
PPC_FUNC_IMPL(__imp__sub_83A99B78) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a98700
	ctx.lr = 0x83A99B94;
	sub_83A98700(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a99ba4
	if (!cr0.eq) goto loc_83A99BA4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a99bc4
	goto loc_83A99BC4;
loc_83A99BA4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x83ac4860
	ctx.lr = 0x83A99BB4;
	sub_83AC4860(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq 0x83a99bc4
	if (cr0.eq) goto loc_83A99BC4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_83A99BC4:
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

__attribute__((alias("__imp__sub_83A99BD8"))) PPC_WEAK_FUNC(sub_83A99BD8);
PPC_FUNC_IMPL(__imp__sub_83A99BD8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// bl 0x83a98698
	ctx.lr = 0x83A99BFC;
	sub_83A98698(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bne 0x83a99c0c
	if (!cr0.eq) goto loc_83A99C0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A99C0C:
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

__attribute__((alias("__imp__sub_83A99C20"))) PPC_WEAK_FUNC(sub_83A99C20);
PPC_FUNC_IMPL(__imp__sub_83A99C20) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// bl 0x83a98700
	ctx.lr = 0x83A99C44;
	sub_83A98700(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bne 0x83a99c54
	if (!cr0.eq) goto loc_83A99C54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A99C54:
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

__attribute__((alias("__imp__sub_83A99C68"))) PPC_WEAK_FUNC(sub_83A99C68);
PPC_FUNC_IMPL(__imp__sub_83A99C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A99C70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x83a98698
	ctx.lr = 0x83A99C8C;
	sub_83A98698(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a99cac
	if (cr0.eq) goto loc_83A99CAC;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a97b80
	ctx.lr = 0x83A99CAC;
	sub_83A97B80(ctx, base);
loc_83A99CAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A99CB4"))) PPC_WEAK_FUNC(sub_83A99CB4);
PPC_FUNC_IMPL(__imp__sub_83A99CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A99CB8"))) PPC_WEAK_FUNC(sub_83A99CB8);
PPC_FUNC_IMPL(__imp__sub_83A99CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A99CC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83a98700
	ctx.lr = 0x83A99CD8;
	sub_83A98700(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a99ce8
	if (!cr0.eq) goto loc_83A99CE8;
loc_83A99CE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a99d18
	goto loc_83A99D18;
loc_83A99CE8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x83ac4860
	ctx.lr = 0x83A99CF8;
	sub_83AC4860(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a99ce0
	if (cr0.eq) goto loc_83A99CE0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lhz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a99ff8
	ctx.lr = 0x83A99D18;
	sub_83A99FF8(ctx, base);
loc_83A99D18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A99D20"))) PPC_WEAK_FUNC(sub_83A99D20);
PPC_FUNC_IMPL(__imp__sub_83A99D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A99D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83a98698
	ctx.lr = 0x83A99D40;
	sub_83A98698(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a99d50
	if (!cr0.eq) goto loc_83A99D50;
loc_83A99D48:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a99d80
	goto loc_83A99D80;
loc_83A99D50:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x83ac4860
	ctx.lr = 0x83A99D60;
	sub_83AC4860(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a99d48
	if (cr0.eq) goto loc_83A99D48;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lhz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a99ff8
	ctx.lr = 0x83A99D80;
	sub_83A99FF8(ctx, base);
loc_83A99D80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A99D88"))) PPC_WEAK_FUNC(sub_83A99D88);
PPC_FUNC_IMPL(__imp__sub_83A99D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A99D90;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831ea798
	ctx.lr = 0x83A99DB4;
	sub_831EA798(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,1852
	ctx.r3.s64 = ctx.r31.s64 + 1852;
	// bl 0x83ac67b8
	ctx.lr = 0x83A99DC4;
	sub_83AC67B8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a99dd8
	if (cr6.eq) goto loc_83A99DD8;
	// bl 0x83a95f30
	ctx.lr = 0x83A99DD4;
	sub_83A95F30(ctx, base);
	// b 0x83a99df0
	goto loc_83A99DF0;
loc_83A99DD8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// addi r3,r31,1792
	ctx.r3.s64 = ctx.r31.s64 + 1792;
	// bl 0x83ac6758
	ctx.lr = 0x83A99DE8;
	sub_83AC6758(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a95fb8
	ctx.lr = 0x83A99DF0;
	sub_83A95FB8(ctx, base);
loc_83A99DF0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a99e38
	if (cr6.eq) goto loc_83A99E38;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a99e20
	if (cr6.eq) goto loc_83A99E20;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x825832e8
	ctx.lr = 0x83A99E0C;
	sub_825832E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x83a99d20
	ctx.lr = 0x83A99E1C;
	sub_83A99D20(ctx, base);
	// b 0x83a99e38
	goto loc_83A99E38;
loc_83A99E20:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825832e8
	ctx.lr = 0x83A99E28;
	sub_825832E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x83a99cb8
	ctx.lr = 0x83A99E38;
	sub_83A99CB8(ctx, base);
loc_83A99E38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A99E40"))) PPC_WEAK_FUNC(sub_83A99E40);
PPC_FUNC_IMPL(__imp__sub_83A99E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A99E48;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,2432(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2432);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a99f8c
	if (cr6.eq) goto loc_83A99F8C;
	// lwz r11,2424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2424);
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// rlwinm r5,r7,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// blt cr6,0x83a99f04
	if (cr6.lt) goto loc_83A99F04;
	// lwz r10,2440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2440);
	// rlwinm r11,r6,11,5,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 11) & 0x7FFF800;
	// lwz r8,2444(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2444);
	// lis r7,294
	ctx.r7.s64 = 19267584;
	// clrlwi r30,r6,16
	ctx.r30.u64 = ctx.r6.u32 & 0xFFFF;
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// blt cr6,0x83a99ec4
	if (cr6.lt) goto loc_83A99EC4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,2324
	ctx.r3.s64 = ctx.r3.s64 + 2324;
	// bl 0x83ac6c78
	ctx.lr = 0x83A99EC4;
	sub_83AC6C78(ctx, base);
loc_83A99EC4:
	// li r8,2048
	ctx.r8.s64 = 2048;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83abba98
	ctx.lr = 0x83A99EE4;
	sub_83ABBA98(ctx, base);
	// lwz r11,2420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2420);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,2420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2420);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a99f9c
	if (!cr6.eq) goto loc_83A99F9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a99fac
	goto loc_83A99FAC;
loc_83A99F04:
	// stw r5,2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2424, ctx.r5.u32);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r28,r29,2,14,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FFFC;
	// bl 0x83ace820
	ctx.lr = 0x83A99F24;
	sub_83ACE820(ctx, base);
	// lwz r11,2420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2420);
	// stwx r3,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,2420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2420);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x83abbe70
	ctx.lr = 0x83A99F38;
	sub_83ABBE70(ctx, base);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aceed0
	ctx.lr = 0x83A99F44;
	sub_83ACEED0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,2424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2424);
	// subf r27,r11,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r11.s64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831eb810
	ctx.lr = 0x83A99F60;
	sub_831EB810(ctx, base);
	// lwz r11,2420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2420);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x83a7bda0
	ctx.lr = 0x83A99F74;
	sub_83A7BDA0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831eb838
	ctx.lr = 0x83A99F88;
	sub_831EB838(ctx, base);
	// b 0x83a99f9c
	goto loc_83A99F9C;
loc_83A99F8C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,22096
	ctx.r4.s64 = ctx.r11.s64 + 22096;
	// bl 0x831ea3f0
	ctx.lr = 0x83A99F9C;
	sub_831EA3F0(ctx, base);
loc_83A99F9C:
	// lwz r11,2428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// rlwinm r10,r29,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r25,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r25.u32);
loc_83A99FAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A99FB4"))) PPC_WEAK_FUNC(sub_83A99FB4);
PPC_FUNC_IMPL(__imp__sub_83A99FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A99FB8"))) PPC_WEAK_FUNC(sub_83A99FB8);
PPC_FUNC_IMPL(__imp__sub_83A99FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83a99fec
	if (cr6.eq) goto loc_83A99FEC;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x83a99fd4
	if (!cr6.eq) goto loc_83A99FD4;
loc_83A99FCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A99FD4:
	// lwz r11,2420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a99fcc
	if (cr6.eq) goto loc_83A99FCC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_83A99FEC:
	// lwz r3,2400(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2400);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A99FF4"))) PPC_WEAK_FUNC(sub_83A99FF4);
PPC_FUNC_IMPL(__imp__sub_83A99FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A99FF8"))) PPC_WEAK_FUNC(sub_83A99FF8);
PPC_FUNC_IMPL(__imp__sub_83A99FF8) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x83a9a084
	if (cr6.eq) goto loc_83A9A084;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// beq cr6,0x83a9a074
	if (cr6.eq) goto loc_83A9A074;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x83a9a068
	if (cr6.eq) goto loc_83A9A068;
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// beq cr6,0x83a9a05c
	if (cr6.eq) goto loc_83A9A05C;
	// cmpwi cr6,r5,6
	cr6.compare<int32_t>(ctx.r5.s32, 6, xer);
	// beq cr6,0x83a9a074
	if (cr6.eq) goto loc_83A9A074;
	// cmpwi cr6,r5,7
	cr6.compare<int32_t>(ctx.r5.s32, 7, xer);
	// beq cr6,0x83a9a068
	if (cr6.eq) goto loc_83A9A068;
	// cmpwi cr6,r5,8
	cr6.compare<int32_t>(ctx.r5.s32, 8, xer);
	// bne cr6,0x83a9a0b4
	if (!cr6.eq) goto loc_83A9A0B4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83a97da0
	ctx.lr = 0x83A9A058;
	sub_83A97DA0(ctx, base);
	// b 0x83a9a07c
	goto loc_83A9A07C;
loc_83A9A05C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83a99d88
	ctx.lr = 0x83A9A064;
	sub_83A99D88(ctx, base);
	// b 0x83a9a07c
	goto loc_83A9A07C;
loc_83A9A068:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83a97bd8
	ctx.lr = 0x83A9A070;
	sub_83A97BD8(ctx, base);
	// b 0x83a9a07c
	goto loc_83A9A07C;
loc_83A9A074:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83a9a0d0
	ctx.lr = 0x83A9A07C;
	sub_83A9A0D0(ctx, base);
loc_83A9A07C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x83a9a0b4
	goto loc_83A9A0B4;
loc_83A9A084:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a9a0b0
	if (cr6.eq) goto loc_83A9A0B0;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r30,r11,27424
	ctx.r30.s64 = ctx.r11.s64 + 27424;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83a97fb8
	ctx.lr = 0x83A9A09C;
	sub_83A97FB8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea778
	ctx.lr = 0x83A9A0B0;
	sub_831EA778(ctx, base);
loc_83A9A0B0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83A9A0B4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9A0D0"))) PPC_WEAK_FUNC(sub_83A9A0D0);
PPC_FUNC_IMPL(__imp__sub_83A9A0D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A9A0D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,588
	ctx.r3.s64 = ctx.r3.s64 + 588;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x83ac4d88
	ctx.lr = 0x83A9A0FC;
	sub_83AC4D88(ctx, base);
	// lbz r11,122(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bne 0x83a9a114
	if (!cr0.eq) goto loc_83A9A114;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a9a1bc
	goto loc_83A9A1BC;
loc_83A9A114:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83a9a158
	if (cr6.eq) goto loc_83A9A158;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83a9a158
	if (cr6.eq) goto loc_83A9A158;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r29,1344
	ctx.r3.s64 = ctx.r29.s64 + 1344;
	// bl 0x83ac6090
	ctx.lr = 0x83A9A134;
	sub_83AC6090(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83ab3320
	ctx.lr = 0x83A9A158;
	sub_83AB3320(ctx, base);
loc_83A9A158:
	// lbz r11,122(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a9a1b8
	if (cr0.eq) goto loc_83A9A1B8;
	// addi r30,r31,-1
	ctx.r30.s64 = ctx.r31.s64 + -1;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
loc_83A9A170:
	// lbzu r8,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lbzu r11,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwimi r8,r11,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// lbzu r9,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// lbzu r10,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x83a99ff8
	ctx.lr = 0x83A9A1A0;
	sub_83A99FF8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x83a9a1b8
	if (!cr0.eq) goto loc_83A9A1B8;
	// lbz r11,122(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a9a170
	if (cr6.lt) goto loc_83A9A170;
loc_83A9A1B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83A9A1BC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9A1C4"))) PPC_WEAK_FUNC(sub_83A9A1C4);
PPC_FUNC_IMPL(__imp__sub_83A9A1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9A1C8"))) PPC_WEAK_FUNC(sub_83A9A1C8);
PPC_FUNC_IMPL(__imp__sub_83A9A1C8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A9A1F0;
	sub_831EA7A0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9A248"))) PPC_WEAK_FUNC(sub_83A9A248);
PPC_FUNC_IMPL(__imp__sub_83A9A248) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9a2a0
	if (!cr6.eq) goto loc_83A9A2A0;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,48000
	ctx.r11.u64 = ctx.r11.u64 | 48000;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lfs f0,24504(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_83A9A2A0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83a9a1c8
	ctx.lr = 0x83A9A2A8;
	sub_83A9A1C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a8bf00
	ctx.lr = 0x83A9A2B0;
	sub_83A8BF00(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a9a2d8
	if (!cr6.eq) goto loc_83A9A2D8;
	// bl 0x83a819c8
	ctx.lr = 0x83A9A2BC;
	sub_83A819C8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9a2d8
	if (cr0.eq) goto loc_83A9A2D8;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a9a2d8
	if (!cr6.eq) goto loc_83A9A2D8;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_83A9A2D8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83acf178
	ctx.lr = 0x83A9A2E0;
	sub_83ACF178(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9A2F0"))) PPC_WEAK_FUNC(sub_83A9A2F0);
PPC_FUNC_IMPL(__imp__sub_83A9A2F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9a348
	if (!cr6.eq) goto loc_83A9A348;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,48000
	ctx.r11.u64 = ctx.r11.u64 | 48000;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lfs f0,24504(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_83A9A348:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83a9a1c8
	ctx.lr = 0x83A9A350;
	sub_83A9A1C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83acf270
	ctx.lr = 0x83A9A358;
	sub_83ACF270(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9A368"))) PPC_WEAK_FUNC(sub_83A9A368);
PPC_FUNC_IMPL(__imp__sub_83A9A368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9A370;
	__savegprlr_29(ctx, base);
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
	// bl 0x83a81a50
	ctx.lr = 0x83A9A384;
	sub_83A81A50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a9a39c
	if (!cr0.eq) goto loc_83A9A39C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,22248
	ctx.r4.s64 = ctx.r11.s64 + 22248;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9A398;
	sub_831EA3F0(ctx, base);
	// b 0x83a9a404
	goto loc_83A9A404;
loc_83A9A39C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9a3e8
	if (!cr6.eq) goto loc_83A9A3E8;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,48000
	ctx.r11.u64 = ctx.r11.u64 | 48000;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lfs f0,24504(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_83A9A3E8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9a1c8
	ctx.lr = 0x83A9A3F4;
	sub_83A9A1C8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83acf310
	ctx.lr = 0x83A9A404;
	sub_83ACF310(ctx, base);
loc_83A9A404:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9A40C"))) PPC_WEAK_FUNC(sub_83A9A40C);
PPC_FUNC_IMPL(__imp__sub_83A9A40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9A410"))) PPC_WEAK_FUNC(sub_83A9A410);
PPC_FUNC_IMPL(__imp__sub_83A9A410) {
	PPC_FUNC_PROLOGUE();
	// b 0x83acf348
	sub_83ACF348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9A414"))) PPC_WEAK_FUNC(sub_83A9A414);
PPC_FUNC_IMPL(__imp__sub_83A9A414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9A418"))) PPC_WEAK_FUNC(sub_83A9A418);
PPC_FUNC_IMPL(__imp__sub_83A9A418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A9A420;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r28,r11,27788
	ctx.r28.s64 = ctx.r11.s64 + 27788;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r3,-16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9a460
	if (cr6.eq) goto loc_83A9A460;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A9A460;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A9A460:
	// lwz r3,-8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9a494
	if (cr6.eq) goto loc_83A9A494;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A9A494;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A9A494:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9a4c8
	if (cr6.eq) goto loc_83A9A4C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A9A4C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A9A4C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9A4D0"))) PPC_WEAK_FUNC(sub_83A9A4D0);
PPC_FUNC_IMPL(__imp__sub_83A9A4D0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9a508
	if (!cr6.eq) goto loc_83A9A508;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,600
	ctx.r10.s64 = 600;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_83A9A508:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83ac8d38
	ctx.lr = 0x83A9A518;
	sub_83AC8D38(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A9A524;
	sub_831EA7A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwa r11,0(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 0));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwa r11,4(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 4));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_83A9A57C"))) PPC_WEAK_FUNC(sub_83A9A57C);
PPC_FUNC_IMPL(__imp__sub_83A9A57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9A580"))) PPC_WEAK_FUNC(sub_83A9A580);
PPC_FUNC_IMPL(__imp__sub_83A9A580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83a9a4d0
	ctx.lr = 0x83A9A594;
	sub_83A9A4D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83acf388
	ctx.lr = 0x83A9A59C;
	sub_83ACF388(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9A5B0"))) PPC_WEAK_FUNC(sub_83A9A5B0);
PPC_FUNC_IMPL(__imp__sub_83A9A5B0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9a5f0
	if (!cr6.eq) goto loc_83A9A5F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,50
	ctx.r10.s64 = 50;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_83A9A5F0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83ac8d38
	ctx.lr = 0x83A9A600;
	sub_83AC8D38(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A9A60C;
	sub_831EA7A0(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwa r11,0(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 0));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwa r11,4(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 4));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwa r11,8(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
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

__attribute__((alias("__imp__sub_83A9A67C"))) PPC_WEAK_FUNC(sub_83A9A67C);
PPC_FUNC_IMPL(__imp__sub_83A9A67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9A680"))) PPC_WEAK_FUNC(sub_83A9A680);
PPC_FUNC_IMPL(__imp__sub_83A9A680) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9a6b0
	if (!cr6.eq) goto loc_83A9A6B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,50
	ctx.r10.s64 = 50;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_83A9A6B0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83a9a5b0
	ctx.lr = 0x83A9A6B8;
	sub_83A9A5B0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83acf920
	ctx.lr = 0x83A9A6C0;
	sub_83ACF920(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9A6D4"))) PPC_WEAK_FUNC(sub_83A9A6D4);
PPC_FUNC_IMPL(__imp__sub_83A9A6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9A6D8"))) PPC_WEAK_FUNC(sub_83A9A6D8);
PPC_FUNC_IMPL(__imp__sub_83A9A6D8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,27480
	ctx.r31.s64 = ctx.r11.s64 + 27480;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a9a734
	if (!cr6.eq) goto loc_83A9A734;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a75be8
	ctx.lr = 0x83A9A710;
	sub_83A75BE8(ctx, base);
	// stw r3,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-14684
	ctx.r3.s64 = ctx.r11.s64 + -14684;
	// bl 0x83a761b8
	ctx.lr = 0x83A9A724;
	sub_83A761B8(ctx, base);
	// lis r11,-31830
	ctx.r11.s64 = -2086010880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-23528
	ctx.r3.s64 = ctx.r11.s64 + -23528;
	// bl 0x83ac8ce8
	ctx.lr = 0x83A9A734;
	sub_83AC8CE8(ctx, base);
loc_83A9A734:
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

__attribute__((alias("__imp__sub_83A9A748"))) PPC_WEAK_FUNC(sub_83A9A748);
PPC_FUNC_IMPL(__imp__sub_83A9A748) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,27768
	ctx.r31.s64 = ctx.r11.s64 + 27768;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bne 0x83a9a7c8
	if (!cr0.eq) goto loc_83A9A7C8;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,-14684
	ctx.r30.s64 = ctx.r11.s64 + -14684;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A9A788;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a9a7ac
	if (!cr6.eq) goto loc_83A9A7AC;
loc_83A9A790:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a75e98
	ctx.lr = 0x83A9A798;
	sub_83A75E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a761b8
	ctx.lr = 0x83A9A7A4;
	sub_83A761B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a9a790
	if (!cr0.eq) goto loc_83A9A790;
loc_83A9A7AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83ac8ce8
	ctx.lr = 0x83A9A7B8;
	sub_83AC8CE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83a75c60
	ctx.lr = 0x83A9A7C8;
	sub_83A75C60(ctx, base);
loc_83A9A7C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9A7E0"))) PPC_WEAK_FUNC(sub_83A9A7E0);
PPC_FUNC_IMPL(__imp__sub_83A9A7E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A9A7E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9a810
	if (!cr6.eq) goto loc_83A9A810;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,600
	ctx.r10.s64 = 600;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_83A9A810:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r29,r11,27780
	ctx.r29.s64 = ctx.r11.s64 + 27780;
	// lwz r11,27780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27780);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9a838
	if (cr6.eq) goto loc_83A9A838;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,22404
	ctx.r4.s64 = ctx.r11.s64 + 22404;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9A834;
	sub_831EA3F0(ctx, base);
	// b 0x83a9a8bc
	goto loc_83A9A8BC;
loc_83A9A838:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83a9a4d0
	ctx.lr = 0x83A9A840;
	sub_83A9A4D0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9a8bc
	if (cr6.eq) goto loc_83A9A8BC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9a8bc
	if (cr6.eq) goto loc_83A9A8BC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83acf388
	ctx.lr = 0x83A9A860;
	sub_83ACF388(ctx, base);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// addi r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a82d48
	ctx.lr = 0x83A9A878;
	sub_83A82D48(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83a9a898
	if (!cr0.eq) goto loc_83A9A898;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,22392
	ctx.r4.s64 = ctx.r11.s64 + 22392;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9A894;
	sub_831EA418(ctx, base);
	// b 0x83a9a8bc
	goto loc_83A9A8BC;
loc_83A9A898:
	// bl 0x83a83240
	ctx.lr = 0x83A9A89C;
	sub_83A83240(ctx, base);
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83acfbf8
	ctx.lr = 0x83A9A8B0;
	sub_83ACFBF8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// bl 0x83a9a6d8
	ctx.lr = 0x83A9A8B8;
	sub_83A9A6D8(ctx, base);
	// bl 0x83a83248
	ctx.lr = 0x83A9A8BC;
	sub_83A83248(ctx, base);
loc_83A9A8BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9A8C4"))) PPC_WEAK_FUNC(sub_83A9A8C4);
PPC_FUNC_IMPL(__imp__sub_83A9A8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9A8C8"))) PPC_WEAK_FUNC(sub_83A9A8C8);
PPC_FUNC_IMPL(__imp__sub_83A9A8C8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,27780
	ctx.r31.s64 = ctx.r11.s64 + 27780;
	// lwz r11,27780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27780);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9a900
	if (!cr6.eq) goto loc_83A9A900;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,22452
	ctx.r4.s64 = ctx.r11.s64 + 22452;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9A8FC;
	sub_831EA3F0(ctx, base);
	// b 0x83a9a92c
	goto loc_83A9A92C;
loc_83A9A900:
	// bl 0x83a83240
	ctx.lr = 0x83A9A904;
	sub_83A83240(ctx, base);
	// bl 0x83a9a748
	ctx.lr = 0x83A9A908;
	sub_83A9A748(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83102db0
	ctx.lr = 0x83A9A910;
	sub_83102DB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83a83248
	ctx.lr = 0x83A9A91C;
	sub_83A83248(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a82de8
	ctx.lr = 0x83A9A924;
	sub_83A82DE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83A9A92C:
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

__attribute__((alias("__imp__sub_83A9A940"))) PPC_WEAK_FUNC(sub_83A9A940);
PPC_FUNC_IMPL(__imp__sub_83A9A940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A9A948;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9a978
	if (!cr6.eq) goto loc_83A9A978;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,50
	ctx.r10.s64 = 50;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_83A9A978:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r29,r11,27788
	ctx.r29.s64 = ctx.r11.s64 + 27788;
	// lwz r11,27788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27788);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9a9a0
	if (cr6.eq) goto loc_83A9A9A0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,22516
	ctx.r4.s64 = ctx.r11.s64 + 22516;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9A99C;
	sub_831EA3F0(ctx, base);
	// b 0x83a9aa24
	goto loc_83A9AA24;
loc_83A9A9A0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83a9a5b0
	ctx.lr = 0x83A9A9A8;
	sub_83A9A5B0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9aa24
	if (cr6.eq) goto loc_83A9AA24;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9aa24
	if (cr6.eq) goto loc_83A9AA24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83acf920
	ctx.lr = 0x83A9A9C8;
	sub_83ACF920(ctx, base);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// addi r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a82d48
	ctx.lr = 0x83A9A9E0;
	sub_83A82D48(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83a9aa00
	if (!cr0.eq) goto loc_83A9AA00;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,22504
	ctx.r4.s64 = ctx.r11.s64 + 22504;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9A9FC;
	sub_831EA418(ctx, base);
	// b 0x83a9aa24
	goto loc_83A9AA24;
loc_83A9AA00:
	// bl 0x83a83240
	ctx.lr = 0x83A9AA04;
	sub_83A83240(ctx, base);
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83acf928
	ctx.lr = 0x83A9AA18;
	sub_83ACF928(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// bl 0x83a9a6d8
	ctx.lr = 0x83A9AA20;
	sub_83A9A6D8(ctx, base);
	// bl 0x83a83248
	ctx.lr = 0x83A9AA24;
	sub_83A83248(ctx, base);
loc_83A9AA24:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9AA2C"))) PPC_WEAK_FUNC(sub_83A9AA2C);
PPC_FUNC_IMPL(__imp__sub_83A9AA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9AA30"))) PPC_WEAK_FUNC(sub_83A9AA30);
PPC_FUNC_IMPL(__imp__sub_83A9AA30) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,27788
	ctx.r31.s64 = ctx.r11.s64 + 27788;
	// lwz r11,27788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27788);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9aa68
	if (!cr6.eq) goto loc_83A9AA68;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,22560
	ctx.r4.s64 = ctx.r11.s64 + 22560;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9AA64;
	sub_831EA3F0(ctx, base);
	// b 0x83a9aa94
	goto loc_83A9AA94;
loc_83A9AA68:
	// bl 0x83a83240
	ctx.lr = 0x83A9AA6C;
	sub_83A83240(ctx, base);
	// bl 0x83a9a748
	ctx.lr = 0x83A9AA70;
	sub_83A9A748(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83102db0
	ctx.lr = 0x83A9AA78;
	sub_83102DB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83a83248
	ctx.lr = 0x83A9AA84;
	sub_83A83248(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a82de8
	ctx.lr = 0x83A9AA8C;
	sub_83A82DE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83A9AA94:
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

__attribute__((alias("__imp__sub_83A9AAA8"))) PPC_WEAK_FUNC(sub_83A9AAA8);
PPC_FUNC_IMPL(__imp__sub_83A9AAA8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9aaf0
	if (!cr6.eq) goto loc_83A9AAF0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r9,r9,48000
	ctx.r9.u64 = ctx.r9.u64 | 48000;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_83A9AAF0:
	// bl 0x83ad0570
	ctx.lr = 0x83A9AAF4;
	sub_83AD0570(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9AB04"))) PPC_WEAK_FUNC(sub_83A9AB04);
PPC_FUNC_IMPL(__imp__sub_83A9AB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9AB08"))) PPC_WEAK_FUNC(sub_83A9AB08);
PPC_FUNC_IMPL(__imp__sub_83A9AB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A9AB10;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9ab5c
	if (!cr6.eq) goto loc_83A9AB5C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// ori r10,r10,48000
	ctx.r10.u64 = ctx.r10.u64 | 48000;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_83A9AB5C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a9aaa8
	ctx.lr = 0x83A9AB64;
	sub_83A9AAA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x83a9abf8
	if (cr0.lt) goto loc_83A9ABF8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x83a9ab98
	if (!cr6.eq) goto loc_83A9AB98;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83a9ab90
	if (!cr6.eq) goto loc_83A9AB90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a82d10
	ctx.lr = 0x83A9AB84;
	sub_83A82D10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83A9AB90:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83a9abd4
	if (cr6.eq) goto loc_83A9ABD4;
loc_83A9AB98:
	// cmpw cr6,r29,r31
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, xer);
	// blt cr6,0x83a9abd4
	if (cr6.lt) goto loc_83A9ABD4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83ad05f0
	ctx.lr = 0x83A9ABB0;
	sub_83AD05F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83a9abe8
	if (cr0.eq) goto loc_83A9ABE8;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x83a82480
	ctx.lr = 0x83A9ABC0;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ad10a8
	ctx.lr = 0x83A9ABC8;
	sub_83AD10A8(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9ABCC;
	sub_83A824C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83a9abfc
	goto loc_83A9ABFC;
loc_83A9ABD4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,22676
	ctx.r4.s64 = ctx.r11.s64 + 22676;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9ABE8;
	sub_831EA418(ctx, base);
loc_83A9ABE8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a9abf8
	if (cr6.eq) goto loc_83A9ABF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83A9ABF8;
	sub_83A82D38(ctx, base);
loc_83A9ABF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A9ABFC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9AC04"))) PPC_WEAK_FUNC(sub_83A9AC04);
PPC_FUNC_IMPL(__imp__sub_83A9AC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9AC08"))) PPC_WEAK_FUNC(sub_83A9AC08);
PPC_FUNC_IMPL(__imp__sub_83A9AC08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9ac48
	if (!cr6.eq) goto loc_83A9AC48;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r10,r10,48000
	ctx.r10.u64 = ctx.r10.u64 | 48000;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_83A9AC48:
	// bl 0x83ad1958
	ctx.lr = 0x83A9AC4C;
	sub_83AD1958(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9AC5C"))) PPC_WEAK_FUNC(sub_83A9AC5C);
PPC_FUNC_IMPL(__imp__sub_83A9AC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9AC60"))) PPC_WEAK_FUNC(sub_83A9AC60);
PPC_FUNC_IMPL(__imp__sub_83A9AC60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A9AC68;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9acac
	if (!cr6.eq) goto loc_83A9ACAC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r11,r11,48000
	ctx.r11.u64 = ctx.r11.u64 | 48000;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_83A9ACAC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a9ac08
	ctx.lr = 0x83A9ACB4;
	sub_83A9AC08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x83a9ad48
	if (cr0.lt) goto loc_83A9AD48;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83a9ace8
	if (!cr6.eq) goto loc_83A9ACE8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83a9ace0
	if (!cr6.eq) goto loc_83A9ACE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a82d10
	ctx.lr = 0x83A9ACD4;
	sub_83A82D10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_83A9ACE0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a9ad24
	if (cr6.eq) goto loc_83A9AD24;
loc_83A9ACE8:
	// cmpw cr6,r29,r31
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, xer);
	// blt cr6,0x83a9ad24
	if (cr6.lt) goto loc_83A9AD24;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83ad19d0
	ctx.lr = 0x83A9AD00;
	sub_83AD19D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83a9ad38
	if (cr0.eq) goto loc_83A9AD38;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x83a82480
	ctx.lr = 0x83A9AD10;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ad10a8
	ctx.lr = 0x83A9AD18;
	sub_83AD10A8(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9AD1C;
	sub_83A824C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83a9ad4c
	goto loc_83A9AD4C;
loc_83A9AD24:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,22756
	ctx.r4.s64 = ctx.r11.s64 + 22756;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9AD38;
	sub_831EA418(ctx, base);
loc_83A9AD38:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a9ad48
	if (cr6.eq) goto loc_83A9AD48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83A9AD48;
	sub_83A82D38(ctx, base);
loc_83A9AD48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A9AD4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9AD54"))) PPC_WEAK_FUNC(sub_83A9AD54);
PPC_FUNC_IMPL(__imp__sub_83A9AD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9AD58"))) PPC_WEAK_FUNC(sub_83A9AD58);
PPC_FUNC_IMPL(__imp__sub_83A9AD58) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9ada0
	if (!cr6.eq) goto loc_83A9ADA0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r9,r9,48000
	ctx.r9.u64 = ctx.r9.u64 | 48000;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_83A9ADA0:
	// bl 0x83ad1af0
	ctx.lr = 0x83A9ADA4;
	sub_83AD1AF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9ADB4"))) PPC_WEAK_FUNC(sub_83A9ADB4);
PPC_FUNC_IMPL(__imp__sub_83A9ADB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9ADB8"))) PPC_WEAK_FUNC(sub_83A9ADB8);
PPC_FUNC_IMPL(__imp__sub_83A9ADB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A9ADC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9ae0c
	if (!cr6.eq) goto loc_83A9AE0C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// ori r10,r10,48000
	ctx.r10.u64 = ctx.r10.u64 | 48000;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_83A9AE0C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a9ad58
	ctx.lr = 0x83A9AE14;
	sub_83A9AD58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x83a9aea8
	if (cr0.lt) goto loc_83A9AEA8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x83a9ae48
	if (!cr6.eq) goto loc_83A9AE48;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83a9ae40
	if (!cr6.eq) goto loc_83A9AE40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a82d10
	ctx.lr = 0x83A9AE34;
	sub_83A82D10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83A9AE40:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83a9ae84
	if (cr6.eq) goto loc_83A9AE84;
loc_83A9AE48:
	// cmpw cr6,r29,r31
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, xer);
	// blt cr6,0x83a9ae84
	if (cr6.lt) goto loc_83A9AE84;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83ad1b68
	ctx.lr = 0x83A9AE60;
	sub_83AD1B68(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83a9ae98
	if (cr0.eq) goto loc_83A9AE98;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x83a82480
	ctx.lr = 0x83A9AE70;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ad10a8
	ctx.lr = 0x83A9AE78;
	sub_83AD10A8(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9AE7C;
	sub_83A824C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83a9aeac
	goto loc_83A9AEAC;
loc_83A9AE84:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,22836
	ctx.r4.s64 = ctx.r11.s64 + 22836;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9AE98;
	sub_831EA418(ctx, base);
loc_83A9AE98:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a9aea8
	if (cr6.eq) goto loc_83A9AEA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83A9AEA8;
	sub_83A82D38(ctx, base);
loc_83A9AEA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A9AEAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9AEB4"))) PPC_WEAK_FUNC(sub_83A9AEB4);
PPC_FUNC_IMPL(__imp__sub_83A9AEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9AEB8"))) PPC_WEAK_FUNC(sub_83A9AEB8);
PPC_FUNC_IMPL(__imp__sub_83A9AEB8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9af00
	if (!cr6.eq) goto loc_83A9AF00;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r9,r9,48000
	ctx.r9.u64 = ctx.r9.u64 | 48000;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_83A9AF00:
	// bl 0x83ad1c88
	ctx.lr = 0x83A9AF04;
	sub_83AD1C88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9AF14"))) PPC_WEAK_FUNC(sub_83A9AF14);
PPC_FUNC_IMPL(__imp__sub_83A9AF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9AF18"))) PPC_WEAK_FUNC(sub_83A9AF18);
PPC_FUNC_IMPL(__imp__sub_83A9AF18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A9AF20;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9af6c
	if (!cr6.eq) goto loc_83A9AF6C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// ori r10,r10,48000
	ctx.r10.u64 = ctx.r10.u64 | 48000;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_83A9AF6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a9aeb8
	ctx.lr = 0x83A9AF74;
	sub_83A9AEB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x83a9b008
	if (cr0.lt) goto loc_83A9B008;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x83a9afa8
	if (!cr6.eq) goto loc_83A9AFA8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83a9afa0
	if (!cr6.eq) goto loc_83A9AFA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a82d10
	ctx.lr = 0x83A9AF94;
	sub_83A82D10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83A9AFA0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83a9afe4
	if (cr6.eq) goto loc_83A9AFE4;
loc_83A9AFA8:
	// cmpw cr6,r29,r31
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, xer);
	// blt cr6,0x83a9afe4
	if (cr6.lt) goto loc_83A9AFE4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83ad1d08
	ctx.lr = 0x83A9AFC0;
	sub_83AD1D08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83a9aff8
	if (cr0.eq) goto loc_83A9AFF8;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x83a82480
	ctx.lr = 0x83A9AFD0;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ad10a8
	ctx.lr = 0x83A9AFD8;
	sub_83AD10A8(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9AFDC;
	sub_83A824C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83a9b00c
	goto loc_83A9B00C;
loc_83A9AFE4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,22916
	ctx.r4.s64 = ctx.r11.s64 + 22916;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9AFF8;
	sub_831EA418(ctx, base);
loc_83A9AFF8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a9b008
	if (cr6.eq) goto loc_83A9B008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83A9B008;
	sub_83A82D38(ctx, base);
loc_83A9B008:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A9B00C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9B014"))) PPC_WEAK_FUNC(sub_83A9B014);
PPC_FUNC_IMPL(__imp__sub_83A9B014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9B018"))) PPC_WEAK_FUNC(sub_83A9B018);
PPC_FUNC_IMPL(__imp__sub_83A9B018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9b05c
	if (!cr6.eq) goto loc_83A9B05C;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ori r9,r9,48128
	ctx.r9.u64 = ctx.r9.u64 | 48128;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_83A9B05C:
	// bl 0x83ad1e28
	ctx.lr = 0x83A9B060;
	sub_83AD1E28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9B070"))) PPC_WEAK_FUNC(sub_83A9B070);
PPC_FUNC_IMPL(__imp__sub_83A9B070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A9B078;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9b0c0
	if (!cr6.eq) goto loc_83A9B0C0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// ori r10,r10,48128
	ctx.r10.u64 = ctx.r10.u64 | 48128;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_83A9B0C0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a9b018
	ctx.lr = 0x83A9B0C8;
	sub_83A9B018(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x83a9b15c
	if (cr0.lt) goto loc_83A9B15C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x83a9b0fc
	if (!cr6.eq) goto loc_83A9B0FC;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83a9b0f4
	if (!cr6.eq) goto loc_83A9B0F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a82d10
	ctx.lr = 0x83A9B0E8;
	sub_83A82D10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83A9B0F4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83a9b138
	if (cr6.eq) goto loc_83A9B138;
loc_83A9B0FC:
	// cmpw cr6,r29,r31
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, xer);
	// blt cr6,0x83a9b138
	if (cr6.lt) goto loc_83A9B138;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83ad1ea0
	ctx.lr = 0x83A9B114;
	sub_83AD1EA0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83a9b14c
	if (cr0.eq) goto loc_83A9B14C;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x83a82480
	ctx.lr = 0x83A9B124;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ad10a8
	ctx.lr = 0x83A9B12C;
	sub_83AD10A8(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9B130;
	sub_83A824C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83a9b160
	goto loc_83A9B160;
loc_83A9B138:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,22996
	ctx.r4.s64 = ctx.r11.s64 + 22996;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9B14C;
	sub_831EA418(ctx, base);
loc_83A9B14C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a9b15c
	if (cr6.eq) goto loc_83A9B15C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83A9B15C;
	sub_83A82D38(ctx, base);
loc_83A9B15C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A9B160:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9B168"))) PPC_WEAK_FUNC(sub_83A9B168);
PPC_FUNC_IMPL(__imp__sub_83A9B168) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ad0770
	sub_83AD0770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9B16C"))) PPC_WEAK_FUNC(sub_83A9B16C);
PPC_FUNC_IMPL(__imp__sub_83A9B16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9B170"))) PPC_WEAK_FUNC(sub_83A9B170);
PPC_FUNC_IMPL(__imp__sub_83A9B170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A9B178;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9b19c
	if (!cr6.eq) goto loc_83A9B19C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23076
	ctx.r4.s64 = ctx.r11.s64 + 23076;
	// bl 0x831ea418
	ctx.lr = 0x83A9B198;
	sub_831EA418(ctx, base);
	// b 0x83a9b228
	goto loc_83A9B228;
loc_83A9B19C:
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83a82480
	ctx.lr = 0x83A9B1A8;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ad0be8
	ctx.lr = 0x83A9B1B0;
	sub_83AD0BE8(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9B1B4;
	sub_83A824C0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83a9b1e8
	goto loc_83A9B1E8;
loc_83A9B1BC:
	// bl 0x83a81a70
	ctx.lr = 0x83A9B1C0;
	sub_83A81A70(ctx, base);
	// bl 0x83a824e0
	ctx.lr = 0x83A9B1C4;
	sub_83A824E0(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83a75e98
	ctx.lr = 0x83A9B1CC;
	sub_83A75E98(ctx, base);
	// li r11,3000
	ctx.r11.s64 = 3000;
	// divwu r11,r30,r11
	ctx.r11.u32 = PPCDivide(ctx.r30.u32, ctx.r11.u32);
	// mulli r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 * 3000;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,2999
	cr6.compare<uint32_t>(ctx.r11.u32, 2999, xer);
	// beq cr6,0x83a9b200
	if (cr6.eq) goto loc_83A9B200;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_83A9B1E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ad0f50
	ctx.lr = 0x83A9B1F0;
	sub_83AD0F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ad08c8
	ctx.lr = 0x83A9B1F8;
	sub_83AD08C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9b1bc
	if (cr0.eq) goto loc_83A9B1BC;
loc_83A9B200:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ad1008
	ctx.lr = 0x83A9B208;
	sub_83AD1008(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a9b218
	if (cr6.eq) goto loc_83A9B218;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83A9B218;
	sub_83A82D38(ctx, base);
loc_83A9B218:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a9b228
	if (cr6.eq) goto loc_83A9B228;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83A9B228;
	sub_83A82D38(ctx, base);
loc_83A9B228:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9B230"))) PPC_WEAK_FUNC(sub_83A9B230);
PPC_FUNC_IMPL(__imp__sub_83A9B230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// b 0x83a9b244
	goto loc_83A9B244;
loc_83A9B240:
	// bl 0x83a9b170
	ctx.lr = 0x83A9B244;
	sub_83A9B170(ctx, base);
loc_83A9B244:
	// bl 0x83ad0750
	ctx.lr = 0x83A9B248;
	sub_83AD0750(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a9b240
	if (!cr0.eq) goto loc_83A9B240;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9B260"))) PPC_WEAK_FUNC(sub_83A9B260);
PPC_FUNC_IMPL(__imp__sub_83A9B260) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,27800
	ctx.r31.s64 = ctx.r11.s64 + 27800;
	// lwz r11,27800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27800);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a9b2a8
	if (!cr6.eq) goto loc_83A9B2A8;
	// bl 0x83102db0
	ctx.lr = 0x83A9B290;
	sub_83102DB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_83A9B2A8:
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

__attribute__((alias("__imp__sub_83A9B2BC"))) PPC_WEAK_FUNC(sub_83A9B2BC);
PPC_FUNC_IMPL(__imp__sub_83A9B2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9B2C0"))) PPC_WEAK_FUNC(sub_83A9B2C0);
PPC_FUNC_IMPL(__imp__sub_83A9B2C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9B2C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9b2f4
	if (!cr6.eq) goto loc_83A9B2F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_83A9B2F4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u8 = (ctx.r10.u32 != 0) | (xer.ca != 0);
	ctx.r10.s64 = ctx.r10.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x83a9b314
	if (cr6.eq) goto loc_83A9B314;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_83A9B314:
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea7a0
	ctx.lr = 0x83A9B320;
	sub_831EA7A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82429688
	ctx.lr = 0x83A9B328;
	sub_82429688(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83aa1dc8
	ctx.lr = 0x83A9B330;
	sub_83AA1DC8(ctx, base);
	// rlwinm. r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x83a9b340
	if (!cr0.lt) goto loc_83A9B340;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a9b364
	goto loc_83A9B364;
loc_83A9B340:
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1032
	ctx.r3.s64 = ctx.r11.s64 + 1032;
loc_83A9B364:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9B36C"))) PPC_WEAK_FUNC(sub_83A9B36C);
PPC_FUNC_IMPL(__imp__sub_83A9B36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9B370"))) PPC_WEAK_FUNC(sub_83A9B370);
PPC_FUNC_IMPL(__imp__sub_83A9B370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A9B378;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r24,r11,27800
	ctx.r24.s64 = ctx.r11.s64 + 27800;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,27800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27800);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83a9b3b4
	if (cr6.gt) goto loc_83A9B3B4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,23340
	ctx.r4.s64 = ctx.r11.s64 + 23340;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9B3B0;
	sub_831EA418(ctx, base);
	// b 0x83a9b6a4
	goto loc_83A9B6A4;
loc_83A9B3B4:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x83a9b3dc
	if (!cr6.eq) goto loc_83A9B3DC;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
loc_83A9B3DC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a9b2c0
	ctx.lr = 0x83A9B3E4;
	sub_83A9B2C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt 0x83a9b6a4
	if (cr0.lt) goto loc_83A9B6A4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9b414
	if (!cr6.eq) goto loc_83A9B414;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x83a9b414
	if (!cr6.eq) goto loc_83A9B414;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a82d10
	ctx.lr = 0x83A9B404;
	sub_83A82D10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83a9b418
	goto loc_83A9B418;
loc_83A9B414:
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_83A9B418:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a9b680
	if (cr6.eq) goto loc_83A9B680;
	// cmpw cr6,r28,r29
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, xer);
	// blt cr6,0x83a9b680
	if (cr6.lt) goto loc_83A9B680;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A9B434;
	sub_831EA7A0(ctx, base);
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// rlwinm r31,r11,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r28,r31,1024
	ctx.r28.s64 = ctx.r31.s64 + 1024;
	// bl 0x83aa1dc8
	ctx.lr = 0x83A9B444;
	sub_83AA1DC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83aa1e20
	ctx.lr = 0x83A9B454;
	sub_83AA1E20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r3.u32);
	// bne 0x83a9b474
	if (!cr0.eq) goto loc_83A9B474;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,23296
	ctx.r4.s64 = ctx.r11.s64 + 23296;
loc_83A9B468:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9B470;
	sub_831EA3F0(ctx, base);
	// b 0x83a9b694
	goto loc_83A9B694;
loc_83A9B474:
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83aa1e20
	ctx.lr = 0x83A9B484;
	sub_83AA1E20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r3.u32);
	// bne 0x83a9b49c
	if (!cr0.eq) goto loc_83A9B49C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,23252
	ctx.r4.s64 = ctx.r11.s64 + 23252;
	// b 0x83a9b468
	goto loc_83A9B468;
loc_83A9B49C:
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bl 0x83a81a78
	ctx.lr = 0x83A9B4A4;
	sub_83A81A78(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83aa1ee0
	ctx.lr = 0x83A9B4B8;
	sub_83AA1EE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	// bl 0x83aa1f40
	ctx.lr = 0x83A9B4C4;
	sub_83AA1F40(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa1ee0
	ctx.lr = 0x83A9B4D8;
	sub_83AA1EE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// bl 0x83aa1f40
	ctx.lr = 0x83A9B4E4;
	sub_83AA1F40(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83acd4d8
	ctx.lr = 0x83A9B4FC;
	sub_83ACD4D8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a9b514
	if (!cr6.eq) goto loc_83A9B514;
	// stb r23,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r23.u8);
	// b 0x83a9b518
	goto loc_83A9B518;
loc_83A9B514:
	// stb r30,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r30.u8);
loc_83A9B518:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u8 = (ctx.r10.u32 != 0) | (xer.ca != 0);
	ctx.r10.s64 = ctx.r10.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x83a9b53c
	if (cr6.eq) goto loc_83A9B53C;
	// lwz r29,4(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_83A9B53C:
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x83a9b57c
	if (!cr6.gt) goto loc_83A9B57C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
loc_83A9B568:
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stwx r28,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u32);
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a9b568
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A9B568;
loc_83A9B57C:
	// li r4,756
	ctx.r4.s64 = 756;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x83ac0c40
	ctx.lr = 0x83A9B588;
	sub_83AC0C40(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831ea7a0
	ctx.lr = 0x83A9B598;
	sub_831EA7A0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82429688
	ctx.lr = 0x83A9B5A0;
	sub_82429688(ctx, base);
	// stw r28,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// cmpwi cr6,r29,32767
	cr6.compare<int32_t>(ctx.r29.s32, 32767, xer);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// stw r25,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r25.u32);
	// blt cr6,0x83a9b5b8
	if (cr6.lt) goto loc_83A9B5B8;
	// li r29,32767
	ctx.r29.s64 = 32767;
loc_83A9B5B8:
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// sth r29,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r29.u16);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,12(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// ori r9,r9,375
	ctx.r9.u64 = ctx.r9.u64 | 375;
	// stb r8,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r8.u8);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r8,16(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// stb r8,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r8.u8);
	// stb r8,55(r10)
	PPC_STORE_U8(ctx.r10.u32 + 55, ctx.r8.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwimi r8,r9,7,12,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFF00000);
	// rlwimi r8,r9,7,2,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0x3F000000) | (ctx.r8.u64 & 0xFFFFFFFFC0FFFFFF);
	// stw r23,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r23.u32);
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// stb r10,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r10.u8);
	// stb r30,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r11.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r30,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r30.u32);
	// stw r30,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r30.u32);
	// stw r31,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r31.u32);
	// bl 0x83a82480
	ctx.lr = 0x83A9B644;
	sub_83A82480(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9b658
	if (!cr6.eq) goto loc_83A9B658;
	// stw r31,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r31.u32);
	// b 0x83a9b664
	goto loc_83A9B664;
loc_83A9B658:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_83A9B664:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// stw r31,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r11.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A9B678;
	sub_83A824C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83a9b6a8
	goto loc_83A9B6A8;
loc_83A9B680:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,23240
	ctx.r4.s64 = ctx.r11.s64 + 23240;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9B694;
	sub_831EA418(ctx, base);
loc_83A9B694:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83a9b6a4
	if (cr6.eq) goto loc_83A9B6A4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83A9B6A4;
	sub_83A82D38(ctx, base);
loc_83A9B6A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A9B6A8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9B6B0"))) PPC_WEAK_FUNC(sub_83A9B6B0);
PPC_FUNC_IMPL(__imp__sub_83A9B6B0) {
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
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// bl 0x831ea798
	ctx.lr = 0x83A9B6D8;
	sub_831EA798(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// bl 0x83acd578
	ctx.lr = 0x83A9B6E8;
	sub_83ACD578(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9b6fc
	if (cr6.eq) goto loc_83A9B6FC;
	// bl 0x83abdb50
	ctx.lr = 0x83A9B6F8;
	sub_83ABDB50(ctx, base);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
loc_83A9B6FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9B714"))) PPC_WEAK_FUNC(sub_83A9B714);
PPC_FUNC_IMPL(__imp__sub_83A9B714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9B718"))) PPC_WEAK_FUNC(sub_83A9B718);
PPC_FUNC_IMPL(__imp__sub_83A9B718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A9B720;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83a9b7a0
	if (cr6.eq) goto loc_83A9B7A0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83a9b78c
	if (cr6.eq) goto loc_83A9B78C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83a9b778
	if (cr6.eq) goto loc_83A9B778;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x83a9b764
	if (cr6.eq) goto loc_83A9B764;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83a9b834
	if (!cr6.eq) goto loc_83A9B834;
	// lwz r4,124(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x83acd7e0
	ctx.lr = 0x83A9B760;
	sub_83ACD7E0(ctx, base);
	// b 0x83a9b7b0
	goto loc_83A9B7B0;
loc_83A9B764:
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83acd708
	ctx.lr = 0x83A9B774;
	sub_83ACD708(ctx, base);
	// b 0x83a9b7b0
	goto loc_83A9B7B0;
loc_83A9B778:
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83acd6b0
	ctx.lr = 0x83A9B788;
	sub_83ACD6B0(ctx, base);
	// b 0x83a9b7b0
	goto loc_83A9B7B0;
loc_83A9B78C:
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83acd848
	ctx.lr = 0x83A9B79C;
	sub_83ACD848(ctx, base);
	// b 0x83a9b7b0
	goto loc_83A9B7B0;
loc_83A9B7A0:
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83acd658
	ctx.lr = 0x83A9B7B0;
	sub_83ACD658(ctx, base);
loc_83A9B7B0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a9b834
	if (cr6.lt) goto loc_83A9B834;
	// lwz r29,92(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r28,r11,8,26,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x3F;
	// clrlwi r27,r11,12
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFFF;
	// bl 0x83acd8a0
	ctx.lr = 0x83A9B7DC;
	sub_83ACD8A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83acd8e8
	ctx.lr = 0x83A9B7EC;
	sub_83ACD8E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83acd938
	ctx.lr = 0x83A9B7FC;
	sub_83ACD938(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x83acda20
	ctx.lr = 0x83A9B80C;
	sub_83ACDA20(ctx, base);
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x83acda68
	ctx.lr = 0x83A9B820;
	sub_83ACDA68(ctx, base);
	// lbz r11,109(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 109);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x83acd9d0
	ctx.lr = 0x83A9B834;
	sub_83ACD9D0(ctx, base);
loc_83A9B834:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9B83C"))) PPC_WEAK_FUNC(sub_83A9B83C);
PPC_FUNC_IMPL(__imp__sub_83A9B83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9B840"))) PPC_WEAK_FUNC(sub_83A9B840);
PPC_FUNC_IMPL(__imp__sub_83A9B840) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a9b88c
	if (cr6.eq) goto loc_83A9B88C;
	// lwz r31,164(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// b 0x83a9b884
	goto loc_83A9B884;
loc_83A9B86C:
	// lhz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa4300
	ctx.lr = 0x83A9B880;
	sub_83AA4300(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83A9B884:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9b86c
	if (!cr6.eq) goto loc_83A9B86C;
loc_83A9B88C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9B8A4"))) PPC_WEAK_FUNC(sub_83A9B8A4);
PPC_FUNC_IMPL(__imp__sub_83A9B8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9B8A8"))) PPC_WEAK_FUNC(sub_83A9B8A8);
PPC_FUNC_IMPL(__imp__sub_83A9B8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9B8B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,27804(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27804);
	// b 0x83a9b900
	goto loc_83A9B900;
loc_83A9B8C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a9b8fc
	if (cr6.eq) goto loc_83A9B8FC;
	// lwz r31,164(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x83a9b8f4
	goto loc_83A9B8F4;
loc_83A9B8DC:
	// lhz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa4300
	ctx.lr = 0x83A9B8F0;
	sub_83AA4300(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83A9B8F4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9b8dc
	if (!cr6.eq) goto loc_83A9B8DC;
loc_83A9B8FC:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83A9B900:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a9b8c4
	if (!cr6.eq) goto loc_83A9B8C4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9B910"))) PPC_WEAK_FUNC(sub_83A9B910);
PPC_FUNC_IMPL(__imp__sub_83A9B910) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,1012(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1012);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9b970
	if (!cr6.eq) goto loc_83A9B970;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a9b980
	if (cr6.eq) goto loc_83A9B980;
	// lwz r31,164(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x83a9b964
	goto loc_83A9B964;
loc_83A9B94C:
	// lhz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa4300
	ctx.lr = 0x83A9B960;
	sub_83AA4300(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83A9B964:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9b94c
	if (!cr6.eq) goto loc_83A9B94C;
	// b 0x83a9b980
	goto loc_83A9B980;
loc_83A9B970:
	// lis r11,-31830
	ctx.r11.s64 = -2086010880;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18368
	ctx.r4.s64 = ctx.r11.s64 + -18368;
	// bl 0x83ab7b90
	ctx.lr = 0x83A9B980;
	sub_83AB7B90(ctx, base);
loc_83A9B980:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9B998"))) PPC_WEAK_FUNC(sub_83A9B998);
PPC_FUNC_IMPL(__imp__sub_83A9B998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a9b9e8
	if (cr6.eq) goto loc_83A9B9E8;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// b 0x83a9b9e0
	goto loc_83A9B9E0;
loc_83A9B9B0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a9b9d8
	if (cr6.eq) goto loc_83A9B9D8;
	// lbz r9,117(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 117);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83a9b9d8
	if (!cr0.eq) goto loc_83A9B9D8;
	// lbz r9,126(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 126);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x83a9b9e8
	if (cr0.eq) goto loc_83A9B9E8;
loc_83A9B9D8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
loc_83A9B9E0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9b9b0
	if (!cr6.eq) goto loc_83A9B9B0;
loc_83A9B9E8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9B9F0"))) PPC_WEAK_FUNC(sub_83A9B9F0);
PPC_FUNC_IMPL(__imp__sub_83A9B9F0) {
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
	// lwz r11,1012(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1012);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9ba24
	if (!cr6.eq) goto loc_83A9BA24;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,23416
	ctx.r4.s64 = ctx.r11.s64 + 23416;
loc_83A9BA14:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9BA1C;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a9ba44
	goto loc_83A9BA44;
loc_83A9BA24:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x83a9ba38
	if (cr6.eq) goto loc_83A9BA38;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,23352
	ctx.r4.s64 = ctx.r11.s64 + 23352;
	// b 0x83a9ba14
	goto loc_83A9BA14;
loc_83A9BA38:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,1016
	ctx.r3.s64 = ctx.r10.s64 + 1016;
	// stw r11,1012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
loc_83A9BA44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9BA54"))) PPC_WEAK_FUNC(sub_83A9BA54);
PPC_FUNC_IMPL(__imp__sub_83A9BA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9BA58"))) PPC_WEAK_FUNC(sub_83A9BA58);
PPC_FUNC_IMPL(__imp__sub_83A9BA58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A9BA60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,76(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// andc r30,r28,r4
	ctx.r30.u64 = ctx.r28.u64 & ~ctx.r4.u64;
	// beq cr6,0x83a9ba84
	if (cr6.eq) goto loc_83A9BA84;
	// or r30,r28,r4
	ctx.r30.u64 = ctx.r28.u64 | ctx.r4.u64;
loc_83A9BA84:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// lwz r29,948(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a9bacc
	if (cr6.eq) goto loc_83A9BACC;
	// lwz r3,940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 940);
	// bl 0x83aa3d20
	ctx.lr = 0x83A9BAA0;
	sub_83AA3D20(ctx, base);
	// lbz r11,118(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 118);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83a9bab0
	if (!cr6.eq) goto loc_83A9BAB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A9BAB0:
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x83a9bac0
	if (cr6.eq) goto loc_83A9BAC0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9bacc
	if (!cr6.eq) goto loc_83A9BACC;
loc_83A9BAC0:
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ab5e40
	ctx.lr = 0x83A9BACC;
	sub_83AB5E40(ctx, base);
loc_83A9BACC:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9bae0
	if (cr6.eq) goto loc_83A9BAE0;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x83ab5e40
	ctx.lr = 0x83A9BAE0;
	sub_83AB5E40(ctx, base);
loc_83A9BAE0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa4120
	ctx.lr = 0x83A9BAF4;
	sub_83AA4120(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83a9bb08
	if (!cr6.eq) goto loc_83A9BB08;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a9bb1c
	if (cr6.eq) goto loc_83A9BB1C;
	// b 0x83a9bb10
	goto loc_83A9BB10;
loc_83A9BB08:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a9bb1c
	if (!cr6.eq) goto loc_83A9BB1C;
loc_83A9BB10:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa40c0
	ctx.lr = 0x83A9BB1C;
	sub_83AA40C0(ctx, base);
loc_83A9BB1C:
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x83a9bb38
	goto loc_83A9BB38;
loc_83A9BB24:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83a9ba58
	ctx.lr = 0x83A9BB34;
	sub_83A9BA58(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83A9BB38:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9bb24
	if (!cr6.eq) goto loc_83A9BB24;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9BB48"))) PPC_WEAK_FUNC(sub_83A9BB48);
PPC_FUNC_IMPL(__imp__sub_83A9BB48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x83aa3d20
	ctx.lr = 0x83A9BB58;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9bb6c
	if (cr0.eq) goto loc_83A9BB6C;
	// lhz r11,78(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 78);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83A9BB6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9BB7C"))) PPC_WEAK_FUNC(sub_83A9BB7C);
PPC_FUNC_IMPL(__imp__sub_83A9BB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9BB80"))) PPC_WEAK_FUNC(sub_83A9BB80);
PPC_FUNC_IMPL(__imp__sub_83A9BB80) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83aa3d20
	ctx.lr = 0x83A9BB98;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9bbe8
	if (cr0.eq) goto loc_83A9BBE8;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x83a9bbd8
	if (cr6.lt) goto loc_83A9BBD8;
	// beq cr6,0x83a9bbd0
	if (cr6.eq) goto loc_83A9BBD0;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83a9bbc8
	if (cr6.lt) goto loc_83A9BBC8;
	// beq cr6,0x83a9bbc0
	if (cr6.eq) goto loc_83A9BBC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83a9bbe0
	goto loc_83A9BBE0;
loc_83A9BBC0:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// b 0x83a9bbe0
	goto loc_83A9BBE0;
loc_83A9BBC8:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x83a9bbe0
	goto loc_83A9BBE0;
loc_83A9BBD0:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83a9bbe0
	goto loc_83A9BBE0;
loc_83A9BBD8:
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
loc_83A9BBE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83a9ba58
	ctx.lr = 0x83A9BBE8;
	sub_83A9BA58(ctx, base);
loc_83A9BBE8:
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

__attribute__((alias("__imp__sub_83A9BBFC"))) PPC_WEAK_FUNC(sub_83A9BBFC);
PPC_FUNC_IMPL(__imp__sub_83A9BBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9BC00"))) PPC_WEAK_FUNC(sub_83A9BC00);
PPC_FUNC_IMPL(__imp__sub_83A9BC00) {
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
	// bne cr6,0x83a9bc38
	if (!cr6.eq) goto loc_83A9BC38;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23480
	ctx.r4.s64 = ctx.r11.s64 + 23480;
	// bl 0x831ea418
	ctx.lr = 0x83A9BC30;
	sub_831EA418(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x83a9bc74
	goto loc_83A9BC74;
loc_83A9BC38:
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9bc70
	if (cr6.eq) goto loc_83A9BC70;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a9bc70
	if (!cr6.eq) goto loc_83A9BC70;
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// lwz r30,128(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x83ab5e88
	ctx.lr = 0x83A9BC5C;
	sub_83AB5E88(ctx, base);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// beq cr6,0x83a9bc70
	if (cr6.eq) goto loc_83A9BC70;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x83a9bc74
	if (cr6.eq) goto loc_83A9BC74;
loc_83A9BC70:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83A9BC74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9BC8C"))) PPC_WEAK_FUNC(sub_83A9BC8C);
PPC_FUNC_IMPL(__imp__sub_83A9BC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

