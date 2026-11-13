#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830F4DE4"))) PPC_WEAK_FUNC(sub_830F4DE4);
PPC_FUNC_IMPL(__imp__sub_830F4DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4DE8"))) PPC_WEAK_FUNC(sub_830F4DE8);
PPC_FUNC_IMPL(__imp__sub_830F4DE8) {
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
	ctx.lr = 0x830F4DF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r10,7136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f4e18
	if (!cr6.eq) goto loc_830F4E18;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830F4E18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f3f98
	ctx.lr = 0x830F4E20;
	sub_830F3F98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f4e2c
	if (cr6.eq) goto loc_830F4E2C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_830F4E2C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f4880
	ctx.lr = 0x830F4E38;
	sub_830F4880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f4e44
	if (cr6.eq) goto loc_830F4E44;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_830F4E44:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,7424
	ctx.r31.s64 = ctx.r11.s64 + 7424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,7424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7424);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F4E64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r29,r11,7184
	ctx.r29.s64 = ctx.r11.s64 + 7184;
loc_830F4E70:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x830fca20
	ctx.lr = 0x830F4E78;
	sub_830FCA20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f4e84
	if (cr6.eq) goto loc_830F4E84;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_830F4E84:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
	// bne 0x830f4e70
	if (!cr0.eq) goto loc_830F4E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F4EA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subfic r10,r28,0
	xer.ca = ctx.r28.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r28.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F4EB4"))) PPC_WEAK_FUNC(sub_830F4EB4);
PPC_FUNC_IMPL(__imp__sub_830F4EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4EB8"))) PPC_WEAK_FUNC(sub_830F4EB8);
PPC_FUNC_IMPL(__imp__sub_830F4EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F4EC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r28,r11,7280
	ctx.r28.s64 = ctx.r11.s64 + 7280;
	// addi r31,r10,-30696
	ctx.r31.s64 = ctx.r10.s64 + -30696;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x8259cc28
	ctx.lr = 0x830F4EE4;
	sub_8259CC28(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// bl 0x8259cc28
	ctx.lr = 0x830F4EF4;
	sub_8259CC28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x8259cc28
	ctx.lr = 0x830F4F04;
	sub_8259CC28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835d5a40
	ctx.lr = 0x830F4F0C;
	sub_835D5A40(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f4fc0
	if (!cr6.eq) goto loc_830F4FC0;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f4fc0
	if (cr6.eq) goto loc_830F4FC0;
loc_830F4F28:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x835d5a48
	ctx.lr = 0x830F4F38;
	sub_835D5A48(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f4fa8
	if (!cr6.eq) goto loc_830F4FA8;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830f4fa8
	if (cr6.eq) goto loc_830F4FA8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x830f4f60
	goto loc_830F4F60;
loc_830F4F5C:
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_830F4F60:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_830F4F64:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f4f64
	if (!cr6.eq) goto loc_830F4F64;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x830F4F90;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f4f9c
	if (!cr6.eq) goto loc_830F4F9C;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_830F4F9C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x830f4f5c
	if (!cr0.eq) goto loc_830F4F5C;
loc_830F4FA8:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x830f4f28
	if (cr6.lt) goto loc_830F4F28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_830F4FC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F4FC8"))) PPC_WEAK_FUNC(sub_830F4FC8);
PPC_FUNC_IMPL(__imp__sub_830F4FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830F4FD0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r11,r11,7184
	ctx.r11.s64 = ctx.r11.s64 + 7184;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r28,r11,-44
	ctx.r28.s64 = ctx.r11.s64 + -44;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r27,24
	ctx.r27.s64 = 24;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
loc_830F5020:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830F5034;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f5048
	if (cr6.eq) goto loc_830F5048;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830fc460
	ctx.lr = 0x830F5044;
	sub_830FC460(ctx, base);
	// b 0x830f504c
	goto loc_830F504C;
loc_830F5048:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F504C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stwu r3,44(r28)
	ea = 44 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x830f5020
	if (!cr0.eq) goto loc_830F5020;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r10,r11,7076
	ctx.r10.s64 = ctx.r11.s64 + 7076;
loc_830F5068:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830f507c
	if (!cr6.eq) goto loc_830F507C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// b 0x830f5084
	goto loc_830F5084;
loc_830F507C:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r24.u32);
loc_830F5084:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,15
	cr6.compare<uint32_t>(ctx.r9.u32, 15, xer);
	// blt cr6,0x830f5068
	if (cr6.lt) goto loc_830F5068;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r29,r11,-31472
	ctx.r29.s64 = ctx.r11.s64 + -31472;
	// addi r3,r10,7424
	ctx.r3.s64 = ctx.r10.s64 + 7424;
	// addi r4,r29,160
	ctx.r4.s64 = ctx.r29.s64 + 160;
	// bl 0x835d6090
	ctx.lr = 0x830F50A8;
	sub_835D6090(ctx, base);
	// bl 0x830f4eb8
	ctx.lr = 0x830F50AC;
	sub_830F4EB8(ctx, base);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r30,r9,7480
	ctx.r30.s64 = ctx.r9.s64 + 7480;
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cc28
	ctx.lr = 0x830F50C8;
	sub_8259CC28(ctx, base);
	// addi r4,r29,192
	ctx.r4.s64 = ctx.r29.s64 + 192;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8259cc28
	ctx.lr = 0x830F50D8;
	sub_8259CC28(ctx, base);
	// addi r4,r29,208
	ctx.r4.s64 = ctx.r29.s64 + 208;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r30,448
	ctx.r3.s64 = ctx.r30.s64 + 448;
	// bl 0x8259cc28
	ctx.lr = 0x830F50E8;
	sub_8259CC28(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// li r28,3
	ctx.r28.s64 = 3;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r26,r11,7064
	ctx.r26.s64 = ctx.r11.s64 + 7064;
loc_830F5104:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830fc078
	ctx.lr = 0x830F5110;
	sub_830FC078(ctx, base);
	// stbx r31,r27,r26
	PPC_STORE_U8(ctx.r27.u32 + ctx.r26.u32, ctx.r31.u8);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,224
	ctx.r30.s64 = ctx.r30.s64 + 224;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bne 0x830f5104
	if (!cr0.eq) goto loc_830F5104;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r9,r11,7068
	ctx.r9.s64 = ctx.r11.s64 + 7068;
	// addi r6,r10,7376
	ctx.r6.s64 = ctx.r10.s64 + 7376;
	// li r10,15000
	ctx.r10.s64 = 15000;
	// stw r31,7068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7068, ctx.r31.u32);
	// li r11,15000
	ctx.r11.s64 = 15000;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// li r9,15000
	ctx.r9.s64 = 15000;
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// stfs f0,36(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 36, temp.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// stw r9,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r9.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r31,12(r6)
	PPC_STORE_U8(ctx.r6.u32 + 12, ctx.r31.u8);
	// stb r31,28(r6)
	PPC_STORE_U8(ctx.r6.u32 + 28, ctx.r31.u8);
	// stb r31,44(r6)
	PPC_STORE_U8(ctx.r6.u32 + 44, ctx.r31.u8);
	// bne cr6,0x830f5190
	if (!cr6.eq) goto loc_830F5190;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stb r24,7136(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7136, ctx.r24.u8);
loc_830F5190:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F519C"))) PPC_WEAK_FUNC(sub_830F519C);
PPC_FUNC_IMPL(__imp__sub_830F519C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F51A0"))) PPC_WEAK_FUNC(sub_830F51A0);
PPC_FUNC_IMPL(__imp__sub_830F51A0) {
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
	ctx.lr = 0x830F51A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lbz r10,7136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7136);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f5474
	if (cr6.eq) goto loc_830F5474;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830f5474
	if (cr6.lt) goto loc_830F5474;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x830f5474
	if (cr6.gt) goto loc_830F5474;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x830f5880
	ctx.lr = 0x830F51FC;
	sub_830F5880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f5228
	if (cr6.eq) goto loc_830F5228;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f5228
	if (!cr6.eq) goto loc_830F5228;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f5228
	if (cr6.eq) goto loc_830F5228;
	// li r29,30000
	ctx.r29.s64 = 30000;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_830F5228:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f52fc
	if (!cr6.eq) goto loc_830F52FC;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// beq cr6,0x830f524c
	if (cr6.eq) goto loc_830F524C;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// bne cr6,0x830f5250
	if (!cr6.eq) goto loc_830F5250;
	// li r29,11000
	ctx.r29.s64 = 11000;
	// b 0x830f5250
	goto loc_830F5250;
loc_830F524C:
	// li r29,11001
	ctx.r29.s64 = 11001;
loc_830F5250:
	// cmplwi cr6,r27,19
	cr6.compare<uint32_t>(ctx.r27.u32, 19, xer);
	// bne cr6,0x830f525c
	if (!cr6.eq) goto loc_830F525C;
	// li r29,10001
	ctx.r29.s64 = 10001;
loc_830F525C:
	// cmplwi cr6,r26,31
	cr6.compare<uint32_t>(ctx.r26.u32, 31, xer);
	// beq cr6,0x830f5284
	if (cr6.eq) goto loc_830F5284;
	// cmplwi cr6,r26,146
	cr6.compare<uint32_t>(ctx.r26.u32, 146, xer);
	// beq cr6,0x830f527c
	if (cr6.eq) goto loc_830F527C;
	// cmplwi cr6,r26,204
	cr6.compare<uint32_t>(ctx.r26.u32, 204, xer);
	// bne cr6,0x830f5288
	if (!cr6.eq) goto loc_830F5288;
	// li r29,10002
	ctx.r29.s64 = 10002;
	// b 0x830f5288
	goto loc_830F5288;
loc_830F527C:
	// li r29,10000
	ctx.r29.s64 = 10000;
	// b 0x830f5288
	goto loc_830F5288;
loc_830F5284:
	// li r29,10001
	ctx.r29.s64 = 10001;
loc_830F5288:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// cmpwi cr6,r11,1416
	cr6.compare<int32_t>(ctx.r11.s32, 1416, xer);
	// bgt cr6,0x830f52bc
	if (cr6.gt) goto loc_830F52BC;
	// beq cr6,0x830f52b4
	if (cr6.eq) goto loc_830F52B4;
	// cmpwi cr6,r11,140
	cr6.compare<int32_t>(ctx.r11.s32, 140, xer);
	// beq cr6,0x830f52d4
	if (cr6.eq) goto loc_830F52D4;
	// cmpwi cr6,r11,198
	cr6.compare<int32_t>(ctx.r11.s32, 198, xer);
	// ble cr6,0x830f52e0
	if (!cr6.gt) goto loc_830F52E0;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(ctx.r11.s32, 200, xer);
	// ble cr6,0x830f52d4
	if (!cr6.gt) goto loc_830F52D4;
	// b 0x830f52e0
	goto loc_830F52E0;
loc_830F52B4:
	// li r29,11001
	ctx.r29.s64 = 11001;
	// b 0x830f52e0
	goto loc_830F52E0;
loc_830F52BC:
	// cmpwi cr6,r11,2469
	cr6.compare<int32_t>(ctx.r11.s32, 2469, xer);
	// beq cr6,0x830f52dc
	if (cr6.eq) goto loc_830F52DC;
	// cmpwi cr6,r11,2702
	cr6.compare<int32_t>(ctx.r11.s32, 2702, xer);
	// ble cr6,0x830f52e0
	if (!cr6.gt) goto loc_830F52E0;
	// cmpwi cr6,r11,2704
	cr6.compare<int32_t>(ctx.r11.s32, 2704, xer);
	// bgt cr6,0x830f52e0
	if (cr6.gt) goto loc_830F52E0;
loc_830F52D4:
	// li r29,30000
	ctx.r29.s64 = 30000;
	// b 0x830f52e0
	goto loc_830F52E0;
loc_830F52DC:
	// li r29,11000
	ctx.r29.s64 = 11000;
loc_830F52E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f5880
	ctx.lr = 0x830F52EC;
	sub_830F5880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f52fc
	if (!cr6.eq) goto loc_830F52FC;
	// li r29,30000
	ctx.r29.s64 = 30000;
loc_830F52FC:
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830F5308:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
	// stwu r25,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830f5308
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830F5308;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
loc_830F532C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f6168
	ctx.lr = 0x830F5340;
	sub_830F6168(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f534c
	if (cr6.eq) goto loc_830F534C;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_830F534C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r31,15
	cr6.compare<uint32_t>(ctx.r31.u32, 15, xer);
	// blt cr6,0x830f532c
	if (cr6.lt) goto loc_830F532C;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f5a58
	ctx.lr = 0x830F5374;
	sub_830F5A58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f538c
	if (cr6.eq) goto loc_830F538C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// ori r10,r11,50000
	ctx.r10.u64 = ctx.r11.u64 | 50000;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_830F538C:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r10,r23,44
	ctx.r10.s64 = ctx.r23.s64 * 44;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r11,7184
	ctx.r9.s64 = ctx.r11.s64 + 7184;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x830fc500
	ctx.lr = 0x830F53A8;
	sub_830FC500(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f53b4
	if (cr6.eq) goto loc_830F53B4;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_830F53B4:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
loc_830F53BC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830f43e8
	ctx.lr = 0x830F53CC;
	sub_830F43E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f53d8
	if (cr6.eq) goto loc_830F53D8;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_830F53D8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r31,15
	cr6.compare<uint32_t>(ctx.r31.u32, 15, xer);
	// blt cr6,0x830f53bc
	if (cr6.lt) goto loc_830F53BC;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subfic r11,r24,0
	xer.ca = ctx.r24.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r24.s64;
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subfe r27,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r27.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x830f540c
	if (cr6.eq) goto loc_830F540C;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x830F540C;
	sub_825952B8(ctx, base);
loc_830F540C:
	// lbz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r1,368
	ctx.r31.s64 = ctx.r1.s64 + 368;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// li r30,14
	ctx.r30.s64 = 14;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
loc_830F5424:
	// lwzu r3,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f5454
	if (cr6.eq) goto loc_830F5454;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x838adab0
	ctx.lr = 0x830F5444;
	sub_838ADAB0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x830F5454;
	sub_825952B8(ctx, base);
loc_830F5454:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// bge 0x830f5424
	if (!cr0.lt) goto loc_830F5424;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_830F5474:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F5480"))) PPC_WEAK_FUNC(sub_830F5480);
PPC_FUNC_IMPL(__imp__sub_830F5480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x830F5488;
	__savegprlr_18(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// lbz r10,7136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f56a4
	if (cr6.eq) goto loc_830F56A4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x830f56a4
	if (!cr6.lt) goto loc_830F56A4;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bge cr6,0x830f56a4
	if (!cr6.lt) goto loc_830F56A4;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// bge cr6,0x830f56a4
	if (!cr6.lt) goto loc_830F56A4;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mulli r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 * 44;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r24,r11,7184
	ctx.r24.s64 = ctx.r11.s64 + 7184;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// lwzx r3,r10,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// bl 0x830fc710
	ctx.lr = 0x830F54F0;
	sub_830FC710(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f54fc
	if (cr6.eq) goto loc_830F54FC;
	// li r23,1
	ctx.r23.s64 = 1;
loc_830F54FC:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r22,2
	ctx.r22.s64 = 2;
loc_830F550C:
	// and r11,r25,r18
	ctx.r11.u64 = ctx.r25.u64 & ctx.r18.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f565c
	if (cr6.eq) goto loc_830F565C;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mulli r11,r19,44
	ctx.r11.s64 = ctx.r19.s64 * 44;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lwzx r3,r11,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x830fc710
	ctx.lr = 0x830F5538;
	sub_830FC710(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f5544
	if (cr6.eq) goto loc_830F5544;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_830F5544:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x830f5654
	if (cr6.eq) goto loc_830F5654;
loc_830F5558:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x830f55b8
	if (cr6.eq) goto loc_830F55B8;
loc_830F556C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f5584
	if (cr6.lt) goto loc_830F5584;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x830f5588
	goto loc_830F5588;
loc_830F5584:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_830F5588:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827a8810
	ctx.lr = 0x830F5598;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f55b4
	if (cr6.eq) goto loc_830F55B4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x830f556c
	if (!cr6.eq) goto loc_830F556C;
	// b 0x830f55b8
	goto loc_830F55B8;
loc_830F55B4:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_830F55B8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f5644
	if (cr6.eq) goto loc_830F5644;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f55d8
	if (cr6.lt) goto loc_830F55D8;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x830f55dc
	goto loc_830F55DC;
loc_830F55D8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_830F55DC:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
loc_830F55EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f55ec
	if (!cr6.eq) goto loc_830F55EC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830F5610;
	sub_8259CC28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8291fdc8
	ctx.lr = 0x830F561C;
	sub_8291FDC8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830f5638
	if (cr6.lt) goto loc_830F5638;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x830F5638;
	sub_825952B8(ctx, base);
loc_830F5638:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
loc_830F5644:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x830f5558
	if (!cr6.eq) goto loc_830F5558;
loc_830F5654:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x838ae2a8
	ctx.lr = 0x830F565C;
	sub_838AE2A8(ctx, base);
loc_830F565C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// rotlwi r25,r25,1
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// cmplwi cr6,r26,15
	cr6.compare<uint32_t>(ctx.r26.u32, 15, xer);
	// blt cr6,0x830f550c
	if (cr6.lt) goto loc_830F550C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830f43e8
	ctx.lr = 0x830F567C;
	sub_830F43E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f5688
	if (cr6.eq) goto loc_830F5688;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_830F5688:
	// subfic r11,r23,0
	xer.ca = ctx.r23.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r23.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subfe r31,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x838ae2a8
	ctx.lr = 0x830F5698;
	sub_838AE2A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_830F56A4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F56B0"))) PPC_WEAK_FUNC(sub_830F56B0);
PPC_FUNC_IMPL(__imp__sub_830F56B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F56B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lbz r10,7136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f56e4
	if (!cr6.eq) goto loc_830F56E4;
loc_830F56D8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830F56E4:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x830f56d8
	if (!cr6.lt) goto loc_830F56D8;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,7424
	ctx.r31.s64 = ctx.r11.s64 + 7424;
	// li r29,100
	ctx.r29.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,7424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7424);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F5710;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mulli r11,r27,44
	ctx.r11.s64 = ctx.r27.s64 * 44;
	// addi r10,r10,7184
	ctx.r10.s64 = ctx.r10.s64 + 7184;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x830fc7b8
	ctx.lr = 0x830F5728;
	sub_830FC7B8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f5750
	if (cr6.eq) goto loc_830F5750;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bne cr6,0x830f5748
	if (!cr6.eq) goto loc_830F5748;
	// li r29,14
	ctx.r29.s64 = 14;
	// b 0x830f5754
	goto loc_830F5754;
loc_830F5748:
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bne cr6,0x830f57a0
	if (!cr6.eq) goto loc_830F57A0;
loc_830F5750:
	// li r29,13
	ctx.r29.s64 = 13;
loc_830F5754:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x830F5760;
	sub_837B0C10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8291fdc8
	ctx.lr = 0x830F577C;
	sub_8291FDC8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830fc928
	ctx.lr = 0x830F578C;
	sub_830FC928(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838ae2a8
	ctx.lr = 0x830F5798;
	sub_838AE2A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x830F57A0;
	sub_8387E8E0(ctx, base);
loc_830F57A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F57B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x830f57d4
	if (!cr6.eq) goto loc_830F57D4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830f4560
	ctx.lr = 0x830F57D0;
	sub_830F4560(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_830F57D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F57E0"))) PPC_WEAK_FUNC(sub_830F57E0);
PPC_FUNC_IMPL(__imp__sub_830F57E0) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f5820
	if (cr6.eq) goto loc_830F5820;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F581C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830F5820:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r11,8160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8160);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830f5834
	if (!cr6.eq) goto loc_830F5834;
	// li r30,1
	ctx.r30.s64 = 1;
loc_830F5834:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f584c
	if (cr6.eq) goto loc_830F584C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F584C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F584C:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r3,8152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f5860
	if (cr6.eq) goto loc_830F5860;
	// bl 0x83103c10
	ctx.lr = 0x830F5860;
	sub_83103C10(ctx, base);
loc_830F5860:
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

__attribute__((alias("__imp__sub_830F587C"))) PPC_WEAK_FUNC(sub_830F587C);
PPC_FUNC_IMPL(__imp__sub_830F587C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5880"))) PPC_WEAK_FUNC(sub_830F5880);
PPC_FUNC_IMPL(__imp__sub_830F5880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r3,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r3.u8);
	// lwz r11,8156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f595c
	if (cr6.eq) goto loc_830F595C;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// srawi r6,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 24;
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r5,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 8;
	// rlwinm r9,r7,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r7,r5,0,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF00;
	// rlwimi r6,r9,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x830f595c
	if (!cr6.gt) goto loc_830F595C;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_830F58DC:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// srawi r31,r6,24
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFFF) != 0);
	ctx.r31.s64 = ctx.r6.s32 >> 24;
	// rlwimi r5,r6,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r6,r6,8
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// rlwinm r5,r5,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r6,r6,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF00;
	// rlwimi r31,r5,8,0,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r31.u64 & 0xFFFFFFFF000000FF);
	// or r5,r31,r6
	ctx.r5.u64 = ctx.r31.u64 | ctx.r6.u64;
	// cmpw cr6,r7,r5
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, xer);
	// beq cr6,0x830f5920
	if (cr6.eq) goto loc_830F5920;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x830f58dc
	if (cr6.lt) goto loc_830F58DC;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_830F5920:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 | ctx.r9.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830f595c
	if (!cr6.eq) goto loc_830F595C;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_830F595C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5964"))) PPC_WEAK_FUNC(sub_830F5964);
PPC_FUNC_IMPL(__imp__sub_830F5964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5968"))) PPC_WEAK_FUNC(sub_830F5968);
PPC_FUNC_IMPL(__imp__sub_830F5968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830f5988
	if (!cr6.eq) goto loc_830F5988;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830F5988:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r11,8156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f5a4c
	if (cr6.eq) goto loc_830F5A4C;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// srawi r9,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 24;
	// srawi r8,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 8;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwimi r9,r8,0,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r6,r10,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r9,r6,8,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bge cr6,0x830f5a4c
	if (!cr6.lt) goto loc_830F5A4C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r31,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 24;
	// srawi r10,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// rlwinm r8,r8,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwimi r31,r8,8,0,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r31.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r10,r10,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF00;
	// rlwimi r30,r6,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
	// srawi r5,r6,24
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 24;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// srawi r6,r6,8
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r31,r30,0,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFF00;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwimi r5,r31,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r6,r6,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF00;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r8,r8,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r8,16
	ctx.r5.s64 = ctx.r8.s64 + 16;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r9,r5,r7
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_830F5A4C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5A58"))) PPC_WEAK_FUNC(sub_830F5A58);
PPC_FUNC_IMPL(__imp__sub_830F5A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F5A60;
	__savegprlr_28(ctx, base);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,8156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f5b48
	if (cr6.eq) goto loc_830F5B48;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// srawi r11,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 24;
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r9,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// rlwinm r6,r6,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r9,r9,0,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwimi r11,r6,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// li r31,0
	ctx.r31.s64 = 0;
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x830f5b30
	if (!cr6.gt) goto loc_830F5B30;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_830F5ABC:
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// srawi r28,r30,24
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFFFF) != 0);
	ctx.r28.s64 = ctx.r30.s32 >> 24;
	// rlwimi r29,r30,16,0,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0xFFFF0000) | (ctx.r29.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r30,r30,8
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 8;
	// rlwinm r29,r29,0,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r30,r30,0,16,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// rlwimi r28,r29,8,0,23
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xFFFFFF00) | (ctx.r28.u64 & 0xFFFFFFFF000000FF);
	// or r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 | ctx.r30.u64;
	// cmpw cr6,r6,r30
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, xer);
	// beq cr6,0x830f5afc
	if (cr6.eq) goto loc_830F5AFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x830f5abc
	if (cr6.lt) goto loc_830F5ABC;
	// b 0x830f5b30
	goto loc_830F5B30;
loc_830F5AFC:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// rlwinm r7,r10,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r8,r10,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// rlwinm r6,r9,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r9,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// or r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 | ctx.r11.u64;
	// mulli r7,r10,1000
	ctx.r7.s64 = ctx.r10.s64 * 1000;
	// mulli r31,r9,1000
	ctx.r31.s64 = ctx.r9.s64 * 1000;
loc_830F5B30:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f5b3c
	if (cr6.eq) goto loc_830F5B3C;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
loc_830F5B3C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830f5b48
	if (cr6.eq) goto loc_830F5B48;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
loc_830F5B48:
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F5B4C"))) PPC_WEAK_FUNC(sub_830F5B4C);
PPC_FUNC_IMPL(__imp__sub_830F5B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5B50"))) PPC_WEAK_FUNC(sub_830F5B50);
PPC_FUNC_IMPL(__imp__sub_830F5B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F5B58;
	__savegprlr_28(ctx, base);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,8156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f5c68
	if (cr6.eq) goto loc_830F5C68;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// srawi r11,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 24;
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r9,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// rlwinm r6,r6,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r9,r9,0,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwimi r11,r6,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// li r6,0
	ctx.r6.s64 = 0;
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x830f5c50
	if (!cr6.gt) goto loc_830F5C50;
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_830F5BB4:
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// srawi r28,r30,24
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFFFF) != 0);
	ctx.r28.s64 = ctx.r30.s32 >> 24;
	// rlwimi r29,r30,16,0,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0xFFFF0000) | (ctx.r29.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r30,r30,8
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 8;
	// rlwinm r29,r29,0,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r30,r30,0,16,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// rlwimi r28,r29,8,0,23
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xFFFFFF00) | (ctx.r28.u64 & 0xFFFFFFFF000000FF);
	// or r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 | ctx.r30.u64;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// beq cr6,0x830f5bf4
	if (cr6.eq) goto loc_830F5BF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x830f5bb4
	if (cr6.lt) goto loc_830F5BB4;
	// b 0x830f5c50
	goto loc_830F5C50;
loc_830F5BF4:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r6,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 24;
	// srawi r11,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// rlwinm r8,r8,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r7,r7,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// srawi r10,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 24;
	// srawi r9,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// rlwimi r6,r8,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r10,r7,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r8,r11,0,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// rlwinm r7,r9,0,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r11.s64;
loc_830F5C50:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f5c5c
	if (cr6.eq) goto loc_830F5C5C;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
loc_830F5C5C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830f5c68
	if (cr6.eq) goto loc_830F5C68;
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
loc_830F5C68:
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F5C6C"))) PPC_WEAK_FUNC(sub_830F5C6C);
PPC_FUNC_IMPL(__imp__sub_830F5C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5C70"))) PPC_WEAK_FUNC(sub_830F5C70);
PPC_FUNC_IMPL(__imp__sub_830F5C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,8156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// srawi r7,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 24;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r6,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// rlwinm r5,r8,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r9,r6,0,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF00;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// or r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 | ctx.r9.u64;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// srawi r7,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 24;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r6,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// rlwinm r5,r8,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r9,r6,0,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF00;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r8,r9,3
	ctx.r8.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// rlwinm r11,r7,24,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF00;
	// rlwimi r5,r7,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r9,r5,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5D1C"))) PPC_WEAK_FUNC(sub_830F5D1C);
PPC_FUNC_IMPL(__imp__sub_830F5D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5D20"))) PPC_WEAK_FUNC(sub_830F5D20);
PPC_FUNC_IMPL(__imp__sub_830F5D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,8156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// srawi r7,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 24;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r6,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// rlwinm r5,r8,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r9,r6,0,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF00;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// or r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 | ctx.r9.u64;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// srawi r6,r8,24
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 24;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r5,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// rlwinm r10,r7,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r8,r5,0,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF00;
	// rlwimi r6,r10,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// or r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 | ctx.r8.u64;
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// srawi r10,r5,24
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 24;
	// rlwimi r11,r5,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r9,r5,8
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r7,r9,0,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwimi r10,r8,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5DD4"))) PPC_WEAK_FUNC(sub_830F5DD4);
PPC_FUNC_IMPL(__imp__sub_830F5DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5DD8"))) PPC_WEAK_FUNC(sub_830F5DD8);
PPC_FUNC_IMPL(__imp__sub_830F5DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,8156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// srawi r7,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 24;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r6,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// rlwinm r5,r8,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r9,r6,0,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF00;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// or r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	// beqlr cr6
	if (cr6.eq) return;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// srawi r5,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 24;
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r10,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// rlwinm r9,r6,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r6,r10,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF00;
	// rlwimi r5,r9,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// srawi r5,r8,24
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 24;
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r10,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 8;
	// rlwinm r8,r6,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r6,r10,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF00;
	// rlwimi r5,r8,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// srawi r5,r8,24
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 24;
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r8,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// rlwinm r6,r6,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r8,r8,0,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF00;
	// rlwimi r5,r6,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// or r6,r5,r8
	ctx.r6.u64 = ctx.r5.u64 | ctx.r8.u64;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// rlwinm r6,r11,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// mullw r11,r5,r10
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5EF0"))) PPC_WEAK_FUNC(sub_830F5EF0);
PPC_FUNC_IMPL(__imp__sub_830F5EF0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpldi cr6,r5,0
	cr6.compare<uint64_t>(ctx.r5.u64, 0, xer);
	// ble cr6,0x830f5f64
	if (!cr6.gt) goto loc_830F5F64;
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f5f38
	if (cr6.eq) goto loc_830F5F38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F5F34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830F5F38:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,8156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8156, ctx.r30.u32);
	// stw r11,8160(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8160, ctx.r11.u32);
	// beq cr6,0x830f5f64
	if (cr6.eq) goto loc_830F5F64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F5F64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F5F64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5F7C"))) PPC_WEAK_FUNC(sub_830F5F7C);
PPC_FUNC_IMPL(__imp__sub_830F5F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5F80"))) PPC_WEAK_FUNC(sub_830F5F80);
PPC_FUNC_IMPL(__imp__sub_830F5F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F5F88;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31751
	ctx.r26.s64 = -2080833536;
	// lwz r3,9904(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f5fb4
	if (cr6.eq) goto loc_830F5FB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F5FB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9904);
loc_830F5FB4:
	// lis r27,-31751
	ctx.r27.s64 = -2080833536;
	// lwz r11,8160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8160);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830f5fe8
	if (!cr6.eq) goto loc_830F5FE8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f5fdc
	if (cr6.eq) goto loc_830F5FDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F5FDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F5FDC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830F5FE8:
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// lwz r11,8156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f6014
	if (cr6.eq) goto loc_830F6014;
	// lwz r3,8152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8152);
	// bl 0x83103e98
	ctx.lr = 0x830F6004;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8156, ctx.r11.u32);
	// stw r10,8160(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8160, ctx.r10.u32);
loc_830F6014:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r29,r11,-30432
	ctx.r29.s64 = ctx.r11.s64 + -30432;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83104018
	ctx.lr = 0x830F6024;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f6094
	if (cr6.eq) goto loc_830F6094;
	// li r28,24
	ctx.r28.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830F6048;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f6078
	if (cr6.eq) goto loc_830F6078;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83104868
	ctx.lr = 0x830F6064;
	sub_83104868(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-30312
	ctx.r10.s64 = ctx.r11.s64 + -30312;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x830f607c
	goto loc_830F607C;
loc_830F6078:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F607C:
	// stw r3,8152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8152, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x830F6084;
	sub_83103B18(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,8160(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8160, ctx.r11.u32);
	// b 0x830f6098
	goto loc_830F6098;
loc_830F6094:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_830F6098:
	// lwz r3,9904(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f60b4
	if (cr6.eq) goto loc_830F60B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F60B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F60B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F60C0"))) PPC_WEAK_FUNC(sub_830F60C0);
PPC_FUNC_IMPL(__imp__sub_830F60C0) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f60fc
	if (cr6.eq) goto loc_830F60FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F60F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830F60FC:
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// lwz r11,8156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f6130
	if (cr6.eq) goto loc_830F6130;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r3,8152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	// bl 0x83103e98
	ctx.lr = 0x830F6118;
	sub_83103E98(ctx, base);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8156, ctx.r11.u32);
	// stw r10,8160(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8160, ctx.r10.u32);
loc_830F6130:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f6148
	if (cr6.eq) goto loc_830F6148;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F6148;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F6148:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6164"))) PPC_WEAK_FUNC(sub_830F6164);
PPC_FUNC_IMPL(__imp__sub_830F6164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6168"))) PPC_WEAK_FUNC(sub_830F6168);
PPC_FUNC_IMPL(__imp__sub_830F6168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830F6170;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// bl 0x830f5b50
	ctx.lr = 0x830F6198;
	sub_830F5B50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f6284
	if (!cr6.eq) goto loc_830F6284;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x830f6280
	if (cr6.eq) goto loc_830F6280;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_830F61CC:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f5dd8
	ctx.lr = 0x830F61D8;
	sub_830F5DD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f6274
	if (!cr6.eq) goto loc_830F6274;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f5c70
	ctx.lr = 0x830F61EC;
	sub_830F5C70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f6274
	if (!cr6.eq) goto loc_830F6274;
	// cmpwi cr6,r27,15
	cr6.compare<int32_t>(ctx.r27.s32, 15, xer);
	// beq cr6,0x830f6210
	if (cr6.eq) goto loc_830F6210;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// slw r10,r26,r27
	ctx.r10.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r27.u8 & 0x3F));
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830f6274
	if (cr6.eq) goto loc_830F6274;
loc_830F6210:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x837b0c10
	ctx.lr = 0x830F621C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x830F6228;
	sub_8291FDC8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f6244
	if (cr6.lt) goto loc_830F6244;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x830F6244;
	sub_825952B8(ctx, base);
loc_830F6244:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x830f5d20
	ctx.lr = 0x830F625C;
	sub_830F5D20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f6268
	if (cr6.eq) goto loc_830F6268;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
loc_830F6268:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x835977d8
	ctx.lr = 0x830F6274;
	sub_835977D8(ctx, base);
loc_830F6274:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x830f61cc
	if (!cr0.eq) goto loc_830F61CC;
loc_830F6280:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830F6284:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F628C"))) PPC_WEAK_FUNC(sub_830F628C);
PPC_FUNC_IMPL(__imp__sub_830F628C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6290"))) PPC_WEAK_FUNC(sub_830F6290);
PPC_FUNC_IMPL(__imp__sub_830F6290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830F6298;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x830f62f0
	if (cr6.eq) goto loc_830F62F0;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830F62B8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f62d4
	if (cr6.lt) goto loc_830F62D4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830F62D4;
	sub_825952B8(ctx, base);
loc_830F62D4:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x830f62b8
	if (!cr6.eq) goto loc_830F62B8;
loc_830F62F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F62F8"))) PPC_WEAK_FUNC(sub_830F62F8);
PPC_FUNC_IMPL(__imp__sub_830F62F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F6300;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x830f6324
	if (!cr6.gt) goto loc_830F6324;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x830F6324;
	sub_831CC150(ctx, base);
loc_830F6324:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x830f63c8
	if (!cr6.lt) goto loc_830F63C8;
	// li r27,2
	ctx.r27.s64 = 2;
	// rlwinm r28,r4,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x830F6358;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x837a1fd0
	ctx.lr = 0x830F637C;
	sub_837A1FD0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r26,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 5;
	// beq cr6,0x830f63b0
	if (cr6.eq) goto loc_830F63B0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x830f6290
	ctx.lr = 0x830F63A0;
	sub_830F6290(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830F63B0;
	sub_825952B8(ctx, base);
loc_830F63B0:
	// rlwinm r11,r26,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_830F63C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F63D0"))) PPC_WEAK_FUNC(sub_830F63D0);
PPC_FUNC_IMPL(__imp__sub_830F63D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,5
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 5;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x830f6400
	if (!cr6.lt) goto loc_830F6400;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_830F6400:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,5
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 5;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x830f6430
	if (cr6.lt) goto loc_830F6430;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_830F6430:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x830f643c
	if (!cr6.lt) goto loc_830F643C;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_830F643C:
	// b 0x830f62f8
	sub_830F62F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6440"))) PPC_WEAK_FUNC(sub_830F6440);
PPC_FUNC_IMPL(__imp__sub_830F6440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6444"))) PPC_WEAK_FUNC(sub_830F6444);
PPC_FUNC_IMPL(__imp__sub_830F6444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6448"))) PPC_WEAK_FUNC(sub_830F6448);
PPC_FUNC_IMPL(__imp__sub_830F6448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F6450;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// addi r31,r10,8216
	ctx.r31.s64 = ctx.r10.s64 + 8216;
	// stw r11,8168(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8168, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r8,-30128
	ctx.r4.s64 = ctx.r8.s64 + -30128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d6090
	ctx.lr = 0x830F647C;
	sub_835D6090(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f64c4
	if (!cr6.eq) goto loc_830F64C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F64A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r10,8200
	ctx.r3.s64 = ctx.r10.s64 + 8200;
	// bl 0x830f62f8
	ctx.lr = 0x830F64B0;
	sub_830F62F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830F64C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F64C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F64D0"))) PPC_WEAK_FUNC(sub_830F64D0);
PPC_FUNC_IMPL(__imp__sub_830F64D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F64D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,8216
	ctx.r29.s64 = ctx.r11.s64 + 8216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8216);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F64FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r31,r11,8200
	ctx.r31.s64 = ctx.r11.s64 + 8200;
	// lwz r5,8200(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8200);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x830f6538
	if (cr6.eq) goto loc_830F6538;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e64f98
	ctx.lr = 0x830F6520;
	sub_82E64F98(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x830f6290
	ctx.lr = 0x830F6534;
	sub_830F6290(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_830F6538:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F654C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6558"))) PPC_WEAK_FUNC(sub_830F6558);
PPC_FUNC_IMPL(__imp__sub_830F6558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F6560;
	__savegprlr_29(ctx, base);
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
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x830f658c
	if (!cr6.lt) goto loc_830F658C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x830f6590
	if (!cr6.gt) goto loc_830F6590;
loc_830F658C:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_830F6590:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f65f0
	if (cr6.eq) goto loc_830F65F0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// srawi r30,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 5;
	// bne cr6,0x830f65c0
	if (!cr6.eq) goto loc_830F65C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f63d0
	ctx.lr = 0x830F65C0;
	sub_830F63D0(ctx, base);
loc_830F65C0:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f6640
	if (cr6.eq) goto loc_830F6640;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// b 0x830f6628
	goto loc_830F6628;
loc_830F65F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x830f6608
	if (!cr6.eq) goto loc_830F6608;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f63d0
	ctx.lr = 0x830F6608;
	sub_830F63D0(ctx, base);
loc_830F6608:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f6640
	if (cr6.eq) goto loc_830F6640;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
loc_830F6628:
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r29,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x830F6640;
	sub_8259CB28(ctx, base);
loc_830F6640:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6654"))) PPC_WEAK_FUNC(sub_830F6654);
PPC_FUNC_IMPL(__imp__sub_830F6654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6658"))) PPC_WEAK_FUNC(sub_830F6658);
PPC_FUNC_IMPL(__imp__sub_830F6658) {
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
	// bl 0x830f64d0
	ctx.lr = 0x830F6668;
	sub_830F64D0(ctx, base);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r11,8216
	ctx.r3.s64 = ctx.r11.s64 + 8216;
	// bl 0x835d60f8
	ctx.lr = 0x830F6674;
	sub_835D60F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6684"))) PPC_WEAK_FUNC(sub_830F6684);
PPC_FUNC_IMPL(__imp__sub_830F6684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6688"))) PPC_WEAK_FUNC(sub_830F6688);
PPC_FUNC_IMPL(__imp__sub_830F6688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F6690;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f675c
	if (cr6.eq) goto loc_830F675C;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,8216
	ctx.r31.s64 = ctx.r11.s64 + 8216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8216);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F66C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_830F66E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f66e8
	if (!cr6.eq) goto loc_830F66E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830F670C;
	sub_8259CC28(ctx, base);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r10,8200
	ctx.r3.s64 = ctx.r10.s64 + 8200;
	// bl 0x830f6558
	ctx.lr = 0x830F671C;
	sub_830F6558(ctx, base);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x830f673c
	if (cr6.lt) goto loc_830F673C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830F673C;
	sub_825952B8(ctx, base);
loc_830F673C:
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F675C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F675C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6768"))) PPC_WEAK_FUNC(sub_830F6768);
PPC_FUNC_IMPL(__imp__sub_830F6768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F6770;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r10,8216
	ctx.r30.s64 = ctx.r10.s64 + 8216;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r11,8216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8216);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F67A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,8200
	ctx.r31.s64 = ctx.r11.s64 + 8200;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d22a88
	ctx.lr = 0x830F67BC;
	sub_82D22A88(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x830f67f0
	if (cr6.eq) goto loc_830F67F0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e64f98
	ctx.lr = 0x830F67D8;
	sub_82E64F98(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x830f6290
	ctx.lr = 0x830F67EC;
	sub_830F6290(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_830F67F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F6804;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// beq cr6,0x830f6924
	if (cr6.eq) goto loc_830F6924;
	// addi r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 4;
loc_830F6818:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r30,-4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f6830
	if (cr6.lt) goto loc_830F6830;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x830f6834
	goto loc_830F6834;
loc_830F6830:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_830F6834:
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// bge cr6,0x830f684c
	if (!cr6.lt) goto loc_830F684C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f0ce0
	ctx.lr = 0x830F6848;
	sub_830F0CE0(ctx, base);
	// b 0x830f68e4
	goto loc_830F68E4;
loc_830F684C:
	// cmplwi cr6,r30,20
	cr6.compare<uint32_t>(ctx.r30.u32, 20, xer);
	// bge cr6,0x830f6874
	if (!cr6.lt) goto loc_830F6874;
	// bl 0x830f1ab0
	ctx.lr = 0x830F6858;
	sub_830F1AB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f68e8
	if (cr6.eq) goto loc_830F68E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f2858
	ctx.lr = 0x830F6870;
	sub_830F2858(ctx, base);
	// b 0x830f68e4
	goto loc_830F68E4;
loc_830F6874:
	// cmplwi cr6,r30,30
	cr6.compare<uint32_t>(ctx.r30.u32, 30, xer);
	// bge cr6,0x830f68ac
	if (!cr6.lt) goto loc_830F68AC;
	// bl 0x830f1ab0
	ctx.lr = 0x830F6880;
	sub_830F1AB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f68e8
	if (cr6.eq) goto loc_830F68E8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830eab70
	ctx.lr = 0x830F68A8;
	sub_830EAB70(ctx, base);
	// b 0x830f68e4
	goto loc_830F68E4;
loc_830F68AC:
	// cmplwi cr6,r30,31
	cr6.compare<uint32_t>(ctx.r30.u32, 31, xer);
	// bne cr6,0x830f68c4
	if (!cr6.eq) goto loc_830F68C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11000
	ctx.r4.s64 = 11000;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x830f68e0
	goto loc_830F68E0;
loc_830F68C4:
	// bl 0x830f1908
	ctx.lr = 0x830F68C8;
	sub_830F1908(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,6
	ctx.r3.s64 = 6;
	// beq cr6,0x830f68e0
	if (cr6.eq) goto loc_830F68E0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F68E0:
	// bl 0x830f0ad0
	ctx.lr = 0x830F68E4;
	sub_830F0AD0(ctx, base);
loc_830F68E4:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_830F68E8:
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x830f6818
	if (!cr6.eq) goto loc_830F6818;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e64f98
	ctx.lr = 0x830F690C;
	sub_82E64F98(ctx, base);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830f6290
	ctx.lr = 0x830F6920;
	sub_830F6290(ctx, base);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_830F6924:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x830f6954
	if (cr6.eq) goto loc_830F6954;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f6290
	ctx.lr = 0x830F6940;
	sub_830F6290(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x830F6954;
	sub_825952B8(ctx, base);
loc_830F6954:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6960"))) PPC_WEAK_FUNC(sub_830F6960);
PPC_FUNC_IMPL(__imp__sub_830F6960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6980"))) PPC_WEAK_FUNC(sub_830F6980);
PPC_FUNC_IMPL(__imp__sub_830F6980) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-29720
	ctx.r9.s64 = ctx.r11.s64 + -29720;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x830f69b4
	if (cr6.eq) goto loc_830F69B4;
	// bl 0x82416268
	ctx.lr = 0x830F69B0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F69B4:
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

__attribute__((alias("__imp__sub_830F69C8"))) PPC_WEAK_FUNC(sub_830F69C8);
PPC_FUNC_IMPL(__imp__sub_830F69C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F69D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x830ffbc0
	ctx.lr = 0x830F69D8;
	sub_830FFBC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f69e4
	if (cr6.eq) goto loc_830F69E4;
	// bl 0x83100320
	ctx.lr = 0x830F69E4;
	sub_83100320(ctx, base);
loc_830F69E4:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-23784
	ctx.r30.s64 = ctx.r11.s64 + -23784;
	// li r31,2
	ctx.r31.s64 = 2;
loc_830F69F4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x835d5988
	ctx.lr = 0x830F69FC;
	sub_835D5988(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f6a08
	if (cr6.eq) goto loc_830F6A08;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_830F6A08:
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x830f69f4
	if (!cr0.eq) goto loc_830F69F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6A20"))) PPC_WEAK_FUNC(sub_830F6A20);
PPC_FUNC_IMPL(__imp__sub_830F6A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F6A28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x830ffbc0
	ctx.lr = 0x830F6A30;
	sub_830FFBC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f6a3c
	if (cr6.eq) goto loc_830F6A3C;
	// bl 0x83100268
	ctx.lr = 0x830F6A3C;
	sub_83100268(ctx, base);
loc_830F6A3C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-23784
	ctx.r30.s64 = ctx.r11.s64 + -23784;
	// li r31,2
	ctx.r31.s64 = 2;
loc_830F6A4C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x835d5980
	ctx.lr = 0x830F6A54;
	sub_835D5980(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f6a60
	if (cr6.eq) goto loc_830F6A60;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_830F6A60:
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x830f6a4c
	if (!cr0.eq) goto loc_830F6A4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6A78"))) PPC_WEAK_FUNC(sub_830F6A78);
PPC_FUNC_IMPL(__imp__sub_830F6A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F6A80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31751
	ctx.r28.s64 = -2080833536;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// lbz r11,8272(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f6b34
	if (!cr6.eq) goto loc_830F6B34;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r30,r11,8280
	ctx.r30.s64 = ctx.r11.s64 + 8280;
	// addi r4,r10,-29820
	ctx.r4.s64 = ctx.r10.s64 + -29820;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835d6090
	ctx.lr = 0x830F6AB4;
	sub_835D6090(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f6b34
	if (!cr6.eq) goto loc_830F6B34;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F6AD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r31,r11,-23668
	ctx.r31.s64 = ctx.r11.s64 + -23668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fcb00
	ctx.lr = 0x830F6AE4;
	sub_830FCB00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f6b1c
	if (!cr6.eq) goto loc_830F6B1C;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,8272(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8272, ctx.r10.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f6b1c
	if (!cr6.eq) goto loc_830F6B1C;
	// bl 0x830f6a20
	ctx.lr = 0x830F6B08;
	sub_830F6A20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f6b1c
	if (cr6.eq) goto loc_830F6B1C;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-23776(r10)
	PPC_STORE_U8(ctx.r10.u32 + -23776, ctx.r11.u8);
loc_830F6B1C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F6B30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_830F6B34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6B3C"))) PPC_WEAK_FUNC(sub_830F6B3C);
PPC_FUNC_IMPL(__imp__sub_830F6B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6B40"))) PPC_WEAK_FUNC(sub_830F6B40);
PPC_FUNC_IMPL(__imp__sub_830F6B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F6B48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// addi r31,r11,8280
	ctx.r31.s64 = ctx.r11.s64 + 8280;
	// ori r29,r29,2
	ctx.r29.u64 = ctx.r29.u64 | 2;
	// lbz r11,8272(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f6bb0
	if (cr6.eq) goto loc_830F6BB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F6B84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r3,r10,-23668
	ctx.r3.s64 = ctx.r10.s64 + -23668;
	// bl 0x830fcb60
	ctx.lr = 0x830F6B90;
	sub_830FCB60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830F6BA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8272(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8272, ctx.r11.u8);
loc_830F6BB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d60f8
	ctx.lr = 0x830F6BB8;
	sub_835D60F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6BC4"))) PPC_WEAK_FUNC(sub_830F6BC4);
PPC_FUNC_IMPL(__imp__sub_830F6BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6BC8"))) PPC_WEAK_FUNC(sub_830F6BC8);
PPC_FUNC_IMPL(__imp__sub_830F6BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F6BD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// lbz r10,8272(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8272);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f6c88
	if (cr6.eq) goto loc_830F6C88;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,8280
	ctx.r30.s64 = ctx.r11.s64 + 8280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8280);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F6C0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r29,r10,-23668
	ctx.r29.s64 = ctx.r10.s64 + -23668;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830fcbb0
	ctx.lr = 0x830F6C1C;
	sub_830FCBB0(ctx, base);
	// lis r31,-31772
	ctx.r31.s64 = -2082209792;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lbz r10,-23776(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -23776);
	// stb r11,-23776(r31)
	PPC_STORE_U8(ctx.r31.u32 + -23776, ctx.r11.u8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x830f6c70
	if (cr6.eq) goto loc_830F6C70;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f6c58
	if (cr6.eq) goto loc_830F6C58;
	// bl 0x830f6a20
	ctx.lr = 0x830F6C48;
	sub_830F6A20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f6c70
	if (cr6.eq) goto loc_830F6C70;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830f6c6c
	goto loc_830F6C6C;
loc_830F6C58:
	// bl 0x830f69c8
	ctx.lr = 0x830F6C5C;
	sub_830F69C8(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lbz r11,-23776(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -23776);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_830F6C6C:
	// stb r11,-23776(r31)
	PPC_STORE_U8(ctx.r31.u32 + -23776, ctx.r11.u8);
loc_830F6C70:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F6C84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_830F6C88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6C90"))) PPC_WEAK_FUNC(sub_830F6C90);
PPC_FUNC_IMPL(__imp__sub_830F6C90) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r10,8272(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8272);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f6d04
	if (cr6.eq) goto loc_830F6D04;
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r31,8280
	ctx.r30.s64 = ctx.r31.s64 + 8280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8280);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F6CD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,8280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8280);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r10,-23668
	ctx.r9.s64 = ctx.r10.s64 + -23668;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// rlwinm r31,r6,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// bctrl 
	ctx.lr = 0x830F6D00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F6D04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6D1C"))) PPC_WEAK_FUNC(sub_830F6D1C);
PPC_FUNC_IMPL(__imp__sub_830F6D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6D20"))) PPC_WEAK_FUNC(sub_830F6D20);
PPC_FUNC_IMPL(__imp__sub_830F6D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F6D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F6D40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-29500
	ctx.r30.s64 = ctx.r11.s64 + -29500;
	// addi r29,r30,-20
	ctx.r29.s64 = ctx.r30.s64 + -20;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830F6D60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x830f6d90
	if (!cr6.eq) goto loc_830F6D90;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F6D80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f6d90
	if (cr6.eq) goto loc_830F6D90;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_830F6D90:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835d5b38
	ctx.lr = 0x830F6D98;
	sub_835D5B38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6DA0"))) PPC_WEAK_FUNC(sub_830F6DA0);
PPC_FUNC_IMPL(__imp__sub_830F6DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lbz r10,8344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f6db8
	if (cr6.eq) goto loc_830F6DB8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_830F6DB8:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,8344(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8344, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6DC8"))) PPC_WEAK_FUNC(sub_830F6DC8);
PPC_FUNC_IMPL(__imp__sub_830F6DC8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f6df8
	if (!cr6.eq) goto loc_830F6DF8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830f6e2c
	goto loc_830F6E2C;
loc_830F6DF8:
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830f6e18
	if (cr6.lt) goto loc_830F6E18;
	// bl 0x835d5b30
	ctx.lr = 0x830F6E0C;
	sub_835D5B30(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
loc_830F6E18:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83103e98
	ctx.lr = 0x830F6E20;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_830F6E2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6E44"))) PPC_WEAK_FUNC(sub_830F6E44);
PPC_FUNC_IMPL(__imp__sub_830F6E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6E48"))) PPC_WEAK_FUNC(sub_830F6E48);
PPC_FUNC_IMPL(__imp__sub_830F6E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830F6E50;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31751
	ctx.r26.s64 = -2080833536;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lbz r11,8344(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 8344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f6e78
	if (!cr6.eq) goto loc_830F6E78;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830F6E78:
	// lis r24,-31751
	ctx.r24.s64 = -2080833536;
	// lwz r3,9904(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f6e9c
	if (cr6.eq) goto loc_830F6E9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F6E9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F6E9C:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r28,64
	ctx.r28.s64 = 64;
	// addi r31,r11,8352
	ctx.r31.s64 = ctx.r11.s64 + 8352;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_830F6EAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f6eec
	if (cr6.eq) goto loc_830F6EEC;
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830f6ed8
	if (cr6.lt) goto loc_830F6ED8;
	// bl 0x835d5b30
	ctx.lr = 0x830F6ED0;
	sub_835D5B30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r29,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r29.u16);
loc_830F6ED8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83103e98
	ctx.lr = 0x830F6EE0;
	sub_83103E98(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// beq cr6,0x830f6ef0
	if (cr6.eq) goto loc_830F6EF0;
loc_830F6EEC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_830F6EF0:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bne 0x830f6eac
	if (!cr0.eq) goto loc_830F6EAC;
	// lwz r3,9904(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f6f18
	if (cr6.eq) goto loc_830F6F18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F6F18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F6F18:
	// subfic r11,r27,0
	xer.ca = ctx.r27.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r27.s64;
	// stb r25,8344(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8344, ctx.r25.u8);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6F30"))) PPC_WEAK_FUNC(sub_830F6F30);
PPC_FUNC_IMPL(__imp__sub_830F6F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F6F38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83103d60
	ctx.lr = 0x830F6F4C;
	sub_83103D60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83103d20
	ctx.lr = 0x830F6F58;
	sub_83103D20(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// rotlwi r4,r3,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830f6f70
	if (cr6.lt) goto loc_830F6F70;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830F6F70:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lhz r8,82(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lhz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x835d5b28
	ctx.lr = 0x830F6F8C;
	sub_835D5B28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f6fc0
	if (!cr6.eq) goto loc_830F6FC0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// sth r10,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r10.u16);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r9,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r9.u64);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830F6FC0:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83103e98
	ctx.lr = 0x830F6FC8;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F6FDC"))) PPC_WEAK_FUNC(sub_830F6FDC);
PPC_FUNC_IMPL(__imp__sub_830F6FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6FE0"))) PPC_WEAK_FUNC(sub_830F6FE0);
PPC_FUNC_IMPL(__imp__sub_830F6FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F6FE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r10,8344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f7010
	if (!cr6.eq) goto loc_830F7010;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830F7010:
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7038
	if (cr6.eq) goto loc_830F7038;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830F7038:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,9892(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9892);
loc_830F7048:
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// sld r7,r8,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r11.u8 & 0x7F));
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & ctx.r30.u64;
	// cmpldi cr6,r6,0
	cr6.compare<uint64_t>(ctx.r6.u64, 0, xer);
	// beq cr6,0x830f7088
	if (cr6.eq) goto loc_830F7088;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x830f7088
	if (cr6.eq) goto loc_830F7088;
loc_830F7068:
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// beq cr6,0x830f7084
	if (cr6.eq) goto loc_830F7084;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x830f7068
	if (!cr6.eq) goto loc_830F7068;
	// b 0x830f7088
	goto loc_830F7088;
loc_830F7084:
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
loc_830F7088:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f70a0
	if (!cr6.eq) goto loc_830F70A0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// blt cr6,0x830f7048
	if (cr6.lt) goto loc_830F7048;
loc_830F70A0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f70b8
	if (cr6.eq) goto loc_830F70B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F70B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F70B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F70C4"))) PPC_WEAK_FUNC(sub_830F70C4);
PPC_FUNC_IMPL(__imp__sub_830F70C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F70C8"))) PPC_WEAK_FUNC(sub_830F70C8);
PPC_FUNC_IMPL(__imp__sub_830F70C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830F70D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x830F7120;
	sub_8259CB28(ctx, base);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stb r29,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x8259cb28
	ctx.lr = 0x830F7140;
	sub_8259CB28(ctx, base);
	// lwz r8,72(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lwz r7,76(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// lhz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 80);
	// sth r6,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r6.u16);
	// lhz r5,82(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 82);
	// sth r5,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r5.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F716C"))) PPC_WEAK_FUNC(sub_830F716C);
PPC_FUNC_IMPL(__imp__sub_830F716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7170"))) PPC_WEAK_FUNC(sub_830F7170);
PPC_FUNC_IMPL(__imp__sub_830F7170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F7178;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x8259cb28
	ctx.lr = 0x830F71B4;
	sub_8259CB28(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x8259cb28
	ctx.lr = 0x830F71C8;
	sub_8259CB28(ctx, base);
	// lwz r8,72(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lwz r7,76(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// lhz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 80);
	// sth r6,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r6.u16);
	// lhz r5,82(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 82);
	// sth r5,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r5.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F71F4"))) PPC_WEAK_FUNC(sub_830F71F4);
PPC_FUNC_IMPL(__imp__sub_830F71F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F71F8"))) PPC_WEAK_FUNC(sub_830F71F8);
PPC_FUNC_IMPL(__imp__sub_830F71F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830F7200;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, xer);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// beq cr6,0x830f72b8
	if (cr6.eq) goto loc_830F72B8;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r26,15
	ctx.r26.s64 = 15;
loc_830F7238:
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f7260
	if (cr6.lt) goto loc_830F7260;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bl 0x825952b8
	ctx.lr = 0x830F7260;
	sub_825952B8(ctx, base);
loc_830F7260:
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f728c
	if (cr6.lt) goto loc_830F728C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x825952b8
	ctx.lr = 0x830F728C;
	sub_825952B8(ctx, base);
loc_830F728C:
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// bl 0x825952b8
	ctx.lr = 0x830F72A8;
	sub_825952B8(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x830f7238
	if (!cr6.eq) goto loc_830F7238;
loc_830F72B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F72C0"))) PPC_WEAK_FUNC(sub_830F72C0);
PPC_FUNC_IMPL(__imp__sub_830F72C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830F72C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r24,0
	ctx.r24.s64 = 0;
	// lbz r10,8344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f72ec
	if (!cr6.eq) goto loc_830F72EC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830F72EC:
	// lis r25,-31751
	ctx.r25.s64 = -2080833536;
	// lwz r3,9904(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7314
	if (cr6.eq) goto loc_830F7314;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7310;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 9904);
loc_830F7314:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r28,r11,9892
	ctx.r28.s64 = ctx.r11.s64 + 9892;
	// lwz r11,9892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9892);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x830f73f0
	if (cr6.eq) goto loc_830F73F0;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r26,r11,8352
	ctx.r26.s64 = ctx.r11.s64 + 8352;
loc_830F7338:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x83103bb8
	ctx.lr = 0x830F7340;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f7354
	if (cr6.eq) goto loc_830F7354;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x830f73e0
	goto loc_830F73E0;
loc_830F7354:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x830f6f30
	ctx.lr = 0x830F7374;
	sub_830F6F30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f7380
	if (cr6.eq) goto loc_830F7380;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_830F7380:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f7394
	if (cr6.eq) goto loc_830F7394;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F7394;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F7394:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x830f73dc
	if (cr6.eq) goto loc_830F73DC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bl 0x830ebc50
	ctx.lr = 0x830F73C0;
	sub_830EBC50(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x830F73D0;
	sub_825952B8(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_830F73DC:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_830F73E0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x830f7338
	if (!cr6.eq) goto loc_830F7338;
	// lwz r3,9904(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 9904);
loc_830F73F0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7408
	if (cr6.eq) goto loc_830F7408;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7408;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F7408:
	// subfic r11,r24,0
	xer.ca = ctx.r24.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r24.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F7418"))) PPC_WEAK_FUNC(sub_830F7418);
PPC_FUNC_IMPL(__imp__sub_830F7418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830F7420;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lbz r10,8344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f7448
	if (!cr6.eq) goto loc_830F7448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830F7448:
	// lis r24,-31751
	ctx.r24.s64 = -2080833536;
	// lwz r3,9904(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f746c
	if (cr6.eq) goto loc_830F746C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F746C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F746C:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r30,r11,9892
	ctx.r30.s64 = ctx.r11.s64 + 9892;
	// lwz r11,9892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9892);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x830f7504
	if (cr6.eq) goto loc_830F7504;
	// li r27,2
	ctx.r27.s64 = 2;
loc_830F7488:
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// cmpld cr6,r10,r25
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r25.u64, xer);
	// bne cr6,0x830f74f8
	if (!cr6.eq) goto loc_830F74F8;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x83103e98
	ctx.lr = 0x830F74A0;
	sub_83103E98(ctx, base);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x830f74f0
	if (cr6.eq) goto loc_830F74F0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bl 0x830ebc50
	ctx.lr = 0x830F74D0;
	sub_830EBC50(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x830F74E0;
	sub_825952B8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_830F74F0:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x830f74fc
	goto loc_830F74FC;
loc_830F74F8:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_830F74FC:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x830f7488
	if (!cr6.eq) goto loc_830F7488;
loc_830F7504:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r30,64
	ctx.r30.s64 = 64;
	// addi r31,r11,8352
	ctx.r31.s64 = ctx.r11.s64 + 8352;
loc_830F7510:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// cmpld cr6,r11,r25
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r25.u64, xer);
	// bne cr6,0x830f7530
	if (!cr6.eq) goto loc_830F7530;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f6dc8
	ctx.lr = 0x830F7524;
	sub_830F6DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f7530
	if (cr6.eq) goto loc_830F7530;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_830F7530:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bne 0x830f7510
	if (!cr0.eq) goto loc_830F7510;
	// lwz r3,9904(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7558
	if (cr6.eq) goto loc_830F7558;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7558;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F7558:
	// subfic r11,r26,0
	xer.ca = ctx.r26.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r26.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F7568"))) PPC_WEAK_FUNC(sub_830F7568);
PPC_FUNC_IMPL(__imp__sub_830F7568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830F7570;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r27,4(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830F759C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r3,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r3.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// beq 0x830f75b8
	if (cr0.eq) goto loc_830F75B8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830f70c8
	ctx.lr = 0x830F75B8;
	sub_830F70C8(ctx, base);
loc_830F75B8:
	// lis r10,744
	ctx.r10.s64 = 48758784;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// ori r9,r10,47661
	ctx.r9.u64 = ctx.r10.u64 | 47661;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x830f75dc
	if (!cr6.lt) goto loc_830F75DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x830F75DC;
	sub_831CC150(ctx, base);
loc_830F75DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F75F8"))) PPC_WEAK_FUNC(sub_830F75F8);
PPC_FUNC_IMPL(__imp__sub_830F75F8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r10,8344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f7748
	if (cr6.eq) goto loc_830F7748;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830f7748
	if (cr6.lt) goto loc_830F7748;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bge cr6,0x830f7748
	if (!cr6.lt) goto loc_830F7748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ee0e0
	ctx.lr = 0x830F763C;
	sub_830EE0E0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,8352
	ctx.r9.s64 = ctx.r9.s64 + 8352;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x830f6dc8
	ctx.lr = 0x830F765C;
	sub_830F6DC8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r7,-1
	ctx.r7.s64 = -1;
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// sth r6,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r6.u16);
	// sth r31,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r31.u16);
	// bl 0x830f7170
	ctx.lr = 0x830F76AC;
	sub_830F7170(ctx, base);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bge cr6,0x830f76c0
	if (!cr6.lt) goto loc_830F76C0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_830F76C0:
	// bl 0x83104018
	ctx.lr = 0x830F76C4;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f7714
	if (cr6.eq) goto loc_830F7714;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x830f76ec
	if (!cr6.lt) goto loc_830F76EC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_830F76EC:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83104938
	ctx.lr = 0x830F76F4;
	sub_83104938(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x830F76FC;
	sub_83103B18(ctx, base);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,9892
	ctx.r3.s64 = ctx.r11.s64 + 9892;
	// lwz r4,9892(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9892);
	// bl 0x830f7568
	ctx.lr = 0x830F7710;
	sub_830F7568(ctx, base);
	// b 0x830f7718
	goto loc_830F7718;
loc_830F7714:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_830F7718:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ebc50
	ctx.lr = 0x830F7720;
	sub_830EBC50(ctx, base);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r3,9904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7740
	if (cr6.eq) goto loc_830F7740;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7740;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F7740:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x830f774c
	goto loc_830F774C;
loc_830F7748:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830F774C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7764"))) PPC_WEAK_FUNC(sub_830F7764);
PPC_FUNC_IMPL(__imp__sub_830F7764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7768"))) PPC_WEAK_FUNC(sub_830F7768);
PPC_FUNC_IMPL(__imp__sub_830F7768) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r11,9904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f77e4
	if (!cr6.eq) goto loc_830F77E4;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830F77A8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f77dc
	if (cr6.eq) goto loc_830F77DC;
	// bl 0x830eedb0
	ctx.lr = 0x830F77B4;
	sub_830EEDB0(ctx, base);
	// stw r3,9904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9904, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f77e4
	if (cr6.eq) goto loc_830F77E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-29096
	ctx.r4.s64 = ctx.r10.s64 + -29096;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830F77D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830f77e8
	goto loc_830F77E8;
loc_830F77DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9904, ctx.r11.u32);
loc_830F77E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830F77E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7800"))) PPC_WEAK_FUNC(sub_830F7800);
PPC_FUNC_IMPL(__imp__sub_830F7800) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,9904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f7894
	if (cr6.eq) goto loc_830F7894;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830F783C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,9904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f7888
	if (cr6.eq) goto loc_830F7888;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830F7860;
	sub_82595150(ctx, base);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7880
	if (cr6.eq) goto loc_830F7880;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7880;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F7880:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830F7888;
	sub_82595170(ctx, base);
loc_830F7888:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,9904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9904, ctx.r11.u32);
loc_830F7894:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F78AC"))) PPC_WEAK_FUNC(sub_830F78AC);
PPC_FUNC_IMPL(__imp__sub_830F78AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F78B0"))) PPC_WEAK_FUNC(sub_830F78B0);
PPC_FUNC_IMPL(__imp__sub_830F78B0) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f78f0
	if (cr6.eq) goto loc_830F78F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F78EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830F78F0:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r11,9920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9920);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830f7904
	if (!cr6.eq) goto loc_830F7904;
	// li r30,1
	ctx.r30.s64 = 1;
loc_830F7904:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f791c
	if (cr6.eq) goto loc_830F791C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F791C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F791C:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r3,9912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9912);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7930
	if (cr6.eq) goto loc_830F7930;
	// bl 0x83103c10
	ctx.lr = 0x830F7930;
	sub_83103C10(ctx, base);
loc_830F7930:
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

__attribute__((alias("__imp__sub_830F794C"))) PPC_WEAK_FUNC(sub_830F794C);
PPC_FUNC_IMPL(__imp__sub_830F794C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7950"))) PPC_WEAK_FUNC(sub_830F7950);
PPC_FUNC_IMPL(__imp__sub_830F7950) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpldi cr6,r5,0
	cr6.compare<uint64_t>(ctx.r5.u64, 0, xer);
	// ble cr6,0x830f79c4
	if (!cr6.gt) goto loc_830F79C4;
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7998
	if (cr6.eq) goto loc_830F7998;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7994;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830F7998:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,9916(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9916, ctx.r30.u32);
	// stw r11,9920(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9920, ctx.r11.u32);
	// beq cr6,0x830f79c4
	if (cr6.eq) goto loc_830F79C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F79C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F79C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F79DC"))) PPC_WEAK_FUNC(sub_830F79DC);
PPC_FUNC_IMPL(__imp__sub_830F79DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F79E0"))) PPC_WEAK_FUNC(sub_830F79E0);
PPC_FUNC_IMPL(__imp__sub_830F79E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,9916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9916);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f7a8c
	if (cr6.eq) goto loc_830F7A8C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// srawi r5,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 24;
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r11,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// rlwinm r9,r6,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r6,r11,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// rlwimi r5,r9,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// li r11,0
	ctx.r11.s64 = 0;
	// or r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x830f7a80
	if (!cr6.gt) goto loc_830F7A80;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_830F7A38:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// srawi r31,r6,24
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFFF) != 0);
	ctx.r31.s64 = ctx.r6.s32 >> 24;
	// rlwimi r5,r6,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r6,r6,8
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// rlwinm r5,r5,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r6,r6,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF00;
	// rlwimi r31,r5,8,0,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r31.u64 & 0xFFFFFFFF000000FF);
	// or r5,r31,r6
	ctx.r5.u64 = ctx.r31.u64 | ctx.r6.u64;
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// beq cr6,0x830f7a78
	if (cr6.eq) goto loc_830F7A78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x830f7a38
	if (cr6.lt) goto loc_830F7A38;
	// b 0x830f7a80
	goto loc_830F7A80;
loc_830F7A78:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F7A80:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f7a8c
	if (cr6.eq) goto loc_830F7A8C;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
loc_830F7A8C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7A94"))) PPC_WEAK_FUNC(sub_830F7A94);
PPC_FUNC_IMPL(__imp__sub_830F7A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7A98"))) PPC_WEAK_FUNC(sub_830F7A98);
PPC_FUNC_IMPL(__imp__sub_830F7A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r9,9916(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9916);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// srawi r7,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 24;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r6,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 8;
	// rlwinm r10,r8,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r8,r6,0,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF00;
	// rlwimi r7,r10,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// beqlr cr6
	if (cr6.eq) return;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// srawi r11,r6,24
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 24;
	// rlwimi r4,r6,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r7,r6,8
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 8;
	// rlwinm r6,r4,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r4,r7,0,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFF00;
	// rlwimi r11,r6,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// srawi r6,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 24;
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r4,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 8;
	// rlwinm r9,r7,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r7,r4,0,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF00;
	// rlwimi r6,r9,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// or r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7B80"))) PPC_WEAK_FUNC(sub_830F7B80);
PPC_FUNC_IMPL(__imp__sub_830F7B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F7B88;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31751
	ctx.r26.s64 = -2080833536;
	// lwz r3,9904(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7bb4
	if (cr6.eq) goto loc_830F7BB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7BB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9904);
loc_830F7BB4:
	// lis r27,-31751
	ctx.r27.s64 = -2080833536;
	// lwz r11,9920(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9920);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830f7be8
	if (!cr6.eq) goto loc_830F7BE8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7bdc
	if (cr6.eq) goto loc_830F7BDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7BDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F7BDC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830F7BE8:
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// lwz r11,9916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9916);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f7c14
	if (cr6.eq) goto loc_830F7C14;
	// lwz r3,9912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9912);
	// bl 0x83103e98
	ctx.lr = 0x830F7C04;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,9916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9916, ctx.r11.u32);
	// stw r10,9920(r27)
	PPC_STORE_U32(ctx.r27.u32 + 9920, ctx.r10.u32);
loc_830F7C14:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r29,r11,-28832
	ctx.r29.s64 = ctx.r11.s64 + -28832;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83104018
	ctx.lr = 0x830F7C24;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f7c94
	if (cr6.eq) goto loc_830F7C94;
	// li r28,24
	ctx.r28.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830F7C48;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7c78
	if (cr6.eq) goto loc_830F7C78;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83104868
	ctx.lr = 0x830F7C64;
	sub_83104868(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-28708
	ctx.r10.s64 = ctx.r11.s64 + -28708;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x830f7c7c
	goto loc_830F7C7C;
loc_830F7C78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F7C7C:
	// stw r3,9912(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9912, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x830F7C84;
	sub_83103B18(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,9920(r27)
	PPC_STORE_U32(ctx.r27.u32 + 9920, ctx.r11.u32);
	// b 0x830f7c98
	goto loc_830F7C98;
loc_830F7C94:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_830F7C98:
	// lwz r3,9904(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7cb4
	if (cr6.eq) goto loc_830F7CB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7CB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F7CB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F7CC0"))) PPC_WEAK_FUNC(sub_830F7CC0);
PPC_FUNC_IMPL(__imp__sub_830F7CC0) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7cfc
	if (cr6.eq) goto loc_830F7CFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7CF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830F7CFC:
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// lwz r11,9916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9916);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f7d30
	if (cr6.eq) goto loc_830F7D30;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r3,9912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9912);
	// bl 0x83103e98
	ctx.lr = 0x830F7D18;
	sub_83103E98(ctx, base);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,9916(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9916, ctx.r11.u32);
	// stw r10,9920(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9920, ctx.r10.u32);
loc_830F7D30:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7d48
	if (cr6.eq) goto loc_830F7D48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7D48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F7D48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7D64"))) PPC_WEAK_FUNC(sub_830F7D64);
PPC_FUNC_IMPL(__imp__sub_830F7D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7D68"))) PPC_WEAK_FUNC(sub_830F7D68);
PPC_FUNC_IMPL(__imp__sub_830F7D68) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830f79e0
	ctx.lr = 0x830F7D8C;
	sub_830F79E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x830f7d9c
	if (cr6.eq) goto loc_830F7D9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F7D9C:
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

__attribute__((alias("__imp__sub_830F7DB0"))) PPC_WEAK_FUNC(sub_830F7DB0);
PPC_FUNC_IMPL(__imp__sub_830F7DB0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x830f7ddc
	if (!cr6.eq) goto loc_830F7DDC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830f7e0c
	goto loc_830F7E0C;
loc_830F7DDC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x830f79e0
	ctx.lr = 0x830F7DEC;
	sub_830F79E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f7e0c
	if (!cr6.eq) goto loc_830F7E0C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x830f7a98
	ctx.lr = 0x830F7E0C;
	sub_830F7A98(ctx, base);
loc_830F7E0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7E24"))) PPC_WEAK_FUNC(sub_830F7E24);
PPC_FUNC_IMPL(__imp__sub_830F7E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7E28"))) PPC_WEAK_FUNC(sub_830F7E28);
PPC_FUNC_IMPL(__imp__sub_830F7E28) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7e64
	if (cr6.eq) goto loc_830F7E64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7E60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830F7E64:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,9936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9936);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830f7e7c
	if (!cr6.eq) goto loc_830F7E7C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_830F7E7C:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r11,9928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9928);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f7e98
	if (cr6.eq) goto loc_830F7E98;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83103c10
	ctx.lr = 0x830F7E94;
	sub_83103C10(ctx, base);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830F7E98:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7eb0
	if (cr6.eq) goto loc_830F7EB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7EB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F7EB0:
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

__attribute__((alias("__imp__sub_830F7ECC"))) PPC_WEAK_FUNC(sub_830F7ECC);
PPC_FUNC_IMPL(__imp__sub_830F7ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7ED0"))) PPC_WEAK_FUNC(sub_830F7ED0);
PPC_FUNC_IMPL(__imp__sub_830F7ED0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpldi cr6,r5,0
	cr6.compare<uint64_t>(ctx.r5.u64, 0, xer);
	// ble cr6,0x830f7f44
	if (!cr6.gt) goto loc_830F7F44;
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f7f18
	if (cr6.eq) goto loc_830F7F18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7F14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830F7F18:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,9932(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9932, ctx.r30.u32);
	// stw r11,9936(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9936, ctx.r11.u32);
	// beq cr6,0x830f7f44
	if (cr6.eq) goto loc_830F7F44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F7F44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F7F44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7F5C"))) PPC_WEAK_FUNC(sub_830F7F5C);
PPC_FUNC_IMPL(__imp__sub_830F7F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F7F60"))) PPC_WEAK_FUNC(sub_830F7F60);
PPC_FUNC_IMPL(__imp__sub_830F7F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,9932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9932);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f800c
	if (cr6.eq) goto loc_830F800C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// srawi r5,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 24;
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r11,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// rlwinm r9,r6,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r6,r11,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// rlwimi r5,r9,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// li r11,0
	ctx.r11.s64 = 0;
	// or r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x830f8000
	if (!cr6.gt) goto loc_830F8000;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_830F7FB8:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// srawi r31,r6,24
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFFF) != 0);
	ctx.r31.s64 = ctx.r6.s32 >> 24;
	// rlwimi r5,r6,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r6,r6,8
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// rlwinm r5,r5,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r6,r6,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF00;
	// rlwimi r31,r5,8,0,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r31.u64 & 0xFFFFFFFF000000FF);
	// or r5,r31,r6
	ctx.r5.u64 = ctx.r31.u64 | ctx.r6.u64;
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// beq cr6,0x830f7ff8
	if (cr6.eq) goto loc_830F7FF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x830f7fb8
	if (cr6.lt) goto loc_830F7FB8;
	// b 0x830f8000
	goto loc_830F8000;
loc_830F7FF8:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F8000:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f800c
	if (cr6.eq) goto loc_830F800C;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
loc_830F800C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8014"))) PPC_WEAK_FUNC(sub_830F8014);
PPC_FUNC_IMPL(__imp__sub_830F8014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F8018"))) PPC_WEAK_FUNC(sub_830F8018);
PPC_FUNC_IMPL(__imp__sub_830F8018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r10,9932(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9932);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// srawi r7,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 24;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r6,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// rlwinm r9,r8,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r8,r6,0,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF00;
	// rlwimi r7,r9,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// beqlr cr6
	if (cr6.eq) return;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// srawi r6,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 24;
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r9,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// rlwinm r7,r7,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r9,r9,0,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwimi r6,r7,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// or r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 | ctx.r9.u64;
	// cmpw cr6,r4,r7
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r9,r10,20
	ctx.r9.s64 = ctx.r10.s64 + 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// srawi r11,r6,24
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 24;
	// rlwimi r4,r6,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r7,r6,8
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 8;
	// rlwinm r6,r4,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r4,r7,0,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFF00;
	// rlwimi r11,r6,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// srawi r6,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 24;
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r4,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// rlwinm r10,r7,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r7,r4,0,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF00;
	// rlwimi r6,r10,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// or r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r8,44
	ctx.r10.s64 = ctx.r8.s64 * 44;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8124"))) PPC_WEAK_FUNC(sub_830F8124);
PPC_FUNC_IMPL(__imp__sub_830F8124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F8128"))) PPC_WEAK_FUNC(sub_830F8128);
PPC_FUNC_IMPL(__imp__sub_830F8128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F8130;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31751
	ctx.r26.s64 = -2080833536;
	// lwz r3,9904(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f815c
	if (cr6.eq) goto loc_830F815C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8158;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9904);
loc_830F815C:
	// lis r27,-31751
	ctx.r27.s64 = -2080833536;
	// lwz r11,9936(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9936);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830f8190
	if (!cr6.eq) goto loc_830F8190;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f8184
	if (cr6.eq) goto loc_830F8184;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8184;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F8184:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830F8190:
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// lwz r11,9932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9932);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f81bc
	if (cr6.eq) goto loc_830F81BC;
	// lwz r3,9928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9928);
	// bl 0x83103e98
	ctx.lr = 0x830F81AC;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,9932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9932, ctx.r11.u32);
	// stw r10,9936(r27)
	PPC_STORE_U32(ctx.r27.u32 + 9936, ctx.r10.u32);
loc_830F81BC:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r29,r11,-28536
	ctx.r29.s64 = ctx.r11.s64 + -28536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83104018
	ctx.lr = 0x830F81CC;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f8234
	if (cr6.eq) goto loc_830F8234;
	// li r28,24
	ctx.r28.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830F81F0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f8220
	if (cr6.eq) goto loc_830F8220;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83104868
	ctx.lr = 0x830F820C;
	sub_83104868(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-28408
	ctx.r10.s64 = ctx.r11.s64 + -28408;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x830f8224
	goto loc_830F8224;
loc_830F8220:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F8224:
	// stw r3,9928(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9928, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x830F822C;
	sub_83103B18(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,9936(r27)
	PPC_STORE_U32(ctx.r27.u32 + 9936, ctx.r11.u32);
loc_830F8234:
	// lwz r3,9904(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f8250
	if (cr6.eq) goto loc_830F8250;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8250;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F8250:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F825C"))) PPC_WEAK_FUNC(sub_830F825C);
PPC_FUNC_IMPL(__imp__sub_830F825C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F8260"))) PPC_WEAK_FUNC(sub_830F8260);
PPC_FUNC_IMPL(__imp__sub_830F8260) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f829c
	if (cr6.eq) goto loc_830F829C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8298;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830F829C:
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// lwz r11,9932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9932);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f82d0
	if (cr6.eq) goto loc_830F82D0;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r3,9928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9928);
	// bl 0x83103e98
	ctx.lr = 0x830F82B8;
	sub_83103E98(ctx, base);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,9932(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9932, ctx.r11.u32);
	// stw r10,9936(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9936, ctx.r10.u32);
loc_830F82D0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f82e8
	if (cr6.eq) goto loc_830F82E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F82E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F82E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8304"))) PPC_WEAK_FUNC(sub_830F8304);
PPC_FUNC_IMPL(__imp__sub_830F8304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F8308"))) PPC_WEAK_FUNC(sub_830F8308);
PPC_FUNC_IMPL(__imp__sub_830F8308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830F8310;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x830f7f60
	ctx.lr = 0x830F8328;
	sub_830F7F60(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r25,2
	ctx.r25.s64 = 2;
	// addi r29,r11,-28634
	ctx.r29.s64 = ctx.r11.s64 + -28634;
	// bne cr6,0x830f8440
	if (!cr6.eq) goto loc_830F8440;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_830F8350:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830f8018
	ctx.lr = 0x830F8360;
	sub_830F8018(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f83d8
	if (!cr6.eq) goto loc_830F83D8;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_830F837C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f837c
	if (!cr6.eq) goto loc_830F837C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830F83A0;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x830F83AC;
	sub_8291FDC8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830f83c8
	if (cr6.lt) goto loc_830F83C8;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x830F83C8;
	sub_825952B8(ctx, base);
loc_830F83C8:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// b 0x830f8428
	goto loc_830F8428;
loc_830F83D8:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x830F83F4;
	sub_8259CC28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x830F8400;
	sub_8291FDC8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f841c
	if (cr6.lt) goto loc_830F841C;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x830F841C;
	sub_825952B8(ctx, base);
loc_830F841C:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_830F8428:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,10
	cr6.compare<int32_t>(ctx.r28.s32, 10, xer);
	// blt cr6,0x830f8350
	if (cr6.lt) goto loc_830F8350;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830F8440:
	// li r28,10
	ctx.r28.s64 = 10;
loc_830F8444:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x830F8460;
	sub_8259CC28(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x830F846C;
	sub_8291FDC8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f8488
	if (cr6.lt) goto loc_830F8488;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x830F8488;
	sub_825952B8(ctx, base);
loc_830F8488:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bne 0x830f8444
	if (!cr0.eq) goto loc_830F8444;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F84A8"))) PPC_WEAK_FUNC(sub_830F84A8);
PPC_FUNC_IMPL(__imp__sub_830F84A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F84CC"))) PPC_WEAK_FUNC(sub_830F84CC);
PPC_FUNC_IMPL(__imp__sub_830F84CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F84D0"))) PPC_WEAK_FUNC(sub_830F84D0);
PPC_FUNC_IMPL(__imp__sub_830F84D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,9948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9948, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F84E4"))) PPC_WEAK_FUNC(sub_830F84E4);
PPC_FUNC_IMPL(__imp__sub_830F84E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F84E8"))) PPC_WEAK_FUNC(sub_830F84E8);
PPC_FUNC_IMPL(__imp__sub_830F84E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,9952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9952, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F84FC"))) PPC_WEAK_FUNC(sub_830F84FC);
PPC_FUNC_IMPL(__imp__sub_830F84FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F8500"))) PPC_WEAK_FUNC(sub_830F8500);
PPC_FUNC_IMPL(__imp__sub_830F8500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F8508;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,9956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9956);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x830f8668
	if (cr6.gt) goto loc_830F8668;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830f8560
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F8560;
	// bdzf 4*cr6+eq,0x830f85cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F85CC;
	// bne cr6,0x830f8640
	if (!cr6.eq) goto loc_830F8640;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r11,9960(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9960);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r11,9960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9960, ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f8668
	if (cr6.eq) goto loc_830F8668;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,9960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9960, ctx.r11.u32);
	// stw r9,9956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9956, ctx.r9.u32);
loc_830F8560:
	// lis r29,-31772
	ctx.r29.s64 = -2082209792;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r30,r11,12120
	ctx.r30.s64 = ctx.r11.s64 + 12120;
	// addi r28,r10,9976
	ctx.r28.s64 = ctx.r10.s64 + 9976;
	// lwz r11,-22952(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22952);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mulli r11,r11,2072
	ctx.r11.s64 = ctx.r11.s64 * 2072;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x830fcc68
	ctx.lr = 0x830F8588;
	sub_830FCC68(ctx, base);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,9964(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9964);
	// bl 0x830fcc38
	ctx.lr = 0x830F8598;
	sub_830FCC38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f8654
	if (!cr6.eq) goto loc_830F8654;
	// lwz r11,-22952(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22952);
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// mulli r7,r11,2072
	ctx.r7.s64 = ctx.r11.s64 * 2072;
	// stw r11,-22956(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22956, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stwx r6,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r6.u32);
	// stw r10,9956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9956, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830F85CC:
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// lwz r11,9960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9960);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f85f0
	if (cr6.eq) goto loc_830F85F0;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,9960(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9960, ctx.r11.u32);
	// stw r10,9956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9956, ctx.r10.u32);
loc_830F85F0:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f8668
	if (cr6.eq) goto loc_830F8668;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r3,r10,9976
	ctx.r3.s64 = ctx.r10.s64 + 9976;
	// lwz r4,9968(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9968);
	// bl 0x830fcc50
	ctx.lr = 0x830F8610;
	sub_830FCC50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f8668
	if (!cr6.eq) goto loc_830F8668;
	// lwz r10,9960(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9960);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,9960(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9960, ctx.r10.u32);
	// stw r11,-22956(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22956, ctx.r11.u32);
	// stw r9,9956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9956, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830F8640:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r3,r10,9976
	ctx.r3.s64 = ctx.r10.s64 + 9976;
	// lwz r4,9968(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9968);
	// bl 0x830fcc50
	ctx.lr = 0x830F8654;
	sub_830FCC50(ctx, base);
loc_830F8654:
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,9956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9956, ctx.r10.u32);
	// stw r11,-22956(r9)
	PPC_STORE_U32(ctx.r9.u32 + -22956, ctx.r11.u32);
loc_830F8668:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F8670"))) PPC_WEAK_FUNC(sub_830F8670);
PPC_FUNC_IMPL(__imp__sub_830F8670) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r11,9944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9944);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f86ec
	if (!cr6.eq) goto loc_830F86EC;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830F86B0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f86e4
	if (cr6.eq) goto loc_830F86E4;
	// bl 0x830eedb0
	ctx.lr = 0x830F86BC;
	sub_830EEDB0(ctx, base);
	// stw r3,9944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9944, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f86ec
	if (cr6.eq) goto loc_830F86EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r10,-28240
	ctx.r4.s64 = ctx.r10.s64 + -28240;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830F86E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830f86f0
	goto loc_830F86F0;
loc_830F86E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9944, ctx.r11.u32);
loc_830F86EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830F86F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8708"))) PPC_WEAK_FUNC(sub_830F8708);
PPC_FUNC_IMPL(__imp__sub_830F8708) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,9944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9944);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f879c
	if (cr6.eq) goto loc_830F879C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830F8744;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,9944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9944);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f8790
	if (cr6.eq) goto loc_830F8790;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830F8768;
	sub_82595150(ctx, base);
	// lwz r3,9944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9944);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f8788
	if (cr6.eq) goto loc_830F8788;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8788;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F8788:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830F8790;
	sub_82595170(ctx, base);
loc_830F8790:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,9944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9944, ctx.r11.u32);
loc_830F879C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F87B4"))) PPC_WEAK_FUNC(sub_830F87B4);
PPC_FUNC_IMPL(__imp__sub_830F87B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F87B8"))) PPC_WEAK_FUNC(sub_830F87B8);
PPC_FUNC_IMPL(__imp__sub_830F87B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r31,9944(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9944);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x830f8814
	if (cr6.eq) goto loc_830F8814;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8814;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F8814:
	// bl 0x830f8500
	ctx.lr = 0x830F8818;
	sub_830F8500(ctx, base);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,9976
	ctx.r3.s64 = ctx.r11.s64 + 9976;
	// bl 0x830fce40
	ctx.lr = 0x830F8828;
	sub_830FCE40(ctx, base);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,-22956(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22956);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x830f8864
	if (!cr6.lt) goto loc_830F8864;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830f8864
	if (!cr6.eq) goto loc_830F8864;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r8,r11,2072
	ctx.r8.s64 = ctx.r11.s64 * 2072;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r10,12120
	ctx.r11.s64 = ctx.r10.s64 + 12120;
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// stwx r9,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r9.u32);
	// stdx r7,r8,r11
	PPC_STORE_U64(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u64);
loc_830F8864:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830f8880
	if (cr6.eq) goto loc_830F8880;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8880;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F8880:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x830f88b8
	if (cr6.eq) goto loc_830F88B8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830f88d4
	if (!cr6.eq) goto loc_830F88D4;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r10,9948(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9948);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f88d4
	if (cr6.eq) goto loc_830F88D4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F88B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830f88d4
	goto loc_830F88D4;
loc_830F88B8:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r10,9952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9952);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f88d4
	if (cr6.eq) goto loc_830F88D4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F88D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F88D4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830f88f0
	if (cr6.eq) goto loc_830F88F0;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,9956(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9956);
	// b 0x830f88f8
	goto loc_830F88F8;
loc_830F88F0:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r3,9956(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9956);
loc_830F88F8:
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

__attribute__((alias("__imp__sub_830F8910"))) PPC_WEAK_FUNC(sub_830F8910);
PPC_FUNC_IMPL(__imp__sub_830F8910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F8918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bge cr6,0x830f89bc
	if (!cr6.lt) goto loc_830F89BC;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r28,9944(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9944);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830f8958
	if (cr6.eq) goto loc_830F8958;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8958;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F8958:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r9,r10,12120
	ctx.r9.s64 = ctx.r10.s64 + 12120;
	// mulli r8,r31,2072
	ctx.r8.s64 = ctx.r31.s64 * 2072;
	// lwz r10,9960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9960);
	// addi r7,r9,20
	ctx.r7.s64 = ctx.r9.s64 + 20;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,9960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9960, ctx.r10.u32);
	// lhzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830f89a0
	if (cr6.eq) goto loc_830F89A0;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,9960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9960, ctx.r10.u32);
	// stw r29,9964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9964, ctx.r29.u32);
	// stw r31,-22952(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22952, ctx.r31.u32);
loc_830F89A0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830f89bc
	if (cr6.eq) goto loc_830F89BC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F89BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F89BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F89C8"))) PPC_WEAK_FUNC(sub_830F89C8);
PPC_FUNC_IMPL(__imp__sub_830F89C8) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,9944(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9944);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830f8a08
	if (cr6.eq) goto loc_830F8A08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8A08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F8A08:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwz r11,9960(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9960);
	// stw r30,9968(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9968, ctx.r30.u32);
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r11,r8,2
	ctx.r11.u64 = ctx.r8.u64 | 2;
	// stw r11,9960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9960, ctx.r11.u32);
	// beq cr6,0x830f8a40
	if (cr6.eq) goto loc_830F8A40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8A40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F8A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8A5C"))) PPC_WEAK_FUNC(sub_830F8A5C);
PPC_FUNC_IMPL(__imp__sub_830F8A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F8A60"))) PPC_WEAK_FUNC(sub_830F8A60);
PPC_FUNC_IMPL(__imp__sub_830F8A60) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r31,9944(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9944);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830f8a9c
	if (cr6.eq) goto loc_830F8A9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8A9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F8A9C:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwz r11,9956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9956);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x830f8ac8
	if (cr6.eq) goto loc_830F8AC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8AC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F8AC8:
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

__attribute__((alias("__imp__sub_830F8AE4"))) PPC_WEAK_FUNC(sub_830F8AE4);
PPC_FUNC_IMPL(__imp__sub_830F8AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F8AE8"))) PPC_WEAK_FUNC(sub_830F8AE8);
PPC_FUNC_IMPL(__imp__sub_830F8AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x830F8AF0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r22,-1
	ctx.r22.s64 = -1;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bge cr6,0x830f8c78
	if (!cr6.lt) goto loc_830F8C78;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// bge cr6,0x830f8c78
	if (!cr6.lt) goto loc_830F8C78;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r21,9944(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9944);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x830f8b3c
	if (cr6.eq) goto loc_830F8B3C;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8B3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F8B3C:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mulli r30,r31,2072
	ctx.r30.s64 = ctx.r31.s64 * 2072;
	// addi r31,r11,12120
	ctx.r31.s64 = ctx.r11.s64 + 12120;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r23,r31,16
	ctx.r23.s64 = ctx.r31.s64 + 16;
	// stwx r22,r30,r23
	PPC_STORE_U32(ctx.r30.u32 + ctx.r23.u32, ctx.r22.u32);
	// lhz r27,8(r25)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x830f8c18
	if (cr6.eq) goto loc_830F8C18;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_830F8B68:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ef618
	ctx.lr = 0x830F8B78;
	sub_830EF618(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830f8b9c
	if (!cr6.eq) goto loc_830F8B9C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830eb240
	ctx.lr = 0x830F8B90;
	sub_830EB240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f8be8
	if (cr6.eq) goto loc_830F8BE8;
loc_830F8B9C:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f8bdc
	if (cr6.eq) goto loc_830F8BDC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_830F8BAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830f8bd0
	if (cr6.eq) goto loc_830F8BD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830f8bac
	if (cr6.eq) goto loc_830F8BAC;
loc_830F8BD0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830f8bdc
	if (!cr6.eq) goto loc_830F8BDC;
	// stwx r29,r30,r23
	PPC_STORE_U32(ctx.r30.u32 + ctx.r23.u32, ctx.r29.u32);
loc_830F8BDC:
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r24,r11,16
	ctx.r24.u64 = ctx.r11.u32 & 0xFFFF;
loc_830F8BE8:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// stwx r28,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r28.u32);
	// stbx r26,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r26.u8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x830f8b68
	if (cr6.lt) goto loc_830F8B68;
loc_830F8C18:
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// stdx r22,r30,r31
	PPC_STORE_U64(ctx.r30.u32 + ctx.r31.u32, ctx.r22.u64);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r8,r31,20
	ctx.r8.s64 = ctx.r31.s64 + 20;
	// addi r5,r31,22
	ctx.r5.s64 = ctx.r31.s64 + 22;
	// addic r7,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stwx r22,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r22.u32);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// stwx r27,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r27.u32);
	// sthx r24,r30,r8
	PPC_STORE_U16(ctx.r30.u32 + ctx.r8.u32, ctx.r24.u16);
	// lbz r3,10(r25)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r25.u32 + 10);
	// and r31,r4,r22
	ctx.r31.u64 = ctx.r4.u64 & ctx.r22.u64;
	// stbx r3,r30,r5
	PPC_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r3.u8);
	// beq cr6,0x830f8c6c
	if (cr6.eq) goto loc_830F8C6C;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8C6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F8C6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830F8C78:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F8C84"))) PPC_WEAK_FUNC(sub_830F8C84);
PPC_FUNC_IMPL(__imp__sub_830F8C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F8C88"))) PPC_WEAK_FUNC(sub_830F8C88);
PPC_FUNC_IMPL(__imp__sub_830F8C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F8C90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,9944(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9944);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830f8cc0
	if (cr6.eq) goto loc_830F8CC0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8CC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F8CC0:
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bge cr6,0x830f8d0c
	if (!cr6.lt) goto loc_830F8D0C;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-22956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22956);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x830f8d0c
	if (cr6.eq) goto loc_830F8D0C;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r3,r10,9976
	ctx.r3.s64 = ctx.r10.s64 + 9976;
	// lwz r4,9968(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9968);
	// bl 0x830fcc50
	ctx.lr = 0x830F8CF0;
	sub_830FCC50(ctx, base);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// mulli r8,r31,2072
	ctx.r8.s64 = ctx.r31.s64 * 2072;
	// addi r11,r9,12120
	ctx.r11.s64 = ctx.r9.s64 + 12120;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sthx r7,r8,r6
	PPC_STORE_U16(ctx.r8.u32 + ctx.r6.u32, ctx.r7.u16);
loc_830F8D0C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830f8d28
	if (cr6.eq) goto loc_830F8D28;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F8D28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F8D28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F8D34"))) PPC_WEAK_FUNC(sub_830F8D34);
PPC_FUNC_IMPL(__imp__sub_830F8D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F8D38"))) PPC_WEAK_FUNC(sub_830F8D38);
PPC_FUNC_IMPL(__imp__sub_830F8D38) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r11,16264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f8db4
	if (!cr6.eq) goto loc_830F8DB4;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830F8D78;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f8dac
	if (cr6.eq) goto loc_830F8DAC;
	// bl 0x824eecc0
	ctx.lr = 0x830F8D84;
	sub_824EECC0(ctx, base);
	// stw r3,16264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16264, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f8db4
	if (cr6.eq) goto loc_830F8DB4;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r4,r11,-28088
	ctx.r4.s64 = ctx.r11.s64 + -28088;
	// addi r3,r10,23140
	ctx.r3.s64 = ctx.r10.s64 + 23140;
	// bl 0x835d6090
	ctx.lr = 0x830F8DA4;
	sub_835D6090(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f8db8
	goto loc_830F8DB8;
loc_830F8DAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16264, ctx.r11.u32);
loc_830F8DB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830F8DB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8DD0"))) PPC_WEAK_FUNC(sub_830F8DD0);
PPC_FUNC_IMPL(__imp__sub_830F8DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x830F8DD8;
	__savegprlr_18(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f9020
	if (cr6.eq) goto loc_830F9020;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r25,r11,-27912
	ctx.r25.s64 = ctx.r11.s64 + -27912;
	// addi r4,r25,-108
	ctx.r4.s64 = ctx.r25.s64 + -108;
	// bl 0x838fc840
	ctx.lr = 0x830F8DF8;
	sub_838FC840(ctx, base);
	// bl 0x831d88a0
	ctx.lr = 0x830F8DFC;
	sub_831D88A0(ctx, base);
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// bgt cr6,0x830f9020
	if (cr6.gt) goto loc_830F9020;
	// lis r24,-31751
	ctx.r24.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// stw r11,16280(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16280, ctx.r11.u32);
	// bl 0x838fbb40
	ctx.lr = 0x830F8E1C;
	sub_838FBB40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f9020
	if (cr6.eq) goto loc_830F9020;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r19,r11,16288
	ctx.r19.s64 = ctx.r11.s64 + 16288;
loc_830F8E30:
	// addi r4,r25,-104
	ctx.r4.s64 = ctx.r25.s64 + -104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fc840
	ctx.lr = 0x830F8E3C;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f8e50
	if (cr6.eq) goto loc_830F8E50;
	// bl 0x831d88a0
	ctx.lr = 0x830F8E48;
	sub_831D88A0(ctx, base);
	// extsh r20,r3
	ctx.r20.s64 = ctx.r3.s16;
	// b 0x830f8e54
	goto loc_830F8E54;
loc_830F8E50:
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
loc_830F8E54:
	// addi r4,r25,-100
	ctx.r4.s64 = ctx.r25.s64 + -100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fc840
	ctx.lr = 0x830F8E60;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f8e74
	if (cr6.eq) goto loc_830F8E74;
	// bl 0x831d88a0
	ctx.lr = 0x830F8E6C;
	sub_831D88A0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// b 0x830f8e78
	goto loc_830F8E78;
loc_830F8E74:
	// li r21,0
	ctx.r21.s64 = 0;
loc_830F8E78:
	// addi r4,r25,-92
	ctx.r4.s64 = ctx.r25.s64 + -92;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fc840
	ctx.lr = 0x830F8E84;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f8e98
	if (cr6.eq) goto loc_830F8E98;
	// bl 0x831d88a0
	ctx.lr = 0x830F8E90;
	sub_831D88A0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x830f8e9c
	goto loc_830F8E9C;
loc_830F8E98:
	// li r22,0
	ctx.r22.s64 = 0;
loc_830F8E9C:
	// addi r4,r25,-88
	ctx.r4.s64 = ctx.r25.s64 + -88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fc840
	ctx.lr = 0x830F8EA8;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f8ebc
	if (cr6.eq) goto loc_830F8EBC;
	// bl 0x831d88a0
	ctx.lr = 0x830F8EB4;
	sub_831D88A0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x830f8ec0
	goto loc_830F8EC0;
loc_830F8EBC:
	// li r23,3000
	ctx.r23.s64 = 3000;
loc_830F8EC0:
	// addi r4,r25,-60
	ctx.r4.s64 = ctx.r25.s64 + -60;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fc840
	ctx.lr = 0x830F8ECC;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f8ee0
	if (cr6.eq) goto loc_830F8EE0;
	// bl 0x831d88a0
	ctx.lr = 0x830F8ED8;
	sub_831D88A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x830f8ee4
	goto loc_830F8EE4;
loc_830F8EE0:
	// li r31,3000
	ctx.r31.s64 = 3000;
loc_830F8EE4:
	// addi r4,r25,-48
	ctx.r4.s64 = ctx.r25.s64 + -48;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fc840
	ctx.lr = 0x830F8EF0;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f8f04
	if (cr6.eq) goto loc_830F8F04;
	// bl 0x831d88a0
	ctx.lr = 0x830F8EFC;
	sub_831D88A0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x830f8f08
	goto loc_830F8F08;
loc_830F8F04:
	// li r26,2000
	ctx.r26.s64 = 2000;
loc_830F8F08:
	// addi r4,r25,-32
	ctx.r4.s64 = ctx.r25.s64 + -32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fc840
	ctx.lr = 0x830F8F14;
	sub_838FC840(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r25,-24
	ctx.r4.s64 = ctx.r25.s64 + -24;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fc840
	ctx.lr = 0x830F8F24;
	sub_838FC840(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r25,-16
	ctx.r4.s64 = ctx.r25.s64 + -16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fc840
	ctx.lr = 0x830F8F34;
	sub_838FC840(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r25,-8
	ctx.r4.s64 = ctx.r25.s64 + -8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fc840
	ctx.lr = 0x830F8F44;
	sub_838FC840(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f8f80
	if (cr6.eq) goto loc_830F8F80;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_830F8F54:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830f8f78
	if (cr6.eq) goto loc_830F8F78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830f8f54
	if (cr6.eq) goto loc_830F8F54;
loc_830F8F78:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830f9000
	if (cr6.eq) goto loc_830F9000;
loc_830F8F80:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835d5a08
	ctx.lr = 0x830F8F8C;
	sub_835D5A08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f9000
	if (!cr6.eq) goto loc_830F9000;
	// lwz r11,16280(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16280);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mulli r11,r11,212
	ctx.r11.s64 = ctx.r11.s64 * 212;
	// stwx r9,r11,r19
	PPC_STORE_U32(ctx.r11.u32 + ctx.r19.u32, ctx.r9.u32);
	// add r31,r11,r19
	ctx.r31.u64 = ctx.r11.u64 + ctx.r19.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// stw r21,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r21.u32);
	// sth r20,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r20.u16);
	// sth r23,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r23.u16);
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
	// sth r26,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r26.u16);
	// bl 0x831ce7d8
	ctx.lr = 0x830F8FD4;
	sub_831CE7D8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x831ce7d8
	ctx.lr = 0x830F8FE4;
	sub_831CE7D8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x831ce7d8
	ctx.lr = 0x830F8FF4;
	sub_831CE7D8(ctx, base);
	// lwz r11,16280(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16280);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16280(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16280, ctx.r11.u32);
loc_830F9000:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r18,r11
	ctx.r18.s64 = ctx.r11.s16;
	// bl 0x838fbc58
	ctx.lr = 0x830F9014;
	sub_838FBC58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830f8e30
	if (!cr6.eq) goto loc_830F8E30;
loc_830F9020:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F9028"))) PPC_WEAK_FUNC(sub_830F9028);
PPC_FUNC_IMPL(__imp__sub_830F9028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F9030;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3000
	ctx.r11.s64 = 3000;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r11,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r11.u16);
	// li r10,2000
	ctx.r10.s64 = 2000;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// sth r29,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r29.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// sth r10,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r10.u16);
	// bl 0x831cdcf0
	ctx.lr = 0x830F9070;
	sub_831CDCF0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x831cdcf0
	ctx.lr = 0x830F9080;
	sub_831CDCF0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x831cdcf0
	ctx.lr = 0x830F9090;
	sub_831CDCF0(ctx, base);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r31,r9,16288
	ctx.r31.s64 = ctx.r9.s64 + 16288;
	// li r5,212
	ctx.r5.s64 = 212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x830F90A8;
	sub_831CE980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,6572
	ctx.r5.s64 = 6572;
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x831cee08
	ctx.lr = 0x830F90B8;
	sub_831CEE08(ctx, base);
	// lis r7,-31751
	ctx.r7.s64 = -2080833536;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,16280(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16280, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x830F90DC;
	sub_831CDCF0(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r1,98
	ctx.r11.s64 = ctx.r1.s64 + 98;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830F90EC:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x830f90ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830F90EC;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,23200
	ctx.r31.s64 = ctx.r11.s64 + 23200;
	// li r5,136
	ctx.r5.s64 = 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x830F910C;
	sub_831CE980(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,136
	ctx.r5.s64 = 136;
	// bl 0x831ce980
	ctx.lr = 0x830F911C;
	sub_831CE980(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// sth r29,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r29.u16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-31751
	ctx.r7.s64 = -2080833536;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r4,r7,23072
	ctx.r4.s64 = ctx.r7.s64 + 23072;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// addi r3,r4,6
	ctx.r3.s64 = ctx.r4.s64 + 6;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lhz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// lhz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// sth r9,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r9.u16);
	// sth r10,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r10.u16);
	// bl 0x831cee08
	ctx.lr = 0x830F915C;
	sub_831CEE08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F9168"))) PPC_WEAK_FUNC(sub_830F9168);
PPC_FUNC_IMPL(__imp__sub_830F9168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830f917c
	if (!cr6.eq) goto loc_830F917C;
	// blr 
	return;
loc_830F917C:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// li r7,9999
	ctx.r7.s64 = 9999;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x830f91dc
	if (cr6.lt) goto loc_830F91DC;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,16280(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16280);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f91dc
	if (cr6.eq) goto loc_830F91DC;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r10,r10,16288
	ctx.r10.s64 = ctx.r10.s64 + 16288;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_830F91AC:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// beq cr6,0x830f91d4
	if (cr6.eq) goto loc_830F91D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,212
	ctx.r10.s64 = ctx.r10.s64 + 212;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x830f91ac
	if (cr6.lt) goto loc_830F91AC;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
loc_830F91D4:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F91DC:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F91E4"))) PPC_WEAK_FUNC(sub_830F91E4);
PPC_FUNC_IMPL(__imp__sub_830F91E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F91E8"))) PPC_WEAK_FUNC(sub_830F91E8);
PPC_FUNC_IMPL(__imp__sub_830F91E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F91F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,16264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f9294
	if (cr6.eq) goto loc_830F9294;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,23140
	ctx.r31.s64 = ctx.r11.s64 + 23140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,23140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23140);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9228;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f926c
	if (cr6.eq) goto loc_830F926C;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830F9248;
	sub_82595150(ctx, base);
	// lwz r29,16264(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16264);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830f9264
	if (cr6.eq) goto loc_830F9264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830fe5c8
	ctx.lr = 0x830F925C;
	sub_830FE5C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x830F9264;
	sub_82416268(ctx, base);
loc_830F9264:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830F926C;
	sub_82595170(ctx, base);
loc_830F926C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16264, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9288;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d60f8
	ctx.lr = 0x830F9290;
	sub_835D60F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F9294:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F929C"))) PPC_WEAK_FUNC(sub_830F929C);
PPC_FUNC_IMPL(__imp__sub_830F929C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F92A0"))) PPC_WEAK_FUNC(sub_830F92A0);
PPC_FUNC_IMPL(__imp__sub_830F92A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F92A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830f930c
	if (cr6.eq) goto loc_830F930C;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,23140
	ctx.r29.s64 = ctx.r30.s64 + 23140;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,23140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23140);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F92DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,16268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16268, ctx.r31.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,16272(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16272, ctx.r11.u8);
	// lwz r11,23140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23140);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830F9308;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F930C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F9314"))) PPC_WEAK_FUNC(sub_830F9314);
PPC_FUNC_IMPL(__imp__sub_830F9314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F9318"))) PPC_WEAK_FUNC(sub_830F9318);
PPC_FUNC_IMPL(__imp__sub_830F9318) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,23140
	ctx.r31.s64 = ctx.r11.s64 + 23140;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,23140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23140);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9350;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lbz r9,16272(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16272);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830f9370
	if (!cr6.eq) goto loc_830F9370;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r11,16276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16276);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830f9374
	if (!cr6.eq) goto loc_830F9374;
loc_830F9370:
	// li r30,1
	ctx.r30.s64 = 1;
loc_830F9374:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9388;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_830F93A4"))) PPC_WEAK_FUNC(sub_830F93A4);
PPC_FUNC_IMPL(__imp__sub_830F93A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F93A8"))) PPC_WEAK_FUNC(sub_830F93A8);
PPC_FUNC_IMPL(__imp__sub_830F93A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F93B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830f93d0
	if (!cr6.eq) goto loc_830F93D0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830F93D0:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,23140
	ctx.r30.s64 = ctx.r11.s64 + 23140;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,23140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23140);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F93F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r11,16276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830f9464
	if (!cr6.eq) goto loc_830F9464;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,16288
	ctx.r11.s64 = ctx.r11.s64 + 16288;
	// addi r11,r11,212
	ctx.r11.s64 = ctx.r11.s64 + 212;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830F9418:
	// lwz r10,-212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -212);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x830f9428
	if (cr6.eq) goto loc_830F9428;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_830F9428:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x830f9438
	if (cr6.eq) goto loc_830F9438;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_830F9438:
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x830f9448
	if (cr6.eq) goto loc_830F9448;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_830F9448:
	// lwz r10,424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x830f9458
	if (cr6.eq) goto loc_830F9458;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_830F9458:
	// addi r11,r11,848
	ctx.r11.s64 = ctx.r11.s64 + 848;
	// bdnz 0x830f9418
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830F9418;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830F9464:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9478;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F9488"))) PPC_WEAK_FUNC(sub_830F9488);
PPC_FUNC_IMPL(__imp__sub_830F9488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830F9490;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830f94b4
	if (!cr6.eq) goto loc_830F94B4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830F94B4:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,23140
	ctx.r31.s64 = ctx.r11.s64 + 23140;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,23140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23140);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F94D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r11,16276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830f9508
	if (!cr6.eq) goto loc_830F9508;
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(ctx.r28.u32, 32, xer);
	// bge cr6,0x830f9508
	if (!cr6.lt) goto loc_830F9508;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mulli r11,r28,212
	ctx.r11.s64 = ctx.r28.s64 * 212;
	// addi r10,r10,16288
	ctx.r10.s64 = ctx.r10.s64 + 16288;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_830F9508:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F951C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F952C"))) PPC_WEAK_FUNC(sub_830F952C);
PPC_FUNC_IMPL(__imp__sub_830F952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F9530"))) PPC_WEAK_FUNC(sub_830F9530);
PPC_FUNC_IMPL(__imp__sub_830F9530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F9538;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83108968
	ctx.lr = 0x830F9544;
	sub_83108968(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83108978
	ctx.lr = 0x830F954C;
	sub_83108978(ctx, base);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,23140
	ctx.r31.s64 = ctx.r11.s64 + 23140;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,23140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23140);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9574;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r11,16276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830f95b4
	if (!cr6.eq) goto loc_830F95B4;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r11,16280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16280);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x830f95b4
	if (!cr6.lt) goto loc_830F95B4;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mulli r10,r30,212
	ctx.r10.s64 = ctx.r30.s64 * 212;
	// addi r11,r11,16288
	ctx.r11.s64 = ctx.r11.s64 + 16288;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bne cr6,0x830f95b4
	if (!cr6.eq) goto loc_830F95B4;
	// li r28,1
	ctx.r28.s64 = 1;
loc_830F95B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F95C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F95D4"))) PPC_WEAK_FUNC(sub_830F95D4);
PPC_FUNC_IMPL(__imp__sub_830F95D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F95D8"))) PPC_WEAK_FUNC(sub_830F95D8);
PPC_FUNC_IMPL(__imp__sub_830F95D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830F95E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830f9604
	if (!cr6.eq) goto loc_830F9604;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830F9604:
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830f9690
	if (cr6.lt) goto loc_830F9690;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,23140
	ctx.r31.s64 = ctx.r11.s64 + 23140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,23140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23140);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9634;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r11,16276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830f967c
	if (!cr6.eq) goto loc_830F967C;
	// li r11,9999
	ctx.r11.s64 = 9999;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x830f9168
	ctx.lr = 0x830F9658;
	sub_830F9168(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f967c
	if (!cr6.eq) goto loc_830F967C;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,16288
	ctx.r10.s64 = ctx.r11.s64 + 16288;
	// mulli r11,r9,212
	ctx.r11.s64 = ctx.r9.s64 * 212;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_830F967C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9690;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F9690:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F96A0"))) PPC_WEAK_FUNC(sub_830F96A0);
PPC_FUNC_IMPL(__imp__sub_830F96A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830F96A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830f96cc
	if (!cr6.eq) goto loc_830F96CC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830F96CC:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,23140
	ctx.r31.s64 = ctx.r11.s64 + 23140;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,23140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23140);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F96F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r11,16276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830f971c
	if (!cr6.eq) goto loc_830F971C;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// bge cr6,0x830f971c
	if (!cr6.lt) goto loc_830F971C;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mulli r10,r28,136
	ctx.r10.s64 = ctx.r28.s64 * 136;
	// addi r9,r11,23200
	ctx.r9.s64 = ctx.r11.s64 + 23200;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_830F971C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9730;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F9740"))) PPC_WEAK_FUNC(sub_830F9740);
PPC_FUNC_IMPL(__imp__sub_830F9740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830F9748;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x830f9770
	if (!cr6.eq) goto loc_830F9770;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830F9770:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r10,9999
	ctx.r10.s64 = 9999;
	// addi r30,r11,23140
	ctx.r30.s64 = ctx.r11.s64 + 23140;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,23140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23140);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830F9798;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// lwz r11,16276(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16276);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830f97e0
	if (!cr6.eq) goto loc_830F97E0;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// bge cr6,0x830f97e0
	if (!cr6.lt) goto loc_830F97E0;
	// cmplwi cr6,r27,32
	cr6.compare<uint32_t>(ctx.r27.u32, 32, xer);
	// bge cr6,0x830f97e0
	if (!cr6.lt) goto loc_830F97E0;
	// mulli r11,r28,68
	ctx.r11.s64 = ctx.r28.s64 * 68;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r10,23200
	ctx.r11.s64 = ctx.r10.s64 + 23200;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x830f9168
	ctx.lr = 0x830F97DC;
	sub_830F9168(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_830F97E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F97F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F9800"))) PPC_WEAK_FUNC(sub_830F9800);
PPC_FUNC_IMPL(__imp__sub_830F9800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830F9808;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830f982c
	if (!cr6.eq) goto loc_830F982C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830F982C:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,23140
	ctx.r31.s64 = ctx.r11.s64 + 23140;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,23140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23140);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9850;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r11,16276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830f9880
	if (!cr6.eq) goto loc_830F9880;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// bge cr6,0x830f9880
	if (!cr6.lt) goto loc_830F9880;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mulli r10,r28,136
	ctx.r10.s64 = ctx.r28.s64 * 136;
	// addi r11,r11,23200
	ctx.r11.s64 = ctx.r11.s64 + 23200;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_830F9880:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9894;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F98A4"))) PPC_WEAK_FUNC(sub_830F98A4);
PPC_FUNC_IMPL(__imp__sub_830F98A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F98A8"))) PPC_WEAK_FUNC(sub_830F98A8);
PPC_FUNC_IMPL(__imp__sub_830F98A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F98B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830f98d4
	if (!cr6.eq) goto loc_830F98D4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830F98D4:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,23140
	ctx.r31.s64 = ctx.r11.s64 + 23140;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,23140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23140);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F98F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r29,r11,23072
	ctx.r29.s64 = ctx.r11.s64 + 23072;
	// lwz r11,16276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830f9978
	if (!cr6.eq) goto loc_830F9978;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830f9978
	if (cr6.eq) goto loc_830F9978;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r8,r29,6
	ctx.r8.s64 = ctx.r29.s64 + 6;
loc_830F9928:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_830F9930:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x830f9954
	if (cr6.eq) goto loc_830F9954;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830f9930
	if (cr6.eq) goto loc_830F9930;
loc_830F9954:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830f9974
	if (cr6.eq) goto loc_830F9974;
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 + 6;
	// cmplwi cr6,r7,66
	cr6.compare<uint32_t>(ctx.r7.u32, 66, xer);
	// blt cr6,0x830f9928
	if (cr6.lt) goto loc_830F9928;
	// b 0x830f9978
	goto loc_830F9978;
loc_830F9974:
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
loc_830F9978:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F998C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// sth r7,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r7.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F99B0"))) PPC_WEAK_FUNC(sub_830F99B0);
PPC_FUNC_IMPL(__imp__sub_830F99B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F99B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x835d5a08
	ctx.lr = 0x830F99CC;
	sub_835D5A08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f9a8c
	if (!cr6.eq) goto loc_830F9A8C;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,23140
	ctx.r29.s64 = ctx.r11.s64 + 23140;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,23140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23140);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F99F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r11,16276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830f9a78
	if (!cr6.eq) goto loc_830F9A78;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,16288
	ctx.r8.s64 = ctx.r10.s64 + 16288;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_830F9A20:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x830f9a44
	if (cr6.eq) goto loc_830F9A44;
	// addi r9,r9,212
	ctx.r9.s64 = ctx.r9.s64 + 212;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,212
	ctx.r10.s64 = ctx.r10.s64 + 212;
	// cmplwi cr6,r9,6784
	cr6.compare<uint32_t>(ctx.r9.u32, 6784, xer);
	// blt cr6,0x830f9a20
	if (cr6.lt) goto loc_830F9A20;
	// b 0x830f9a78
	goto loc_830F9A78;
loc_830F9A44:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830f9a5c
	if (cr6.eq) goto loc_830F9A5C;
	// mulli r10,r11,212
	ctx.r10.s64 = ctx.r11.s64 * 212;
	// addi r9,r8,84
	ctx.r9.s64 = ctx.r8.s64 + 84;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_830F9A5C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830f9a74
	if (cr6.eq) goto loc_830F9A74;
	// mulli r11,r11,212
	ctx.r11.s64 = ctx.r11.s64 * 212;
	// addi r10,r8,148
	ctx.r10.s64 = ctx.r8.s64 + 148;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_830F9A74:
	// li r31,0
	ctx.r31.s64 = 0;
loc_830F9A78:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9A8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F9A8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F9A98"))) PPC_WEAK_FUNC(sub_830F9A98);
PPC_FUNC_IMPL(__imp__sub_830F9A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F9AA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830f9abc
	if (!cr6.eq) goto loc_830F9ABC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830F9ABC:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// sth r31,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r31.u16);
	// sth r31,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r31.u16);
	// sth r31,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r31.u16);
	// bl 0x835d5a08
	ctx.lr = 0x830F9AE8;
	sub_835D5A08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f9bcc
	if (!cr6.eq) goto loc_830F9BCC;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,23140
	ctx.r30.s64 = ctx.r11.s64 + 23140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,23140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23140);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9B14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r11,16276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830f9bb8
	if (!cr6.eq) goto loc_830F9BB8;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r9,16280(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16280);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f9bb8
	if (cr6.eq) goto loc_830F9BB8;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r8,r10,16288
	ctx.r8.s64 = ctx.r10.s64 + 16288;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_830F9B4C:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x830f9b6c
	if (cr6.eq) goto loc_830F9B6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,212
	ctx.r10.s64 = ctx.r10.s64 + 212;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x830f9b4c
	if (cr6.lt) goto loc_830F9B4C;
	// b 0x830f9bb8
	goto loc_830F9BB8;
loc_830F9B6C:
	// mulli r11,r11,212
	ctx.r11.s64 = ctx.r11.s64 * 212;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// addi r9,r11,84
	ctx.r9.s64 = ctx.r11.s64 + 84;
	// addi r8,r11,148
	ctx.r8.s64 = ctx.r11.s64 + 148;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r5,14(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// lhz r3,18(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// sth r5,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r5.u16);
	// sth r4,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r4.u16);
	// sth r3,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r3.u16);
loc_830F9BB8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9BCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F9BCC:
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830F9BDC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830f9bdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830F9BDC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F9BF4"))) PPC_WEAK_FUNC(sub_830F9BF4);
PPC_FUNC_IMPL(__imp__sub_830F9BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F9BF8"))) PPC_WEAK_FUNC(sub_830F9BF8);
PPC_FUNC_IMPL(__imp__sub_830F9BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F9C00;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// bl 0x835d5a08
	ctx.lr = 0x830F9C18;
	sub_835D5A08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f9cb8
	if (!cr6.eq) goto loc_830F9CB8;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,23140
	ctx.r31.s64 = ctx.r11.s64 + 23140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,23140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23140);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9C40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r11,16276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830f9ca4
	if (!cr6.eq) goto loc_830F9CA4;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16280(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16280);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f9ca4
	if (cr6.eq) goto loc_830F9CA4;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r11,16288
	ctx.r8.s64 = ctx.r11.s64 + 16288;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_830F9C74:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x830f9c94
	if (cr6.eq) goto loc_830F9C94;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,212
	ctx.r11.s64 = ctx.r11.s64 + 212;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x830f9c74
	if (cr6.lt) goto loc_830F9C74;
	// b 0x830f9ca4
	goto loc_830F9CA4;
loc_830F9C94:
	// mulli r11,r10,212
	ctx.r11.s64 = ctx.r10.s64 * 212;
	// addi r10,r8,12
	ctx.r10.s64 = ctx.r8.s64 + 12;
	// li r30,1
	ctx.r30.s64 = 1;
	// lhzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
loc_830F9CA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F9CB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F9CB8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x830f9cc8
	if (cr6.eq) goto loc_830F9CC8;
	// sth r29,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r29.u16);
loc_830F9CC8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F9CD0"))) PPC_WEAK_FUNC(sub_830F9CD0);
PPC_FUNC_IMPL(__imp__sub_830F9CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830F9CD8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f9e34
	if (cr6.eq) goto loc_830F9E34;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r27,r11,-27868
	ctx.r27.s64 = ctx.r11.s64 + -27868;
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// bl 0x838fc840
	ctx.lr = 0x830F9CF8;
	sub_838FC840(ctx, base);
	// bl 0x831d88a0
	ctx.lr = 0x830F9CFC;
	sub_831D88A0(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bgt cr6,0x830f9e34
	if (cr6.gt) goto loc_830F9E34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830F9D0C;
	sub_838FBB40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f9e34
	if (cr6.eq) goto loc_830F9E34;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r24,r11,23200
	ctx.r24.s64 = ctx.r11.s64 + 23200;
	// addi r26,r24,68
	ctx.r26.s64 = ctx.r24.s64 + 68;
loc_830F9D28:
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fc840
	ctx.lr = 0x830F9D34;
	sub_838FC840(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x831ce7d8
	ctx.lr = 0x830F9D44;
	sub_831CE7D8(ctx, base);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x838fc840
	ctx.lr = 0x830F9D54;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f9d6c
	if (cr6.eq) goto loc_830F9D6C;
	// bl 0x831d88a0
	ctx.lr = 0x830F9D60;
	sub_831D88A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f9d6c
	if (cr6.eq) goto loc_830F9D6C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_830F9D6C:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fc840
	ctx.lr = 0x830F9D7C;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f9d90
	if (cr6.eq) goto loc_830F9D90;
	// bl 0x831d88a0
	ctx.lr = 0x830F9D88;
	sub_831D88A0(ctx, base);
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// bgt cr6,0x830f9e18
	if (cr6.gt) goto loc_830F9E18;
loc_830F9D90:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830F9D98;
	sub_838FBB40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f9e18
	if (cr6.eq) goto loc_830F9E18;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830F9DA8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fc840
	ctx.lr = 0x830F9DB4;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f9dc8
	if (cr6.eq) goto loc_830F9DC8;
	// bl 0x831d88a0
	ctx.lr = 0x830F9DC0;
	sub_831D88A0(ctx, base);
	// extsh r31,r3
	ctx.r31.s64 = ctx.r3.s16;
	// b 0x830f9dcc
	goto loc_830F9DCC;
loc_830F9DC8:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_830F9DCC:
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830f9e00
	if (cr6.lt) goto loc_830F9E00;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9168
	ctx.lr = 0x830F9DE4;
	sub_830F9168(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f9e00
	if (!cr6.eq) goto loc_830F9E00;
	// add r11,r25,r30
	ctx.r11.u64 = ctx.r25.u64 + ctx.r30.u64;
	// addi r10,r24,4
	ctx.r10.s64 = ctx.r24.s64 + 4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// sthx r31,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u16);
loc_830F9E00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fbc58
	ctx.lr = 0x830F9E08;
	sub_838FBC58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830f9da8
	if (!cr6.eq) goto loc_830F9DA8;
	// stw r30,-68(r26)
	PPC_STORE_U32(ctx.r26.u32 + -68, ctx.r30.u32);
loc_830F9E18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fbc58
	ctx.lr = 0x830F9E20;
	sub_838FBC58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r25,r25,68
	ctx.r25.s64 = ctx.r25.s64 + 68;
	// addi r26,r26,136
	ctx.r26.s64 = ctx.r26.s64 + 136;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830f9d28
	if (!cr6.eq) goto loc_830F9D28;
loc_830F9E34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F9E3C"))) PPC_WEAK_FUNC(sub_830F9E3C);
PPC_FUNC_IMPL(__imp__sub_830F9E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F9E40"))) PPC_WEAK_FUNC(sub_830F9E40);
PPC_FUNC_IMPL(__imp__sub_830F9E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830F9E48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f9f54
	if (cr6.eq) goto loc_830F9F54;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r28,r11,-27852
	ctx.r28.s64 = ctx.r11.s64 + -27852;
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// bl 0x838fc840
	ctx.lr = 0x830F9E68;
	sub_838FC840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830F9E70;
	sub_838FBB40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f9f54
	if (cr6.eq) goto loc_830F9F54;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r11,23072
	ctx.r31.s64 = ctx.r11.s64 + 23072;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lis r27,-31751
	ctx.r27.s64 = -2080833536;
	// addi r26,r11,16288
	ctx.r26.s64 = ctx.r11.s64 + 16288;
loc_830F9E98:
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830F9EA4;
	sub_838FC840(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f9ec0
	if (cr6.eq) goto loc_830F9EC0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x830F9EBC;
	sub_831CE7D8(ctx, base);
	// b 0x830f9ec4
	goto loc_830F9EC4;
loc_830F9EC0:
	// stb r25,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r25.u8);
loc_830F9EC4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830F9ED0;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f9ee4
	if (cr6.eq) goto loc_830F9EE4;
	// bl 0x831d88a0
	ctx.lr = 0x830F9EDC;
	sub_831D88A0(ctx, base);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// b 0x830f9ee8
	goto loc_830F9EE8;
loc_830F9EE4:
	// li r7,-1
	ctx.r7.s64 = -1;
loc_830F9EE8:
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x830f9f40
	if (cr6.lt) goto loc_830F9F40;
	// lwz r9,16280(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16280);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f9f40
	if (cr6.eq) goto loc_830F9F40;
	// addi r11,r26,12
	ctx.r11.s64 = ctx.r26.s64 + 12;
loc_830F9F08:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// beq cr6,0x830f9f2c
	if (cr6.eq) goto loc_830F9F2C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,212
	ctx.r11.s64 = ctx.r11.s64 + 212;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x830f9f08
	if (cr6.lt) goto loc_830F9F08;
	// b 0x830f9f40
	goto loc_830F9F40;
loc_830F9F2C:
	// addi r29,r29,6
	ctx.r29.s64 = ctx.r29.s64 + 6;
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// cmplwi cr6,r29,66
	cr6.compare<uint32_t>(ctx.r29.u32, 66, xer);
	// bge cr6,0x830f9f54
	if (!cr6.lt) goto loc_830F9F54;
loc_830F9F40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fbc58
	ctx.lr = 0x830F9F48;
	sub_838FBC58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830f9e98
	if (!cr6.eq) goto loc_830F9E98;
loc_830F9F54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F9F5C"))) PPC_WEAK_FUNC(sub_830F9F5C);
PPC_FUNC_IMPL(__imp__sub_830F9F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F9F60"))) PPC_WEAK_FUNC(sub_830F9F60);
PPC_FUNC_IMPL(__imp__sub_830F9F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F9F68;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830fa0e4
	if (cr6.eq) goto loc_830FA0E4;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x830fa0e4
	if (!cr6.gt) goto loc_830FA0E4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830fe430
	ctx.lr = 0x830F9F90;
	sub_830FE430(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x838fceb8
	ctx.lr = 0x830F9FA4;
	sub_838FCEB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fa0dc
	if (cr6.eq) goto loc_830FA0DC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r5,r30,-36
	ctx.r5.s64 = ctx.r30.s64 + -36;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x838fd690
	ctx.lr = 0x830F9FD4;
	sub_838FD690(ctx, base);
	// bl 0x827ab930
	ctx.lr = 0x830F9FD8;
	sub_827AB930(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830f9ff8
	if (!cr6.eq) goto loc_830F9FF8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r29,-1
	ctx.r29.s64 = -1;
	// bl 0x830fe470
	ctx.lr = 0x830F9FEC;
	sub_830FE470(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830F9FF8:
	// bl 0x838fbb40
	ctx.lr = 0x830F9FFC;
	sub_838FBB40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830fa0dc
	if (cr6.eq) goto loc_830FA0DC;
loc_830FA008:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r30,-24
	ctx.r11.s64 = ctx.r30.s64 + -24;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_830FA014:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830fa038
	if (cr6.eq) goto loc_830FA038;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830fa014
	if (cr6.eq) goto loc_830FA014;
loc_830FA038:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830fa048
	if (!cr6.eq) goto loc_830FA048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f8dd0
	ctx.lr = 0x830FA048;
	sub_830F8DD0(ctx, base);
loc_830FA048:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_830FA054:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830fa078
	if (cr6.eq) goto loc_830FA078;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830fa054
	if (cr6.eq) goto loc_830FA054;
loc_830FA078:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830fa088
	if (!cr6.eq) goto loc_830FA088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9cd0
	ctx.lr = 0x830FA088;
	sub_830F9CD0(ctx, base);
loc_830FA088:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_830FA094:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830fa0b8
	if (cr6.eq) goto loc_830FA0B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830fa094
	if (cr6.eq) goto loc_830FA094;
loc_830FA0B8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830fa0c8
	if (!cr6.eq) goto loc_830FA0C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f9e40
	ctx.lr = 0x830FA0C8;
	sub_830F9E40(ctx, base);
loc_830FA0C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbc58
	ctx.lr = 0x830FA0D0;
	sub_838FBC58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830fa008
	if (!cr6.eq) goto loc_830FA008;
loc_830FA0DC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830fe470
	ctx.lr = 0x830FA0E4;
	sub_830FE470(ctx, base);
loc_830FA0E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FA0F0"))) PPC_WEAK_FUNC(sub_830FA0F0);
PPC_FUNC_IMPL(__imp__sub_830FA0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830FA0F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r27,r11,23140
	ctx.r27.s64 = ctx.r11.s64 + 23140;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,23140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23140);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FA11C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r11,16276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16276);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x830fa1c0
	if (cr6.lt) goto loc_830FA1C0;
	// beq cr6,0x830fa154
	if (cr6.eq) goto loc_830FA154;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x830fa214
	if (!cr6.lt) goto loc_830FA214;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lbz r10,16272(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16272);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830fa214
	if (cr6.eq) goto loc_830FA214;
loc_830FA14C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830fa210
	goto loc_830FA210;
loc_830FA154:
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// lwz r3,16264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16264);
	// bl 0x830fe540
	ctx.lr = 0x830FA160;
	sub_830FE540(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fa214
	if (cr6.eq) goto loc_830FA214;
	// lwz r3,16264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16264);
	// bl 0x830fe5c0
	ctx.lr = 0x830FA174;
	sub_830FE5C0(ctx, base);
	// lwz r11,16264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830fe598
	ctx.lr = 0x830FA184;
	sub_830FE598(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830fa14c
	if (cr6.eq) goto loc_830FA14C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x830fa14c
	if (!cr6.gt) goto loc_830FA14C;
	// bl 0x830f9028
	ctx.lr = 0x830FA19C;
	sub_830F9028(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f9f60
	ctx.lr = 0x830FA1A8;
	sub_830F9F60(ctx, base);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// li r11,2
	ctx.r11.s64 = 2;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// b 0x830fa210
	goto loc_830FA210;
loc_830FA1C0:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lbz r11,16272(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fa214
	if (cr6.eq) goto loc_830FA214;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// stb r11,16272(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16272, ctx.r11.u8);
	// lwz r3,16264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16264);
	// bl 0x830fe5c8
	ctx.lr = 0x830FA1E4;
	sub_830FE5C8(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r3,16264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16264);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,16268(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16268);
	// bl 0x830fe628
	ctx.lr = 0x830FA200;
	sub_830FE628(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_830FA210:
	// stw r11,16276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16276, ctx.r11.u32);
loc_830FA214:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830FA228;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FA234"))) PPC_WEAK_FUNC(sub_830FA234);
PPC_FUNC_IMPL(__imp__sub_830FA234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FA238"))) PPC_WEAK_FUNC(sub_830FA238);
PPC_FUNC_IMPL(__imp__sub_830FA238) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r30,r11,23496
	ctx.r30.s64 = ctx.r11.s64 + 23496;
loc_830FA258:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fd290
	ctx.lr = 0x830FA260;
	sub_830FD290(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bne 0x830fa258
	if (!cr0.eq) goto loc_830FA258;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA284"))) PPC_WEAK_FUNC(sub_830FA284);
PPC_FUNC_IMPL(__imp__sub_830FA284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FA288"))) PPC_WEAK_FUNC(sub_830FA288);
PPC_FUNC_IMPL(__imp__sub_830FA288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830FA290;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r30,r11,23496
	ctx.r30.s64 = ctx.r11.s64 + 23496;
loc_830FA2A4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fd768
	ctx.lr = 0x830FA2B0;
	sub_830FD768(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bne 0x830fa2a4
	if (!cr0.eq) goto loc_830FA2A4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FA2C4"))) PPC_WEAK_FUNC(sub_830FA2C4);
PPC_FUNC_IMPL(__imp__sub_830FA2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FA2C8"))) PPC_WEAK_FUNC(sub_830FA2C8);
PPC_FUNC_IMPL(__imp__sub_830FA2C8) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r30,r11,23496
	ctx.r30.s64 = ctx.r11.s64 + 23496;
loc_830FA2E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83572958
	ctx.lr = 0x830FA2F0;
	sub_83572958(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bne 0x830fa2e8
	if (!cr0.eq) goto loc_830FA2E8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA314"))) PPC_WEAK_FUNC(sub_830FA314);
PPC_FUNC_IMPL(__imp__sub_830FA314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FA318"))) PPC_WEAK_FUNC(sub_830FA318);
PPC_FUNC_IMPL(__imp__sub_830FA318) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r30,r11,23496
	ctx.r30.s64 = ctx.r11.s64 + 23496;
loc_830FA338:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fd2b8
	ctx.lr = 0x830FA340;
	sub_830FD2B8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bne 0x830fa338
	if (!cr0.eq) goto loc_830FA338;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA364"))) PPC_WEAK_FUNC(sub_830FA364);
PPC_FUNC_IMPL(__imp__sub_830FA364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FA368"))) PPC_WEAK_FUNC(sub_830FA368);
PPC_FUNC_IMPL(__imp__sub_830FA368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,23496
	ctx.r10.s64 = ctx.r9.s64 + 23496;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x830fd238
	sub_830FD238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FA39C"))) PPC_WEAK_FUNC(sub_830FA39C);
PPC_FUNC_IMPL(__imp__sub_830FA39C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA3A0"))) PPC_WEAK_FUNC(sub_830FA3A0);
PPC_FUNC_IMPL(__imp__sub_830FA3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,23496
	ctx.r10.s64 = ctx.r9.s64 + 23496;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x830fd2f0
	sub_830FD2F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FA3D4"))) PPC_WEAK_FUNC(sub_830FA3D4);
PPC_FUNC_IMPL(__imp__sub_830FA3D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA3D8"))) PPC_WEAK_FUNC(sub_830FA3D8);
PPC_FUNC_IMPL(__imp__sub_830FA3D8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830fa424
	if (cr6.lt) goto loc_830FA424;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830fa424
	if (!cr6.lt) goto loc_830FA424;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r8,23496
	ctx.r10.s64 = ctx.r8.s64 + 23496;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830fd260
	ctx.lr = 0x830FA424;
	sub_830FD260(ctx, base);
loc_830FA424:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA434"))) PPC_WEAK_FUNC(sub_830FA434);
PPC_FUNC_IMPL(__imp__sub_830FA434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FA438"))) PPC_WEAK_FUNC(sub_830FA438);
PPC_FUNC_IMPL(__imp__sub_830FA438) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r11,21(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830fa4dc
	if (!cr6.eq) goto loc_830FA4DC;
	// lfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
loc_830FA478:
	// lfs f13,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830fa4a8
	if (cr6.eq) goto loc_830FA4A8;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x830fa498
	if (cr6.lt) goto loc_830FA498;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830FA498:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830fa4b8
	goto loc_830FA4B8;
loc_830FA4A8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x830fa4b4
	if (cr6.lt) goto loc_830FA4B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830FA4B4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_830FA4B8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fa4cc
	if (cr6.eq) goto loc_830FA4CC;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x830fa4d0
	goto loc_830FA4D0;
loc_830FA4CC:
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
loc_830FA4D0:
	// lbz r11,21(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fa478
	if (cr6.eq) goto loc_830FA478;
loc_830FA4DC:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83587190
	ctx.lr = 0x830FA4E8;
	sub_83587190(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_830FA514"))) PPC_WEAK_FUNC(sub_830FA514);
PPC_FUNC_IMPL(__imp__sub_830FA514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FA518"))) PPC_WEAK_FUNC(sub_830FA518);
PPC_FUNC_IMPL(__imp__sub_830FA518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	ctx.lr = 0x830FA54C;
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
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// beq 0x830fa588
	if (cr0.eq) goto loc_830FA588;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
loc_830FA588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA5A0"))) PPC_WEAK_FUNC(sub_830FA5A0);
PPC_FUNC_IMPL(__imp__sub_830FA5A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830FA5A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,12
	ctx.r29.s64 = 12;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// divw r11,r11,r29
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x830fa5f4
	if (!cr6.gt) goto loc_830FA5F4;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83095df8
	ctx.lr = 0x830FA5EC;
	sub_83095DF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830FA5F4:
	// bge cr6,0x830fa684
	if (!cr6.lt) goto loc_830FA684;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d546e8
	ctx.lr = 0x830FA604;
	sub_82D546E8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// subf. r10,r8,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830fa65c
	if (cr0.eq) goto loc_830FA65C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_830FA63C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fa650
	if (cr6.eq) goto loc_830FA650;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_830FA650:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x830fa63c
	if (!cr0.eq) goto loc_830FA63C;
loc_830FA65C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// subf r10,r8,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r8.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_830FA684:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FA68C"))) PPC_WEAK_FUNC(sub_830FA68C);
PPC_FUNC_IMPL(__imp__sub_830FA68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FA690"))) PPC_WEAK_FUNC(sub_830FA690);
PPC_FUNC_IMPL(__imp__sub_830FA690) {
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
	// bl 0x830fa518
	ctx.lr = 0x830FA6B8;
	sub_830FA518(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830fa438
	ctx.lr = 0x830FA6CC;
	sub_830FA438(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_830FA6F0"))) PPC_WEAK_FUNC(sub_830FA6F0);
PPC_FUNC_IMPL(__imp__sub_830FA6F0) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r11,23620
	ctx.r3.s64 = ctx.r11.s64 + 23620;
	// bl 0x830fa5a0
	ctx.lr = 0x830FA70C;
	sub_830FA5A0(ctx, base);
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

__attribute__((alias("__imp__sub_830FA720"))) PPC_WEAK_FUNC(sub_830FA720);
PPC_FUNC_IMPL(__imp__sub_830FA720) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23620
	ctx.r3.s64 = ctx.r11.s64 + 23620;
	// bl 0x83096030
	ctx.lr = 0x830FA73C;
	sub_83096030(ctx, base);
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

__attribute__((alias("__imp__sub_830FA750"))) PPC_WEAK_FUNC(sub_830FA750);
PPC_FUNC_IMPL(__imp__sub_830FA750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830FA758;
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
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x830fa7a0
	if (cr6.eq) goto loc_830FA7A0;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_830FA774:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x830FA788;
	sub_8259CB28(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne cr6,0x830fa774
	if (!cr6.eq) goto loc_830FA774;
loc_830FA7A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FA7AC"))) PPC_WEAK_FUNC(sub_830FA7AC);
PPC_FUNC_IMPL(__imp__sub_830FA7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FA7B0"))) PPC_WEAK_FUNC(sub_830FA7B0);
PPC_FUNC_IMPL(__imp__sub_830FA7B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x830FA7B8;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r24,r11,23636
	ctx.r24.s64 = ctx.r11.s64 + 23636;
	// lwz r5,23636(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23636);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x830faabc
	if (cr6.eq) goto loc_830FAABC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// clrlwi r19,r3,24
	ctx.r19.u64 = ctx.r3.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f30,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// li r27,2
	ctx.r27.s64 = 2;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r21,12
	ctx.r21.s64 = 12;
	// lis r20,-32223
	ctx.r20.s64 = -2111766528;
	// addi r22,r11,23656
	ctx.r22.s64 = ctx.r11.s64 + 23656;
	// addi r29,r10,23620
	ctx.r29.s64 = ctx.r10.s64 + 23620;
loc_830FA810:
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830fa824
	if (cr6.lt) goto loc_830FA824;
	// lwz r25,0(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// b 0x830fa828
	goto loc_830FA828;
loc_830FA824:
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_830FA828:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// bne cr6,0x830fa850
	if (!cr6.eq) goto loc_830FA850;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830eab70
	ctx.lr = 0x830FA84C;
	sub_830EAB70(ctx, base);
	// b 0x830faa7c
	goto loc_830FAA7C;
loc_830FA850:
	// stfs f30,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x830fadc8
	ctx.lr = 0x830FA864;
	sub_830FADC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830faa7c
	if (!cr6.eq) goto loc_830FAA7C;
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x830FA884;
	sub_82595718(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stb r26,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r26.u8);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stb r26,21(r10)
	PPC_STORE_U8(ctx.r10.u32 + 21, ctx.r26.u8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x830fa988
	if (cr6.eq) goto loc_830FA988;
	// lfs f11,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
loc_830FA8CC:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x830fa8e4
	if (!cr6.gt) goto loc_830FA8E4;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x830fa8e8
	goto loc_830FA8E8;
loc_830FA8E4:
	// fsubs f12,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
loc_830FA8E8:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bgt cr6,0x830fa8fc
	if (cr6.gt) goto loc_830FA8FC;
	// fsubs f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
loc_830FA8FC:
	// fadds f31,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f0,-27560(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + -27560);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x830fa970
	if (!cr6.lt) goto loc_830FA970;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x830FA920;
	sub_82595718(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r28,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r28.u8);
	// stb r28,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r28.u8);
	// beq 0x830fa954
	if (cr0.eq) goto loc_830FA954;
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// sth r30,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r30.u16);
loc_830FA954:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830fa438
	ctx.lr = 0x830FA964;
	sub_830FA438(ctx, base);
	// lfs f11,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_830FA970:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne cr6,0x830fa8cc
	if (!cr6.eq) goto loc_830FA8CC;
loc_830FA988:
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x830faa58
	if (cr6.lt) goto loc_830FAA58;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830fe218
	ctx.lr = 0x830FA99C;
	sub_830FE218(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x830fa9c8
	if (cr6.eq) goto loc_830FA9C8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_830FA9B4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8330ee50
	ctx.lr = 0x830FA9BC;
	sub_8330EE50(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x830fa9b4
	if (!cr0.eq) goto loc_830FA9B4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_830FA9C8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lhz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r8,r9,r21
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r21.s32);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// ble cr6,0x830faad0
	if (!cr6.gt) goto loc_830FAAD0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// std r28,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r28.u64);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x830eab70
	ctx.lr = 0x830FAA2C;
	sub_830EAB70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830faa58
	if (!cr6.eq) goto loc_830FAA58;
	// ld r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x830eb438
	ctx.lr = 0x830FAA3C;
	sub_830EB438(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830faa58
	if (!cr6.eq) goto loc_830FAA58;
	// ld r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lfs f3,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830eb488
	ctx.lr = 0x830FAA58;
	sub_830EB488(ctx, base);
loc_830FAA58:
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x830FAA6C;
	sub_82D0E798(ctx, base);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x825952b8
	ctx.lr = 0x830FAA7C;
	sub_825952B8(ctx, base);
loc_830FAA7C:
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// cmplw cr6,r23,r4
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r4.u32, xer);
	// bne cr6,0x830fa810
	if (!cr6.eq) goto loc_830FA810;
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x830faabc
	if (cr6.eq) goto loc_830FAABC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x830fa750
	ctx.lr = 0x830FAAA4;
	sub_830FA750(ctx, base);
	// addi r5,r24,12
	ctx.r5.s64 = ctx.r24.s64 + 12;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82aff248
	ctx.lr = 0x830FAAB8;
	sub_82AFF248(ctx, base);
	// stw r31,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r31.u32);
loc_830FAABC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_830FAAD0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x830FAADC;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_830FAADC"))) PPC_WEAK_FUNC(sub_830FAADC);
PPC_FUNC_IMPL(__imp__sub_830FAADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FAAE0"))) PPC_WEAK_FUNC(sub_830FAAE0);
PPC_FUNC_IMPL(__imp__sub_830FAAE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830FAAE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-22544
	ctx.r4.s64 = ctx.r10.s64 + -22544;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x830FAB1C;
	sub_8259CC28(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
loc_830FAB24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830fab24
	if (!cr6.eq) goto loc_830FAB24;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830FAB4C;
	sub_8259CC28(ctx, base);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r10,23636
	ctx.r3.s64 = ctx.r10.s64 + 23636;
	// bl 0x82b000a8
	ctx.lr = 0x830FAB60;
	sub_82B000A8(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x830fab80
	if (cr6.lt) goto loc_830FAB80;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830FAB80;
	sub_825952B8(ctx, base);
loc_830FAB80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FAB8C"))) PPC_WEAK_FUNC(sub_830FAB8C);
PPC_FUNC_IMPL(__imp__sub_830FAB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FAB90"))) PPC_WEAK_FUNC(sub_830FAB90);
PPC_FUNC_IMPL(__imp__sub_830FAB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// lis r7,-31751
	ctx.r7.s64 = -2080833536;
	// lis r6,-31751
	ctx.r6.s64 = -2080833536;
	// lfs f0,23684(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23684);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,23684
	ctx.r3.s64 = ctx.r11.s64 + 23684;
	// lfs f11,-21948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21948);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-31751
	ctx.r5.s64 = -2080833536;
	// lfs f8,-21936(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21936);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r10,-21948
	ctx.r11.s64 = ctx.r10.s64 + -21948;
	// lfs f5,23696(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23696);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r9,-21936
	ctx.r10.s64 = ctx.r9.s64 + -21936;
	// stfs f0,23708(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 23708, temp.u32);
	// addi r9,r8,23696
	ctx.r9.s64 = ctx.r8.s64 + 23696;
	// stfs f11,23720(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 23720, temp.u32);
	// addi r8,r7,23708
	ctx.r8.s64 = ctx.r7.s64 + 23708;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-31751
	ctx.r4.s64 = -2080833536;
	// stfs f8,23732(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 23732, temp.u32);
	// addi r7,r6,23720
	ctx.r7.s64 = ctx.r6.s64 + 23720;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r5,23732
	ctx.r6.s64 = ctx.r5.s64 + 23732;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r4,23744
	ctx.r5.s64 = ctx.r4.s64 + 23744;
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f5,23744(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 23744, temp.u32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f10,4(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f9,8(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfs f7,4(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f6,8(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f4,4(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f3,8(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAC38"))) PPC_WEAK_FUNC(sub_830FAC38);
PPC_FUNC_IMPL(__imp__sub_830FAC38) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// addi r10,r11,23708
	ctx.r10.s64 = ctx.r11.s64 + 23708;
	// stfs f1,23708(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 23708, temp.u32);
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// bl 0x830eb340
	ctx.lr = 0x830FAC78;
	sub_830EB340(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAC88"))) PPC_WEAK_FUNC(sub_830FAC88);
PPC_FUNC_IMPL(__imp__sub_830FAC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// lfs f13,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// lfs f11,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// lfs f10,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,23720
	ctx.r9.s64 = ctx.r11.s64 + 23720;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r10,23732
	ctx.r8.s64 = ctx.r10.s64 + 23732;
	// stfs f0,23720(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 23720, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,23732(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 23732, temp.u32);
	// stfs f10,4(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f9,8(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x830eb360
	ctx.lr = 0x830FAD08;
	sub_830EB360(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAD18"))) PPC_WEAK_FUNC(sub_830FAD18);
PPC_FUNC_IMPL(__imp__sub_830FAD18) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// addi r10,r11,23744
	ctx.r10.s64 = ctx.r11.s64 + 23744;
	// stfs f1,23744(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 23744, temp.u32);
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// bl 0x830eb390
	ctx.lr = 0x830FAD58;
	sub_830EB390(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAD68"))) PPC_WEAK_FUNC(sub_830FAD68);
PPC_FUNC_IMPL(__imp__sub_830FAD68) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,-21708
	ctx.r11.s64 = ctx.r11.s64 + -21708;
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x830fad90
	if (cr6.gt) goto loc_830FAD90;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fsel f1,f0,f0,f13
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_830FAD90:
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x830eb3f8
	sub_830EB3F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FAD98"))) PPC_WEAK_FUNC(sub_830FAD98);
PPC_FUNC_IMPL(__imp__sub_830FAD98) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,-21704
	ctx.r11.s64 = ctx.r11.s64 + -21704;
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x830fadc0
	if (cr6.gt) goto loc_830FADC0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fsel f1,f0,f0,f13
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_830FADC0:
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x830eb418
	sub_830EB418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FADC8"))) PPC_WEAK_FUNC(sub_830FADC8);
PPC_FUNC_IMPL(__imp__sub_830FADC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// addi r8,r10,23744
	ctx.r8.s64 = ctx.r10.s64 + 23744;
	// addi r7,r9,23708
	ctx.r7.s64 = ctx.r9.s64 + 23708;
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// lfs f0,23744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23744);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,23708(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23708);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f0,-21708(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -21708);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fadds f3,f13,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f2,f11,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f1,f12,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAE40"))) PPC_WEAK_FUNC(sub_830FAE40);
PPC_FUNC_IMPL(__imp__sub_830FAE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// addi r8,r10,23744
	ctx.r8.s64 = ctx.r10.s64 + 23744;
	// addi r7,r9,23708
	ctx.r7.s64 = ctx.r9.s64 + 23708;
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// lfs f0,23744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23744);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,23708(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23708);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f0,-21704(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -21704);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fadds f3,f13,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f2,f11,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f1,f12,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAEB8"))) PPC_WEAK_FUNC(sub_830FAEB8);
PPC_FUNC_IMPL(__imp__sub_830FAEB8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r8,r10,23684
	ctx.r8.s64 = ctx.r10.s64 + 23684;
	// addi r9,r11,23708
	ctx.r9.s64 = ctx.r11.s64 + 23708;
	// lfs f0,23684(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23684);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stfs f0,23708(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 23708, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f3,8(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x830eb340
	ctx.lr = 0x830FAF24;
	sub_830EB340(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r3,-31751
	ctx.r3.s64 = -2080833536;
	// addi r7,r11,-21948
	ctx.r7.s64 = ctx.r11.s64 + -21948;
	// addi r10,r3,23720
	ctx.r10.s64 = ctx.r3.s64 + 23720;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lfs f0,-21948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21948);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// stfs f0,23720(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 23720, temp.u32);
	// addi r4,r8,-21936
	ctx.r4.s64 = ctx.r8.s64 + -21936;
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r9,23732
	ctx.r6.s64 = ctx.r9.s64 + 23732;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lfs f12,-21936(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -21936);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f10,8(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f12,23732(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 23732, temp.u32);
	// ld r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// rldicr r6,r7,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r4,r8,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830fac88
	ctx.lr = 0x830FAF98;
	sub_830FAC88(ctx, base);
	// lis r6,-31751
	ctx.r6.s64 = -2080833536;
	// lis r5,-31751
	ctx.r5.s64 = -2080833536;
	// addi r4,r6,23744
	ctx.r4.s64 = ctx.r6.s64 + 23744;
	// addi r3,r5,23696
	ctx.r3.s64 = ctx.r5.s64 + 23696;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f0,23696(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 23696);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,23744(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 23744, temp.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,8(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// bl 0x830eb390
	ctx.lr = 0x830FAFF0;
	sub_830EB390(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,-21708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21708);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,9008(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x830fb018
	if (!cr6.gt) goto loc_830FB018;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x830fb01c
	goto loc_830FB01C;
loc_830FB018:
	// fsel f1,f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
loc_830FB01C:
	// stfs f1,-21708(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -21708, temp.u32);
	// bl 0x830eb3f8
	ctx.lr = 0x830FB024;
	sub_830EB3F8(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfs f0,-21704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x830fb03c
	if (!cr6.gt) goto loc_830FB03C;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x830fb040
	goto loc_830FB040;
loc_830FB03C:
	// fsel f1,f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
loc_830FB040:
	// stfs f1,-21704(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -21704, temp.u32);
	// bl 0x830eb418
	ctx.lr = 0x830FB048;
	sub_830EB418(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB060"))) PPC_WEAK_FUNC(sub_830FB060);
PPC_FUNC_IMPL(__imp__sub_830FB060) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r11,23788
	ctx.r3.s64 = ctx.r11.s64 + 23788;
	// bl 0x830fa5a0
	ctx.lr = 0x830FB080;
	sub_830FA5A0(ctx, base);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r31,r10,23880
	ctx.r31.s64 = ctx.r10.s64 + 23880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fa5a0
	ctx.lr = 0x830FB094;
	sub_830FA5A0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x830fa5a0
	ctx.lr = 0x830FB0A0;
	sub_830FA5A0(ctx, base);
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

__attribute__((alias("__imp__sub_830FB0B8"))) PPC_WEAK_FUNC(sub_830FB0B8);
PPC_FUNC_IMPL(__imp__sub_830FB0B8) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830fb0f0
	if (cr6.eq) goto loc_830FB0F0;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r4,r11,23788
	ctx.r4.s64 = ctx.r11.s64 + 23788;
	// bl 0x83096030
	ctx.lr = 0x830FB0DC;
	sub_83096030(ctx, base);
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
loc_830FB0F0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB104"))) PPC_WEAK_FUNC(sub_830FB104);
PPC_FUNC_IMPL(__imp__sub_830FB104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FB108"))) PPC_WEAK_FUNC(sub_830FB108);
PPC_FUNC_IMPL(__imp__sub_830FB108) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830fb140
	if (cr6.eq) goto loc_830FB140;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r4,r11,23880
	ctx.r4.s64 = ctx.r11.s64 + 23880;
	// bl 0x83096030
	ctx.lr = 0x830FB12C;
	sub_83096030(ctx, base);
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
loc_830FB140:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB154"))) PPC_WEAK_FUNC(sub_830FB154);
PPC_FUNC_IMPL(__imp__sub_830FB154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FB158"))) PPC_WEAK_FUNC(sub_830FB158);
PPC_FUNC_IMPL(__imp__sub_830FB158) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830fb194
	if (cr6.eq) goto loc_830FB194;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r11,r11,23880
	ctx.r11.s64 = ctx.r11.s64 + 23880;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x83096030
	ctx.lr = 0x830FB180;
	sub_83096030(ctx, base);
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
loc_830FB194:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB1A8"))) PPC_WEAK_FUNC(sub_830FB1A8);
PPC_FUNC_IMPL(__imp__sub_830FB1A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x83096030
	ctx.lr = 0x830FB1E0;
	sub_83096030(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// bl 0x83096030
	ctx.lr = 0x830FB1EC;
	sub_83096030(ctx, base);
	// lfs f12,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f11,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f10,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f9,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,52(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f8,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,56(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f7,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,60(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f6,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,64(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f5,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,68(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB248"))) PPC_WEAK_FUNC(sub_830FB248);
PPC_FUNC_IMPL(__imp__sub_830FB248) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830963a0
	ctx.lr = 0x830FB260;
	sub_830963A0(ctx, base);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,23808
	ctx.r3.s64 = ctx.r11.s64 + 23808;
	// bl 0x830fb1a8
	ctx.lr = 0x830FB270;
	sub_830FB1A8(ctx, base);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830fb28c
	if (cr6.eq) goto loc_830FB28C;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x830FB28C;
	sub_825952B8(ctx, base);
loc_830FB28C:
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830fb2a4
	if (cr6.eq) goto loc_830FB2A4;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x830FB2A4;
	sub_825952B8(ctx, base);
loc_830FB2A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB2BC"))) PPC_WEAK_FUNC(sub_830FB2BC);
PPC_FUNC_IMPL(__imp__sub_830FB2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FB2C0"))) PPC_WEAK_FUNC(sub_830FB2C0);
PPC_FUNC_IMPL(__imp__sub_830FB2C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830FB2C8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce75c
	ctx.lr = 0x830FB2D0;
	__savefpr_21(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r27,r11,23808
	ctx.r27.s64 = ctx.r11.s64 + 23808;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830fb1a8
	ctx.lr = 0x830FB2E8;
	sub_830FB1A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r25,-32222
	ctx.r25.s64 = -2111700992;
	// lfs f0,64(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f25,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f25.f64 = double(temp.f32);
	// lfs f13,-26260(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x830fb30c
	if (!cr6.lt) goto loc_830FB30C;
	// stfs f25,64(r27)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r27.u32 + 64, temp.u32);
	// b 0x830fb318
	goto loc_830FB318;
loc_830FB30C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x830fb318
	if (!cr6.gt) goto loc_830FB318;
	// stfs f13,64(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 64, temp.u32);
loc_830FB318:
	// lfs f0,68(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x830fb32c
	if (!cr6.lt) goto loc_830FB32C;
	// stfs f25,68(r27)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r27.u32 + 68, temp.u32);
	// b 0x830fb338
	goto loc_830FB338;
loc_830FB32C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x830fb338
	if (!cr6.gt) goto loc_830FB338;
	// stfs f13,68(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 68, temp.u32);
loc_830FB338:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,23788
	ctx.r29.s64 = ctx.r11.s64 + 23788;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,23788(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23788);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83095df8
	ctx.lr = 0x830FB354;
	sub_83095DF8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r11,-27260
	ctx.r26.s64 = ctx.r11.s64 + -27260;
	// li r28,12
	ctx.r28.s64 = 12;
	// addi r11,r26,20
	ctx.r11.s64 = ctx.r26.s64 + 20;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_830FB36C:
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r10,r28
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x830fb610
	if (!cr6.gt) goto loc_830FB610;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// ble cr6,0x830fb61c
	if (!cr6.gt) goto loc_830FB61C;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfsu f0,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82d54828
	ctx.lr = 0x830FB3F0;
	sub_82D54828(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,20
	cr6.compare<uint32_t>(ctx.r31.u32, 20, xer);
	// blt cr6,0x830fb36c
	if (cr6.lt) goto loc_830FB36C;
	// addi r11,r26,40
	ctx.r11.s64 = ctx.r26.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_830FB408:
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r10,r28
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// ble cr6,0x830fb628
	if (!cr6.gt) goto loc_830FB628;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// ble cr6,0x830fb634
	if (!cr6.gt) goto loc_830FB634;
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f10,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f9,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfsu f0,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82d54828
	ctx.lr = 0x830FB48C;
	sub_82D54828(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x830fb408
	if (cr6.lt) goto loc_830FB408;
	// addi r11,r26,64
	ctx.r11.s64 = ctx.r26.s64 + 64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_830FB4A4:
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r10,r28
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// ble cr6,0x830fb640
	if (!cr6.gt) goto loc_830FB640;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// ble cr6,0x830fb64c
	if (!cr6.gt) goto loc_830FB64C;
	// lfs f13,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f10,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lfs f12,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f9,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfsu f0,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82d54828
	ctx.lr = 0x830FB528;
	sub_82D54828(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,20
	cr6.compare<uint32_t>(ctx.r31.u32, 20, xer);
	// blt cr6,0x830fb4a4
	if (cr6.lt) goto loc_830FB4A4;
	// addi r11,r26,84
	ctx.r11.s64 = ctx.r26.s64 + 84;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_830FB540:
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r10,r28
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// ble cr6,0x830fb658
	if (!cr6.gt) goto loc_830FB658;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830fb664
	if (cr6.eq) goto loc_830FB664;
	// lfs f13,84(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f10,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfsu f0,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82d54828
	ctx.lr = 0x830FB5C4;
	sub_82D54828(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x830fb540
	if (cr6.lt) goto loc_830FB540;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f23,-29856(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29856);
	ctx.f23.f64 = double(temp.f32);
	// addi r29,r11,23880
	ctx.r29.s64 = ctx.r11.s64 + 23880;
	// lfs f24,-23844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23844);
	ctx.f24.f64 = double(temp.f32);
	// lfs f22,-23488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23488);
	ctx.f22.f64 = double(temp.f32);
loc_830FB5F4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x830fb670
	if (!cr6.eq) goto loc_830FB670;
	// lfs f0,64(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// b 0x830fb680
	goto loc_830FB680;
loc_830FB610:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x830FB61C;
	sub_831CC188(ctx, base);
loc_830FB61C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x830FB628;
	sub_831CC188(ctx, base);
loc_830FB628:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x830FB634;
	sub_831CC188(ctx, base);
loc_830FB634:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x830FB640;
	sub_831CC188(ctx, base);
loc_830FB640:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x830FB64C;
	sub_831CC188(ctx, base);
loc_830FB64C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x830FB658;
	sub_831CC188(ctx, base);
loc_830FB658:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x830FB664;
	sub_831CC188(ctx, base);
loc_830FB664:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x830FB670;
	sub_831CC188(ctx, base);
loc_830FB670:
	// lfs f0,68(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
loc_830FB680:
	// stfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f31,f0,f22
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// lfs f13,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82a5a8b0
	ctx.lr = 0x830FB6A4;
	sub_82A5A8B0(ctx, base);
	// lfs f28,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lfs f26,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// lfs f27,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// fcmpu cr6,f31,f25
	cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x830fb6c8
	if (!cr6.lt) goto loc_830FB6C8;
	// fadds f29,f31,f0
	ctx.f29.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x830fb6d4
	goto loc_830FB6D4;
loc_830FB6C8:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x830fb6d4
	if (cr6.lt) goto loc_830FB6D4;
	// fsubs f29,f31,f0
	ctx.f29.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
loc_830FB6D4:
	// lfs f2,-26260(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26260);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f29,f24
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f24.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x830FB6E0;
	sub_82A5AA98(ctx, base);
	// fmr f21,f1
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = ctx.f1.f64;
	// lfs f2,-26260(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26260);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x830FB6F0;
	sub_82A5AA98(ctx, base);
	// fmuls f11,f21,f28
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f21.f64 * ctx.f28.f64));
	// fmuls f9,f1,f28
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f26,f30
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f30.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f31,f23
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f23.f64));
	// fmadds f8,f27,f1,f11
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmsubs f6,f27,f21,f9
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f21.f64 - ctx.f9.f64));
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fcmpu cr6,f31,f25
	cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// fmuls f5,f8,f30
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmuls f4,f6,f30
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fsubs f28,f7,f0
	ctx.f28.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f30,f3,f13
	ctx.f30.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fsubs f29,f2,f12
	ctx.f29.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// bge cr6,0x830fb754
	if (!cr6.lt) goto loc_830FB754;
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x830fb760
	goto loc_830FB760;
loc_830FB754:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x830fb760
	if (cr6.lt) goto loc_830FB760;
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
loc_830FB760:
	// lfs f2,-26260(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26260);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f31,f24
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f24.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x830FB76C;
	sub_82A5AA98(ctx, base);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lfs f2,-26260(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26260);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x830FB77C;
	sub_82A5AA98(ctx, base);
	// fmuls f0,f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f9,f1,f30
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f28,f13
	ctx.f10.f64 = double(float(ctx.f28.f64 + ctx.f13.f64));
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmadds f8,f29,f1,f0
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f1.f64 + ctx.f0.f64));
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// fmsubs f7,f29,f27,f9
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f27.f64 - ctx.f9.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// beq cr6,0x830fb80c
	if (cr6.eq) goto loc_830FB80C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x830fb808
	if (cr6.eq) goto loc_830FB808;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_830FB7DC:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bne cr6,0x830fb7dc
	if (!cr6.eq) goto loc_830FB7DC;
loc_830FB808:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_830FB80C:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d54828
	ctx.lr = 0x830FB818;
	sub_82D54828(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d54828
	ctx.lr = 0x830FB824;
	sub_82D54828(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d54828
	ctx.lr = 0x830FB830;
	sub_82D54828(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x830fb5f4
	if (cr6.lt) goto loc_830FB5F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7a8
	ctx.lr = 0x830FB84C;
	__restfpr_21(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FB850"))) PPC_WEAK_FUNC(sub_830FB850);
PPC_FUNC_IMPL(__imp__sub_830FB850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830FB858;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,23944
	ctx.r11.s64 = ctx.r11.s64 + 23944;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// li r29,25
	ctx.r29.s64 = 25;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
loc_830FB874:
	// ld r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830eb1d8
	ctx.lr = 0x830FB880;
	sub_830EB1D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fb8ac
	if (cr6.eq) goto loc_830FB8AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830eb168
	ctx.lr = 0x830FB89C;
	sub_830EB168(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830fb8a8
	if (cr6.eq) goto loc_830FB8A8;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_830FB8A8:
	// std r27,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r27.u64);
loc_830FB8AC:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// bne 0x830fb874
	if (!cr0.eq) goto loc_830FB874;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FB8C4"))) PPC_WEAK_FUNC(sub_830FB8C4);
PPC_FUNC_IMPL(__imp__sub_830FB8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FB8C8"))) PPC_WEAK_FUNC(sub_830FB8C8);
PPC_FUNC_IMPL(__imp__sub_830FB8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lfs f1,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830fb900
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830FB900;
	// bdzf 4*cr6+eq,0x830fb910
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830FB910;
	// bne cr6,0x830fb920
	if (!cr6.eq) goto loc_830FB920;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r10,r11,-26984
	ctx.r10.s64 = ctx.r11.s64 + -26984;
	// lfs f1,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_830FB900:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r10,r11,-26984
	ctx.r10.s64 = ctx.r11.s64 + -26984;
	// lfs f1,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_830FB910:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r10,r11,-26984
	ctx.r10.s64 = ctx.r11.s64 + -26984;
	// lfs f1,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_830FB920:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f1,-26984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26984);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB92C"))) PPC_WEAK_FUNC(sub_830FB92C);
PPC_FUNC_IMPL(__imp__sub_830FB92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FB930"))) PPC_WEAK_FUNC(sub_830FB930);
PPC_FUNC_IMPL(__imp__sub_830FB930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r11,23944
	ctx.r10.s64 = ctx.r11.s64 + 23944;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// addi r10,r10,-28
	ctx.r10.s64 = ctx.r10.s64 + -28;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830FB948:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r8.u32);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// lbz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// stb r7,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, ctx.r7.u8);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r6,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r6.u32);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r5,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r5.u32);
	// lfs f11,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,84(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// lfs f10,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,88(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// lfs f9,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,92(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// lbz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// stb r4,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, ctx.r4.u8);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r3,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r3.u32);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r9,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r9.u32);
	// lfs f8,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,132(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 132, temp.u32);
	// lfs f7,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,136(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 136, temp.u32);
	// lfs f6,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,140(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 140, temp.u32);
	// lbz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// stb r8,144(r10)
	PPC_STORE_U8(ctx.r10.u32 + 144, ctx.r8.u8);
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r7,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r7.u32);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r6,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r6.u32);
	// lfs f5,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,180(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 180, temp.u32);
	// lfs f4,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,184(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 184, temp.u32);
	// lfs f3,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,188(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 188, temp.u32);
	// lbz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// stb r5,192(r10)
	PPC_STORE_U8(ctx.r10.u32 + 192, ctx.r5.u8);
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r4,220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 220, ctx.r4.u32);
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r3,224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 224, ctx.r3.u32);
	// lfs f2,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,228(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 228, temp.u32);
	// lfs f1,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,232(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 232, temp.u32);
	// lfs f0,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 236, temp.u32);
	// lbzu r9,120(r11)
	ea = 120 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,240(r10)
	ea = 240 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x830fb948
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830FB948;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBA44"))) PPC_WEAK_FUNC(sub_830FBA44);
PPC_FUNC_IMPL(__imp__sub_830FBA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FBA48"))) PPC_WEAK_FUNC(sub_830FBA48);
PPC_FUNC_IMPL(__imp__sub_830FBA48) {
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r11,r3,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FFFE;
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,23944
	ctx.r11.s64 = ctx.r8.s64 + 23944;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x830fadc8
	ctx.lr = 0x830FBA98;
	sub_830FADC8(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f6,f11,f11,f8
	ctx.f6.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f8.f64;
	// fsel f5,f9,f9,f7
	ctx.f5.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f7.f64;
	// fadds f0,f5,f6
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// beq cr6,0x830fbad0
	if (cr6.eq) goto loc_830FBAD0;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_830FBAD0:
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fbaf0
	if (cr6.eq) goto loc_830FBAF0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,-27000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27000);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x830fbaf4
	if (cr6.lt) goto loc_830FBAF4;
loc_830FBAF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FBAF4:
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

__attribute__((alias("__imp__sub_830FBB0C"))) PPC_WEAK_FUNC(sub_830FBB0C);
PPC_FUNC_IMPL(__imp__sub_830FBB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FBB10"))) PPC_WEAK_FUNC(sub_830FBB10);
PPC_FUNC_IMPL(__imp__sub_830FBB10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830FBB18;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// bl 0x830f1ae0
	ctx.lr = 0x830FBB30;
	sub_830F1AE0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r27,r11,25144
	ctx.r27.s64 = ctx.r11.s64 + 25144;
	// beq cr6,0x830fbb58
	if (cr6.eq) goto loc_830FBB58;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,23914
	ctx.r31.s64 = ctx.r10.s64 + 23914;
	// stb r11,23914(r10)
	PPC_STORE_U8(ctx.r10.u32 + 23914, ctx.r11.u8);
	// b 0x830fbb84
	goto loc_830FBB84;
loc_830FBB58:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r31,r11,23914
	ctx.r31.s64 = ctx.r11.s64 + 23914;
	// lbz r11,23914(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23914);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fbb84
	if (cr6.eq) goto loc_830FBB84;
	// bl 0x830fb850
	ctx.lr = 0x830FBB70;
	sub_830FB850(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cd1830
	ctx.lr = 0x830FBB7C;
	sub_82CD1830(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stb r23,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
loc_830FBB84:
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// lbz r10,23915(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23915);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830fbbb4
	if (cr6.eq) goto loc_830FBBB4;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830fbbb4
	if (!cr6.eq) goto loc_830FBBB4;
	// bl 0x830fb850
	ctx.lr = 0x830FBBA4;
	sub_830FB850(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cd1830
	ctx.lr = 0x830FBBB0;
	sub_82CD1830(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
loc_830FBBB4:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// stb r29,23915(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23915, ctx.r29.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830fbe3c
	if (cr6.eq) goto loc_830FBE3C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fbe3c
	if (cr6.eq) goto loc_830FBE3C;
	// lis r24,-31751
	ctx.r24.s64 = -2080833536;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r25,r11,23944
	ctx.r25.s64 = ctx.r11.s64 + 23944;
	// lhz r30,23912(r24)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r24.u32 + 23912);
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830fbc48
	if (cr6.eq) goto loc_830FBC48;
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stb r23,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r23.u8);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, xer);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// beq cr6,0x830fbc48
	if (cr6.eq) goto loc_830FBC48;
loc_830FBC18:
	// lhz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x830fbc3c
	if (cr6.eq) goto loc_830FBC3C;
	// bl 0x8330ee50
	ctx.lr = 0x830FBC2C;
	sub_8330EE50(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, xer);
	// bne cr6,0x830fbc18
	if (!cr6.eq) goto loc_830FBC18;
	// b 0x830fbc48
	goto loc_830FBC48;
loc_830FBC3C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d0e3c8
	ctx.lr = 0x830FBC44;
	sub_82D0E3C8(ctx, base);
	// lhz r30,23912(r24)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r24.u32 + 23912);
loc_830FBC48:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fba48
	ctx.lr = 0x830FBC54;
	sub_830FBA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fbc90
	if (cr6.eq) goto loc_830FBC90;
	// lhz r11,23912(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 23912);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stb r10,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r10.u8);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// bl 0x830fa690
	ctx.lr = 0x830FBC8C;
	sub_830FA690(ctx, base);
	// b 0x830fbcbc
	goto loc_830FBCBC;
loc_830FBC90:
	// ld r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830eb1d8
	ctx.lr = 0x830FBC9C;
	sub_830EB1D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fbcbc
	if (cr6.eq) goto loc_830FBCBC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830eb168
	ctx.lr = 0x830FBCB8;
	sub_830EB168(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_830FBCBC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x830fbe18
	if (cr6.eq) goto loc_830FBE18;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r28,r11,-21320
	ctx.r28.s64 = ctx.r11.s64 + -21320;
loc_830FBCDC:
	// lhz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// ld r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// bge cr6,0x830fbdc8
	if (!cr6.lt) goto loc_830FBDC8;
	// bl 0x830eb1d8
	ctx.lr = 0x830FBD04;
	sub_830EB1D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fbd50
	if (cr6.eq) goto loc_830FBD50;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830fb8c8
	ctx.lr = 0x830FBD18;
	sub_830FB8C8(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x830fbda0
	if (cr6.eq) goto loc_830FBDA0;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r6,700
	ctx.r6.s64 = 700;
	// bgt cr6,0x830fbd38
	if (cr6.gt) goto loc_830FBD38;
	// li r6,1000
	ctx.r6.s64 = 1000;
loc_830FBD38:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x830eb298
	ctx.lr = 0x830FBD48;
	sub_830EB298(ctx, base);
	// stfs f31,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// b 0x830fbda0
	goto loc_830FBDA0;
loc_830FBD50:
	// std r23,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r23.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x830eab70
	ctx.lr = 0x830FBD70;
	sub_830EAB70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830fbda0
	if (!cr6.eq) goto loc_830FBDA0;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r3,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r3.u64);
	// bl 0x830eb438
	ctx.lr = 0x830FBD84;
	sub_830EB438(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830fb8c8
	ctx.lr = 0x830FBD8C;
	sub_830FB8C8(ctx, base);
	// stfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// li r6,700
	ctx.r6.s64 = 700;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x830eb298
	ctx.lr = 0x830FBDA0;
	sub_830EB298(ctx, base);
loc_830FBDA0:
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfs f2,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x830eb488
	ctx.lr = 0x830FBDB4;
	sub_830EB488(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x830FBDC0;
	sub_8330EE50(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x830fbe08
	goto loc_830FBE08;
loc_830FBDC8:
	// bl 0x830eb1d8
	ctx.lr = 0x830FBDCC;
	sub_830EB1D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fbdec
	if (cr6.eq) goto loc_830FBDEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eb168
	ctx.lr = 0x830FBDE8;
	sub_830EB168(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_830FBDEC:
	// stb r23,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r23.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x830FBDF8;
	sub_8330EE50(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d0e3c8
	ctx.lr = 0x830FBE08;
	sub_82D0E3C8(ctx, base);
loc_830FBE08:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x830fbcdc
	if (!cr6.eq) goto loc_830FBCDC;
loc_830FBE18:
	// lhz r11,23912(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 23912);
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r10,34079
	ctx.r9.u64 = ctx.r10.u64 | 34079;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r7,r8,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r6,r7,25
	ctx.r6.s64 = ctx.r7.s64 * 25;
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// sth r5,23912(r24)
	PPC_STORE_U16(ctx.r24.u32 + 23912, ctx.r5.u16);
loc_830FBE3C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FBE4C"))) PPC_WEAK_FUNC(sub_830FBE4C);
PPC_FUNC_IMPL(__imp__sub_830FBE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FBE50"))) PPC_WEAK_FUNC(sub_830FBE50);
PPC_FUNC_IMPL(__imp__sub_830FBE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBE58"))) PPC_WEAK_FUNC(sub_830FBE58);
PPC_FUNC_IMPL(__imp__sub_830FBE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lfs f1,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f1,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBE84"))) PPC_WEAK_FUNC(sub_830FBE84);
PPC_FUNC_IMPL(__imp__sub_830FBE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FBE88"))) PPC_WEAK_FUNC(sub_830FBE88);
PPC_FUNC_IMPL(__imp__sub_830FBE88) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lfs f1,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x830fc05c
	if (cr6.eq) goto loc_830FC05C;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r9,r4,32
	ctx.r9.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// bgt cr6,0x830fc060
	if (cr6.gt) goto loc_830FC060;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830fbf40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830FBF40;
	// bdzf 4*cr6+eq,0x830fbf6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830FBF6C;
	// bdzf 4*cr6+eq,0x830fbf9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830FBF9C;
	// bdzf 4*cr6+eq,0x830fbfd0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830FBFD0;
	// bne cr6,0x830fc00c
	if (!cr6.eq) goto loc_830FC00C;
	// lfs f13,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f1,f11,f0,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
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
loc_830FBF40:
	// lfs f13,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f1,f9,f0,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
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
loc_830FBF6C:
	// lfs f13,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f1,f8,f0,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
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
loc_830FBF9C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fnmsubs f1,f9,f10,f12
	ctx.f1.f64 = double(float(-(ctx.f9.f64 * ctx.f10.f64 - ctx.f12.f64)));
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
loc_830FBFD0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fnmsubs f1,f7,f10,f12
	ctx.f1.f64 = double(float(-(ctx.f7.f64 * ctx.f10.f64 - ctx.f12.f64)));
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
loc_830FC00C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,-6672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6672);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-26940(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26940);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f1,f0,f13,f12
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// bl 0x831d1af0
	ctx.lr = 0x830FC024;
	sub_831D1AF0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f12,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f0,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fadds f1,f8,f12
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
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
loc_830FC05C:
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
loc_830FC060:
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

__attribute__((alias("__imp__sub_830FC074"))) PPC_WEAK_FUNC(sub_830FC074);
PPC_FUNC_IMPL(__imp__sub_830FC074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC078"))) PPC_WEAK_FUNC(sub_830FC078);
PPC_FUNC_IMPL(__imp__sub_830FC078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addic. r31,r3,128
	xer.ca = ctx.r3.u32 > 4294967167;
	ctx.r31.s64 = ctx.r3.s64 + 128;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x830fc0b8
	if (cr0.eq) goto loc_830FC0B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830FC0B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830FC0B8:
	// stfs f31,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stfs f31,100(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// beq cr6,0x830fc0dc
	if (cr6.eq) goto loc_830FC0DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830FC0DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830FC0DC:
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

__attribute__((alias("__imp__sub_830FC0FC"))) PPC_WEAK_FUNC(sub_830FC0FC);
PPC_FUNC_IMPL(__imp__sub_830FC0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC100"))) PPC_WEAK_FUNC(sub_830FC100);
PPC_FUNC_IMPL(__imp__sub_830FC100) {
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
	ctx.lr = 0x830FC108;
	__savegprlr_27(ctx, base);
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
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// ble cr6,0x830fc130
	if (!cr6.gt) goto loc_830FC130;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830FC130:
	// addic. r27,r31,128
	xer.ca = ctx.r31.u32 > 4294967167;
	ctx.r27.s64 = ctx.r31.s64 + 128;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x830fc150
	if (cr0.eq) goto loc_830FC150;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830FC150;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830FC150:
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// blt cr6,0x830fc240
	if (cr6.lt) goto loc_830FC240;
	// addi r4,r29,-3
	ctx.r4.s64 = ctx.r29.s64 + -3;
	// addi r10,r30,-8
	ctx.r10.s64 = ctx.r30.s64 + -8;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// subf r7,r31,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r31.s64;
loc_830FC17C:
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// stw r5,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// divwu r6,r3,r8
	ctx.r6.u32 = PPCDivide(ctx.r3.u32, ctx.r8.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r5,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r5.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r6,28(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// divwu r5,r6,r8
	ctx.r5.u32 = PPCDivide(ctx.r6.u32, ctx.r8.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lfs f13,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// divwu r3,r5,r8
	ctx.r3.u32 = PPCDivide(ctx.r5.u32, ctx.r8.u32);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// lfs f12,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// rotlwi r5,r3,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// lwz r5,44(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// lwz r3,52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// divwu r6,r3,r8
	ctx.r6.u32 = PPCDivide(ctx.r3.u32, ctx.r8.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lfsu f0,48(r10)
	ea = 48 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r5,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r5.u32);
	// blt cr6,0x830fc17c
	if (cr6.lt) goto loc_830FC17C;
loc_830FC240:
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// bge cr6,0x830fc2a8
	if (!cr6.lt) goto loc_830FC2A8;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r9,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r9.s64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_830FC270:
	// lwzu r7,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// divwu r6,r7,r8
	ctx.r6.u32 = PPCDivide(ctx.r7.u32, ctx.r8.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r5,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r5.u32);
	// bdnz 0x830fc270
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830FC270;
loc_830FC2A8:
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x830fc2d4
	if (cr6.eq) goto loc_830FC2D4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830FC2D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830FC2D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FC2E0"))) PPC_WEAK_FUNC(sub_830FC2E0);
PPC_FUNC_IMPL(__imp__sub_830FC2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r30,r3,128
	xer.ca = ctx.r3.u32 > 4294967167;
	ctx.r30.s64 = ctx.r3.s64 + 128;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x830fc318
	if (cr0.eq) goto loc_830FC318;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830FC318;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830FC318:
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830fc3c8
	if (cr6.eq) goto loc_830FC3C8;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r4,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r4.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x830fc370
	if (cr6.lt) goto loc_830FC370;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// b 0x830fc3c4
	goto loc_830FC3C4;
loc_830FC370:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fbe88
	ctx.lr = 0x830FC378;
	sub_830FBE88(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stfs f1,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x830fc3c8
	if (cr6.lt) goto loc_830FC3C8;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x830fc3c0
	if (cr6.lt) goto loc_830FC3C0;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x830fc3c4
	goto loc_830FC3C4;
loc_830FC3C0:
	// stfs f1,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
loc_830FC3C4:
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_830FC3C8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830fc3e4
	if (cr6.eq) goto loc_830FC3E4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830FC3E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830FC3E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC400"))) PPC_WEAK_FUNC(sub_830FC400);
PPC_FUNC_IMPL(__imp__sub_830FC400) {
	PPC_FUNC_PROLOGUE();
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
	// lfs f1,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830fc078
	ctx.lr = 0x830FC41C;
	sub_830FC078(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x830fc100
	ctx.lr = 0x830FC444;
	sub_830FC100(ctx, base);
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

__attribute__((alias("__imp__sub_830FC45C"))) PPC_WEAK_FUNC(sub_830FC45C);
PPC_FUNC_IMPL(__imp__sub_830FC45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC460"))) PPC_WEAK_FUNC(sub_830FC460);
PPC_FUNC_IMPL(__imp__sub_830FC460) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-26452
	ctx.r10.s64 = ctx.r11.s64 + -26452;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// bl 0x830fe360
	ctx.lr = 0x830FC494;
	sub_830FE360(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r31,92
	ctx.r10.s64 = ctx.r31.s64 + 92;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830FC4A4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830fc4a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830FC4A4;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830FC4C8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830fc4c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830FC4C8;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// stb r9,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC500"))) PPC_WEAK_FUNC(sub_830FC500);
PPC_FUNC_IMPL(__imp__sub_830FC500) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC514"))) PPC_WEAK_FUNC(sub_830FC514);
PPC_FUNC_IMPL(__imp__sub_830FC514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC518"))) PPC_WEAK_FUNC(sub_830FC518);
PPC_FUNC_IMPL(__imp__sub_830FC518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830FC520;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830fc540
	if (!cr6.eq) goto loc_830FC540;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830FC540:
	// bl 0x830fde20
	ctx.lr = 0x830FC544;
	sub_830FDE20(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x830fc664
	if (cr6.gt) goto loc_830FC664;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830fc5e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830FC5E4;
	// bdzf 4*cr6+eq,0x830fc654
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830FC654;
	// bdzf 4*cr6+eq,0x830fc5e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830FC5E4;
	// bne cr6,0x830fc654
	if (!cr6.eq) goto loc_830FC654;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x830fd860
	ctx.lr = 0x830FC57C;
	sub_830FD860(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830fc5d0
	if (!cr6.eq) goto loc_830FC5D0;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830fc5b8
	if (!cr6.eq) goto loc_830FC5B8;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fc5b8
	if (cr6.eq) goto loc_830FC5B8;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fe3a8
	ctx.lr = 0x830FC5B0;
	sub_830FE3A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fe3b0
	ctx.lr = 0x830FC5B8;
	sub_830FE3B0(ctx, base);
loc_830FC5B8:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830FC5D0:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830FC5E4:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x830fc7b8
	ctx.lr = 0x830FC5EC;
	sub_830FC7B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fc618
	if (cr6.eq) goto loc_830FC618;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830fc664
	if (!cr6.eq) goto loc_830FC664;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830fe3e0
	ctx.lr = 0x830FC60C;
	sub_830FE3E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fc664
	if (cr6.eq) goto loc_830FC664;
loc_830FC618:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830fc640
	if (!cr6.eq) goto loc_830FC640;
	// li r5,3000
	ctx.r5.s64 = 3000;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830fd890
	ctx.lr = 0x830FC634;
	sub_830FD890(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830fc664
	if (!cr6.eq) goto loc_830FC664;
loc_830FC640:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830FC654:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_830FC664:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FC670"))) PPC_WEAK_FUNC(sub_830FC670);
PPC_FUNC_IMPL(__imp__sub_830FC670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r4,15
	cr6.compare<uint32_t>(ctx.r4.u32, 15, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r5.u32);
	// stw r6,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r6.u32);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC6C0"))) PPC_WEAK_FUNC(sub_830FC6C0);
PPC_FUNC_IMPL(__imp__sub_830FC6C0) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fc6fc
	if (cr6.eq) goto loc_830FC6FC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830fd890
	ctx.lr = 0x830FC6EC;
	sub_830FD890(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830fc6fc
	if (!cr6.eq) goto loc_830FC6FC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_830FC6FC:
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

__attribute__((alias("__imp__sub_830FC710"))) PPC_WEAK_FUNC(sub_830FC710);
PPC_FUNC_IMPL(__imp__sub_830FC710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r4,15
	cr6.compare<uint32_t>(ctx.r4.u32, 15, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x830fda50
	sub_830FDA50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FC744"))) PPC_WEAK_FUNC(sub_830FC744);
PPC_FUNC_IMPL(__imp__sub_830FC744) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC748"))) PPC_WEAK_FUNC(sub_830FC748);
PPC_FUNC_IMPL(__imp__sub_830FC748) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x830f3400
	ctx.lr = 0x830FC79C;
	sub_830F3400(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_830FC7B8"))) PPC_WEAK_FUNC(sub_830FC7B8);
PPC_FUNC_IMPL(__imp__sub_830FC7B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x830fc7d0
	if (cr6.eq) goto loc_830FC7D0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_830FC7D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC7D8"))) PPC_WEAK_FUNC(sub_830FC7D8);
PPC_FUNC_IMPL(__imp__sub_830FC7D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,15
	cr6.compare<uint32_t>(ctx.r4.u32, 15, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC804"))) PPC_WEAK_FUNC(sub_830FC804);
PPC_FUNC_IMPL(__imp__sub_830FC804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC808"))) PPC_WEAK_FUNC(sub_830FC808);
PPC_FUNC_IMPL(__imp__sub_830FC808) {
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
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830fc878
	if (cr6.eq) goto loc_830FC878;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830FC848;
	sub_82595150(ctx, base);
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830fc868
	if (cr6.eq) goto loc_830FC868;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830FC868;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830FC868:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830FC870;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_830FC878:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC894"))) PPC_WEAK_FUNC(sub_830FC894);
PPC_FUNC_IMPL(__imp__sub_830FC894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FC898"))) PPC_WEAK_FUNC(sub_830FC898);
PPC_FUNC_IMPL(__imp__sub_830FC898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830FC8A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,-26452
	ctx.r10.s64 = ctx.r11.s64 + -26452;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r29,24
	ctx.r29.s64 = 24;
	// li r27,0
	ctx.r27.s64 = 0;
loc_830FC8C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fc90c
	if (cr6.eq) goto loc_830FC90C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830FC8E0;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830fc900
	if (cr6.eq) goto loc_830FC900;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830FC900;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830FC900:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830FC908;
	sub_82595170(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_830FC90C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x830fc8c4
	if (!cr0.eq) goto loc_830FC8C4;
	// addi r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x830FC920;
	sub_83102DB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FC928"))) PPC_WEAK_FUNC(sub_830FC928);
PPC_FUNC_IMPL(__imp__sub_830FC928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830FC930;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,15
	cr6.compare<uint32_t>(ctx.r4.u32, 15, xer);
	// bge cr6,0x830fc9dc
	if (!cr6.lt) goto loc_830FC9DC;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplwi cr6,r7,32
	cr6.compare<uint32_t>(ctx.r7.u32, 32, xer);
	// bge cr6,0x830fc9dc
	if (!cr6.lt) goto loc_830FC9DC;
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fc980
	if (cr6.eq) goto loc_830FC980;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x830fc9dc
	if (cr6.eq) goto loc_830FC9DC;
loc_830FC980:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fc808
	ctx.lr = 0x830FC988;
	sub_830FC808(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830fc9e0
	if (!cr6.eq) goto loc_830FC9E0;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830FC9A8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830fc9bc
	if (cr6.eq) goto loc_830FC9BC;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x830fd9a8
	ctx.lr = 0x830FC9B8;
	sub_830FD9A8(ctx, base);
	// b 0x830fc9c0
	goto loc_830FC9C0;
loc_830FC9BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830FC9C0:
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830fc9dc
	if (cr6.eq) goto loc_830FC9DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830fdca0
	ctx.lr = 0x830FC9D4;
	sub_830FDCA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830FC9DC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830FC9E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FC9E8"))) PPC_WEAK_FUNC(sub_830FC9E8);
PPC_FUNC_IMPL(__imp__sub_830FC9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,15
	cr6.compare<uint32_t>(ctx.r4.u32, 15, xer);
	// blt cr6,0x830fc9f8
	if (cr6.lt) goto loc_830FC9F8;
loc_830FC9F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_830FC9F8:
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fca18
	if (cr6.eq) goto loc_830FCA18;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x830fc9f0
	if (cr6.eq) goto loc_830FC9F0;
loc_830FCA18:
	// b 0x830fc808
	sub_830FC808(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FCA1C"))) PPC_WEAK_FUNC(sub_830FCA1C);
PPC_FUNC_IMPL(__imp__sub_830FCA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FCA20"))) PPC_WEAK_FUNC(sub_830FCA20);
PPC_FUNC_IMPL(__imp__sub_830FCA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830FCA28;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r27,24
	ctx.r27.s64 = 24;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830FCA40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fca88
	if (cr6.eq) goto loc_830FCA88;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830FCA5C;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830fca7c
	if (cr6.eq) goto loc_830FCA7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830FCA7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830FCA7C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830FCA84;
	sub_82595170(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_830FCA88:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x830fca40
	if (!cr0.eq) goto loc_830FCA40;
	// stw r29,116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 116, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// stb r29,128(r28)
	PPC_STORE_U8(ctx.r28.u32 + 128, ctx.r29.u8);
	// stw r29,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FCAB0"))) PPC_WEAK_FUNC(sub_830FCAB0);
PPC_FUNC_IMPL(__imp__sub_830FCAB0) {
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
	// bl 0x830fc898
	ctx.lr = 0x830FCAD0;
	sub_830FC898(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fcae8
	if (cr6.eq) goto loc_830FCAE8;
	// bl 0x82416268
	ctx.lr = 0x830FCAE4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830FCAE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCB00"))) PPC_WEAK_FUNC(sub_830FCB00);
PPC_FUNC_IMPL(__imp__sub_830FCB00) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832e2b70
	ctx.lr = 0x830FCB1C;
	sub_832E2B70(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830fcb34
	if (!cr6.eq) goto loc_830FCB34;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
loc_830FCB34:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x832d37a0
	ctx.lr = 0x830FCB3C;
	sub_832D37A0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_830FCB5C"))) PPC_WEAK_FUNC(sub_830FCB5C);
PPC_FUNC_IMPL(__imp__sub_830FCB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FCB60"))) PPC_WEAK_FUNC(sub_830FCB60);
PPC_FUNC_IMPL(__imp__sub_830FCB60) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fcb9c
	if (cr6.eq) goto loc_830FCB9C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832d3798
	ctx.lr = 0x830FCB8C;
	sub_832D3798(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_830FCB9C:
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

__attribute__((alias("__imp__sub_830FCBB0"))) PPC_WEAK_FUNC(sub_830FCBB0);
PPC_FUNC_IMPL(__imp__sub_830FCBB0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830fcc18
	if (cr6.eq) goto loc_830FCC18;
	// lis r11,2560
	ctx.r11.s64 = 167772160;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ori r31,r11,3
	ctx.r31.u64 = ctx.r11.u64 | 3;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83d756cc
	ctx.lr = 0x830FCBEC;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x830fcc1c
	if (cr6.eq) goto loc_830FCC1C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x830fcc1c
	if (!cr6.eq) goto loc_830FCC1C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r9.u8);
	// b 0x830fcc1c
	goto loc_830FCC1C;
loc_830FCC18:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830FCC1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCC34"))) PPC_WEAK_FUNC(sub_830FCC34);
PPC_FUNC_IMPL(__imp__sub_830FCC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830FCC38"))) PPC_WEAK_FUNC(sub_830FCC38);
PPC_FUNC_IMPL(__imp__sub_830FCC38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCC50"))) PPC_WEAK_FUNC(sub_830FCC50);
PPC_FUNC_IMPL(__imp__sub_830FCC50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCC68"))) PPC_WEAK_FUNC(sub_830FCC68);
PPC_FUNC_IMPL(__imp__sub_830FCC68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// li r5,2072
	ctx.r5.s64 = 2072;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831ce980
	ctx.lr = 0x830FCC88;
	sub_831CE980(ctx, base);
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_830FCCA8"))) PPC_WEAK_FUNC(sub_830FCCA8);
PPC_FUNC_IMPL(__imp__sub_830FCCA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830fcd10
	if (cr6.eq) goto loc_830FCD10;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-26040
	ctx.r3.s64 = ctx.r10.s64 + -26040;
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x835d5a50
	ctx.lr = 0x830FCCE8;
	sub_835D5A50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830fcd04
	if (!cr6.eq) goto loc_830FCD04;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-27732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x830fcd10
	if (!cr6.gt) goto loc_830FCD10;
loc_830FCD04:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r30.u32);
	// stw r11,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r11.u32);
loc_830FCD10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCD28"))) PPC_WEAK_FUNC(sub_830FCD28);
PPC_FUNC_IMPL(__imp__sub_830FCD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830FCD30;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830fce38
	if (cr6.eq) goto loc_830FCE38;
	// addi r11,r29,66
	ctx.r11.s64 = ctx.r29.s64 + 66;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_830FCD54:
	// sthu r3,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x830fcd54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830FCD54;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830fe1b0
	ctx.lr = 0x830FCD64;
	sub_830FE1B0(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x830FCD68;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x830FCD6C;
	sub_83524138(ctx, base);
	// rotlwi r5,r3,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826501d8
	ctx.lr = 0x830FCD7C;
	sub_826501D8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830fce28
	if (cr6.eq) goto loc_830FCE28;
loc_830FCD88:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830fcde4
	if (cr6.lt) goto loc_830FCDE4;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, xer);
	// bge cr6,0x830fcde4
	if (!cr6.lt) goto loc_830FCDE4;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// ble cr6,0x830fcdfc
	if (!cr6.gt) goto loc_830FCDFC;
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830fe218
	ctx.lr = 0x830FCDB0;
	sub_830FE218(ctx, base);
loc_830FCDB0:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// twllei r31,0
	// divwu r10,r11,r31
	ctx.r10.u32 = PPCDivide(ctx.r11.u32, ctx.r31.u32);
	// mullw r9,r10,r31
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// subf r3,r9,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// beq cr6,0x830fcdb0
	if (cr6.eq) goto loc_830FCDB0;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r10,82(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 82);
	// cmplwi cr6,r10,32768
	cr6.compare<uint32_t>(ctx.r10.u32, 32768, xer);
	// bge cr6,0x830fcdfc
	if (!cr6.lt) goto loc_830FCDFC;
	// b 0x830fcdb0
	goto loc_830FCDB0;
loc_830FCDE4:
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x830fcdfc
	if (!cr6.lt) goto loc_830FCDFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830fe218
	ctx.lr = 0x830FCDFC;
	sub_830FE218(ctx, base);
loc_830FCDFC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x830fce0c
	if (!cr6.eq) goto loc_830FCE0C;
	// stw r3,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r3.u32);
	// b 0x830fce18
	goto loc_830FCE18;
loc_830FCE0C:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r3,82(r9)
	PPC_STORE_U16(ctx.r9.u32 + 82, ctx.r3.u16);
loc_830FCE18:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, xer);
	// blt cr6,0x830fcd88
	if (cr6.lt) goto loc_830FCD88;
loc_830FCE28:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830fe208
	ctx.lr = 0x830FCE34;
	sub_830FE208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830FCE38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FCE40"))) PPC_WEAK_FUNC(sub_830FCE40);
PPC_FUNC_IMPL(__imp__sub_830FCE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830FCE48;
	__savegprlr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r24,r3,2120
	ctx.r24.s64 = ctx.r3.s64 + 2120;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// ld r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// std r9,2136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 2136, ctx.r9.u64);
	// std r7,2128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 2128, ctx.r7.u64);
	// std r8,2120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 2120, ctx.r8.u64);
	// bgt cr6,0x830fd1f4
	if (cr6.gt) goto loc_830FD1F4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830fcf28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830FCF28;
	// bdzf 4*cr6+eq,0x830fd020
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830FD020;
	// bdzf 4*cr6+eq,0x830fd0d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830FD0D4;
	// bdzf 4*cr6+eq,0x830fd170
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830FD170;
	// bdzf 4*cr6+eq,0x830fd18c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830FD18C;
	// bne cr6,0x830fd1cc
	if (!cr6.eq) goto loc_830FD1CC;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830fcf0c
	if (cr6.lt) goto loc_830FCF0C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x830fcf0c
	if (!cr6.lt) goto loc_830FCF0C;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,82(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 82);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830fcf14
	if (cr6.lt) goto loc_830FCF14;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x830fcf1c
	goto loc_830FCF1C;
loc_830FCF0C:
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
loc_830FCF14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fcd28
	ctx.lr = 0x830FCF1C;
	sub_830FCD28(ctx, base);
loc_830FCF1C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_830FCF28:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830fd1f0
	if (cr6.lt) goto loc_830FD1F0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r28,72(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// sth r30,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r30.u16);
	// sth r30,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r30.u16);
	// sth r30,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r30.u16);
	// bl 0x830f9a98
	ctx.lr = 0x830FCF6C;
	sub_830F9A98(ctx, base);
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// lbz r30,84(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 84);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x830fcfd4
	if (!cr6.eq) goto loc_830FCFD4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fcf9c
	if (cr6.eq) goto loc_830FCF9C;
	// lbz r11,70(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 70);
	// lwz r26,36(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fcf9c
	if (cr6.eq) goto loc_830FCF9C;
	// lwz r25,112(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_830FCF9C:
	// lhz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r11,76(r29)
	PPC_STORE_U16(ctx.r29.u32 + 76, ctx.r11.u16);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// sth r10,78(r29)
	PPC_STORE_U16(ctx.r29.u32 + 78, ctx.r10.u16);
	// lhz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// sth r9,80(r29)
	PPC_STORE_U16(ctx.r29.u32 + 80, ctx.r9.u16);
	// bl 0x835d5a08
	ctx.lr = 0x830FCFC0;
	sub_835D5A08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830fcfe8
	if (!cr6.eq) goto loc_830FCFE8;
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// b 0x830fcfe8
	goto loc_830FCFE8;
loc_830FCFD4:
	// li r4,5000
	ctx.r4.s64 = 5000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fe3a8
	ctx.lr = 0x830FCFE0;
	sub_830FE3A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fe3b0
	ctx.lr = 0x830FCFE8;
	sub_830FE3B0(ctx, base);
loc_830FCFE8:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830eaf60
	ctx.lr = 0x830FD000;
	sub_830EAF60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830fd1f4
	if (!cr6.eq) goto loc_830FD1F4;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stb r10,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r10.u8);
	// b 0x830fd1f4
	goto loc_830FD1F4;
loc_830FD020:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ld r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x830eb1d8
	ctx.lr = 0x830FD034;
	sub_830EB1D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lbz r27,84(r29)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r29.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830fd088
	if (cr6.eq) goto loc_830FD088;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// beq cr6,0x830fd088
	if (cr6.eq) goto loc_830FD088;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// bl 0x835d5a20
	ctx.lr = 0x830FD060;
	sub_835D5A20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830fd088
	if (!cr6.eq) goto loc_830FD088;
	// lhz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 76);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpd cr6,r7,r8
	cr6.compare<int64_t>(ctx.r7.s64, ctx.r8.s64, xer);
	// bgt cr6,0x830fd088
	if (cr6.gt) goto loc_830FD088;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_830FD088:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fd0cc
	if (cr6.eq) goto loc_830FD0CC;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fd1f4
	if (cr6.eq) goto loc_830FD1F4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830fd0b8
	if (!cr6.eq) goto loc_830FD0B8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// ble cr6,0x830fd1f4
	if (!cr6.gt) goto loc_830FD1F4;
loc_830FD0B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x830fcca8
	ctx.lr = 0x830FD0C4;
	sub_830FCCA8(ctx, base);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// b 0x830fd1f4
	goto loc_830FD1F4;
loc_830FD0CC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_830FD0D4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,78(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 78);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// bl 0x830eb168
	ctx.lr = 0x830FD0F4;
	sub_830EB168(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r9.u32);
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// lbz r8,84(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 84);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830fd150
	if (cr6.eq) goto loc_830FD150;
	// bl 0x830fe3e0
	ctx.lr = 0x830FD118;
	sub_830FE3E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fd130
	if (cr6.eq) goto loc_830FD130;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x830fd1f4
	goto loc_830FD1F4;
loc_830FD130:
	// li r4,2000
	ctx.r4.s64 = 2000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fe3a8
	ctx.lr = 0x830FD13C;
	sub_830FE3A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fe3b0
	ctx.lr = 0x830FD144;
	sub_830FE3B0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x830fd1f4
	goto loc_830FD1F4;
loc_830FD150:
	// lhz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 80);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x830fe3a8
	ctx.lr = 0x830FD15C;
	sub_830FE3A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fe3b0
	ctx.lr = 0x830FD164;
	sub_830FE3B0(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// b 0x830fd1f4
	goto loc_830FD1F4;
loc_830FD170:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fe3e0
	ctx.lr = 0x830FD178;
	sub_830FE3E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830fd1f4
	if (cr6.eq) goto loc_830FD1F4;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_830FD18C:
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,82(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 82);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x830fd1bc
	if (!cr6.lt) goto loc_830FD1BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fcd28
	ctx.lr = 0x830FD1B0;
	sub_830FCD28(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x830fd1f4
	goto loc_830FD1F4;
loc_830FD1BC:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x830fd1f4
	goto loc_830FD1F4;
loc_830FD1CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ld r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// bl 0x830eb168
	ctx.lr = 0x830FD1DC;
	sub_830EB168(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// stw r30,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r30.u32);
	// stw r11,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r11.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_830FD1F0:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_830FD1F4:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// std r11,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r11.u64);
	// stw r10,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r10.u32);
	// stw r9,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r9.u32);
	// beq cr6,0x830fd230
	if (cr6.eq) goto loc_830FD230;
	// std r11,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r11.u64);
	// ld r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// std r10,8(r23)
	PPC_STORE_U64(ctx.r23.u32 + 8, ctx.r10.u64);
	// ld r9,16(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// std r9,16(r23)
	PPC_STORE_U64(ctx.r23.u32 + 16, ctx.r9.u64);
loc_830FD230:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830FD238"))) PPC_WEAK_FUNC(sub_830FD238);
PPC_FUNC_IMPL(__imp__sub_830FD238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpld cr6,r10,r4
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r4,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r4.u64);
	// stb r3,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FD25C"))) PPC_WEAK_FUNC(sub_830FD25C);
PPC_FUNC_IMPL(__imp__sub_830FD25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

