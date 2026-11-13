#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83A4A810"))) PPC_WEAK_FUNC(sub_83A4A810);
PPC_FUNC_IMPL(__imp__sub_83A4A810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A4A818;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,836(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 836);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4a8ec
	if (!cr6.eq) goto loc_83A4A8EC;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r4,1376(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subfe r26,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r26.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x83a4a858
	if (cr6.eq) goto loc_83A4A858;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// bne cr6,0x83a4a854
	if (!cr6.eq) goto loc_83A4A854;
	// bl 0x83a78a48
	ctx.lr = 0x83A4A854;
	sub_83A78A48(ctx, base);
loc_83A4A854:
	// stw r27,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r27.u32);
loc_83A4A858:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r29,r31,1084
	ctx.r29.s64 = ctx.r31.s64 + 1084;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_83A4A864:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4a880
	if (cr6.eq) goto loc_83A4A880;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4A880;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A4A880:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x83a4a898
	if (cr6.eq) goto loc_83A4A898;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4d4e0
	ctx.lr = 0x83A4A894;
	sub_83A4D4E0(ctx, base);
	// stw r28,212(r29)
	PPC_STORE_U32(ctx.r29.u32 + 212, ctx.r28.u32);
loc_83A4A898:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// blt cr6,0x83a4a864
	if (cr6.lt) goto loc_83A4A864;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4d4e0
	ctx.lr = 0x83A4A8B4;
	sub_83A4D4E0(ctx, base);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// stw r28,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r28.u32);
	// bne cr6,0x83a4a8d4
	if (!cr6.eq) goto loc_83A4A8D4;
	// lwz r3,1860(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4a8d4
	if (cr6.eq) goto loc_83A4A8D4;
	// bl 0x83a78b10
	ctx.lr = 0x83A4A8D0;
	sub_83A78B10(ctx, base);
	// stw r27,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r27.u32);
loc_83A4A8D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a500a0
	ctx.lr = 0x83A4A8DC;
	sub_83A500A0(ctx, base);
	// stw r28,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r28.u32);
	// stw r27,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r27.u32);
	// stw r27,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r27.u32);
	// stw r27,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r27.u32);
loc_83A4A8EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4A8F4"))) PPC_WEAK_FUNC(sub_83A4A8F4);
PPC_FUNC_IMPL(__imp__sub_83A4A8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4A8F8"))) PPC_WEAK_FUNC(sub_83A4A8F8);
PPC_FUNC_IMPL(__imp__sub_83A4A8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A4A900;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1908(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1908);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// std r28,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r28.u64);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// bne cr6,0x83a4a944
	if (!cr6.eq) goto loc_83A4A944;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a4a944
	if (!cr6.eq) goto loc_83A4A944;
	// bl 0x83a48940
	ctx.lr = 0x83A4A940;
	sub_83A48940(ctx, base);
	// stw r29,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r29.u32);
loc_83A4A944:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-10992
	ctx.r30.s64 = ctx.r11.s64 + -10992;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a481a8
	ctx.lr = 0x83A4A958;
	sub_83A481A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4aa0c
	if (cr6.eq) goto loc_83A4AA0C;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x83a4aa0c
	if (cr6.eq) goto loc_83A4AA0C;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x83a4aa0c
	if (cr6.eq) goto loc_83A4AA0C;
	// lwz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4aa0c
	if (cr6.eq) goto loc_83A4AA0C;
	// lwz r3,1096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4a9a0
	if (cr6.eq) goto loc_83A4A9A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4A9A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A4A9A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a49230
	ctx.lr = 0x83A4A9AC;
	sub_83A49230(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a4a9ec
	if (cr6.eq) goto loc_83A4A9EC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83a4a9c8
	if (cr6.eq) goto loc_83A4A9C8;
	// std r29,1128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1128, ctx.r29.u64);
	// std r28,1136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1136, ctx.r28.u64);
	// b 0x83a4a9fc
	goto loc_83A4A9FC;
loc_83A4A9C8:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a48cd8
	ctx.lr = 0x83A4A9E0;
	sub_83A48CD8(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x83a4a9f4
	goto loc_83A4A9F4;
loc_83A4A9EC:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_83A4A9F4:
	// std r10,1136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1136, ctx.r10.u64);
	// std r11,1128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1128, ctx.r11.u64);
loc_83A4A9FC:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,1184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1184, ctx.r11.u64);
	// std r10,1192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1192, ctx.r10.u64);
loc_83A4AA0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4AA14"))) PPC_WEAK_FUNC(sub_83A4AA14);
PPC_FUNC_IMPL(__imp__sub_83A4AA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4AA18"))) PPC_WEAK_FUNC(sub_83A4AA18);
PPC_FUNC_IMPL(__imp__sub_83A4AA18) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r10,-10992
	ctx.r7.s64 = ctx.r10.s64 + -10992;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x83a49028
	sub_83A49028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4AA34"))) PPC_WEAK_FUNC(sub_83A4AA34);
PPC_FUNC_IMPL(__imp__sub_83A4AA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4AA38"))) PPC_WEAK_FUNC(sub_83A4AA38);
PPC_FUNC_IMPL(__imp__sub_83A4AA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A4AA40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,1688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1688, ctx.r30.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r30,1900(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1900, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,1312
	ctx.r3.s64 = ctx.r3.s64 + 1312;
	// stw r30,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r30.u32);
	// std r30,1128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1128, ctx.r30.u64);
	// std r29,1136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1136, ctx.r29.u64);
	// bl 0x831cdcf0
	ctx.lr = 0x83A4AA74;
	sub_831CDCF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,1696(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1368, temp.u32);
	// stfs f0,1372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1372, temp.u32);
	// bne cr6,0x83a4aaac
	if (!cr6.eq) goto loc_83A4AAAC;
	// lwz r11,1700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4aaac
	if (cr6.eq) goto loc_83A4AAAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1704(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A4AAAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A4AAAC:
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a4aae0
	if (!cr6.eq) goto loc_83A4AAE0;
	// stw r29,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a489c8
	ctx.lr = 0x83A4AAC4;
	sub_83A489C8(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-21236
	ctx.r4.s64 = ctx.r11.s64 + -21236;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4AAD4;
	sub_831EA3F0(ctx, base);
loc_83A4AAD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A4AAE0:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a4ab04
	if (!cr6.eq) goto loc_83A4AB04;
	// lwz r5,1684(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1684);
	// lwz r4,1680(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a51898
	ctx.lr = 0x83A4AAFC;
	sub_83A51898(ctx, base);
	// stw r30,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r30.u32);
	// b 0x83a4ab24
	goto loc_83A4AB24;
loc_83A4AB04:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4ab24
	if (!cr6.eq) goto loc_83A4AB24;
	// stw r29,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r29.u32);
	// stw r29,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r29.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a52c80
	ctx.lr = 0x83A4AB1C;
	sub_83A52C80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4aad4
	if (cr6.eq) goto loc_83A4AAD4;
loc_83A4AB24:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10992
	ctx.r4.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a481a8
	ctx.lr = 0x83A4AB34;
	sub_83A481A8(ctx, base);
	// stw r3,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4AB44"))) PPC_WEAK_FUNC(sub_83A4AB44);
PPC_FUNC_IMPL(__imp__sub_83A4AB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4AB48"))) PPC_WEAK_FUNC(sub_83A4AB48);
PPC_FUNC_IMPL(__imp__sub_83A4AB48) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83a494e8
	ctx.lr = 0x83A4AB68;
	sub_83A494E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4ac6c
	if (cr6.eq) goto loc_83A4AC6C;
	// lwz r11,1236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4ab8c
	if (cr6.eq) goto loc_83A4AB8C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a4ab8c
	if (!cr6.gt) goto loc_83A4AB8C;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83A4AB8C:
	// lwz r11,1240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4aba8
	if (cr6.eq) goto loc_83A4ABA8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a4aba8
	if (!cr6.gt) goto loc_83A4ABA8;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83A4ABA8:
	// lwz r11,1244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4abc4
	if (cr6.eq) goto loc_83A4ABC4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a4abc4
	if (!cr6.gt) goto loc_83A4ABC4;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_83A4ABC4:
	// lwz r11,1248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1248);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a4abd4
	if (cr6.eq) goto loc_83A4ABD4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83A4ABD4:
	// lwz r11,1252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1252);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a4abf0
	if (!cr6.gt) goto loc_83A4ABF0;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x83a4abf0
	if (!cr6.gt) goto loc_83A4ABF0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_83A4ABF0:
	// lwz r11,1256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1256);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a4ac0c
	if (!cr6.gt) goto loc_83A4AC0C;
	// lwz r10,804(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 804);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x83a4ac0c
	if (!cr6.gt) goto loc_83A4AC0C;
	// stw r11,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r11.u32);
loc_83A4AC0C:
	// lwz r11,1260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1260);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4ac3c
	if (cr6.eq) goto loc_83A4AC3C;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a4ac28
	if (!cr6.gt) goto loc_83A4AC28;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_83A4AC28:
	// lwz r11,1260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1260);
	// lwz r10,760(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a4ac3c
	if (!cr6.gt) goto loc_83A4AC3C;
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
loc_83A4AC3C:
	// lwz r11,1264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4ac6c
	if (cr6.eq) goto loc_83A4AC6C;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a4ac58
	if (!cr6.gt) goto loc_83A4AC58;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_83A4AC58:
	// lwz r11,1264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1264);
	// lwz r10,764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a4ac6c
	if (!cr6.gt) goto loc_83A4AC6C;
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
loc_83A4AC6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4AC84"))) PPC_WEAK_FUNC(sub_83A4AC84);
PPC_FUNC_IMPL(__imp__sub_83A4AC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4AC88"))) PPC_WEAK_FUNC(sub_83A4AC88);
PPC_FUNC_IMPL(__imp__sub_83A4AC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A4AC90;
	__savegprlr_29(ctx, base);
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
	// beq cr6,0x83a4add0
	if (cr6.eq) goto loc_83A4ADD0;
	// lwz r11,1080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4add0
	if (cr6.eq) goto loc_83A4ADD0;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4add0
	if (!cr6.eq) goto loc_83A4ADD0;
	// bl 0x83a496d0
	ctx.lr = 0x83A4ACC0;
	sub_83A496D0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a4add0
	if (cr6.eq) goto loc_83A4ADD0;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4add0
	if (!cr6.eq) goto loc_83A4ADD0;
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4ACE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83a4ad3c
	if (!cr6.eq) goto loc_83A4AD3C;
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4AD04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r10,1144(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1144);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r9.u32);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// std r8,1144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1144, ctx.r8.u64);
	// addi r4,r31,1160
	ctx.r4.s64 = ctx.r31.s64 + 1160;
	// bl 0x83a51560
	ctx.lr = 0x83A4AD2C;
	sub_83A51560(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a496d0
	ctx.lr = 0x83A4AD34;
	sub_83A496D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A4AD3C:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83a4ada4
	if (!cr6.eq) goto loc_83A4ADA4;
	// lwz r11,1160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,1160
	ctx.r30.s64 = ctx.r31.s64 + 1160;
	// stw r29,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4ad70
	if (cr6.eq) goto loc_83A4AD70;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a51560
	ctx.lr = 0x83A4AD6C;
	sub_83A51560(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_83A4AD70:
	// lwz r11,1904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4add0
	if (cr6.eq) goto loc_83A4ADD0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r11.u32);
	// bl 0x83a489c8
	ctx.lr = 0x83A4AD8C;
	sub_83A489C8(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-21200
	ctx.r4.s64 = ctx.r10.s64 + -21200;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4AD9C;
	sub_831EA3F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A4ADA4:
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a4add0
	if (!cr6.eq) goto loc_83A4ADD0;
	// lwz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a4add0
	if (!cr6.eq) goto loc_83A4ADD0;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,1160
	ctx.r4.s64 = ctx.r31.s64 + 1160;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a51560
	ctx.lr = 0x83A4ADD0;
	sub_83A51560(ctx, base);
loc_83A4ADD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4ADD8"))) PPC_WEAK_FUNC(sub_83A4ADD8);
PPC_FUNC_IMPL(__imp__sub_83A4ADD8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4aebc
	if (cr6.eq) goto loc_83A4AEBC;
	// lwz r11,1080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4aebc
	if (cr6.eq) goto loc_83A4AEBC;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4aebc
	if (!cr6.eq) goto loc_83A4AEBC;
	// bl 0x83a496d0
	ctx.lr = 0x83A4AE18;
	sub_83A496D0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a4aebc
	if (cr6.eq) goto loc_83A4AEBC;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4aebc
	if (cr6.eq) goto loc_83A4AEBC;
	// lwz r11,1904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4aebc
	if (cr6.eq) goto loc_83A4AEBC;
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83a4aebc
	if (!cr6.eq) goto loc_83A4AEBC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4764);
	// lwz r10,4768(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4768);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83a4aebc
	if (cr6.gt) goto loc_83A4AEBC;
	// addi r30,r31,1160
	ctx.r30.s64 = ctx.r31.s64 + 1160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a51470
	ctx.lr = 0x83A4AE64;
	sub_83A51470(ctx, base);
	// lwz r5,1164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// cmpdi cr6,r5,0
	cr6.compare<int64_t>(ctx.r5.s64, 0, xer);
	// ble cr6,0x83a4aeac
	if (!cr6.gt) goto loc_83A4AEAC;
	// ld r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1152);
	// ld r10,1144(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1144);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpd cr6,r5,r11
	cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, xer);
	// ble cr6,0x83a4ae88
	if (!cr6.gt) goto loc_83A4AE88;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_83A4AE88:
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4AEA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r9.u32);
	// b 0x83a4aebc
	goto loc_83A4AEBC;
loc_83A4AEAC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a51560
	ctx.lr = 0x83A4AEBC;
	sub_83A51560(ctx, base);
loc_83A4AEBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4AED4"))) PPC_WEAK_FUNC(sub_83A4AED4);
PPC_FUNC_IMPL(__imp__sub_83A4AED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4AED8"))) PPC_WEAK_FUNC(sub_83A4AED8);
PPC_FUNC_IMPL(__imp__sub_83A4AED8) {
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
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a4af14
	if (!cr6.eq) goto loc_83A4AF14;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x83A4AF04;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// blt cr6,0x83a4afdc
	if (cr6.lt) goto loc_83A4AFDC;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bgt cr6,0x83a4afdc
	if (cr6.gt) goto loc_83A4AFDC;
loc_83A4AF14:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4afdc
	if (cr6.eq) goto loc_83A4AFDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a496d0
	ctx.lr = 0x83A4AF28;
	sub_83A496D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4afdc
	if (cr6.eq) goto loc_83A4AFDC;
	// lwz r11,1688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4afdc
	if (cr6.eq) goto loc_83A4AFDC;
	// lwz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4afdc
	if (cr6.eq) goto loc_83A4AFDC;
	// lwz r11,1700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4af70
	if (cr6.eq) goto loc_83A4AF70;
	// stw r30,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1704(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A4AF6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a4af80
	goto loc_83A4AF80;
loc_83A4AF70:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a4af80
	if (!cr6.eq) goto loc_83A4AF80;
	// stw r30,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r30.u32);
loc_83A4AF80:
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4afc4
	if (!cr6.eq) goto loc_83A4AFC4;
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a4afb0
	if (!cr6.eq) goto loc_83A4AFB0;
	// lwz r5,1684(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1684);
	// lwz r4,1680(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4ebe8
	ctx.lr = 0x83A4AFA8;
	sub_83A4EBE8(ctx, base);
	// stw r30,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r30.u32);
	// b 0x83a4afdc
	goto loc_83A4AFDC;
loc_83A4AFB0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r11.u32);
	// stw r10,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r10.u32);
	// b 0x83a4afdc
	goto loc_83A4AFDC;
loc_83A4AFC4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a4afdc
	if (cr6.eq) goto loc_83A4AFDC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4e668
	ctx.lr = 0x83A4AFD4;
	sub_83A4E668(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r11.u32);
loc_83A4AFDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4AFF4"))) PPC_WEAK_FUNC(sub_83A4AFF4);
PPC_FUNC_IMPL(__imp__sub_83A4AFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4AFF8"))) PPC_WEAK_FUNC(sub_83A4AFF8);
PPC_FUNC_IMPL(__imp__sub_83A4AFF8) {
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
	// lwz r11,1404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a4b1e0
	if (cr6.eq) goto loc_83A4B1E0;
	// lwz r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4b088
	if (!cr6.eq) goto loc_83A4B088;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a4b1e0
	if (cr6.eq) goto loc_83A4B1E0;
	// lwz r11,1380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1380);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4b04c
	if (!cr6.eq) goto loc_83A4B04C;
	// lwz r11,1384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1384);
	// b 0x83a4b058
	goto loc_83A4B058;
loc_83A4B04C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a4b05c
	if (!cr6.eq) goto loc_83A4B05C;
	// lwz r11,1388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
loc_83A4B058:
	// stw r11,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r11.u32);
loc_83A4B05C:
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4b088
	if (cr6.eq) goto loc_83A4B088;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r30.u32);
	// addi r4,r31,1408
	ctx.r4.s64 = ctx.r31.s64 + 1408;
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A4B088;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A4B088:
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a4b1e0
	if (!cr6.eq) goto loc_83A4B1E0;
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4b1e0
	if (cr6.eq) goto loc_83A4B1E0;
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4b1e0
	if (!cr6.eq) goto loc_83A4B1E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4B0BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83a4b17c
	if (!cr6.eq) goto loc_83A4B17C;
	// ld r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1152);
	// cmpdi cr6,r11,-1
	cr6.compare<int64_t>(ctx.r11.s64, -1, xer);
	// bne cr6,0x83a4b140
	if (!cr6.eq) goto loc_83A4B140;
	// lwz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a4b140
	if (!cr6.eq) goto loc_83A4B140;
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4B0F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// bgt cr6,0x83a4b110
	if (cr6.gt) goto loc_83A4B110;
	// stw r30,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a489c8
	ctx.lr = 0x83A4B104;
	sub_83A489C8(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-21040
	ctx.r4.s64 = ctx.r11.s64 + -21040;
	// b 0x83a4b1d8
	goto loc_83A4B1D8;
loc_83A4B110:
	// ld r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1672);
	// ld r4,1664(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1664);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bge cr6,0x83a4b158
	if (!cr6.lt) goto loc_83A4B158;
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_83A4B124:
	// std r11,1152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1152, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4B140;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A4B140:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r11.u32);
	// stw r10,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r10.u32);
	// stw r11,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r11.u32);
	// b 0x83a4b1e0
	goto loc_83A4B1E0;
loc_83A4B158:
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmpd cr6,r10,r3
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r3.s64, xer);
	// ble cr6,0x83a4b124
	if (!cr6.gt) goto loc_83A4B124;
	// stw r30,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a489c8
	ctx.lr = 0x83A4B170;
	sub_83A489C8(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-21136
	ctx.r4.s64 = ctx.r11.s64 + -21136;
	// b 0x83a4b1d8
	goto loc_83A4B1D8;
loc_83A4B17C:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83a4b1e0
	if (!cr6.eq) goto loc_83A4B1E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,1904(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r11.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stw r11,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r11.u32);
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// stw r11,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r11.u32);
	// std r11,1144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1144, ctx.r11.u64);
	// std r9,1152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1152, ctx.r9.u64);
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// beq cr6,0x83a4b1e0
	if (cr6.eq) goto loc_83A4B1E0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r31,1408
	ctx.r4.s64 = ctx.r31.s64 + 1408;
	// addi r3,r11,-21168
	ctx.r3.s64 = ctx.r11.s64 + -21168;
	// bl 0x83a4a058
	ctx.lr = 0x83A4B1C4;
	sub_83A4A058(ctx, base);
	// stw r30,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a489c8
	ctx.lr = 0x83A4B1D0;
	sub_83A489C8(ctx, base);
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// addi r4,r10,-11248
	ctx.r4.s64 = ctx.r10.s64 + -11248;
loc_83A4B1D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4B1E0;
	sub_831EA3F0(ctx, base);
loc_83A4B1E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4B1F8"))) PPC_WEAK_FUNC(sub_83A4B1F8);
PPC_FUNC_IMPL(__imp__sub_83A4B1F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x83a499a0
	sub_83A499A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4B20C"))) PPC_WEAK_FUNC(sub_83A4B20C);
PPC_FUNC_IMPL(__imp__sub_83A4B20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4B210"))) PPC_WEAK_FUNC(sub_83A4B210);
PPC_FUNC_IMPL(__imp__sub_83A4B210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A4B218;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831f8200
	ctx.lr = 0x83A4B230;
	sub_831F8200(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x83a4b26c
	if (cr6.lt) goto loc_83A4B26C;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// beq cr6,0x83a4b26c
	if (cr6.eq) goto loc_83A4B26C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r11.u32);
	// bl 0x83a489c8
	ctx.lr = 0x83A4B250;
	sub_83A489C8(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-20888
	ctx.r4.s64 = ctx.r10.s64 + -20888;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4B260;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A4B26C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a4b290
	if (!cr6.eq) goto loc_83A4B290;
	// addi r11,r29,271
	ctx.r11.s64 = ctx.r29.s64 + 271;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A4B290:
	// lwz r11,1084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a4b2c8
	if (!cr6.eq) goto loc_83A4B2C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r11.u32);
	// bl 0x83a489c8
	ctx.lr = 0x83A4B2AC;
	sub_83A489C8(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-20968
	ctx.r4.s64 = ctx.r10.s64 + -20968;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4B2BC;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A4B2C8:
	// addi r11,r29,271
	ctx.r11.s64 = ctx.r29.s64 + 271;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4B2E0"))) PPC_WEAK_FUNC(sub_83A4B2E0);
PPC_FUNC_IMPL(__imp__sub_83A4B2E0) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-21736
	ctx.r9.s64 = ctx.r11.s64 + -21736;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83a4b318
	if (cr6.eq) goto loc_83A4B318;
	// li r4,1912
	ctx.r4.s64 = 1912;
	// bl 0x83a79fb8
	ctx.lr = 0x83A4B314;
	sub_83A79FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A4B318:
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

__attribute__((alias("__imp__sub_83A4B32C"))) PPC_WEAK_FUNC(sub_83A4B32C);
PPC_FUNC_IMPL(__imp__sub_83A4B32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4B330"))) PPC_WEAK_FUNC(sub_83A4B330);
PPC_FUNC_IMPL(__imp__sub_83A4B330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A4B338;
	__savegprlr_28(ctx, base);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83a4b374
	if (!cr6.eq) goto loc_83A4B374;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a4ab48
	ctx.lr = 0x83A4B360;
	sub_83A4AB48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a4b380
	if (!cr6.eq) goto loc_83A4B380;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A4B374:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,820
	ctx.r5.s64 = 820;
	// bl 0x831ce980
	ctx.lr = 0x83A4B380;
	sub_831CE980(ctx, base);
loc_83A4B380:
	// lwz r11,832(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x83a51bf8
	ctx.lr = 0x83A4B394;
	sub_83A51BF8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x83a4b448
	if (cr6.eq) goto loc_83A4B448;
	// lwz r11,1084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1084);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4b448
	if (cr6.eq) goto loc_83A4B448;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bl 0x83a49870
	ctx.lr = 0x83A4B3C4;
	sub_83A49870(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a4b3f4
	if (!cr6.eq) goto loc_83A4B3F4;
	// lwz r11,1276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1276);
	// addi r9,r1,184
	ctx.r9.s64 = ctx.r1.s64 + 184;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x83a4d4d8
	ctx.lr = 0x83A4B3EC;
	sub_83A4D4D8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r31,r11,320
	ctx.r31.s64 = ctx.r11.s64 + 320;
loc_83A4B3F4:
	// addi r29,r30,1288
	ctx.r29.s64 = ctx.r30.s64 + 1288;
	// li r28,2
	ctx.r28.s64 = 2;
loc_83A4B3FC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a4b43c
	if (cr6.eq) goto loc_83A4B43C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,188
	ctx.r9.s64 = ctx.r1.s64 + 188;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a4b43c
	if (cr6.eq) goto loc_83A4B43C;
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83a4d4d8
	ctx.lr = 0x83A4B434;
	sub_83A4D4D8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r31,r11,320
	ctx.r31.s64 = ctx.r11.s64 + 320;
loc_83A4B43C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x83a4b3fc
	if (!cr0.eq) goto loc_83A4B3FC;
loc_83A4B448:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4B454"))) PPC_WEAK_FUNC(sub_83A4B454);
PPC_FUNC_IMPL(__imp__sub_83A4B454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4B458"))) PPC_WEAK_FUNC(sub_83A4B458);
PPC_FUNC_IMPL(__imp__sub_83A4B458) {
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
	ctx.lr = 0x83A4B460;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4b484
	if (cr6.eq) goto loc_83A4B484;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a4ab48
	ctx.lr = 0x83A4B484;
	sub_83A4AB48(ctx, base);
loc_83A4B484:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r24,r31,16
	ctx.r24.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a4b4c0
	if (!cr6.eq) goto loc_83A4B4C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r11.u32);
	// bl 0x83a489c8
	ctx.lr = 0x83A4B4A4;
	sub_83A489C8(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-20404
	ctx.r4.s64 = ctx.r10.s64 + -20404;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4B4B4;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A4B4C0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe. r29,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r29.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r28.u64);
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
	// bne 0x83a4b4f0
	if (!cr0.eq) goto loc_83A4B4F0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// lwz r3,1844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// bl 0x83a77b68
	ctx.lr = 0x83A4B4F0;
	sub_83A77B68(ctx, base);
loc_83A4B4F0:
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	// lwz r4,768(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
	// beq cr6,0x83a4b56c
	if (cr6.eq) goto loc_83A4B56C;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x83a4b524
	if (!cr6.eq) goto loc_83A4B524;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-20432
	ctx.r5.s64 = ctx.r11.s64 + -20432;
	// bl 0x83a78940
	ctx.lr = 0x83A4B520;
	sub_83A78940(ctx, base);
	// b 0x83a4b530
	goto loc_83A4B530;
loc_83A4B524:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A4B530;
	sub_83A77B78(ctx, base);
loc_83A4B530:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a4b56c
	if (!cr6.eq) goto loc_83A4B56C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r11.u32);
	// bl 0x83a489c8
	ctx.lr = 0x83A4B550;
	sub_83A489C8(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-20480
	ctx.r4.s64 = ctx.r10.s64 + -20480;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4B560;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A4B56C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83a4b5dc
	if (!cr6.eq) goto loc_83A4B5DC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83a51bf8
	ctx.lr = 0x83A4B580;
	sub_83A51BF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A4B594;
	sub_83A77B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83a52668
	ctx.lr = 0x83A4B5A8;
	sub_83A52668(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a4b61c
	if (cr6.eq) goto loc_83A4B61C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r11.u32);
	// bl 0x83a489c8
	ctx.lr = 0x83A4B5C0;
	sub_83A489C8(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-20540
	ctx.r4.s64 = ctx.r10.s64 + -20540;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4B5D0;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A4B5DC:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83a53318
	ctx.lr = 0x83A4B5E8;
	sub_83A53318(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a4b61c
	if (cr6.eq) goto loc_83A4B61C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r11.u32);
	// bl 0x83a489c8
	ctx.lr = 0x83A4B600;
	sub_83A489C8(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-20592
	ctx.r4.s64 = ctx.r10.s64 + -20592;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4B610;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A4B61C:
	// lwz r30,116(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// beq cr6,0x83a4b8e8
	if (cr6.eq) goto loc_83A4B8E8;
	// lwz r11,1084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4b8e8
	if (cr6.eq) goto loc_83A4B8E8;
	// lis r9,-31835
	ctx.r9.s64 = -2086338560;
	// lis r8,-31835
	ctx.r8.s64 = -2086338560;
	// lis r7,-31835
	ctx.r7.s64 = -2086338560;
	// lis r6,-31835
	ctx.r6.s64 = -2086338560;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// addi r5,r9,-23072
	ctx.r5.s64 = ctx.r9.s64 + -23072;
	// addi r4,r8,-22792
	ctx.r4.s64 = ctx.r8.s64 + -22792;
	// addi r3,r7,-23632
	ctx.r3.s64 = ctx.r7.s64 + -23632;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r9,r6,-23352
	ctx.r9.s64 = ctx.r6.s64 + -23352;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// addi r27,r11,-23792
	ctx.r27.s64 = ctx.r11.s64 + -23792;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r26,r10,-23952
	ctx.r26.s64 = ctx.r10.s64 + -23952;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// bne cr6,0x83a4b6a8
	if (!cr6.eq) goto loc_83A4B6A8;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83a78aa0
	ctx.lr = 0x83A4B6A0;
	sub_83A78AA0(ctx, base);
	// stw r3,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r3.u32);
	// b 0x83a4b6b0
	goto loc_83A4B6B0;
loc_83A4B6A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r11.u32);
loc_83A4B6B0:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// stw r11,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// bne cr6,0x83a4b6d8
	if (!cr6.eq) goto loc_83A4B6D8;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x83a4b6e4
	goto loc_83A4B6E4;
loc_83A4B6D8:
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bne cr6,0x83a4b6e4
	if (!cr6.eq) goto loc_83A4B6E4;
	// li r11,8
	ctx.r11.s64 = 8;
loc_83A4B6E4:
	// stw r11,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r11.u32);
	// addi r10,r30,6
	ctx.r10.s64 = ctx.r30.s64 + 6;
	// stw r30,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r30.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,1084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,1860(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A4B71C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a4b750
	if (!cr6.eq) goto loc_83A4B750;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r11.u32);
	// bl 0x83a489c8
	ctx.lr = 0x83A4B734;
	sub_83A489C8(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-20632
	ctx.r4.s64 = ctx.r10.s64 + -20632;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4B744;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A4B750:
	// lwz r3,1084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4B764;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,1084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x83a4b784
	if (!cr6.eq) goto loc_83A4B784;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x83a4b78c
	goto loc_83A4B78C;
loc_83A4B784:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_83A4B78C:
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4B794;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a49870
	ctx.lr = 0x83A4B7A0;
	sub_83A49870(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a4b7e4
	if (!cr6.eq) goto loc_83A4B7E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a49940
	ctx.lr = 0x83A4B7B0;
	sub_83A49940(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a4b7e4
	if (cr6.eq) goto loc_83A4B7E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r11.u32);
	// bl 0x83a489c8
	ctx.lr = 0x83A4B7C8;
	sub_83A489C8(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-20672
	ctx.r4.s64 = ctx.r10.s64 + -20672;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4B7D8;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A4B7E4:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r30,r31,1088
	ctx.r30.s64 = ctx.r31.s64 + 1088;
loc_83A4B7EC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a498d8
	ctx.lr = 0x83A4B7FC;
	sub_83A498D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a4b8d4
	if (!cr6.eq) goto loc_83A4B8D4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,1860(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,200(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// bl 0x83a500e0
	ctx.lr = 0x83A4B818;
	sub_83A500E0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a4b8f8
	if (!cr6.eq) goto loc_83A4B8F8;
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// stw r11,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,1860(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,124(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 124);
	// lwzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A4B868;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4b920
	if (cr6.eq) goto loc_83A4B920;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4B884;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a4b8ac
	if (!cr6.eq) goto loc_83A4B8AC;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a4b948
	if (cr6.eq) goto loc_83A4B948;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x83a4b8c8
	goto loc_83A4B8C8;
loc_83A4B8AC:
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a4b970
	if (cr6.eq) goto loc_83A4B970;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_83A4B8C8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4B8D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A4B8D4:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(ctx.r28.s32, 8, xer);
	// blt cr6,0x83a4b7ec
	if (cr6.lt) goto loc_83A4B7EC;
loc_83A4B8E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r25,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r25.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A4B8F8:
	// stw r25,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a489c8
	ctx.lr = 0x83A4B904;
	sub_83A489C8(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-20716
	ctx.r4.s64 = ctx.r11.s64 + -20716;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4B914;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A4B920:
	// stw r25,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a489c8
	ctx.lr = 0x83A4B92C;
	sub_83A489C8(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-20756
	ctx.r4.s64 = ctx.r11.s64 + -20756;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4B93C;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A4B948:
	// stw r25,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a489c8
	ctx.lr = 0x83A4B954;
	sub_83A489C8(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-20788
	ctx.r4.s64 = ctx.r11.s64 + -20788;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4B964;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A4B970:
	// stw r25,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a489c8
	ctx.lr = 0x83A4B97C;
	sub_83A489C8(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-20820
	ctx.r4.s64 = ctx.r11.s64 + -20820;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4B98C;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4B998"))) PPC_WEAK_FUNC(sub_83A4B998);
PPC_FUNC_IMPL(__imp__sub_83A4B998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A4B9A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,1828
	ctx.r28.s64 = ctx.r3.s64 + 1828;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A4B9BC;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a4ba44
	if (!cr6.eq) goto loc_83A4BA44;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r30.u32);
	// lwz r11,-16800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16800);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4b9e4
	if (!cr6.eq) goto loc_83A4B9E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4a810
	ctx.lr = 0x83A4B9E4;
	sub_83A4A810(ctx, base);
loc_83A4B9E4:
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// bne cr6,0x83a4b9f4
	if (!cr6.eq) goto loc_83A4B9F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a48110
	ctx.lr = 0x83A4B9F4;
	sub_83A48110(ctx, base);
loc_83A4B9F4:
	// stw r30,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a53638
	ctx.lr = 0x83A4BA00;
	sub_83A53638(ctx, base);
	// lwz r11,1904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4ba10
	if (!cr6.eq) goto loc_83A4BA10;
	// stw r30,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r30.u32);
loc_83A4BA10:
	// lwz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// stb r30,1868(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1868, ctx.r30.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4ba30
	if (cr6.eq) goto loc_83A4BA30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1840(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A4BA30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A4BA30:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A4BA3C;
	sub_83A761B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A4BA44:
	// li r11,20
	ctx.r11.s64 = 20;
	// stb r11,1868(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1868, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4BA54"))) PPC_WEAK_FUNC(sub_83A4BA54);
PPC_FUNC_IMPL(__imp__sub_83A4BA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4BA58"))) PPC_WEAK_FUNC(sub_83A4BA58);
PPC_FUNC_IMPL(__imp__sub_83A4BA58) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,1108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1108, ctx.r10.u32);
	// bl 0x83a4aa38
	ctx.lr = 0x83A4BA80;
	sub_83A4AA38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a4ba90
	if (!cr6.eq) goto loc_83A4BA90;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A4BA90:
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

__attribute__((alias("__imp__sub_83A4BAA4"))) PPC_WEAK_FUNC(sub_83A4BAA4);
PPC_FUNC_IMPL(__imp__sub_83A4BAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4BAA8"))) PPC_WEAK_FUNC(sub_83A4BAA8);
PPC_FUNC_IMPL(__imp__sub_83A4BAA8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r9,1108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1108);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// stw r10,1112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1112, ctx.r10.u32);
	// bne cr6,0x83a4baf0
	if (!cr6.eq) goto loc_83A4BAF0;
	// stw r11,1108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1108, ctx.r11.u32);
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
loc_83A4BAF0:
	// bl 0x83a4aa38
	ctx.lr = 0x83A4BAF4;
	sub_83A4AA38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a4bb04
	if (!cr6.eq) goto loc_83A4BB04;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A4BB04:
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

__attribute__((alias("__imp__sub_83A4BB18"))) PPC_WEAK_FUNC(sub_83A4BB18);
PPC_FUNC_IMPL(__imp__sub_83A4BB18) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,1112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1112);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83a4bb74
	if (cr6.eq) goto loc_83A4BB74;
	// lwz r10,1108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1108);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83a4bb74
	if (cr6.eq) goto loc_83A4BB74;
	// bl 0x83a4aa38
	ctx.lr = 0x83A4BB50;
	sub_83A4AA38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a4bb7c
	if (!cr6.eq) goto loc_83A4BB7C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_83A4BB74:
	// stw r11,1108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1108, ctx.r11.u32);
	// stw r11,1112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1112, ctx.r11.u32);
loc_83A4BB7C:
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

__attribute__((alias("__imp__sub_83A4BB90"))) PPC_WEAK_FUNC(sub_83A4BB90);
PPC_FUNC_IMPL(__imp__sub_83A4BB90) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83a4b210
	ctx.lr = 0x83A4BBAC;
	sub_83A4B210(ctx, base);
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

__attribute__((alias("__imp__sub_83A4BBC4"))) PPC_WEAK_FUNC(sub_83A4BBC4);
PPC_FUNC_IMPL(__imp__sub_83A4BBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4BBC8"))) PPC_WEAK_FUNC(sub_83A4BBC8);
PPC_FUNC_IMPL(__imp__sub_83A4BBC8) {
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
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,-16800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16800);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4bc3c
	if (cr6.eq) goto loc_83A4BC3C;
loc_83A4BBF8:
	// lwz r11,836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4bc3c
	if (!cr6.eq) goto loc_83A4BC3C;
	// addi r31,r30,1828
	ctx.r31.s64 = ctx.r30.s64 + 1828;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A4BC14;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4bc28
	if (cr6.eq) goto loc_83A4BC28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a75e98
	ctx.lr = 0x83A4BC24;
	sub_83A75E98(ctx, base);
	// b 0x83a4bbf8
	goto loc_83A4BBF8;
loc_83A4BC28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a4a810
	ctx.lr = 0x83A4BC30;
	sub_83A4A810(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A4BC3C;
	sub_83A761B8(ctx, base);
loc_83A4BC3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4BC54"))) PPC_WEAK_FUNC(sub_83A4BC54);
PPC_FUNC_IMPL(__imp__sub_83A4BC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4BC58"))) PPC_WEAK_FUNC(sub_83A4BC58);
PPC_FUNC_IMPL(__imp__sub_83A4BC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A4BC60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// bl 0x83a4bbc8
	ctx.lr = 0x83A4BC74;
	sub_83A4BBC8(ctx, base);
	// addi r30,r31,1828
	ctx.r30.s64 = ctx.r31.s64 + 1828;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A4BC84;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a4bca0
	if (!cr6.eq) goto loc_83A4BCA0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-20344
	ctx.r4.s64 = ctx.r11.s64 + -20344;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4BC9C;
	sub_831EA3F0(ctx, base);
	// b 0x83a4bcac
	goto loc_83A4BCAC;
loc_83A4BCA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A4BCAC;
	sub_83A761B8(ctx, base);
loc_83A4BCAC:
	// lwz r3,1388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4bccc
	if (cr6.eq) goto loc_83A4BCCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4BCC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r29.u32);
loc_83A4BCCC:
	// lwz r3,1872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1872);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4bcdc
	if (cr6.eq) goto loc_83A4BCDC;
	// bl 0x83a75cd8
	ctx.lr = 0x83A4BCDC;
	sub_83A75CD8(ctx, base);
loc_83A4BCDC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// bl 0x83a51e50
	ctx.lr = 0x83A4BCE8;
	sub_83A51E50(ctx, base);
	// lwz r3,1856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4bcfc
	if (cr6.eq) goto loc_83A4BCFC;
	// bl 0x83a78b10
	ctx.lr = 0x83A4BCF8;
	sub_83A78B10(ctx, base);
	// stw r29,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r29.u32);
loc_83A4BCFC:
	// lwz r3,1872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1872);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4bd0c
	if (cr6.eq) goto loc_83A4BD0C;
	// bl 0x83a75d58
	ctx.lr = 0x83A4BD0C;
	sub_83A75D58(ctx, base);
loc_83A4BD0C:
	// lwz r3,1872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1872);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4bd20
	if (cr6.eq) goto loc_83A4BD20;
	// stw r29,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r29.u32);
	// bl 0x83a75c60
	ctx.lr = 0x83A4BD20;
	sub_83A75C60(ctx, base);
loc_83A4BD20:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,1876(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4bd40
	if (cr6.eq) goto loc_83A4BD40;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a4bd40
	if (cr6.eq) goto loc_83A4BD40;
	// stw r29,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r29.u32);
	// bl 0x83a78a48
	ctx.lr = 0x83A4BD40;
	sub_83A78A48(ctx, base);
loc_83A4BD40:
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// lwz r11,-10984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10984);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-10984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10984, ctx.r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a4bd74
	if (cr6.eq) goto loc_83A4BD74;
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
	ctx.lr = 0x83A4BD74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A4BD74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4BD7C"))) PPC_WEAK_FUNC(sub_83A4BD7C);
PPC_FUNC_IMPL(__imp__sub_83A4BD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4BD80"))) PPC_WEAK_FUNC(sub_83A4BD80);
PPC_FUNC_IMPL(__imp__sub_83A4BD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A4BD88;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831f8200
	ctx.lr = 0x83A4BDA4;
	sub_831F8200(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x83a4bfec
	if (cr6.gt) goto loc_83A4BFEC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83a4bfec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A4BFEC;
	// bdzf 4*cr6+eq,0x83a4be4c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A4BE4C;
	// bdzf 4*cr6+eq,0x83a4bfa4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A4BFA4;
	// bdzf 4*cr6+eq,0x83a4be78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A4BE78;
	// bdzf 4*cr6+eq,0x83a4bfec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A4BFEC;
	// bdzf 4*cr6+eq,0x83a4bfec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A4BFEC;
	// bne cr6,0x83a4bf60
	if (!cr6.eq) goto loc_83A4BF60;
	// lwz r11,1108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4bfec
	if (cr6.eq) goto loc_83A4BFEC;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lwz r11,-16800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16800);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4be00
	if (cr6.eq) goto loc_83A4BE00;
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a4be08
	if (!cr6.eq) goto loc_83A4BE08;
loc_83A4BE00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4b458
	ctx.lr = 0x83A4BE08;
	sub_83A4B458(ctx, base);
loc_83A4BE08:
	// lwz r11,1904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4be2c
	if (!cr6.eq) goto loc_83A4BE2C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A4BE2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a48778
	ctx.lr = 0x83A4BE34;
	sub_83A48778(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a53638
	ctx.lr = 0x83A4BE3C;
	sub_83A53638(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A4BE4C:
	// lwz r11,1112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4bfec
	if (cr6.eq) goto loc_83A4BFEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r11.u32);
	// bl 0x83a53638
	ctx.lr = 0x83A4BE68;
	sub_83A53638(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A4BE78:
	// lwz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a4bf60
	if (!cr6.eq) goto loc_83A4BF60;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-10992
	ctx.r30.s64 = ctx.r11.s64 + -10992;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a49230
	ctx.lr = 0x83A4BE98;
	sub_83A49230(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a4beb4
	if (cr6.eq) goto loc_83A4BEB4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83a4bf60
	if (!cr6.eq) goto loc_83A4BF60;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4bf60
	if (cr6.eq) goto loc_83A4BF60;
loc_83A4BEB4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a49400
	ctx.lr = 0x83A4BEC8;
	sub_83A49400(ctx, base);
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a4bee0
	if (!cr6.eq) goto loc_83A4BEE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// b 0x83a4bf20
	goto loc_83A4BF20;
loc_83A4BEE0:
	// lwz r10,844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-18928(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18928);
	ctx.f0.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// fmuls f31,f8,f0
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
loc_83A4BF20:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mulli r3,r11,1000
	ctx.r3.s64 = ctx.r11.s64 * 1000;
	// bl 0x831ce710
	ctx.lr = 0x83A4BF2C;
	sub_831CE710(ctx, base);
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A4BF38;
	sub_831CE710(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fdivs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// fcmpu cr6,f31,f13
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// ble cr6,0x83a4bf60
	if (!cr6.gt) goto loc_83A4BF60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1868(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1868, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A4BF60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a489c8
	ctx.lr = 0x83A4BF68;
	sub_83A489C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a48a50
	ctx.lr = 0x83A4BF70;
	sub_83A48A50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4bfec
	if (cr6.eq) goto loc_83A4BFEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a48b50
	ctx.lr = 0x83A4BF80;
	sub_83A48B50(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a4bfec
	if (!cr6.eq) goto loc_83A4BFEC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4b998
	ctx.lr = 0x83A4BF94;
	sub_83A4B998(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A4BFA4:
	// lwz r11,1736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4bfc8
	if (!cr6.eq) goto loc_83A4BFC8;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a4bfc8
	if (!cr6.eq) goto loc_83A4BFC8;
	// ld r11,1760(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1760);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,1760(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1760, ctx.r11.u64);
loc_83A4BFC8:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,116(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x83a4fba8
	ctx.lr = 0x83A4BFD8;
	sub_83A4FBA8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,2344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83a4bfec
	if (!cr6.gt) goto loc_83A4BFEC;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_83A4BFEC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4BFFC"))) PPC_WEAK_FUNC(sub_83A4BFFC);
PPC_FUNC_IMPL(__imp__sub_83A4BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4C000"))) PPC_WEAK_FUNC(sub_83A4C000);
PPC_FUNC_IMPL(__imp__sub_83A4C000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A4C008;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// addi r9,r11,-21648
	ctx.r9.s64 = ctx.r11.s64 + -21648;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r28.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,-11256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11256, ctx.r9.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x83a4c478
	ctx.lr = 0x83A4C044;
	sub_83A4C478(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a4c078
	if (!cr6.eq) goto loc_83A4C078;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-20232
	ctx.r4.s64 = ctx.r11.s64 + -20232;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A4C064;
	sub_831EA308(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A4C078:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77b68
	ctx.lr = 0x83A4C088;
	sub_83A77B68(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2136
	ctx.r4.s64 = 2136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A4C098;
	sub_83A77B78(ctx, base);
	// li r4,2136
	ctx.r4.s64 = 2136;
	// bl 0x83a78aa0
	ctx.lr = 0x83A4C0A0;
	sub_83A78AA0(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-20248
	ctx.r5.s64 = ctx.r11.s64 + -20248;
	// li r3,1912
	ctx.r3.s64 = 1912;
	// bl 0x83a79ff0
	ctx.lr = 0x83A4C0BC;
	sub_83A79FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4c13c
	if (cr6.eq) goto loc_83A4C13C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r10,r11,-21384
	ctx.r10.s64 = ctx.r11.s64 + -21384;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// stw r29,1080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1080, ctx.r29.u32);
	// stw r27,1096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1096, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r30.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r26,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r26.u32);
	// stw r28,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r28.u32);
	// lwz r11,-10984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10984);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-10984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10984, ctx.r11.u32);
	// stw r29,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r29.u32);
	// bl 0x83a57818
	ctx.lr = 0x83A4C10C;
	sub_83A57818(ctx, base);
	// stw r3,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4c150
	if (!cr6.eq) goto loc_83A4C150;
loc_83A4C118:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-10992
	ctx.r4.s64 = ctx.r10.s64 + -10992;
	// bl 0x83a4bc58
	ctx.lr = 0x83A4C130;
	sub_83A4BC58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A4C13C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A4C150:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A4C160;
	sub_83A77B78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r3.u32);
	// beq cr6,0x83a4c118
	if (cr6.eq) goto loc_83A4C118;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a7a730
	ctx.lr = 0x83A4C174;
	sub_83A7A730(ctx, base);
	// lwz r11,1876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// stw r3,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4c118
	if (cr6.eq) goto loc_83A4C118;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a4d1b0
	ctx.lr = 0x83A4C18C;
	sub_83A4D1B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A4C1A0;
	sub_83A77B78(ctx, base);
	// stw r3,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4c1bc
	if (cr6.eq) goto loc_83A4C1BC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a52cd0
	ctx.lr = 0x83A4C1B8;
	sub_83A52CD0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_83A4C1BC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4c118
	if (cr6.eq) goto loc_83A4C118;
	// li r4,8000
	ctx.r4.s64 = 8000;
	// bl 0x83a4d520
	ctx.lr = 0x83A4C1D0;
	sub_83A4D520(ctx, base);
	// lwz r3,1084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4c204
	if (cr6.eq) goto loc_83A4C204;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4C1EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x83a4c200
	if (cr6.eq) goto loc_83A4C200;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83A4C200:
	// bl 0x83a4f318
	ctx.lr = 0x83A4C204;
	sub_83A4F318(ctx, base);
loc_83A4C204:
	// stw r28,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r28.u32);
	// addi r11,r31,1088
	ctx.r11.s64 = ctx.r31.s64 + 1088;
	// bl 0x83a4a0d8
	ctx.lr = 0x83A4C218;
	sub_83A4A0D8(ctx, base);
	// stw r28,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x83A4C224;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4C230"))) PPC_WEAK_FUNC(sub_83A4C230);
PPC_FUNC_IMPL(__imp__sub_83A4C230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A4C238;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1904(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1904);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4c2ec
	if (cr6.eq) goto loc_83A4C2EC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r10,4876(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4876);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a4c280
	if (!cr6.eq) goto loc_83A4C280;
	// stw r28,1904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1904, ctx.r28.u32);
	// bl 0x83a489c8
	ctx.lr = 0x83A4C26C;
	sub_83A489C8(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-20112
	ctx.r4.s64 = ctx.r11.s64 + -20112;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4C27C;
	sub_831EA3F0(ctx, base);
	// stw r28,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r28.u32);
loc_83A4C280:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r30,r31,1084
	ctx.r30.s64 = ctx.r31.s64 + 1084;
	// li r29,3
	ctx.r29.s64 = 3;
	// addi r27,r11,-20152
	ctx.r27.s64 = ctx.r11.s64 + -20152;
loc_83A4C290:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4c2e0
	if (cr6.eq) goto loc_83A4C2E0;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a4c2e0
	if (cr6.eq) goto loc_83A4C2E0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4C2BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83a4c2e0
	if (!cr6.eq) goto loc_83A4C2E0;
	// stw r28,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a489c8
	ctx.lr = 0x83A4C2D0;
	sub_83A489C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4C2DC;
	sub_831EA3F0(ctx, base);
	// stw r28,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r28.u32);
loc_83A4C2E0:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83a4c290
	if (!cr0.eq) goto loc_83A4C290;
loc_83A4C2EC:
	// lwz r11,1904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4c358
	if (!cr6.eq) goto loc_83A4C358;
	// bl 0x83a4ac88
	ctx.lr = 0x83A4C300;
	sub_83A4AC88(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x83A4C308;
	sub_831F8200(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x83a4c31c
	if (cr6.eq) goto loc_83A4C31C;
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// bne cr6,0x83a4c3cc
	if (!cr6.eq) goto loc_83A4C3CC;
loc_83A4C31C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a48a50
	ctx.lr = 0x83A4C324;
	sub_83A48A50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4c3cc
	if (cr6.eq) goto loc_83A4C3CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a49758
	ctx.lr = 0x83A4C334;
	sub_83A49758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a48b50
	ctx.lr = 0x83A4C33C;
	sub_83A48B50(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a4c3cc
	if (!cr6.eq) goto loc_83A4C3CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4b998
	ctx.lr = 0x83A4C350;
	sub_83A4B998(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A4C358:
	// bl 0x83a4aff8
	ctx.lr = 0x83A4C35C;
	sub_83A4AFF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a49a50
	ctx.lr = 0x83A4C364;
	sub_83A49A50(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4bd80
	ctx.lr = 0x83A4C370;
	sub_83A4BD80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4ac88
	ctx.lr = 0x83A4C378;
	sub_83A4AC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a495f0
	ctx.lr = 0x83A4C380;
	sub_83A495F0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a531d0
	ctx.lr = 0x83A4C388;
	sub_83A531D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4add8
	ctx.lr = 0x83A4C390;
	sub_83A4ADD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4aed8
	ctx.lr = 0x83A4C398;
	sub_83A4AED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a49758
	ctx.lr = 0x83A4C3A0;
	sub_83A49758(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x83A4C3A8;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a4c3b8
	if (!cr6.eq) goto loc_83A4C3B8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a538e8
	ctx.lr = 0x83A4C3B8;
	sub_83A538E8(ctx, base);
loc_83A4C3B8:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10992
	ctx.r4.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a481a8
	ctx.lr = 0x83A4C3C8;
	sub_83A481A8(ctx, base);
	// stw r3,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r3.u32);
loc_83A4C3CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4C3D4"))) PPC_WEAK_FUNC(sub_83A4C3D4);
PPC_FUNC_IMPL(__imp__sub_83A4C3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4C3D8"))) PPC_WEAK_FUNC(sub_83A4C3D8);
PPC_FUNC_IMPL(__imp__sub_83A4C3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A4C3E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r3,1832
	ctx.r29.s64 = ctx.r3.s64 + 1832;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A4C404;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a4c424
	if (cr6.eq) goto loc_83A4C424;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4c230
	ctx.lr = 0x83A4C418;
	sub_83A4C230(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A4C424;
	sub_83A761B8(ctx, base);
loc_83A4C424:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4C42C"))) PPC_WEAK_FUNC(sub_83A4C42C);
PPC_FUNC_IMPL(__imp__sub_83A4C42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4C430"))) PPC_WEAK_FUNC(sub_83A4C430);
PPC_FUNC_IMPL(__imp__sub_83A4C430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// lwz r11,-10988(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10988);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-10988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10988, ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x83a4fad8
	sub_83A4FAD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4C44C"))) PPC_WEAK_FUNC(sub_83A4C44C);
PPC_FUNC_IMPL(__imp__sub_83A4C44C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4C450"))) PPC_WEAK_FUNC(sub_83A4C450);
PPC_FUNC_IMPL(__imp__sub_83A4C450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,-10988(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10988);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,-10988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10988, ctx.r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// b 0x83a4d110
	sub_83A4D110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4C470"))) PPC_WEAK_FUNC(sub_83A4C470);
PPC_FUNC_IMPL(__imp__sub_83A4C470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4C474"))) PPC_WEAK_FUNC(sub_83A4C474);
PPC_FUNC_IMPL(__imp__sub_83A4C474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4C478"))) PPC_WEAK_FUNC(sub_83A4C478);
PPC_FUNC_IMPL(__imp__sub_83A4C478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,-10988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10988);
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4C494"))) PPC_WEAK_FUNC(sub_83A4C494);
PPC_FUNC_IMPL(__imp__sub_83A4C494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4C498"))) PPC_WEAK_FUNC(sub_83A4C498);
PPC_FUNC_IMPL(__imp__sub_83A4C498) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x83a4d1b0
	ctx.lr = 0x83A4C4B0;
	sub_83A4D1B0(ctx, base);
	// addi r3,r3,2212
	ctx.r3.s64 = ctx.r3.s64 + 2212;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4C4C4"))) PPC_WEAK_FUNC(sub_83A4C4C4);
PPC_FUNC_IMPL(__imp__sub_83A4C4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4C4C8"))) PPC_WEAK_FUNC(sub_83A4C4C8);
PPC_FUNC_IMPL(__imp__sub_83A4C4C8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-20080
	ctx.r9.s64 = ctx.r11.s64 + -20080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83a4c4fc
	if (cr6.eq) goto loc_83A4C4FC;
	// bl 0x82416268
	ctx.lr = 0x83A4C4F8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A4C4FC:
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

__attribute__((alias("__imp__sub_83A4C510"))) PPC_WEAK_FUNC(sub_83A4C510);
PPC_FUNC_IMPL(__imp__sub_83A4C510) {
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
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// bl 0x83a75c60
	ctx.lr = 0x83A4C530;
	sub_83A75C60(ctx, base);
	// lwz r3,500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// bl 0x83a75c60
	ctx.lr = 0x83A4C538;
	sub_83A75C60(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4c550
	if (cr6.eq) goto loc_83A4C550;
	// bl 0x831f11e8
	ctx.lr = 0x83A4C54C;
	sub_831F11E8(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_83A4C550:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4C56C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4C584"))) PPC_WEAK_FUNC(sub_83A4C584);
PPC_FUNC_IMPL(__imp__sub_83A4C584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4C588"))) PPC_WEAK_FUNC(sub_83A4C588);
PPC_FUNC_IMPL(__imp__sub_83A4C588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A4C590;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// bl 0x831effb8
	ctx.lr = 0x83A4C5B8;
	sub_831EFFB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a4c5cc
	if (!cr6.eq) goto loc_83A4C5CC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a4c5d4
	if (cr6.eq) goto loc_83A4C5D4;
loc_83A4C5CC:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83a4c5dc
	if (!cr6.eq) goto loc_83A4C5DC;
loc_83A4C5D4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831f08d0
	ctx.lr = 0x83A4C5DC;
	sub_831F08D0(ctx, base);
loc_83A4C5DC:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,168
	ctx.r30.s64 = ctx.r11.s64 + 168;
	// stw r29,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r29.u32);
	// stw r28,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r28.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x83a75cd8
	ctx.lr = 0x83A4C600;
	sub_83A75CD8(ctx, base);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// bne cr6,0x83a4c618
	if (!cr6.eq) goto loc_83A4C618;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// b 0x83a4c624
	goto loc_83A4C624;
loc_83A4C618:
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83A4C624:
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A4C63C;
	sub_83A75D58(ctx, base);
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// stw r9,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4C654"))) PPC_WEAK_FUNC(sub_83A4C654);
PPC_FUNC_IMPL(__imp__sub_83A4C654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4C658"))) PPC_WEAK_FUNC(sub_83A4C658);
PPC_FUNC_IMPL(__imp__sub_83A4C658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A4C660;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// bl 0x831effb8
	ctx.lr = 0x83A4C68C;
	sub_831EFFB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a4c6a8
	if (!cr6.eq) goto loc_83A4C6A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a4c6a8
	if (!cr6.eq) goto loc_83A4C6A8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831f08d0
	ctx.lr = 0x83A4C6A8;
	sub_831F08D0(ctx, base);
loc_83A4C6A8:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,168
	ctx.r30.s64 = ctx.r11.s64 + 168;
	// stw r27,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r27.u32);
	// stw r29,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r29.u32);
	// std r28,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r28.u64);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x83a75cd8
	ctx.lr = 0x83A4C6CC;
	sub_83A75CD8(ctx, base);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// bne cr6,0x83a4c6e4
	if (!cr6.eq) goto loc_83A4C6E4;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// b 0x83a4c6f4
	goto loc_83A4C6F4;
loc_83A4C6E4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_83A4C6F4:
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A4C70C;
	sub_83A75D58(ctx, base);
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// stw r9,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4C724"))) PPC_WEAK_FUNC(sub_83A4C724);
PPC_FUNC_IMPL(__imp__sub_83A4C724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4C728"))) PPC_WEAK_FUNC(sub_83A4C728);
PPC_FUNC_IMPL(__imp__sub_83A4C728) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x831effb8
	ctx.lr = 0x83A4C74C;
	sub_831EFFB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a4c768
	if (!cr6.eq) goto loc_83A4C768;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a4c768
	if (!cr6.eq) goto loc_83A4C768;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831f08d0
	ctx.lr = 0x83A4C768;
	sub_831F08D0(ctx, base);
loc_83A4C768:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r10,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r10.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,168
	ctx.r30.s64 = ctx.r11.s64 + 168;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x83a75cd8
	ctx.lr = 0x83A4C794;
	sub_83A75CD8(ctx, base);
	// lwz r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// bne cr6,0x83a4c7ac
	if (!cr6.eq) goto loc_83A4C7AC;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// b 0x83a4c7bc
	goto loc_83A4C7BC;
loc_83A4C7AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_83A4C7BC:
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A4C7D4;
	sub_83A75D58(ctx, base);
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// stw r9,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4C7FC"))) PPC_WEAK_FUNC(sub_83A4C7FC);
PPC_FUNC_IMPL(__imp__sub_83A4C7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4C800"))) PPC_WEAK_FUNC(sub_83A4C800);
PPC_FUNC_IMPL(__imp__sub_83A4C800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A4C808;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a4c8a0
	if (!cr6.eq) goto loc_83A4C8A0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831effb8
	ctx.lr = 0x83A4C828;
	sub_831EFFB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x83a4c898
	if (cr6.lt) goto loc_83A4C898;
	// beq cr6,0x83a4c848
	if (cr6.eq) goto loc_83A4C848;
	// li r30,3
	ctx.r30.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A4C848:
	// lwz r3,500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// li r30,2
	ctx.r30.s64 = 2;
	// bl 0x83a75cd8
	ctx.lr = 0x83A4C854;
	sub_83A75CD8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831f0278
	ctx.lr = 0x83A4C860;
	sub_831F0278(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// bl 0x83a75d58
	ctx.lr = 0x83A4C86C;
	sub_83A75D58(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// beq cr6,0x83a4c880
	if (cr6.eq) goto loc_83A4C880;
	// li r30,3
	ctx.r30.s64 = 3;
loc_83A4C880:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A4C898:
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83A4C8A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4C8A8"))) PPC_WEAK_FUNC(sub_83A4C8A8);
PPC_FUNC_IMPL(__imp__sub_83A4C8A8) {
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
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a4c948
	if (!cr6.eq) goto loc_83A4C948;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831effb8
	ctx.lr = 0x83A4C8D8;
	sub_831EFFB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x83a4c944
	if (cr6.lt) goto loc_83A4C944;
	// beq cr6,0x83a4c8f0
	if (cr6.eq) goto loc_83A4C8F0;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x83a4c948
	goto loc_83A4C948;
loc_83A4C8F0:
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831f09a0
	ctx.lr = 0x83A4C900;
	sub_831F09A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4c914
	if (cr6.eq) goto loc_83A4C914;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// b 0x83a4c948
	goto loc_83A4C948;
loc_83A4C914:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r3,2
	ctx.r3.s64 = 2;
	// ld r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r8.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// std r7,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r7.u64);
	// std r6,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r6.u64);
	// b 0x83a4c948
	goto loc_83A4C948;
loc_83A4C944:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A4C948:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4C960"))) PPC_WEAK_FUNC(sub_83A4C960);
PPC_FUNC_IMPL(__imp__sub_83A4C960) {
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
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a4c9dc
	if (!cr6.eq) goto loc_83A4C9DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831effb8
	ctx.lr = 0x83A4C98C;
	sub_831EFFB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x83a4c9d8
	if (cr6.lt) goto loc_83A4C9D8;
	// beq cr6,0x83a4c9b4
	if (cr6.eq) goto loc_83A4C9B4;
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_83A4C9B4:
	// li r3,2
	ctx.r3.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
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
loc_83A4C9D8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A4C9DC:
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

__attribute__((alias("__imp__sub_83A4C9F0"))) PPC_WEAK_FUNC(sub_83A4C9F0);
PPC_FUNC_IMPL(__imp__sub_83A4C9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x83a4ca24
	if (cr6.lt) goto loc_83A4CA24;
	// beq cr6,0x83a4ca10
	if (cr6.eq) goto loc_83A4CA10;
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83A4CA10:
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83A4CA24:
	// li r11,0
	ctx.r11.s64 = 0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4CA38"))) PPC_WEAK_FUNC(sub_83A4CA38);
PPC_FUNC_IMPL(__imp__sub_83A4CA38) {
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
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x831efe48
	ctx.lr = 0x83A4CA5C;
	sub_831EFE48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831f00c0
	ctx.lr = 0x83A4CA68;
	sub_831F00C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a4caec
	if (!cr6.eq) goto loc_83A4CAEC;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4caa4
	if (cr6.eq) goto loc_83A4CAA4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a4ca90
	if (cr6.eq) goto loc_83A4CA90;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83a4caa8
	goto loc_83A4CAA8;
loc_83A4CA90:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x831f0e90
	ctx.lr = 0x83A4CAA0;
	sub_831F0E90(ctx, base);
	// b 0x83a4cab0
	goto loc_83A4CAB0;
loc_83A4CAA4:
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
loc_83A4CAA8:
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831f0e48
	ctx.lr = 0x83A4CAB0;
	sub_831F0E48(ctx, base);
loc_83A4CAB0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a4caec
	if (!cr6.eq) goto loc_83A4CAEC;
	// lwz r3,500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// bl 0x83a75cd8
	ctx.lr = 0x83A4CAC0;
	sub_83A75CD8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831f1170
	ctx.lr = 0x83A4CAD8;
	sub_831F1170(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// bl 0x83a75d58
	ctx.lr = 0x83A4CAE4;
	sub_83A75D58(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x83a4caf4
	if (cr6.eq) goto loc_83A4CAF4;
loc_83A4CAEC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_83A4CAF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4CB0C"))) PPC_WEAK_FUNC(sub_83A4CB0C);
PPC_FUNC_IMPL(__imp__sub_83A4CB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4CB10"))) PPC_WEAK_FUNC(sub_83A4CB10);
PPC_FUNC_IMPL(__imp__sub_83A4CB10) {
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
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// bl 0x83a75cd8
	ctx.lr = 0x83A4CB2C;
	sub_83A75CD8(ctx, base);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r31,164(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x83a75d58
	ctx.lr = 0x83A4CB38;
	sub_83A75D58(ctx, base);
	// neg r11,r31
	ctx.r11.s64 = -ctx.r31.s64;
	// andc r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
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

__attribute__((alias("__imp__sub_83A4CB58"))) PPC_WEAK_FUNC(sub_83A4CB58);
PPC_FUNC_IMPL(__imp__sub_83A4CB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a4cb78
	if (cr6.eq) goto loc_83A4CB78;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// blr 
	return;
loc_83A4CB78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4CB8C"))) PPC_WEAK_FUNC(sub_83A4CB8C);
PPC_FUNC_IMPL(__imp__sub_83A4CB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4CB90"))) PPC_WEAK_FUNC(sub_83A4CB90);
PPC_FUNC_IMPL(__imp__sub_83A4CB90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a4cb98
	sub_83A4CB98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4CB98"))) PPC_WEAK_FUNC(sub_83A4CB98);
PPC_FUNC_IMPL(__imp__sub_83A4CB98) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// addi r9,r11,-21736
	ctx.r9.s64 = ctx.r11.s64 + -21736;
	// addi r8,r10,-20080
	ctx.r8.s64 = ctx.r10.s64 + -20080;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a4cbdc
	if (cr6.eq) goto loc_83A4CBDC;
	// li r4,520
	ctx.r4.s64 = 520;
	// bl 0x83a79fb8
	ctx.lr = 0x83A4CBD8;
	sub_83A79FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A4CBDC:
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

__attribute__((alias("__imp__sub_83A4CBF0"))) PPC_WEAK_FUNC(sub_83A4CBF0);
PPC_FUNC_IMPL(__imp__sub_83A4CBF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A4CBF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x83a75cd8
	ctx.lr = 0x83A4CC0C;
	sub_83A75CD8(ctx, base);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x83a75d58
	ctx.lr = 0x83A4CC18;
	sub_83A75D58(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a4cd40
	if (cr6.eq) goto loc_83A4CD40;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r28,3
	ctx.r28.s64 = 3;
	// li r25,2
	ctx.r25.s64 = 2;
loc_83A4CC34:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x83a75cd8
	ctx.lr = 0x83A4CC3C;
	sub_83A75CD8(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4cc6c
	if (cr6.eq) goto loc_83A4CC6C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// bne cr6,0x83a4cc5c
	if (!cr6.eq) goto loc_83A4CC5C;
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
loc_83A4CC5C:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
loc_83A4CC6C:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x83a75d58
	ctx.lr = 0x83A4CC78;
	sub_83A75D58(ctx, base);
	// stw r27,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83a4cd2c
	if (cr6.lt) goto loc_83A4CD2C;
	// beq cr6,0x83a4ccd8
	if (cr6.eq) goto loc_83A4CCD8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x83a4cd38
	if (!cr6.lt) goto loc_83A4CD38;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831f00c0
	ctx.lr = 0x83A4CCA0;
	sub_831F00C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4ccb0
	if (cr6.eq) goto loc_83A4CCB0;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// b 0x83a4cd38
	goto loc_83A4CD38;
loc_83A4CCB0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831f1170
	ctx.lr = 0x83A4CCC8;
	sub_831F1170(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4cd38
	if (cr6.eq) goto loc_83A4CD38;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// b 0x83a4cd38
	goto loc_83A4CD38;
loc_83A4CCD8:
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// blt cr6,0x83a4ccec
	if (cr6.lt) goto loc_83A4CCEC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A4CCEC:
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpdi cr6,r7,0
	cr6.compare<int64_t>(ctx.r7.s64, 0, xer);
	// bne cr6,0x83a4cd0c
	if (!cr6.eq) goto loc_83A4CD0C;
	// std r29,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r29.u64);
	// stw r25,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r25.u32);
	// stw r29,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r29.u32);
	// b 0x83a4cd38
	goto loc_83A4CD38;
loc_83A4CD0C:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// ld r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831f1170
	ctx.lr = 0x83A4CD1C;
	sub_831F1170(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4cd38
	if (cr6.eq) goto loc_83A4CD38;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// b 0x83a4cd38
	goto loc_83A4CD38;
loc_83A4CD2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83a4ca38
	ctx.lr = 0x83A4CD38;
	sub_83A4CA38(ctx, base);
loc_83A4CD38:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne 0x83a4cc34
	if (!cr0.eq) goto loc_83A4CC34;
loc_83A4CD40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4CD48"))) PPC_WEAK_FUNC(sub_83A4CD48);
PPC_FUNC_IMPL(__imp__sub_83A4CD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A4CD50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4cdd8
	if (cr6.eq) goto loc_83A4CDD8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-19992
	ctx.r5.s64 = ctx.r11.s64 + -19992;
	// li r3,520
	ctx.r3.s64 = 520;
	// bl 0x83a79ff0
	ctx.lr = 0x83A4CD78;
	sub_83A79FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4cdd8
	if (cr6.eq) goto loc_83A4CDD8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// addi r8,r11,-21736
	ctx.r8.s64 = ctx.r11.s64 + -21736;
	// addi r7,r10,-20036
	ctx.r7.s64 = ctx.r10.s64 + -20036;
	// addi r6,r9,-20040
	ctx.r6.s64 = ctx.r9.s64 + -20040;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f14b0
	ctx.lr = 0x83A4CDB8;
	sub_831F14B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4cde4
	if (cr6.eq) goto loc_83A4CDE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A4CDD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A4CDD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A4CDE4:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831f09d8
	ctx.lr = 0x83A4CDF0;
	sub_831F09D8(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// std r30,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// std r10,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r10.u64);
	// li r4,72
	ctx.r4.s64 = 72;
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// std r30,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r30.u64);
	// std r9,512(r31)
	PPC_STORE_U64(ctx.r31.u32 + 512, ctx.r9.u64);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// bl 0x83a75be8
	ctx.lr = 0x83A4CE2C;
	sub_83A75BE8(ctx, base);
	// stw r3,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r3.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83a75be8
	ctx.lr = 0x83A4CE40;
	sub_83A75BE8(ctx, base);
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A4CE64;
	sub_831CDCF0(ctx, base);
	// addi r8,r31,200
	ctx.r8.s64 = ctx.r31.s64 + 200;
	// addi r7,r31,232
	ctx.r7.s64 = ctx.r31.s64 + 232;
	// stw r29,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r29.u32);
	// addi r6,r31,264
	ctx.r6.s64 = ctx.r31.s64 + 264;
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// addi r5,r31,296
	ctx.r5.s64 = ctx.r31.s64 + 296;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// addi r4,r31,328
	ctx.r4.s64 = ctx.r31.s64 + 328;
	// stw r8,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r8.u32);
	// addi r11,r31,360
	ctx.r11.s64 = ctx.r31.s64 + 360;
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// addi r10,r31,392
	ctx.r10.s64 = ctx.r31.s64 + 392;
	// stw r7,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r7.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r6.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r5,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r5.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r4,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r4.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r10,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4CECC"))) PPC_WEAK_FUNC(sub_83A4CECC);
PPC_FUNC_IMPL(__imp__sub_83A4CECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4CED0"))) PPC_WEAK_FUNC(sub_83A4CED0);
PPC_FUNC_IMPL(__imp__sub_83A4CED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-10968
	ctx.r11.s64 = ctx.r11.s64 + -10968;
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a4cf2c
	if (cr6.eq) goto loc_83A4CF2C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
loc_83A4CEF8:
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// bne cr6,0x83a4cf18
	if (!cr6.eq) goto loc_83A4CF18;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r6,0
	ctx.r6.s64 = 0;
loc_83A4CF18:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// blt cr6,0x83a4cef8
	if (cr6.lt) goto loc_83A4CEF8;
loc_83A4CF2C:
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// sth r10,120(r11)
	PPC_STORE_U16(ctx.r11.u32 + 120, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4CF70"))) PPC_WEAK_FUNC(sub_83A4CF70);
PPC_FUNC_IMPL(__imp__sub_83A4CF70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x83a4cf84
	if (!cr6.eq) goto loc_83A4CF84;
	// li r7,1
	ctx.r7.s64 = 1;
loc_83A4CF84:
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-10968
	ctx.r8.s64 = ctx.r10.s64 + -10968;
	// lhz r9,120(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 120);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83A4CFA0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x83a4cfc0
	if (cr6.eq) goto loc_83A4CFC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a4cfa0
	if (cr6.lt) goto loc_83A4CFA0;
	// blr 
	return;
loc_83A4CFC0:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4CFD8"))) PPC_WEAK_FUNC(sub_83A4CFD8);
PPC_FUNC_IMPL(__imp__sub_83A4CFD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x83a4cfec
	if (!cr6.eq) goto loc_83A4CFEC;
	// li r7,1
	ctx.r7.s64 = 1;
loc_83A4CFEC:
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-10968
	ctx.r8.s64 = ctx.r10.s64 + -10968;
	// lhz r9,120(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 120);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83A4D008:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x83a4d028
	if (cr6.eq) goto loc_83A4D028;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a4d008
	if (cr6.lt) goto loc_83A4D008;
	// blr 
	return;
loc_83A4D028:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4D040"))) PPC_WEAK_FUNC(sub_83A4D040);
PPC_FUNC_IMPL(__imp__sub_83A4D040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A4D048;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d0b8
	if (cr6.eq) goto loc_83A4D0B8;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4D074;
	sub_831CDCF0(ctx, base);
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(ctx.r30.s32, 6, xer);
	// ble cr6,0x83a4d080
	if (!cr6.gt) goto loc_83A4D080;
	// li r30,6
	ctx.r30.s64 = 6;
loc_83A4D080:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// ble cr6,0x83a4d0b8
	if (!cr6.gt) goto loc_83A4D0B8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// subf r9,r29,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r29.s64;
loc_83A4D0A0:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,-20(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83a4d0a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A4D0A0;
loc_83A4D0B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4D0C0"))) PPC_WEAK_FUNC(sub_83A4D0C0);
PPC_FUNC_IMPL(__imp__sub_83A4D0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r11,-10844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10844);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,20352
	ctx.r3.s64 = ctx.r11.s64 + 20352;
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,40
	ctx.r8.s64 = 40;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,23130
	ctx.r10.s64 = 1515847680;
	// ori r10,r10,23130
	ctx.r10.u64 = ctx.r10.u64 | 23130;
loc_83A4D0FC:
	// stw r10,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r10.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a4d0fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A4D0FC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4D10C"))) PPC_WEAK_FUNC(sub_83A4D10C);
PPC_FUNC_IMPL(__imp__sub_83A4D10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4D110"))) PPC_WEAK_FUNC(sub_83A4D110);
PPC_FUNC_IMPL(__imp__sub_83A4D110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A4D118;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r27,r11,20256
	ctx.r27.s64 = ctx.r11.s64 + 20256;
	// lwz r11,20256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20256);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bne 0x83a4d1a8
	if (!cr0.eq) goto loc_83A4D1A8;
	// bl 0x83307688
	ctx.lr = 0x83A4D138;
	sub_83307688(ctx, base);
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-10968
	ctx.r28.s64 = ctx.r11.s64 + -10968;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lhz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4d184
	if (cr6.eq) goto loc_83A4D184;
	// addi r31,r28,-4
	ctx.r31.s64 = ctx.r28.s64 + -4;
loc_83A4D158:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a57918
	ctx.lr = 0x83A4D160;
	sub_83A57918(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83a57918
	ctx.lr = 0x83A4D168;
	sub_83A57918(ctx, base);
	// lhz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 120);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// stwu r29,12(r31)
	ea = 12 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// blt cr6,0x83a4d158
	if (cr6.lt) goto loc_83A4D158;
loc_83A4D184:
	// sth r29,120(r28)
	PPC_STORE_U16(ctx.r28.u32 + 120, ctx.r29.u16);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x83A4D190;
	sub_83102DB0(ctx, base);
	// bl 0x83a7a768
	ctx.lr = 0x83A4D194;
	sub_83A7A768(ctx, base);
	// lwz r3,76(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d1a8
	if (cr6.eq) goto loc_83A4D1A8;
	// bl 0x83a75c60
	ctx.lr = 0x83A4D1A4;
	sub_83A75C60(ctx, base);
	// stw r29,76(r27)
	PPC_STORE_U32(ctx.r27.u32 + 76, ctx.r29.u32);
loc_83A4D1A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4D1B0"))) PPC_WEAK_FUNC(sub_83A4D1B0);
PPC_FUNC_IMPL(__imp__sub_83A4D1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A4D1B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r26,10240
	ctx.r26.s64 = 10240;
	// li r30,64
	ctx.r30.s64 = 64;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// bl 0x83a7b6e0
	ctx.lr = 0x83A4D1FC;
	sub_83A7B6E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83a7a780
	ctx.lr = 0x83A4D208;
	sub_83A7A780(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x83a7b140
	ctx.lr = 0x83A4D22C;
	sub_83A7B140(ctx, base);
	// add r11,r3,r25
	ctx.r11.u64 = ctx.r3.u64 + ctx.r25.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r27,r11,15260
	ctx.r27.s64 = ctx.r11.s64 + 15260;
	// beq cr6,0x83a4d294
	if (cr6.eq) goto loc_83A4D294;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4d294
	if (cr6.eq) goto loc_83A4D294;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r8,r9,-19800
	ctx.r8.s64 = ctx.r9.s64 + -19800;
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// bl 0x83a7b6e0
	ctx.lr = 0x83A4D280;
	sub_83A7B6E0(ctx, base);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A4D294:
	// addi r3,r27,60
	ctx.r3.s64 = ctx.r27.s64 + 60;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4D2A0"))) PPC_WEAK_FUNC(sub_83A4D2A0);
PPC_FUNC_IMPL(__imp__sub_83A4D2A0) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r10,3484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3484, ctx.r10.u32);
	// stw r30,4456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4456, ctx.r30.u32);
	// li r5,2304
	ctx.r5.s64 = 2304;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stfs f0,3476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// stw r9,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r9.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A4D2EC;
	sub_831CDCF0(ctx, base);
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// stw r11,2304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2304, ctx.r11.u32);
	// lfs f0,16100(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// sth r10,2336(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2336, ctx.r10.u16);
	// stfs f0,4772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4772, temp.u32);
	// stw r11,2340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2340, ctx.r11.u32);
	// stw r11,2344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2344, ctx.r11.u32);
	// stw r11,4428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4428, ctx.r11.u32);
	// stw r10,4432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4432, ctx.r10.u32);
	// stw r11,4328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4328, ctx.r11.u32);
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// stw r11,4488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4488, ctx.r11.u32);
	// stw r11,4492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4492, ctx.r11.u32);
	// stw r11,4496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4496, ctx.r11.u32);
	// stw r11,4500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4500, ctx.r11.u32);
	// stw r11,4504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4504, ctx.r11.u32);
	// stw r11,4508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4508, ctx.r11.u32);
	// stw r11,4512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4512, ctx.r11.u32);
	// stw r11,4524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4524, ctx.r11.u32);
	// stw r11,4520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4520, ctx.r11.u32);
	// stw r11,4528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4528, ctx.r11.u32);
	// stw r11,4532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4532, ctx.r11.u32);
	// stw r11,4536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4536, ctx.r11.u32);
	// stw r11,4540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4540, ctx.r11.u32);
	// stw r11,4544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4544, ctx.r11.u32);
	// stw r11,4548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4548, ctx.r11.u32);
	// stw r11,4744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4744, ctx.r11.u32);
	// stw r11,4748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4748, ctx.r11.u32);
	// stw r11,4760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4760, ctx.r11.u32);
	// stw r11,4764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4764, ctx.r11.u32);
	// stw r11,4768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4768, ctx.r11.u32);
	// stw r11,4780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4780, ctx.r11.u32);
	// stw r11,4784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4784, ctx.r11.u32);
	// stw r11,4788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4788, ctx.r11.u32);
	// stw r11,4792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4792, ctx.r11.u32);
	// stw r11,4796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4796, ctx.r11.u32);
	// stw r11,4800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4800, ctx.r11.u32);
	// stw r11,4808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4808, ctx.r11.u32);
	// stw r11,4804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4804, ctx.r11.u32);
	// stw r11,4812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4812, ctx.r11.u32);
	// stw r11,4816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4816, ctx.r11.u32);
	// stw r11,4820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4820, ctx.r11.u32);
	// stw r11,4824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4824, ctx.r11.u32);
	// stw r11,4828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4828, ctx.r11.u32);
	// stw r30,4776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4776, ctx.r30.u32);
	// stb r11,4832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4832, ctx.r11.u8);
	// stw r11,4920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4920, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4D3CC"))) PPC_WEAK_FUNC(sub_83A4D3CC);
PPC_FUNC_IMPL(__imp__sub_83A4D3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4D3D0"))) PPC_WEAK_FUNC(sub_83A4D3D0);
PPC_FUNC_IMPL(__imp__sub_83A4D3D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4784, ctx.r4.u32);
	// stw r5,4788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4788, ctx.r5.u32);
	// stw r6,4792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4792, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4D3E0"))) PPC_WEAK_FUNC(sub_83A4D3E0);
PPC_FUNC_IMPL(__imp__sub_83A4D3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A4D3E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4452(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4452);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r29,4404(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4404);
	// beq cr6,0x83a4d40c
	if (cr6.eq) goto loc_83A4D40C;
	// bl 0x83a7bd40
	ctx.lr = 0x83A4D408;
	sub_83A7BD40(ctx, base);
	// stw r30,4452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4452, ctx.r30.u32);
loc_83A4D40C:
	// lwz r3,4436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4436);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d424
	if (cr6.eq) goto loc_83A4D424;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a55cb0
	ctx.lr = 0x83A4D420;
	sub_83A55CB0(ctx, base);
	// stw r30,4436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4436, ctx.r30.u32);
loc_83A4D424:
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d438
	if (cr6.eq) goto loc_83A4D438;
	// bl 0x83a57a50
	ctx.lr = 0x83A4D434;
	sub_83A57A50(ctx, base);
	// stw r30,4472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4472, ctx.r30.u32);
loc_83A4D438:
	// lwz r3,4424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d44c
	if (cr6.eq) goto loc_83A4D44C;
	// bl 0x83a57a50
	ctx.lr = 0x83A4D448;
	sub_83A57A50(ctx, base);
	// stw r30,4424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4424, ctx.r30.u32);
loc_83A4D44C:
	// lwz r11,4816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4816);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4d474
	if (cr6.eq) goto loc_83A4D474;
	// lwz r4,4824(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4824);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a4d474
	if (cr6.eq) goto loc_83A4D474;
	// lwz r3,4820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4820);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A4D470;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,4824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4824, ctx.r30.u32);
loc_83A4D474:
	// lwz r11,4884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4884);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4d48c
	if (!cr6.eq) goto loc_83A4D48C;
	// lwz r11,4888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4888);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x83a4d4a8
	if (cr6.gt) goto loc_83A4D4A8;
loc_83A4D48C:
	// lwz r3,4352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d4a8
	if (cr6.eq) goto loc_83A4D4A8;
	// bl 0x83a7bd40
	ctx.lr = 0x83A4D49C;
	sub_83A7BD40(ctx, base);
	// stw r30,4408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4408, ctx.r30.u32);
	// stw r30,4412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4412, ctx.r30.u32);
	// stw r30,4352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4352, ctx.r30.u32);
loc_83A4D4A8:
	// li r5,820
	ctx.r5.s64 = 820;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3504
	ctx.r3.s64 = ctx.r31.s64 + 3504;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4D4B8;
	sub_831CDCF0(ctx, base);
	// lwz r3,4780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d4cc
	if (cr6.eq) goto loc_83A4D4CC;
	// bl 0x83a78b10
	ctx.lr = 0x83A4D4C8;
	sub_83A78B10(ctx, base);
	// stw r30,4780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4780, ctx.r30.u32);
loc_83A4D4CC:
	// stw r30,3500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3500, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4D4D8"))) PPC_WEAK_FUNC(sub_83A4D4D8);
PPC_FUNC_IMPL(__imp__sub_83A4D4D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a558d0
	sub_83A558D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4D4DC"))) PPC_WEAK_FUNC(sub_83A4D4DC);
PPC_FUNC_IMPL(__imp__sub_83A4D4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4D4E0"))) PPC_WEAK_FUNC(sub_83A4D4E0);
PPC_FUNC_IMPL(__imp__sub_83A4D4E0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,4448(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4448);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4436(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4436);
	// bl 0x83a55988
	ctx.lr = 0x83A4D504;
	sub_83A55988(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4448, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A4D520"))) PPC_WEAK_FUNC(sub_83A4D520);
PPC_FUNC_IMPL(__imp__sub_83A4D520) {
	PPC_FUNC_PROLOGUE();
	// stw r4,3484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3484, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4D528"))) PPC_WEAK_FUNC(sub_83A4D528);
PPC_FUNC_IMPL(__imp__sub_83A4D528) {
	PPC_FUNC_PROLOGUE();
	// stw r4,3488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3488, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4D530"))) PPC_WEAK_FUNC(sub_83A4D530);
PPC_FUNC_IMPL(__imp__sub_83A4D530) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4424);
	// b 0x83a57d08
	sub_83A57D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4D538"))) PPC_WEAK_FUNC(sub_83A4D538);
PPC_FUNC_IMPL(__imp__sub_83A4D538) {
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
	// lwz r3,4436(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4436);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d55c
	if (cr6.eq) goto loc_83A4D55C;
	// bl 0x83a560f8
	ctx.lr = 0x83A4D55C;
	sub_83A560F8(ctx, base);
loc_83A4D55C:
	// lwz r3,4332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4332);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d56c
	if (cr6.eq) goto loc_83A4D56C;
	// bl 0x83a7ac00
	ctx.lr = 0x83A4D56C;
	sub_83A7AC00(ctx, base);
loc_83A4D56C:
	// lwz r3,4344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4344);
	// bl 0x83a7bd60
	ctx.lr = 0x83A4D574;
	sub_83A7BD60(ctx, base);
	// lwz r3,4364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d584
	if (cr6.eq) goto loc_83A4D584;
	// bl 0x83a7bd60
	ctx.lr = 0x83A4D584;
	sub_83A7BD60(ctx, base);
loc_83A4D584:
	// lwz r3,4352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d594
	if (cr6.eq) goto loc_83A4D594;
	// bl 0x83a7bd60
	ctx.lr = 0x83A4D594;
	sub_83A7BD60(ctx, base);
loc_83A4D594:
	// lwz r3,4348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d5a4
	if (cr6.eq) goto loc_83A4D5A4;
	// bl 0x83a7bd60
	ctx.lr = 0x83A4D5A4;
	sub_83A7BD60(ctx, base);
loc_83A4D5A4:
	// lwz r3,4436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4436);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d5b4
	if (cr6.eq) goto loc_83A4D5B4;
	// bl 0x83a56158
	ctx.lr = 0x83A4D5B4;
	sub_83A56158(ctx, base);
loc_83A4D5B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4356, ctx.r11.u32);
	// stw r11,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r11.u32);
	// stw r11,4328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4328, ctx.r11.u32);
	// stw r11,4340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4340, ctx.r11.u32);
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// stw r11,4488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4488, ctx.r11.u32);
	// stw r11,4492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4492, ctx.r11.u32);
	// stw r11,4496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4496, ctx.r11.u32);
	// stw r11,4500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4500, ctx.r11.u32);
	// stw r11,4504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4504, ctx.r11.u32);
	// stw r11,4508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4508, ctx.r11.u32);
	// stw r11,4512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4512, ctx.r11.u32);
	// stw r11,4524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4524, ctx.r11.u32);
	// stw r11,4528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4528, ctx.r11.u32);
	// stw r11,4532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4532, ctx.r11.u32);
	// stw r11,4536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4536, ctx.r11.u32);
	// stw r11,4540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4540, ctx.r11.u32);
	// stw r11,4544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4544, ctx.r11.u32);
	// stw r11,4548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4548, ctx.r11.u32);
	// stw r11,4744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4744, ctx.r11.u32);
	// stw r11,4748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4748, ctx.r11.u32);
	// stw r11,4428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4428, ctx.r11.u32);
	// stw r10,4432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4432, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83A4D62C"))) PPC_WEAK_FUNC(sub_83A4D62C);
PPC_FUNC_IMPL(__imp__sub_83A4D62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4D630"))) PPC_WEAK_FUNC(sub_83A4D630);
PPC_FUNC_IMPL(__imp__sub_83A4D630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A4D638;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4884(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4884);
	// lwz r29,4332(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4332);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4d6c4
	if (!cr6.eq) goto loc_83A4D6C4;
	// lwz r11,4888(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4888);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a4d6c4
	if (!cr6.gt) goto loc_83A4D6C4;
	// lwz r31,4348(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4348);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A4D668;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d6ac
	if (cr6.eq) goto loc_83A4D6AC;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_83A4D674:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A4D688;
	sub_83A7BD70(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A4D698;
	sub_83A7BD90(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A4D6A4;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4d674
	if (!cr6.eq) goto loc_83A4D674;
loc_83A4D6AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7b0c0
	ctx.lr = 0x83A4D6B4;
	sub_83A7B0C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bd60
	ctx.lr = 0x83A4D6BC;
	sub_83A7BD60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7a8d8
	ctx.lr = 0x83A4D6C4;
	sub_83A7A8D8(ctx, base);
loc_83A4D6C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4D6CC"))) PPC_WEAK_FUNC(sub_83A4D6CC);
PPC_FUNC_IMPL(__imp__sub_83A4D6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4D6D0"))) PPC_WEAK_FUNC(sub_83A4D6D0);
PPC_FUNC_IMPL(__imp__sub_83A4D6D0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83a7a680
	ctx.lr = 0x83A4D6FC;
	sub_83A7A680(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4388);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r4,4528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4528, ctx.r4.u32);
	// stw r5,4532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4532, ctx.r5.u32);
	// bl 0x83a7a460
	ctx.lr = 0x83A4D718;
	sub_83A7A460(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824ce1d8
	ctx.lr = 0x83A4D720;
	sub_824CE1D8(ctx, base);
	// stw r3,4536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4536, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a777f8
	ctx.lr = 0x83A4D72C;
	sub_83A777F8(ctx, base);
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

__attribute__((alias("__imp__sub_83A4D748"))) PPC_WEAK_FUNC(sub_83A4D748);
PPC_FUNC_IMPL(__imp__sub_83A4D748) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83a7a680
	ctx.lr = 0x83A4D774;
	sub_83A7A680(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4388);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r4,4540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4540, ctx.r4.u32);
	// stw r5,4544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4544, ctx.r5.u32);
	// bl 0x83a7a460
	ctx.lr = 0x83A4D790;
	sub_83A7A460(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824ce1d8
	ctx.lr = 0x83A4D798;
	sub_824CE1D8(ctx, base);
	// stw r3,4548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4548, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a777f8
	ctx.lr = 0x83A4D7A4;
	sub_83A777F8(ctx, base);
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

__attribute__((alias("__imp__sub_83A4D7C0"))) PPC_WEAK_FUNC(sub_83A4D7C0);
PPC_FUNC_IMPL(__imp__sub_83A4D7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x83A4D7C8;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r3,4388(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4388);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83a7a460
	ctx.lr = 0x83A4D7E8;
	sub_83A7A460(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,1120
	ctx.r5.s64 = 1120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4D7FC;
	sub_831CDCF0(ctx, base);
	// li r16,0
	ctx.r16.s64 = 0;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r16,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r16.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r10,-19732
	ctx.r5.s64 = ctx.r10.s64 + -19732;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A4D818;
	sub_83A772D0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r11,-19740
	ctx.r28.s64 = ctx.r11.s64 + -19740;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4D834;
	sub_83A772D0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r30,4880(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4880);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a4d8b4
	if (cr6.eq) goto loc_83A4D8B4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4d87c
	if (cr6.eq) goto loc_83A4D87C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19752
	ctx.r5.s64 = ctx.r11.s64 + -19752;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a77328
	ctx.lr = 0x83A4D864;
	sub_83A77328(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d87c
	if (cr6.eq) goto loc_83A4D87C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A4D87C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A4D87C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4d8b4
	if (cr6.eq) goto loc_83A4D8B4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19760
	ctx.r5.s64 = ctx.r11.s64 + -19760;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a77328
	ctx.lr = 0x83A4D89C;
	sub_83A77328(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4d8b4
	if (cr6.eq) goto loc_83A4D8B4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A4D8B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A4D8B4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19768
	ctx.r5.s64 = ctx.r11.s64 + -19768;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4D8C8;
	sub_83A772D0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r26,r31,24
	ctx.r26.s64 = ctx.r31.s64 + 24;
	// addi r23,r31,1028
	ctx.r23.s64 = ctx.r31.s64 + 1028;
	// bl 0x824ce1d8
	ctx.lr = 0x83A4D8DC;
	sub_824CE1D8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4da34
	if (cr6.eq) goto loc_83A4DA34;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,16467
	ctx.r10.s64 = 1079181312;
	// lis r9,16449
	ctx.r9.s64 = 1078001664;
	// lis r8,16451
	ctx.r8.s64 = 1078132736;
	// lis r7,16467
	ctx.r7.s64 = 1079181312;
	// ori r27,r10,16980
	ctx.r27.u64 = ctx.r10.u64 | 16980;
	// ori r25,r9,19536
	ctx.r25.u64 = ctx.r9.u64 | 19536;
	// ori r18,r8,21829
	ctx.r18.u64 = ctx.r8.u64 | 21829;
	// li r21,1
	ctx.r21.s64 = 1;
	// ori r22,r7,17985
	ctx.r22.u64 = ctx.r7.u64 | 17985;
	// li r17,32
	ctx.r17.s64 = 32;
	// addi r24,r11,-19776
	ctx.r24.s64 = ctx.r11.s64 + -19776;
loc_83A4D91C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4D92C;
	sub_83A772D0(ctx, base);
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, xer);
	// bgt cr6,0x83a4d9b8
	if (cr6.gt) goto loc_83A4D9B8;
	// beq cr6,0x83a4d9a8
	if (cr6.eq) goto loc_83A4D9A8;
	// cmplw cr6,r3,r25
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, xer);
	// beq cr6,0x83a4d958
	if (cr6.eq) goto loc_83A4D958;
	// cmplw cr6,r3,r18
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r18.u32, xer);
	// bne cr6,0x83a4da28
	if (!cr6.eq) goto loc_83A4DA28;
	// lwz r11,1088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r11.u32);
	// b 0x83a4da28
	goto loc_83A4DA28;
loc_83A4D958:
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a4d97c
	if (!cr6.gt) goto loc_83A4D97C;
	// stw r21,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r21.u32);
	// stw r25,4464(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4464, ctx.r25.u32);
	// stw r16,4468(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4468, ctx.r16.u32);
	// b 0x83a4da28
	goto loc_83A4DA28;
loc_83A4D97C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4D98C;
	sub_83A772D0(ctx, base);
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r3,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r3.u32);
	// stw r25,4464(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4464, ctx.r25.u32);
	// stw r16,4468(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4468, ctx.r16.u32);
	// b 0x83a4da28
	goto loc_83A4DA28;
loc_83A4D9A8:
	// lwz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r11.u32);
	// b 0x83a4da28
	goto loc_83A4DA28;
loc_83A4D9B8:
	// subf. r11,r22,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r22.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a4da10
	if (cr0.eq) goto loc_83A4DA10;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, xer);
	// bne cr6,0x83a4da28
	if (!cr6.eq) goto loc_83A4DA28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a4d9e4
	if (!cr6.gt) goto loc_83A4D9E4;
	// stw r21,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r21.u32);
	// b 0x83a4da28
	goto loc_83A4DA28;
loc_83A4D9E4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4D9F4;
	sub_83A772D0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r3,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r3.u32);
	// b 0x83a4da28
	goto loc_83A4DA28;
loc_83A4DA10:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// ble cr6,0x83a4da28
	if (!cr6.gt) goto loc_83A4DA28;
	// stw r17,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r17.u32);
loc_83A4DA28:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r20
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, xer);
	// blt cr6,0x83a4d91c
	if (cr6.lt) goto loc_83A4D91C;
loc_83A4DA34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a777f8
	ctx.lr = 0x83A4DA3C;
	sub_83A777F8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4DA44"))) PPC_WEAK_FUNC(sub_83A4DA44);
PPC_FUNC_IMPL(__imp__sub_83A4DA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4DA48"))) PPC_WEAK_FUNC(sub_83A4DA48);
PPC_FUNC_IMPL(__imp__sub_83A4DA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A4DA50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,4388(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4388);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bl 0x83a7a460
	ctx.lr = 0x83A4DA70;
	sub_83A7A460(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19516
	ctx.r5.s64 = ctx.r11.s64 + -19516;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DA84;
	sub_83A772D0(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,-19528
	ctx.r5.s64 = ctx.r10.s64 + -19528;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DA9C;
	sub_83A772D0(ctx, base);
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r9,-19540
	ctx.r5.s64 = ctx.r9.s64 + -19540;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DAB4;
	sub_83A772D0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r8,-19556
	ctx.r5.s64 = ctx.r8.s64 + -19556;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DAD0;
	sub_83A772D0(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r7,26572
	ctx.r5.s64 = ctx.r7.s64 + 26572;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DAE8;
	sub_83A772D0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r6,26524
	ctx.r5.s64 = ctx.r6.s64 + 26524;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DB00;
	sub_83A772D0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r5,-32205
	ctx.r5.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r5,-19564
	ctx.r5.s64 = ctx.r5.s64 + -19564;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DB18;
	sub_83A772D0(ctx, base);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// ble cr6,0x83a4db28
	if (!cr6.gt) goto loc_83A4DB28;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
loc_83A4DB28:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,-19576
	ctx.r29.s64 = ctx.r11.s64 + -19576;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a76f50
	ctx.lr = 0x83A4DB3C;
	sub_83A76F50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83a4db5c
	if (!cr6.gt) goto loc_83A4DB5C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DB54;
	sub_83A772D0(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// b 0x83a4db64
	goto loc_83A4DB64;
loc_83A4DB5C:
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_83A4DB64:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19588
	ctx.r5.s64 = ctx.r11.s64 + -19588;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DB78;
	sub_83A772D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// bne cr6,0x83a4db8c
	if (!cr6.eq) goto loc_83A4DB8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_83A4DB8C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19600
	ctx.r5.s64 = ctx.r11.s64 + -19600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DBA0;
	sub_83A772D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// bne cr6,0x83a4dbb4
	if (!cr6.eq) goto loc_83A4DBB4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_83A4DBB4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19612
	ctx.r5.s64 = ctx.r11.s64 + -19612;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DBC8;
	sub_83A772D0(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,-19624
	ctx.r5.s64 = ctx.r10.s64 + -19624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DBE0;
	sub_83A772D0(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r9,-19640
	ctx.r5.s64 = ctx.r9.s64 + -19640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DBF8;
	sub_83A772D0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r8,-19656
	ctx.r5.s64 = ctx.r8.s64 + -19656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DC10;
	sub_83A772D0(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r7,-19668
	ctx.r5.s64 = ctx.r7.s64 + -19668;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DC28;
	sub_83A772D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bne cr6,0x83a4dc3c
	if (!cr6.eq) goto loc_83A4DC3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83A4DC3C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19680
	ctx.r5.s64 = ctx.r11.s64 + -19680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DC50;
	sub_83A772D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x83a4dc64
	if (!cr6.eq) goto loc_83A4DC64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83A4DC64:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19692
	ctx.r5.s64 = ctx.r11.s64 + -19692;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DC78;
	sub_83A772D0(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83a4dc88
	if (!cr6.eq) goto loc_83A4DC88;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83A4DC88:
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,-19712
	ctx.r29.s64 = ctx.r11.s64 + -19712;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a76f50
	ctx.lr = 0x83A4DCA0;
	sub_83A76F50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83a4dcc0
	if (!cr6.gt) goto loc_83A4DCC0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DCB8;
	sub_83A772D0(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// b 0x83a4dcc8
	goto loc_83A4DCC8;
loc_83A4DCC0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_83A4DCC8:
	// lwz r31,4880(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4880);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a4dd14
	if (cr6.eq) goto loc_83A4DD14;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4dd14
	if (cr6.eq) goto loc_83A4DD14;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19724
	ctx.r5.s64 = ctx.r11.s64 + -19724;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DCF4;
	sub_83A772D0(ctx, base);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r3,r9
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, xer);
	// beq cr6,0x83a4dd14
	if (cr6.eq) goto loc_83A4DD14;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A4DD14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A4DD14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a777f8
	ctx.lr = 0x83A4DD1C;
	sub_83A777F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4DD24"))) PPC_WEAK_FUNC(sub_83A4DD24);
PPC_FUNC_IMPL(__imp__sub_83A4DD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4DD28"))) PPC_WEAK_FUNC(sub_83A4DD28);
PPC_FUNC_IMPL(__imp__sub_83A4DD28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A4DD30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r3,4388(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4388);
	// bl 0x83a7a460
	ctx.lr = 0x83A4DD4C;
	sub_83A7A460(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19460
	ctx.r5.s64 = ctx.r11.s64 + -19460;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DD60;
	sub_83A772D0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,-19476
	ctx.r5.s64 = ctx.r10.s64 + -19476;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DD78;
	sub_83A772D0(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r9,-19492
	ctx.r5.s64 = ctx.r9.s64 + -19492;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DD90;
	sub_83A772D0(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r8,-19564
	ctx.r28.s64 = ctx.r8.s64 + -19564;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DDAC;
	sub_83A772D0(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r7,-19504
	ctx.r5.s64 = ctx.r7.s64 + -19504;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DDC4;
	sub_83A772D0(ctx, base);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// lis r6,-32205
	ctx.r6.s64 = -2110586880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r6,-19640
	ctx.r5.s64 = ctx.r6.s64 + -19640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DDDC;
	sub_83A772D0(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// lis r5,-32205
	ctx.r5.s64 = -2110586880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r5,-19656
	ctx.r5.s64 = ctx.r5.s64 + -19656;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DDF4;
	sub_83A772D0(ctx, base);
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DE08;
	sub_83A772D0(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// ble cr6,0x83a4de18
	if (!cr6.gt) goto loc_83A4DE18;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_83A4DE18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a777f8
	ctx.lr = 0x83A4DE20;
	sub_83A777F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4DE28"))) PPC_WEAK_FUNC(sub_83A4DE28);
PPC_FUNC_IMPL(__imp__sub_83A4DE28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A4DE30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r3,4388(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4388);
	// bl 0x83a7a460
	ctx.lr = 0x83A4DE4C;
	sub_83A7A460(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19476
	ctx.r5.s64 = ctx.r11.s64 + -19476;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DE60;
	sub_83A772D0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,-19444
	ctx.r5.s64 = ctx.r10.s64 + -19444;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DE78;
	sub_83A772D0(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r7,-19564
	ctx.r5.s64 = ctx.r7.s64 + -19564;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DE9C;
	sub_83A772D0(ctx, base);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// ble cr6,0x83a4deac
	if (!cr6.gt) goto loc_83A4DEAC;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
loc_83A4DEAC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a4ded8
	if (!cr6.gt) goto loc_83A4DED8;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ble cr6,0x83a4ded8
	if (!cr6.gt) goto loc_83A4DED8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a4ded8
	if (!cr6.gt) goto loc_83A4DED8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A4DED8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a777f8
	ctx.lr = 0x83A4DEE0;
	sub_83A777F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4DEE8"))) PPC_WEAK_FUNC(sub_83A4DEE8);
PPC_FUNC_IMPL(__imp__sub_83A4DEE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A4DEF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r3,4388(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4388);
	// bl 0x83a7a460
	ctx.lr = 0x83A4DF0C;
	sub_83A7A460(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19640
	ctx.r5.s64 = ctx.r11.s64 + -19640;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DF20;
	sub_83A772D0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,-19656
	ctx.r5.s64 = ctx.r10.s64 + -19656;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DF38;
	sub_83A772D0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r9,-19432
	ctx.r5.s64 = ctx.r9.s64 + -19432;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DF50;
	sub_83A772D0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r8,-19444
	ctx.r5.s64 = ctx.r8.s64 + -19444;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DF68;
	sub_83A772D0(ctx, base);
	// clrldi r7,r3,32
	ctx.r7.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r6,-32205
	ctx.r6.s64 = -2110586880;
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r6,-19564
	ctx.r5.s64 = ctx.r6.s64 + -19564;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4DF84;
	sub_83A772D0(ctx, base);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// ble cr6,0x83a4df94
	if (!cr6.gt) goto loc_83A4DF94;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
loc_83A4DF94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83a4dfcc
	if (!cr6.eq) goto loc_83A4DFCC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a4dfcc
	if (!cr6.gt) goto loc_83A4DFCC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a4dfcc
	if (!cr6.gt) goto loc_83A4DFCC;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ble cr6,0x83a4dfcc
	if (!cr6.gt) goto loc_83A4DFCC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A4DFCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a777f8
	ctx.lr = 0x83A4DFD4;
	sub_83A777F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4DFDC"))) PPC_WEAK_FUNC(sub_83A4DFDC);
PPC_FUNC_IMPL(__imp__sub_83A4DFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4DFE0"))) PPC_WEAK_FUNC(sub_83A4DFE0);
PPC_FUNC_IMPL(__imp__sub_83A4DFE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83A4DFE8;
	__savegprlr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r17,4348(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4348);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A4E00C;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4e3f0
	if (cr6.eq) goto loc_83A4E3F0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r6,16467
	ctx.r6.s64 = 1079181312;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r5,16449
	ctx.r5.s64 = 1078001664;
	// lis r4,16451
	ctx.r4.s64 = 1078132736;
	// lis r3,16467
	ctx.r3.s64 = 1079181312;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// ori r18,r6,17985
	ctx.r18.u64 = ctx.r6.u64 | 17985;
	// ori r14,r5,19536
	ctx.r14.u64 = ctx.r5.u64 | 19536;
	// ori r15,r4,21829
	ctx.r15.u64 = ctx.r4.u64 | 21829;
	// ori r16,r3,18006
	ctx.r16.u64 = ctx.r3.u64 | 18006;
	// addi r24,r11,-19392
	ctx.r24.s64 = ctx.r11.s64 + -19392;
	// addi r22,r10,12816
	ctx.r22.s64 = ctx.r10.s64 + 12816;
	// addi r21,r9,-19404
	ctx.r21.s64 = ctx.r9.s64 + -19404;
	// addi r20,r8,11612
	ctx.r20.s64 = ctx.r8.s64 + 11612;
	// addi r19,r7,-19416
	ctx.r19.s64 = ctx.r7.s64 + -19416;
loc_83A4E05C:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A4E070;
	sub_83A7BD70(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x83a4e374
	if (cr6.lt) goto loc_83A4E374;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A4E088;
	sub_83A7A4F0(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83a7a680
	ctx.lr = 0x83A4E098;
	sub_83A7A680(ctx, base);
	// lbz r11,159(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4e3b0
	if (cr6.eq) goto loc_83A4E3B0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x83a4e340
	if (!cr6.eq) goto loc_83A4E340;
	// lwz r10,4524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4524);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r18
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, xer);
	// stw r10,4524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4524, ctx.r10.u32);
	// bgt cr6,0x83a4e308
	if (cr6.gt) goto loc_83A4E308;
	// beq cr6,0x83a4e288
	if (cr6.eq) goto loc_83A4E288;
	// cmplw cr6,r11,r14
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, xer);
	// beq cr6,0x83a4e258
	if (cr6.eq) goto loc_83A4E258;
	// cmplw cr6,r11,r15
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, xer);
	// bne cr6,0x83a4e35c
	if (!cr6.eq) goto loc_83A4E35C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r3,4744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4744, ctx.r3.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4388);
	// stw r11,4748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4748, ctx.r11.u32);
	// bl 0x83a7a460
	ctx.lr = 0x83A4E0F8;
	sub_83A7A460(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x824ce1d8
	ctx.lr = 0x83A4E100;
	sub_824CE1D8(ctx, base);
	// lwz r11,3460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3460);
	// stw r3,4752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4752, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a4e3ac
	if (cr6.lt) goto loc_83A4E3AC;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a76f50
	ctx.lr = 0x83A4E11C;
	sub_83A76F50(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a76f50
	ctx.lr = 0x83A4E12C;
	sub_83A76F50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a76f50
	ctx.lr = 0x83A4E13C;
	sub_83A76F50(ctx, base);
	// lwz r11,4752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4752);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a4e24c
	if (!cr6.gt) goto loc_83A4E24C;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_83A4E154:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a77668
	ctx.lr = 0x83A4E168;
	sub_83A77668(ctx, base);
	// lwz r11,4756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4756);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r11,4756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4756);
	// beq cr6,0x83a4e194
	if (cr6.eq) goto loc_83A4E194;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// b 0x83a4e198
	goto loc_83A4E198;
loc_83A4E194:
	// stwx r23,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r23.u32);
loc_83A4E198:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a77188
	ctx.lr = 0x83A4E1A8;
	sub_83A77188(ctx, base);
	// lwz r11,4756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4756);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r10,3464(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3464);
	// lwz r11,4756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4756);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r10,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r10.u64);
	// bl 0x83a772d0
	ctx.lr = 0x83A4E1D4;
	sub_83A772D0(ctx, base);
	// lwz r11,4756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4756);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r3,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a77668
	ctx.lr = 0x83A4E1F4;
	sub_83A77668(ctx, base);
	// lwz r11,4756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4756);
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r6.u32);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lwz r11,4756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4756);
	// beq cr6,0x83a4e224
	if (cr6.eq) goto loc_83A4E224;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// b 0x83a4e22c
	goto loc_83A4E22C;
loc_83A4E224:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r23,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r23.u32);
loc_83A4E22C:
	// lwz r11,4756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4756);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// stw r23,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r23.u32);
	// lwz r10,4752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4752);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a4e154
	if (cr6.lt) goto loc_83A4E154;
loc_83A4E24C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a777f8
	ctx.lr = 0x83A4E254;
	sub_83A777F8(ctx, base);
	// b 0x83a4e35c
	goto loc_83A4E35C;
loc_83A4E258:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r4,4540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4540, ctx.r4.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4388);
	// stw r11,4544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4544, ctx.r11.u32);
	// bl 0x83a7a460
	ctx.lr = 0x83A4E270;
	sub_83A7A460(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824ce1d8
	ctx.lr = 0x83A4E278;
	sub_824CE1D8(ctx, base);
	// stw r3,4548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4548, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a777f8
	ctx.lr = 0x83A4E284;
	sub_83A777F8(ctx, base);
	// b 0x83a4e35c
	goto loc_83A4E35C;
loc_83A4E288:
	// lbz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x83a4e35c
	if (!cr6.lt) goto loc_83A4E35C;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x83a4e35c
	if (!cr6.eq) goto loc_83A4E35C;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,4388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4388);
	// bl 0x83a7a460
	ctx.lr = 0x83A4E2B4;
	sub_83A7A460(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83a76f50
	ctx.lr = 0x83A4E2C0;
	sub_83A76F50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a77668
	ctx.lr = 0x83A4E2D4;
	sub_83A77668(ctx, base);
	// lbz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r11,1138
	ctx.r9.s64 = ctx.r11.s64 + 1138;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lbz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// addi r5,r11,2340
	ctx.r5.s64 = ctx.r11.s64 + 2340;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r7,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u16);
	// bl 0x83a777f8
	ctx.lr = 0x83A4E304;
	sub_83A777F8(ctx, base);
	// b 0x83a4e35c
	goto loc_83A4E35C;
loc_83A4E308:
	// cmplw cr6,r11,r16
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, xer);
	// bne cr6,0x83a4e35c
	if (!cr6.eq) goto loc_83A4E35C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r4,4528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4528, ctx.r4.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4388);
	// stw r11,4532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4532, ctx.r11.u32);
	// bl 0x83a7a460
	ctx.lr = 0x83A4E328;
	sub_83A7A460(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824ce1d8
	ctx.lr = 0x83A4E330;
	sub_824CE1D8(ctx, base);
	// stw r3,4536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4536, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a777f8
	ctx.lr = 0x83A4E33C;
	sub_83A777F8(ctx, base);
	// b 0x83a4e35c
	goto loc_83A4E35C;
loc_83A4E340:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83a4e35c
	if (!cr6.eq) goto loc_83A4E35C;
	// lwz r11,4524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4524);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a4e35c
	if (!cr6.gt) goto loc_83A4E35C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_83A4E35C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A4E36C;
	sub_83A7BD90(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83a4e384
	goto loc_83A4E384;
loc_83A4E374:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A4E384;
	sub_83A7BD80(ctx, base);
loc_83A4E384:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x83a4e3cc
	if (cr6.eq) goto loc_83A4E3CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A4E398;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4e05c
	if (!cr6.eq) goto loc_83A4E05C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83A4E3AC:
	// b 0x83a4e3ac
	goto loc_83A4E3AC;
loc_83A4E3B0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A4E3C0;
	sub_83A7BD80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83A4E3CC:
	// lwz r11,4324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4324);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4e3f0
	if (!cr6.eq) goto loc_83A4E3F0;
	// lwz r11,4368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4368);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4376, ctx.r8.u32);
loc_83A4E3F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4E3FC"))) PPC_WEAK_FUNC(sub_83A4E3FC);
PPC_FUNC_IMPL(__imp__sub_83A4E3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4E400"))) PPC_WEAK_FUNC(sub_83A4E400);
PPC_FUNC_IMPL(__imp__sub_83A4E400) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4348(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4348);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A4E424;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4e4bc
	if (cr6.eq) goto loc_83A4E4BC;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_83A4E430:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A4E444;
	sub_83A7BD70(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x83a4e4ac
	if (cr6.lt) goto loc_83A4E4AC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A4E45C;
	sub_83A7A4F0(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a680
	ctx.lr = 0x83A4E46C;
	sub_83A7A680(ctx, base);
	// lbz r11,111(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83a4e484
	if (cr6.eq) goto loc_83A4E484;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x83a4e4ac
	if (!cr6.eq) goto loc_83A4E4AC;
loc_83A4E484:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A4E494;
	sub_83A7BD90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A4E4A0;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4e430
	if (!cr6.eq) goto loc_83A4E430;
	// b 0x83a4e4bc
	goto loc_83A4E4BC;
loc_83A4E4AC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A4E4BC;
	sub_83A7BD80(ctx, base);
loc_83A4E4BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4E4D4"))) PPC_WEAK_FUNC(sub_83A4E4D4);
PPC_FUNC_IMPL(__imp__sub_83A4E4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4E4D8"))) PPC_WEAK_FUNC(sub_83A4E4D8);
PPC_FUNC_IMPL(__imp__sub_83A4E4D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A4E4E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4388(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4388);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x83a7a460
	ctx.lr = 0x83A4E500;
	sub_83A7A460(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824ce1d8
	ctx.lr = 0x83A4E508;
	sub_824CE1D8(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r26,r11,-19380
	ctx.r26.s64 = ctx.r11.s64 + -19380;
	// ble cr6,0x83a4e55c
	if (!cr6.gt) goto loc_83A4E55C;
loc_83A4E520:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4E530;
	sub_83A772D0(ctx, base);
	// cmpw cr6,r25,r3
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r3.s32, xer);
	// blt cr6,0x83a4e55c
	if (cr6.lt) goto loc_83A4E55C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x83a77188
	ctx.lr = 0x83A4E54C;
	sub_83A77188(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x83a4e520
	if (cr6.lt) goto loc_83A4E520;
loc_83A4E55C:
	// std r27,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r27.u64);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4E570;
	sub_83A772D0(ctx, base);
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a777f8
	ctx.lr = 0x83A4E57C;
	sub_83A777F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4E584"))) PPC_WEAK_FUNC(sub_83A4E584);
PPC_FUNC_IMPL(__imp__sub_83A4E584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4E588"))) PPC_WEAK_FUNC(sub_83A4E588);
PPC_FUNC_IMPL(__imp__sub_83A4E588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A4E590;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4388(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4388);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83a7a460
	ctx.lr = 0x83A4E5B0;
	sub_83A7A460(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824ce1d8
	ctx.lr = 0x83A4E5B8;
	sub_824CE1D8(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r28,r11,-19368
	ctx.r28.s64 = ctx.r11.s64 + -19368;
	// ble cr6,0x83a4e60c
	if (!cr6.gt) goto loc_83A4E60C;
loc_83A4E5D0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a76f50
	ctx.lr = 0x83A4E5DC;
	sub_83A76F50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77188
	ctx.lr = 0x83A4E5EC;
	sub_83A77188(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpld cr6,r3,r27
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r27.u64, xer);
	// bge cr6,0x83a4e608
	if (!cr6.lt) goto loc_83A4E608;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// blt cr6,0x83a4e5d0
	if (cr6.lt) goto loc_83A4E5D0;
	// b 0x83a4e60c
	goto loc_83A4E60C;
loc_83A4E608:
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_83A4E60C:
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// bne cr6,0x83a4e638
	if (!cr6.eq) goto loc_83A4E638;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x83a76f50
	ctx.lr = 0x83A4E624;
	sub_83A76F50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77188
	ctx.lr = 0x83A4E634;
	sub_83A77188(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83A4E638:
	// std r29,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r29.u64);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,-19380
	ctx.r5.s64 = ctx.r11.s64 + -19380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A4E650;
	sub_83A772D0(ctx, base);
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a777f8
	ctx.lr = 0x83A4E65C;
	sub_83A777F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4E664"))) PPC_WEAK_FUNC(sub_83A4E664);
PPC_FUNC_IMPL(__imp__sub_83A4E664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4E668"))) PPC_WEAK_FUNC(sub_83A4E668);
PPC_FUNC_IMPL(__imp__sub_83A4E668) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,4332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4332);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x83a7a9b8
	sub_83A7A9B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4E680"))) PPC_WEAK_FUNC(sub_83A4E680);
PPC_FUNC_IMPL(__imp__sub_83A4E680) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// std r10,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r10.u64);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4E720"))) PPC_WEAK_FUNC(sub_83A4E720);
PPC_FUNC_IMPL(__imp__sub_83A4E720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A4E728;
	__savegprlr_29(ctx, base);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r31,r4,104
	ctx.r31.s64 = ctx.r4.s64 + 104;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// addi r30,r4,124
	ctx.r30.s64 = ctx.r4.s64 + 124;
	// lwz r10,140(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 140);
	// addi r29,r4,144
	ctx.r29.s64 = ctx.r4.s64 + 144;
	// stw r10,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r10.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// stw r8,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r8.u32);
	// lwz r8,16(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r8,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r8.u32);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// stw r10,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
	// ld r8,32(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32);
	// std r8,40(r4)
	PPC_STORE_U64(ctx.r4.u32 + 40, ctx.r8.u64);
	// ld r11,40(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 40);
	// std r11,48(r4)
	PPC_STORE_U64(ctx.r4.u32 + 48, ctx.r11.u64);
	// lwz r10,48(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// stw r10,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r10.u32);
	// lwz r8,144(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 144);
	// stw r8,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r8.u32);
	// lwz r11,140(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 140);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r8,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r8.u32);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r3,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r3.u32);
	// lwz r10,1088(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// stw r10,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r10.u32);
	// lwz r8,116(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r8,164(r4)
	PPC_STORE_U32(ctx.r4.u32 + 164, ctx.r8.u32);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r3,168(r4)
	PPC_STORE_U32(ctx.r4.u32 + 168, ctx.r3.u32);
	// lwz r11,136(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 136);
	// stw r11,172(r4)
	PPC_STORE_U32(ctx.r4.u32 + 172, ctx.r11.u32);
	// stw r9,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r9.u32);
	// stw r9,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r9.u32);
	// stw r9,124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 124, ctx.r9.u32);
	// stw r9,144(r4)
	PPC_STORE_U32(ctx.r4.u32 + 144, ctx.r9.u32);
	// lwz r10,64(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r10.u32);
	// ble cr6,0x83a4e850
	if (!cr6.gt) goto loc_83A4E850;
	// addi r10,r5,60
	ctx.r10.s64 = ctx.r5.s64 + 60;
	// addi r11,r4,92
	ctx.r11.s64 = ctx.r4.s64 + 92;
loc_83A4E810:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwzu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mullw r3,r8,r3
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// stw r3,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r8,80(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a4e810
	if (cr6.lt) goto loc_83A4E810;
loc_83A4E850:
	// lwz r11,148(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 148);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// beq cr6,0x83a4e8cc
	if (cr6.eq) goto loc_83A4E8CC;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r9.u32);
	// bne cr6,0x83a4e880
	if (!cr6.eq) goto loc_83A4E880;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x83a4e894
	goto loc_83A4E894;
loc_83A4E880:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x83a4e894
	if (cr6.eq) goto loc_83A4E894;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83A4E894:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mullw r3,r7,r5
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lwz r11,76(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// stw r11,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r11.u32);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A4E8CC:
	// stw r9,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r9.u32);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4E8D4"))) PPC_WEAK_FUNC(sub_83A4E8D4);
PPC_FUNC_IMPL(__imp__sub_83A4E8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4E8D8"))) PPC_WEAK_FUNC(sub_83A4E8D8);
PPC_FUNC_IMPL(__imp__sub_83A4E8D8) {
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
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4E900;
	sub_831CDCF0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83a4e92c
	if (cr6.lt) goto loc_83A4E92C;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
loc_83A4E92C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x83a4e958
	if (cr6.lt) goto loc_83A4E958;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r7,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r7.u32);
loc_83A4E958:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x83a4e984
	if (cr6.lt) goto loc_83A4E984;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r8,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r8.u32);
	// lwz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r7,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r7.u32);
loc_83A4E984:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4E9A0"))) PPC_WEAK_FUNC(sub_83A4E9A0);
PPC_FUNC_IMPL(__imp__sub_83A4E9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4424);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83a57cd8
	ctx.lr = 0x83A4E9C0;
	sub_83A57CD8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4E9D4"))) PPC_WEAK_FUNC(sub_83A4E9D4);
PPC_FUNC_IMPL(__imp__sub_83A4E9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4E9D8"))) PPC_WEAK_FUNC(sub_83A4E9D8);
PPC_FUNC_IMPL(__imp__sub_83A4E9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4ea00
	if (!cr6.eq) goto loc_83A4EA00;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A4EA00:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83a580b0
	ctx.lr = 0x83A4EA10;
	sub_83A580B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4EA24"))) PPC_WEAK_FUNC(sub_83A4EA24);
PPC_FUNC_IMPL(__imp__sub_83A4EA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4EA28"))) PPC_WEAK_FUNC(sub_83A4EA28);
PPC_FUNC_IMPL(__imp__sub_83A4EA28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A4EA30;
	__savegprlr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,148
	ctx.r5.s64 = 148;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4EA54;
	sub_831CDCF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a4e680
	ctx.lr = 0x83A4EA5C;
	sub_83A4E680(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4ea7c
	if (cr6.eq) goto loc_83A4EA7C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83a4ea88
	if (cr6.eq) goto loc_83A4EA88;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83a4ea88
	if (cr6.eq) goto loc_83A4EA88;
loc_83A4EA7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A4EA88:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,4424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// bl 0x83a57c48
	ctx.lr = 0x83A4EA94;
	sub_83A57C48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4eb50
	if (cr6.eq) goto loc_83A4EB50;
	// li r5,76
	ctx.r5.s64 = 76;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4EAB4;
	sub_831CDCF0(ctx, base);
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4eb38
	if (cr6.eq) goto loc_83A4EB38;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x83a57c48
	ctx.lr = 0x83A4EAD0;
	sub_83A57C48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4ea7c
	if (cr6.eq) goto loc_83A4EA7C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a4eb34
	if (!cr6.gt) goto loc_83A4EB34;
loc_83A4EAE4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// bl 0x83a57ca8
	ctx.lr = 0x83A4EAF0;
	sub_83A57CA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4ea7c
	if (cr6.eq) goto loc_83A4EA7C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// bl 0x83a580b0
	ctx.lr = 0x83A4EB04;
	sub_83A580B0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// beq cr6,0x83a4eb20
	if (cr6.eq) goto loc_83A4EB20;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83a4eae4
	if (cr6.gt) goto loc_83A4EAE4;
	// b 0x83a4eb34
	goto loc_83A4EB34;
loc_83A4EB20:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// bl 0x83a57c48
	ctx.lr = 0x83A4EB2C;
	sub_83A57C48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4ea7c
	if (cr6.eq) goto loc_83A4EA7C;
loc_83A4EB34:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
loc_83A4EB38:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4e720
	ctx.lr = 0x83A4EB50;
	sub_83A4E720(ctx, base);
loc_83A4EB50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4EB5C"))) PPC_WEAK_FUNC(sub_83A4EB5C);
PPC_FUNC_IMPL(__imp__sub_83A4EB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4EB60"))) PPC_WEAK_FUNC(sub_83A4EB60);
PPC_FUNC_IMPL(__imp__sub_83A4EB60) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4436(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4436);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x83a56bb8
	sub_83A56BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4EB80"))) PPC_WEAK_FUNC(sub_83A4EB80);
PPC_FUNC_IMPL(__imp__sub_83A4EB80) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4436(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4436);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x83a56be0
	sub_83A56BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4EBA0"))) PPC_WEAK_FUNC(sub_83A4EBA0);
PPC_FUNC_IMPL(__imp__sub_83A4EBA0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4436(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4436);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x83a56808
	sub_83A56808(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4EBB4"))) PPC_WEAK_FUNC(sub_83A4EBB4);
PPC_FUNC_IMPL(__imp__sub_83A4EBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4EBB8"))) PPC_WEAK_FUNC(sub_83A4EBB8);
PPC_FUNC_IMPL(__imp__sub_83A4EBB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4436(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4436);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x83a56760
	sub_83A56760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4EBCC"))) PPC_WEAK_FUNC(sub_83A4EBCC);
PPC_FUNC_IMPL(__imp__sub_83A4EBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4EBD0"))) PPC_WEAK_FUNC(sub_83A4EBD0);
PPC_FUNC_IMPL(__imp__sub_83A4EBD0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4436(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4436);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x83a56780
	sub_83A56780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4EBE4"))) PPC_WEAK_FUNC(sub_83A4EBE4);
PPC_FUNC_IMPL(__imp__sub_83A4EBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4EBE8"))) PPC_WEAK_FUNC(sub_83A4EBE8);
PPC_FUNC_IMPL(__imp__sub_83A4EBE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A4EBF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4364);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A4EC0C;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4ec40
	if (cr6.eq) goto loc_83A4EC40;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_83A4EC18:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,4364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7bd70
	ctx.lr = 0x83A4EC2C;
	sub_83A7BD70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// bl 0x83a7bda0
	ctx.lr = 0x83A4EC38;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4ec18
	if (!cr6.eq) goto loc_83A4EC18;
loc_83A4EC40:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// bl 0x83a7bd90
	ctx.lr = 0x83A4EC58;
	sub_83A7BD90(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,4368(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4368, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4EC68"))) PPC_WEAK_FUNC(sub_83A4EC68);
PPC_FUNC_IMPL(__imp__sub_83A4EC68) {
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
	// lwz r3,4424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4424);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4ecbc
	if (cr6.eq) goto loc_83A4ECBC;
	// bl 0x83a57be8
	ctx.lr = 0x83A4EC90;
	sub_83A57BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4ecb8
	if (cr6.eq) goto loc_83A4ECB8;
	// bl 0x83a57be8
	ctx.lr = 0x83A4ECA4;
	sub_83A57BE8(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x83a4ecb8
	if (cr6.lt) goto loc_83A4ECB8;
	// lwz r3,4472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4472);
	// bl 0x83a57be8
	ctx.lr = 0x83A4ECB4;
	sub_83A57BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83A4ECB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A4ECBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4ECD4"))) PPC_WEAK_FUNC(sub_83A4ECD4);
PPC_FUNC_IMPL(__imp__sub_83A4ECD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4ECD8"))) PPC_WEAK_FUNC(sub_83A4ECD8);
PPC_FUNC_IMPL(__imp__sub_83A4ECD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A4ECE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4ee94
	if (cr6.eq) goto loc_83A4EE94;
	// lwz r28,4348(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4348);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a4ee94
	if (cr6.eq) goto loc_83A4EE94;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a4ee94
	if (cr6.eq) goto loc_83A4EE94;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4ee94
	if (cr6.eq) goto loc_83A4EE94;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a4ee94
	if (cr6.eq) goto loc_83A4EE94;
	// lwz r10,2344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2344);
	// lhz r11,2336(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2336);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x83a4ee94
	if (cr6.eq) goto loc_83A4EE94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x83a4ee94
	if (cr6.eq) goto loc_83A4EE94;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// bl 0x83a7bda0
	ctx.lr = 0x83A4ED60;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4ee94
	if (cr6.eq) goto loc_83A4EE94;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A4ED7C;
	sub_83A7BD70(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x83a4ee84
	if (cr6.lt) goto loc_83A4EE84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A4ED94;
	sub_83A7A4F0(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a680
	ctx.lr = 0x83A4EDA4;
	sub_83A7A680(ctx, base);
	// lis r11,17234
	ctx.r11.s64 = 1129447424;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// ori r9,r11,18756
	ctx.r9.u64 = ctx.r11.u64 | 18756;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83a4ee84
	if (!cr6.eq) goto loc_83A4EE84;
	// lhz r11,2336(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2336);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x83a4d7c0
	ctx.lr = 0x83A4EDE0;
	sub_83A4D7C0(ctx, base);
	// lhz r11,2336(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2336);
	// lwz r6,128(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// li r9,1
	ctx.r9.s64 = 1;
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,1156(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1156, ctx.r6.u32);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lhz r11,2336(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2336);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,1160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1160, ctx.r5.u32);
	// lwz r8,1028(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	// lhz r11,2336(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2336);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,1164(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1164, ctx.r8.u32);
	// lwz r5,1056(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1056);
	// lhz r11,2336(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2336);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,1168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1168, ctx.r5.u32);
	// lhz r11,2336(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2336);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,1172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1172, ctx.r29.u32);
	// lhz r11,2336(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2336);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// stwx r9,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
loc_83A4EE84:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A4EE94;
	sub_83A7BD90(ctx, base);
loc_83A4EE94:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4EE9C"))) PPC_WEAK_FUNC(sub_83A4EE9C);
PPC_FUNC_IMPL(__imp__sub_83A4EE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4EEA0"))) PPC_WEAK_FUNC(sub_83A4EEA0);
PPC_FUNC_IMPL(__imp__sub_83A4EEA0) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,148
	ctx.r5.s64 = 148;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4EED0;
	sub_831CDCF0(ctx, base);
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4EEE4;
	sub_831CDCF0(ctx, base);
	// lwz r11,4488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4488);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a4efe4
	if (!cr6.gt) goto loc_83A4EFE4;
	// lwz r11,4500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4500);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4ef14
	if (!cr6.eq) goto loc_83A4EF14;
	// lwz r10,4472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a4efe4
	if (cr6.eq) goto loc_83A4EFE4;
	// lwz r10,4504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4504);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83a4efe4
	if (cr6.eq) goto loc_83A4EFE4;
loc_83A4EF14:
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4ef78
	if (cr6.eq) goto loc_83A4EF78;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,4424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// bl 0x83a57c48
	ctx.lr = 0x83A4EF2C;
	sub_83A57C48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4ef78
	if (cr6.eq) goto loc_83A4EF78;
loc_83A4EF34:
	// lwz r11,4488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4488);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a4ef74
	if (!cr6.lt) goto loc_83A4EF74;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,4424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// bl 0x83a57ca8
	ctx.lr = 0x83A4EF50;
	sub_83A57CA8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,4424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// bl 0x83a57cd8
	ctx.lr = 0x83A4EF5C;
	sub_83A57CD8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,4424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// bl 0x83a57c48
	ctx.lr = 0x83A4EF68;
	sub_83A57C48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4ef34
	if (!cr6.eq) goto loc_83A4EF34;
	// b 0x83a4ef78
	goto loc_83A4EF78;
loc_83A4EF74:
	// stw r30,4500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4500, ctx.r30.u32);
loc_83A4EF78:
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4efe4
	if (cr6.eq) goto loc_83A4EFE4;
	// lwz r11,4504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4504);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4efe4
	if (cr6.eq) goto loc_83A4EFE4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83a57c48
	ctx.lr = 0x83A4EF98;
	sub_83A57C48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4efe4
	if (cr6.eq) goto loc_83A4EFE4;
loc_83A4EFA0:
	// lwz r11,4488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4488);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a4efe0
	if (!cr6.lt) goto loc_83A4EFE0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// bl 0x83a57ca8
	ctx.lr = 0x83A4EFBC;
	sub_83A57CA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// bl 0x83a580b0
	ctx.lr = 0x83A4EFC8;
	sub_83A580B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// bl 0x83a57c48
	ctx.lr = 0x83A4EFD4;
	sub_83A57C48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4efa0
	if (!cr6.eq) goto loc_83A4EFA0;
	// b 0x83a4efe4
	goto loc_83A4EFE4;
loc_83A4EFE0:
	// stw r30,4504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4504, ctx.r30.u32);
loc_83A4EFE4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4EFFC"))) PPC_WEAK_FUNC(sub_83A4EFFC);
PPC_FUNC_IMPL(__imp__sub_83A4EFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4F000"))) PPC_WEAK_FUNC(sub_83A4F000);
PPC_FUNC_IMPL(__imp__sub_83A4F000) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83a7a680
	ctx.lr = 0x83A4F040;
	sub_83A7A680(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// srawi r6,r7,8
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// rlwimi r6,r7,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// srawi r5,r7,16
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// srawi r11,r7,24
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 24;
	// rlwimi r5,r4,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// addi r8,r3,20
	ctx.r8.s64 = ctx.r3.s64 + 20;
	// rlwimi r11,r5,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi r9,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// srawi r7,r10,16
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 16;
	// srawi r6,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 24;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// rldimi r4,r7,8,32
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// std r4,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r4.u64);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// srawi r10,r11,8
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// srawi r9,r11,16
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// srawi r7,r11,24
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 24;
	// rlwimi r9,r6,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// rldimi r5,r9,8,32
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// std r5,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r5.u64);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// srawi r11,r4,8
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// rlwimi r11,r4,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// srawi r10,r4,16
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 16;
	// srawi r9,r4,24
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 24;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// rlwimi r10,r7,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rldimi r6,r10,8,32
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// std r6,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r6.u64);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// srawi r4,r5,8
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// rlwimi r4,r5,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// srawi r3,r5,16
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 16;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r10,r5,24
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 24;
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r10,r3,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r4,4456(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4456);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// bne cr6,0x83a4f128
	if (!cr6.eq) goto loc_83A4F128;
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// b 0x83a4f15c
	goto loc_83A4F15C;
loc_83A4F128:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,4424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4424);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a57d30
	ctx.lr = 0x83A4F138;
	sub_83A57D30(ctx, base);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// divdu r7,r10,r9
	ctx.r7.u64 = PPCDivide(ctx.r10.u64, ctx.r9.u64);
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// tdllei r9,0
	// mulld r10,r7,r8
	ctx.r10.s64 = ctx.r7.s64 * ctx.r8.s64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r6,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r6.u64);
loc_83A4F15C:
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

__attribute__((alias("__imp__sub_83A4F174"))) PPC_WEAK_FUNC(sub_83A4F174);
PPC_FUNC_IMPL(__imp__sub_83A4F174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4F178"))) PPC_WEAK_FUNC(sub_83A4F178);
PPC_FUNC_IMPL(__imp__sub_83A4F178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,4324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4324);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a4f23c
	if (!cr6.eq) goto loc_83A4F23C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a4f1e8
	if (!cr6.eq) goto loc_83A4F1E8;
	// lwz r10,4884(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4884);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a4f1bc
	if (!cr6.eq) goto loc_83A4F1BC;
	// lwz r10,4888(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4888);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83a4f1bc
	if (!cr6.gt) goto loc_83A4F1BC;
	// lwz r10,4408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4408);
	// lwz r3,4352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4352);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x83a4f248
	goto loc_83A4F248;
loc_83A4F1BC:
	// lwz r10,4512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4512);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a4f1d8
	if (!cr6.eq) goto loc_83A4F1D8;
	// lwz r10,4384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4384);
	// lwz r3,4344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4344);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x83a4f248
	goto loc_83A4F248;
loc_83A4F1D8:
	// lwz r10,4516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4516);
	// lwz r3,4520(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4520);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x83a4f248
	goto loc_83A4F248;
loc_83A4F1E8:
	// lwz r10,3512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3512);
	// lfs f0,4772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4772);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,3520(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3520);
	// rlwinm r8,r10,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r3,4352(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4352);
	// lwz r10,4408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4408);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x83a4f22c
	if (!cr6.lt) goto loc_83A4F22C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83A4F22C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a4f248
	if (!cr6.gt) goto loc_83A4F248;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x83a4f248
	goto loc_83A4F248;
loc_83A4F23C:
	// lwz r3,4364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4364);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A4F248:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a4f254
	if (cr6.eq) goto loc_83A4F254;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_83A4F254:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4F264"))) PPC_WEAK_FUNC(sub_83A4F264);
PPC_FUNC_IMPL(__imp__sub_83A4F264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4F268"))) PPC_WEAK_FUNC(sub_83A4F268);
PPC_FUNC_IMPL(__imp__sub_83A4F268) {
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
	// lwz r10,4324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4324);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a4f2bc
	if (!cr6.eq) goto loc_83A4F2BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4f2b4
	if (!cr6.eq) goto loc_83A4F2B4;
	// lwz r11,4512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4512);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a4f2ac
	if (!cr6.eq) goto loc_83A4F2AC;
	// lwz r11,4344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4344);
	// b 0x83a4f2c0
	goto loc_83A4F2C0;
loc_83A4F2AC:
	// lwz r11,4520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4520);
	// b 0x83a4f2c0
	goto loc_83A4F2C0;
loc_83A4F2B4:
	// lwz r11,4352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// b 0x83a4f2c0
	goto loc_83A4F2C0;
loc_83A4F2BC:
	// lwz r11,4364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
loc_83A4F2C0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4f304
	if (cr6.eq) goto loc_83A4F304;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a4f2f8
	if (!cr6.eq) goto loc_83A4F2F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// bl 0x83a7bda0
	ctx.lr = 0x83A4F2DC;
	sub_83A7BDA0(ctx, base);
	// lwz r11,4372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4372);
	// subf r3,r3,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r3.s64;
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
loc_83A4F2F8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A4F304;
	sub_83A7BDA0(ctx, base);
loc_83A4F304:
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

__attribute__((alias("__imp__sub_83A4F318"))) PPC_WEAK_FUNC(sub_83A4F318);
PPC_FUNC_IMPL(__imp__sub_83A4F318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// stw r4,4440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4440, ctx.r4.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x83a4f32c
	if (cr6.eq) goto loc_83A4F32C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_83A4F32C:
	// stw r11,4444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4F334"))) PPC_WEAK_FUNC(sub_83A4F334);
PPC_FUNC_IMPL(__imp__sub_83A4F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4F338"))) PPC_WEAK_FUNC(sub_83A4F338);
PPC_FUNC_IMPL(__imp__sub_83A4F338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A4F340;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4F368;
	sub_831CDCF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,2356(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2356);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r5,2432(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2432);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// lwz r4,4324(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4324);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83a4f3c8
	if (!cr6.eq) goto loc_83A4F3C8;
	// lwz r11,4484(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4484);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,4476(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4476);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,4480(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4480);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// b 0x83a4f3d8
	goto loc_83A4F3D8;
loc_83A4F3C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_83A4F3D8:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,4428(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a4f400
	if (!cr6.eq) goto loc_83A4F400;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// b 0x83a4f404
	goto loc_83A4F404;
loc_83A4F400:
	// lwz r10,4432(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4432);
loc_83A4F404:
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,4920(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4920);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4F41C"))) PPC_WEAK_FUNC(sub_83A4F41C);
PPC_FUNC_IMPL(__imp__sub_83A4F41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4F420"))) PPC_WEAK_FUNC(sub_83A4F420);
PPC_FUNC_IMPL(__imp__sub_83A4F420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A4F428;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4F454;
	sub_831CDCF0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,2356(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2356);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r5,3424(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3424);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// lwz r4,4484(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4484);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lwz r3,4476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4476);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,4480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4480);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r26,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r26.u32);
	// lwz r11,4428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a4f4d8
	if (!cr6.eq) goto loc_83A4F4D8;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A4F4D8:
	// lwz r10,4432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4432);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4F4EC"))) PPC_WEAK_FUNC(sub_83A4F4EC);
PPC_FUNC_IMPL(__imp__sub_83A4F4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4F4F0"))) PPC_WEAK_FUNC(sub_83A4F4F0);
PPC_FUNC_IMPL(__imp__sub_83A4F4F0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4488, ctx.r4.u32);
	// stw r5,4492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4492, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4F4FC"))) PPC_WEAK_FUNC(sub_83A4F4FC);
PPC_FUNC_IMPL(__imp__sub_83A4F4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4F500"))) PPC_WEAK_FUNC(sub_83A4F500);
PPC_FUNC_IMPL(__imp__sub_83A4F500) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4496, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4F508"))) PPC_WEAK_FUNC(sub_83A4F508);
PPC_FUNC_IMPL(__imp__sub_83A4F508) {
	PPC_FUNC_PROLOGUE();
	// ld r10,4856(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4856);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r10,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
	// ld r9,4864(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4864);
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4F524"))) PPC_WEAK_FUNC(sub_83A4F524);
PPC_FUNC_IMPL(__imp__sub_83A4F524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4F528"))) PPC_WEAK_FUNC(sub_83A4F528);
PPC_FUNC_IMPL(__imp__sub_83A4F528) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea308
	sub_831EA308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4F538"))) PPC_WEAK_FUNC(sub_83A4F538);
PPC_FUNC_IMPL(__imp__sub_83A4F538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4f54c
	if (cr6.eq) goto loc_83A4F54C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4876, ctx.r11.u32);
loc_83A4F54C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea308
	sub_831EA308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4F558"))) PPC_WEAK_FUNC(sub_83A4F558);
PPC_FUNC_IMPL(__imp__sub_83A4F558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4876, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4F56C"))) PPC_WEAK_FUNC(sub_83A4F56C);
PPC_FUNC_IMPL(__imp__sub_83A4F56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4F570"))) PPC_WEAK_FUNC(sub_83A4F570);
PPC_FUNC_IMPL(__imp__sub_83A4F570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A4F578;
	__savegprlr_24(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-10840
	ctx.r31.s64 = ctx.r11.s64 + -10840;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// ld r11,-10840(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -10840);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x83a4f810
	if (cr6.eq) goto loc_83A4F810;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83a7a680
	ctx.lr = 0x83A4F5AC;
	sub_83A7A680(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A4F5C0;
	sub_83A7A4F0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// ble cr6,0x83a4f810
	if (!cr6.gt) goto loc_83A4F810;
	// lbz r11,105(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lhz r8,106(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -64;
	// beq cr6,0x83a4f5f0
	if (cr6.eq) goto loc_83A4F5F0;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x83a4f5f4
	goto loc_83A4F5F4;
loc_83A4F5F0:
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
loc_83A4F5F4:
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r30,r11,-64
	ctx.r30.s64 = ctx.r11.s64 + -64;
	// cmplwi cr6,r30,512
	cr6.compare<uint32_t>(ctx.r30.u32, 512, xer);
	// blt cr6,0x83a4f810
	if (cr6.lt) goto loc_83A4F810;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x831ce980
	ctx.lr = 0x83A4F624;
	sub_831CE980(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x831ce980
	ctx.lr = 0x83A4F634;
	sub_831CE980(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x831ce980
	ctx.lr = 0x83A4F644;
	sub_831CE980(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// addi r29,r10,64
	ctx.r29.s64 = ctx.r10.s64 + 64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// beq cr6,0x83a4f664
	if (cr6.eq) goto loc_83A4F664;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x83a4f668
	goto loc_83A4F668;
loc_83A4F664:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83A4F668:
	// addi r11,r30,-256
	ctx.r11.s64 = ctx.r30.s64 + -256;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// li r8,256
	ctx.r8.s64 = 256;
	// addic. r31,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r31.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x83a4f700
	if (cr0.eq) goto loc_83A4F700;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_83A4F688:
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r7,r5,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r5.s64;
loc_83A4F690:
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bge cr6,0x83a4f700
	if (!cr6.lt) goto loc_83A4F700;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// blt cr6,0x83a4f6ac
	if (cr6.lt) goto loc_83A4F6AC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x83a4f6b0
	goto loc_83A4F6B0;
loc_83A4F6AC:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_83A4F6B0:
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lbzx r26,r9,r6
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// addi r25,r1,176
	ctx.r25.s64 = ctx.r1.s64 + 176;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbzx r25,r11,r25
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// xor r26,r24,r26
	ctx.r26.u64 = ctx.r24.u64 ^ ctx.r26.u64;
	// clrlwi r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	// xor r25,r25,r26
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r26.u64;
	// stbx r26,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r26.u8);
	// clrlwi r9,r25,24
	ctx.r9.u64 = ctx.r25.u32 & 0xFF;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// blt cr6,0x83a4f690
	if (cr6.lt) goto loc_83A4F690;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// blt cr6,0x83a4f688
	if (cr6.lt) goto loc_83A4F688;
loc_83A4F700:
	// addi r9,r29,256
	ctx.r9.s64 = ctx.r29.s64 + 256;
	// li r7,8
	ctx.r7.s64 = 8;
loc_83A4F708:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,3
	ctx.r8.s64 = ctx.r9.s64 + 3;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A4F718:
	// addi r11,r1,145
	ctx.r11.s64 = ctx.r1.s64 + 145;
	// lbzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r5,1(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r31,-1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// xor r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r31.u64;
	// lbz r29,1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// xor r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r30.u64;
	// lbz r3,2(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// xor r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// stb r6,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r6.u8);
	// xor r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r29.u64;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// stb r4,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r4.u8);
	// bdnz 0x83a4f718
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A4F718;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r9,-257
	ctx.r11.s64 = ctx.r9.s64 + -257;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A4F790:
	// addi r10,r1,145
	ctx.r10.s64 = ctx.r1.s64 + 145;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lbz r4,-1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// xor r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// xor r6,r3,r10
	ctx.r6.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// xor r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// stb r3,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// xor r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 ^ ctx.r10.u64;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stbu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83a4f790
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A4F790;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x83a4f708
	if (!cr0.eq) goto loc_83A4F708;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a4f810
	if (cr6.eq) goto loc_83A4F810;
	// lwz r3,4484(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4484);
	// lwz r11,4476(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4476);
	// lwz r5,4480(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4480);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A4F810;
	sub_831CE980(ctx, base);
loc_83A4F810:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4F818"))) PPC_WEAK_FUNC(sub_83A4F818);
PPC_FUNC_IMPL(__imp__sub_83A4F818) {
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
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r31,r11,-10840
	ctx.r31.s64 = ctx.r11.s64 + -10840;
	// ld r11,-10840(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -10840);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x83a4f898
	if (cr6.eq) goto loc_83A4F898;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83a7a680
	ctx.lr = 0x83A4F84C;
	sub_83A7A680(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r10,320
	cr6.compare<uint32_t>(ctx.r10.u32, 320, xer);
	// blt cr6,0x83a4f898
	if (cr6.lt) goto loc_83A4F898;
	// li r11,320
	ctx.r11.s64 = 320;
	// ble cr6,0x83a4f898
	if (!cr6.gt) goto loc_83A4F898;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
loc_83A4F86C:
	// addi r8,r31,72
	ctx.r8.s64 = ctx.r31.s64 + 72;
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stbx r4,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x83a4f86c
	if (cr6.lt) goto loc_83A4F86C;
loc_83A4F898:
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

__attribute__((alias("__imp__sub_83A4F8AC"))) PPC_WEAK_FUNC(sub_83A4F8AC);
PPC_FUNC_IMPL(__imp__sub_83A4F8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4F8B0"))) PPC_WEAK_FUNC(sub_83A4F8B0);
PPC_FUNC_IMPL(__imp__sub_83A4F8B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A4F8B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,76(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// addi r29,r4,28
	ctx.r29.s64 = ctx.r4.s64 + 28;
	// bl 0x83a4cf70
	ctx.lr = 0x83A4F8D8;
	sub_83A4CF70(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4f91c
	if (!cr6.eq) goto loc_83A4F91C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a4f8f4
	if (cr6.eq) goto loc_83A4F8F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4876(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4876, ctx.r11.u32);
loc_83A4F8F4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,-19232
	ctx.r4.s64 = ctx.r11.s64 + -19232;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A4F910;
	sub_831EA308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A4F91C:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a4f338
	ctx.lr = 0x83A4F934;
	sub_83A4F338(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a57938
	ctx.lr = 0x83A4F948;
	sub_83A57938(ctx, base);
	// lwz r11,756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x83a4f9e4
	if (!cr6.gt) goto loc_83A4F9E4;
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// addi r5,r31,760
	ctx.r5.s64 = ctx.r31.s64 + 760;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83a4cfd8
	ctx.lr = 0x83A4F968;
	sub_83A4CFD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4f9ac
	if (!cr6.eq) goto loc_83A4F9AC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a4f984
	if (cr6.eq) goto loc_83A4F984;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4876(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4876, ctx.r11.u32);
loc_83A4F984:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,-19352
	ctx.r4.s64 = ctx.r11.s64 + -19352;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A4F9A0;
	sub_831EA308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A4F9AC:
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a4f420
	ctx.lr = 0x83A4F9C4;
	sub_83A4F420(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a57f08
	ctx.lr = 0x83A4F9D8;
	sub_83A57F08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A4F9E4:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4F9F4"))) PPC_WEAK_FUNC(sub_83A4F9F4);
PPC_FUNC_IMPL(__imp__sub_83A4F9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4F9F8"))) PPC_WEAK_FUNC(sub_83A4F9F8);
PPC_FUNC_IMPL(__imp__sub_83A4F9F8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4872, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4FA00"))) PPC_WEAK_FUNC(sub_83A4FA00);
PPC_FUNC_IMPL(__imp__sub_83A4FA00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4fa60
	if (cr6.eq) goto loc_83A4FA60;
	// lwz r10,3528(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3528);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x83a4fa20
	if (!cr6.lt) goto loc_83A4FA20;
loc_83A4FA18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A4FA20:
	// lwz r11,3580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3580);
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a4fa18
	if (!cr6.eq) goto loc_83A4FA18;
	// lwz r11,3592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3592);
	// lwz r10,88(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a4fa18
	if (cr6.lt) goto loc_83A4FA18;
	// lwz r11,3532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3532);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a4fa18
	if (cr6.lt) goto loc_83A4FA18;
	// lwz r11,3536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3536);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a4fa18
	if (cr6.lt) goto loc_83A4FA18;
loc_83A4FA60:
	// lwz r11,756(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 756);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4fab8
	if (cr6.eq) goto loc_83A4FAB8;
	// lwz r10,4260(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4260);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a4fa18
	if (cr6.lt) goto loc_83A4FA18;
	// lwz r11,4300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4300);
	// lwz r10,796(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 796);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a4fa18
	if (!cr6.eq) goto loc_83A4FA18;
	// lwz r11,4308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4308);
	// lwz r10,804(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 804);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a4fa18
	if (cr6.lt) goto loc_83A4FA18;
	// lwz r11,4264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4264);
	// lwz r10,760(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 760);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a4fa18
	if (cr6.lt) goto loc_83A4FA18;
	// lwz r11,4268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4268);
	// lwz r10,764(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 764);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a4fa18
	if (cr6.lt) goto loc_83A4FA18;
loc_83A4FAB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4FAC0"))) PPC_WEAK_FUNC(sub_83A4FAC0);
PPC_FUNC_IMPL(__imp__sub_83A4FAC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,3496(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3496);
	// b 0x83a4d040
	sub_83A4D040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4FAD0"))) PPC_WEAK_FUNC(sub_83A4FAD0);
PPC_FUNC_IMPL(__imp__sub_83A4FAD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4FAD4"))) PPC_WEAK_FUNC(sub_83A4FAD4);
PPC_FUNC_IMPL(__imp__sub_83A4FAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4FAD8"))) PPC_WEAK_FUNC(sub_83A4FAD8);
PPC_FUNC_IMPL(__imp__sub_83A4FAD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A4FAE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// addi r29,r11,-10976
	ctx.r29.s64 = ctx.r11.s64 + -10976;
	// addi r8,r9,-19896
	ctx.r8.s64 = ctx.r9.s64 + -19896;
	// lwz r11,20256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20256);
	// addi r28,r10,20256
	ctx.r28.s64 = ctx.r10.s64 + 20256;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// bne cr6,0x83a4fb94
	if (!cr6.eq) goto loc_83A4FB94;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4FB1C;
	sub_831CDCF0(ctx, base);
	// bl 0x83a7a738
	ctx.lr = 0x83A4FB20;
	sub_83A7A738(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83A4FB24;
	sub_83102DB0(ctx, base);
	// lhz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 128);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4fb5c
	if (cr6.eq) goto loc_83A4FB5C;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
loc_83A4FB3C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83a578e8
	ctx.lr = 0x83A4FB44;
	sub_83A578E8(ctx, base);
	// lwzu r3,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x83a57ee8
	ctx.lr = 0x83A4FB4C;
	sub_83A57EE8(ctx, base);
	// lhz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 128);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a4fb3c
	if (cr6.lt) goto loc_83A4FB3C;
loc_83A4FB5C:
	// bl 0x83a55878
	ctx.lr = 0x83A4FB60;
	sub_83A55878(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x83a7a730
	ctx.lr = 0x83A4FB6C;
	sub_83A7A730(ctx, base);
	// stw r3,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4fb90
	if (!cr6.eq) goto loc_83A4FB90;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-19104
	ctx.r4.s64 = ctx.r11.s64 + -19104;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A4FB90;
	sub_831EA308(ctx, base);
loc_83A4FB90:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_83A4FB94:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4FBA4"))) PPC_WEAK_FUNC(sub_83A4FBA4);
PPC_FUNC_IMPL(__imp__sub_83A4FBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4FBA8"))) PPC_WEAK_FUNC(sub_83A4FBA8);
PPC_FUNC_IMPL(__imp__sub_83A4FBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A4FBB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,820
	ctx.r5.s64 = 820;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4FBCC;
	sub_831CDCF0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a50094
	if (cr6.eq) goto loc_83A50094;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a50094
	if (cr6.eq) goto loc_83A50094;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x83a50094
	if (cr6.eq) goto loc_83A50094;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83a50094
	if (cr6.eq) goto loc_83A50094;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x83a50094
	if (cr6.eq) goto loc_83A50094;
	// lwz r11,2340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a4fc0c
	if (!cr6.eq) goto loc_83A4FC0C;
	// addi r4,r30,2352
	ctx.r4.s64 = ctx.r30.s64 + 2352;
	// b 0x83a4fc28
	goto loc_83A4FC28;
loc_83A4FC0C:
	// lwz r11,2344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2344);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
loc_83A4FC28:
	// lfs f0,3476(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3476);
	ctx.f0.f64 = double(temp.f32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r6,r31,28
	ctx.r6.s64 = ctx.r31.s64 + 28;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r8,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r8.u32);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a4fd20
	if (cr6.eq) goto loc_83A4FD20;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r7.u32);
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a4fcbc
	if (cr6.eq) goto loc_83A4FCBC;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// twllei r10,0
	// mulli r7,r8,1000
	ctx.r7.s64 = ctx.r8.s64 * 1000;
	// divwu r10,r7,r10
	ctx.r10.u32 = PPCDivide(ctx.r7.u32, ctx.r10.u32);
	// b 0x83a4fcc0
	goto loc_83A4FCC0;
loc_83A4FCBC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83A4FCC0:
	// stw r10,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r8,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r8.u32);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r7,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r7.u32);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r5,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r5.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r10.u32);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r8,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r8.u32);
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r7,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r7.u32);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r5,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r5.u32);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r10.u32);
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r8,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r8.u32);
	// lwz r7,68(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r7,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r7.u32);
	// b 0x83a4fd54
	goto loc_83A4FD54;
loc_83A4FD20:
	// stw r29,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r29.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// stw r9,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// stw r9,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r9.u32);
	// stw r9,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r9.u32);
	// stw r9,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r9,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r9.u32);
	// stw r9,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r9.u32);
	// stw r9,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r9.u32);
	// stw r9,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r9.u32);
	// stw r9,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r9.u32);
loc_83A4FD54:
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a4fd68
	if (!cr6.gt) goto loc_83A4FD68;
	// stw r29,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r29.u32);
	// b 0x83a4fd6c
	goto loc_83A4FD6C;
loc_83A4FD68:
	// stw r9,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r9.u32);
loc_83A4FD6C:
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// addi r10,r4,104
	ctx.r10.s64 = ctx.r4.s64 + 104;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83A4FD84:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83a4fdc8
	if (cr6.eq) goto loc_83A4FDC8;
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,3484(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3484);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// bne cr6,0x83a4fddc
	if (!cr6.eq) goto loc_83A4FDDC;
	// addi r7,r5,-2
	ctx.r7.s64 = ctx.r5.s64 + -2;
	// b 0x83a4fddc
	goto loc_83A4FDDC;
loc_83A4FDC8:
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_83A4FDDC:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r8,4
	cr6.compare<uint32_t>(ctx.r8.u32, 4, xer);
	// bne cr6,0x83a4fdf8
	if (!cr6.eq) goto loc_83A4FDF8;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83a4fdf8
	if (!cr6.eq) goto loc_83A4FDF8;
	// stw r9,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r9.u32);
loc_83A4FDF8:
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83a4fe3c
	if (cr6.eq) goto loc_83A4FE3C;
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r8,3484(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3484);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// bne cr6,0x83a4fe50
	if (!cr6.eq) goto loc_83A4FE50;
	// addi r7,r5,-1
	ctx.r7.s64 = ctx.r5.s64 + -1;
	// b 0x83a4fe50
	goto loc_83A4FE50;
loc_83A4FE3C:
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
loc_83A4FE50:
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r8,4
	cr6.compare<uint32_t>(ctx.r8.u32, 4, xer);
	// bne cr6,0x83a4fe6c
	if (!cr6.eq) goto loc_83A4FE6C;
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83a4fe6c
	if (!cr6.eq) goto loc_83A4FE6C;
	// stw r9,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r9.u32);
loc_83A4FE6C:
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83a4feb0
	if (cr6.eq) goto loc_83A4FEB0;
	// lwz r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// lwz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r8,3484(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3484);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// bne cr6,0x83a4fec4
	if (!cr6.eq) goto loc_83A4FEC4;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// b 0x83a4fec4
	goto loc_83A4FEC4;
loc_83A4FEB0:
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
loc_83A4FEC4:
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r8,4
	cr6.compare<uint32_t>(ctx.r8.u32, 4, xer);
	// bne cr6,0x83a4fee0
	if (!cr6.eq) goto loc_83A4FEE0;
	// lwz r8,68(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83a4fee0
	if (!cr6.eq) goto loc_83A4FEE0;
	// stw r9,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r9.u32);
loc_83A4FEE0:
	// lwz r8,84(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83a4ff24
	if (cr6.eq) goto loc_83A4FF24;
	// lwz r8,80(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lwz r8,84(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// stw r8,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
	// lwz r8,88(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// lwz r8,3484(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3484);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// lwz r8,92(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r8,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
	// bne cr6,0x83a4ff38
	if (!cr6.eq) goto loc_83A4FF38;
	// addi r7,r5,1
	ctx.r7.s64 = ctx.r5.s64 + 1;
	// b 0x83a4ff38
	goto loc_83A4FF38;
loc_83A4FF24:
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
loc_83A4FF38:
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r8,4
	cr6.compare<uint32_t>(ctx.r8.u32, 4, xer);
	// bne cr6,0x83a4ff54
	if (!cr6.eq) goto loc_83A4FF54;
	// lwz r8,96(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83a4ff54
	if (!cr6.eq) goto loc_83A4FF54;
	// stw r9,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r9.u32);
loc_83A4FF54:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bdnz 0x83a4fd84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A4FD84;
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// ble cr6,0x83a4ffb8
	if (!cr6.gt) goto loc_83A4FFB8;
	// lwz r11,3488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3488);
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(ctx.r11.s32, 100, xer);
	// bne cr6,0x83a4ff90
	if (!cr6.eq) goto loc_83A4FF90;
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// b 0x83a4ffb8
	goto loc_83A4FFB8;
loc_83A4FF90:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83a4ffb8
	if (cr6.lt) goto loc_83A4FFB8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bge cr6,0x83a4ffb8
	if (!cr6.lt) goto loc_83A4FFB8;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x83a4ffb8
	if (!cr6.gt) goto loc_83A4FFB8;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_83A4FFB8:
	// lwz r11,996(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 996);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a4ffe0
	if (!cr6.gt) goto loc_83A4FFE0;
	// lwz r11,1000(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1000);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4ffe0
	if (!cr6.eq) goto loc_83A4FFE0;
	// lwz r11,1004(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1004);
	// stw r11,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r11.u32);
	// lwz r10,1016(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1016);
	// stw r10,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r10.u32);
loc_83A4FFE0:
	// stw r3,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r3.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83a50008
	if (!cr6.eq) goto loc_83A50008;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r11,-10972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10972);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a50008
	if (!cr6.eq) goto loc_83A50008;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_83A50008:
	// lwz r10,1024(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1024);
	// addi r11,r4,1028
	ctx.r11.s64 = ctx.r4.s64 + 1028;
	// stw r10,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r10.u32);
	// lwz r8,1028(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1028);
	// stw r8,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r8.u32);
	// lwz r7,1032(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1032);
	// stw r7,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r7.u32);
	// lwz r6,1036(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1036);
	// stw r6,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r6.u32);
	// lwz r5,1040(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1040);
	// stw r5,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r5.u32);
	// lwz r10,1048(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1048);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a50050
	if (cr6.eq) goto loc_83A50050;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// twllei r10,0
	// mulli r8,r9,1000
	ctx.r8.s64 = ctx.r9.s64 * 1000;
	// divwu r9,r8,r10
	ctx.r9.u32 = PPCDivide(ctx.r8.u32, ctx.r10.u32);
loc_83A50050:
	// stw r9,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r9.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r10.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r9.u32);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r8,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r8.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r7,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r7.u32);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r6,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r6.u32);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r5,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r5.u32);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r4,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r4.u32);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r3,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r3.u32);
loc_83A50094:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5009C"))) PPC_WEAK_FUNC(sub_83A5009C);
PPC_FUNC_IMPL(__imp__sub_83A5009C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A500A0"))) PPC_WEAK_FUNC(sub_83A500A0);
PPC_FUNC_IMPL(__imp__sub_83A500A0) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A500BC;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d3e0
	ctx.lr = 0x83A500C4;
	sub_83A4D3E0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A500CC;
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

__attribute__((alias("__imp__sub_83A500E0"))) PPC_WEAK_FUNC(sub_83A500E0);
PPC_FUNC_IMPL(__imp__sub_83A500E0) {
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
	// stw r4,4448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4448, ctx.r4.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4436(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4436);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,3608
	ctx.r6.s64 = ctx.r11.s64 + 3608;
	// bl 0x83a55d90
	ctx.lr = 0x83A5012C;
	sub_83A55D90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a50160
	if (cr6.eq) goto loc_83A50160;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// ld r11,-10840(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -10840);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x83a5015c
	if (cr6.eq) goto loc_83A5015C;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r3,4436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4436);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-2024
	ctx.r4.s64 = ctx.r11.s64 + -2024;
	// bl 0x83a55848
	ctx.lr = 0x83A5015C;
	sub_83A55848(ctx, base);
loc_83A5015C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A50160:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A50178"))) PPC_WEAK_FUNC(sub_83A50178);
PPC_FUNC_IMPL(__imp__sub_83A50178) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,20256
	ctx.r30.s64 = ctx.r11.s64 + 20256;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x83a75cd8
	ctx.lr = 0x83A501A0;
	sub_83A75CD8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a501c8
	if (cr6.eq) goto loc_83A501C8;
	// lwz r3,4424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// bl 0x83a57b40
	ctx.lr = 0x83A501B0;
	sub_83A57B40(ctx, base);
	// lwz r11,4472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a501c8
	if (cr6.eq) goto loc_83A501C8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a57b40
	ctx.lr = 0x83A501C8;
	sub_83A57B40(ctx, base);
loc_83A501C8:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x83a75d58
	ctx.lr = 0x83A501D0;
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

__attribute__((alias("__imp__sub_83A501EC"))) PPC_WEAK_FUNC(sub_83A501EC);
PPC_FUNC_IMPL(__imp__sub_83A501EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A501F0"))) PPC_WEAK_FUNC(sub_83A501F0);
PPC_FUNC_IMPL(__imp__sub_83A501F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A501F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a50258
	if (cr6.eq) goto loc_83A50258;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r7,r11,-18928
	ctx.r7.s64 = ctx.r11.s64 + -18928;
	// bl 0x83a7bfb8
	ctx.lr = 0x83A50220;
	sub_83A7BFB8(ctx, base);
	// stw r3,4520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4520, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a502f0
	if (!cr6.eq) goto loc_83A502F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-18964
	ctx.r4.s64 = ctx.r10.s64 + -18964;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5024C;
	sub_831EA308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A50258:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// bl 0x83a7b6e0
	ctx.lr = 0x83A5028C;
	sub_83A7B6E0(ctx, base);
	// lwz r9,4784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4784);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4792);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A502A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a502d8
	if (!cr6.eq) goto loc_83A502D8;
	// stw r28,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r28.u32);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-19032
	ctx.r4.s64 = ctx.r11.s64 + -19032;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A502CC;
	sub_831EA308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A502D8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7b710
	ctx.lr = 0x83A502E8;
	sub_83A7B710(ctx, base);
	// stw r3,4520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4520, ctx.r3.u32);
	// stw r30,4796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4796, ctx.r30.u32);
loc_83A502F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A502FC"))) PPC_WEAK_FUNC(sub_83A502FC);
PPC_FUNC_IMPL(__imp__sub_83A502FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A50300"))) PPC_WEAK_FUNC(sub_83A50300);
PPC_FUNC_IMPL(__imp__sub_83A50300) {
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
	// lwz r11,3440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3440);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x83a5032c
	if (cr6.gt) goto loc_83A5032C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4756, ctx.r11.u32);
	// b 0x83a50418
	goto loc_83A50418;
loc_83A5032C:
	// lwz r11,3460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3460);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x83a5035c
	if (cr6.eq) goto loc_83A5035C;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// lwz r3,4400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4400);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r9,-18788
	ctx.r5.s64 = ctx.r9.s64 + -18788;
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83a78940
	ctx.lr = 0x83A50358;
	sub_83A78940(ctx, base);
	// b 0x83a503b8
	goto loc_83A503B8;
loc_83A5035C:
	// lwz r9,4784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4784);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,4792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4792);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A50374;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a503b4
	if (!cr6.eq) goto loc_83A503B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-18856
	ctx.r4.s64 = ctx.r10.s64 + -18856;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5039C;
	sub_831EA308(ctx, base);
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
loc_83A503B4:
	// stw r3,4800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4800, ctx.r3.u32);
loc_83A503B8:
	// stw r3,4756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4756, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a50400
	if (!cr6.eq) goto loc_83A50400;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-18908
	ctx.r4.s64 = ctx.r10.s64 + -18908;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A503E8;
	sub_831EA308(ctx, base);
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
loc_83A50400:
	// lwz r11,3460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3460);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x831cdcf0
	ctx.lr = 0x83A50418;
	sub_831CDCF0(ctx, base);
loc_83A50418:
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

__attribute__((alias("__imp__sub_83A50430"))) PPC_WEAK_FUNC(sub_83A50430);
PPC_FUNC_IMPL(__imp__sub_83A50430) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A50450;
	sub_83A75CD8(ctx, base);
	// lwz r3,4520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4520);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a50484
	if (cr6.eq) goto loc_83A50484;
	// bl 0x83a7bd40
	ctx.lr = 0x83A50464;
	sub_83A7BD40(ctx, base);
	// lwz r4,4796(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4796);
	// stw r30,4520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4520, ctx.r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a50484
	if (cr6.eq) goto loc_83A50484;
	// lwz r11,4788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4788);
	// lwz r3,4792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4792);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A50484;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A50484:
	// lwz r4,4756(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4756);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a504c8
	if (cr6.eq) goto loc_83A504C8;
	// lwz r11,4800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4800);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a504b4
	if (cr6.eq) goto loc_83A504B4;
	// lwz r10,4788(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4788);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,4792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4792);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A504B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a504c4
	goto loc_83A504C4;
loc_83A504B4:
	// lwz r3,4400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4400);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a504c4
	if (cr6.eq) goto loc_83A504C4;
	// bl 0x83a78a48
	ctx.lr = 0x83A504C4;
	sub_83A78A48(ctx, base);
loc_83A504C4:
	// stw r30,4756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4756, ctx.r30.u32);
loc_83A504C8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A504D0;
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

__attribute__((alias("__imp__sub_83A504EC"))) PPC_WEAK_FUNC(sub_83A504EC);
PPC_FUNC_IMPL(__imp__sub_83A504EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A504F0"))) PPC_WEAK_FUNC(sub_83A504F0);
PPC_FUNC_IMPL(__imp__sub_83A504F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A504F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a50708
	if (!cr6.eq) goto loc_83A50708;
	// lwz r11,1132(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a50708
	if (!cr6.eq) goto loc_83A50708;
	// lwz r11,1136(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a50708
	if (!cr6.eq) goto loc_83A50708;
	// lwz r11,1140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a50708
	if (!cr6.eq) goto loc_83A50708;
	// lwz r9,3604(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3604);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x83a5054c
	if (cr6.lt) goto loc_83A5054C;
	// lwz r11,1124(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a50708
	if (!cr6.eq) goto loc_83A50708;
loc_83A5054C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x83a505e4
	if (cr6.lt) goto loc_83A505E4;
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,2452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2452);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83a505e4
	if (!cr6.gt) goto loc_83A505E4;
	// lhz r11,2336(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2336);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ld r10,1176(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1176);
	// std r10,1144(r30)
	PPC_STORE_U64(ctx.r30.u32 + 1144, ctx.r10.u64);
	// bge cr6,0x83a505c8
	if (!cr6.lt) goto loc_83A505C8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-18680
	ctx.r4.s64 = ctx.r11.s64 + -18680;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A505C0;
	sub_831EA308(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A505C8:
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r7,1144(r30)
	PPC_STORE_U64(ctx.r30.u32 + 1144, ctx.r7.u64);
	// b 0x83a505e8
	goto loc_83A505E8;
loc_83A505E4:
	// std r29,1144(r30)
	PPC_STORE_U64(ctx.r30.u32 + 1144, ctx.r29.u64);
loc_83A505E8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r9,r31,2352
	ctx.r9.s64 = ctx.r31.s64 + 2352;
	// lwz r10,2380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a506a4
	if (!cr6.eq) goto loc_83A506A4;
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a506a4
	if (!cr6.eq) goto loc_83A506A4;
	// lwz r11,4872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4872);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a50638
	if (!cr6.eq) goto loc_83A50638;
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a506a4
	if (!cr6.eq) goto loc_83A506A4;
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a506a4
	if (!cr6.eq) goto loc_83A506A4;
loc_83A50638:
	// lwz r11,3604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3604);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83a506c8
	if (cr6.lt) goto loc_83A506C8;
	// lwz r7,96(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a506a4
	if (!cr6.eq) goto loc_83A506A4;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a506c8
	if (cr6.eq) goto loc_83A506C8;
	// addi r10,r9,104
	ctx.r10.s64 = ctx.r9.s64 + 104;
	// addi r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 + 100;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
loc_83A5066C:
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x83a506a4
	if (!cr6.eq) goto loc_83A506A4;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x83a506a4
	if (!cr6.eq) goto loc_83A506A4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x83a5066c
	if (cr6.lt) goto loc_83A5066C;
	// b 0x83a506c8
	goto loc_83A506C8;
loc_83A506A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-18760
	ctx.r4.s64 = ctx.r10.s64 + -18760;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A506C8;
	sub_831EA308(ctx, base);
loc_83A506C8:
	// stw r29,1120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1120, ctx.r29.u32);
	// lwz r11,2340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2340);
	// lhz r10,2336(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2336);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// srawi r7,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// stw r8,2340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2340, ctx.r8.u32);
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r5,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r5.s64;
	// sth r4,2336(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2336, ctx.r4.u16);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4804, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,4808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4808, ctx.r10.u32);
loc_83A50708:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A50710"))) PPC_WEAK_FUNC(sub_83A50710);
PPC_FUNC_IMPL(__imp__sub_83A50710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A50718;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2336(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2336);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rotlwi r9,r11,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// lwz r9,1152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83a50758
	if (!cr6.eq) goto loc_83A50758;
loc_83A5074C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A50758:
	// lwz r11,1124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5074c
	if (cr6.eq) goto loc_83A5074C;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x83a507b8
	if (cr6.lt) goto loc_83A507B8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x83a7a680
	ctx.lr = 0x83A5077C;
	sub_83A7A680(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,100
	ctx.r5.s64 = ctx.r11.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a4dd28
	ctx.lr = 0x83A507A0;
	sub_83A4DD28(ctx, base);
	// lwz r11,1124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1124);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r10.u32);
	// bl 0x83a504f0
	ctx.lr = 0x83A507B8;
	sub_83A504F0(ctx, base);
loc_83A507B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A507C4"))) PPC_WEAK_FUNC(sub_83A507C4);
PPC_FUNC_IMPL(__imp__sub_83A507C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A507C8"))) PPC_WEAK_FUNC(sub_83A507C8);
PPC_FUNC_IMPL(__imp__sub_83A507C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A507D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2336(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2336);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a50810
	if (!cr6.eq) goto loc_83A50810;
loc_83A50804:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A50810:
	// lwz r11,1128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a50804
	if (cr6.eq) goto loc_83A50804;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x83a50890
	if (cr6.lt) goto loc_83A50890;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x83a7a680
	ctx.lr = 0x83A50834;
	sub_83A7A680(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a4da48
	ctx.lr = 0x83A50850;
	sub_83A4DA48(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a50878
	if (cr6.eq) goto loc_83A50878;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// lwz r8,64(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// stw r8,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r8.u32);
loc_83A50878:
	// lwz r11,1128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1128);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r11.u32);
	// bl 0x83a504f0
	ctx.lr = 0x83A50890;
	sub_83A504F0(ctx, base);
loc_83A50890:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5089C"))) PPC_WEAK_FUNC(sub_83A5089C);
PPC_FUNC_IMPL(__imp__sub_83A5089C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A508A0"))) PPC_WEAK_FUNC(sub_83A508A0);
PPC_FUNC_IMPL(__imp__sub_83A508A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A508A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,4388(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4388);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bl 0x83a7a460
	ctx.lr = 0x83A508C8;
	sub_83A7A460(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19528
	ctx.r5.s64 = ctx.r11.s64 + -19528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A508DC;
	sub_83A772D0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,-19540
	ctx.r5.s64 = ctx.r10.s64 + -19540;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A508F4;
	sub_83A772D0(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r9,-19556
	ctx.r5.s64 = ctx.r9.s64 + -19556;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A50910;
	sub_83A772D0(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,26572
	ctx.r5.s64 = ctx.r8.s64 + 26572;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A50928;
	sub_83A772D0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r7,26524
	ctx.r5.s64 = ctx.r7.s64 + 26524;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a772d0
	ctx.lr = 0x83A50940;
	sub_83A772D0(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r6,-32205
	ctx.r6.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r6,-19564
	ctx.r5.s64 = ctx.r6.s64 + -19564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A50958;
	sub_83A772D0(ctx, base);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// ble cr6,0x83a50968
	if (!cr6.gt) goto loc_83A50968;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
loc_83A50968:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-19576
	ctx.r29.s64 = ctx.r11.s64 + -19576;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a76f50
	ctx.lr = 0x83A5097C;
	sub_83A76F50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83a5099c
	if (!cr6.gt) goto loc_83A5099C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A50994;
	sub_83A772D0(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// b 0x83a509a4
	goto loc_83A509A4;
loc_83A5099C:
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
loc_83A509A4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19724
	ctx.r5.s64 = ctx.r11.s64 + -19724;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A509B8;
	sub_83A772D0(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// bgt cr6,0x83a509ec
	if (cr6.gt) goto loc_83A509EC;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a50a08
	if (cr6.eq) goto loc_83A50A08;
	// bdz 0x83a50a08
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A50A08;
	// bdz 0x83a50a08
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A50A08;
	// bdz 0x83a50a08
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A50A08;
	// bdz 0x83a50a08
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A50A08;
	// bdz 0x83a50a08
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A50A08;
	// bdz 0x83a50a08
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A50A08;
	// b 0x83a50a08
	goto loc_83A50A08;
loc_83A509EC:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r4,r11,-18612
	ctx.r4.s64 = ctx.r11.s64 + -18612;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A50A08;
	sub_831EA308(ctx, base);
loc_83A50A08:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19516
	ctx.r5.s64 = ctx.r11.s64 + -19516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A50A1C;
	sub_83A772D0(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,-19640
	ctx.r5.s64 = ctx.r10.s64 + -19640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A50A34;
	sub_83A772D0(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r9,-19656
	ctx.r5.s64 = ctx.r9.s64 + -19656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A50A4C;
	sub_83A772D0(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r8,-19668
	ctx.r5.s64 = ctx.r8.s64 + -19668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A50A64;
	sub_83A772D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// bne cr6,0x83a50a78
	if (!cr6.eq) goto loc_83A50A78;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_83A50A78:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19680
	ctx.r5.s64 = ctx.r11.s64 + -19680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A50A8C;
	sub_83A772D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// bne cr6,0x83a50aa0
	if (!cr6.eq) goto loc_83A50AA0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_83A50AA0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19692
	ctx.r5.s64 = ctx.r11.s64 + -19692;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A50AB4;
	sub_83A772D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83a50ac4
	if (!cr6.eq) goto loc_83A50AC4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A50AC4:
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-19712
	ctx.r29.s64 = ctx.r11.s64 + -19712;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a76f50
	ctx.lr = 0x83A50ADC;
	sub_83A76F50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83a50b08
	if (!cr6.gt) goto loc_83A50B08;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A50AF4;
	sub_83A772D0(ctx, base);
	// stw r3,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a777f8
	ctx.lr = 0x83A50B00;
	sub_83A777F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A50B08:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// bl 0x83a777f8
	ctx.lr = 0x83A50B18;
	sub_83A777F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A50B20"))) PPC_WEAK_FUNC(sub_83A50B20);
PPC_FUNC_IMPL(__imp__sub_83A50B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83A50B28;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4348(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4348);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,2352
	ctx.r30.s64 = ctx.r31.s64 + 2352;
	// bl 0x83a7bda0
	ctx.lr = 0x83A50B4C;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a50dcc
	if (cr6.eq) goto loc_83A50DCC;
	// lis r11,17234
	ctx.r11.s64 = 1129447424;
	// lis r10,16467
	ctx.r10.s64 = 1079181312;
	// lis r9,16449
	ctx.r9.s64 = 1078001664;
	// lis r8,16451
	ctx.r8.s64 = 1078132736;
	// lis r7,16467
	ctx.r7.s64 = 1079181312;
	// li r20,-1
	ctx.r20.s64 = -1;
	// ori r26,r11,18756
	ctx.r26.u64 = ctx.r11.u64 | 18756;
	// li r24,1
	ctx.r24.s64 = 1;
	// ori r27,r10,16980
	ctx.r27.u64 = ctx.r10.u64 | 16980;
	// ori r21,r9,19536
	ctx.r21.u64 = ctx.r9.u64 | 19536;
	// ori r22,r8,21829
	ctx.r22.u64 = ctx.r8.u64 | 21829;
	// ori r23,r7,17985
	ctx.r23.u64 = ctx.r7.u64 | 17985;
loc_83A50B84:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A50B98;
	sub_83A7BD70(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x83a50d4c
	if (cr6.lt) goto loc_83A50D4C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A50BB0;
	sub_83A7A4F0(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a680
	ctx.lr = 0x83A50BC0;
	sub_83A7A680(ctx, base);
	// lwz r11,3472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3472);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a50bf4
	if (!cr6.eq) goto loc_83A50BF4;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r5,r26
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r26.u32, xer);
	// bne cr6,0x83a50d84
	if (!cr6.eq) goto loc_83A50D84;
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d7c0
	ctx.lr = 0x83A50BF0;
	sub_83A4D7C0(ctx, base);
	// b 0x83a50d24
	goto loc_83A50D24;
loc_83A50BF4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x83a50c14
	if (!cr6.eq) goto loc_83A50C14;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d7c0
	ctx.lr = 0x83A50C10;
	sub_83A4D7C0(ctx, base);
	// b 0x83a50d24
	goto loc_83A50D24;
loc_83A50C14:
	// lbz r10,111(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83a50d08
	if (!cr6.eq) goto loc_83A50D08;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bgt cr6,0x83a50c98
	if (cr6.gt) goto loc_83A50C98;
	// beq cr6,0x83a50c80
	if (cr6.eq) goto loc_83A50C80;
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// beq cr6,0x83a50c54
	if (cr6.eq) goto loc_83A50C54;
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// bne cr6,0x83a50d24
	if (!cr6.eq) goto loc_83A50D24;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r30,1096
	ctx.r5.s64 = ctx.r30.s64 + 1096;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4dee8
	ctx.lr = 0x83A50C50;
	sub_83A4DEE8(ctx, base);
	// b 0x83a50d24
	goto loc_83A50D24;
loc_83A50C54:
	// lbz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x83a50d24
	if (!cr6.lt) goto loc_83A50D24;
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,1028
	ctx.r5.s64 = ctx.r11.s64 + 1028;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a508a0
	ctx.lr = 0x83A50C7C;
	sub_83A508A0(ctx, base);
	// b 0x83a50d24
	goto loc_83A50D24;
loc_83A50C80:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r30,1000
	ctx.r5.s64 = ctx.r30.s64 + 1000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4de28
	ctx.lr = 0x83A50C94;
	sub_83A4DE28(ctx, base);
	// b 0x83a50d24
	goto loc_83A50D24;
loc_83A50C98:
	// subf. r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a50cdc
	if (cr0.eq) goto loc_83A50CDC;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, xer);
	// bne cr6,0x83a50d24
	if (!cr6.eq) goto loc_83A50D24;
	// lbz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x83a50d24
	if (!cr6.lt) goto loc_83A50D24;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// bl 0x83a4da48
	ctx.lr = 0x83A50CD8;
	sub_83A4DA48(ctx, base);
	// b 0x83a50d24
	goto loc_83A50D24;
loc_83A50CDC:
	// lbz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x83a50d24
	if (!cr6.lt) goto loc_83A50D24;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,100
	ctx.r5.s64 = ctx.r11.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4dd28
	ctx.lr = 0x83A50D04;
	sub_83A4DD28(ctx, base);
	// b 0x83a50d24
	goto loc_83A50D24;
loc_83A50D08:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x83a50d24
	if (!cr6.eq) goto loc_83A50D24;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// stw r11,4804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4804, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,4808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4808, ctx.r10.u32);
loc_83A50D24:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A50D34;
	sub_83A7BD90(ctx, base);
	// lwz r11,3472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3472);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,3472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3472, ctx.r11.u32);
	// b 0x83a50d5c
	goto loc_83A50D5C;
loc_83A50D4C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A50D5C;
	sub_83A7BD80(ctx, base);
loc_83A50D5C:
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(ctx.r25.s32, 1, xer);
	// beq cr6,0x83a50dbc
	if (cr6.eq) goto loc_83A50DBC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A50D70;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a50b84
	if (!cr6.eq) goto loc_83A50B84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83A50D84:
	// stw r24,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r24.u32);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-18580
	ctx.r4.s64 = ctx.r11.s64 + -18580;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A50DA0;
	sub_831EA308(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A50DB0;
	sub_83A7BD80(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83A50DBC:
	// lwz r11,4324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4324);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a50dcc
	if (!cr6.eq) goto loc_83A50DCC;
	// stw r28,4376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4376, ctx.r28.u32);
loc_83A50DCC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A50DD8"))) PPC_WEAK_FUNC(sub_83A50DD8);
PPC_FUNC_IMPL(__imp__sub_83A50DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A50DE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4324);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a50f78
	if (!cr6.eq) goto loc_83A50F78;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A50E0C;
	sub_83A7BDA0(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a50e40
	if (cr6.eq) goto loc_83A50E40;
loc_83A50E18:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A50E2C;
	sub_83A7BD70(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A50E38;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a50e18
	if (!cr6.eq) goto loc_83A50E18;
loc_83A50E40:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A50E4C;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a50ed4
	if (cr6.eq) goto loc_83A50ED4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r29,r11,-18456
	ctx.r29.s64 = ctx.r11.s64 + -18456;
loc_83A50E5C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7be08
	ctx.lr = 0x83A50E68;
	sub_83A7BE08(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A50E7C;
	sub_83A7BD70(ctx, base);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// ble cr6,0x83a50ea0
	if (!cr6.gt) goto loc_83A50EA0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A50EA0;
	sub_831EA308(ctx, base);
loc_83A50EA0:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x831ce980
	ctx.lr = 0x83A50EB0;
	sub_831CE980(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7be28
	ctx.lr = 0x83A50EC0;
	sub_83A7BE28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A50ECC;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a50e5c
	if (!cr6.eq) goto loc_83A50E5C;
loc_83A50ED4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A50EE0;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a50f78
	if (cr6.eq) goto loc_83A50F78;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r31,r11,-18536
	ctx.r31.s64 = ctx.r11.s64 + -18536;
loc_83A50EF0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7be08
	ctx.lr = 0x83A50EFC;
	sub_83A7BE08(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A50F10;
	sub_83A7BD70(ctx, base);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// ble cr6,0x83a50f34
	if (!cr6.gt) goto loc_83A50F34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A50F34;
	sub_831EA308(ctx, base);
loc_83A50F34:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x831ce980
	ctx.lr = 0x83A50F44;
	sub_831CE980(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7be28
	ctx.lr = 0x83A50F54;
	sub_83A7BE28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A50F64;
	sub_83A7BD90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A50F70;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a50ef0
	if (!cr6.eq) goto loc_83A50EF0;
loc_83A50F78:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A50F80"))) PPC_WEAK_FUNC(sub_83A50F80);
PPC_FUNC_IMPL(__imp__sub_83A50F80) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4424);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51014
	if (cr6.eq) goto loc_83A51014;
	// bl 0x83a57ae8
	ctx.lr = 0x83A50FA4;
	sub_83A57AE8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83a51084
	if (!cr6.eq) goto loc_83A51084;
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51014
	if (cr6.eq) goto loc_83A51014;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83a57ca8
	ctx.lr = 0x83A50FC0;
	sub_83A57CA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a50fe8
	if (cr6.eq) goto loc_83A50FE8;
loc_83A50FC8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// bl 0x83a580b0
	ctx.lr = 0x83A50FD4;
	sub_83A580B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// bl 0x83a57ca8
	ctx.lr = 0x83A50FE0;
	sub_83A57CA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a50fc8
	if (!cr6.eq) goto loc_83A50FC8;
loc_83A50FE8:
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// bl 0x83a57ae8
	ctx.lr = 0x83A50FF0;
	sub_83A57AE8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83a51014
	if (cr6.eq) goto loc_83A51014;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,4832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4832, ctx.r11.u8);
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
loc_83A51014:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4436);
	// bl 0x83a566c8
	ctx.lr = 0x83A51020;
	sub_83A566C8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a51044
	if (cr6.eq) goto loc_83A51044;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,4832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4832, ctx.r11.u8);
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
loc_83A51044:
	// lwz r11,4360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5106c
	if (cr6.eq) goto loc_83A5106C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,4832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4832, ctx.r11.u8);
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
loc_83A5106C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d538
	ctx.lr = 0x83A51074;
	sub_83A4D538(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r10,4832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4832, ctx.r10.u8);
loc_83A51084:
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

__attribute__((alias("__imp__sub_83A51098"))) PPC_WEAK_FUNC(sub_83A51098);
PPC_FUNC_IMPL(__imp__sub_83A51098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A510A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4336);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,4340(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4340);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r26,4332(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4332);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a510e4
	if (cr6.lt) goto loc_83A510E4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,-18384
	ctx.r4.s64 = ctx.r11.s64 + -18384;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A510E4;
	sub_831EA308(ctx, base);
loc_83A510E4:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a7a988
	ctx.lr = 0x83A510FC;
	sub_83A7A988(ctx, base);
	// lwz r11,4340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4340);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4340, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A51110"))) PPC_WEAK_FUNC(sub_83A51110);
PPC_FUNC_IMPL(__imp__sub_83A51110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A51118;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4332(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4332);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7a8a8
	ctx.lr = 0x83A5112C;
	sub_83A7A8A8(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83a51144
	if (!cr6.eq) goto loc_83A51144;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A51144:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a51260
	if (cr6.eq) goto loc_83A51260;
	// lwz r10,4328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4328);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a51214
	if (!cr6.eq) goto loc_83A51214;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a51214
	if (!cr6.eq) goto loc_83A51214;
	// lwz r11,3472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3472);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a51214
	if (!cr6.eq) goto loc_83A51214;
	// lwz r11,4324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4324);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5119c
	if (!cr6.eq) goto loc_83A5119C;
	// lwz r11,4884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4884);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5119c
	if (!cr6.eq) goto loc_83A5119C;
	// lwz r11,4888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4888);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a5119c
	if (!cr6.gt) goto loc_83A5119C;
	// lwz r30,4352(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// b 0x83a511a0
	goto loc_83A511A0;
loc_83A5119C:
	// lwz r30,4344(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4344);
loc_83A511A0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A511B4;
	sub_83A7BD70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a512a4
	if (cr6.eq) goto loc_83A512A4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x83a512a4
	if (cr6.lt) goto loc_83A512A4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,67
	cr6.compare<uint32_t>(ctx.r10.u32, 67, xer);
	// bne cr6,0x83a51268
	if (!cr6.eq) goto loc_83A51268;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,82
	cr6.compare<uint32_t>(ctx.r10.u32, 82, xer);
	// bne cr6,0x83a51268
	if (!cr6.eq) goto loc_83A51268;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,73
	cr6.compare<uint32_t>(ctx.r10.u32, 73, xer);
	// bne cr6,0x83a51268
	if (!cr6.eq) goto loc_83A51268;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(ctx.r11.u32, 68, xer);
	// bne cr6,0x83a51268
	if (!cr6.eq) goto loc_83A51268;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5120C;
	sub_83A7BD80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4328, ctx.r11.u32);
loc_83A51214:
	// lwz r11,4328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4328);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a51228
	if (!cr6.eq) goto loc_83A51228;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7b0c0
	ctx.lr = 0x83A51228;
	sub_83A7B0C0(ctx, base);
loc_83A51228:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7a8a8
	ctx.lr = 0x83A51230;
	sub_83A7A8A8(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83a51260
	if (!cr6.eq) goto loc_83A51260;
	// lwz r3,4436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4436);
	// bl 0x83a561f8
	ctx.lr = 0x83A51240;
	sub_83A561F8(ctx, base);
	// lwz r3,4424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51260
	if (cr6.eq) goto loc_83A51260;
	// bl 0x83a57bc0
	ctx.lr = 0x83A51250;
	sub_83A57BC0(ctx, base);
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51260
	if (cr6.eq) goto loc_83A51260;
	// bl 0x83a57bc0
	ctx.lr = 0x83A51260;
	sub_83A57BC0(ctx, base);
loc_83A51260:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A51268:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A51278;
	sub_83A7BD80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-18324
	ctx.r4.s64 = ctx.r10.s64 + -18324;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5129C;
	sub_831EA308(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A512A4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A512B4;
	sub_83A7BD80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A512BC"))) PPC_WEAK_FUNC(sub_83A512BC);
PPC_FUNC_IMPL(__imp__sub_83A512BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A512C0"))) PPC_WEAK_FUNC(sub_83A512C0);
PPC_FUNC_IMPL(__imp__sub_83A512C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A512C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,4332(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4332);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83a51314
	if (cr6.eq) goto loc_83A51314;
	// cmpwi cr6,r5,7
	cr6.compare<int32_t>(ctx.r5.s32, 7, xer);
	// beq cr6,0x83a51314
	if (cr6.eq) goto loc_83A51314;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4876, ctx.r11.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r10,-18280
	ctx.r4.s64 = ctx.r10.s64 + -18280;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A51308;
	sub_831EA308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A51314:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,1120
	ctx.r5.s64 = 1120;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r3,r31,2352
	ctx.r3.s64 = ctx.r31.s64 + 2352;
	// stw r30,3472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3472, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A51330;
	sub_831CDCF0(ctx, base);
	// lwz r11,4884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4884);
	// stw r30,4324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4324, ctx.r30.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a51354
	if (!cr6.eq) goto loc_83A51354;
	// lwz r11,4888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4888);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a51354
	if (!cr6.gt) goto loc_83A51354;
	// lwz r4,4352(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// b 0x83a51358
	goto loc_83A51358;
loc_83A51354:
	// lwz r4,4344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4344);
loc_83A51358:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7a980
	ctx.lr = 0x83A51360;
	sub_83A7A980(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4348);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7a988
	ctx.lr = 0x83A51378;
	sub_83A7A988(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7a9b0
	ctx.lr = 0x83A51384;
	sub_83A7A9B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7a8c0
	ctx.lr = 0x83A5138C;
	sub_83A7A8C0(ctx, base);
	// li r5,2304
	ctx.r5.s64 = 2304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x831cdcf0
	ctx.lr = 0x83A5139C;
	sub_831CDCF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,2304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2304, ctx.r30.u32);
	// sth r11,2336(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2336, ctx.r11.u16);
	// stw r30,2340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2340, ctx.r30.u32);
	// stw r30,2344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2344, ctx.r30.u32);
	// stw r30,4760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4760, ctx.r30.u32);
	// stw r30,4764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4764, ctx.r30.u32);
	// stw r30,4768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4768, ctx.r30.u32);
	// stw r30,4808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4808, ctx.r30.u32);
	// stw r30,4804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4804, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A513DC"))) PPC_WEAK_FUNC(sub_83A513DC);
PPC_FUNC_IMPL(__imp__sub_83A513DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A513E0"))) PPC_WEAK_FUNC(sub_83A513E0);
PPC_FUNC_IMPL(__imp__sub_83A513E0) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A513FC;
	sub_83A75CD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a51414
	if (!cr6.eq) goto loc_83A51414;
loc_83A51408:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x83a51454
	goto loc_83A51454;
loc_83A51414:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x83a51408
	if (cr6.eq) goto loc_83A51408;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83a51454
	if (cr6.eq) goto loc_83A51454;
	// lwz r3,4424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x83a51444
	if (cr6.eq) goto loc_83A51444;
	// bl 0x83a57b98
	ctx.lr = 0x83A51444;
	sub_83A57B98(ctx, base);
loc_83A51444:
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51454
	if (cr6.eq) goto loc_83A51454;
	// bl 0x83a58020
	ctx.lr = 0x83A51454;
	sub_83A58020(ctx, base);
loc_83A51454:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A5145C;
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

__attribute__((alias("__imp__sub_83A51470"))) PPC_WEAK_FUNC(sub_83A51470);
PPC_FUNC_IMPL(__imp__sub_83A51470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A51478;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r29.u32);
	// lwz r11,4324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4324);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a51558
	if (cr6.eq) goto loc_83A51558;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a51558
	if (cr6.eq) goto loc_83A51558;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x83a514f8
	if (cr6.gt) goto loc_83A514F8;
	// lis r12,-31835
	ctx.r12.s64 = -2086338560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5324
	ctx.r12.s64 = ctx.r12.s64 + 5324;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83A51558;
	case 1:
		goto loc_83A514F8;
	case 2:
		goto loc_83A51558;
	case 3:
		goto loc_83A514F8;
	case 4:
		goto loc_83A514F8;
	case 5:
		goto loc_83A514F8;
	case 6:
		goto loc_83A51558;
	case 7:
		goto loc_83A51558;
	case 8:
		goto loc_83A51558;
	case 9:
		goto loc_83A51558;
	case 10:
		goto loc_83A51558;
	default:
		return;
	}
	// lwz r29,5464(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5464);
	// lwz r29,5368(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5368);
	// lwz r29,5464(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5464);
	// lwz r29,5368(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5368);
	// lwz r29,5368(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5368);
	// lwz r29,5368(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5368);
	// lwz r29,5464(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5464);
	// lwz r29,5464(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5464);
	// lwz r29,5464(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5464);
	// lwz r29,5464(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5464);
	// lwz r29,5464(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5464);
loc_83A514F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x83a4f178
	ctx.lr = 0x83A51508;
	sub_83A4F178(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51558
	if (cr6.eq) goto loc_83A51558;
	// lwz r11,4360(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a51558
	if (!cr6.eq) goto loc_83A51558;
	// addi r31,r7,4356
	ctx.r31.s64 = ctx.r7.s64 + 4356;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5152C;
	sub_83A7BD70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a51548
	if (!cr6.eq) goto loc_83A51548;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A51548:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_83A51558:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A51560"))) PPC_WEAK_FUNC(sub_83A51560);
PPC_FUNC_IMPL(__imp__sub_83A51560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A51568;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4324);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a51694
	if (cr6.eq) goto loc_83A51694;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a51694
	if (cr6.eq) goto loc_83A51694;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a51694
	if (cr6.eq) goto loc_83A51694;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a51688
	if (cr6.eq) goto loc_83A51688;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a51688
	if (cr6.eq) goto loc_83A51688;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x83a51688
	if (cr6.eq) goto loc_83A51688;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a4f178
	ctx.lr = 0x83A515C4;
	sub_83A4F178(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a515f0
	if (!cr6.eq) goto loc_83A515F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4876, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-18112
	ctx.r4.s64 = ctx.r10.s64 + -18112;
	// bl 0x831ea308
	ctx.lr = 0x83A515E8;
	sub_831EA308(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A515F0:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a51694
	if (cr6.eq) goto loc_83A51694;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r31,r7,4356
	ctx.r31.s64 = ctx.r7.s64 + 4356;
	// lwz r10,4356(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4356);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x83a51664
	if (!cr6.eq) goto loc_83A51664;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a51664
	if (!cr6.eq) goto loc_83A51664;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bdb0
	ctx.lr = 0x83A51630;
	sub_83A7BDB0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A51640;
	sub_83A7BD80(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A51650;
	sub_83A7BD90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A51664:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4876, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-18184
	ctx.r4.s64 = ctx.r10.s64 + -18184;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A51680;
	sub_831EA308(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A51688:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4356(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4356, ctx.r11.u32);
	// stw r11,4360(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4360, ctx.r11.u32);
loc_83A51694:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5169C"))) PPC_WEAK_FUNC(sub_83A5169C);
PPC_FUNC_IMPL(__imp__sub_83A5169C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A516A0"))) PPC_WEAK_FUNC(sub_83A516A0);
PPC_FUNC_IMPL(__imp__sub_83A516A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A516A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,148
	ctx.r5.s64 = 148;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cdcf0
	ctx.lr = 0x83A516D0;
	sub_831CDCF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a4e680
	ctx.lr = 0x83A516D8;
	sub_83A4E680(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a516f8
	if (cr6.eq) goto loc_83A516F8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83a51704
	if (cr6.eq) goto loc_83A51704;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83a51704
	if (cr6.eq) goto loc_83A51704;
loc_83A516F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A51704:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// bl 0x83a57ca8
	ctx.lr = 0x83A51710;
	sub_83A57CA8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5174c
	if (cr6.eq) goto loc_83A5174C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4e720
	ctx.lr = 0x83A51734;
	sub_83A4E720(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,2344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2344, ctx.r11.u32);
	// bl 0x83a4e8d8
	ctx.lr = 0x83A51748;
	sub_83A4E8D8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_83A5174C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A51758"))) PPC_WEAK_FUNC(sub_83A51758);
PPC_FUNC_IMPL(__imp__sub_83A51758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A51760;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cdcf0
	ctx.lr = 0x83A51788;
	sub_831CDCF0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// std r30,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// std r10,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r10.u64);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// lwz r3,4472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a517d4
	if (!cr6.eq) goto loc_83A517D4;
loc_83A517C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A517D4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a517c8
	if (cr6.eq) goto loc_83A517C8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83a517f4
	if (cr6.eq) goto loc_83A517F4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83a517c8
	if (!cr6.eq) goto loc_83A517C8;
loc_83A517F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83a57ca8
	ctx.lr = 0x83A517FC;
	sub_83A57CA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51888
	if (cr6.eq) goto loc_83A51888;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// std r6,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r6.u64);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// std r5,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r5.u64);
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// lwz r3,4296(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4296);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lwz r10,4272(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4272);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r6,4276(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4276);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// lwz r5,4304(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4304);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// beq cr6,0x83a51884
	if (cr6.eq) goto loc_83A51884;
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// stw r9,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r9.u32);
	// stw r11,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r11.u32);
	// stw r10,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r10.u32);
loc_83A51884:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83A51888:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A51894"))) PPC_WEAK_FUNC(sub_83A51894);
PPC_FUNC_IMPL(__imp__sub_83A51894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A51898"))) PPC_WEAK_FUNC(sub_83A51898);
PPC_FUNC_IMPL(__imp__sub_83A51898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A518A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,4332(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4332);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83a518f0
	if (cr6.eq) goto loc_83A518F0;
	// cmpwi cr6,r5,7
	cr6.compare<int32_t>(ctx.r5.s32, 7, xer);
	// beq cr6,0x83a518f0
	if (cr6.eq) goto loc_83A518F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4876, ctx.r11.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r10,-18032
	ctx.r4.s64 = ctx.r10.s64 + -18032;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A518E8;
	sub_831EA308(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A518F0:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,1120
	ctx.r5.s64 = 1120;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r3,r31,2352
	ctx.r3.s64 = ctx.r31.s64 + 2352;
	// stw r30,3472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3472, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A5190C;
	sub_831CDCF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4344);
	// bl 0x83a7a980
	ctx.lr = 0x83A51918;
	sub_83A7A980(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4348);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7a988
	ctx.lr = 0x83A51930;
	sub_83A7A988(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7a9b0
	ctx.lr = 0x83A5193C;
	sub_83A7A9B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7a8c0
	ctx.lr = 0x83A51944;
	sub_83A7A8C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4344);
	// bl 0x83a7be08
	ctx.lr = 0x83A51950;
	sub_83A7BE08(ctx, base);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// ble cr6,0x83a51960
	if (!cr6.gt) goto loc_83A51960;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_83A51960:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A51970;
	sub_831CE980(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4344);
	// bl 0x83a7be28
	ctx.lr = 0x83A51980;
	sub_83A7BE28(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4ebe8
	ctx.lr = 0x83A51990;
	sub_83A4EBE8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r5,2304
	ctx.r5.s64 = 2304;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,4324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4324, ctx.r29.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x831cdcf0
	ctx.lr = 0x83A519A8;
	sub_831CDCF0(ctx, base);
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// stw r30,2304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2304, ctx.r30.u32);
	// sth r29,2336(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2336, ctx.r29.u16);
	// stw r30,2340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2340, ctx.r30.u32);
	// stw r30,2344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2344, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A519CC"))) PPC_WEAK_FUNC(sub_83A519CC);
PPC_FUNC_IMPL(__imp__sub_83A519CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A519D0"))) PPC_WEAK_FUNC(sub_83A519D0);
PPC_FUNC_IMPL(__imp__sub_83A519D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A519D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83A519FC:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83a519fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A519FC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a51b78
	if (cr6.eq) goto loc_83A51B78;
	// lwz r29,4452(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4452);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a51b78
	if (cr6.eq) goto loc_83A51B78;
	// li r27,-1
	ctx.r27.s64 = -1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A51A30;
	sub_83A7BD70(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51a90
	if (cr6.eq) goto loc_83A51A90;
loc_83A51A3C:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x83a51a90
	if (cr6.lt) goto loc_83A51A90;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x83a7a4f0
	ctx.lr = 0x83A51A50;
	sub_83A7A4F0(ctx, base);
	// lbz r11,111(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83a51aa4
	if (cr6.eq) goto loc_83A51AA4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83a51a9c
	if (cr6.eq) goto loc_83A51A9C;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a4f000
	ctx.lr = 0x83A51A74;
	sub_83A4F000(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, xer);
	// bne cr6,0x83a51b28
	if (!cr6.eq) goto loc_83A51B28;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
loc_83A51A90:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A51A9C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83a51b28
	if (!cr6.eq) goto loc_83A51B28;
loc_83A51AA4:
	// lhz r11,2336(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2336);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a51b68
	if (cr6.eq) goto loc_83A51B68;
	// lwz r11,1132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a51b68
	if (cr6.eq) goto loc_83A51B68;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x83a51b1c
	if (cr6.lt) goto loc_83A51B1C;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a680
	ctx.lr = 0x83A51AEC;
	sub_83A7A680(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r31,1000
	ctx.r5.s64 = ctx.r31.s64 + 1000;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a4de28
	ctx.lr = 0x83A51B04;
	sub_83A4DE28(ctx, base);
	// lwz r11,1132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1132);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r11.u32);
	// bl 0x83a504f0
	ctx.lr = 0x83A51B1C;
	sub_83A504F0(ctx, base);
loc_83A51B1C:
	// lwz r11,4456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4456);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4456, ctx.r11.u32);
loc_83A51B28:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A51B38;
	sub_83A7BD90(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x83a7bd70
	ctx.lr = 0x83A51B50;
	sub_83A7BD70(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a51a3c
	if (!cr6.eq) goto loc_83A51A3C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A51B68:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A51B78;
	sub_83A7BD80(ctx, base);
loc_83A51B78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A51B84"))) PPC_WEAK_FUNC(sub_83A51B84);
PPC_FUNC_IMPL(__imp__sub_83A51B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A51B88"))) PPC_WEAK_FUNC(sub_83A51B88);
PPC_FUNC_IMPL(__imp__sub_83A51B88) {
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
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x83a4cf70
	ctx.lr = 0x83A51BA4;
	sub_83A4CF70(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51be0
	if (cr6.eq) goto loc_83A51BE0;
	// bl 0x83a57ec0
	ctx.lr = 0x83A51BB0;
	sub_83A57EC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51be0
	if (cr6.eq) goto loc_83A51BE0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a51be0
	if (cr6.eq) goto loc_83A51BE0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A51BCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a51be0
	if (cr6.eq) goto loc_83A51BE0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,10240
	cr6.compare<uint32_t>(ctx.r3.u32, 10240, xer);
	// bge cr6,0x83a51be4
	if (!cr6.lt) goto loc_83A51BE4;
loc_83A51BE0:
	// li r3,10240
	ctx.r3.s64 = 10240;
loc_83A51BE4:
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

__attribute__((alias("__imp__sub_83A51BF8"))) PPC_WEAK_FUNC(sub_83A51BF8);
PPC_FUNC_IMPL(__imp__sub_83A51BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A51C00;
	__savegprlr_25(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// li r9,13
	ctx.r9.s64 = 13;
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r8,4884(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4884);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// li r25,1
	ctx.r25.s64 = 1;
	// and r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r30,r6,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x83a51c54
	if (!cr6.eq) goto loc_83A51C54;
	// lwz r11,4888(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4888);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x83a51ce0
	if (cr6.gt) goto loc_83A51CE0;
loc_83A51C54:
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// bne cr6,0x83a51c9c
	if (!cr6.eq) goto loc_83A51C9C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x83a51c9c
	if (!cr6.lt) goto loc_83A51C9C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_83A51C9C:
	// cmplwi cr6,r28,10240
	cr6.compare<uint32_t>(ctx.r28.u32, 10240, xer);
	// bge cr6,0x83a51ca8
	if (!cr6.lt) goto loc_83A51CA8;
	// li r28,10240
	ctx.r28.s64 = 10240;
loc_83A51CA8:
	// lwz r11,4324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4324);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a51ce0
	if (!cr6.eq) goto loc_83A51CE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51b88
	ctx.lr = 0x83A51CBC;
	sub_83A51B88(ctx, base);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r11,r28,2048
	ctx.r11.s64 = ctx.r28.s64 + 2048;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// rlwinm r3,r11,0,0,20
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// bl 0x83a7bf58
	ctx.lr = 0x83A51CDC;
	sub_83A7BF58(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_83A51CE0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a51df0
	if (!cr6.gt) goto loc_83A51DF0;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r28,r31,28
	ctx.r28.s64 = ctx.r31.s64 + 28;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// bl 0x83a4cf70
	ctx.lr = 0x83A51D04;
	sub_83A4CF70(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x83a51d3c
	if (!cr6.eq) goto loc_83A51D3C;
	// stw r25,4876(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4876, ctx.r25.u32);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,-17816
	ctx.r4.s64 = ctx.r11.s64 + -17816;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A51D30;
	sub_831EA308(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A51D3C:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a4f338
	ctx.lr = 0x83A51D4C;
	sub_83A4F338(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a57938
	ctx.lr = 0x83A51D60;
	sub_83A57938(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a51df0
	if (!cr6.gt) goto loc_83A51DF0;
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// addi r5,r31,760
	ctx.r5.s64 = ctx.r31.s64 + 760;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// bl 0x83a4cfd8
	ctx.lr = 0x83A51D88;
	sub_83A4CFD8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// bne cr6,0x83a51dc0
	if (!cr6.eq) goto loc_83A51DC0;
	// stw r25,4876(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4876, ctx.r25.u32);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,-17936
	ctx.r4.s64 = ctx.r11.s64 + -17936;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A51DB4;
	sub_831EA308(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A51DC0:
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a4f420
	ctx.lr = 0x83A51DD4;
	sub_83A4F420(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a57f08
	ctx.lr = 0x83A51DE8;
	sub_83A57F08(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_83A51DF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a55880
	ctx.lr = 0x83A51DF8;
	sub_83A55880(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83a51e28
	if (cr6.lt) goto loc_83A51E28;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,104
	ctx.r4.s64 = ctx.r11.s64 + 104;
	// bl 0x83a558d0
	ctx.lr = 0x83A51E24;
	sub_83A558D0(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_83A51E28:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a7c0e8
	ctx.lr = 0x83A51E40;
	sub_83A7C0E8(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A51E4C"))) PPC_WEAK_FUNC(sub_83A51E4C);
PPC_FUNC_IMPL(__imp__sub_83A51E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A51E50"))) PPC_WEAK_FUNC(sub_83A51E50);
PPC_FUNC_IMPL(__imp__sub_83A51E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A51E58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51fe4
	if (cr6.eq) goto loc_83A51FE4;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq cr6,0x83a51ea4
	if (cr6.eq) goto loc_83A51EA4;
	// cmpwi cr6,r5,7
	cr6.compare<int32_t>(ctx.r5.s32, 7, xer);
	// beq cr6,0x83a51ea4
	if (cr6.eq) goto loc_83A51EA4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4876, ctx.r11.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r10,-17692
	ctx.r4.s64 = ctx.r10.s64 + -17692;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A51EA4;
	sub_831EA308(ctx, base);
loc_83A51EA4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A51EAC;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d3e0
	ctx.lr = 0x83A51EB4;
	sub_83A4D3E0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A51EBC;
	sub_83A75D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a50430
	ctx.lr = 0x83A51EC4;
	sub_83A50430(ctx, base);
	// lwz r3,4348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51ed8
	if (cr6.eq) goto loc_83A51ED8;
	// bl 0x83a7bd40
	ctx.lr = 0x83A51ED4;
	sub_83A7BD40(ctx, base);
	// stw r30,4348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4348, ctx.r30.u32);
loc_83A51ED8:
	// lwz r3,4332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4332);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51eec
	if (cr6.eq) goto loc_83A51EEC;
	// bl 0x83a7a818
	ctx.lr = 0x83A51EE8;
	sub_83A7A818(ctx, base);
	// stw r30,4332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4332, ctx.r30.u32);
loc_83A51EEC:
	// lwz r3,4344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4344);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51f00
	if (cr6.eq) goto loc_83A51F00;
	// bl 0x83a7bd40
	ctx.lr = 0x83A51EFC;
	sub_83A7BD40(ctx, base);
	// stw r30,4344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4344, ctx.r30.u32);
loc_83A51F00:
	// lwz r3,4364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51f14
	if (cr6.eq) goto loc_83A51F14;
	// bl 0x83a7bd40
	ctx.lr = 0x83A51F10;
	sub_83A7BD40(ctx, base);
	// stw r30,4364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4364, ctx.r30.u32);
loc_83A51F14:
	// lwz r11,4884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4884);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a51f48
	if (!cr6.eq) goto loc_83A51F48;
	// lwz r11,4888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4888);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a51f48
	if (!cr6.gt) goto loc_83A51F48;
	// lwz r3,4352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51f48
	if (cr6.eq) goto loc_83A51F48;
	// bl 0x83a7bd40
	ctx.lr = 0x83A51F3C;
	sub_83A7BD40(ctx, base);
	// stw r30,4408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4408, ctx.r30.u32);
	// stw r30,4412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4412, ctx.r30.u32);
	// stw r30,4352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4352, ctx.r30.u32);
loc_83A51F48:
	// lwz r3,4388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4388);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51f5c
	if (cr6.eq) goto loc_83A51F5C;
	// bl 0x83a78b10
	ctx.lr = 0x83A51F58;
	sub_83A78B10(ctx, base);
	// stw r30,4388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4388, ctx.r30.u32);
loc_83A51F5C:
	// lwz r29,4380(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4380);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a51f7c
	if (cr6.eq) goto loc_83A51F7C;
	// lwz r4,3496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3496);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a51f7c
	if (cr6.eq) goto loc_83A51F7C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A51F7C;
	sub_83A78A48(ctx, base);
loc_83A51F7C:
	// stw r30,3492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3492, ctx.r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r30,3496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3496, ctx.r30.u32);
	// beq cr6,0x83a51fa4
	if (cr6.eq) goto loc_83A51FA4;
	// lwz r4,4396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4396);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a51fa4
	if (cr6.eq) goto loc_83A51FA4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A51FA0;
	sub_83A78A48(ctx, base);
	// stw r30,4396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4396, ctx.r30.u32);
loc_83A51FA4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a51fb8
	if (cr6.eq) goto loc_83A51FB8;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// bl 0x83a75c60
	ctx.lr = 0x83A51FB8;
	sub_83A75C60(ctx, base);
loc_83A51FB8:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a51fe4
	if (cr6.eq) goto loc_83A51FE4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a51fd8
	if (cr6.eq) goto loc_83A51FD8;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A51FD8;
	sub_83A78A48(ctx, base);
loc_83A51FD8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A51FE4;
	sub_83A78A48(ctx, base);
loc_83A51FE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A51FEC"))) PPC_WEAK_FUNC(sub_83A51FEC);
PPC_FUNC_IMPL(__imp__sub_83A51FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A51FF0"))) PPC_WEAK_FUNC(sub_83A51FF0);
PPC_FUNC_IMPL(__imp__sub_83A51FF0) {
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
	ctx.lr = 0x83A51FF8;
	__savegprlr_23(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83a5205c
	if (cr6.eq) goto loc_83A5205C;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// beq cr6,0x83a5205c
	if (cr6.eq) goto loc_83A5205C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4876, ctx.r11.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r10,-17112
	ctx.r4.s64 = ctx.r10.s64 + -17112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A52050;
	sub_831EA308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A5205C:
	// lwz r11,3500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3500);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a52080
	if (!cr6.eq) goto loc_83A52080;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A52070;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d3e0
	ctx.lr = 0x83A52078;
	sub_83A4D3E0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A52080;
	sub_83A75D58(ctx, base);
loc_83A52080:
	// addi r3,r31,3504
	ctx.r3.s64 = ctx.r31.s64 + 3504;
	// li r5,820
	ctx.r5.s64 = 820;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A52090;
	sub_831CE980(ctx, base);
	// lwz r11,4324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4324);
	// stw r26,4404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4404, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a521cc
	if (!cr6.eq) goto loc_83A521CC;
	// lwz r11,4884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4884);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a520b8
	if (!cr6.eq) goto loc_83A520B8;
	// lwz r11,4888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4888);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x83a521d8
	if (cr6.gt) goto loc_83A521D8;
loc_83A520B8:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x83a52100
	if (!cr6.eq) goto loc_83A52100;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83a52100
	if (!cr6.lt) goto loc_83A52100;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A52100:
	// cmplwi cr6,r11,10240
	cr6.compare<uint32_t>(ctx.r11.u32, 10240, xer);
	// bge cr6,0x83a5210c
	if (!cr6.lt) goto loc_83A5210C;
	// li r11,10240
	ctx.r11.s64 = 10240;
loc_83A5210C:
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r30,r11,0,0,20
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// bl 0x83a51b88
	ctx.lr = 0x83A5211C;
	sub_83A51B88(ctx, base);
	// stw r3,4412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4412, ctx.r3.u32);
	// stw r30,4408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4408, ctx.r30.u32);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r7,r10,-17136
	ctx.r7.s64 = ctx.r10.s64 + -17136;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a7bfb8
	ctx.lr = 0x83A52144;
	sub_83A7BFB8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4352, ctx.r3.u32);
	// bne cr6,0x83a52198
	if (!cr6.eq) goto loc_83A52198;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-17180
	ctx.r4.s64 = ctx.r10.s64 + -17180;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A52174;
	sub_831EA308(ctx, base);
loc_83A52174:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A5217C;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d3e0
	ctx.lr = 0x83A52184;
	sub_83A4D3E0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A5218C;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A52198:
	// stw r30,4476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4476, ctx.r30.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r29,4480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4480, ctx.r29.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7bd70
	ctx.lr = 0x83A521B0;
	sub_83A7BD70(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,4352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4484, ctx.r11.u32);
	// bl 0x83a7bd80
	ctx.lr = 0x83A521C8;
	sub_83A7BD80(ctx, base);
	// b 0x83a521d8
	goto loc_83A521D8;
loc_83A521CC:
	// stw r25,4408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4408, ctx.r25.u32);
	// stw r25,4412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4412, ctx.r25.u32);
	// stw r25,4352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4352, ctx.r25.u32);
loc_83A521D8:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lis r23,-31741
	ctx.r23.s64 = -2080178176;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a52530
	if (!cr6.gt) goto loc_83A52530;
	// lwz r3,76(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// addi r29,r27,28
	ctx.r29.s64 = ctx.r27.s64 + 28;
	// bl 0x83a4cf70
	ctx.lr = 0x83A521F4;
	sub_83A4CF70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a52244
	if (!cr6.eq) goto loc_83A52244;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-17296
	ctx.r4.s64 = ctx.r10.s64 + -17296;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A52220;
	sub_831EA308(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A52228;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d3e0
	ctx.lr = 0x83A52230;
	sub_83A4D3E0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A52238;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A52244:
	// lis r11,16467
	ctx.r11.s64 = 1079181312;
	// stw r25,4420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4420, ctx.r25.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ori r10,r11,18006
	ctx.r10.u64 = ctx.r11.u64 | 18006;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,4416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4416, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4f8b0
	ctx.lr = 0x83A52268;
	sub_83A4F8B0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add. r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble 0x83a522f4
	if (!cr0.gt) goto loc_83A522F4;
	// lwz r11,4812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4812);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5229c
	if (cr6.eq) goto loc_83A5229C;
	// lwz r3,4820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4820);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A52290;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,4824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4824, ctx.r3.u32);
	// b 0x83a522a0
	goto loc_83A522A0;
loc_83A5229C:
	// lwz r3,4828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4828);
loc_83A522A0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a522ec
	if (!cr6.eq) goto loc_83A522EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-17340
	ctx.r4.s64 = ctx.r10.s64 + -17340;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A522C8;
	sub_831EA308(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A522D0;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d3e0
	ctx.lr = 0x83A522D8;
	sub_83A4D3E0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A522E0;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A522EC:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r24,r3,r6
	ctx.r24.u64 = ctx.r3.u64 + ctx.r6.u64;
loc_83A522F4:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4f338
	ctx.lr = 0x83A52308;
	sub_83A4F338(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a57998
	ctx.lr = 0x83A52318;
	sub_83A57998(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4424, ctx.r3.u32);
	// bne cr6,0x83a5236c
	if (!cr6.eq) goto loc_83A5236C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-17380
	ctx.r4.s64 = ctx.r10.s64 + -17380;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A52348;
	sub_831EA308(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A52350;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d3e0
	ctx.lr = 0x83A52358;
	sub_83A4D3E0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A52360;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A5236C:
	// ld r11,-10840(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + -10840);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x83a52388
	if (cr6.eq) goto loc_83A52388;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-2704
	ctx.r4.s64 = ctx.r11.s64 + -2704;
	// bl 0x83a57e20
	ctx.lr = 0x83A52388;
	sub_83A57E20(ctx, base);
loc_83A52388:
	// lwz r4,4428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4428);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a523a0
	if (!cr6.eq) goto loc_83A523A0;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// b 0x83a523a4
	goto loc_83A523A4;
loc_83A523A0:
	// lwz r5,4432(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4432);
loc_83A523A4:
	// lwz r3,4424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// bl 0x83a57d58
	ctx.lr = 0x83A523AC;
	sub_83A57D58(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r3,4424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-2808
	ctx.r4.s64 = ctx.r11.s64 + -2808;
	// bl 0x83a57e48
	ctx.lr = 0x83A523C0;
	sub_83A57E48(ctx, base);
	// lwz r10,756(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 756);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83a524d8
	if (!cr6.gt) goto loc_83A524D8;
	// lwz r3,796(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 796);
	// addi r5,r27,760
	ctx.r5.s64 = ctx.r27.s64 + 760;
	// bl 0x83a4cfd8
	ctx.lr = 0x83A523D8;
	sub_83A4CFD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a52428
	if (!cr6.eq) goto loc_83A52428;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-17496
	ctx.r4.s64 = ctx.r10.s64 + -17496;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A52404;
	sub_831EA308(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A5240C;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d3e0
	ctx.lr = 0x83A52414;
	sub_83A4D3E0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A5241C;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A52428:
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4f420
	ctx.lr = 0x83A52440;
	sub_83A4F420(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a57f68
	ctx.lr = 0x83A52450;
	sub_83A57F68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4472, ctx.r3.u32);
	// bne cr6,0x83a524a4
	if (!cr6.eq) goto loc_83A524A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-17540
	ctx.r4.s64 = ctx.r10.s64 + -17540;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A52480;
	sub_831EA308(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A52488;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d3e0
	ctx.lr = 0x83A52490;
	sub_83A4D3E0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A52498;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A524A4:
	// ld r11,-10840(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + -10840);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x83a524c0
	if (cr6.eq) goto loc_83A524C0;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-2704
	ctx.r4.s64 = ctx.r11.s64 + -2704;
	// bl 0x83a57da8
	ctx.lr = 0x83A524C0;
	sub_83A57DA8(ctx, base);
loc_83A524C0:
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-2808
	ctx.r4.s64 = ctx.r11.s64 + -2808;
	// bl 0x83a57df8
	ctx.lr = 0x83A524D4;
	sub_83A57DF8(ctx, base);
	// b 0x83a524dc
	goto loc_83A524DC;
loc_83A524D8:
	// stw r25,4472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4472, ctx.r25.u32);
loc_83A524DC:
	// lwz r30,3496(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3496);
	// lwz r25,4424(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r24,4472(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83a57dd0
	ctx.lr = 0x83A524F4;
	sub_83A57DD0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83a57d58
	ctx.lr = 0x83A52500;
	sub_83A57D58(ctx, base);
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a57df8
	ctx.lr = 0x83A5251C;
	sub_83A57DF8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a57d80
	ctx.lr = 0x83A52530;
	sub_83A57D80(ctx, base);
loc_83A52530:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a56ae0
	ctx.lr = 0x83A52540;
	sub_83A56AE0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4436, ctx.r3.u32);
	// bne cr6,0x83a5258c
	if (!cr6.eq) goto loc_83A5258C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-17584
	ctx.r4.s64 = ctx.r11.s64 + -17584;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A52568;
	sub_831EA308(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A52570;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d3e0
	ctx.lr = 0x83A52578;
	sub_83A4D3E0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A52580;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A5258C:
	// lwz r7,100(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x83a525e8
	if (cr6.lt) goto loc_83A525E8;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r6,r11,104
	ctx.r6.s64 = ctx.r11.s64 + 104;
	// bl 0x83a55d90
	ctx.lr = 0x83A525BC;
	sub_83A55D90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a52174
	if (cr6.eq) goto loc_83A52174;
	// ld r11,-10840(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + -10840);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x83a525e8
	if (cr6.eq) goto loc_83A525E8;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r3,4436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4436);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-2024
	ctx.r4.s64 = ctx.r11.s64 + -2024;
	// bl 0x83a55848
	ctx.lr = 0x83A525E8;
	sub_83A55848(ctx, base);
loc_83A525E8:
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a7c138
	ctx.lr = 0x83A525F8;
	sub_83A7C138(ctx, base);
	// stw r3,4452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4452, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a52648
	if (!cr6.eq) goto loc_83A52648;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-17632
	ctx.r4.s64 = ctx.r10.s64 + -17632;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A52624;
	sub_831EA308(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A5262C;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d3e0
	ctx.lr = 0x83A52634;
	sub_83A4D3E0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A5263C;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A52648:
	// lwz r11,748(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 748);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,3500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3500, ctx.r10.u32);
	// stw r11,4460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4460, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A52664"))) PPC_WEAK_FUNC(sub_83A52664);
PPC_FUNC_IMPL(__imp__sub_83A52664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A52668"))) PPC_WEAK_FUNC(sub_83A52668);
PPC_FUNC_IMPL(__imp__sub_83A52668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A52670;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83a75cd8
	ctx.lr = 0x83A5268C;
	sub_83A75CD8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a78aa0
	ctx.lr = 0x83A52698;
	sub_83A78AA0(ctx, base);
	// stw r3,4780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4780, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51ff0
	ctx.lr = 0x83A526AC;
	sub_83A51FF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A526B8;
	sub_83A75D58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A526C4"))) PPC_WEAK_FUNC(sub_83A526C4);
PPC_FUNC_IMPL(__imp__sub_83A526C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A526C8"))) PPC_WEAK_FUNC(sub_83A526C8);
PPC_FUNC_IMPL(__imp__sub_83A526C8) {
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
	// lwz r11,4520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4520);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a526f0
	if (cr6.eq) goto loc_83A526F0;
	// bl 0x83a50430
	ctx.lr = 0x83A526F0;
	sub_83A50430(ctx, base);
loc_83A526F0:
	// lwz r11,2428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// lwz r10,3376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,4516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4516, ctx.r11.u32);
	// ble cr6,0x83a52714
	if (!cr6.gt) goto loc_83A52714;
	// lwz r10,3420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3420);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4516, ctx.r11.u32);
loc_83A52714:
	// lwz r11,3440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3440);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a52730
	if (!cr6.gt) goto loc_83A52730;
	// lwz r11,4516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4516);
	// lwz r10,3456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3456);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4516, ctx.r11.u32);
loc_83A52730:
	// lwz r11,2448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2448);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a52780
	if (!cr6.gt) goto loc_83A52780;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,2444
	ctx.r11.s64 = ctx.r31.s64 + 2444;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A52748:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,4516(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4516);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4516, ctx.r10.u32);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,4516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4516, ctx.r10.u32);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,4516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4516, ctx.r10.u32);
	// lwzu r9,112(r11)
	ea = 112 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,4516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4516, ctx.r10.u32);
	// bdnz 0x83a52748
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A52748;
loc_83A52780:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4348);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5278C;
	sub_83A7BDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4344);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5279C;
	sub_83A7BDA0(ctx, base);
	// lwz r10,4516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4516);
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a527b0
	if (!cr6.lt) goto loc_83A527B0;
	// stw r11,4516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4516, ctx.r11.u32);
loc_83A527B0:
	// li r6,64
	ctx.r6.s64 = 64;
	// lwz r5,4516(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4516);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4400);
	// bl 0x83a501f0
	ctx.lr = 0x83A527C4;
	sub_83A501F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a527e8
	if (cr6.eq) goto loc_83A527E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4400);
	// bl 0x83a50300
	ctx.lr = 0x83A527D8;
	sub_83A50300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a527f0
	if (!cr6.eq) goto loc_83A527F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a50430
	ctx.lr = 0x83A527E8;
	sub_83A50430(ctx, base);
loc_83A527E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a527f4
	goto loc_83A527F4;
loc_83A527F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A527F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5280C"))) PPC_WEAK_FUNC(sub_83A5280C);
PPC_FUNC_IMPL(__imp__sub_83A5280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A52810"))) PPC_WEAK_FUNC(sub_83A52810);
PPC_FUNC_IMPL(__imp__sub_83A52810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A52818;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2336(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2336);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a52858
	if (!cr6.eq) goto loc_83A52858;
loc_83A5284C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A52858:
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5284c
	if (cr6.eq) goto loc_83A5284C;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x83a528d8
	if (cr6.lt) goto loc_83A528D8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x83a7a680
	ctx.lr = 0x83A5287C;
	sub_83A7A680(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r31,1028
	ctx.r29.s64 = ctx.r31.s64 + 1028;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a508a0
	ctx.lr = 0x83A52898;
	sub_83A508A0(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a528c0
	if (cr6.eq) goto loc_83A528C0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// lwz r8,52(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// stw r8,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r8.u32);
loc_83A528C0:
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// bl 0x83a504f0
	ctx.lr = 0x83A528D8;
	sub_83A504F0(ctx, base);
loc_83A528D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A528E4"))) PPC_WEAK_FUNC(sub_83A528E4);
PPC_FUNC_IMPL(__imp__sub_83A528E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A528E8"))) PPC_WEAK_FUNC(sub_83A528E8);
PPC_FUNC_IMPL(__imp__sub_83A528E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A528F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3500(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3500);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,4332(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4332);
	// lwz r28,4424(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4424);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lwz r29,4472(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4472);
	// bne cr6,0x83a52c78
	if (!cr6.eq) goto loc_83A52C78;
	// lwz r11,4324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4324);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a52924
	if (!cr6.eq) goto loc_83A52924;
	// lwz r30,4352(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4352);
	// b 0x83a52928
	goto loc_83A52928;
loc_83A52924:
	// lwz r30,4364(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
loc_83A52928:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a7a8a8
	ctx.lr = 0x83A52930;
	sub_83A7A8A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a52b98
	if (!cr6.eq) goto loc_83A52B98;
	// lwz r11,4324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4324);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a52980
	if (!cr6.eq) goto loc_83A52980;
	// lwz r3,4364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// bl 0x83a7bd60
	ctx.lr = 0x83A5294C;
	sub_83A7BD60(ctx, base);
	// addi r5,r31,4368
	ctx.r5.s64 = ctx.r31.s64 + 4368;
	// lwz r3,4364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7bd90
	ctx.lr = 0x83A5295C;
	sub_83A7BD90(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,4376(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// lwz r3,4364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// bl 0x83a7bd70
	ctx.lr = 0x83A52970;
	sub_83A7BD70(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// bl 0x83a7bd90
	ctx.lr = 0x83A52980;
	sub_83A7BD90(ctx, base);
loc_83A52980:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a7a980
	ctx.lr = 0x83A5298C;
	sub_83A7A980(ctx, base);
	// lwz r3,4348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4348);
	// bl 0x83a7bd60
	ctx.lr = 0x83A52994;
	sub_83A7BD60(ctx, base);
	// lis r5,17234
	ctx.r5.s64 = 1129447424;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,4348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4348);
	// ori r5,r5,18756
	ctx.r5.u64 = ctx.r5.u64 | 18756;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51098
	ctx.lr = 0x83A529AC;
	sub_83A51098(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,4436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4436);
	// addi r4,r11,1808
	ctx.r4.s64 = ctx.r11.s64 + 1808;
	// bl 0x83a55838
	ctx.lr = 0x83A529C0;
	sub_83A55838(ctx, base);
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,1992
	ctx.r4.s64 = ctx.r10.s64 + 1992;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a57da8
	ctx.lr = 0x83A529D4;
	sub_83A57DA8(ctx, base);
	// lis r9,-31835
	ctx.r9.s64 = -2086338560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r9,-10544
	ctx.r4.s64 = ctx.r9.s64 + -10544;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a57e70
	ctx.lr = 0x83A529E8;
	sub_83A57E70(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a52b34
	if (cr6.eq) goto loc_83A52B34;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a57ab8
	ctx.lr = 0x83A529F8;
	sub_83A57AB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a52a1c
	if (!cr6.eq) goto loc_83A52A1C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-16992
	ctx.r4.s64 = ctx.r11.s64 + -16992;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A52A1C;
	sub_831EA308(ctx, base);
loc_83A52A1C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,4420(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4420);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4416(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4416);
	// bl 0x83a51098
	ctx.lr = 0x83A52A30;
	sub_83A51098(ctx, base);
	// lwz r11,2376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2376);
	// lwz r10,2380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,2400(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2400);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x83a57e98
	ctx.lr = 0x83A52A54;
	sub_83A57E98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a57b70
	ctx.lr = 0x83A52A5C;
	sub_83A57B70(ctx, base);
	// lwz r4,4492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4492);
	// lwz r8,4488(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4488);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// bl 0x83a57d80
	ctx.lr = 0x83A52A70;
	sub_83A57D80(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r7,4456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4456, ctx.r7.u32);
	// beq cr6,0x83a52b34
	if (cr6.eq) goto loc_83A52B34;
	// lwz r11,3376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3376);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a52aa0
	if (!cr6.gt) goto loc_83A52AA0;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,10256
	ctx.r4.s64 = ctx.r11.s64 + 10256;
	// bl 0x83a580d8
	ctx.lr = 0x83A52AA0;
	sub_83A580D8(ctx, base);
loc_83A52AA0:
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-10424
	ctx.r4.s64 = ctx.r11.s64 + -10424;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a57e20
	ctx.lr = 0x83A52AB4;
	sub_83A57E20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a57ab8
	ctx.lr = 0x83A52ABC;
	sub_83A57AB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a52ae0
	if (!cr6.eq) goto loc_83A52AE0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-17040
	ctx.r4.s64 = ctx.r11.s64 + -17040;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A52AE0;
	sub_831EA308(ctx, base);
loc_83A52AE0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,4468(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4468);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4464(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4464);
	// bl 0x83a51098
	ctx.lr = 0x83A52AF4;
	sub_83A51098(ctx, base);
	// lwz r11,3380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3380);
	// lwz r10,3384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3384);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,3404(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3404);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x83a58100
	ctx.lr = 0x83A52B18;
	sub_83A58100(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a57b70
	ctx.lr = 0x83A52B20;
	sub_83A57B70(ctx, base);
	// lwz r4,4496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4496);
	// lwz r8,4488(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4488);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// bl 0x83a57d30
	ctx.lr = 0x83A52B34;
	sub_83A57D30(ctx, base);
loc_83A52B34:
	// lwz r3,4436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4436);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a52b48
	if (cr6.eq) goto loc_83A52B48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a55fd8
	ctx.lr = 0x83A52B48;
	sub_83A55FD8(ctx, base);
loc_83A52B48:
	// lwz r4,4452(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4452);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a52b68
	if (cr6.eq) goto loc_83A52B68;
	// lis r5,16467
	ctx.r5.s64 = 1079181312;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,16980
	ctx.r5.u64 = ctx.r5.u64 | 16980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51098
	ctx.lr = 0x83A52B68;
	sub_83A51098(ctx, base);
loc_83A52B68:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a7a9b0
	ctx.lr = 0x83A52B74;
	sub_83A7A9B0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a7a8c0
	ctx.lr = 0x83A52B7C;
	sub_83A7A8C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a7b0c0
	ctx.lr = 0x83A52B84;
	sub_83A7B0C0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a52b98
	if (!cr6.eq) goto loc_83A52B98;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a7a9b8
	ctx.lr = 0x83A52B98;
	sub_83A7A9B8(ctx, base);
loc_83A52B98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4ecd8
	ctx.lr = 0x83A52BA0;
	sub_83A4ECD8(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a52c5c
	if (cr6.eq) goto loc_83A52C5C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a57b18
	ctx.lr = 0x83A52BB0;
	sub_83A57B18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a57ae8
	ctx.lr = 0x83A52BB8;
	sub_83A57AE8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a52c78
	if (cr6.eq) goto loc_83A52C78;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a52c78
	if (cr6.eq) goto loc_83A52C78;
	// lwz r11,4776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4776);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x83a52bdc
	if (!cr6.eq) goto loc_83A52BDC;
	// lwz r30,3548(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3548);
loc_83A52BDC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a57c18
	ctx.lr = 0x83A52BE4;
	sub_83A57C18(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// bge cr6,0x83a52bfc
	if (!cr6.lt) goto loc_83A52BFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a57be8
	ctx.lr = 0x83A52BF4;
	sub_83A57BE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x83a52c78
	if (cr6.gt) goto loc_83A52C78;
loc_83A52BFC:
	// lwz r11,4488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4488);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a52c14
	if (!cr6.gt) goto loc_83A52C14;
	// lwz r11,4500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4500);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a52c78
	if (!cr6.eq) goto loc_83A52C78;
loc_83A52C14:
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a52c5c
	if (cr6.eq) goto loc_83A52C5C;
	// bl 0x83a57b18
	ctx.lr = 0x83A52C24;
	sub_83A57B18(ctx, base);
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// bl 0x83a57ae8
	ctx.lr = 0x83A52C2C;
	sub_83A57AE8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a52c78
	if (cr6.eq) goto loc_83A52C78;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a52c78
	if (cr6.eq) goto loc_83A52C78;
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// bl 0x83a58048
	ctx.lr = 0x83A52C44;
	sub_83A58048(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// bge cr6,0x83a52c5c
	if (!cr6.lt) goto loc_83A52C5C;
	// lwz r3,4472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// bl 0x83a57be8
	ctx.lr = 0x83A52C54;
	sub_83A57BE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x83a52c78
	if (cr6.gt) goto loc_83A52C78;
loc_83A52C5C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4436);
	// bl 0x83a565f8
	ctx.lr = 0x83A52C68;
	sub_83A565F8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a52c78
	if (!cr6.eq) goto loc_83A52C78;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83A52C78:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A52C80"))) PPC_WEAK_FUNC(sub_83A52C80);
PPC_FUNC_IMPL(__imp__sub_83A52C80) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A52CA0;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a512c0
	ctx.lr = 0x83A52CA8;
	sub_83A512C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A52CB4;
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

__attribute__((alias("__imp__sub_83A52CD0"))) PPC_WEAK_FUNC(sub_83A52CD0);
PPC_FUNC_IMPL(__imp__sub_83A52CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A52CD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,20256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20256);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83a52cfc
	if (cr6.gt) goto loc_83A52CFC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-16116
	ctx.r4.s64 = ctx.r11.s64 + -16116;
	// b 0x83a531ac
	goto loc_83A531AC;
loc_83A52CFC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a531a4
	if (cr6.eq) goto loc_83A531A4;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83a531a4
	if (cr6.lt) goto loc_83A531A4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b68
	ctx.lr = 0x83A52D14;
	sub_83A77B68(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4928
	ctx.r4.s64 = 4928;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b78
	ctx.lr = 0x83A52D24;
	sub_83A77B78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r5,4928
	ctx.r5.s64 = 4928;
	// bne cr6,0x83a52d40
	if (!cr6.eq) goto loc_83A52D40;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-16164
	ctx.r4.s64 = ctx.r11.s64 + -16164;
	// b 0x83a531b0
	goto loc_83A531B0;
loc_83A52D40:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A52D4C;
	sub_831CDCF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// stw r30,4380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4380, ctx.r30.u32);
	// stw r30,4400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4400, ctx.r30.u32);
	// beq cr6,0x83a52d78
	if (cr6.eq) goto loc_83A52D78;
	// stw r27,4884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4884, ctx.r27.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,4888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4888, ctx.r11.u32);
	// b 0x83a52d7c
	goto loc_83A52D7C;
loc_83A52D78:
	// stw r30,4884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4884, ctx.r30.u32);
loc_83A52D7C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b78
	ctx.lr = 0x83A52D8C;
	sub_83A77B78(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a52db0
	if (!cr6.eq) goto loc_83A52DB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51e50
	ctx.lr = 0x83A52DA0;
	sub_83A51E50(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,72
	ctx.r5.s64 = 72;
	// addi r4,r11,-16208
	ctx.r4.s64 = ctx.r11.s64 + -16208;
	// b 0x83a531b0
	goto loc_83A531B0;
loc_83A52DB0:
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a7a730
	ctx.lr = 0x83A52DB8;
	sub_83A7A730(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a52dd8
	if (!cr6.eq) goto loc_83A52DD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51e50
	ctx.lr = 0x83A52DCC;
	sub_83A51E50(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-16264
	ctx.r4.s64 = ctx.r11.s64 + -16264;
	// b 0x83a531ac
	goto loc_83A531AC;
loc_83A52DD8:
	// li r28,10240
	ctx.r28.s64 = 10240;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r28,4392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4392, ctx.r28.u32);
	// li r4,10240
	ctx.r4.s64 = 10240;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b78
	ctx.lr = 0x83A52DF0;
	sub_83A77B78(ctx, base);
	// stw r3,4396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4396, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a52e14
	if (!cr6.eq) goto loc_83A52E14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51e50
	ctx.lr = 0x83A52E04;
	sub_83A51E50(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,10240
	ctx.r5.s64 = 10240;
	// addi r4,r11,-16312
	ctx.r4.s64 = ctx.r11.s64 + -16312;
	// b 0x83a531b0
	goto loc_83A531B0;
loc_83A52E14:
	// lwz r4,4392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4392);
	// bl 0x83a78aa0
	ctx.lr = 0x83A52E1C;
	sub_83A78AA0(ctx, base);
	// stw r3,4388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4388, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a52e3c
	if (!cr6.eq) goto loc_83A52E3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51e50
	ctx.lr = 0x83A52E30;
	sub_83A51E50(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-16360
	ctx.r4.s64 = ctx.r11.s64 + -16360;
	// b 0x83a531ac
	goto loc_83A531AC;
loc_83A52E3C:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r28,4384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4384, ctx.r28.u32);
	// li r26,64
	ctx.r26.s64 = 64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// lwz r10,4384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4384);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// bl 0x83a7b6e0
	ctx.lr = 0x83A52E74;
	sub_83A7B6E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b78
	ctx.lr = 0x83A52E88;
	sub_83A77B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a52eac
	if (!cr6.eq) goto loc_83A52EAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51e50
	ctx.lr = 0x83A52E9C;
	sub_83A51E50(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-16432
	ctx.r4.s64 = ctx.r11.s64 + -16432;
	// b 0x83a531b0
	goto loc_83A531B0;
loc_83A52EAC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83a7b710
	ctx.lr = 0x83A52EB8;
	sub_83A7B710(ctx, base);
	// stw r3,4344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4344, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a52ed8
	if (!cr6.eq) goto loc_83A52ED8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51e50
	ctx.lr = 0x83A52ECC;
	sub_83A51E50(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-16492
	ctx.r4.s64 = ctx.r11.s64 + -16492;
	// b 0x83a531ac
	goto loc_83A531AC;
loc_83A52ED8:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r11,4336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4336, ctx.r11.u32);
	// bl 0x83a7a780
	ctx.lr = 0x83A52EE8;
	sub_83A7A780(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b78
	ctx.lr = 0x83A52EFC;
	sub_83A77B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a52f20
	if (!cr6.eq) goto loc_83A52F20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51e50
	ctx.lr = 0x83A52F10;
	sub_83A51E50(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-16544
	ctx.r4.s64 = ctx.r11.s64 + -16544;
	// b 0x83a531b0
	goto loc_83A531B0;
loc_83A52F20:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4336);
	// bl 0x83a7aa88
	ctx.lr = 0x83A52F2C;
	sub_83A7AA88(ctx, base);
	// stw r3,4332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4332, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a52f4c
	if (!cr6.eq) goto loc_83A52F4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51e50
	ctx.lr = 0x83A52F40;
	sub_83A51E50(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-16588
	ctx.r4.s64 = ctx.r11.s64 + -16588;
	// b 0x83a531ac
	goto loc_83A531AC;
loc_83A52F4C:
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// bl 0x83a7b140
	ctx.lr = 0x83A52F6C;
	sub_83A7B140(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b78
	ctx.lr = 0x83A52F80;
	sub_83A77B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a52fa4
	if (!cr6.eq) goto loc_83A52FA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51e50
	ctx.lr = 0x83A52F94;
	sub_83A51E50(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// b 0x83a531b0
	goto loc_83A531B0;
loc_83A52FA4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83a7b168
	ctx.lr = 0x83A52FB0;
	sub_83A7B168(ctx, base);
	// stw r3,4348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4348, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a52fd0
	if (!cr6.eq) goto loc_83A52FD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51e50
	ctx.lr = 0x83A52FC4;
	sub_83A51E50(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-16712
	ctx.r4.s64 = ctx.r11.s64 + -16712;
	// b 0x83a531ac
	goto loc_83A531AC;
loc_83A52FD0:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// stw r30,4340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4340, ctx.r30.u32);
	// beq cr6,0x83a530c0
	if (cr6.eq) goto loc_83A530C0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a530c0
	if (!cr6.gt) goto loc_83A530C0;
	// lwz r11,4888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4888);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// stw r28,4480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4480, ctx.r28.u32);
	// stw r28,4412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4412, ctx.r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r8,r9,-19800
	ctx.r8.s64 = ctx.r9.s64 + -19800;
	// stw r11,4476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4476, ctx.r11.u32);
	// stw r11,4408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4408, ctx.r11.u32);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// stw r30,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r30.u32);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// bl 0x83a7b6e0
	ctx.lr = 0x83A53034;
	sub_83A7B6E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b78
	ctx.lr = 0x83A53048;
	sub_83A77B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5306c
	if (!cr6.eq) goto loc_83A5306C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51e50
	ctx.lr = 0x83A5305C;
	sub_83A51E50(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-16772
	ctx.r4.s64 = ctx.r11.s64 + -16772;
	// b 0x83a531b0
	goto loc_83A531B0;
loc_83A5306C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83a7b710
	ctx.lr = 0x83A53078;
	sub_83A7B710(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4352, ctx.r3.u32);
	// bne cr6,0x83a53098
	if (!cr6.eq) goto loc_83A53098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51e50
	ctx.lr = 0x83A5308C;
	sub_83A51E50(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-16816
	ctx.r4.s64 = ctx.r11.s64 + -16816;
	// b 0x83a531ac
	goto loc_83A531AC;
loc_83A53098:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7bd70
	ctx.lr = 0x83A530A8;
	sub_83A7BD70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4484, ctx.r11.u32);
	// bl 0x83a7bd80
	ctx.lr = 0x83A530C0;
	sub_83A7BD80(ctx, base);
loc_83A530C0:
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r30,4324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4324, ctx.r30.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,3492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3492, ctx.r11.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b78
	ctx.lr = 0x83A530DC;
	sub_83A77B78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,3496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3496, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x83a53104
	if (!cr6.eq) goto loc_83A53104;
	// bl 0x83a51e50
	ctx.lr = 0x83A530F4;
	sub_83A51E50(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r5,3492(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3492);
	// addi r4,r11,-16876
	ctx.r4.s64 = ctx.r11.s64 + -16876;
	// b 0x83a531b0
	goto loc_83A531B0;
loc_83A53104:
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// addi r9,r10,20352
	ctx.r9.s64 = ctx.r10.s64 + 20352;
	// lwz r10,20352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20352);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,36(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,44(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x83a4d2a0
	ctx.lr = 0x83A53180;
	sub_83A4D2A0(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,4440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4440, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r8,4444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4444, ctx.r8.u32);
	// bl 0x83102db0
	ctx.lr = 0x83A53198;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A531A4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-16944
	ctx.r4.s64 = ctx.r11.s64 + -16944;
loc_83A531AC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83A531B0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A531C0;
	sub_831EA308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A531CC"))) PPC_WEAK_FUNC(sub_83A531CC);
PPC_FUNC_IMPL(__imp__sub_83A531CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A531D0"))) PPC_WEAK_FUNC(sub_83A531D0);
PPC_FUNC_IMPL(__imp__sub_83A531D0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a53300
	if (cr6.eq) goto loc_83A53300;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83a53300
	if (cr6.eq) goto loc_83A53300;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x83a53300
	if (cr6.eq) goto loc_83A53300;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83a53300
	if (cr6.eq) goto loc_83A53300;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwz r9,4452(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4452);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// beq cr6,0x83a53270
	if (cr6.eq) goto loc_83A53270;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a53270
	if (cr6.eq) goto loc_83A53270;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a53270
	if (cr6.eq) goto loc_83A53270;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a53270
	if (cr6.eq) goto loc_83A53270;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83a53270
	if (cr6.eq) goto loc_83A53270;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83a53270
	if (cr6.eq) goto loc_83A53270;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r5,4460(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// bl 0x83a519d0
	ctx.lr = 0x83A53258;
	sub_83A519D0(ctx, base);
	// lwz r3,4452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4452);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a53270
	if (cr6.eq) goto loc_83A53270;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7bd80
	ctx.lr = 0x83A53270;
	sub_83A7BD80(ctx, base);
loc_83A53270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4ecd8
	ctx.lr = 0x83A53278;
	sub_83A4ECD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4eea0
	ctx.lr = 0x83A53280;
	sub_83A4EEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x83a532f4
	if (cr6.lt) goto loc_83A532F4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4f178
	ctx.lr = 0x83A5329C;
	sub_83A4F178(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a532f4
	if (cr6.eq) goto loc_83A532F4;
	// lwz r11,4324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4324);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a532d4
	if (!cr6.eq) goto loc_83A532D4;
	// bl 0x83a7bda0
	ctx.lr = 0x83A532BC;
	sub_83A7BDA0(ctx, base);
	// lwz r11,4372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4372);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r11,4764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4764, ctx.r11.u32);
	// stw r10,4768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4768, ctx.r10.u32);
	// b 0x83a532fc
	goto loc_83A532FC;
loc_83A532D4:
	// bl 0x83a7bda0
	ctx.lr = 0x83A532D8;
	sub_83A7BDA0(ctx, base);
	// lwz r11,4360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subf r11,r3,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r3.s64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,4764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4764, ctx.r11.u32);
	// stw r10,4768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4768, ctx.r10.u32);
	// b 0x83a532fc
	goto loc_83A532FC;
loc_83A532F4:
	// stw r30,4768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4768, ctx.r30.u32);
	// stw r30,4764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4764, ctx.r30.u32);
loc_83A532FC:
	// stw r30,4760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4760, ctx.r30.u32);
loc_83A53300:
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

__attribute__((alias("__imp__sub_83A53318"))) PPC_WEAK_FUNC(sub_83A53318);
PPC_FUNC_IMPL(__imp__sub_83A53318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A53320;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83a75cd8
	ctx.lr = 0x83A53338;
	sub_83A75CD8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a51ff0
	ctx.lr = 0x83A53348;
	sub_83A51FF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A53354;
	sub_83A75D58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A53360"))) PPC_WEAK_FUNC(sub_83A53360);
PPC_FUNC_IMPL(__imp__sub_83A53360) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x83a534ac
	if (cr6.gt) goto loc_83A534AC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83a534ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A534AC;
	// bdzf 4*cr6+eq,0x83a53464
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A53464;
	// bdzf 4*cr6+eq,0x83a534ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A534AC;
	// bdzf 4*cr6+eq,0x83a5346c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A5346C;
	// bdzf 4*cr6+eq,0x83a534ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A534AC;
	// bdzf 4*cr6+eq,0x83a534ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A534AC;
	// bne cr6,0x83a53498
	if (!cr6.eq) goto loc_83A53498;
	// lwz r11,3500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3500);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a533ec
	if (cr6.eq) goto loc_83A533EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-16052
	ctx.r4.s64 = ctx.r10.s64 + -16052;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A533D8;
	sub_831EA308(ctx, base);
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
loc_83A533EC:
	// lwz r11,4884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4884);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a53404
	if (!cr6.eq) goto loc_83A53404;
	// lwz r11,4888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4888);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x83a53438
	if (cr6.gt) goto loc_83A53438;
loc_83A53404:
	// lwz r11,4492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4492);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83a53438
	if (cr6.gt) goto loc_83A53438;
	// lwz r11,2424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2424);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a53424
	if (!cr6.gt) goto loc_83A53424;
	// lwz r4,4520(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4520);
	// b 0x83a53428
	goto loc_83A53428;
loc_83A53424:
	// lwz r4,4344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4344);
loc_83A53428:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4352(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// lwz r5,4348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4348);
	// bl 0x83a50dd8
	ctx.lr = 0x83A53438;
	sub_83A50DD8(ctx, base);
loc_83A53438:
	// lwz r3,4332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4332);
	// bl 0x83a7ac00
	ctx.lr = 0x83A53440;
	sub_83A7AC00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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
loc_83A53464:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x83a534a8
	goto loc_83A534A8;
loc_83A5346C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4456, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stb r9,4832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4832, ctx.r9.u8);
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
loc_83A53498:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,4832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4832, ctx.r11.u8);
	// stw r10,4456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4456, ctx.r10.u32);
loc_83A534A8:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83A534AC:
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

__attribute__((alias("__imp__sub_83A534C0"))) PPC_WEAK_FUNC(sub_83A534C0);
PPC_FUNC_IMPL(__imp__sub_83A534C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A534C8;
	__savegprlr_29(ctx, base);
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
	// beq cr6,0x83a53630
	if (cr6.eq) goto loc_83A53630;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83a53630
	if (cr6.eq) goto loc_83A53630;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x83a53630
	if (cr6.eq) goto loc_83A53630;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83a53630
	if (cr6.eq) goto loc_83A53630;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a53500
	if (cr6.eq) goto loc_83A53500;
	// bl 0x83a51110
	ctx.lr = 0x83A53500;
	sub_83A51110(ctx, base);
loc_83A53500:
	// lwz r30,4424(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a53528
	if (cr6.eq) goto loc_83A53528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a57b18
	ctx.lr = 0x83A53518;
	sub_83A57B18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a57ae8
	ctx.lr = 0x83A53520;
	sub_83A57AE8(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83a5354c
	if (cr6.eq) goto loc_83A5354C;
loc_83A53528:
	// lwz r30,4472(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a53550
	if (cr6.eq) goto loc_83A53550;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a57b18
	ctx.lr = 0x83A5353C;
	sub_83A57B18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a57ae8
	ctx.lr = 0x83A53544;
	sub_83A57AE8(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83a53550
	if (!cr6.eq) goto loc_83A53550;
loc_83A5354C:
	// stw r29,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r29.u32);
loc_83A53550:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83a535f0
	if (!cr6.eq) goto loc_83A535F0;
	// lwz r3,4424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r30,4472(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a53584
	if (cr6.eq) goto loc_83A53584;
	// bl 0x83a57ae8
	ctx.lr = 0x83A53570;
	sub_83A57AE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a53584
	if (cr6.eq) goto loc_83A53584;
	// stb r29,4832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4832, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A53584:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a535ac
	if (cr6.eq) goto loc_83A535AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a57ae8
	ctx.lr = 0x83A53594;
	sub_83A57AE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a535ac
	if (cr6.eq) goto loc_83A535AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,4832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4832, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A535AC:
	// lwz r11,4360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a535c8
	if (cr6.eq) goto loc_83A535C8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,4832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4832, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A535C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d538
	ctx.lr = 0x83A535D0;
	sub_83A4D538(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r10,4832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4832, ctx.r10.u8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A535F0:
	// lwz r3,4436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4436);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a53604
	if (cr6.eq) goto loc_83A53604;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a56398
	ctx.lr = 0x83A53604;
	sub_83A56398(ctx, base);
loc_83A53604:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83a53628
	if (cr6.eq) goto loc_83A53628;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x83a53630
	if (!cr6.eq) goto loc_83A53630;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a50f80
	ctx.lr = 0x83A53620;
	sub_83A50F80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A53628:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a528e8
	ctx.lr = 0x83A53630;
	sub_83A528E8(ctx, base);
loc_83A53630:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A53638"))) PPC_WEAK_FUNC(sub_83A53638);
PPC_FUNC_IMPL(__imp__sub_83A53638) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A53654;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a53360
	ctx.lr = 0x83A5365C;
	sub_83A53360(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A53664;
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

__attribute__((alias("__imp__sub_83A53678"))) PPC_WEAK_FUNC(sub_83A53678);
PPC_FUNC_IMPL(__imp__sub_83A53678) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A53694;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a534c0
	ctx.lr = 0x83A5369C;
	sub_83A534C0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A536A4;
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

__attribute__((alias("__imp__sub_83A536B8"))) PPC_WEAK_FUNC(sub_83A536B8);
PPC_FUNC_IMPL(__imp__sub_83A536B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A536C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4332(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4332);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x83a75cd8
	ctx.lr = 0x83A536D4;
	sub_83A75CD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a526c8
	ctx.lr = 0x83A536DC;
	sub_83A526C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83a75d58
	ctx.lr = 0x83A536E8;
	sub_83A75D58(ctx, base);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// beq cr6,0x83a536fc
	if (cr6.eq) goto loc_83A536FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A536FC:
	// lwz r11,4884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4884);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a53714
	if (!cr6.eq) goto loc_83A53714;
	// lwz r11,4888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4888);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x83a53728
	if (cr6.gt) goto loc_83A53728;
loc_83A53714:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4520(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4520);
	// lwz r5,4348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4348);
	// lwz r4,4344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4344);
	// bl 0x83a50dd8
	ctx.lr = 0x83A53728;
	sub_83A50DD8(ctx, base);
loc_83A53728:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7ac00
	ctx.lr = 0x83A53730;
	sub_83A7AC00(ctx, base);
	// lwz r3,4348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4348);
	// bl 0x83a7bd60
	ctx.lr = 0x83A53738;
	sub_83A7BD60(ctx, base);
	// lwz r11,4324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4324);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5376c
	if (!cr6.eq) goto loc_83A5376C;
	// lwz r11,4884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4884);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a53764
	if (!cr6.eq) goto loc_83A53764;
	// lwz r11,4888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4888);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a53764
	if (!cr6.gt) goto loc_83A53764;
	// lwz r4,4352(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// b 0x83a53770
	goto loc_83A53770;
loc_83A53764:
	// lwz r4,4520(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4520);
	// b 0x83a53770
	goto loc_83A53770;
loc_83A5376C:
	// lwz r4,4364(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
loc_83A53770:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7a980
	ctx.lr = 0x83A53778;
	sub_83A7A980(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4348);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7a988
	ctx.lr = 0x83A53790;
	sub_83A7A988(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7a9b0
	ctx.lr = 0x83A5379C;
	sub_83A7A9B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7a8c0
	ctx.lr = 0x83A537A4;
	sub_83A7A8C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7b0c0
	ctx.lr = 0x83A537AC;
	sub_83A7B0C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A537B8"))) PPC_WEAK_FUNC(sub_83A537B8);
PPC_FUNC_IMPL(__imp__sub_83A537B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A537C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lwz r11,4360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a538e0
	if (!cr6.eq) goto loc_83A538E0;
	// lwz r11,4512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4512);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83a53808
	if (cr6.lt) goto loc_83A53808;
	// beq cr6,0x83a53874
	if (cr6.eq) goto loc_83A53874;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x83a53888
	if (cr6.lt) goto loc_83A53888;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A53808:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a50b20
	ctx.lr = 0x83A53810;
	sub_83A50B20(ctx, base);
	// lwz r11,4876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4876);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a538dc
	if (cr6.eq) goto loc_83A538DC;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a538dc
	if (!cr6.eq) goto loc_83A538DC;
	// addi r4,r31,2352
	ctx.r4.s64 = ctx.r31.s64 + 2352;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,1120
	ctx.r5.s64 = 1120;
	// bl 0x831ce980
	ctx.lr = 0x83A53834;
	sub_831CE980(ctx, base);
	// lwz r11,4400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4400);
	// std r29,1176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1176, ctx.r29.u64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a5385c
	if (!cr6.eq) goto loc_83A5385C;
	// lwz r11,4784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4784);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a5385c
	if (!cr6.eq) goto loc_83A5385C;
	// stw r29,2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2424, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4e400
	ctx.lr = 0x83A5385C;
	sub_83A4E400(ctx, base);
loc_83A5385C:
	// lwz r11,2424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2424);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a538c4
	if (!cr6.gt) goto loc_83A538C4;
	// stw r30,4512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4512, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d630
	ctx.lr = 0x83A53874;
	sub_83A4D630(ctx, base);
loc_83A53874:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a536b8
	ctx.lr = 0x83A5387C;
	sub_83A536B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a538dc
	if (!cr6.eq) goto loc_83A538DC;
	// stw r28,4512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4512, ctx.r28.u32);
loc_83A53888:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4dfe0
	ctx.lr = 0x83A53890;
	sub_83A4DFE0(ctx, base);
	// lwz r11,4876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4876);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a538dc
	if (cr6.eq) goto loc_83A538DC;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a538dc
	if (!cr6.eq) goto loc_83A538DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d630
	ctx.lr = 0x83A538AC;
	sub_83A4D630(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r11,4512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4512, ctx.r11.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A538C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4d630
	ctx.lr = 0x83A538CC;
	sub_83A4D630(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,4512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4512, ctx.r11.u32);
loc_83A538DC:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_83A538E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A538E8"))) PPC_WEAK_FUNC(sub_83A538E8);
PPC_FUNC_IMPL(__imp__sub_83A538E8) {
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
	// bl 0x83a51110
	ctx.lr = 0x83A53900;
	sub_83A51110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a537b8
	ctx.lr = 0x83A53908;
	sub_83A537B8(ctx, base);
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

__attribute__((alias("__imp__sub_83A5391C"))) PPC_WEAK_FUNC(sub_83A5391C);
PPC_FUNC_IMPL(__imp__sub_83A5391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A53920"))) PPC_WEAK_FUNC(sub_83A53920);
PPC_FUNC_IMPL(__imp__sub_83A53920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A53928;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83a53980
	if (!cr6.eq) goto loc_83A53980;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83a53aec
	if (!cr6.eq) goto loc_83A53AEC;
	// lwz r11,1736(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1736);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a539b8
	if (!cr6.eq) goto loc_83A539B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1736, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A53980:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83a539b0
	if (!cr6.eq) goto loc_83A539B0;
	// ld r11,1800(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1800);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r10.u32);
	// std r9,1800(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1800, ctx.r9.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A539B0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83a53aec
	if (!cr6.eq) goto loc_83A53AEC;
loc_83A539B8:
	// ld r11,1760(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1760);
	// ld r10,1744(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1744);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpldi cr6,r11,3
	cr6.compare<uint64_t>(ctx.r11.u64, 3, xer);
	// bgt cr6,0x83a53a20
	if (cr6.gt) goto loc_83A53A20;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83a53a20
	if (cr6.gt) goto loc_83A53A20;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a53a2c
	if (cr6.eq) goto loc_83A53A2C;
	// bdz 0x83a539f0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A539F0;
	// bdz 0x83a53a00
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A53A00;
	// b 0x83a53a10
	goto loc_83A53A10;
loc_83A539F0:
	// ld r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1768);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,1768(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1768, ctx.r11.u64);
	// b 0x83a53a2c
	goto loc_83A53A2C;
loc_83A53A00:
	// ld r11,1776(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1776);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,1776(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1776, ctx.r11.u64);
	// b 0x83a53a2c
	goto loc_83A53A2C;
loc_83A53A10:
	// ld r11,1784(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1784);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,1784(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1784, ctx.r11.u64);
	// b 0x83a53a2c
	goto loc_83A53A2C;
loc_83A53A20:
	// ld r11,1792(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1792);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,1792(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1792, ctx.r11.u64);
loc_83A53A2C:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r11,-10992
	ctx.r6.s64 = ctx.r11.s64 + -10992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a49400
	ctx.lr = 0x83A53A44;
	sub_83A49400(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x831ce710
	ctx.lr = 0x83A53A4C;
	sub_831CE710(ctx, base);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A53A58;
	sub_831CE710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A53A64;
	sub_831CE710(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A53A70;
	sub_831CE710(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fdivs f12,f31,f30
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f11,1816(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f29,f13
	ctx.f10.f64 = double(float(ctx.f29.f64 / ctx.f13.f64));
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x83a53a9c
	if (!cr6.gt) goto loc_83A53A9C;
	// stfs f0,1816(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1816, temp.u32);
loc_83A53A9C:
	// lfs f13,1752(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	ctx.f13.f64 = double(temp.f32);
	// ld r30,1760(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1760);
	// fadds f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f31,1752(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1752, temp.u32);
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(ctx.r30.u64, 0, xer);
	// bne cr6,0x83a53ac8
	if (!cr6.eq) goto loc_83A53AC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,1820(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1820, temp.u32);
	// std r30,1744(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1744, ctx.r30.u64);
	// stw r11,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r11.u32);
	// b 0x83a53b20
	goto loc_83A53B20;
loc_83A53AC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce710
	ctx.lr = 0x83A53AD0;
	sub_831CE710(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// std r30,1744(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1744, ctx.r30.u64);
	// stw r11,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r11.u32);
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f13,1820(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1820, temp.u32);
	// b 0x83a53b20
	goto loc_83A53B20;
loc_83A53AEC:
	// lwz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a53b20
	if (!cr6.eq) goto loc_83A53B20;
	// ld r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1808);
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r5,r10,-10992
	ctx.r5.s64 = ctx.r10.s64 + -10992;
	// std r9,1808(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1808, ctx.r9.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a49340
	ctx.lr = 0x83A53B18;
	sub_83A49340(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r8.u32);
loc_83A53B20:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x83a53b30
	if (cr6.eq) goto loc_83A53B30;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r11.u32);
loc_83A53B30:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A53B44"))) PPC_WEAK_FUNC(sub_83A53B44);
PPC_FUNC_IMPL(__imp__sub_83A53B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A53B48"))) PPC_WEAK_FUNC(sub_83A53B48);
PPC_FUNC_IMPL(__imp__sub_83A53B48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r4,1708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1708, ctx.r4.u32);
	// stw r5,1712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1712, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A53B5C"))) PPC_WEAK_FUNC(sub_83A53B5C);
PPC_FUNC_IMPL(__imp__sub_83A53B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A53B60"))) PPC_WEAK_FUNC(sub_83A53B60);
PPC_FUNC_IMPL(__imp__sub_83A53B60) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A53B68;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce778
	ctx.lr = 0x83A53B70;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r3,40(r5)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r5.u32 + 40);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x831ce710
	ctx.lr = 0x83A53B8C;
	sub_831CE710(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// ld r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// lfs f31,-23580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A53BA4;
	sub_831CE710(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A53BB0;
	sub_831CE710(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A53BBC;
	sub_831CE710(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f28,f31
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fdivs f11,f30,f29
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f29.f64));
	// fdivs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x83a53bdc
	if (!cr6.gt) goto loc_83A53BDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A53BDC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7c4
	ctx.lr = 0x83A53BE8;
	__restfpr_28(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A53BEC"))) PPC_WEAK_FUNC(sub_83A53BEC);
PPC_FUNC_IMPL(__imp__sub_83A53BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A53BF0"))) PPC_WEAK_FUNC(sub_83A53BF0);
PPC_FUNC_IMPL(__imp__sub_83A53BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A53BF8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce774
	ctx.lr = 0x83A53C00;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a53c34
	if (!cr6.eq) goto loc_83A53C34;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c0
	ctx.lr = 0x83A53C30;
	__restfpr_27(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A53C34:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a53c44
	if (!cr6.eq) goto loc_83A53C44;
	// lfs f0,1884(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83a53c48
	goto loc_83A53C48;
loc_83A53C44:
	// lfs f0,1888(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1888);
	ctx.f0.f64 = double(temp.f32);
loc_83A53C48:
	// lfs f13,1896(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1896);
	ctx.f13.f64 = double(temp.f32);
	// ld r29,48(r4)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// lfs f12,1892(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1892);
	ctx.f12.f64 = double(temp.f32);
	// ld r3,40(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// fmuls f29,f13,f12
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// mulli r11,r29,600
	ctx.r11.s64 = ctx.r29.s64 * 600;
	// mulli r10,r28,600
	ctx.r10.s64 = ctx.r28.s64 * 600;
	// fadds f28,f29,f0
	ctx.f28.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// tdllei r11,0
	// divdu r11,r3,r11
	ctx.r11.u64 = PPCDivide(ctx.r3.u64, ctx.r11.u64);
	// tdllei r10,0
	// divdu r10,r30,r10
	ctx.r10.u64 = PPCDivide(ctx.r30.u64, ctx.r10.u64);
	// cmpldi cr6,r11,2
	cr6.compare<uint64_t>(ctx.r11.u64, 2, xer);
	// blt cr6,0x83a53cb0
	if (cr6.lt) goto loc_83A53CB0;
	// cmpldi cr6,r10,2
	cr6.compare<uint64_t>(ctx.r10.u64, 2, xer);
	// blt cr6,0x83a53cb0
	if (cr6.lt) goto loc_83A53CB0;
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ble cr6,0x83a53c98
	if (!cr6.gt) goto loc_83A53C98;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_83A53C98:
	// mulld r10,r11,r29
	ctx.r10.s64 = ctx.r11.s64 * ctx.r29.s64;
	// mulld r9,r11,r28
	ctx.r9.s64 = ctx.r11.s64 * ctx.r28.s64;
	// mulli r8,r10,600
	ctx.r8.s64 = ctx.r10.s64 * 600;
	// mulli r7,r9,600
	ctx.r7.s64 = ctx.r9.s64 * 600;
	// subf r3,r8,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r8.s64;
	// subf r30,r7,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r7.s64;
loc_83A53CB0:
	// bl 0x831ce710
	ctx.lr = 0x83A53CB4;
	sub_831CE710(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A53CC0;
	sub_831CE710(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f30,-23580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A53CDC;
	sub_831CE710(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A53CE8;
	sub_831CE710(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f27,f30
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// lwz r11,1880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1880);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// fdivs f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// beq cr6,0x83a53d74
	if (cr6.eq) goto loc_83A53D74;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// beq cr6,0x83a53d34
	if (cr6.eq) goto loc_83A53D34;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x83a53d24
	if (cr6.lt) goto loc_83A53D24;
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// b 0x83a53d90
	goto loc_83A53D90;
loc_83A53D24:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x83a53da0
	if (!cr6.gt) goto loc_83A53DA0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83a53d9c
	goto loc_83A53D9C;
loc_83A53D34:
	// fadds f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83a53d60
	if (cr6.lt) goto loc_83A53D60;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c0
	ctx.lr = 0x83A53D5C;
	__restfpr_27(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A53D60:
	// fneg f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83a53da0
	if (!cr6.gt) goto loc_83A53DA0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83a53d9c
	goto loc_83A53D9C;
loc_83A53D74:
	// fsubs f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83a53da0
	if (cr6.lt) goto loc_83A53DA0;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
loc_83A53D90:
	// li r27,1
	ctx.r27.s64 = 1;
	// bge cr6,0x83a53da0
	if (!cr6.lt) goto loc_83A53DA0;
	// li r11,2
	ctx.r11.s64 = 2;
loc_83A53D9C:
	// stw r11,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r11.u32);
loc_83A53DA0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c0
	ctx.lr = 0x83A53DB0;
	__restfpr_27(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A53DB4"))) PPC_WEAK_FUNC(sub_83A53DB4);
PPC_FUNC_IMPL(__imp__sub_83A53DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A53DB8"))) PPC_WEAK_FUNC(sub_83A53DB8);
PPC_FUNC_IMPL(__imp__sub_83A53DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A53DC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x83a4ea28
	ctx.lr = 0x83A53DE0;
	sub_83A4EA28(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a53e08
	if (cr6.eq) goto loc_83A53E08;
	// addi r3,r30,840
	ctx.r3.s64 = ctx.r30.s64 + 840;
	// li r5,176
	ctx.r5.s64 = 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A53DFC;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A53E08:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83a4ec68
	ctx.lr = 0x83A53E10;
	sub_83A4EC68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83a53e28
	if (!cr6.gt) goto loc_83A53E28;
	// li r29,3
	ctx.r29.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A53E28:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4760(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4760);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83a53e50
	if (!cr6.gt) goto loc_83A53E50;
	// lwz r10,4764(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4764);
	// lwz r9,4768(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4768);
	// subfc r8,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r7,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
loc_83A53E50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A53E5C"))) PPC_WEAK_FUNC(sub_83A53E5C);
PPC_FUNC_IMPL(__imp__sub_83A53E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A53E60"))) PPC_WEAK_FUNC(sub_83A53E60);
PPC_FUNC_IMPL(__imp__sub_83A53E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A53E68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x83a516a0
	ctx.lr = 0x83A53E8C;
	sub_83A516A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a53eb8
	if (!cr6.eq) goto loc_83A53EB8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a51758
	ctx.lr = 0x83A53EA8;
	sub_83A51758(ctx, base);
	// addi r3,r31,840
	ctx.r3.s64 = ctx.r31.s64 + 840;
	// li r5,176
	ctx.r5.s64 = 176;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A53EB8;
	sub_831CE980(ctx, base);
loc_83A53EB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A53EC4"))) PPC_WEAK_FUNC(sub_83A53EC4);
PPC_FUNC_IMPL(__imp__sub_83A53EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A53EC8"))) PPC_WEAK_FUNC(sub_83A53EC8);
PPC_FUNC_IMPL(__imp__sub_83A53EC8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83a4e9d8
	ctx.lr = 0x83A53EF8;
	sub_83A4E9D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4e9a0
	ctx.lr = 0x83A53F04;
	sub_83A4E9A0(ctx, base);
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

__attribute__((alias("__imp__sub_83A53F20"))) PPC_WEAK_FUNC(sub_83A53F20);
PPC_FUNC_IMPL(__imp__sub_83A53F20) {
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
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,-10992
	ctx.r6.s64 = ctx.r11.s64 + -10992;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a49400
	ctx.lr = 0x83A53F50;
	sub_83A49400(ctx, base);
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a53f7c
	if (cr6.eq) goto loc_83A53F7C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,1712(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A53F78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a53f98
	goto loc_83A53F98;
loc_83A53F7C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,1712(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x83a53b60
	ctx.lr = 0x83A53F98;
	sub_83A53B60(ctx, base);
loc_83A53F98:
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

__attribute__((alias("__imp__sub_83A53FB0"))) PPC_WEAK_FUNC(sub_83A53FB0);
PPC_FUNC_IMPL(__imp__sub_83A53FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A53FB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x83A53FD4;
	sub_831F8200(ctx, base);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// blt cr6,0x83a54014
	if (cr6.lt) goto loc_83A54014;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a53f20
	ctx.lr = 0x83A53FE8;
	sub_83A53F20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a53920
	ctx.lr = 0x83A54008;
	sub_83A53920(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A54014:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A54020"))) PPC_WEAK_FUNC(sub_83A54020);
PPC_FUNC_IMPL(__imp__sub_83A54020) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83a58128
	ctx.lr = 0x83A5403C;
	sub_83A58128(ctx, base);
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

__attribute__((alias("__imp__sub_83A54050"))) PPC_WEAK_FUNC(sub_83A54050);
PPC_FUNC_IMPL(__imp__sub_83A54050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A54058;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,-16796
	ctx.r10.s64 = ctx.r11.s64 + -16796;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A54080;
	sub_831CDCF0(ctx, base);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a77b68
	ctx.lr = 0x83A54090;
	sub_83A77B68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A54098"))) PPC_WEAK_FUNC(sub_83A54098);
PPC_FUNC_IMPL(__imp__sub_83A54098) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83102db0
	ctx.lr = 0x83A540B4;
	sub_83102DB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A540D0"))) PPC_WEAK_FUNC(sub_83A540D0);
PPC_FUNC_IMPL(__imp__sub_83A540D0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83a77b78
	sub_83A77B78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A540DC"))) PPC_WEAK_FUNC(sub_83A540DC);
PPC_FUNC_IMPL(__imp__sub_83A540DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

