#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83AC1D88"))) PPC_WEAK_FUNC(sub_83AC1D88);
PPC_FUNC_IMPL(__imp__sub_83AC1D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AC1D90;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r3,68
	ctx.r31.s64 = ctx.r3.s64 + 68;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,28344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28344);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83b67530
	ctx.lr = 0x83AC1DC4;
	sub_83B67530(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac1dec
	if (cr0.eq) goto loc_83AC1DEC;
	// bl 0x825832f0
	ctx.lr = 0x83AC1DD0;
	sub_825832F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b679c0
	ctx.lr = 0x83AC1DE0;
	sub_83B679C0(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// subf r28,r11,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x83ac1df0
	goto loc_83AC1DF0;
loc_83AC1DEC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83AC1DF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b67620
	ctx.lr = 0x83AC1DF8;
	sub_83B67620(ctx, base);
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b67590
	ctx.lr = 0x83AC1E0C;
	sub_83B67590(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b67590
	ctx.lr = 0x83AC1E1C;
	sub_83B67590(ctx, base);
	// stw r3,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b67590
	ctx.lr = 0x83AC1E2C;
	sub_83B67590(ctx, base);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r10,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r10.u32);
	// bne cr6,0x83ac1e50
	if (!cr6.eq) goto loc_83AC1E50;
loc_83AC1E48:
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x83ac1e78
	goto loc_83AC1E78;
loc_83AC1E50:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a94098
	ctx.lr = 0x83AC1E5C;
	sub_83A94098(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ac1e74
	if (!cr0.eq) goto loc_83AC1E74;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-24956
	ctx.r4.s64 = ctx.r11.s64 + -24956;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC1E70;
	sub_831EA3F0(ctx, base);
	// b 0x83ac1e48
	goto loc_83AC1E48;
loc_83AC1E74:
	// lwz r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83AC1E78:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b675e0
	ctx.lr = 0x83AC1E84;
	sub_83B675E0(ctx, base);
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x83ac1e98
	if (cr6.lt) goto loc_83AC1E98;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bge cr6,0x83ac1fa4
	if (!cr6.lt) goto loc_83AC1FA4;
loc_83AC1E98:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b67590
	ctx.lr = 0x83AC1EA4;
	sub_83B67590(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r27,r11,2
	ctx.r27.s64 = ctx.r11.s64 + 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83b67530
	ctx.lr = 0x83AC1EC0;
	sub_83B67530(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac1fa4
	if (cr0.eq) goto loc_83AC1FA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x83a7a038
	ctx.lr = 0x83AC1ED4;
	sub_83A7A038(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x83ac1ef0
	if (!cr0.eq) goto loc_83AC1EF0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24900
	ctx.r4.s64 = ctx.r11.s64 + -24900;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC1EEC;
	sub_831EA3F0(ctx, base);
	// b 0x83ac1fa4
	goto loc_83AC1FA4;
loc_83AC1EF0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b679b0
	ctx.lr = 0x83AC1EFC;
	sub_83B679B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bne cr6,0x83ac1f2c
	if (!cr6.eq) goto loc_83AC1F2C;
	// bl 0x825832d8
	ctx.lr = 0x83AC1F0C;
	sub_825832D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e8
	ctx.lr = 0x83AC1F18;
	sub_825832E8(ctx, base);
	// subf r10,r3,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r3.s64;
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
loc_83AC1F2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832d8
	ctx.lr = 0x83AC1F34;
	sub_825832D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7a2a0
	ctx.lr = 0x83AC1F40;
	sub_83A7A2A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e0
	ctx.lr = 0x83AC1F48;
	sub_825832E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7a240
	ctx.lr = 0x83AC1F58;
	sub_83A7A240(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e8
	ctx.lr = 0x83AC1F60;
	sub_825832E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7a2f0
	ctx.lr = 0x83AC1F6C;
	sub_83A7A2F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832f0
	ctx.lr = 0x83AC1F74;
	sub_825832F0(ctx, base);
	// stw r3,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82583338
	ctx.lr = 0x83AC1F84;
	sub_82583338(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x83a7a0d8
	ctx.lr = 0x83AC1F94;
	sub_83A7A0D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b677e0
	ctx.lr = 0x83AC1FA4;
	sub_83B677E0(ctx, base);
loc_83AC1FA4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC1FAC"))) PPC_WEAK_FUNC(sub_83AC1FAC);
PPC_FUNC_IMPL(__imp__sub_83AC1FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC1FB0"))) PPC_WEAK_FUNC(sub_83AC1FB0);
PPC_FUNC_IMPL(__imp__sub_83AC1FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC1FB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7a000
	ctx.lr = 0x83AC1FC8;
	sub_83A7A000(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83a7a038
	ctx.lr = 0x83AC1FD8;
	sub_83A7A038(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x83ac2040
	if (cr0.eq) goto loc_83AC2040;
	// addi r29,r31,336
	ctx.r29.s64 = ctx.r31.s64 + 336;
loc_83AC1FE4:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AC1FF4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x83ac2004
	if (!cr6.eq) goto loc_83AC2004;
	// li r9,1
	ctx.r9.s64 = 1;
loc_83AC2004:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83ac1ff4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC1FF4;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83ac2020
	if (!cr6.eq) goto loc_83AC2020;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83ac2028
	goto loc_83AC2028;
loc_83AC2020:
	// lbz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 8);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
loc_83AC2028:
	// bl 0x83a7a0d8
	ctx.lr = 0x83AC202C;
	sub_83A7A0D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83a7a038
	ctx.lr = 0x83AC2038;
	sub_83A7A038(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x83ac1fe4
	if (!cr0.eq) goto loc_83AC1FE4;
loc_83AC2040:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7a138
	ctx.lr = 0x83AC204C;
	sub_83A7A138(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x83ac207c
	if (!cr0.gt) goto loc_83AC207C;
	// b 0x83ac2068
	goto loc_83AC2068;
loc_83AC2058:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7a0d8
	ctx.lr = 0x83AC2068;
	sub_83A7A0D8(ctx, base);
loc_83AC2068:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7a038
	ctx.lr = 0x83AC2074;
	sub_83A7A038(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ac2058
	if (!cr0.eq) goto loc_83AC2058;
loc_83AC207C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x83AC2084;
	sub_83102DB0(ctx, base);
	// b 0x83ac2098
	goto loc_83AC2098;
loc_83AC2088:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7a0d8
	ctx.lr = 0x83AC2098;
	sub_83A7A0D8(ctx, base);
loc_83AC2098:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83a7a038
	ctx.lr = 0x83AC20A4;
	sub_83A7A038(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ac2088
	if (!cr0.eq) goto loc_83AC2088;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC20B4"))) PPC_WEAK_FUNC(sub_83AC20B4);
PPC_FUNC_IMPL(__imp__sub_83AC20B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC20B8"))) PPC_WEAK_FUNC(sub_83AC20B8);
PPC_FUNC_IMPL(__imp__sub_83AC20B8) {
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
	// bl 0x83a75cd8
	ctx.lr = 0x83AC20D4;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac20f8
	ctx.lr = 0x83AC20DC;
	sub_83AC20F8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75d58
	ctx.lr = 0x83AC20E4;
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

__attribute__((alias("__imp__sub_83AC20F8"))) PPC_WEAK_FUNC(sub_83AC20F8);
PPC_FUNC_IMPL(__imp__sub_83AC20F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AC2100;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83ac238c
	if (!cr6.eq) goto loc_83AC238C;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x83ae2e88
	ctx.lr = 0x83AC211C;
	sub_83AE2E88(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x825832e0
	ctx.lr = 0x83AC2124;
	sub_825832E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ae2e50
	ctx.lr = 0x83AC2130;
	sub_83AE2E50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// blt cr6,0x83ac237c
	if (cr6.lt) goto loc_83AC237C;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// beq cr6,0x83ac237c
	if (cr6.eq) goto loc_83AC237C;
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// cmpd cr6,r3,r11
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r11.s64, xer);
	// beq cr6,0x83ac2168
	if (cr6.eq) goto loc_83AC2168;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// rotlwi r5,r3,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r10,-24824
	ctx.r4.s64 = ctx.r10.s64 + -24824;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea410
	ctx.lr = 0x83AC2168;
	sub_831EA410(ctx, base);
loc_83AC2168:
	// addi r28,r31,68
	ctx.r28.s64 = ctx.r31.s64 + 68;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83b679b0
	ctx.lr = 0x83AC2178;
	sub_83B679B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831f8200
	ctx.lr = 0x83AC2180;
	sub_831F8200(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x83ac21b8
	if (!cr6.eq) goto loc_83AC21B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82583300
	ctx.lr = 0x83AC219C;
	sub_82583300(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83b677e0
	ctx.lr = 0x83AC21AC;
	sub_83B677E0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// b 0x83ac21f8
	goto loc_83AC21F8;
loc_83AC21B8:
	// rotlwi r4,r29,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// bl 0x82583300
	ctx.lr = 0x83AC21C0;
	sub_82583300(ctx, base);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83a7a980
	ctx.lr = 0x83AC21D0;
	sub_83A7A980(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// std r26,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r26.u64);
	// bl 0x82583338
	ctx.lr = 0x83AC21E4;
	sub_82583338(ctx, base);
	// stw r26,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r26.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83b677e0
	ctx.lr = 0x83AC21F8;
	sub_83B677E0(ctx, base);
loc_83AC21F8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bne 0x83ac2214
	if (!cr0.eq) goto loc_83AC2214;
loc_83AC2208:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r26,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r26.u32);
	// b 0x83ac2388
	goto loc_83AC2388;
loc_83AC2214:
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// cmpd cr6,r29,r11
	cr6.compare<int64_t>(ctx.r29.s64, ctx.r11.s64, xer);
	// bge cr6,0x83ac2228
	if (!cr6.lt) goto loc_83AC2228;
loc_83AC2220:
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// b 0x83ac2208
	goto loc_83AC2208;
loc_83AC2228:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r31,160
	ctx.r29.s64 = ctx.r31.s64 + 160;
	// bl 0x83b679b0
	ctx.lr = 0x83AC2238;
	sub_83B679B0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x83ac2220
	if (cr0.eq) goto loc_83AC2220;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83b675e0
	ctx.lr = 0x83AC224C;
	sub_83B675E0(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lis r8,-31739
	ctx.r8.s64 = -2080047104;
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwa r11,29992(r8)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r8.u32 + 29992));
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotldi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 1);
	// divd r9,r30,r11
	ctx.r9.s64 = PPCDivide(ctx.r30.s64, ctx.r11.s64);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mulld r9,r9,r11
	ctx.r9.s64 = ctx.r9.s64 * ctx.r11.s64;
	// subf r9,r9,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r9.s64;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// tdllei r11,0
	// cmpdi cr6,r9,0
	cr6.compare<int64_t>(ctx.r9.s64, 0, xer);
	// tdlgei r10,-1
	// beq cr6,0x83ac22bc
	if (cr6.eq) goto loc_83AC22BC;
	// divd r10,r30,r11
	ctx.r10.s64 = PPCDivide(ctx.r30.s64, ctx.r11.s64);
	// rotldi r9,r30,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 1);
	// mulld r10,r10,r11
	ctx.r10.s64 = ctx.r10.s64 * ctx.r11.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// tdllei r11,0
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// std r8,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r8.u64);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// tdlgei r11,-1
	// b 0x83ac22c0
	goto loc_83AC22C0;
loc_83AC22BC:
	// std r26,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r26.u64);
loc_83AC22C0:
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831f8200
	ctx.lr = 0x83AC22D8;
	sub_831F8200(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmpd cr6,r29,r11
	cr6.compare<int64_t>(ctx.r29.s64, ctx.r11.s64, xer);
	// blt cr6,0x83ac22f0
	if (cr6.lt) goto loc_83AC22F0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831f8200
	ctx.lr = 0x83AC22EC;
	sub_831F8200(ctx, base);
	// clrldi r29,r3,32
	ctx.r29.u64 = ctx.r3.u64 & 0xFFFFFFFF;
loc_83AC22F0:
	// cmpdi cr6,r29,0
	cr6.compare<int64_t>(ctx.r29.s64, 0, xer);
	// bne cr6,0x83ac230c
	if (!cr6.eq) goto loc_83AC230C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83b677e0
	ctx.lr = 0x83AC2308;
	sub_83B677E0(ctx, base);
	// b 0x83ac2220
	goto loc_83AC2220;
loc_83AC230C:
	// bge cr6,0x83ac2320
	if (!cr6.lt) goto loc_83AC2320;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24868
	ctx.r4.s64 = ctx.r11.s64 + -24868;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC2320;
	sub_831EA3F0(ctx, base);
loc_83AC2320:
	// std r29,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r29.u64);
	// lis r11,-31828
	ctx.r11.s64 = -2085879808;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r4,r11,8376
	ctx.r4.s64 = ctx.r11.s64 + 8376;
	// bl 0x82beaca8
	ctx.lr = 0x83AC2338;
	sub_82BEACA8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83b677e0
	ctx.lr = 0x83AC2348;
	sub_83B677E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831f8200
	ctx.lr = 0x83AC2350;
	sub_831F8200(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825832e0
	ctx.lr = 0x83AC235C;
	sub_825832E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrldi r7,r28,32
	ctx.r7.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// li r8,3
	ctx.r8.s64 = 3;
	// bl 0x83ae3048
	ctx.lr = 0x83AC2378;
	sub_83AE3048(ctx, base);
	// b 0x83ac239c
	goto loc_83AC239C;
loc_83AC237C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_83AC2388:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AC238C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82beaca8
	ctx.lr = 0x83AC239C;
	sub_82BEACA8(ctx, base);
loc_83AC239C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC23A4"))) PPC_WEAK_FUNC(sub_83AC23A4);
PPC_FUNC_IMPL(__imp__sub_83AC23A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC23A8"))) PPC_WEAK_FUNC(sub_83AC23A8);
PPC_FUNC_IMPL(__imp__sub_83AC23A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC23B0"))) PPC_WEAK_FUNC(sub_83AC23B0);
PPC_FUNC_IMPL(__imp__sub_83AC23B0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC23C4"))) PPC_WEAK_FUNC(sub_83AC23C4);
PPC_FUNC_IMPL(__imp__sub_83AC23C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC23C8"))) PPC_WEAK_FUNC(sub_83AC23C8);
PPC_FUNC_IMPL(__imp__sub_83AC23C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC23D0"))) PPC_WEAK_FUNC(sub_83AC23D0);
PPC_FUNC_IMPL(__imp__sub_83AC23D0) {
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
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ac23fc
	if (!cr6.eq) goto loc_83AC23FC;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83ac2410
	if (cr6.eq) goto loc_83AC2410;
loc_83AC23FC:
	// ld r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 176);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// bl 0x83abad68
	ctx.lr = 0x83AC240C;
	sub_83ABAD68(ctx, base);
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
loc_83AC2410:
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac2434
	if (cr6.eq) goto loc_83AC2434;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// bl 0x83aba718
	ctx.lr = 0x83AC2424;
	sub_83ABA718(ctx, base);
	// ld r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 176);
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// bl 0x82583338
	ctx.lr = 0x83AC2434;
	sub_82583338(ctx, base);
loc_83AC2434:
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

__attribute__((alias("__imp__sub_83AC2448"))) PPC_WEAK_FUNC(sub_83AC2448);
PPC_FUNC_IMPL(__imp__sub_83AC2448) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC2450"))) PPC_WEAK_FUNC(sub_83AC2450);
PPC_FUNC_IMPL(__imp__sub_83AC2450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83ac2478
	if (cr6.lt) goto loc_83AC2478;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x83ac2470
	if (cr6.lt) goto loc_83AC2470;
	// beq cr6,0x83ac2478
	if (cr6.eq) goto loc_83AC2478;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x83ac2478
	if (!cr6.lt) goto loc_83AC2478;
loc_83AC2470:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83AC2478:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC2480"))) PPC_WEAK_FUNC(sub_83AC2480);
PPC_FUNC_IMPL(__imp__sub_83AC2480) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC2488"))) PPC_WEAK_FUNC(sub_83AC2488);
PPC_FUNC_IMPL(__imp__sub_83AC2488) {
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
	// addi r31,r3,68
	ctx.r31.s64 = ctx.r3.s64 + 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b67590
	ctx.lr = 0x83AC24AC;
	sub_83B67590(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83b67590
	ctx.lr = 0x83AC24BC;
	sub_83B67590(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83b67590
	ctx.lr = 0x83AC24CC;
	sub_83B67590(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83b67590
	ctx.lr = 0x83AC24DC;
	sub_83B67590(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b67590
	ctx.lr = 0x83AC24EC;
	sub_83B67590(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r3,r11,15,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC250C"))) PPC_WEAK_FUNC(sub_83AC250C);
PPC_FUNC_IMPL(__imp__sub_83AC250C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC2510"))) PPC_WEAK_FUNC(sub_83AC2510);
PPC_FUNC_IMPL(__imp__sub_83AC2510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC2524"))) PPC_WEAK_FUNC(sub_83AC2524);
PPC_FUNC_IMPL(__imp__sub_83AC2524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC2528"))) PPC_WEAK_FUNC(sub_83AC2528);
PPC_FUNC_IMPL(__imp__sub_83AC2528) {
	PPC_FUNC_PROLOGUE();
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC2534"))) PPC_WEAK_FUNC(sub_83AC2534);
PPC_FUNC_IMPL(__imp__sub_83AC2534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC2538"))) PPC_WEAK_FUNC(sub_83AC2538);
PPC_FUNC_IMPL(__imp__sub_83AC2538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC2540;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83ac2564
	if (!cr6.eq) goto loc_83AC2564;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// b 0x83ac25d4
	goto loc_83AC25D4;
loc_83AC2564:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83ac25b8
	if (cr6.eq) goto loc_83AC25B8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75cd8
	ctx.lr = 0x83AC2574;
	sub_83A75CD8(ctx, base);
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b679b8
	ctx.lr = 0x83AC2584;
	sub_83B679B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75d58
	ctx.lr = 0x83AC2590;
	sub_83A75D58(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83ac25d4
	if (cr6.eq) goto loc_83AC25D4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75cd8
	ctx.lr = 0x83AC25A0;
	sub_83A75CD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b677e0
	ctx.lr = 0x83AC25B0;
	sub_83B677E0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75d58
	ctx.lr = 0x83AC25B8;
	sub_83A75D58(ctx, base);
loc_83AC25B8:
	// addi r11,r28,32767
	ctx.r11.s64 = ctx.r28.s64 + 32767;
	// stw r28,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// srawi r11,r11,15
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 15;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_83AC25D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC25DC"))) PPC_WEAK_FUNC(sub_83AC25DC);
PPC_FUNC_IMPL(__imp__sub_83AC25DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC25E0"))) PPC_WEAK_FUNC(sub_83AC25E0);
PPC_FUNC_IMPL(__imp__sub_83AC25E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x83ac25f8
	if (cr6.eq) goto loc_83AC25F8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_83AC25F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC2600"))) PPC_WEAK_FUNC(sub_83AC2600);
PPC_FUNC_IMPL(__imp__sub_83AC2600) {
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
	// bl 0x828e2690
	ctx.lr = 0x83AC2610;
	sub_828E2690(ctx, base);
	// addi r3,r3,432
	ctx.r3.s64 = ctx.r3.s64 + 432;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC2624"))) PPC_WEAK_FUNC(sub_83AC2624);
PPC_FUNC_IMPL(__imp__sub_83AC2624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC2628"))) PPC_WEAK_FUNC(sub_83AC2628);
PPC_FUNC_IMPL(__imp__sub_83AC2628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,-14348
	ctx.r3.s64 = ctx.r11.s64 + -14348;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC2634"))) PPC_WEAK_FUNC(sub_83AC2634);
PPC_FUNC_IMPL(__imp__sub_83AC2634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC2638"))) PPC_WEAK_FUNC(sub_83AC2638);
PPC_FUNC_IMPL(__imp__sub_83AC2638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC2640;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r11,-14308
	ctx.r29.s64 = ctx.r11.s64 + -14308;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83a77cb8
	ctx.lr = 0x83AC2664;
	sub_83A77CB8(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// bge cr6,0x83ac2688
	if (!cr6.lt) goto loc_83AC2688;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-24732
	ctx.r4.s64 = ctx.r11.s64 + -24732;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AC2680;
	sub_831EA418(ctx, base);
loc_83AC2680:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac26b0
	goto loc_83AC26B0;
loc_83AC2688:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a77ce8
	ctx.lr = 0x83AC269C;
	sub_83A77CE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83ac2680
	if (cr0.eq) goto loc_83AC2680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83AC26AC;
	sub_825832D8(ctx, base);
	// stw r31,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r31.u32);
loc_83AC26B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC26B8"))) PPC_WEAK_FUNC(sub_83AC26B8);
PPC_FUNC_IMPL(__imp__sub_83AC26B8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r8,-31767
	ctx.r8.s64 = -2081882112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r8,-14308
	ctx.r3.s64 = ctx.r8.s64 + -14308;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x83a77cb8
	ctx.lr = 0x83AC26F4;
	sub_83A77CB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC2704"))) PPC_WEAK_FUNC(sub_83AC2704);
PPC_FUNC_IMPL(__imp__sub_83AC2704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC2708"))) PPC_WEAK_FUNC(sub_83AC2708);
PPC_FUNC_IMPL(__imp__sub_83AC2708) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x83ac2638
	ctx.lr = 0x83AC2744;
	sub_83AC2638(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac2754
	if (cr0.eq) goto loc_83AC2754;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
loc_83AC2754:
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

__attribute__((alias("__imp__sub_83AC2768"))) PPC_WEAK_FUNC(sub_83AC2768);
PPC_FUNC_IMPL(__imp__sub_83AC2768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lwz r4,216(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// addi r3,r11,-14308
	ctx.r3.s64 = ctx.r11.s64 + -14308;
	// b 0x83a77dc8
	sub_83A77DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC2778"))) PPC_WEAK_FUNC(sub_83AC2778);
PPC_FUNC_IMPL(__imp__sub_83AC2778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC2780;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83a75cd8
	ctx.lr = 0x83AC2790;
	sub_83A75CD8(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r30,r11,-14292
	ctx.r30.s64 = ctx.r11.s64 + -14292;
loc_83AC2798:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AC27B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bne cr6,0x83ac2798
	if (!cr6.eq) goto loc_83AC2798;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75d58
	ctx.lr = 0x83AC27C4;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC27D0"))) PPC_WEAK_FUNC(sub_83AC27D0);
PPC_FUNC_IMPL(__imp__sub_83AC27D0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// lwz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// bl 0x83a75cd8
	ctx.lr = 0x83AC281C;
	sub_83A75CD8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac1c60
	ctx.lr = 0x83AC2828;
	sub_83AC1C60(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75d58
	ctx.lr = 0x83AC2830;
	sub_83A75D58(ctx, base);
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

__attribute__((alias("__imp__sub_83AC2844"))) PPC_WEAK_FUNC(sub_83AC2844);
PPC_FUNC_IMPL(__imp__sub_83AC2844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC2848"))) PPC_WEAK_FUNC(sub_83AC2848);
PPC_FUNC_IMPL(__imp__sub_83AC2848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC2850;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83a75cd8
	ctx.lr = 0x83AC2868;
	sub_83A75CD8(ctx, base);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75d58
	ctx.lr = 0x83AC2878;
	sub_83A75D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC2880"))) PPC_WEAK_FUNC(sub_83AC2880);
PPC_FUNC_IMPL(__imp__sub_83AC2880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83ac28b0
	if (cr6.lt) goto loc_83AC28B0;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x83ac28a8
	if (cr6.lt) goto loc_83AC28A8;
	// beq cr6,0x83ac28a0
	if (cr6.eq) goto loc_83AC28A0;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_83AC28A0:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83AC28A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83AC28B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC28B8"))) PPC_WEAK_FUNC(sub_83AC28B8);
PPC_FUNC_IMPL(__imp__sub_83AC28B8) {
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
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac28f4
	if (cr6.eq) goto loc_83AC28F4;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lfs f1,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r3,29988(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29988);
	// bl 0x83ab9120
	ctx.lr = 0x83AC28F4;
	sub_83AB9120(ctx, base);
loc_83AC28F4:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac290c
	if (cr6.eq) goto loc_83AC290C;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x83a95110
	ctx.lr = 0x83AC290C;
	sub_83A95110(ctx, base);
loc_83AC290C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75cd8
	ctx.lr = 0x83AC2914;
	sub_83A75CD8(ctx, base);
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75d58
	ctx.lr = 0x83AC2920;
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

__attribute__((alias("__imp__sub_83AC2938"))) PPC_WEAK_FUNC(sub_83AC2938);
PPC_FUNC_IMPL(__imp__sub_83AC2938) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a75cd8
	ctx.lr = 0x83AC295C;
	sub_83A75CD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x83b677e0
	ctx.lr = 0x83AC296C;
	sub_83B677E0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75d58
	ctx.lr = 0x83AC2974;
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

__attribute__((alias("__imp__sub_83AC298C"))) PPC_WEAK_FUNC(sub_83AC298C);
PPC_FUNC_IMPL(__imp__sub_83AC298C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC2990"))) PPC_WEAK_FUNC(sub_83AC2990);
PPC_FUNC_IMPL(__imp__sub_83AC2990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC2998;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83a75cd8
	ctx.lr = 0x83AC29A8;
	sub_83A75CD8(ctx, base);
	// addi r30,r29,68
	ctx.r30.s64 = ctx.r29.s64 + 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b679b8
	ctx.lr = 0x83AC29B8;
	sub_83B679B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83ac2a18
	if (!cr0.eq) goto loc_83AC2A18;
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// bl 0x825832e0
	ctx.lr = 0x83AC29C8;
	sub_825832E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b679b8
	ctx.lr = 0x83AC29D8;
	sub_83B679B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83ac2a18
	if (cr0.eq) goto loc_83AC2A18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832f0
	ctx.lr = 0x83AC29E8;
	sub_825832F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac2a08
	if (cr0.eq) goto loc_83AC2A08;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b677e0
	ctx.lr = 0x83AC2A00;
	sub_83B677E0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83ac2a18
	goto loc_83AC2A18;
loc_83AC2A08:
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// bne cr6,0x83ac2a18
	if (!cr6.eq) goto loc_83AC2A18;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
loc_83AC2A18:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83a75d58
	ctx.lr = 0x83AC2A20;
	sub_83A75D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC2A2C"))) PPC_WEAK_FUNC(sub_83AC2A2C);
PPC_FUNC_IMPL(__imp__sub_83AC2A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC2A30"))) PPC_WEAK_FUNC(sub_83AC2A30);
PPC_FUNC_IMPL(__imp__sub_83AC2A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC2A38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// bl 0x83a7a038
	ctx.lr = 0x83AC2A4C;
	sub_83A7A038(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac2aa4
	if (cr0.eq) goto loc_83AC2AA4;
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
loc_83AC2A58:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7a0d8
	ctx.lr = 0x83AC2A68;
	sub_83A7A0D8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b679b0
	ctx.lr = 0x83AC2A74;
	sub_83B679B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82583338
	ctx.lr = 0x83AC2A80;
	sub_82583338(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b677e0
	ctx.lr = 0x83AC2A90;
	sub_83B677E0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83a7a038
	ctx.lr = 0x83AC2A9C;
	sub_83A7A038(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ac2a58
	if (!cr0.eq) goto loc_83AC2A58;
loc_83AC2AA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac1d88
	ctx.lr = 0x83AC2AAC;
	sub_83AC1D88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC2AB4"))) PPC_WEAK_FUNC(sub_83AC2AB4);
PPC_FUNC_IMPL(__imp__sub_83AC2AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC2AB8"))) PPC_WEAK_FUNC(sub_83AC2AB8);
PPC_FUNC_IMPL(__imp__sub_83AC2AB8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x83b67a20
	ctx.lr = 0x83AC2AEC;
	sub_83B67A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac1fb0
	ctx.lr = 0x83AC2AF4;
	sub_83AC1FB0(ctx, base);
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

__attribute__((alias("__imp__sub_83AC2B08"))) PPC_WEAK_FUNC(sub_83AC2B08);
PPC_FUNC_IMPL(__imp__sub_83AC2B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AC2B10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,68
	ctx.r27.s64 = ctx.r3.s64 + 68;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r3,160
	ctx.r29.s64 = ctx.r3.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83b679b0
	ctx.lr = 0x83AC2B2C;
	sub_83B679B0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x83ac2b48
	if (!cr0.eq) goto loc_83AC2B48;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// b 0x83ac2c94
	goto loc_83AC2C94;
loc_83AC2B48:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83b675e0
	ctx.lr = 0x83AC2B5C;
	sub_83B675E0(ctx, base);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// lis r8,-31739
	ctx.r8.s64 = -2080047104;
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwa r11,29992(r8)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r8.u32 + 29992));
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotldi r10,r31,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u64, 1);
	// divd r9,r31,r11
	ctx.r9.s64 = PPCDivide(ctx.r31.s64, ctx.r11.s64);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mulld r9,r9,r11
	ctx.r9.s64 = ctx.r9.s64 * ctx.r11.s64;
	// subf r9,r9,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r9.s64;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// tdllei r11,0
	// cmpdi cr6,r9,0
	cr6.compare<int64_t>(ctx.r9.s64, 0, xer);
	// tdlgei r10,-1
	// beq cr6,0x83ac2bcc
	if (cr6.eq) goto loc_83AC2BCC;
	// divd r10,r31,r11
	ctx.r10.s64 = PPCDivide(ctx.r31.s64, ctx.r11.s64);
	// rotldi r9,r31,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u64, 1);
	// mulld r10,r10,r11
	ctx.r10.s64 = ctx.r10.s64 * ctx.r11.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// tdllei r11,0
	// subf r8,r10,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r10.s64;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// std r8,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r8.u64);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// tdlgei r11,-1
	// b 0x83ac2bd4
	goto loc_83AC2BD4;
loc_83AC2BCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r11.u64);
loc_83AC2BD4:
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bgt cr6,0x83ac2bf4
	if (cr6.gt) goto loc_83AC2BF4;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r10,-24636
	ctx.r4.s64 = ctx.r10.s64 + -24636;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83AC2BF4;
	sub_831EA400(ctx, base);
loc_83AC2BF4:
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831f8200
	ctx.lr = 0x83AC2C0C;
	sub_831F8200(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmpd cr6,r29,r11
	cr6.compare<int64_t>(ctx.r29.s64, ctx.r11.s64, xer);
	// blt cr6,0x83ac2c24
	if (cr6.lt) goto loc_83AC2C24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831f8200
	ctx.lr = 0x83AC2C20;
	sub_831F8200(ctx, base);
	// clrldi r29,r3,32
	ctx.r29.u64 = ctx.r3.u64 & 0xFFFFFFFF;
loc_83AC2C24:
	// cmpdi cr6,r29,0
	cr6.compare<int64_t>(ctx.r29.s64, 0, xer);
	// bge cr6,0x83ac2c3c
	if (!cr6.lt) goto loc_83AC2C3C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24680
	ctx.r4.s64 = ctx.r11.s64 + -24680;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC2C3C;
	sub_831EA3F0(ctx, base);
loc_83AC2C3C:
	// std r29,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r29.u64);
	// lis r11,-31828
	ctx.r11.s64 = -2085879808;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r4,r11,8376
	ctx.r4.s64 = ctx.r11.s64 + 8376;
	// bl 0x82beaca8
	ctx.lr = 0x83AC2C54;
	sub_82BEACA8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83b677e0
	ctx.lr = 0x83AC2C64;
	sub_83B677E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831f8200
	ctx.lr = 0x83AC2C6C;
	sub_831F8200(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825832e0
	ctx.lr = 0x83AC2C78;
	sub_825832E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// clrldi r7,r27,32
	ctx.r7.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// li r8,2
	ctx.r8.s64 = 2;
	// bl 0x83ae3048
	ctx.lr = 0x83AC2C94;
	sub_83AE3048(ctx, base);
loc_83AC2C94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC2C9C"))) PPC_WEAK_FUNC(sub_83AC2C9C);
PPC_FUNC_IMPL(__imp__sub_83AC2C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC2CA0"))) PPC_WEAK_FUNC(sub_83AC2CA0);
PPC_FUNC_IMPL(__imp__sub_83AC2CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83ac2cc0
	if (cr6.lt) goto loc_83AC2CC0;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x83ac2cc0
	if (!cr6.lt) goto loc_83AC2CC0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!cr6.eq) return;
loc_83AC2CC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC2CC8"))) PPC_WEAK_FUNC(sub_83AC2CC8);
PPC_FUNC_IMPL(__imp__sub_83AC2CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f1,7568(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7568);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83ac28b8
	sub_83AC28B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC2CDC"))) PPC_WEAK_FUNC(sub_83AC2CDC);
PPC_FUNC_IMPL(__imp__sub_83AC2CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC2CE0"))) PPC_WEAK_FUNC(sub_83AC2CE0);
PPC_FUNC_IMPL(__imp__sub_83AC2CE0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x83ac28b8
	ctx.lr = 0x83AC2D0C;
	sub_83AC28B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC2D1C"))) PPC_WEAK_FUNC(sub_83AC2D1C);
PPC_FUNC_IMPL(__imp__sub_83AC2D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC2D20"))) PPC_WEAK_FUNC(sub_83AC2D20);
PPC_FUNC_IMPL(__imp__sub_83AC2D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC2D28;
	__savegprlr_28(ctx, base);
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
	ctx.lr = 0x83AC2D40;
	sub_83A77B68(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,352
	ctx.r4.s64 = 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83AC2D50;
	sub_83A77B78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r29,r3,68
	ctx.r29.s64 = ctx.r3.s64 + 68;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// std r30,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// std r30,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r30.u64);
	// std r30,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r30.u64);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// bl 0x83b674e0
	ctx.lr = 0x83AC2DC0;
	sub_83B674E0(ctx, base);
	// stw r31,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r31.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83AC2DD8;
	sub_83A77B78(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a75be8
	ctx.lr = 0x83AC2DE0;
	sub_83A75BE8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ac2e30
	if (!cr0.eq) goto loc_83AC2E30;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-24720
	ctx.r4.s64 = ctx.r11.s64 + -24720;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC2DF8;
	sub_831EA3F0(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac2e0c
	if (cr6.eq) goto loc_83AC2E0C;
	// bl 0x83ae3008
	ctx.lr = 0x83AC2E08;
	sub_83AE3008(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_83AC2E0C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac2e20
	if (cr6.eq) goto loc_83AC2E20;
	// bl 0x83a75c60
	ctx.lr = 0x83AC2E1C;
	sub_83A75C60(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_83AC2E20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x83AC2E28;
	sub_83102DB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac2e8c
	goto loc_83AC2E8C;
loc_83AC2E30:
	// bl 0x828e2690
	ctx.lr = 0x83AC2E34;
	sub_828E2690(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83AC2E48;
	sub_83A77B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83ae30d8
	ctx.lr = 0x83AC2E58;
	sub_83AE30D8(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac2e0c
	if (cr0.eq) goto loc_83AC2E0C;
	// addi r28,r31,332
	ctx.r28.s64 = ctx.r31.s64 + 332;
	// addi r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 + 224;
	// li r30,4
	ctx.r30.s64 = 4;
loc_83AC2E70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7a170
	ctx.lr = 0x83AC2E78;
	sub_83A7A170(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x83ac2e70
	if (!cr0.eq) goto loc_83AC2E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83AC2E8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC2E94"))) PPC_WEAK_FUNC(sub_83AC2E94);
PPC_FUNC_IMPL(__imp__sub_83AC2E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC2E98"))) PPC_WEAK_FUNC(sub_83AC2E98);
PPC_FUNC_IMPL(__imp__sub_83AC2E98) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83ac2a30
	ctx.lr = 0x83AC2EB8;
	sub_83AC2A30(ctx, base);
	// ld r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 176);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// blt cr6,0x83ac2eec
	if (cr6.lt) goto loc_83AC2EEC;
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b675e0
	ctx.lr = 0x83AC2ED4;
	sub_83B675E0(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// ld r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 176);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpd cr6,r11,r9
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, xer);
	// bge cr6,0x83ac2ef4
	if (!cr6.lt) goto loc_83AC2EF4;
loc_83AC2EEC:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83ac2f8c
	goto loc_83AC2F8C;
loc_83AC2EF4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac2f90
	if (cr6.eq) goto loc_83AC2F90;
	// lwa r11,40(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 40));
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,-11408(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11408);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x83a79668
	ctx.lr = 0x83AC2F30;
	sub_83A79668(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// blt cr6,0x83ac2f60
	if (cr6.lt) goto loc_83AC2F60;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83ac2f60
	if (!cr6.gt) goto loc_83AC2F60;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x83ac2f90
	goto loc_83AC2F90;
loc_83AC2F50:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b677e0
	ctx.lr = 0x83AC2F60;
	sub_83B677E0(ctx, base);
loc_83AC2F60:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b679b0
	ctx.lr = 0x83AC2F6C;
	sub_83B679B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ac2f50
	if (!cr0.eq) goto loc_83AC2F50;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b67590
	ctx.lr = 0x83AC2F80;
	sub_83B67590(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ac2f90
	if (!cr0.eq) goto loc_83AC2F90;
	// li r11,5
	ctx.r11.s64 = 5;
loc_83AC2F8C:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AC2F90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_83AC2FAC"))) PPC_WEAK_FUNC(sub_83AC2FAC);
PPC_FUNC_IMPL(__imp__sub_83AC2FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC2FB0"))) PPC_WEAK_FUNC(sub_83AC2FB0);
PPC_FUNC_IMPL(__imp__sub_83AC2FB0) {
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
	// bl 0x83ac2a30
	ctx.lr = 0x83AC2FCC;
	sub_83AC2A30(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ac3034
	if (!cr6.eq) goto loc_83AC3034;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2ab8
	ctx.lr = 0x83AC2FE0;
	sub_83AC2AB8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac300c
	if (cr6.eq) goto loc_83AC300C;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,29988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29988);
	// bl 0x83ab9128
	ctx.lr = 0x83AC3008;
	sub_83AB9128(ctx, base);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
loc_83AC300C:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac3024
	if (cr6.eq) goto loc_83AC3024;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a958b0
	ctx.lr = 0x83AC3020;
	sub_83A958B0(ctx, base);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
loc_83AC3024:
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac3034
	if (cr6.eq) goto loc_83AC3034;
	// bl 0x83aba848
	ctx.lr = 0x83AC3034;
	sub_83ABA848(ctx, base);
loc_83AC3034:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC304C"))) PPC_WEAK_FUNC(sub_83AC304C);
PPC_FUNC_IMPL(__imp__sub_83AC304C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC3050"))) PPC_WEAK_FUNC(sub_83AC3050);
PPC_FUNC_IMPL(__imp__sub_83AC3050) {
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
	// bl 0x83ac2a30
	ctx.lr = 0x83AC306C;
	sub_83AC2A30(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ae2e88
	ctx.lr = 0x83AC3074;
	sub_83AE2E88(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x825832e0
	ctx.lr = 0x83AC307C;
	sub_825832E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83ac3090
	if (!cr6.eq) goto loc_83AC3090;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ae2d60
	ctx.lr = 0x83AC3090;
	sub_83AE2D60(ctx, base);
loc_83AC3090:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83ac3108
	if (!cr6.eq) goto loc_83AC3108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2ab8
	ctx.lr = 0x83AC30A0;
	sub_83AC2AB8(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac30c8
	if (cr6.eq) goto loc_83AC30C8;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,29988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29988);
	// bl 0x83ab9128
	ctx.lr = 0x83AC30C4;
	sub_83AB9128(ctx, base);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
loc_83AC30C8:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac30e0
	if (cr6.eq) goto loc_83AC30E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a958b0
	ctx.lr = 0x83AC30DC;
	sub_83A958B0(ctx, base);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
loc_83AC30E0:
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac30f0
	if (cr6.eq) goto loc_83AC30F0;
	// bl 0x83aba848
	ctx.lr = 0x83AC30F0;
	sub_83ABA848(ctx, base);
loc_83AC30F0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac3108
	if (cr6.eq) goto loc_83AC3108;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AC3108:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC3120"))) PPC_WEAK_FUNC(sub_83AC3120);
PPC_FUNC_IMPL(__imp__sub_83AC3120) {
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
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-24540
	ctx.r4.s64 = ctx.r11.s64 + -24540;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC3148;
	sub_831EA3F0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// std r30,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r30.u64);
	// std r30,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r30.u64);
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// bl 0x83ae2d60
	ctx.lr = 0x83AC3170;
	sub_83AE2D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2ab8
	ctx.lr = 0x83AC3178;
	sub_83AC2AB8(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac3198
	if (cr6.eq) goto loc_83AC3198;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,29988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29988);
	// bl 0x83ab9128
	ctx.lr = 0x83AC3194;
	sub_83AB9128(ctx, base);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
loc_83AC3198:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC31B0"))) PPC_WEAK_FUNC(sub_83AC31B0);
PPC_FUNC_IMPL(__imp__sub_83AC31B0) {
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
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x825832e0
	ctx.lr = 0x83AC31D0;
	sub_825832E0(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83ac3248
	if (!cr6.eq) goto loc_83AC3248;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ae2d60
	ctx.lr = 0x83AC31E0;
	sub_83AE2D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2ab8
	ctx.lr = 0x83AC31E8;
	sub_83AC2AB8(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac3218
	if (cr6.eq) goto loc_83AC3218;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,29988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29988);
	// bl 0x83ab9128
	ctx.lr = 0x83AC3214;
	sub_83AB9128(ctx, base);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
loc_83AC3218:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac3230
	if (cr6.eq) goto loc_83AC3230;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a958b0
	ctx.lr = 0x83AC322C;
	sub_83A958B0(ctx, base);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
loc_83AC3230:
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac3240
	if (cr6.eq) goto loc_83AC3240;
	// bl 0x83aba848
	ctx.lr = 0x83AC3240;
	sub_83ABA848(ctx, base);
loc_83AC3240:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83ac324c
	goto loc_83AC324C;
loc_83AC3248:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AC324C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC3264"))) PPC_WEAK_FUNC(sub_83AC3264);
PPC_FUNC_IMPL(__imp__sub_83AC3264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC3268"))) PPC_WEAK_FUNC(sub_83AC3268);
PPC_FUNC_IMPL(__imp__sub_83AC3268) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83ac2d20
	sub_83AC2D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC327C"))) PPC_WEAK_FUNC(sub_83AC327C);
PPC_FUNC_IMPL(__imp__sub_83AC327C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC3280"))) PPC_WEAK_FUNC(sub_83AC3280);
PPC_FUNC_IMPL(__imp__sub_83AC3280) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83a75cd8
	ctx.lr = 0x83AC329C;
	sub_83A75CD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x83ac32b0
	if (!cr6.eq) goto loc_83AC32B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2ab8
	ctx.lr = 0x83AC32B0;
	sub_83AC2AB8(ctx, base);
loc_83AC32B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac32e0
	if (cr6.eq) goto loc_83AC32E0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24592
	ctx.r4.s64 = ctx.r11.s64 + -24592;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC32CC;
	sub_831EA3F0(ctx, base);
	// b 0x83ac3330
	goto loc_83AC3330;
loc_83AC32D0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7a0d8
	ctx.lr = 0x83AC32E0;
	sub_83A7A0D8(ctx, base);
loc_83AC32E0:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83a7a038
	ctx.lr = 0x83AC32EC;
	sub_83A7A038(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ac32d0
	if (!cr0.eq) goto loc_83AC32D0;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,29988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29988);
	// bl 0x83ab90e8
	ctx.lr = 0x83AC3304;
	sub_83AB90E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ac3318
	if (!cr0.eq) goto loc_83AC3318;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x83ac3330
	goto loc_83AC3330;
loc_83AC3318:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_83AC3330:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75d58
	ctx.lr = 0x83AC3338;
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

__attribute__((alias("__imp__sub_83AC334C"))) PPC_WEAK_FUNC(sub_83AC334C);
PPC_FUNC_IMPL(__imp__sub_83AC334C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC3350"))) PPC_WEAK_FUNC(sub_83AC3350);
PPC_FUNC_IMPL(__imp__sub_83AC3350) {
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
	// bl 0x83a75cd8
	ctx.lr = 0x83AC336C;
	sub_83A75CD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac33a4
	if (cr6.eq) goto loc_83AC33A4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x83ac33a4
	if (cr6.eq) goto loc_83AC33A4;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// ble cr6,0x83ac339c
	if (!cr6.gt) goto loc_83AC339C;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bgt cr6,0x83ac339c
	if (cr6.gt) goto loc_83AC339C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2ab8
	ctx.lr = 0x83AC3398;
	sub_83AC2AB8(ctx, base);
	// b 0x83ac33a4
	goto loc_83AC33A4;
loc_83AC339C:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AC33A4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75d58
	ctx.lr = 0x83AC33AC;
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

__attribute__((alias("__imp__sub_83AC33C0"))) PPC_WEAK_FUNC(sub_83AC33C0);
PPC_FUNC_IMPL(__imp__sub_83AC33C0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac3404
	if (cr6.eq) goto loc_83AC3404;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x83ae2e88
	ctx.lr = 0x83AC33EC;
	sub_83AE2E88(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x825832e0
	ctx.lr = 0x83AC33F4;
	sub_825832E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ac3404
	if (cr0.eq) goto loc_83AC3404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac3120
	ctx.lr = 0x83AC3404;
	sub_83AC3120(ctx, base);
loc_83AC3404:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac341c
	if (cr6.eq) goto loc_83AC341C;
	// bl 0x83ae3008
	ctx.lr = 0x83AC3418;
	sub_83AE3008(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_83AC341C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac3430
	if (cr6.eq) goto loc_83AC3430;
	// bl 0x83a75c60
	ctx.lr = 0x83AC342C;
	sub_83A75C60(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_83AC3430:
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x83102db0
	ctx.lr = 0x83AC3438;
	sub_83102DB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC3450"))) PPC_WEAK_FUNC(sub_83AC3450);
PPC_FUNC_IMPL(__imp__sub_83AC3450) {
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
	// bl 0x83ac2a30
	ctx.lr = 0x83AC346C;
	sub_83AC2A30(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac3634
	if (cr6.eq) goto loc_83AC3634;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ac348c
	if (!cr6.eq) goto loc_83AC348C;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x83ac3634
	goto loc_83AC3634;
loc_83AC348C:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ae2e88
	ctx.lr = 0x83AC3494;
	sub_83AE2E88(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x825832e0
	ctx.lr = 0x83AC349C;
	sub_825832E0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83ac34c0
	if (!cr0.eq) goto loc_83AC34C0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ae2cd8
	ctx.lr = 0x83AC34AC;
	sub_83AE2CD8(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ae2e88
	ctx.lr = 0x83AC34B4;
	sub_83AE2E88(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x825832e0
	ctx.lr = 0x83AC34BC;
	sub_825832E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83AC34C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac31b0
	ctx.lr = 0x83AC34C8;
	sub_83AC31B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83ac3634
	if (cr6.eq) goto loc_83AC3634;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x83ac3634
	if (!cr6.eq) goto loc_83AC3634;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ae2df0
	ctx.lr = 0x83AC34E0;
	sub_83AE2DF0(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// bge cr6,0x83ac3518
	if (!cr6.lt) goto loc_83AC3518;
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83ac3504
	if (cr6.eq) goto loc_83AC3504;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-24276
	ctx.r4.s64 = ctx.r11.s64 + -24276;
	// b 0x83ac3510
	goto loc_83AC3510;
loc_83AC3504:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r4,r11,-24320
	ctx.r4.s64 = ctx.r11.s64 + -24320;
loc_83AC3510:
	// bl 0x831ea400
	ctx.lr = 0x83AC3514;
	sub_831EA400(ctx, base);
	// b 0x83ac35e4
	goto loc_83AC35E4;
loc_83AC3518:
	// ld r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 176);
	// ld r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 168);
	// cmpdi cr6,r9,-1
	cr6.compare<int64_t>(ctx.r9.s64, -1, xer);
	// subf r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	// beq cr6,0x83ac3538
	if (cr6.eq) goto loc_83AC3538;
	// cmpd cr6,r9,r11
	cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, xer);
	// bge cr6,0x83ac3538
	if (!cr6.lt) goto loc_83AC3538;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83AC3538:
	// std r11,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bge cr6,0x83ac3578
	if (!cr6.lt) goto loc_83AC3578;
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83ac3564
	if (cr6.eq) goto loc_83AC3564;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-24384
	ctx.r4.s64 = ctx.r11.s64 + -24384;
	// b 0x83ac3570
	goto loc_83AC3570;
loc_83AC3564:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r4,r11,-24444
	ctx.r4.s64 = ctx.r11.s64 + -24444;
loc_83AC3570:
	// bl 0x831ea410
	ctx.lr = 0x83AC3574;
	sub_831EA410(ctx, base);
	// b 0x83ac35e4
	goto loc_83AC35E4;
loc_83AC3578:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac358c
	if (cr6.eq) goto loc_83AC358C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac23d0
	ctx.lr = 0x83AC358C;
	sub_83AC23D0(ctx, base);
loc_83AC358C:
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac35a4
	if (cr6.eq) goto loc_83AC35A4;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// bl 0x83aba7c8
	ctx.lr = 0x83AC35A0;
	sub_83ABA7C8(ctx, base);
	// b 0x83ac362c
	goto loc_83AC362C;
loc_83AC35A4:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ac362c
	if (!cr6.eq) goto loc_83AC362C;
	// bl 0x83a94050
	ctx.lr = 0x83AC35B4;
	sub_83A94050(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83ac35d0
	if (!cr0.eq) goto loc_83AC35D0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24500
	ctx.r4.s64 = ctx.r11.s64 + -24500;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC35CC;
	sub_831EA3F0(ctx, base);
	// b 0x83ac35e4
	goto loc_83AC35E4;
loc_83AC35D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a95a20
	ctx.lr = 0x83AC35DC;
	sub_83A95A20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ac3628
	if (!cr0.eq) goto loc_83AC3628;
loc_83AC35E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac361c
	if (cr6.eq) goto loc_83AC361C;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x83ac361c
	if (cr6.eq) goto loc_83AC361C;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// ble cr6,0x83ac3614
	if (!cr6.gt) goto loc_83AC3614;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bgt cr6,0x83ac3614
	if (cr6.gt) goto loc_83AC3614;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2ab8
	ctx.lr = 0x83AC3610;
	sub_83AC2AB8(ctx, base);
	// b 0x83ac361c
	goto loc_83AC361C;
loc_83AC3614:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AC361C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// b 0x83ac3634
	goto loc_83AC3634;
loc_83AC3628:
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
loc_83AC362C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2b08
	ctx.lr = 0x83AC3634;
	sub_83AC2B08(ctx, base);
loc_83AC3634:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC364C"))) PPC_WEAK_FUNC(sub_83AC364C);
PPC_FUNC_IMPL(__imp__sub_83AC364C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC3650"))) PPC_WEAK_FUNC(sub_83AC3650);
PPC_FUNC_IMPL(__imp__sub_83AC3650) {
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
	// bl 0x83ac2a30
	ctx.lr = 0x83AC3668;
	sub_83AC2A30(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ae2e88
	ctx.lr = 0x83AC3670;
	sub_83AE2E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac31b0
	ctx.lr = 0x83AC3678;
	sub_83AC31B0(ctx, base);
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

__attribute__((alias("__imp__sub_83AC368C"))) PPC_WEAK_FUNC(sub_83AC368C);
PPC_FUNC_IMPL(__imp__sub_83AC368C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC3690"))) PPC_WEAK_FUNC(sub_83AC3690);
PPC_FUNC_IMPL(__imp__sub_83AC3690) {
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
	// bl 0x83ac2a30
	ctx.lr = 0x83AC36A8;
	sub_83AC2A30(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ae2e88
	ctx.lr = 0x83AC36B0;
	sub_83AE2E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac31b0
	ctx.lr = 0x83AC36B8;
	sub_83AC31B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83ac373c
	if (cr6.eq) goto loc_83AC373C;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x825832e0
	ctx.lr = 0x83AC36C8;
	sub_825832E0(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83ac36d8
	if (!cr6.eq) goto loc_83AC36D8;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x83ac3738
	goto loc_83AC3738;
loc_83AC36D8:
	// ld r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 176);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// blt cr6,0x83ac3708
	if (cr6.lt) goto loc_83AC3708;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x83b675e0
	ctx.lr = 0x83AC36F0;
	sub_83B675E0(ctx, base);
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// ld r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 176);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, xer);
	// bge cr6,0x83ac3720
	if (!cr6.lt) goto loc_83AC3720;
loc_83AC3708:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac373c
	if (cr6.eq) goto loc_83AC373C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2b08
	ctx.lr = 0x83AC371C;
	sub_83AC2B08(ctx, base);
	// b 0x83ac373c
	goto loc_83AC373C;
loc_83AC3720:
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac3734
	if (cr6.eq) goto loc_83AC3734;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// bl 0x83aba8f0
	ctx.lr = 0x83AC3734;
	sub_83ABA8F0(ctx, base);
loc_83AC3734:
	// li r11,4
	ctx.r11.s64 = 4;
loc_83AC3738:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AC373C:
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

__attribute__((alias("__imp__sub_83AC3750"))) PPC_WEAK_FUNC(sub_83AC3750);
PPC_FUNC_IMPL(__imp__sub_83AC3750) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83ac2a30
	ctx.lr = 0x83AC3768;
	sub_83AC2A30(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ae2e88
	ctx.lr = 0x83AC3770;
	sub_83AE2E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac31b0
	ctx.lr = 0x83AC3778;
	sub_83AC31B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83ac37cc
	if (cr6.eq) goto loc_83AC37CC;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x825832e0
	ctx.lr = 0x83AC3788;
	sub_825832E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ac37cc
	if (cr0.eq) goto loc_83AC37CC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac37cc
	if (cr6.eq) goto loc_83AC37CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// std r11,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x83ae2d60
	ctx.lr = 0x83AC37C4;
	sub_83AE2D60(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AC37CC:
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

__attribute__((alias("__imp__sub_83AC37E0"))) PPC_WEAK_FUNC(sub_83AC37E0);
PPC_FUNC_IMPL(__imp__sub_83AC37E0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83ac2a30
	ctx.lr = 0x83AC37FC;
	sub_83AC2A30(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ae2e88
	ctx.lr = 0x83AC3804;
	sub_83AE2E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac31b0
	ctx.lr = 0x83AC380C;
	sub_83AC31B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83ac386c
	if (cr6.eq) goto loc_83AC386C;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x825832e0
	ctx.lr = 0x83AC381C;
	sub_825832E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ac386c
	if (!cr0.eq) goto loc_83AC386C;
	// ld r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 176);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bne cr6,0x83ac386c
	if (!cr6.eq) goto loc_83AC386C;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AC384C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 176);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bne cr6,0x83ac3868
	if (!cr6.eq) goto loc_83AC3868;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x83ac386c
	goto loc_83AC386C;
loc_83AC3868:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83AC386C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC3884"))) PPC_WEAK_FUNC(sub_83AC3884);
PPC_FUNC_IMPL(__imp__sub_83AC3884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC3888"))) PPC_WEAK_FUNC(sub_83AC3888);
PPC_FUNC_IMPL(__imp__sub_83AC3888) {
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
	// bl 0x83ac2a30
	ctx.lr = 0x83AC38A0;
	sub_83AC2A30(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83ae2e88
	ctx.lr = 0x83AC38A8;
	sub_83AE2E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac31b0
	ctx.lr = 0x83AC38B0;
	sub_83AC31B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83ac390c
	if (cr6.eq) goto loc_83AC390C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac390c
	if (cr6.eq) goto loc_83AC390C;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x825832e0
	ctx.lr = 0x83AC38CC;
	sub_825832E0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83ac38dc
	if (cr6.eq) goto loc_83AC38DC;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83ac3904
	if (!cr6.eq) goto loc_83AC3904;
loc_83AC38DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// std r11,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x83ae2d60
	ctx.lr = 0x83AC3904;
	sub_83AE2D60(ctx, base);
loc_83AC3904:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AC390C:
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

__attribute__((alias("__imp__sub_83AC3920"))) PPC_WEAK_FUNC(sub_83AC3920);
PPC_FUNC_IMPL(__imp__sub_83AC3920) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ac33c0
	sub_83AC33C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC3924"))) PPC_WEAK_FUNC(sub_83AC3924);
PPC_FUNC_IMPL(__imp__sub_83AC3924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC3928"))) PPC_WEAK_FUNC(sub_83AC3928);
PPC_FUNC_IMPL(__imp__sub_83AC3928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC3930;
	__savegprlr_29(ctx, base);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83ac3a1c
	if (cr6.gt) goto loc_83AC3A1C;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
loc_83AC393C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83ac3a1c
	if (cr6.eq) goto loc_83AC3A1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,36(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r11,r29,r6
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r6.s32);
	// lhzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | ctx.r30.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// subf. r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83ac3a24
	if (cr0.eq) goto loc_83AC3A24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac39e0
	if (!cr6.gt) goto loc_83AC39E0;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x83ac3a1c
	if (cr6.eq) goto loc_83AC3A1C;
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq 0x83ac39c0
	if (cr0.eq) goto loc_83AC39C0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83AC39C0:
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// ble cr6,0x83ac39cc
	if (!cr6.gt) goto loc_83AC39CC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_83AC39CC:
	// addi r8,r6,-1
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bge cr6,0x83ac3a10
	if (!cr6.lt) goto loc_83AC3A10;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// b 0x83ac3a10
	goto loc_83AC3A10;
loc_83AC39E0:
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x83ac3a1c
	if (cr6.eq) goto loc_83AC3A1C;
	// subf r10,r6,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r6.s64;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// beq 0x83ac3a00
	if (cr0.eq) goto loc_83AC3A00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83AC3A00:
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bge cr6,0x83ac3a0c
	if (!cr6.lt) goto loc_83AC3A0C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83AC3A0C:
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
loc_83AC3A10:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// ble cr6,0x83ac393c
	if (!cr6.gt) goto loc_83AC393C;
loc_83AC3A1C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83AC3A20:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83AC3A24:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x83ac3a20
	goto loc_83AC3A20;
}

__attribute__((alias("__imp__sub_83AC3A2C"))) PPC_WEAK_FUNC(sub_83AC3A2C);
PPC_FUNC_IMPL(__imp__sub_83AC3A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC3A30"))) PPC_WEAK_FUNC(sub_83AC3A30);
PPC_FUNC_IMPL(__imp__sub_83AC3A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC3A38;
	__savegprlr_29(ctx, base);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83ac3b0c
	if (cr6.gt) goto loc_83AC3B0C;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
loc_83AC3A44:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83ac3b0c
	if (cr6.eq) goto loc_83AC3B0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,36(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r11,r29,r6
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r6.s32);
	// lhzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// subf. r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83ac3b14
	if (cr0.eq) goto loc_83AC3B14;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac3ad0
	if (!cr6.gt) goto loc_83AC3AD0;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x83ac3b0c
	if (cr6.eq) goto loc_83AC3B0C;
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq 0x83ac3ab0
	if (cr0.eq) goto loc_83AC3AB0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83AC3AB0:
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// ble cr6,0x83ac3abc
	if (!cr6.gt) goto loc_83AC3ABC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_83AC3ABC:
	// addi r8,r6,-1
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bge cr6,0x83ac3b00
	if (!cr6.lt) goto loc_83AC3B00;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// b 0x83ac3b00
	goto loc_83AC3B00;
loc_83AC3AD0:
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x83ac3b0c
	if (cr6.eq) goto loc_83AC3B0C;
	// subf r10,r6,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r6.s64;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// beq 0x83ac3af0
	if (cr0.eq) goto loc_83AC3AF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83AC3AF0:
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bge cr6,0x83ac3afc
	if (!cr6.lt) goto loc_83AC3AFC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83AC3AFC:
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
loc_83AC3B00:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// ble cr6,0x83ac3a44
	if (!cr6.gt) goto loc_83AC3A44;
loc_83AC3B0C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83AC3B10:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83AC3B14:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x83ac3b10
	goto loc_83AC3B10;
}

__attribute__((alias("__imp__sub_83AC3B1C"))) PPC_WEAK_FUNC(sub_83AC3B1C);
PPC_FUNC_IMPL(__imp__sub_83AC3B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC3B20"))) PPC_WEAK_FUNC(sub_83AC3B20);
PPC_FUNC_IMPL(__imp__sub_83AC3B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AC3B28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// b 0x83ac3c34
	goto loc_83AC3C34;
loc_83AC3B48:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac3c3c
	if (cr6.eq) goto loc_83AC3C3C;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lhzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x839f82f0
	ctx.lr = 0x83AC3BB0;
	sub_839F82F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ac3c48
	if (cr0.eq) goto loc_83AC3C48;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83ac3c00
	if (!cr6.gt) goto loc_83AC3C00;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x83ac3c3c
	if (cr6.eq) goto loc_83AC3C3C;
	// subf r10,r30,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r30.s64;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq 0x83ac3be0
	if (cr0.eq) goto loc_83AC3BE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83AC3BE0:
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// ble cr6,0x83ac3bec
	if (!cr6.gt) goto loc_83AC3BEC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83AC3BEC:
	// addi r29,r31,-1
	ctx.r29.s64 = ctx.r31.s64 + -1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x83ac3c30
	if (!cr6.lt) goto loc_83AC3C30;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x83ac3c30
	goto loc_83AC3C30;
loc_83AC3C00:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x83ac3c3c
	if (cr6.eq) goto loc_83AC3C3C;
	// subf r10,r31,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r31.s64;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq 0x83ac3c20
	if (cr0.eq) goto loc_83AC3C20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83AC3C20:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x83ac3c2c
	if (!cr6.lt) goto loc_83AC3C2C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83AC3C2C:
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
loc_83AC3C30:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83AC3C34:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// ble cr6,0x83ac3b48
	if (!cr6.gt) goto loc_83AC3B48;
loc_83AC3C3C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83AC3C40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83AC3C48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83ac3c40
	goto loc_83AC3C40;
}

__attribute__((alias("__imp__sub_83AC3C50"))) PPC_WEAK_FUNC(sub_83AC3C50);
PPC_FUNC_IMPL(__imp__sub_83AC3C50) {
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
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lbzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x83ac3c90
	if (!cr6.eq) goto loc_83AC3C90;
	// bl 0x83b68a78
	ctx.lr = 0x83AC3C7C;
	sub_83B68A78(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83ac3ca0
	if (!cr6.eq) goto loc_83AC3CA0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x83ac3ca0
	goto loc_83AC3CA0;
loc_83AC3C90:
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x83ac3ca0
	if (!cr6.eq) goto loc_83AC3CA0;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC3C9C;
	sub_83B68AE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83AC3CA0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

__attribute__((alias("__imp__sub_83AC3CB8"))) PPC_WEAK_FUNC(sub_83AC3CB8);
PPC_FUNC_IMPL(__imp__sub_83AC3CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC3CC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,356
	ctx.r9.s64 = ctx.r3.s64 + 356;
	// addi r8,r3,228
	ctx.r8.s64 = ctx.r3.s64 + 228;
	// addi r7,r3,100
	ctx.r7.s64 = ctx.r3.s64 + 100;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83b68830
	ctx.lr = 0x83AC3CE8;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac3fa8
	if (cr0.eq) goto loc_83AC3FA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// ble cr6,0x83ac3e00
	if (!cr6.gt) goto loc_83AC3E00;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 48);
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
	// sth r11,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r11.u16);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhz r11,50(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 50);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r11.u16);
	// b 0x83ac3e08
	goto loc_83AC3E08;
loc_83AC3E00:
	// sth r7,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r7.u16);
	// sth r7,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r7.u16);
loc_83AC3E08:
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
	// ble cr6,0x83ac3e5c
	if (!cr6.gt) goto loc_83AC3E5C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lhz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x83ac3e60
	goto loc_83AC3E60;
loc_83AC3E5C:
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
loc_83AC3E60:
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(ctx.r11.u32, 29, xer);
	// ble cr6,0x83ac3eb0
	if (!cr6.gt) goto loc_83AC3EB0;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,58(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 58);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
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
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83ac3eb8
	goto loc_83AC3EB8;
loc_83AC3EB0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
loc_83AC3EB8:
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r11,263
	ctx.r11.s64 = 17235968;
	// stfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac3f10
	if (cr6.lt) goto loc_83AC3F10;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 68);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83ac3f18
	goto loc_83AC3F18;
loc_83AC3F10:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r11,r11,-22544
	ctx.r11.s64 = ctx.r11.s64 + -22544;
loc_83AC3F18:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r11,274
	ctx.r11.s64 = 17956864;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac3f40
	if (cr6.lt) goto loc_83AC3F40;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,70(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 70);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x83ac3f44
	goto loc_83AC3F44;
loc_83AC3F40:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83AC3F44:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lis r11,293
	ctx.r11.s64 = 19202048;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac3f90
	if (cr6.lt) goto loc_83AC3F90;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,82(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 82);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 84);
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
	// sth r11,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r11.u16);
	// b 0x83ac3f9c
	goto loc_83AC3F9C;
loc_83AC3F90:
	// li r11,255
	ctx.r11.s64 = 255;
	// sth r7,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r7.u16);
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
loc_83AC3F9C:
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_83AC3FA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC3FB0"))) PPC_WEAK_FUNC(sub_83AC3FB0);
PPC_FUNC_IMPL(__imp__sub_83AC3FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,32
	cr6.compare<int32_t>(ctx.r4.s32, 32, xer);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// bgt cr6,0x83ac4498
	if (cr6.gt) goto loc_83AC4498;
	// beq cr6,0x83ac440c
	if (cr6.eq) goto loc_83AC440C;
	// cmpwi cr6,r4,23
	cr6.compare<int32_t>(ctx.r4.s32, 23, xer);
	// bgt cr6,0x83ac429c
	if (cr6.gt) goto loc_83AC429C;
	// beq cr6,0x83ac4238
	if (cr6.eq) goto loc_83AC4238;
	// cmpwi cr6,r4,7
	cr6.compare<int32_t>(ctx.r4.s32, 7, xer);
	// blt cr6,0x83ac47f8
	if (cr6.lt) goto loc_83AC47F8;
	// cmpwi cr6,r4,19
	cr6.compare<int32_t>(ctx.r4.s32, 19, xer);
	// ble cr6,0x83ac3ff4
	if (!cr6.gt) goto loc_83AC3FF4;
	// cmpwi cr6,r4,20
	cr6.compare<int32_t>(ctx.r4.s32, 20, xer);
	// beq cr6,0x83ac4080
	if (cr6.eq) goto loc_83AC4080;
	// cmpwi cr6,r4,21
	cr6.compare<int32_t>(ctx.r4.s32, 21, xer);
	// bne cr6,0x83ac47f8
	if (!cr6.eq) goto loc_83AC47F8;
loc_83AC3FF4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lhzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_83AC4078:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x83ac47e8
	goto loc_83AC47E8;
loc_83AC4080:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83ac4114
	if (cr6.gt) goto loc_83AC4114;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lhz r10,40(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// b 0x83ac4078
	goto loc_83AC4078;
loc_83AC4114:
	// lis r10,96
	ctx.r10.s64 = 6291456;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bgt cr6,0x83ac41c0
	if (cr6.gt) goto loc_83AC41C0;
	// lhz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 56);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lhz r10,56(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 56);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// b 0x83ac47e8
	goto loc_83AC47E8;
loc_83AC41C0:
	// lhz r10,124(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 124);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lhz r10,124(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 124);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// b 0x83ac4078
	goto loc_83AC4078;
loc_83AC4238:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// cmplwi cr6,r9,23
	cr6.compare<uint32_t>(ctx.r9.u32, 23, xer);
	// ble cr6,0x83ac47f0
	if (!cr6.gt) goto loc_83AC47F0;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r10,46(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 46);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,46(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 46);
	// b 0x83ac47b8
	goto loc_83AC47B8;
loc_83AC429C:
	// cmpwi cr6,r4,27
	cr6.compare<int32_t>(ctx.r4.s32, 27, xer);
	// beq cr6,0x83ac43a8
	if (cr6.eq) goto loc_83AC43A8;
	// cmpwi cr6,r4,30
	cr6.compare<int32_t>(ctx.r4.s32, 30, xer);
	// beq cr6,0x83ac4318
	if (cr6.eq) goto loc_83AC4318;
	// cmpwi cr6,r4,31
	cr6.compare<int32_t>(ctx.r4.s32, 31, xer);
	// bne cr6,0x83ac47f8
	if (!cr6.eq) goto loc_83AC47F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// cmplwi cr6,r9,31
	cr6.compare<uint32_t>(ctx.r9.u32, 31, xer);
	// ble cr6,0x83ac47f0
	if (!cr6.gt) goto loc_83AC47F0;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,62(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 62);
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
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,62(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 62);
	// b 0x83ac47b8
	goto loc_83AC47B8;
loc_83AC4318:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// cmplwi cr6,r9,30
	cr6.compare<uint32_t>(ctx.r9.u32, 30, xer);
	// ble cr6,0x83ac47f0
	if (!cr6.gt) goto loc_83AC47F0;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,60(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 60);
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
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,60(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 60);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x83ac47e4
	goto loc_83AC47E4;
loc_83AC43A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// cmplwi cr6,r9,27
	cr6.compare<uint32_t>(ctx.r9.u32, 27, xer);
	// ble cr6,0x83ac47f0
	if (!cr6.gt) goto loc_83AC47F0;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,54(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 54);
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
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,54(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 54);
	// b 0x83ac47b8
	goto loc_83AC47B8;
loc_83AC440C:
	// lis r11,129
	ctx.r11.s64 = 8454144;
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac47f0
	if (cr6.lt) goto loc_83AC47F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 64);
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
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,64(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 64);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x83ac47d8
	goto loc_83AC47D8;
loc_83AC4498:
	// cmpwi cr6,r4,33
	cr6.compare<int32_t>(ctx.r4.s32, 33, xer);
	// beq cr6,0x83ac4750
	if (cr6.eq) goto loc_83AC4750;
	// cmpwi cr6,r4,36
	cr6.compare<int32_t>(ctx.r4.s32, 36, xer);
	// beq cr6,0x83ac46e8
	if (cr6.eq) goto loc_83AC46E8;
	// cmpwi cr6,r4,37
	cr6.compare<int32_t>(ctx.r4.s32, 37, xer);
	// beq cr6,0x83ac4680
	if (cr6.eq) goto loc_83AC4680;
	// cmpwi cr6,r4,38
	cr6.compare<int32_t>(ctx.r4.s32, 38, xer);
	// beq cr6,0x83ac4618
	if (cr6.eq) goto loc_83AC4618;
	// cmpwi cr6,r4,39
	cr6.compare<int32_t>(ctx.r4.s32, 39, xer);
	// beq cr6,0x83ac45b0
	if (cr6.eq) goto loc_83AC45B0;
	// cmpwi cr6,r4,40
	cr6.compare<int32_t>(ctx.r4.s32, 40, xer);
	// beq cr6,0x83ac4534
	if (cr6.eq) goto loc_83AC4534;
	// cmpwi cr6,r4,63
	cr6.compare<int32_t>(ctx.r4.s32, 63, xer);
	// bne cr6,0x83ac47f8
	if (!cr6.eq) goto loc_83AC47F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// cmplwi cr6,r9,63
	cr6.compare<uint32_t>(ctx.r9.u32, 63, xer);
	// ble cr6,0x83ac47f0
	if (!cr6.gt) goto loc_83AC47F0;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,126(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 126);
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
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,126(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 126);
	// b 0x83ac47b8
	goto loc_83AC47B8;
loc_83AC4534:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r9,292
	ctx.r9.s64 = 19136512;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83ac47f0
	if (cr6.lt) goto loc_83AC47F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 80);
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
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,80(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 80);
loc_83AC4598:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x83ac47cc
	goto loc_83AC47CC;
loc_83AC45B0:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r9,291
	ctx.r9.s64 = 19070976;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83ac47f0
	if (cr6.lt) goto loc_83AC47F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,78(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 78);
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
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,78(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 78);
	// b 0x83ac4598
	goto loc_83AC4598;
loc_83AC4618:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r9,278
	ctx.r9.s64 = 18219008;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83ac47f0
	if (cr6.lt) goto loc_83AC47F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,76(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 76);
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
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,76(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 76);
	// b 0x83ac47b8
	goto loc_83AC47B8;
loc_83AC4680:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r9,277
	ctx.r9.s64 = 18153472;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83ac47f0
	if (cr6.lt) goto loc_83AC47F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,74(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 74);
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
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,74(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 74);
	// b 0x83ac4598
	goto loc_83AC4598;
loc_83AC46E8:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r9,275
	ctx.r9.s64 = 18022400;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83ac47f0
	if (cr6.lt) goto loc_83AC47F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,72(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 72);
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
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 72);
	// b 0x83ac4598
	goto loc_83AC4598;
loc_83AC4750:
	// lis r11,129
	ctx.r11.s64 = 8454144;
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac47f0
	if (cr6.lt) goto loc_83AC47F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,66(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 66);
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
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,66(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 66);
loc_83AC47B8:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_83AC47CC:
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
loc_83AC47D8:
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_83AC47E4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83AC47E8:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// b 0x83ac47f8
	goto loc_83AC47F8;
loc_83AC47F0:
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
loc_83AC47F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r4,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC4804"))) PPC_WEAK_FUNC(sub_83AC4804);
PPC_FUNC_IMPL(__imp__sub_83AC4804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC4808"))) PPC_WEAK_FUNC(sub_83AC4808);
PPC_FUNC_IMPL(__imp__sub_83AC4808) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,88
	ctx.r9.s64 = ctx.r3.s64 + 88;
	// addi r8,r3,70
	ctx.r8.s64 = ctx.r3.s64 + 70;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC4834;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac484c
	if (cr0.eq) goto loc_83AC484C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83AC484C:
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

__attribute__((alias("__imp__sub_83AC4860"))) PPC_WEAK_FUNC(sub_83AC4860);
PPC_FUNC_IMPL(__imp__sub_83AC4860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AC4868;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r30,r4,16
	ctx.r30.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac488c
	if (cr6.lt) goto loc_83AC488C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac49f4
	goto loc_83AC49F4;
loc_83AC488C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC48E8;
	sub_83B68A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC4900;
	sub_83B68A78(ctx, base);
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68c00
	ctx.lr = 0x83AC4914;
	sub_83B68C00(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC4928;
	sub_83B68A78(ctx, base);
	// sth r3,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r3.u16);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// ble cr6,0x83ac4954
	if (!cr6.gt) goto loc_83AC4954;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC494C;
	sub_83B68AE8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// b 0x83ac4958
	goto loc_83AC4958;
loc_83AC4954:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
loc_83AC4958:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// ble cr6,0x83ac499c
	if (!cr6.gt) goto loc_83AC499C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC4980;
	sub_83B68C90(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC4990;
	sub_83B68A28(ctx, base);
	// stb r3,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r3.u8);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// b 0x83ac49c8
	goto loc_83AC49C8;
loc_83AC499C:
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lhz r9,10(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 10);
	// stb r8,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r8.u8);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_83AC49C8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// ble cr6,0x83ac49ec
	if (!cr6.gt) goto loc_83AC49EC;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a28
	ctx.lr = 0x83AC49E4;
	sub_83B68A28(ctx, base);
	// stb r3,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r3.u8);
	// b 0x83ac49f0
	goto loc_83AC49F0;
loc_83AC49EC:
	// stb r28,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r28.u8);
loc_83AC49F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC49F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC49FC"))) PPC_WEAK_FUNC(sub_83AC49FC);
PPC_FUNC_IMPL(__imp__sub_83AC49FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC4A00"))) PPC_WEAK_FUNC(sub_83AC4A00);
PPC_FUNC_IMPL(__imp__sub_83AC4A00) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83ac4a24
	if (cr6.gt) goto loc_83AC4A24;
loc_83AC4A1C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83ac4a48
	goto loc_83AC4A48;
loc_83AC4A24:
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x83ac4a1c
	if (cr6.eq) goto loc_83AC4A1C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x83ac3928
	ctx.lr = 0x83AC4A44;
	sub_83AC3928(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
loc_83AC4A48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC4A58"))) PPC_WEAK_FUNC(sub_83AC4A58);
PPC_FUNC_IMPL(__imp__sub_83AC4A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AC4A60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83ac4b2c
	if (!cr6.gt) goto loc_83AC4B2C;
loc_83AC4A84:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a28
	ctx.lr = 0x83AC4A94;
	sub_83B68A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC4AAC;
	sub_83B68A78(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// sth r3,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r3.u16);
	// bne cr6,0x83ac4acc
	if (!cr6.eq) goto loc_83AC4ACC;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83ac4ae0
	if (cr6.eq) goto loc_83AC4AE0;
loc_83AC4ACC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac4a84
	if (cr6.lt) goto loc_83AC4A84;
	// b 0x83ac4b2c
	goto loc_83AC4B2C;
loc_83AC4AE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r11,r8,r30
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// lhz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83AC4B2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC4B34"))) PPC_WEAK_FUNC(sub_83AC4B34);
PPC_FUNC_IMPL(__imp__sub_83AC4B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC4B38"))) PPC_WEAK_FUNC(sub_83AC4B38);
PPC_FUNC_IMPL(__imp__sub_83AC4B38) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83ac4bac
	if (!cr6.gt) goto loc_83AC4BAC;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83AC4B58:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,36(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lhz r10,2(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r10.u16);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beq cr6,0x83ac4bd4
	if (cr6.eq) goto loc_83AC4BD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83ac4b58
	if (cr6.lt) goto loc_83AC4B58;
loc_83AC4BAC:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r4,r11,-24156
	ctx.r4.s64 = ctx.r11.s64 + -24156;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83AC4BC0;
	sub_831EA400(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AC4BC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83AC4BD4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x83ac4bc4
	goto loc_83AC4BC4;
}

__attribute__((alias("__imp__sub_83AC4C30"))) PPC_WEAK_FUNC(sub_83AC4C30);
PPC_FUNC_IMPL(__imp__sub_83AC4C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac4c4c
	if (cr6.lt) goto loc_83AC4C4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AC4C4C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lhz r9,2(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC4CDC"))) PPC_WEAK_FUNC(sub_83AC4CDC);
PPC_FUNC_IMPL(__imp__sub_83AC4CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC4CE0"))) PPC_WEAK_FUNC(sub_83AC4CE0);
PPC_FUNC_IMPL(__imp__sub_83AC4CE0) {
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
	// addi r9,r3,108
	ctx.r9.s64 = ctx.r3.s64 + 108;
	// addi r8,r3,80
	ctx.r8.s64 = ctx.r3.s64 + 80;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,14
	ctx.r6.s64 = 14;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC4D10;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac4d6c
	if (cr0.eq) goto loc_83AC4D6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq cr6,0x83ac4d68
	if (cr6.eq) goto loc_83AC4D68;
loc_83AC4D30:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68db0
	ctx.lr = 0x83AC4D44;
	sub_83B68DB0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68db0
	ctx.lr = 0x83AC4D58;
	sub_83B68DB0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac4d30
	if (cr6.lt) goto loc_83AC4D30;
loc_83AC4D68:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC4D6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC4D84"))) PPC_WEAK_FUNC(sub_83AC4D84);
PPC_FUNC_IMPL(__imp__sub_83AC4D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC4D88"))) PPC_WEAK_FUNC(sub_83AC4D88);
PPC_FUNC_IMPL(__imp__sub_83AC4D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC4D90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC4DB8;
	sub_83B68A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68c00
	ctx.lr = 0x83AC4DD0;
	sub_83B68C00(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC4DE4;
	sub_83AC3C50(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC4E00;
	sub_83B68C90(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83ac4e18
	if (cr6.eq) goto loc_83AC4E18;
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// b 0x83ac4e1c
	goto loc_83AC4E1C;
loc_83AC4E18:
	// rlwinm r11,r11,29,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFF;
loc_83AC4E1C:
	// stb r11,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r11.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC4E38;
	sub_83B68C90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,31,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFF;
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r11,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r11.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC4E54;
	sub_83B68A78(ctx, base);
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC4E68;
	sub_83B68A78(ctx, base);
	// sth r3,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r3.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhz r11,14(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 14);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r11.u16);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// ble cr6,0x83ac4ec8
	if (!cr6.gt) goto loc_83AC4EC8;
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC4EC4;
	sub_83B68C90(ctx, base);
	// b 0x83ac4ed0
	goto loc_83AC4ED0;
loc_83AC4EC8:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
loc_83AC4ED0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// ble cr6,0x83ac4ef4
	if (!cr6.gt) goto loc_83AC4EF4;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC4EEC;
	sub_83AC3C50(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// b 0x83ac4efc
	goto loc_83AC4EFC;
loc_83AC4EF4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_83AC4EFC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// ble cr6,0x83ac4f34
	if (!cr6.gt) goto loc_83AC4F34;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC4F18;
	sub_83B68A78(ctx, base);
	// sth r3,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r3.u16);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC4F2C;
	sub_83B68A78(ctx, base);
	// sth r3,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r3.u16);
	// b 0x83ac4f40
	goto loc_83AC4F40;
loc_83AC4F34:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r28,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r28.u16);
	// sth r11,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r11.u16);
loc_83AC4F40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC4F48"))) PPC_WEAK_FUNC(sub_83AC4F48);
PPC_FUNC_IMPL(__imp__sub_83AC4F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lhz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83b68db0
	sub_83B68DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC4F6C"))) PPC_WEAK_FUNC(sub_83AC4F6C);
PPC_FUNC_IMPL(__imp__sub_83AC4F6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC4F70"))) PPC_WEAK_FUNC(sub_83AC4F70);
PPC_FUNC_IMPL(__imp__sub_83AC4F70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,92
	ctx.r9.s64 = ctx.r3.s64 + 92;
	// addi r8,r3,72
	ctx.r8.s64 = ctx.r3.s64 + 72;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC4F9C;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac4fb4
	if (cr0.eq) goto loc_83AC4FB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83AC4FB4:
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

__attribute__((alias("__imp__sub_83AC4FC8"))) PPC_WEAK_FUNC(sub_83AC4FC8);
PPC_FUNC_IMPL(__imp__sub_83AC4FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83AC4FD0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r25,r11,10
	xer.ca = ctx.r11.u32 <= 10;
	ctx.r25.s64 = 10 - ctx.r11.s64;
	// bl 0x831ea798
	ctx.lr = 0x83AC4FFC;
	sub_831EA798(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// clrlwi r30,r30,16
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFF;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// sth r11,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r28,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r28.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
	// addi r27,r31,20
	ctx.r27.s64 = ctx.r31.s64 + 20;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r26,r31,24
	ctx.r26.s64 = ctx.r31.s64 + 24;
	// bl 0x83b68a28
	ctx.lr = 0x83AC5048;
	sub_83B68A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// beq cr6,0x83ac509c
	if (cr6.eq) goto loc_83AC509C;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// beq cr6,0x83ac5094
	if (cr6.eq) goto loc_83AC5094;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// beq cr6,0x83ac5088
	if (cr6.eq) goto loc_83AC5088;
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(ctx.r11.s32, 17, xer);
	// beq cr6,0x83ac5078
	if (cr6.eq) goto loc_83AC5078;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// b 0x83ac50a8
	goto loc_83AC50A8;
loc_83AC5078:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x83ac50a4
	goto loc_83AC50A4;
loc_83AC5088:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x83ac50a4
	goto loc_83AC50A4;
loc_83AC5094:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83ac50a0
	goto loc_83AC50A0;
loc_83AC509C:
	// li r11,2
	ctx.r11.s64 = 2;
loc_83AC50A0:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_83AC50A4:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_83AC50A8:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a28
	ctx.lr = 0x83AC50B8;
	sub_83B68A28(ctx, base);
	// stb r3,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r3.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a28
	ctx.lr = 0x83AC50CC;
	sub_83B68A28(ctx, base);
	// stb r3,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r3.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a28
	ctx.lr = 0x83AC50E0;
	sub_83B68A28(ctx, base);
	// stb r3,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r3.u8);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC50F4;
	sub_83B68A78(ctx, base);
	// sth r3,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC5108;
	sub_83B68AE8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x83ac5138
	if (!cr6.eq) goto loc_83AC5138;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC5134;
	sub_83B68C90(ctx, base);
	// b 0x83ac5140
	goto loc_83AC5140;
loc_83AC5138:
	// bl 0x83b68a78
	ctx.lr = 0x83AC513C;
	sub_83B68A78(ctx, base);
	// sth r3,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r3.u16);
loc_83AC5140:
	// cmplwi cr6,r25,1
	cr6.compare<uint32_t>(ctx.r25.u32, 1, xer);
	// blt cr6,0x83ac517c
	if (cr6.lt) goto loc_83AC517C;
	// beq cr6,0x83ac5164
	if (cr6.eq) goto loc_83AC5164;
loc_83AC514C:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83ac51d4
	if (cr6.lt) goto loc_83AC51D4;
	// bne cr6,0x83ac51e8
	if (!cr6.eq) goto loc_83AC51E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x83ac51c0
	goto loc_83AC51C0;
loc_83AC5164:
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC5174;
	sub_83B68A78(ctx, base);
	// sth r3,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r3.u16);
	// b 0x83ac514c
	goto loc_83AC514C;
loc_83AC517C:
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC518C;
	sub_83B68A78(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// sth r3,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r3.u16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83ac51d4
	if (cr6.lt) goto loc_83AC51D4;
	// beq cr6,0x83ac51bc
	if (cr6.eq) goto loc_83AC51BC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x83ac51e8
	if (!cr6.lt) goto loc_83AC51E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC51B8;
	sub_83B68A78(ctx, base);
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
loc_83AC51BC:
	// li r5,9
	ctx.r5.s64 = 9;
loc_83AC51C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC51CC;
	sub_83B68A78(ctx, base);
	// sth r3,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r3.u16);
	// b 0x83ac51e8
	goto loc_83AC51E8;
loc_83AC51D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC51E4;
	sub_83B68A78(ctx, base);
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
loc_83AC51E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC51F0"))) PPC_WEAK_FUNC(sub_83AC51F0);
PPC_FUNC_IMPL(__imp__sub_83AC51F0) {
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
	// addi r9,r3,112
	ctx.r9.s64 = ctx.r3.s64 + 112;
	// addi r8,r3,82
	ctx.r8.s64 = ctx.r3.s64 + 82;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC5220;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac5288
	if (cr0.eq) goto loc_83AC5288;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lhz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// ble cr6,0x83ac5284
	if (!cr6.gt) goto loc_83AC5284;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac5284
	if (cr6.eq) goto loc_83AC5284;
loc_83AC524C:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68db0
	ctx.lr = 0x83AC5260;
	sub_83B68DB0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68db0
	ctx.lr = 0x83AC5274;
	sub_83B68DB0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac524c
	if (cr6.lt) goto loc_83AC524C;
loc_83AC5284:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC5288:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC52A0"))) PPC_WEAK_FUNC(sub_83AC52A0);
PPC_FUNC_IMPL(__imp__sub_83AC52A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83AC52A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lhz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 24);
	// sth r11,32(r5)
	PPC_STORE_U16(ctx.r5.u32 + 32, ctx.r11.u16);
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r11.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r10,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r10.u16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r11,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// sth r10,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r10.u16);
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// sth r11,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r11.u16);
	// addi r26,r31,44
	ctx.r26.s64 = ctx.r31.s64 + 44;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// subfic r25,r9,15
	xer.ca = ctx.r9.u32 <= 15;
	ctx.r25.s64 = 15 - ctx.r9.s64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// sth r7,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r7.u16);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC532C;
	sub_83B68A78(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83ac5340
	if (!cr0.eq) goto loc_83AC5340;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83ac5360
	goto loc_83AC5360;
loc_83AC5340:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,8976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_83AC5360:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC5374;
	sub_83B68A78(ctx, base);
	// sth r3,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r3.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
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
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,36(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83ac3c50
	ctx.lr = 0x83AC5428;
	sub_83AC3C50(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// ble cr6,0x83ac5484
	if (!cr6.gt) goto loc_83AC5484;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC5450;
	sub_83B68C90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,5
	ctx.r5.s64 = 5;
	// rlwinm r11,r11,31,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r11.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC546C;
	sub_83B68A78(ctx, base);
	// sth r3,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r3.u16);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC5480;
	sub_83B68A78(ctx, base);
	// sth r3,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r3.u16);
loc_83AC5484:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x83ac559c
	if (cr6.eq) goto loc_83AC559C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83ac54fc
	if (cr6.eq) goto loc_83AC54FC;
	// cmplwi cr6,r25,4
	cr6.compare<uint32_t>(ctx.r25.u32, 4, xer);
	// beq cr6,0x83ac54bc
	if (cr6.eq) goto loc_83AC54BC;
	// cmplwi cr6,r25,6
	cr6.compare<uint32_t>(ctx.r25.u32, 6, xer);
	// bne cr6,0x83ac5660
	if (!cr6.eq) goto loc_83AC5660;
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC54B4;
	sub_83AC3C50(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// b 0x83ac5660
	goto loc_83AC5660;
loc_83AC54BC:
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC54CC;
	sub_83AC3C50(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC54E0;
	sub_83B68A78(ctx, base);
	// sth r3,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r3.u16);
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC54F4;
	sub_83B68A78(ctx, base);
	// sth r3,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r3.u16);
	// b 0x83ac5660
	goto loc_83AC5660;
loc_83AC54FC:
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC550C;
	sub_83AC3C50(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC5520;
	sub_83B68A78(ctx, base);
	// sth r3,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r3.u16);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC5534;
	sub_83B68A78(ctx, base);
	// sth r3,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r3.u16);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC5550;
	sub_83B68C90(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC5560;
	sub_83B68A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r11,r8,r29
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// lhz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x83ac565c
	goto loc_83AC565C;
loc_83AC559C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// ble cr6,0x83ac55bc
	if (!cr6.gt) goto loc_83AC55BC;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC55B8;
	sub_83AC3C50(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_83AC55BC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// ble cr6,0x83ac55f0
	if (!cr6.gt) goto loc_83AC55F0;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC55D8;
	sub_83B68A78(ctx, base);
	// sth r3,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r3.u16);
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC55EC;
	sub_83B68A78(ctx, base);
	// sth r3,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r3.u16);
loc_83AC55F0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// ble cr6,0x83ac5660
	if (!cr6.gt) goto loc_83AC5660;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC5614;
	sub_83B68C90(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC5624;
	sub_83B68A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_83AC565C:
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
loc_83AC5660:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC5668"))) PPC_WEAK_FUNC(sub_83AC5668);
PPC_FUNC_IMPL(__imp__sub_83AC5668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lhz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 48);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83b68db0
	sub_83B68DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC568C"))) PPC_WEAK_FUNC(sub_83AC568C);
PPC_FUNC_IMPL(__imp__sub_83AC568C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC5690"))) PPC_WEAK_FUNC(sub_83AC5690);
PPC_FUNC_IMPL(__imp__sub_83AC5690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83AC5698;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lhz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 24);
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// sth r9,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r9.u16);
	// addi r26,r31,52
	ctx.r26.s64 = ctx.r31.s64 + 52;
	// sth r11,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r11.u16);
	// subfic r25,r10,15
	xer.ca = ctx.r10.u32 <= 15;
	ctx.r25.s64 = 15 - ctx.r10.s64;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r7,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r7.u16);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC5714;
	sub_83B68A78(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83ac5728
	if (!cr0.eq) goto loc_83AC5728;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83ac5748
	goto loc_83AC5748;
loc_83AC5728:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,8976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_83AC5748:
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC575C;
	sub_83B68A78(ctx, base);
	// sth r3,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r3.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lhz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
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
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,36(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83ac3c50
	ctx.lr = 0x83AC5810;
	sub_83AC3C50(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC5824;
	sub_83B68A78(ctx, base);
	// sth r3,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r3.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhz r11,10(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 10);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
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
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,36(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// lhz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x83ac5a60
	if (cr6.eq) goto loc_83AC5A60;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83ac599c
	if (cr6.eq) goto loc_83AC599C;
	// cmplwi cr6,r25,4
	cr6.compare<uint32_t>(ctx.r25.u32, 4, xer);
	// beq cr6,0x83ac5938
	if (cr6.eq) goto loc_83AC5938;
	// cmplwi cr6,r25,7
	cr6.compare<uint32_t>(ctx.r25.u32, 7, xer);
	// bne cr6,0x83ac5b48
	if (!cr6.eq) goto loc_83AC5B48;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC5900;
	sub_83B68C90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,7
	ctx.r5.s64 = 7;
	// rlwinm r11,r11,31,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC591C;
	sub_83B68A78(ctx, base);
	// sth r3,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r3.u16);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC5930;
	sub_83B68A78(ctx, base);
	// sth r3,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r3.u16);
	// b 0x83ac5b48
	goto loc_83AC5B48;
loc_83AC5938:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC5950;
	sub_83B68C90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,7
	ctx.r5.s64 = 7;
	// rlwinm r11,r11,31,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC596C;
	sub_83B68A78(ctx, base);
	// sth r3,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r3.u16);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC5980;
	sub_83B68A78(ctx, base);
	// sth r3,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r3.u16);
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC5994;
	sub_83AC3C50(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// b 0x83ac5b48
	goto loc_83AC5B48;
loc_83AC599C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC59B4;
	sub_83B68C90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,7
	ctx.r5.s64 = 7;
	// rlwinm r11,r11,31,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC59D0;
	sub_83B68A78(ctx, base);
	// sth r3,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r3.u16);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC59E4;
	sub_83B68A78(ctx, base);
	// sth r3,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r3.u16);
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC59F8;
	sub_83AC3C50(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC5A14;
	sub_83B68C90(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC5A24;
	sub_83B68A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x83ac5b44
	goto loc_83AC5B44;
loc_83AC5A60:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// ble cr6,0x83ac5ab8
	if (!cr6.gt) goto loc_83AC5AB8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC5A84;
	sub_83B68C90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,7
	ctx.r5.s64 = 7;
	// rlwinm r11,r11,31,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC5AA0;
	sub_83B68A78(ctx, base);
	// sth r3,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r3.u16);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC5AB4;
	sub_83B68A78(ctx, base);
	// sth r3,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r3.u16);
loc_83AC5AB8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// ble cr6,0x83ac5ad8
	if (!cr6.gt) goto loc_83AC5AD8;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC5AD4;
	sub_83AC3C50(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
loc_83AC5AD8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// ble cr6,0x83ac5b48
	if (!cr6.gt) goto loc_83AC5B48;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC5AFC;
	sub_83B68C90(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC5B0C;
	sub_83B68A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_83AC5B44:
	// sth r11,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r11.u16);
loc_83AC5B48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC5B50"))) PPC_WEAK_FUNC(sub_83AC5B50);
PPC_FUNC_IMPL(__imp__sub_83AC5B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lhz r6,50(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 50);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83b68db0
	sub_83B68DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC5B74"))) PPC_WEAK_FUNC(sub_83AC5B74);
PPC_FUNC_IMPL(__imp__sub_83AC5B74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC5B78"))) PPC_WEAK_FUNC(sub_83AC5B78);
PPC_FUNC_IMPL(__imp__sub_83AC5B78) {
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
	// addi r9,r3,132
	ctx.r9.s64 = ctx.r3.s64 + 132;
	// addi r8,r3,92
	ctx.r8.s64 = ctx.r3.s64 + 92;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC5BA8;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac5c10
	if (cr0.eq) goto loc_83AC5C10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lhz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// ble cr6,0x83ac5c0c
	if (!cr6.gt) goto loc_83AC5C0C;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lhz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 36);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83ac5c0c
	if (!cr0.eq) goto loc_83AC5C0C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac5c0c
	if (cr6.eq) goto loc_83AC5C0C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83AC5BE4:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68db0
	ctx.lr = 0x83AC5BF8;
	sub_83B68DB0(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac5be4
	if (cr6.lt) goto loc_83AC5BE4;
loc_83AC5C0C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC5C10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC5C28"))) PPC_WEAK_FUNC(sub_83AC5C28);
PPC_FUNC_IMPL(__imp__sub_83AC5C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AC5C30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r11,44(r5)
	PPC_STORE_U16(ctx.r5.u32 + 44, ctx.r11.u16);
	// addi r28,r5,4
	ctx.r28.s64 = ctx.r5.s64 + 4;
	// sth r10,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r10.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r11,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r11.u16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r26,r31,12
	ctx.r26.s64 = ctx.r31.s64 + 12;
	// sth r10,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r10.u16);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC5C8C;
	sub_83B68A78(ctx, base);
	// sth r3,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r3.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
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
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,36(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83ac3c50
	ctx.lr = 0x83AC5D40;
	sub_83AC3C50(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83b68a28
	ctx.lr = 0x83AC5D54;
	sub_83B68A28(ctx, base);
	// stb r3,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r3.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83b68a78
	ctx.lr = 0x83AC5D68;
	sub_83B68A78(ctx, base);
	// sth r3,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r3.u16);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83b68a28
	ctx.lr = 0x83AC5D7C;
	sub_83B68A28(ctx, base);
	// stb r3,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r3.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x83b68a78
	ctx.lr = 0x83AC5D90;
	sub_83B68A78(ctx, base);
	// sth r3,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r3.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83b68a28
	ctx.lr = 0x83AC5DA4;
	sub_83B68A28(ctx, base);
	// stb r3,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r3.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83b68a28
	ctx.lr = 0x83AC5DB8;
	sub_83B68A28(ctx, base);
	// stb r3,35(r31)
	PPC_STORE_U8(ctx.r31.u32 + 35, ctx.r3.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhz r9,18(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 18);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68ae8
	ctx.lr = 0x83AC5E00;
	sub_83B68AE8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC5E14;
	sub_83B68AE8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// ble cr6,0x83ac5e48
	if (!cr6.gt) goto loc_83AC5E48;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC5E3C;
	sub_83B68C90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,31,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFFF;
	// sth r11,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r11.u16);
loc_83AC5E48:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// ble cr6,0x83ac5e7c
	if (!cr6.gt) goto loc_83AC5E7C;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC5E64;
	sub_83B68A78(ctx, base);
	// sth r3,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r3.u16);
	// li r5,14
	ctx.r5.s64 = 14;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC5E78;
	sub_83B68A78(ctx, base);
	// sth r3,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r3.u16);
loc_83AC5E7C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// ble cr6,0x83ac5ee0
	if (!cr6.gt) goto loc_83AC5EE0;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC5E98;
	sub_83B68A78(ctx, base);
	// sth r3,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r3.u16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68c90
	ctx.lr = 0x83AC5EB4;
	sub_83B68C90(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC5ECC;
	sub_83B68C90(ctx, base);
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC5EDC;
	sub_83B68A78(ctx, base);
	// sth r3,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r3.u16);
loc_83AC5EE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC5EE8"))) PPC_WEAK_FUNC(sub_83AC5EE8);
PPC_FUNC_IMPL(__imp__sub_83AC5EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lhz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83b68db0
	sub_83B68DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC5F0C"))) PPC_WEAK_FUNC(sub_83AC5F0C);
PPC_FUNC_IMPL(__imp__sub_83AC5F0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC5F10"))) PPC_WEAK_FUNC(sub_83AC5F10);
PPC_FUNC_IMPL(__imp__sub_83AC5F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC5F18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea798
	ctx.lr = 0x83AC5F38;
	sub_831EA798(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// clrlwi r30,r30,16
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r10,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r10.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stb r10,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r10.u8);
	// sth r9,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r9.u16);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x83ac6084
	if (!cr6.lt) goto loc_83AC6084;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC5F88;
	sub_83AC3C50(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC5F9C;
	sub_83AC3C50(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC5FB8;
	sub_83B68C90(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC5FC8;
	sub_83B68A78(ctx, base);
	// sth r3,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r3.u16);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC5FDC;
	sub_83B68A78(ctx, base);
	// sth r3,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r3.u16);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// ble cr6,0x83ac6000
	if (!cr6.gt) goto loc_83AC6000;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC5FFC;
	sub_83AC3C50(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
loc_83AC6000:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// ble cr6,0x83ac6084
	if (!cr6.gt) goto loc_83AC6084;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a28
	ctx.lr = 0x83AC601C;
	sub_83B68A28(ctx, base);
	// stb r3,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r3.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68c00
	ctx.lr = 0x83AC6030;
	sub_83B68C00(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC6044;
	sub_83B68AE8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68c00
	ctx.lr = 0x83AC6058;
	sub_83B68C00(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a28
	ctx.lr = 0x83AC606C;
	sub_83B68A28(ctx, base);
	// stb r3,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r3.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC6080;
	sub_83B68A78(ctx, base);
	// sth r3,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r3.u16);
loc_83AC6084:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC608C"))) PPC_WEAK_FUNC(sub_83AC608C);
PPC_FUNC_IMPL(__imp__sub_83AC608C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC6090"))) PPC_WEAK_FUNC(sub_83AC6090);
PPC_FUNC_IMPL(__imp__sub_83AC6090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
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
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC6134"))) PPC_WEAK_FUNC(sub_83AC6134);
PPC_FUNC_IMPL(__imp__sub_83AC6134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC6138"))) PPC_WEAK_FUNC(sub_83AC6138);
PPC_FUNC_IMPL(__imp__sub_83AC6138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC6140;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r10,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r9,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r9.u8);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// bl 0x83b68a28
	ctx.lr = 0x83AC6180;
	sub_83B68A28(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC6194;
	sub_83B68A78(ctx, base);
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68b70
	ctx.lr = 0x83AC61AC;
	sub_83B68B70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC61BC;
	sub_83B68A78(ctx, base);
	// sth r3,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r3.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lhz r10,10(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
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
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,36(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// lhz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// ble cr6,0x83ac6294
	if (!cr6.gt) goto loc_83AC6294;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a28
	ctx.lr = 0x83AC627C;
	sub_83B68A28(ctx, base);
	// stb r3,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r3.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68b70
	ctx.lr = 0x83AC6294;
	sub_83B68B70(ctx, base);
loc_83AC6294:
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r10,10000
	ctx.r10.s64 = 10000;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// divw r10,r11,r10
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83ac62d4
	if (cr6.eq) goto loc_83AC62D4;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x83ac62c8
	if (cr6.eq) goto loc_83AC62C8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x83ac62e0
	if (!cr6.eq) goto loc_83AC62E0;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-27000
	ctx.r11.s64 = ctx.r11.s64 + -27000;
	// b 0x83ac62dc
	goto loc_83AC62DC;
loc_83AC62C8:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-18000
	ctx.r11.s64 = ctx.r11.s64 + -18000;
	// b 0x83ac62dc
	goto loc_83AC62DC;
loc_83AC62D4:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-9000
	ctx.r11.s64 = ctx.r11.s64 + -9000;
loc_83AC62DC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_83AC62E0:
	// rlwinm r10,r9,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC62F8"))) PPC_WEAK_FUNC(sub_83AC62F8);
PPC_FUNC_IMPL(__imp__sub_83AC62F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,76
	ctx.r9.s64 = ctx.r3.s64 + 76;
	// addi r8,r3,64
	ctx.r8.s64 = ctx.r3.s64 + 64;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC6324;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac633c
	if (cr0.eq) goto loc_83AC633C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83AC633C:
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

__attribute__((alias("__imp__sub_83AC6350"))) PPC_WEAK_FUNC(sub_83AC6350);
PPC_FUNC_IMPL(__imp__sub_83AC6350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC6358;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea798
	ctx.lr = 0x83AC6378;
	sub_831EA798(ctx, base);
	// clrlwi r29,r29,16
	ctx.r29.u64 = ctx.r29.u32 & 0xFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC638C;
	sub_83B68A78(ctx, base);
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
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
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,36(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lhz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
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
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,36(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r31,24
	ctx.r7.s64 = ctx.r31.s64 + 24;
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// li r5,3
	ctx.r5.s64 = 3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68c90
	ctx.lr = 0x83AC64E8;
	sub_83B68C90(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r11,r8,r29
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// lhz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
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
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lhz r9,10(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 10);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC6598"))) PPC_WEAK_FUNC(sub_83AC6598);
PPC_FUNC_IMPL(__imp__sub_83AC6598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC65A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// lfs f1,28(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83b68de0
	ctx.lr = 0x83AC65C4;
	sub_83B68DE0(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f1,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83b68de0
	ctx.lr = 0x83AC65D8;
	sub_83B68DE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC65E0"))) PPC_WEAK_FUNC(sub_83AC65E0);
PPC_FUNC_IMPL(__imp__sub_83AC65E0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x83b68c00
	ctx.lr = 0x83AC6604;
	sub_83B68C00(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83AC661C"))) PPC_WEAK_FUNC(sub_83AC661C);
PPC_FUNC_IMPL(__imp__sub_83AC661C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC6620"))) PPC_WEAK_FUNC(sub_83AC6620);
PPC_FUNC_IMPL(__imp__sub_83AC6620) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,68
	ctx.r9.s64 = ctx.r3.s64 + 68;
	// addi r8,r3,60
	ctx.r8.s64 = ctx.r3.s64 + 60;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC664C;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac6664
	if (cr0.eq) goto loc_83AC6664;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83AC6664:
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

__attribute__((alias("__imp__sub_83AC6678"))) PPC_WEAK_FUNC(sub_83AC6678);
PPC_FUNC_IMPL(__imp__sub_83AC6678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC6680;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r30,r4,16
	ctx.r30.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC66A0;
	sub_83B68A28(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83b68a28
	ctx.lr = 0x83AC66B4;
	sub_83B68A28(ctx, base);
	// stb r3,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r3.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC66C8;
	sub_83B68AE8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83ac66f0
	if (!cr6.gt) goto loc_83AC66F0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC66E8;
	sub_83B68AE8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x83ac66f8
	goto loc_83AC66F8;
loc_83AC66F0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83AC66F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC6700"))) PPC_WEAK_FUNC(sub_83AC6700);
PPC_FUNC_IMPL(__imp__sub_83AC6700) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,56
	ctx.r9.s64 = ctx.r3.s64 + 56;
	// addi r8,r3,54
	ctx.r8.s64 = ctx.r3.s64 + 54;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC672C;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac6744
	if (cr0.eq) goto loc_83AC6744;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83AC6744:
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

__attribute__((alias("__imp__sub_83AC6758"))) PPC_WEAK_FUNC(sub_83AC6758);
PPC_FUNC_IMPL(__imp__sub_83AC6758) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC67B4"))) PPC_WEAK_FUNC(sub_83AC67B4);
PPC_FUNC_IMPL(__imp__sub_83AC67B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC67B8"))) PPC_WEAK_FUNC(sub_83AC67B8);
PPC_FUNC_IMPL(__imp__sub_83AC67B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC67C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83b68ae8
	ctx.lr = 0x83AC67E0;
	sub_83B68AE8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC67F4;
	sub_83B68A78(ctx, base);
	// sth r3,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r3.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC6800"))) PPC_WEAK_FUNC(sub_83AC6800);
PPC_FUNC_IMPL(__imp__sub_83AC6800) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,104
	ctx.r9.s64 = ctx.r3.s64 + 104;
	// addi r8,r3,78
	ctx.r8.s64 = ctx.r3.s64 + 78;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,13
	ctx.r6.s64 = 13;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC682C;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac6844
	if (cr0.eq) goto loc_83AC6844;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83AC6844:
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

__attribute__((alias("__imp__sub_83AC6858"))) PPC_WEAK_FUNC(sub_83AC6858);
PPC_FUNC_IMPL(__imp__sub_83AC6858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83AC6860;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r26,r11,65535
	ctx.r26.u64 = ctx.r11.u64 | 65535;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// stw r28,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r28,34(r5)
	PPC_STORE_U16(ctx.r5.u32 + 34, ctx.r28.u16);
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// stw r29,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r29.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r29,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r26,32(r5)
	PPC_STORE_U16(ctx.r5.u32 + 32, ctx.r26.u16);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r29.u32);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r27,r5,12
	ctx.r27.s64 = ctx.r5.s64 + 12;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// lhz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// ble cr6,0x83ac6944
	if (!cr6.gt) goto loc_83AC6944;
	// clrlwi r23,r4,16
	ctx.r23.u64 = ctx.r4.u32 & 0xFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC68D4;
	sub_83AC3C50(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC68E8;
	sub_83AC3C50(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x83b68c90
	ctx.lr = 0x83AC6904;
	sub_83B68C90(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC6914;
	sub_83B68A78(ctx, base);
	// sth r3,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r3.u16);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC6928;
	sub_83B68A78(ctx, base);
	// sth r3,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r3.u16);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83ac3c50
	ctx.lr = 0x83AC693C;
	sub_83AC3C50(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// b 0x83ac6948
	goto loc_83AC6948;
loc_83AC6944:
	// li r24,1
	ctx.r24.s64 = 1;
loc_83AC6948:
	// stb r28,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r28.u8);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// clrlwi r29,r25,16
	ctx.r29.u64 = ctx.r25.u32 & 0xFFFF;
	// stb r28,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r28.u8);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// sth r26,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r26.u16);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x83ac69e8
	if (cr6.eq) goto loc_83AC69E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83b68a28
	ctx.lr = 0x83AC697C;
	sub_83B68A28(ctx, base);
	// stb r3,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r3.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83b68c00
	ctx.lr = 0x83AC6990;
	sub_83B68C00(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC69A4;
	sub_83B68AE8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83b68c00
	ctx.lr = 0x83AC69B8;
	sub_83B68C00(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83ac3c50
	ctx.lr = 0x83AC69CC;
	sub_83AC3C50(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC69E0;
	sub_83B68A28(ctx, base);
	// stb r3,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r3.u8);
	// b 0x83ac6a58
	goto loc_83AC6A58;
loc_83AC69E8:
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x83b68a28
	ctx.lr = 0x83AC69F0;
	sub_83B68A28(ctx, base);
	// stb r3,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r3.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68c00
	ctx.lr = 0x83AC6A04;
	sub_83B68C00(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68ae8
	ctx.lr = 0x83AC6A18;
	sub_83B68AE8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68c00
	ctx.lr = 0x83AC6A2C;
	sub_83B68C00(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC6A40;
	sub_83B68A28(ctx, base);
	// stb r3,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r3.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC6A54;
	sub_83B68A78(ctx, base);
	// sth r3,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r3.u16);
loc_83AC6A58:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC6A60"))) PPC_WEAK_FUNC(sub_83AC6A60);
PPC_FUNC_IMPL(__imp__sub_83AC6A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC6A68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC6A88;
	sub_83B68A28(ctx, base);
	// stb r3,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r3.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83b68c00
	ctx.lr = 0x83AC6A9C;
	sub_83B68C00(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x83b68c00
	ctx.lr = 0x83AC6AB0;
	sub_83B68C00(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC6AC4;
	sub_83B68AE8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC6AD0"))) PPC_WEAK_FUNC(sub_83AC6AD0);
PPC_FUNC_IMPL(__imp__sub_83AC6AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC6AD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83b68ae8
	ctx.lr = 0x83AC6AF8;
	sub_83B68AE8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC6B0C;
	sub_83B68AE8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC6B18"))) PPC_WEAK_FUNC(sub_83AC6B18);
PPC_FUNC_IMPL(__imp__sub_83AC6B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC6B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83b68b70
	ctx.lr = 0x83AC6B44;
	sub_83B68B70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83b68ae8
	ctx.lr = 0x83AC6B54;
	sub_83B68AE8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC6B68;
	sub_83B68AE8(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC6B7C;
	sub_83B68AE8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC6B90;
	sub_83B68AE8(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC6BA4;
	sub_83B68AE8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC6BB8;
	sub_83B68AE8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC6BC4"))) PPC_WEAK_FUNC(sub_83AC6BC4);
PPC_FUNC_IMPL(__imp__sub_83AC6BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC6BC8"))) PPC_WEAK_FUNC(sub_83AC6BC8);
PPC_FUNC_IMPL(__imp__sub_83AC6BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r6,36(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC6C78"))) PPC_WEAK_FUNC(sub_83AC6C78);
PPC_FUNC_IMPL(__imp__sub_83AC6C78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC6D20"))) PPC_WEAK_FUNC(sub_83AC6D20);
PPC_FUNC_IMPL(__imp__sub_83AC6D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC6D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,348
	ctx.r9.s64 = ctx.r3.s64 + 348;
	// addi r8,r3,220
	ctx.r8.s64 = ctx.r3.s64 + 220;
	// addi r7,r3,92
	ctx.r7.s64 = ctx.r3.s64 + 92;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83b68830
	ctx.lr = 0x83AC6D50;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac6fa8
	if (cr0.eq) goto loc_83AC6FA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
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
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// ble cr6,0x83ac6e68
	if (!cr6.gt) goto loc_83AC6E68;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,46(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 46);
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
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 48);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r11.u16);
	// b 0x83ac6e70
	goto loc_83AC6E70;
loc_83AC6E68:
	// sth r7,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r7.u16);
	// sth r7,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r7.u16);
loc_83AC6E70:
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r11,131
	ctx.r11.s64 = 8585216;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac6ec4
	if (cr6.lt) goto loc_83AC6EC4;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83ac6ecc
	goto loc_83AC6ECC;
loc_83AC6EC4:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r11,r11,-22544
	ctx.r11.s64 = ctx.r11.s64 + -22544;
loc_83AC6ECC:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lis r11,135
	ctx.r11.s64 = 8847360;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac6ef0
	if (cr6.lt) goto loc_83AC6EF0;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,62(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x83ac6ef4
	goto loc_83AC6EF4;
loc_83AC6EF0:
	// li r11,4
	ctx.r11.s64 = 4;
loc_83AC6EF4:
	// stb r11,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r11.u8);
	// lis r11,258
	ctx.r11.s64 = 16908288;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac6f1c
	if (cr6.lt) goto loc_83AC6F1C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x83ac6f20
	goto loc_83AC6F20;
loc_83AC6F1C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83AC6F20:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lis r11,259
	ctx.r11.s64 = 16973824;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac6f48
	if (cr6.lt) goto loc_83AC6F48;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,66(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stb r11,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r11.u8);
	// b 0x83ac6f4c
	goto loc_83AC6F4C;
loc_83AC6F48:
	// stb r7,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r7.u8);
loc_83AC6F4C:
	// lis r11,265
	ctx.r11.s64 = 17367040;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac6f94
	if (cr6.lt) goto loc_83AC6F94;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,74(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 74);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
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
	// b 0x83ac6f98
	goto loc_83AC6F98;
loc_83AC6F94:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83AC6F98:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_83AC6FA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC6FB0"))) PPC_WEAK_FUNC(sub_83AC6FB0);
PPC_FUNC_IMPL(__imp__sub_83AC6FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,30
	cr6.compare<int32_t>(ctx.r4.s32, 30, xer);
	// bgt cr6,0x83ac6fec
	if (cr6.gt) goto loc_83AC6FEC;
	// cmpwi cr6,r4,27
	cr6.compare<int32_t>(ctx.r4.s32, 27, xer);
	// bge cr6,0x83ac700c
	if (!cr6.lt) goto loc_83AC700C;
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// blt cr6,0x83ac6fe4
	if (cr6.lt) goto loc_83AC6FE4;
	// cmpwi cr6,r4,20
	cr6.compare<int32_t>(ctx.r4.s32, 20, xer);
	// ble cr6,0x83ac700c
	if (!cr6.gt) goto loc_83AC700C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// beq cr6,0x83ac700c
	if (cr6.eq) goto loc_83AC700C;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// beq cr6,0x83ac700c
	if (cr6.eq) goto loc_83AC700C;
loc_83AC6FE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AC6FEC:
	// cmpwi cr6,r4,34
	cr6.compare<int32_t>(ctx.r4.s32, 34, xer);
	// blt cr6,0x83ac6fe4
	if (cr6.lt) goto loc_83AC6FE4;
	// cmpwi cr6,r4,36
	cr6.compare<int32_t>(ctx.r4.s32, 36, xer);
	// ble cr6,0x83ac700c
	if (!cr6.gt) goto loc_83AC700C;
	// cmpwi cr6,r4,37
	cr6.compare<int32_t>(ctx.r4.s32, 37, xer);
	// ble cr6,0x83ac6fe4
	if (!cr6.gt) goto loc_83AC6FE4;
	// cmpwi cr6,r4,41
	cr6.compare<int32_t>(ctx.r4.s32, 41, xer);
	// bgt cr6,0x83ac6fe4
	if (cr6.gt) goto loc_83AC6FE4;
loc_83AC700C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stb r7,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r7.u8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC70A8"))) PPC_WEAK_FUNC(sub_83AC70A8);
PPC_FUNC_IMPL(__imp__sub_83AC70A8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC7120;
	sub_83B68A28(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_83AC7138"))) PPC_WEAK_FUNC(sub_83AC7138);
PPC_FUNC_IMPL(__imp__sub_83AC7138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lhz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC71CC"))) PPC_WEAK_FUNC(sub_83AC71CC);
PPC_FUNC_IMPL(__imp__sub_83AC71CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC71D0"))) PPC_WEAK_FUNC(sub_83AC71D0);
PPC_FUNC_IMPL(__imp__sub_83AC71D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,84
	ctx.r9.s64 = ctx.r3.s64 + 84;
	// addi r8,r3,68
	ctx.r8.s64 = ctx.r3.s64 + 68;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC71FC;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac7214
	if (cr0.eq) goto loc_83AC7214;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83AC7214:
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

__attribute__((alias("__imp__sub_83AC7228"))) PPC_WEAK_FUNC(sub_83AC7228);
PPC_FUNC_IMPL(__imp__sub_83AC7228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AC7230;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac7254
	if (cr6.lt) goto loc_83AC7254;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac748c
	goto loc_83AC748C;
loc_83AC7254:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83b68a28
	ctx.lr = 0x83AC72E8;
	sub_83B68A28(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stb r3,262(r31)
	PPC_STORE_U8(ctx.r31.u32 + 262, ctx.r3.u8);
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq 0x83ac7330
	if (cr0.eq) goto loc_83AC7330;
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
loc_83AC7308:
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// sthu r30,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r8,262(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 262);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// blt cr6,0x83ac7308
	if (cr6.lt) goto loc_83AC7308;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bge cr6,0x83ac735c
	if (!cr6.lt) goto loc_83AC735C;
loc_83AC7330:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// subfic r11,r11,64
	xer.ca = ctx.r11.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r11.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// beq cr6,0x83ac735c
	if (cr6.eq) goto loc_83AC735C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AC7354:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83ac7354
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC7354;
loc_83AC735C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83ac7394
	if (!cr6.gt) goto loc_83AC7394;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC7378;
	sub_83B68A78(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC738C;
	sub_83B68A28(ctx, base);
	// stb r3,263(r31)
	PPC_STORE_U8(ctx.r31.u32 + 263, ctx.r3.u8);
	// b 0x83ac739c
	goto loc_83AC739C;
loc_83AC7394:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stb r26,263(r31)
	PPC_STORE_U8(ctx.r31.u32 + 263, ctx.r26.u8);
loc_83AC739C:
	// lbz r10,263(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 263);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83ac73d8
	if (cr0.eq) goto loc_83AC73D8;
	// addi r10,r31,130
	ctx.r10.s64 = ctx.r31.s64 + 130;
loc_83AC73B0:
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// sthu r30,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r8,263(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 263);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// blt cr6,0x83ac73b0
	if (cr6.lt) goto loc_83AC73B0;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bge cr6,0x83ac7404
	if (!cr6.lt) goto loc_83AC7404;
loc_83AC73D8:
	// addi r10,r11,66
	ctx.r10.s64 = ctx.r11.s64 + 66;
	// subfic r11,r11,64
	xer.ca = ctx.r11.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r11.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// beq cr6,0x83ac7404
	if (cr6.eq) goto loc_83AC7404;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AC73FC:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83ac73fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC73FC;
loc_83AC7404:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// ble cr6,0x83ac7458
	if (!cr6.gt) goto loc_83AC7458;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC7420;
	sub_83B68A78(ctx, base);
	// sth r3,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r3.u16);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC7434;
	sub_83B68A78(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// sth r3,264(r31)
	PPC_STORE_U16(ctx.r31.u32 + 264, ctx.r3.u16);
	// beq 0x83ac7460
	if (cr0.eq) goto loc_83AC7460;
	// lhz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 260);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r11,264(r31)
	PPC_STORE_U16(ctx.r31.u32 + 264, ctx.r11.u16);
	// sth r10,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r10.u16);
	// b 0x83ac7460
	goto loc_83AC7460;
loc_83AC7458:
	// sth r27,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r27.u16);
	// sth r26,264(r31)
	PPC_STORE_U16(ctx.r31.u32 + 264, ctx.r26.u16);
loc_83AC7460:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// ble cr6,0x83ac7484
	if (!cr6.gt) goto loc_83AC7484;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC747C;
	sub_83B68A78(ctx, base);
	// sth r3,266(r31)
	PPC_STORE_U16(ctx.r31.u32 + 266, ctx.r3.u16);
	// b 0x83ac7488
	goto loc_83AC7488;
loc_83AC7484:
	// sth r26,266(r31)
	PPC_STORE_U16(ctx.r31.u32 + 266, ctx.r26.u16);
loc_83AC7488:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC748C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC7494"))) PPC_WEAK_FUNC(sub_83AC7494);
PPC_FUNC_IMPL(__imp__sub_83AC7494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC7498"))) PPC_WEAK_FUNC(sub_83AC7498);
PPC_FUNC_IMPL(__imp__sub_83AC7498) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,72
	ctx.r9.s64 = ctx.r3.s64 + 72;
	// addi r8,r3,62
	ctx.r8.s64 = ctx.r3.s64 + 62;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC74C4;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac74dc
	if (cr0.eq) goto loc_83AC74DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83AC74DC:
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

__attribute__((alias("__imp__sub_83AC74F0"))) PPC_WEAK_FUNC(sub_83AC74F0);
PPC_FUNC_IMPL(__imp__sub_83AC74F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC74F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r30,r4,16
	ctx.r30.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac751c
	if (cr6.lt) goto loc_83AC751C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac7668
	goto loc_83AC7668;
loc_83AC751C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68c00
	ctx.lr = 0x83AC752C;
	sub_83B68C00(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83b68a28
	ctx.lr = 0x83AC7570;
	sub_83B68A28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83ac75ac
	if (cr0.eq) goto loc_83AC75AC;
	// addi r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 6;
loc_83AC7584:
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// sthu r29,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r29.u16);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// clrlwi r29,r9,16
	ctx.r29.u64 = ctx.r9.u32 & 0xFFFF;
	// blt cr6,0x83ac7584
	if (cr6.lt) goto loc_83AC7584;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bge cr6,0x83ac75d8
	if (!cr6.lt) goto loc_83AC75D8;
loc_83AC75AC:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// subfic r11,r11,64
	xer.ca = ctx.r11.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r11.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,-1
	ctx.r9.s64 = -1;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// beq cr6,0x83ac75d8
	if (cr6.eq) goto loc_83AC75D8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AC75D0:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83ac75d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC75D0;
loc_83AC75D8:
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC75E8;
	sub_83B68A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC75FC;
	sub_83B68A28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r3,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r3.u8);
	// beq 0x83ac7638
	if (cr0.eq) goto loc_83AC7638;
	// addi r10,r31,134
	ctx.r10.s64 = ctx.r31.s64 + 134;
loc_83AC7610:
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// sthu r30,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// blt cr6,0x83ac7610
	if (cr6.lt) goto loc_83AC7610;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bge cr6,0x83ac7664
	if (!cr6.lt) goto loc_83AC7664;
loc_83AC7638:
	// addi r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 + 68;
	// subfic r11,r11,64
	xer.ca = ctx.r11.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r11.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,-1
	ctx.r9.s64 = -1;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// beq cr6,0x83ac7664
	if (cr6.eq) goto loc_83AC7664;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AC765C:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83ac765c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC765C;
loc_83AC7664:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC7668:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC7670"))) PPC_WEAK_FUNC(sub_83AC7670);
PPC_FUNC_IMPL(__imp__sub_83AC7670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// clrlwi r7,r5,16
	ctx.r7.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x83ac3b20
	ctx.lr = 0x83AC76A0;
	sub_83AC3B20(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC76B4"))) PPC_WEAK_FUNC(sub_83AC76B4);
PPC_FUNC_IMPL(__imp__sub_83AC76B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC76B8"))) PPC_WEAK_FUNC(sub_83AC76B8);
PPC_FUNC_IMPL(__imp__sub_83AC76B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,96
	ctx.r9.s64 = ctx.r3.s64 + 96;
	// addi r8,r3,74
	ctx.r8.s64 = ctx.r3.s64 + 74;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,11
	ctx.r6.s64 = 11;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC76E4;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac76fc
	if (cr0.eq) goto loc_83AC76FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83AC76FC:
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

__attribute__((alias("__imp__sub_83AC7710"))) PPC_WEAK_FUNC(sub_83AC7710);
PPC_FUNC_IMPL(__imp__sub_83AC7710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AC7718;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r30,r4,16
	ctx.r30.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac7740
	if (cr6.lt) goto loc_83AC7740;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac79a0
	goto loc_83AC79A0;
loc_83AC7740:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r11,r8,r30
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r11.u16);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b68b70
	ctx.lr = 0x83AC7788;
	sub_83B68B70(ctx, base);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68b70
	ctx.lr = 0x83AC779C;
	sub_83B68B70(ctx, base);
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68b70
	ctx.lr = 0x83AC77B0;
	sub_83B68B70(ctx, base);
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68b70
	ctx.lr = 0x83AC77C4;
	sub_83B68B70(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC77D4;
	sub_83B68A78(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC77E8;
	sub_83B68A28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r3,166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 166, ctx.r3.u8);
	// beq 0x83ac7824
	if (cr0.eq) goto loc_83AC7824;
	// addi r10,r31,18
	ctx.r10.s64 = ctx.r31.s64 + 18;
loc_83AC77FC:
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// sthu r28,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r28.u16);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r8,166(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 166);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// clrlwi r28,r9,16
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFF;
	// blt cr6,0x83ac77fc
	if (cr6.lt) goto loc_83AC77FC;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bge cr6,0x83ac7850
	if (!cr6.lt) goto loc_83AC7850;
loc_83AC7824:
	// addi r10,r11,10
	ctx.r10.s64 = ctx.r11.s64 + 10;
	// subfic r11,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r11.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,-1
	ctx.r9.s64 = -1;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// beq cr6,0x83ac7850
	if (cr6.eq) goto loc_83AC7850;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AC7848:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83ac7848
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC7848;
loc_83AC7850:
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC7860;
	sub_83B68A78(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC7874;
	sub_83B68A28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r3,167(r31)
	PPC_STORE_U8(ctx.r31.u32 + 167, ctx.r3.u8);
	// beq 0x83ac78b0
	if (cr0.eq) goto loc_83AC78B0;
	// addi r10,r31,34
	ctx.r10.s64 = ctx.r31.s64 + 34;
loc_83AC7888:
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// sthu r28,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r28.u16);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r8,167(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 167);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// clrlwi r28,r9,16
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFF;
	// blt cr6,0x83ac7888
	if (cr6.lt) goto loc_83AC7888;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bge cr6,0x83ac78dc
	if (!cr6.lt) goto loc_83AC78DC;
loc_83AC78B0:
	// addi r10,r11,18
	ctx.r10.s64 = ctx.r11.s64 + 18;
	// subfic r11,r11,64
	xer.ca = ctx.r11.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r11.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,-1
	ctx.r9.s64 = -1;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// beq cr6,0x83ac78dc
	if (cr6.eq) goto loc_83AC78DC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AC78D4:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83ac78d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC78D4;
loc_83AC78DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// subfic r10,r10,11
	xer.ca = ctx.r10.u32 <= 11;
	ctx.r10.s64 = 11 - ctx.r10.s64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83ac7908
	if (cr6.eq) goto loc_83AC7908;
loc_83AC78F0:
	// lhz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 164);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addi r10,r10,-14244
	ctx.r10.s64 = ctx.r10.s64 + -14244;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x83ac7998
	goto loc_83AC7998;
loc_83AC7908:
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// lwz r7,48(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lhz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// beq cr6,0x83ac78f0
	if (cr6.eq) goto loc_83AC78F0;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83AC7998:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC79A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC79A8"))) PPC_WEAK_FUNC(sub_83AC79A8);
PPC_FUNC_IMPL(__imp__sub_83AC79A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// subfic r10,r10,11
	xer.ca = ctx.r10.u32 <= 11;
	ctx.r10.s64 = 11 - ctx.r10.s64;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// blt cr6,0x83ac79c8
	if (cr6.lt) goto loc_83AC79C8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac79fc
	goto loc_83AC79FC;
loc_83AC79C8:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r11,r7,r8
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lhz r9,18(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 18);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
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
loc_83AC79FC:
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC7A04"))) PPC_WEAK_FUNC(sub_83AC7A04);
PPC_FUNC_IMPL(__imp__sub_83AC7A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC7A08"))) PPC_WEAK_FUNC(sub_83AC7A08);
PPC_FUNC_IMPL(__imp__sub_83AC7A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC7A10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac7a34
	if (cr6.lt) goto loc_83AC7A34;
loc_83AC7A2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac7af8
	goto loc_83AC7AF8;
loc_83AC7A34:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a28
	ctx.lr = 0x83AC7A44;
	sub_83B68A28(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC7A60;
	sub_83B68C90(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// subfic r11,r11,4
	xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ac7ae0
	if (cr6.eq) goto loc_83AC7AE0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bge cr6,0x83ac7a88
	if (!cr6.lt) goto loc_83AC7A88;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83ac7af0
	goto loc_83AC7AF0;
loc_83AC7A88:
	// cmplwi cr6,r11,80
	cr6.compare<uint32_t>(ctx.r11.u32, 80, xer);
	// bge cr6,0x83ac7a9c
	if (!cr6.lt) goto loc_83AC7A9C;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x83ac7ad4
	goto loc_83AC7AD4;
loc_83AC7A9C:
	// cmplwi cr6,r11,96
	cr6.compare<uint32_t>(ctx.r11.u32, 96, xer);
	// bge cr6,0x83ac7ab0
	if (!cr6.lt) goto loc_83AC7AB0;
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x83ac7ad4
	goto loc_83AC7AD4;
loc_83AC7AB0:
	// cmplwi cr6,r11,112
	cr6.compare<uint32_t>(ctx.r11.u32, 112, xer);
	// bge cr6,0x83ac7ac4
	if (!cr6.lt) goto loc_83AC7AC4;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x83ac7ad4
	goto loc_83AC7AD4;
loc_83AC7AC4:
	// cmplwi cr6,r11,115
	cr6.compare<uint32_t>(ctx.r11.u32, 115, xer);
	// bge cr6,0x83ac7a2c
	if (!cr6.lt) goto loc_83AC7A2C;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// li r10,5
	ctx.r10.s64 = 5;
loc_83AC7AD4:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x83ac7af4
	goto loc_83AC7AF4;
loc_83AC7AE0:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a28
	ctx.lr = 0x83AC7AEC;
	sub_83B68A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_83AC7AF0:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AC7AF4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC7AF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC7B00"))) PPC_WEAK_FUNC(sub_83AC7B00);
PPC_FUNC_IMPL(__imp__sub_83AC7B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// subfic r10,r10,4
	xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// blt cr6,0x83ac7b20
	if (cr6.lt) goto loc_83AC7B20;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac7b54
	goto loc_83AC7B54;
loc_83AC7B20:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r11,r7,r8
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lhz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
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
loc_83AC7B54:
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC7B5C"))) PPC_WEAK_FUNC(sub_83AC7B5C);
PPC_FUNC_IMPL(__imp__sub_83AC7B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC7B60"))) PPC_WEAK_FUNC(sub_83AC7B60);
PPC_FUNC_IMPL(__imp__sub_83AC7B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC7B68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r30,r4,16
	ctx.r30.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac7b8c
	if (cr6.lt) goto loc_83AC7B8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac7bf8
	goto loc_83AC7BF8;
loc_83AC7B8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a28
	ctx.lr = 0x83AC7B9C;
	sub_83B68A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83b68b70
	ctx.lr = 0x83AC7BB8;
	sub_83B68B70(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC7BC8;
	sub_83B68A78(ctx, base);
	// sth r3,8(r29)
	PPC_STORE_U16(ctx.r29.u32 + 8, ctx.r3.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// subfic r10,r10,5
	xer.ca = ctx.r10.u32 <= 5;
	ctx.r10.s64 = 5 - ctx.r10.s64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83ac7bf0
	if (!cr6.eq) goto loc_83AC7BF0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC7BF0;
	sub_83B68A78(ctx, base);
loc_83AC7BF0:
	// sth r3,10(r29)
	PPC_STORE_U16(ctx.r29.u32 + 10, ctx.r3.u16);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC7BF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC7C00"))) PPC_WEAK_FUNC(sub_83AC7C00);
PPC_FUNC_IMPL(__imp__sub_83AC7C00) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83ac7c3c
	if (!cr6.gt) goto loc_83AC7C3C;
	// li r5,3
	ctx.r5.s64 = 3;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x83b68a78
	ctx.lr = 0x83AC7C30;
	sub_83B68A78(ctx, base);
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83ac7c48
	goto loc_83AC7C48;
loc_83AC7C3C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_83AC7C48:
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

__attribute__((alias("__imp__sub_83AC7C5C"))) PPC_WEAK_FUNC(sub_83AC7C5C);
PPC_FUNC_IMPL(__imp__sub_83AC7C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC7C60"))) PPC_WEAK_FUNC(sub_83AC7C60);
PPC_FUNC_IMPL(__imp__sub_83AC7C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// li r6,10000
	ctx.r6.s64 = 10000;
	// lwz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r9,r11,r7
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lhz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// sth r11,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r11.u16);
	// divw r9,r10,r6
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r6.s32);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x83ac7d2c
	if (cr6.eq) goto loc_83AC7D2C;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x83ac7d20
	if (cr6.eq) goto loc_83AC7D20;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x83ac7d38
	if (!cr6.eq) goto loc_83AC7D38;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-27000
	ctx.r10.s64 = ctx.r10.s64 + -27000;
	// b 0x83ac7d34
	goto loc_83AC7D34;
loc_83AC7D20:
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-18000
	ctx.r10.s64 = ctx.r10.s64 + -18000;
	// b 0x83ac7d34
	goto loc_83AC7D34;
loc_83AC7D2C:
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-9000
	ctx.r10.s64 = ctx.r10.s64 + -9000;
loc_83AC7D34:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_83AC7D38:
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC7D4C"))) PPC_WEAK_FUNC(sub_83AC7D4C);
PPC_FUNC_IMPL(__imp__sub_83AC7D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC7D50"))) PPC_WEAK_FUNC(sub_83AC7D50);
PPC_FUNC_IMPL(__imp__sub_83AC7D50) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83ac3b20
	ctx.lr = 0x83AC7D78;
	sub_83AC3B20(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC7D8C"))) PPC_WEAK_FUNC(sub_83AC7D8C);
PPC_FUNC_IMPL(__imp__sub_83AC7D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC7D90"))) PPC_WEAK_FUNC(sub_83AC7D90);
PPC_FUNC_IMPL(__imp__sub_83AC7D90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 + 60;
	// addi r8,r3,56
	ctx.r8.s64 = ctx.r3.s64 + 56;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC7DBC;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac7dd4
	if (cr0.eq) goto loc_83AC7DD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83AC7DD4:
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

__attribute__((alias("__imp__sub_83AC7DE8"))) PPC_WEAK_FUNC(sub_83AC7DE8);
PPC_FUNC_IMPL(__imp__sub_83AC7DE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,80
	ctx.r9.s64 = ctx.r3.s64 + 80;
	// addi r8,r3,66
	ctx.r8.s64 = ctx.r3.s64 + 66;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC7E14;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac7e2c
	if (cr0.eq) goto loc_83AC7E2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83AC7E2C:
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

__attribute__((alias("__imp__sub_83AC7E40"))) PPC_WEAK_FUNC(sub_83AC7E40);
PPC_FUNC_IMPL(__imp__sub_83AC7E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC7E48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac7e6c
	if (cr6.lt) goto loc_83AC7E6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac7f68
	goto loc_83AC7F68;
loc_83AC7E6C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC7E7C;
	sub_83B68AE8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC7E90;
	sub_83B68A78(ctx, base);
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// lhz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83ac7ebc
	if (!cr6.gt) goto loc_83AC7EBC;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC7EB4;
	sub_83AC3C50(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// b 0x83ac7ec0
	goto loc_83AC7EC0;
loc_83AC7EBC:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_83AC7EC0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83ac7f1c
	if (!cr6.gt) goto loc_83AC7F1C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC7EE4;
	sub_83B68C90(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC7EF4;
	sub_83B68A28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r3,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r3.u8);
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68c90
	ctx.lr = 0x83AC7F18;
	sub_83B68C90(ctx, base);
	// b 0x83ac7f3c
	goto loc_83AC7F3C;
loc_83AC7F1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r10,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r10.u8);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_83AC7F3C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// ble cr6,0x83ac7f60
	if (!cr6.gt) goto loc_83AC7F60;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83ac3c50
	ctx.lr = 0x83AC7F58;
	sub_83AC3C50(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// b 0x83ac7f64
	goto loc_83AC7F64;
loc_83AC7F60:
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_83AC7F64:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC7F68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC7F70"))) PPC_WEAK_FUNC(sub_83AC7F70);
PPC_FUNC_IMPL(__imp__sub_83AC7F70) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83ac3928
	ctx.lr = 0x83AC7F98;
	sub_83AC3928(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC7FAC"))) PPC_WEAK_FUNC(sub_83AC7FAC);
PPC_FUNC_IMPL(__imp__sub_83AC7FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC7FB0"))) PPC_WEAK_FUNC(sub_83AC7FB0);
PPC_FUNC_IMPL(__imp__sub_83AC7FB0) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83ac3b20
	ctx.lr = 0x83AC7FE0;
	sub_83AC3B20(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac4c30
	ctx.lr = 0x83AC7FF0;
	sub_83AC4C30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lhz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// bne 0x83ac8000
	if (!cr0.eq) goto loc_83AC8000;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83AC8000:
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

__attribute__((alias("__imp__sub_83AC8014"))) PPC_WEAK_FUNC(sub_83AC8014);
PPC_FUNC_IMPL(__imp__sub_83AC8014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC8018"))) PPC_WEAK_FUNC(sub_83AC8018);
PPC_FUNC_IMPL(__imp__sub_83AC8018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC8020;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r30,r4,16
	ctx.r30.u64 = ctx.r4.u32 & 0xFFFF;
	// stb r11,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r11.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,13(r5)
	PPC_STORE_U8(ctx.r5.u32 + 13, ctx.r11.u8);
	// stfs f0,32(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// sth r11,14(r5)
	PPC_STORE_U16(ctx.r5.u32 + 14, ctx.r11.u16);
	// stfs f0,36(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac8074
	if (cr6.lt) goto loc_83AC8074;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac81f0
	goto loc_83AC81F0;
loc_83AC8074:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC8084;
	sub_83B68A78(ctx, base);
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC8098;
	sub_83B68A78(ctx, base);
	// sth r3,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC80AC;
	sub_83B68A78(ctx, base);
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC80C0;
	sub_83B68A78(ctx, base);
	// sth r3,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r3.u16);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68b70
	ctx.lr = 0x83AC80D8;
	sub_83B68B70(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// ble cr6,0x83ac8110
	if (!cr6.gt) goto loc_83AC8110;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a28
	ctx.lr = 0x83AC80F4;
	sub_83B68A28(ctx, base);
	// stb r3,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r3.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC8108;
	sub_83B68A78(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_83AC8110:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// ble cr6,0x83ac8130
	if (!cr6.gt) goto loc_83AC8130;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a28
	ctx.lr = 0x83AC812C;
	sub_83B68A28(ctx, base);
	// stb r3,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r3.u8);
loc_83AC8130:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// ble cr6,0x83ac8150
	if (!cr6.gt) goto loc_83AC8150;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a78
	ctx.lr = 0x83AC814C;
	sub_83B68A78(ctx, base);
	// sth r3,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r3.u16);
loc_83AC8150:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// ble cr6,0x83ac81ec
	if (!cr6.gt) goto loc_83AC81EC;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b68a28
	ctx.lr = 0x83AC816C;
	sub_83B68A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC8184;
	sub_83B68A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f31,8976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8976);
	ctx.f31.f64 = double(temp.f32);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC81B8;
	sub_83B68A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b68a28
	ctx.lr = 0x83AC81D0;
	sub_83B68A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_83AC81EC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AC81F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC81FC"))) PPC_WEAK_FUNC(sub_83AC81FC);
PPC_FUNC_IMPL(__imp__sub_83AC81FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC8200"))) PPC_WEAK_FUNC(sub_83AC8200);
PPC_FUNC_IMPL(__imp__sub_83AC8200) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 + 60;
	// addi r8,r3,56
	ctx.r8.s64 = ctx.r3.s64 + 56;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,13
	ctx.r6.s64 = 13;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC822C;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac8244
	if (cr0.eq) goto loc_83AC8244;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83AC8244:
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

__attribute__((alias("__imp__sub_83AC8258"))) PPC_WEAK_FUNC(sub_83AC8258);
PPC_FUNC_IMPL(__imp__sub_83AC8258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac8274
	if (cr6.lt) goto loc_83AC8274;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AC8274:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lhz r9,2(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC8304"))) PPC_WEAK_FUNC(sub_83AC8304);
PPC_FUNC_IMPL(__imp__sub_83AC8304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC8308"))) PPC_WEAK_FUNC(sub_83AC8308);
PPC_FUNC_IMPL(__imp__sub_83AC8308) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x83ac8328
	if (cr6.gt) goto loc_83AC8328;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83ac8348
	goto loc_83AC8348;
loc_83AC8328:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83ac3a30
	ctx.lr = 0x83AC8344;
	sub_83AC3A30(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
loc_83AC8348:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC8358"))) PPC_WEAK_FUNC(sub_83AC8358);
PPC_FUNC_IMPL(__imp__sub_83AC8358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x83b68de0
	sub_83B68DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC8374"))) PPC_WEAK_FUNC(sub_83AC8374);
PPC_FUNC_IMPL(__imp__sub_83AC8374) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC8378"))) PPC_WEAK_FUNC(sub_83AC8378);
PPC_FUNC_IMPL(__imp__sub_83AC8378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac83a4
	if (cr6.lt) goto loc_83AC83A4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83AC83A4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lhz r11,2(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// sth r11,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r11.u16);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,36(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC8434"))) PPC_WEAK_FUNC(sub_83AC8434);
PPC_FUNC_IMPL(__imp__sub_83AC8434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC8438"))) PPC_WEAK_FUNC(sub_83AC8438);
PPC_FUNC_IMPL(__imp__sub_83AC8438) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83ac3b20
	ctx.lr = 0x83AC8470;
	sub_83AC3B20(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac8378
	ctx.lr = 0x83AC8480;
	sub_83AC8378(ctx, base);
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC84A0"))) PPC_WEAK_FUNC(sub_83AC84A0);
PPC_FUNC_IMPL(__imp__sub_83AC84A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// addi r8,r3,58
	ctx.r8.s64 = ctx.r3.s64 + 58;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC84CC;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac84e4
	if (cr0.eq) goto loc_83AC84E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83AC84E4:
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

__attribute__((alias("__imp__sub_83AC84F8"))) PPC_WEAK_FUNC(sub_83AC84F8);
PPC_FUNC_IMPL(__imp__sub_83AC84F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC8500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83b68a78
	ctx.lr = 0x83AC8574;
	sub_83B68A78(ctx, base);
	// sth r3,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r3.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lhz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC85B4"))) PPC_WEAK_FUNC(sub_83AC85B4);
PPC_FUNC_IMPL(__imp__sub_83AC85B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC85B8"))) PPC_WEAK_FUNC(sub_83AC85B8);
PPC_FUNC_IMPL(__imp__sub_83AC85B8) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x83ac85dc
	if (cr6.gt) goto loc_83AC85DC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83ac85f8
	goto loc_83AC85F8;
loc_83AC85DC:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x83ac3b20
	ctx.lr = 0x83AC85F4;
	sub_83AC3B20(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
loc_83AC85F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC8608"))) PPC_WEAK_FUNC(sub_83AC8608);
PPC_FUNC_IMPL(__imp__sub_83AC8608) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x83b68a78
	ctx.lr = 0x83AC862C;
	sub_83B68A78(ctx, base);
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
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

__attribute__((alias("__imp__sub_83AC8644"))) PPC_WEAK_FUNC(sub_83AC8644);
PPC_FUNC_IMPL(__imp__sub_83AC8644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC8648"))) PPC_WEAK_FUNC(sub_83AC8648);
PPC_FUNC_IMPL(__imp__sub_83AC8648) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,108
	ctx.r9.s64 = ctx.r3.s64 + 108;
	// addi r8,r3,80
	ctx.r8.s64 = ctx.r3.s64 + 80;
	// addi r7,r3,52
	ctx.r7.s64 = ctx.r3.s64 + 52;
	// li r6,14
	ctx.r6.s64 = 14;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83b68830
	ctx.lr = 0x83AC8674;
	sub_83B68830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac868c
	if (cr0.eq) goto loc_83AC868C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83AC868C:
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

__attribute__((alias("__imp__sub_83AC86A0"))) PPC_WEAK_FUNC(sub_83AC86A0);
PPC_FUNC_IMPL(__imp__sub_83AC86A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC86A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea798
	ctx.lr = 0x83AC86C8;
	sub_831EA798(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac87fc
	if (cr6.eq) goto loc_83AC87FC;
	// clrlwi r29,r29,16
	ctx.r29.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC86F0;
	sub_83B68AE8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC8704;
	sub_83B68AE8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC8718;
	sub_83B68AE8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC872C;
	sub_83B68AE8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC8740;
	sub_83B68AE8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83b68b70
	ctx.lr = 0x83AC8758;
	sub_83B68B70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68ae8
	ctx.lr = 0x83AC8768;
	sub_83B68AE8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83b68a28
	ctx.lr = 0x83AC877C;
	sub_83B68A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68ae8
	ctx.lr = 0x83AC8794;
	sub_83B68AE8(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC87A8;
	sub_83B68AE8(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC87BC;
	sub_83B68AE8(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC87D0;
	sub_83B68AE8(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC87E4;
	sub_83B68AE8(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b68ae8
	ctx.lr = 0x83AC87F8;
	sub_83B68AE8(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
loc_83AC87FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC8804"))) PPC_WEAK_FUNC(sub_83AC8804);
PPC_FUNC_IMPL(__imp__sub_83AC8804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC8808"))) PPC_WEAK_FUNC(sub_83AC8808);
PPC_FUNC_IMPL(__imp__sub_83AC8808) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83ac3b20
	ctx.lr = 0x83AC8840;
	sub_83AC3B20(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac4c30
	ctx.lr = 0x83AC8850;
	sub_83AC4C30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC8868"))) PPC_WEAK_FUNC(sub_83AC8868);
PPC_FUNC_IMPL(__imp__sub_83AC8868) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83ac88bc
	if (!cr6.eq) goto loc_83AC88BC;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r7,6
	ctx.r7.s64 = 6;
	// ori r8,r8,48000
	ctx.r8.u64 = ctx.r8.u64 | 48000;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,24504(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_83AC88BC:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ac88e0
	if (!cr6.eq) goto loc_83AC88E0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24036
	ctx.r4.s64 = ctx.r11.s64 + -24036;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC88D8;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83ac8984
	goto loc_83AC8984;
loc_83AC88E0:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x83a8bf00
	ctx.lr = 0x83AC8930;
	sub_83A8BF00(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83ac8958
	if (!cr6.eq) goto loc_83AC8958;
	// bl 0x83a819a0
	ctx.lr = 0x83AC893C;
	sub_83A819A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac8958
	if (cr0.eq) goto loc_83AC8958;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83ac8958
	if (cr6.gt) goto loc_83AC8958;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_83AC8958:
	// bl 0x83ad3018
	ctx.lr = 0x83AC895C;
	sub_83AD3018(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83ac1648
	ctx.lr = 0x83AC896C;
	sub_83AC1648(ctx, base);
	// bl 0x83ad3018
	ctx.lr = 0x83AC8970;
	sub_83AD3018(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AC8984;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AC8984:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC8994"))) PPC_WEAK_FUNC(sub_83AC8994);
PPC_FUNC_IMPL(__imp__sub_83AC8994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC8998"))) PPC_WEAK_FUNC(sub_83AC8998);
PPC_FUNC_IMPL(__imp__sub_83AC8998) {
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
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subfe r30,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// bne cr6,0x83ac8a00
	if (!cr6.eq) goto loc_83AC8A00;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r8,6
	ctx.r8.s64 = 6;
	// ori r9,r9,48000
	ctx.r9.u64 = ctx.r9.u64 | 48000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,24504(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_83AC8A00:
	// bl 0x83ad3018
	ctx.lr = 0x83AC8A04;
	sub_83AD3018(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83ac1648
	ctx.lr = 0x83AC8A14;
	sub_83AC1648(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,29996
	ctx.r11.s64 = ctx.r11.s64 + 29996;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83AC8A4C"))) PPC_WEAK_FUNC(sub_83AC8A4C);
PPC_FUNC_IMPL(__imp__sub_83AC8A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC8A50"))) PPC_WEAK_FUNC(sub_83AC8A50);
PPC_FUNC_IMPL(__imp__sub_83AC8A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC8A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83a82cd8
	ctx.lr = 0x83AC8A6C;
	sub_83A82CD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ac8a84
	if (!cr0.eq) goto loc_83AC8A84;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-23952
	ctx.r4.s64 = ctx.r11.s64 + -23952;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC8A80;
	sub_831EA3F0(ctx, base);
	// b 0x83ac8b9c
	goto loc_83AC8B9C;
loc_83AC8A84:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83ac8acc
	if (!cr6.eq) goto loc_83AC8ACC;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r8,6
	ctx.r8.s64 = 6;
	// ori r9,r9,48000
	ctx.r9.u64 = ctx.r9.u64 | 48000;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,24504(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_83AC8ACC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83ac8b28
	if (!cr6.eq) goto loc_83AC8B28;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83ac8b1c
	if (!cr6.eq) goto loc_83AC8B1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac8868
	ctx.lr = 0x83AC8AE4;
	sub_83AC8868(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x83ac8b04
	if (!cr0.lt) goto loc_83AC8B04;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-23964
	ctx.r4.s64 = ctx.r11.s64 + -23964;
loc_83AC8AF4:
	// li r5,-3
	ctx.r5.s64 = -3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AC8B00;
	sub_831EA418(ctx, base);
	// b 0x83ac8b9c
	goto loc_83AC8B9C;
loc_83AC8B04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a82d10
	ctx.lr = 0x83AC8B0C;
	sub_83A82D10(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r30,30012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30012, ctx.r30.u32);
	// bne 0x83ac8b28
	if (!cr0.eq) goto loc_83AC8B28;
loc_83AC8B1C:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-23976
	ctx.r4.s64 = ctx.r11.s64 + -23976;
	// b 0x83ac8af4
	goto loc_83AC8AF4;
loc_83AC8B28:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83ad3018
	ctx.lr = 0x83AC8B78;
	sub_83AD3018(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83ac1648
	ctx.lr = 0x83AC8B88;
	sub_83AC1648(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83ac1748
	ctx.lr = 0x83AC8B9C;
	sub_83AC1748(ctx, base);
loc_83AC8B9C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC8BA4"))) PPC_WEAK_FUNC(sub_83AC8BA4);
PPC_FUNC_IMPL(__imp__sub_83AC8BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC8BA8"))) PPC_WEAK_FUNC(sub_83AC8BA8);
PPC_FUNC_IMPL(__imp__sub_83AC8BA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ad3490
	sub_83AD3490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC8BAC"))) PPC_WEAK_FUNC(sub_83AC8BAC);
PPC_FUNC_IMPL(__imp__sub_83AC8BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC8BB0"))) PPC_WEAK_FUNC(sub_83AC8BB0);
PPC_FUNC_IMPL(__imp__sub_83AC8BB0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x83ad3e88
	ctx.lr = 0x83AC8C00;
	sub_83AD3E88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC8C10"))) PPC_WEAK_FUNC(sub_83AC8C10);
PPC_FUNC_IMPL(__imp__sub_83AC8C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC8C18;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83ad3490
	ctx.lr = 0x83AC8C30;
	sub_83AD3490(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ac8c50
	if (!cr0.eq) goto loc_83AC8C50;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,-23888
	ctx.r4.s64 = ctx.r11.s64 + -23888;
	// bl 0x831ea418
	ctx.lr = 0x83AC8C48;
	sub_831EA418(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83ac8ca8
	goto loc_83AC8CA8;
loc_83AC8C50:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// bl 0x83a83240
	ctx.lr = 0x83AC8C8C;
	sub_83A83240(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83ad3e90
	ctx.lr = 0x83AC8C9C;
	sub_83AD3E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a83248
	ctx.lr = 0x83AC8CA4;
	sub_83A83248(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83AC8CA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC8CB0"))) PPC_WEAK_FUNC(sub_83AC8CB0);
PPC_FUNC_IMPL(__imp__sub_83AC8CB0) {
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
	// bl 0x83a83240
	ctx.lr = 0x83AC8CC8;
	sub_83A83240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ad3808
	ctx.lr = 0x83AC8CD0;
	sub_83AD3808(ctx, base);
	// bl 0x83a83248
	ctx.lr = 0x83AC8CD4;
	sub_83A83248(ctx, base);
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

__attribute__((alias("__imp__sub_83AC8CE8"))) PPC_WEAK_FUNC(sub_83AC8CE8);
PPC_FUNC_IMPL(__imp__sub_83AC8CE8) {
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
	// bl 0x83a83240
	ctx.lr = 0x83AC8D08;
	sub_83A83240(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ad3500
	ctx.lr = 0x83AC8D14;
	sub_83AD3500(ctx, base);
	// bl 0x83a83248
	ctx.lr = 0x83AC8D18;
	sub_83A83248(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC8D30"))) PPC_WEAK_FUNC(sub_83AC8D30);
PPC_FUNC_IMPL(__imp__sub_83AC8D30) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ad3730
	sub_83AD3730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC8D34"))) PPC_WEAK_FUNC(sub_83AC8D34);
PPC_FUNC_IMPL(__imp__sub_83AC8D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC8D38"))) PPC_WEAK_FUNC(sub_83AC8D38);
PPC_FUNC_IMPL(__imp__sub_83AC8D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC8D40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// subfe r28,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x83ad3490
	ctx.lr = 0x83AC8D58;
	sub_83AD3490(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83ac8d7c
	if (cr0.eq) goto loc_83AC8D7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9ab8
	ctx.lr = 0x83AC8D68;
	sub_83AC9AB8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9ac0
	ctx.lr = 0x83AC8D74;
	sub_83AC9AC0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x83ac8d9c
	goto loc_83AC8D9C;
loc_83AC8D7C:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,29996
	ctx.r11.s64 = ctx.r11.s64 + 29996;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83AC8D9C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac8dbc
	if (!cr6.gt) goto loc_83AC8DBC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ac8dbc
	if (!cr6.gt) goto loc_83AC8DBC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83ac8dd4
	goto loc_83AC8DD4;
loc_83AC8DBC:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,-23876
	ctx.r4.s64 = ctx.r11.s64 + -23876;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AC8DD0;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AC8DD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC8DDC"))) PPC_WEAK_FUNC(sub_83AC8DDC);
PPC_FUNC_IMPL(__imp__sub_83AC8DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC8DE0"))) PPC_WEAK_FUNC(sub_83AC8DE0);
PPC_FUNC_IMPL(__imp__sub_83AC8DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC8DE8;
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
	// bl 0x83a83240
	ctx.lr = 0x83AC8DFC;
	sub_83A83240(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac8a50
	ctx.lr = 0x83AC8E0C;
	sub_83AC8A50(ctx, base);
	// bl 0x83a83248
	ctx.lr = 0x83AC8E10;
	sub_83A83248(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC8E18"))) PPC_WEAK_FUNC(sub_83AC8E18);
PPC_FUNC_IMPL(__imp__sub_83AC8E18) {
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
	// bl 0x83a83240
	ctx.lr = 0x83AC8E2C;
	sub_83A83240(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83ac17a0
	ctx.lr = 0x83AC8E34;
	sub_83AC17A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83ac1648
	ctx.lr = 0x83AC8E44;
	sub_83AC1648(ctx, base);
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// lwz r3,30012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30012);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac8e60
	if (cr6.eq) goto loc_83AC8E60;
	// bl 0x83a82d38
	ctx.lr = 0x83AC8E58;
	sub_83A82D38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30012, ctx.r11.u32);
loc_83AC8E60:
	// bl 0x83a83248
	ctx.lr = 0x83AC8E64;
	sub_83A83248(ctx, base);
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

__attribute__((alias("__imp__sub_83AC8E78"))) PPC_WEAK_FUNC(sub_83AC8E78);
PPC_FUNC_IMPL(__imp__sub_83AC8E78) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cdcf0
	ctx.lr = 0x83AC8E9C;
	sub_831CDCF0(ctx, base);
	// bl 0x83ac9c68
	ctx.lr = 0x83AC8EA0;
	sub_83AC9C68(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83ad0250
	ctx.lr = 0x83AC8EB0;
	sub_83AD0250(ctx, base);
	// addi r3,r3,8904
	ctx.r3.s64 = ctx.r3.s64 + 8904;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC8EC4"))) PPC_WEAK_FUNC(sub_83AC8EC4);
PPC_FUNC_IMPL(__imp__sub_83AC8EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC8EC8"))) PPC_WEAK_FUNC(sub_83AC8EC8);
PPC_FUNC_IMPL(__imp__sub_83AC8EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC8ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cdcf0
	ctx.lr = 0x83AC8EF4;
	sub_831CDCF0(ctx, base);
	// bl 0x83ac9c68
	ctx.lr = 0x83AC8EF8;
	sub_83AC9C68(ctx, base);
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// li r4,8888
	ctx.r4.s64 = 8888;
	// rlwinm r31,r11,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83AC8F0C;
	sub_831EA7A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,8888
	ctx.r4.s64 = 8888;
	// bl 0x831ea7a0
	ctx.lr = 0x83AC8F18;
	sub_831EA7A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stb r30,8812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8812, ctx.r30.u8);
	// stb r30,8813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8813, ctx.r30.u8);
	// addi r3,r31,8208
	ctx.r3.s64 = ctx.r31.s64 + 8208;
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8828(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8828, temp.u32);
	// stfs f0,8832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8832, temp.u32);
	// stfs f0,8836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8836, temp.u32);
	// bl 0x83ad42e0
	ctx.lr = 0x83AC8F44;
	sub_83AD42E0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83ad0250
	ctx.lr = 0x83AC8F5C;
	sub_83AD0250(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,8888
	ctx.r4.s64 = ctx.r31.s64 + 8888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83ad0258
	ctx.lr = 0x83AC8F6C;
	sub_83AD0258(ctx, base);
	// stw r3,8840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8840, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC8F7C"))) PPC_WEAK_FUNC(sub_83AC8F7C);
PPC_FUNC_IMPL(__imp__sub_83AC8F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC8F80"))) PPC_WEAK_FUNC(sub_83AC8F80);
PPC_FUNC_IMPL(__imp__sub_83AC8F80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8208
	ctx.r3.s64 = ctx.r3.s64 + 8208;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC8F88"))) PPC_WEAK_FUNC(sub_83AC8F88);
PPC_FUNC_IMPL(__imp__sub_83AC8F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x831cdcf0
	sub_831CDCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC8FB0"))) PPC_WEAK_FUNC(sub_83AC8FB0);
PPC_FUNC_IMPL(__imp__sub_83AC8FB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC8FB4"))) PPC_WEAK_FUNC(sub_83AC8FB4);
PPC_FUNC_IMPL(__imp__sub_83AC8FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC8FB8"))) PPC_WEAK_FUNC(sub_83AC8FB8);
PPC_FUNC_IMPL(__imp__sub_83AC8FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83AC8FC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,8813(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8813, ctx.r11.u8);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r26,r3,8208
	ctx.r26.s64 = ctx.r3.s64 + 8208;
loc_83AC8FE8:
	// lbzx r11,r26,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r29.u32);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83ac9030
	if (cr0.lt) goto loc_83AC9030;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac9030
	if (cr6.eq) goto loc_83AC9030;
	// lbz r11,8813(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8813);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83ac9030
	if (cr6.eq) goto loc_83AC9030;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83ac8fb8
	ctx.lr = 0x83AC901C;
	sub_83AC8FB8(ctx, base);
	// lbz r11,8812(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8812);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bge cr6,0x83ac902c
	if (!cr6.lt) goto loc_83AC902C;
	// stb r3,8812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8812, ctx.r3.u8);
loc_83AC902C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_83AC9030:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, xer);
	// blt cr6,0x83ac8fe8
	if (cr6.lt) goto loc_83AC8FE8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stb r25,8813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8813, ctx.r25.u8);
	// bne cr6,0x83ac904c
	if (!cr6.eq) goto loc_83AC904C;
	// stb r25,8812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8812, ctx.r25.u8);
loc_83AC904C:
	// lbz r11,8812(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8812);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC905C"))) PPC_WEAK_FUNC(sub_83AC905C);
PPC_FUNC_IMPL(__imp__sub_83AC905C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC9060"))) PPC_WEAK_FUNC(sub_83AC9060);
PPC_FUNC_IMPL(__imp__sub_83AC9060) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8208
	ctx.r3.s64 = ctx.r3.s64 + 8208;
	// b 0x83ad40d8
	sub_83AD40D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC9068"))) PPC_WEAK_FUNC(sub_83AC9068);
PPC_FUNC_IMPL(__imp__sub_83AC9068) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8208
	ctx.r3.s64 = ctx.r3.s64 + 8208;
	// b 0x83ad4178
	sub_83AD4178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC9070"))) PPC_WEAK_FUNC(sub_83AC9070);
PPC_FUNC_IMPL(__imp__sub_83AC9070) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8208
	ctx.r3.s64 = ctx.r3.s64 + 8208;
	// b 0x83ad4058
	sub_83AD4058(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC9078"))) PPC_WEAK_FUNC(sub_83AC9078);
PPC_FUNC_IMPL(__imp__sub_83AC9078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8828(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8828, temp.u32);
	// stfs f2,8832(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8832, temp.u32);
	// stfs f3,8836(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8836, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC9088"))) PPC_WEAK_FUNC(sub_83AC9088);
PPC_FUNC_IMPL(__imp__sub_83AC9088) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8208
	ctx.r3.s64 = ctx.r3.s64 + 8208;
	// b 0x83ad4078
	sub_83AD4078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC9090"))) PPC_WEAK_FUNC(sub_83AC9090);
PPC_FUNC_IMPL(__imp__sub_83AC9090) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8208
	ctx.r3.s64 = ctx.r3.s64 + 8208;
	// b 0x83ad46f8
	sub_83AD46F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC9098"))) PPC_WEAK_FUNC(sub_83AC9098);
PPC_FUNC_IMPL(__imp__sub_83AC9098) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8208
	ctx.r3.s64 = ctx.r3.s64 + 8208;
	// b 0x83ad3f38
	sub_83AD3F38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC90A0"))) PPC_WEAK_FUNC(sub_83AC90A0);
PPC_FUNC_IMPL(__imp__sub_83AC90A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8208
	ctx.r3.s64 = ctx.r3.s64 + 8208;
	// b 0x83ad3ff0
	sub_83AD3FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC90A8"))) PPC_WEAK_FUNC(sub_83AC90A8);
PPC_FUNC_IMPL(__imp__sub_83AC90A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC90B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
loc_83AC90C4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac90e4
	if (cr6.eq) goto loc_83AC90E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83ac9b80
	ctx.lr = 0x83AC90D8;
	sub_83AC9B80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83ac9104
	if (cr0.lt) goto loc_83AC9104;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_83AC90E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// blt cr6,0x83ac90c4
	if (cr6.lt) goto loc_83AC90C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83AC90FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83AC9104:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23796
	ctx.r4.s64 = ctx.r11.s64 + -23796;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC9114;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83ac90fc
	goto loc_83AC90FC;
}

__attribute__((alias("__imp__sub_83AC911C"))) PPC_WEAK_FUNC(sub_83AC911C);
PPC_FUNC_IMPL(__imp__sub_83AC911C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC9120"))) PPC_WEAK_FUNC(sub_83AC9120);
PPC_FUNC_IMPL(__imp__sub_83AC9120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83AC9128;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r25,r3,8848
	ctx.r25.s64 = ctx.r3.s64 + 8848;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// addi r30,r4,36
	ctx.r30.s64 = ctx.r4.s64 + 36;
loc_83AC9148:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac9190
	if (cr6.eq) goto loc_83AC9190;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83ac9b80
	ctx.lr = 0x83AC915C;
	sub_83AC9B80(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt 0x83ac91ac
	if (cr0.lt) goto loc_83AC91AC;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83ac9bf0
	ctx.lr = 0x83AC917C;
	sub_83AC9BF0(ctx, base);
	// add r11,r29,r24
	ctx.r11.u64 = ctx.r29.u64 + ctx.r24.u64;
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// stb r10,8880(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8880, ctx.r10.u8);
loc_83AC9190:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// blt cr6,0x83ac9148
	if (cr6.lt) goto loc_83AC9148;
	// b 0x83ac91bc
	goto loc_83AC91BC;
loc_83AC91AC:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23768
	ctx.r4.s64 = ctx.r11.s64 + -23768;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC91BC;
	sub_831EA3F0(ctx, base);
loc_83AC91BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC91C4"))) PPC_WEAK_FUNC(sub_83AC91C4);
PPC_FUNC_IMPL(__imp__sub_83AC91C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC91C8"))) PPC_WEAK_FUNC(sub_83AC91C8);
PPC_FUNC_IMPL(__imp__sub_83AC91C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC91D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8848
	ctx.r28.s64 = ctx.r3.s64 + 8848;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,8
	ctx.r30.s64 = 8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_83AC91E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac9204
	if (cr6.eq) goto loc_83AC9204;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AC9204;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AC9204:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83ac91e4
	if (!cr0.eq) goto loc_83AC91E4;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83AC921C;
	sub_831EA7A0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r29,8880
	ctx.r3.s64 = ctx.r29.s64 + 8880;
	// bl 0x831ea7a0
	ctx.lr = 0x83AC9228;
	sub_831EA7A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC9230"))) PPC_WEAK_FUNC(sub_83AC9230);
PPC_FUNC_IMPL(__imp__sub_83AC9230) {
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
	// lwz r3,8840(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8840);
	// bl 0x83ad0548
	ctx.lr = 0x83AC924C;
	sub_83AD0548(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8844(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8844, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83AC9268"))) PPC_WEAK_FUNC(sub_83AC9268);
PPC_FUNC_IMPL(__imp__sub_83AC9268) {
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
	// lwz r3,8840(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8840);
	// bl 0x83ad0300
	ctx.lr = 0x83AC9284;
	sub_83AD0300(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8844(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8844, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83AC92A0"))) PPC_WEAK_FUNC(sub_83AC92A0);
PPC_FUNC_IMPL(__imp__sub_83AC92A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC92A8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f31,8804(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8804);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r30,8544
	ctx.r28.s64 = ctx.r30.s64 + 8544;
	// bl 0x831cdcf0
	ctx.lr = 0x83AC92D4;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x83ac92e0
	if (cr6.lt) goto loc_83AC92E0;
	// li r31,8
	ctx.r31.s64 = 8;
loc_83AC92E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,32
	ctx.r7.s64 = 32;
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
loc_83AC92F0:
	// lwz r11,8840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8840);
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x83ac9310
	if (!cr6.lt) goto loc_83AC9310;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfsx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83ac9314
	goto loc_83AC9314;
loc_83AC9310:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_83AC9314:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83ac9350
	if (cr6.eq) goto loc_83AC9350;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
loc_83AC932C:
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r6,r28
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f12,f11,f31,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83ac932c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC932C;
loc_83AC9350:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r7,64
	cr6.compare<uint32_t>(ctx.r7.u32, 64, xer);
	// blt cr6,0x83ac92f0
	if (cr6.lt) goto loc_83AC92F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC9370"))) PPC_WEAK_FUNC(sub_83AC9370);
PPC_FUNC_IMPL(__imp__sub_83AC9370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC9378;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f31,8804(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8804);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r30,8544
	ctx.r28.s64 = ctx.r30.s64 + 8544;
	// bl 0x831cdcf0
	ctx.lr = 0x83AC93A4;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x83ac93b0
	if (cr6.lt) goto loc_83AC93B0;
	// li r31,8
	ctx.r31.s64 = 8;
loc_83AC93B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
loc_83AC93C0:
	// lwz r11,8840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8840);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x83ac93dc
	if (!cr6.lt) goto loc_83AC93DC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfsx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83ac93e0
	goto loc_83AC93E0;
loc_83AC93DC:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_83AC93E0:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83ac941c
	if (cr6.eq) goto loc_83AC941C;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
loc_83AC93F8:
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r6,r28
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f12,f11,f31,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83ac93f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC93F8;
loc_83AC941C:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r7,32
	cr6.compare<uint32_t>(ctx.r7.u32, 32, xer);
	// blt cr6,0x83ac93c0
	if (cr6.lt) goto loc_83AC93C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC943C"))) PPC_WEAK_FUNC(sub_83AC943C);
PPC_FUNC_IMPL(__imp__sub_83AC943C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC9440"))) PPC_WEAK_FUNC(sub_83AC9440);
PPC_FUNC_IMPL(__imp__sub_83AC9440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC9448;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f31,8804(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8804);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r30,8544
	ctx.r28.s64 = ctx.r30.s64 + 8544;
	// bl 0x831cdcf0
	ctx.lr = 0x83AC9474;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x83ac9480
	if (cr6.lt) goto loc_83AC9480;
	// li r31,8
	ctx.r31.s64 = 8;
loc_83AC9480:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,64
	ctx.r7.s64 = 64;
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
loc_83AC9490:
	// lwz r11,8840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8840);
	// addi r10,r8,16
	ctx.r10.s64 = ctx.r8.s64 + 16;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x83ac94b0
	if (!cr6.lt) goto loc_83AC94B0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfsx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83ac94b4
	goto loc_83AC94B4;
loc_83AC94B0:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_83AC94B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83ac94f0
	if (cr6.eq) goto loc_83AC94F0;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
loc_83AC94CC:
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r6,r28
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f12,f11,f31,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83ac94cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC94CC;
loc_83AC94F0:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r7,96
	cr6.compare<uint32_t>(ctx.r7.u32, 96, xer);
	// blt cr6,0x83ac9490
	if (cr6.lt) goto loc_83AC9490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC9510"))) PPC_WEAK_FUNC(sub_83AC9510);
PPC_FUNC_IMPL(__imp__sub_83AC9510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,8848
	ctx.r10.s64 = ctx.r3.s64 + 8848;
loc_83AC9518:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83ac9530
	if (cr6.eq) goto loc_83AC9530;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x83ac9544
	if (cr6.eq) goto loc_83AC9544;
loc_83AC9530:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x83ac9518
	if (cr6.lt) goto loc_83AC9518;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83AC9544:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x83ac9554
	if (!cr6.eq) goto loc_83AC9554;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AC9554:
	// addi r11,r11,2212
	ctx.r11.s64 = ctx.r11.s64 + 2212;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC9564"))) PPC_WEAK_FUNC(sub_83AC9564);
PPC_FUNC_IMPL(__imp__sub_83AC9564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC9568"))) PPC_WEAK_FUNC(sub_83AC9568);
PPC_FUNC_IMPL(__imp__sub_83AC9568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83AC9570;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r21,r3,16
	ctx.r21.s64 = ctx.r3.s64 + 16;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_83AC959C:
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// addi r10,r10,1024
	ctx.r10.s64 = ctx.r10.s64 + 1024;
	// bdnz 0x83ac959c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AC959C;
	// lwz r11,8816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8816);
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
	// lwz r22,8(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac95e4
	if (cr6.eq) goto loc_83AC95E4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8824);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// bctrl 
	ctx.lr = 0x83AC95E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AC95E4:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r26,r31,8848
	ctx.r26.s64 = ctx.r31.s64 + 8848;
loc_83AC95F0:
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83ac977c
	if (cr6.eq) goto loc_83AC977C;
	// add r11,r23,r31
	ctx.r11.u64 = ctx.r23.u64 + ctx.r31.u64;
	// lbz r11,8880(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8880);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83ac977c
	if (!cr0.eq) goto loc_83AC977C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r9,12
	cr6.compare<uint32_t>(ctx.r9.u32, 12, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x83ac9694
	if (!cr6.eq) goto loc_83AC9694;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8353c978
	ctx.lr = 0x83AC9630;
	sub_8353C978(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac9694
	if (cr0.eq) goto loc_83AC9694;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac9694
	if (cr6.eq) goto loc_83AC9694;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x83ac9510
	ctx.lr = 0x83AC9654;
	sub_83AC9510(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83ac9694
	if (cr0.eq) goto loc_83AC9694;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83ac9694
	if (!cr6.gt) goto loc_83AC9694;
loc_83AC966C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ad4e20
	ctx.lr = 0x83AC9678;
	sub_83AD4E20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83ad56a8
	ctx.lr = 0x83AC9684;
	sub_83AD56A8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac966c
	if (cr6.lt) goto loc_83AC966C;
loc_83AC9694:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x83ac9734
	if (!cr6.eq) goto loc_83AC9734;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831238a0
	ctx.lr = 0x83AC96A8;
	sub_831238A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac9734
	if (cr0.eq) goto loc_83AC9734;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac9734
	if (cr6.eq) goto loc_83AC9734;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x83ac9510
	ctx.lr = 0x83AC96CC;
	sub_83AC9510(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83ac9734
	if (cr0.eq) goto loc_83AC9734;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83ac9734
	if (!cr6.gt) goto loc_83AC9734;
loc_83AC96E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ad4e20
	ctx.lr = 0x83AC96F0;
	sub_83AD4E20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83ad4e68
	ctx.lr = 0x83AC9700;
	sub_83AD4E68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ad4a28
	ctx.lr = 0x83AC9714;
	sub_83AD4A28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83ad4a30
	ctx.lr = 0x83AC9724;
	sub_83AD4A30(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac96e4
	if (cr6.lt) goto loc_83AC96E4;
loc_83AC9734:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AC9760;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AC977C:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r23,8
	cr6.compare<uint32_t>(ctx.r23.u32, 8, xer);
	// blt cr6,0x83ac95f0
	if (cr6.lt) goto loc_83AC95F0;
	// lwz r11,8820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8820);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac97c0
	if (cr6.eq) goto loc_83AC97C0;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8824);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// bctrl 
	ctx.lr = 0x83AC97C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AC97C0:
	// lbz r11,8844(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8844);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ac9820
	if (cr0.eq) goto loc_83AC9820;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8840);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// bl 0x83ad0370
	ctx.lr = 0x83AC97EC;
	sub_83AD0370(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x83ac9820
	if (!cr6.lt) goto loc_83AC9820;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,8840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8840);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x83ad0370
	ctx.lr = 0x83AC9820;
	sub_83AD0370(ctx, base);
loc_83AC9820:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83ac98bc
	if (!cr6.eq) goto loc_83AC98BC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// bne cr6,0x83ac98ac
	if (!cr6.eq) goto loc_83AC98AC;
	// lbz r11,8808(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8808);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83ac9854
	if (!cr0.eq) goto loc_83AC9854;
	// lbz r11,8809(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8809);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83ac98d4
	if (!cr0.eq) goto loc_83AC98D4;
loc_83AC9854:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83ac98a8
	if (!cr6.gt) goto loc_83AC98A8;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// subf r28,r24,r22
	ctx.r28.s64 = ctx.r22.s64 - ctx.r24.s64;
loc_83AC986C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r28,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bl 0x831ea778
	ctx.lr = 0x83AC9884;
	sub_831EA778(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ea7a0
	ctx.lr = 0x83AC9894;
	sub_831EA7A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac986c
	if (cr6.lt) goto loc_83AC986C;
loc_83AC98A8:
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
loc_83AC98AC:
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83AC98BC;
	sub_831CDCF0(ctx, base);
loc_83AC98BC:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,8208
	ctx.r3.s64 = ctx.r31.s64 + 8208;
	// bl 0x83ad4740
	ctx.lr = 0x83AC98D4;
	sub_83AD4740(ctx, base);
loc_83AC98D4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC98E4"))) PPC_WEAK_FUNC(sub_83AC98E4);
PPC_FUNC_IMPL(__imp__sub_83AC98E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC98E8"))) PPC_WEAK_FUNC(sub_83AC98E8);
PPC_FUNC_IMPL(__imp__sub_83AC98E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83ac9928
	if (!cr6.eq) goto loc_83AC9928;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// ori r10,r10,48000
	ctx.r10.u64 = ctx.r10.u64 | 48000;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
loc_83AC9928:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// ble cr6,0x83ac9950
	if (!cr6.gt) goto loc_83AC9950;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-23448
	ctx.r4.s64 = ctx.r11.s64 + -23448;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea410
	ctx.lr = 0x83AC9948;
	sub_831EA410(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83ac99bc
	goto loc_83AC99BC;
loc_83AC9950:
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// beq cr6,0x83ac9968
	if (cr6.eq) goto loc_83AC9968;
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// beq cr6,0x83ac9968
	if (cr6.eq) goto loc_83AC9968;
	// cmplwi cr6,r5,7
	cr6.compare<uint32_t>(ctx.r5.u32, 7, xer);
	// bne cr6,0x83ac9978
	if (!cr6.eq) goto loc_83AC9978;
loc_83AC9968:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23568
	ctx.r4.s64 = ctx.r11.s64 + -23568;
	// bl 0x831ea400
	ctx.lr = 0x83AC9978;
	sub_831EA400(ctx, base);
loc_83AC9978:
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea7a0
	ctx.lr = 0x83AC9984;
	sub_831EA7A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83ac8e78
	ctx.lr = 0x83AC999C;
	sub_83AC8E78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r31,r11,820
	ctx.r31.s64 = ctx.r11.s64 + 820;
	// bl 0x83572958
	ctx.lr = 0x83AC99B4;
	sub_83572958(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r3,r11,16400
	ctx.r3.s64 = ctx.r11.s64 + 16400;
loc_83AC99BC:
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

__attribute__((alias("__imp__sub_83AC99D0"))) PPC_WEAK_FUNC(sub_83AC99D0);
PPC_FUNC_IMPL(__imp__sub_83AC99D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC99D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,588
	ctx.r3.s64 = ctx.r3.s64 + 588;
	// bl 0x83ad61e0
	ctx.lr = 0x83AC99E8;
	sub_83AD61E0(ctx, base);
	// lwz r3,616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac9a00
	if (cr6.eq) goto loc_83AC9A00;
	// bl 0x83102db0
	ctx.lr = 0x83AC99FC;
	sub_83102DB0(ctx, base);
	// stw r28,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r28.u32);
loc_83AC9A00:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r29,72
	ctx.r29.s64 = 72;
loc_83AC9A08:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac9a1c
	if (cr6.eq) goto loc_83AC9A1C;
	// bl 0x83ac8f80
	ctx.lr = 0x83AC9A18;
	sub_83AC8F80(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_83AC9A1C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83ac9a08
	if (!cr0.eq) goto loc_83AC9A08;
	// lwz r3,624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac9a3c
	if (cr6.eq) goto loc_83AC9A3C;
	// bl 0x83a75c60
	ctx.lr = 0x83AC9A38;
	sub_83A75C60(ctx, base);
	// stw r28,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r28.u32);
loc_83AC9A3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC9A44"))) PPC_WEAK_FUNC(sub_83AC9A44);
PPC_FUNC_IMPL(__imp__sub_83AC9A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC9A48"))) PPC_WEAK_FUNC(sub_83AC9A48);
PPC_FUNC_IMPL(__imp__sub_83AC9A48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,576(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC9A50"))) PPC_WEAK_FUNC(sub_83AC9A50);
PPC_FUNC_IMPL(__imp__sub_83AC9A50) {
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
	// lwz r6,576(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// blt cr6,0x83ac9a84
	if (cr6.lt) goto loc_83AC9A84;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23272
	ctx.r4.s64 = ctx.r11.s64 + -23272;
	// bl 0x831ea410
	ctx.lr = 0x83AC9A7C;
	sub_831EA410(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac9a8c
	goto loc_83AC9A8C;
loc_83AC9A84:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
loc_83AC9A8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC9A9C"))) PPC_WEAK_FUNC(sub_83AC9A9C);
PPC_FUNC_IMPL(__imp__sub_83AC9A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC9AA0"))) PPC_WEAK_FUNC(sub_83AC9AA0);
PPC_FUNC_IMPL(__imp__sub_83AC9AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,624(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// b 0x83a75cd8
	sub_83A75CD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC9AA8"))) PPC_WEAK_FUNC(sub_83AC9AA8);
PPC_FUNC_IMPL(__imp__sub_83AC9AA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,624(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// b 0x83a75d58
	sub_83A75D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC9AB0"))) PPC_WEAK_FUNC(sub_83AC9AB0);
PPC_FUNC_IMPL(__imp__sub_83AC9AB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,588
	ctx.r3.s64 = ctx.r3.s64 + 588;
	// b 0x83ad65d0
	sub_83AD65D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC9AB8"))) PPC_WEAK_FUNC(sub_83AC9AB8);
PPC_FUNC_IMPL(__imp__sub_83AC9AB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,580(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC9AC0"))) PPC_WEAK_FUNC(sub_83AC9AC0);
PPC_FUNC_IMPL(__imp__sub_83AC9AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	// blr 
	return;
}

