#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8300E3D0"))) PPC_WEAK_FUNC(sub_8300E3D0);
PPC_FUNC_IMPL(__imp__sub_8300E3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8300E3D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8300E3E4;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300e534
	if (cr6.eq) goto loc_8300E534;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8300E404:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8300e404
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8300E404;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r8,196(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// clrlwi r10,r8,25
	ctx.r10.u64 = ctx.r8.u32 & 0x7F;
	// clrlwi r9,r9,25
	ctx.r9.u64 = ctx.r9.u32 & 0x7F;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82aaab50
	ctx.lr = 0x8300E440;
	sub_82AAAB50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,119
	ctx.r4.s64 = 119;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82aaccf8
	ctx.lr = 0x8300E450;
	sub_82AACCF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837653c0
	ctx.lr = 0x8300E45C;
	sub_837653C0(ctx, base);
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r3,92(r28)
	PPC_STORE_U32(ctx.r28.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8300e4b8
	if (cr6.eq) goto loc_8300E4B8;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a713f0
	ctx.lr = 0x8300E484;
	sub_82A713F0(ctx, base);
	// lbz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 112);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x8300e4b8
	if (!cr6.eq) goto loc_8300E4B8;
	// li r5,119
	ctx.r5.s64 = 119;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a713f0
	ctx.lr = 0x8300E4A4;
	sub_82A713F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfc r10,r30,r11
	xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_8300E4B8:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300e4d4
	if (cr6.eq) goto loc_8300E4D4;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83089c58
	ctx.lr = 0x8300E4D4;
	sub_83089C58(ctx, base);
loc_8300E4D4:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// bl 0x8308e078
	ctx.lr = 0x8300E4E0;
	sub_8308E078(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// bl 0x8308e078
	ctx.lr = 0x8300E4FC;
	sub_8308E078(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// lwz r4,92(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x83080460
	ctx.lr = 0x8300E520;
	sub_83080460(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83103100
	ctx.lr = 0x8300E534;
	sub_83103100(ctx, base);
loc_8300E534:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300E53C"))) PPC_WEAK_FUNC(sub_8300E53C);
PPC_FUNC_IMPL(__imp__sub_8300E53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300E540"))) PPC_WEAK_FUNC(sub_8300E540);
PPC_FUNC_IMPL(__imp__sub_8300E540) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8300e5e0
	if (cr6.eq) goto loc_8300E5E0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// beq cr6,0x8300e5a8
	if (cr6.eq) goto loc_8300E5A8;
	// addi r11,r11,-25384
	ctx.r11.s64 = ctx.r11.s64 + -25384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8300E57C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8300E588;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8300E590;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_8300E5A8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-25384
	ctx.r4.s64 = ctx.r11.s64 + -25384;
	// bl 0x837b0c10
	ctx.lr = 0x8300E5B4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8300E5C0;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8300E5C8;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_8300E5E0:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8300E5F8"))) PPC_WEAK_FUNC(sub_8300E5F8);
PPC_FUNC_IMPL(__imp__sub_8300E5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8300E600;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8300E60C;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300e80c
	if (cr6.eq) goto loc_8300E80C;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8300E628:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8300e628
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8300E628;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r8,196(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// clrlwi r10,r8,25
	ctx.r10.u64 = ctx.r8.u32 & 0x7F;
	// clrlwi r9,r9,25
	ctx.r9.u64 = ctx.r9.u32 & 0x7F;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82aaab50
	ctx.lr = 0x8300E668;
	sub_82AAAB50(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8300e690
	if (!cr6.eq) goto loc_8300E690;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8300E690;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8300E690:
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// lwz r28,272(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// bne cr6,0x8300e6e4
	if (!cr6.eq) goto loc_8300E6E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837653c0
	ctx.lr = 0x8300E6A8;
	sub_837653C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300e6d0
	if (cr6.eq) goto loc_8300E6D0;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8300E6C0:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8300e6c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8300E6C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u8);
loc_8300E6D0:
	// li r4,119
	ctx.r4.s64 = 119;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82aaccf8
	ctx.lr = 0x8300E6DC;
	sub_82AACCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8300e6e8
	goto loc_8300E6E8;
loc_8300E6E4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8300E6E8:
	// li r5,119
	ctx.r5.s64 = 119;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82aaf090
	ctx.lr = 0x8300E6F4;
	sub_82AAF090(ctx, base);
	// lbz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 112);
	// li r5,7
	ctx.r5.s64 = 7;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x8300e710
	if (!cr6.eq) goto loc_8300E710;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8300E710:
	// bl 0x8300e1a8
	ctx.lr = 0x8300E714;
	sub_8300E1A8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-25610
	ctx.r4.s64 = ctx.r10.s64 + -25610;
	// lwz r30,-17288(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17288);
	// bl 0x837b0c10
	ctx.lr = 0x8300E72C;
	sub_837B0C10(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8300e760
	if (cr6.eq) goto loc_8300E760;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// beq cr6,0x8300e760
	if (cr6.eq) goto loc_8300E760;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377dda0
	ctx.lr = 0x8300E74C;
	sub_8377DDA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300e760
	if (cr6.eq) goto loc_8300E760;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x8300E760;
	sub_8259D6C0(ctx, base);
loc_8300E760:
	// li r5,127
	ctx.r5.s64 = 127;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e238
	ctx.lr = 0x8300E770;
	sub_8300E238(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837772d8
	ctx.lr = 0x8300E784;
	sub_837772D8(ctx, base);
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300e7a0
	if (cr6.eq) goto loc_8300E7A0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x83089c58
	ctx.lr = 0x8300E7A0;
	sub_83089C58(ctx, base);
loc_8300E7A0:
	// lwz r4,92(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8300e7ec
	if (cr6.eq) goto loc_8300E7EC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83072708
	ctx.lr = 0x8300E7BC;
	sub_83072708(ctx, base);
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r3,-19904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8300e7d4
	if (!cr6.eq) goto loc_8300E7D4;
	// bl 0x837792e0
	ctx.lr = 0x8300E7D0;
	sub_837792E0(ctx, base);
	// lwz r3,-19904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19904);
loc_8300E7D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83779400
	ctx.lr = 0x8300E7E0;
	sub_83779400(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x8300E7EC;
	sub_82572FA0(ctx, base);
loc_8300E7EC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8300e80c
	if (cr6.lt) goto loc_8300E80C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8300E80C;
	sub_825952B8(ctx, base);
loc_8300E80C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300E814"))) PPC_WEAK_FUNC(sub_8300E814);
PPC_FUNC_IMPL(__imp__sub_8300E814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300E818"))) PPC_WEAK_FUNC(sub_8300E818);
PPC_FUNC_IMPL(__imp__sub_8300E818) {
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
	// lis r11,265
	ctx.r11.s64 = 17367040;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8300e888
	if (cr6.eq) goto loc_8300E888;
	// ble cr6,0x8300e86c
	if (!cr6.gt) goto loc_8300E86C;
	// lis r11,265
	ctx.r11.s64 = 17367040;
	// ori r9,r11,3
	ctx.r9.u64 = ctx.r11.u64 | 3;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8300e86c
	if (cr6.gt) goto loc_8300E86C;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x8300e888
	if (cr6.eq) goto loc_8300E888;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8300e894
	goto loc_8300E894;
loc_8300E86C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x8300E874;
	sub_83824D80(ctx, base);
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
loc_8300E888:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8300e5f8
	ctx.lr = 0x8300E890;
	sub_8300E5F8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8300E894:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8300E8B0"))) PPC_WEAK_FUNC(sub_8300E8B0);
PPC_FUNC_IMPL(__imp__sub_8300E8B0) {
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
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8300e8e8
	if (cr6.eq) goto loc_8300E8E8;
	// addi r4,r3,128
	ctx.r4.s64 = ctx.r3.s64 + 128;
	// bl 0x82e88020
	ctx.lr = 0x8300E8D0;
	sub_82E88020(ctx, base);
	// bl 0x8306abb0
	ctx.lr = 0x8300E8D4;
	sub_8306ABB0(ctx, base);
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
loc_8300E8E8:
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

__attribute__((alias("__imp__sub_8300E8FC"))) PPC_WEAK_FUNC(sub_8300E8FC);
PPC_FUNC_IMPL(__imp__sub_8300E8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300E900"))) PPC_WEAK_FUNC(sub_8300E900);
PPC_FUNC_IMPL(__imp__sub_8300E900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83763ef8
	ctx.lr = 0x8300E918;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300e970
	if (cr6.eq) goto loc_8300E970;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8300E930:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8300e930
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8300E930;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,168(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r7,200(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// lwz r6,196(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// bl 0x82aad610
	ctx.lr = 0x8300E950;
	sub_82AAD610(ctx, base);
	// li r4,119
	ctx.r4.s64 = 119;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82aaccf8
	ctx.lr = 0x8300E95C;
	sub_82AACCF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,119
	ctx.r5.s64 = 119;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a713f0
	ctx.lr = 0x8300E970;
	sub_82A713F0(ctx, base);
loc_8300E970:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E984"))) PPC_WEAK_FUNC(sub_8300E984);
PPC_FUNC_IMPL(__imp__sub_8300E984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300E988"))) PPC_WEAK_FUNC(sub_8300E988);
PPC_FUNC_IMPL(__imp__sub_8300E988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8300E990;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8300E99C;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300ea64
	if (cr6.eq) goto loc_8300EA64;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r30,168(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// lwz r29,196(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r28,200(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8300E9C4:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8300e9c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8300E9C4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aad610
	ctx.lr = 0x8300E9E8;
	sub_82AAD610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8300ea64
	if (cr6.eq) goto loc_8300EA64;
	// li r4,119
	ctx.r4.s64 = 119;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82aaccf8
	ctx.lr = 0x8300EA00;
	sub_82AACCF8(ctx, base);
	// lbz r11,160(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8300ea18
	if (cr6.eq) goto loc_8300EA18;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8300e900
	ctx.lr = 0x8300EA14;
	sub_8300E900(ctx, base);
	// b 0x8300ea28
	goto loc_8300EA28;
loc_8300EA18:
	// lwz r11,120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8300ea28
	if (cr6.eq) goto loc_8300EA28;
	// lwz r3,636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
loc_8300EA28:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,119
	ctx.r5.s64 = 119;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82aaf090
	ctx.lr = 0x8300EA38;
	sub_82AAF090(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83777480
	ctx.lr = 0x8300EA50;
	sub_83777480(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r27,104
	ctx.r4.s64 = ctx.r27.s64 + 104;
	// lwz r3,-19904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19904);
	// bl 0x83779400
	ctx.lr = 0x8300EA64;
	sub_83779400(ctx, base);
loc_8300EA64:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300EA6C"))) PPC_WEAK_FUNC(sub_8300EA6C);
PPC_FUNC_IMPL(__imp__sub_8300EA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300EA70"))) PPC_WEAK_FUNC(sub_8300EA70);
PPC_FUNC_IMPL(__imp__sub_8300EA70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8300EA78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r29,r3,112
	ctx.r29.s64 = ctx.r3.s64 + 112;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r9,r11,-24744
	ctx.r9.s64 = ctx.r11.s64 + -24744;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// beq cr6,0x8300eab8
	if (cr6.eq) goto loc_8300EAB8;
	// bl 0x835eb7f0
	ctx.lr = 0x8300EAAC;
	sub_835EB7F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8300EAB8;
	sub_82572FA0(ctx, base);
loc_8300EAB8:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r30,r31,128
	ctx.r30.s64 = ctx.r31.s64 + 128;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8300eadc
	if (cr6.lt) goto loc_8300EADC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8300EADC;
	sub_825952B8(ctx, base);
loc_8300EADC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x82572fa0
	ctx.lr = 0x8300EAFC;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82572fa0
	ctx.lr = 0x8300EB08;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x8300EB14;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f42278
	ctx.lr = 0x8300EB1C;
	sub_82F42278(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300EB24"))) PPC_WEAK_FUNC(sub_8300EB24);
PPC_FUNC_IMPL(__imp__sub_8300EB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300EB28"))) PPC_WEAK_FUNC(sub_8300EB28);
PPC_FUNC_IMPL(__imp__sub_8300EB28) {
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
	// bl 0x8300ea70
	ctx.lr = 0x8300EB48;
	sub_8300EA70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8300eb60
	if (cr6.eq) goto loc_8300EB60;
	// bl 0x82416268
	ctx.lr = 0x8300EB5C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8300EB60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EB78"))) PPC_WEAK_FUNC(sub_8300EB78);
PPC_FUNC_IMPL(__imp__sub_8300EB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8300EB80;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f42220
	ctx.lr = 0x8300EB8C;
	sub_82F42220(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24744
	ctx.r9.s64 = ctx.r11.s64 + -24744;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// std r30,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x8300EBC0;
	sub_82572FA0(ctx, base);
	// std r30,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r30.u64);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x8300EBD0;
	sub_82572FA0(ctx, base);
	// std r30,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r30.u64);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x8300EBE0;
	sub_82572FA0(ctx, base);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r6,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r6.u32);
	// addi r29,r11,-24876
	ctx.r29.s64 = ctx.r11.s64 + -24876;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r30.u8);
	// addi r4,r29,-254
	ctx.r4.s64 = ctx.r29.s64 + -254;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stb r30,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8300EC18;
	sub_8259CC28(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x8300EC1C;
	sub_8311E3D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300ec94
	if (cr6.eq) goto loc_8300EC94;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,25536(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25536);
	// bl 0x837b0c10
	ctx.lr = 0x8300EC38;
	sub_837B0C10(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8311d4d8
	ctx.lr = 0x8300EC48;
	sub_8311D4D8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8300ec68
	if (cr6.lt) goto loc_8300EC68;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8300EC68;
	sub_825952B8(ctx, base);
loc_8300EC68:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x8300ec94
	if (cr6.eq) goto loc_8300EC94;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x8300ec98
	if (!cr6.lt) goto loc_8300EC98;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8300EC94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8300EC98:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300ECA0"))) PPC_WEAK_FUNC(sub_8300ECA0);
PPC_FUNC_IMPL(__imp__sub_8300ECA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8300ECA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-19904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19904);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8300efb8
	if (cr6.eq) goto loc_8300EFB8;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x82572fa0
	ctx.lr = 0x8300ECCC;
	sub_82572FA0(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// bl 0x83763ef8
	ctx.lr = 0x8300ECD8;
	sub_83763EF8(ctx, base);
	// bl 0x837653c0
	ctx.lr = 0x8300ECDC;
	sub_837653C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8300ecf0
	if (!cr6.eq) goto loc_8300ECF0;
	// bl 0x83763ef8
	ctx.lr = 0x8300ECE8;
	sub_83763EF8(ctx, base);
	// bl 0x83767930
	ctx.lr = 0x8300ECEC;
	sub_83767930(ctx, base);
	// b 0x8300ecf8
	goto loc_8300ECF8;
loc_8300ECF0:
	// bl 0x83763ef8
	ctx.lr = 0x8300ECF4;
	sub_83763EF8(ctx, base);
	// bl 0x837653c0
	ctx.lr = 0x8300ECF8;
	sub_837653C0(ctx, base);
loc_8300ECF8:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r11,r11,25544
	ctx.r11.s64 = ctx.r11.s64 + 25544;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83071f20
	ctx.lr = 0x8300ED34;
	sub_83071F20(ctx, base);
	// lwz r11,-19904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19904);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8300ED4C;
	sub_82572FA0(ctx, base);
	// lwz r11,-19904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19904);
	// lwz r4,160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r5,164(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8300ed64
	if (!cr6.eq) goto loc_8300ED64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8300ED64:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8300ed70
	if (!cr6.eq) goto loc_8300ED70;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8300ED70:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8377ed30
	ctx.lr = 0x8300ED78;
	sub_8377ED30(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x835f0f80
	ctx.lr = 0x8300ED90;
	sub_835F0F80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r28,r31,104
	ctx.r28.s64 = ctx.r31.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x8300EDA4;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82572fa0
	ctx.lr = 0x8300EDB0;
	sub_82572FA0(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r29,r31,112
	ctx.r29.s64 = ctx.r31.s64 + 112;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300edd0
	if (cr6.eq) goto loc_8300EDD0;
	// bl 0x835eb7f0
	ctx.lr = 0x8300EDC4;
	sub_835EB7F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8300EDD0;
	sub_82572FA0(ctx, base);
loc_8300EDD0:
	// bl 0x83763ef8
	ctx.lr = 0x8300EDD4;
	sub_83763EF8(ctx, base);
	// bl 0x837653c0
	ctx.lr = 0x8300EDD8;
	sub_837653C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300ee10
	if (cr6.eq) goto loc_8300EE10;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x83072708
	ctx.lr = 0x8300EDF4;
	sub_83072708(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x8300EE04;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82572fa0
	ctx.lr = 0x8300EE10;
	sub_82572FA0(ctx, base);
loc_8300EE10:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x8300EE20;
	sub_82572FA0(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x83072a20
	ctx.lr = 0x8300EE30;
	sub_83072A20(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x8300EE3C;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8300e900
	ctx.lr = 0x8300EE44;
	sub_8300E900(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8300ee70
	if (cr6.eq) goto loc_8300EE70;
	// cmplwi cr6,r3,600
	cr6.compare<uint32_t>(ctx.r3.u32, 600, xer);
	// bge cr6,0x8300ee70
	if (!cr6.lt) goto loc_8300EE70;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r11.u8);
	// b 0x8300ee74
	goto loc_8300EE74;
loc_8300EE70:
	// stb r30,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r30.u8);
loc_8300EE74:
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x831cdcf0
	ctx.lr = 0x8300EE84;
	sub_831CDCF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-25129
	ctx.r4.s64 = ctx.r11.s64 + -25129;
	// bl 0x837b0c10
	ctx.lr = 0x8300EE94;
	sub_837B0C10(ctx, base);
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,59
	ctx.r4.u64 = ctx.r4.u64 | 59;
	// bl 0x82d042a8
	ctx.lr = 0x8300EEA4;
	sub_82D042A8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8300eeb8
	if (!cr6.lt) goto loc_8300EEB8;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_8300EEB8:
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x831d0b58
	ctx.lr = 0x8300EEC8;
	sub_831D0B58(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
	// bl 0x8308e078
	ctx.lr = 0x8300EED4;
	sub_8308E078(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stb r30,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r30.u8);
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x83072708
	ctx.lr = 0x8300EF08;
	sub_83072708(ctx, base);
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82572fa0
	ctx.lr = 0x8300EF18;
	sub_82572FA0(ctx, base);
	// li r6,176
	ctx.r6.s64 = 176;
	// li r5,320
	ctx.r5.s64 = 320;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8306ac18
	ctx.lr = 0x8300EF2C;
	sub_8306AC18(ctx, base);
	// lbz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// li r3,20
	ctx.r3.s64 = 20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8300ef60
	if (cr6.eq) goto loc_8300EF60;
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8307fe20
	ctx.lr = 0x8300EF58;
	sub_8307FE20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8300ef84
	goto loc_8300EF84;
loc_8300EF60:
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// bl 0x830830c8
	ctx.lr = 0x8300EF78;
	sub_830830C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8300EF84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8300EF8C;
	sub_83103100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82572fa0
	ctx.lr = 0x8300EF98;
	sub_82572FA0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8300efb8
	if (cr6.lt) goto loc_8300EFB8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8300EFB8;
	sub_825952B8(ctx, base);
loc_8300EFB8:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300EFC0"))) PPC_WEAK_FUNC(sub_8300EFC0);
PPC_FUNC_IMPL(__imp__sub_8300EFC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8300EFC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8300f014
	if (!cr6.eq) goto loc_8300F014;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r11,r11,-24836
	ctx.r11.s64 = ctx.r11.s64 + -24836;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x8259cc28
	ctx.lr = 0x8300F000;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8300e988
	ctx.lr = 0x8300F008;
	sub_8300E988(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8300F014:
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8300f044
	if (cr6.eq) goto loc_8300F044;
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8300f044
	if (cr6.eq) goto loc_8300F044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x8300F03C;
	sub_83824D80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8300F044:
	// bl 0x83763ef8
	ctx.lr = 0x8300F048;
	sub_83763EF8(ctx, base);
	// bl 0x837653c0
	ctx.lr = 0x8300F04C;
	sub_837653C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300f07c
	if (cr6.eq) goto loc_8300F07C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8300F06C;
	sub_82572FA0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83072a20
	ctx.lr = 0x8300F07C;
	sub_83072A20(ctx, base);
loc_8300F07C:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300f09c
	if (cr6.eq) goto loc_8300F09C;
	// bl 0x835eb7f0
	ctx.lr = 0x8300F090;
	sub_835EB7F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8300F09C;
	sub_82572FA0(ctx, base);
loc_8300F09C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-24836
	ctx.r4.s64 = ctx.r11.s64 + -24836;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x8300F0B0;
	sub_8259CC28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300F0BC"))) PPC_WEAK_FUNC(sub_8300F0BC);
PPC_FUNC_IMPL(__imp__sub_8300F0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F0C0"))) PPC_WEAK_FUNC(sub_8300F0C0);
PPC_FUNC_IMPL(__imp__sub_8300F0C0) {
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
	// blt cr6,0x8300f0e4
	if (cr6.lt) goto loc_8300F0E4;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8300f0e8
	goto loc_8300F0E8;
loc_8300F0E4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8300F0E8:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,168
	ctx.r4.s64 = 168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8300F100;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300f124
	if (cr6.eq) goto loc_8300F124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8300eb78
	ctx.lr = 0x8300F110;
	sub_8300EB78(ctx, base);
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
loc_8300F124:
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

__attribute__((alias("__imp__sub_8300F13C"))) PPC_WEAK_FUNC(sub_8300F13C);
PPC_FUNC_IMPL(__imp__sub_8300F13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F140"))) PPC_WEAK_FUNC(sub_8300F140);
PPC_FUNC_IMPL(__imp__sub_8300F140) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8300F170;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300f1a4
	if (cr6.eq) goto loc_8300F1A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8300F184;
	sub_82F42220(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24208
	ctx.r9.s64 = ctx.r11.s64 + -24208;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8300f1a8
	goto loc_8300F1A8;
loc_8300F1A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8300F1A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F1C0"))) PPC_WEAK_FUNC(sub_8300F1C0);
PPC_FUNC_IMPL(__imp__sub_8300F1C0) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24208
	ctx.r9.s64 = ctx.r11.s64 + -24208;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x8300F1F8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8300f210
	if (cr6.eq) goto loc_8300F210;
	// bl 0x82416268
	ctx.lr = 0x8300F20C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8300F210:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F228"))) PPC_WEAK_FUNC(sub_8300F228);
PPC_FUNC_IMPL(__imp__sub_8300F228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8300f238
	if (cr6.lt) goto loc_8300F238;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8300F238:
	// b 0x8300f140
	sub_8300F140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300F23C"))) PPC_WEAK_FUNC(sub_8300F23C);
PPC_FUNC_IMPL(__imp__sub_8300F23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F240"))) PPC_WEAK_FUNC(sub_8300F240);
PPC_FUNC_IMPL(__imp__sub_8300F240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8300F248;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// std r26,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x8300F264;
	sub_82572FA0(ctx, base);
	// lis r27,-31743
	ctx.r27.s64 = -2080309248;
	// lwz r11,-19904(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19904);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8300f280
	if (cr6.eq) goto loc_8300F280;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x82572fa0
	ctx.lr = 0x8300F280;
	sub_82572FA0(ctx, base);
loc_8300F280:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8300F288;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300f2b4
	if (cr6.eq) goto loc_8300F2B4;
	// bl 0x837653c0
	ctx.lr = 0x8300F298;
	sub_837653C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8300f2ac
	if (!cr6.eq) goto loc_8300F2AC;
	// bl 0x83767930
	ctx.lr = 0x8300F2A8;
	sub_83767930(ctx, base);
	// b 0x8300f2b0
	goto loc_8300F2B0;
loc_8300F2AC:
	// bl 0x837653c0
	ctx.lr = 0x8300F2B0;
	sub_837653C0(ctx, base);
loc_8300F2B0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8300F2B4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8300f3a8
	if (cr6.eq) goto loc_8300F3A8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8300f3a8
	if (cr6.eq) goto loc_8300F3A8;
	// bl 0x8311e3d0
	ctx.lr = 0x8300F2CC;
	sub_8311E3D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300f3a8
	if (cr6.eq) goto loc_8300F3A8;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,25744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25744);
	// bl 0x837b0c10
	ctx.lr = 0x8300F2E8;
	sub_837B0C10(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8311d4d8
	ctx.lr = 0x8300F2F8;
	sub_8311D4D8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8300F300;
	sub_8387E8E0(ctx, base);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x8300f3a8
	if (cr6.eq) goto loc_8300F3A8;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// bge cr6,0x8300f3a8
	if (!cr6.lt) goto loc_8300F3A8;
	// li r10,116
	ctx.r10.s64 = 116;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r28,r11,-24300
	ctx.r28.s64 = ctx.r11.s64 + -24300;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r30,r28,-32
	ctx.r30.s64 = ctx.r28.s64 + -32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x83071f20
	ctx.lr = 0x8300F348;
	sub_83071F20(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x835f0f80
	ctx.lr = 0x8300F360;
	sub_835F0F80(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-19904(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19904);
	// bl 0x83779400
	ctx.lr = 0x8300F370;
	sub_83779400(ctx, base);
	// std r26,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r26.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82572fa0
	ctx.lr = 0x8300F380;
	sub_82572FA0(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x83072a20
	ctx.lr = 0x8300F390;
	sub_83072A20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8300f3c0
	if (!cr6.eq) goto loc_8300F3C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x8300F3A8;
	sub_82572FA0(ctx, base);
loc_8300F3A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x8300F3B4;
	sub_82572FA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8300F3C0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x8300F3CC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e88020
	ctx.lr = 0x8300F3D8;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x8300F3E0;
	sub_8387E8E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x8300F3EC;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x8300F3F8;
	sub_82572FA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300F404"))) PPC_WEAK_FUNC(sub_8300F404);
PPC_FUNC_IMPL(__imp__sub_8300F404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F408"))) PPC_WEAK_FUNC(sub_8300F408);
PPC_FUNC_IMPL(__imp__sub_8300F408) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8300F438;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300f46c
	if (cr6.eq) goto loc_8300F46C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8300F44C;
	sub_82F42220(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23880
	ctx.r9.s64 = ctx.r11.s64 + -23880;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8300f470
	goto loc_8300F470;
loc_8300F46C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8300F470:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F488"))) PPC_WEAK_FUNC(sub_8300F488);
PPC_FUNC_IMPL(__imp__sub_8300F488) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23880
	ctx.r9.s64 = ctx.r11.s64 + -23880;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x8300F4C0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8300f4d8
	if (cr6.eq) goto loc_8300F4D8;
	// bl 0x82416268
	ctx.lr = 0x8300F4D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8300F4D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F4F0"))) PPC_WEAK_FUNC(sub_8300F4F0);
PPC_FUNC_IMPL(__imp__sub_8300F4F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8300f500
	if (cr6.lt) goto loc_8300F500;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8300F500:
	// b 0x8300f408
	sub_8300F408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300F504"))) PPC_WEAK_FUNC(sub_8300F504);
PPC_FUNC_IMPL(__imp__sub_8300F504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F508"))) PPC_WEAK_FUNC(sub_8300F508);
PPC_FUNC_IMPL(__imp__sub_8300F508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8300F510;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x8300F51C;
	sub_8311E3D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300f58c
	if (cr6.eq) goto loc_8300F58C;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,25884
	ctx.r31.s64 = ctx.r11.s64 + 25884;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x837b0c10
	ctx.lr = 0x8300F53C;
	sub_837B0C10(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8311d4d8
	ctx.lr = 0x8300F54C;
	sub_8311D4D8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8300f56c
	if (cr6.lt) goto loc_8300F56C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8300F56C;
	sub_825952B8(ctx, base);
loc_8300F56C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// bne cr6,0x8300f598
	if (!cr6.eq) goto loc_8300F598;
loc_8300F58C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8300F598:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x837b0c10
	ctx.lr = 0x8300F5A8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x8300F5B4;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8300f5d0
	if (cr6.lt) goto loc_8300F5D0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x8300F5D0;
	sub_825952B8(ctx, base);
loc_8300F5D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300F5DC"))) PPC_WEAK_FUNC(sub_8300F5DC);
PPC_FUNC_IMPL(__imp__sub_8300F5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F5E0"))) PPC_WEAK_FUNC(sub_8300F5E0);
PPC_FUNC_IMPL(__imp__sub_8300F5E0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8300F610;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300f644
	if (cr6.eq) goto loc_8300F644;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8300F624;
	sub_82F42220(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23544
	ctx.r9.s64 = ctx.r11.s64 + -23544;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8300f648
	goto loc_8300F648;
loc_8300F644:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8300F648:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F660"))) PPC_WEAK_FUNC(sub_8300F660);
PPC_FUNC_IMPL(__imp__sub_8300F660) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23544
	ctx.r9.s64 = ctx.r11.s64 + -23544;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x8300F698;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8300f6b0
	if (cr6.eq) goto loc_8300F6B0;
	// bl 0x82416268
	ctx.lr = 0x8300F6AC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8300F6B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F6C8"))) PPC_WEAK_FUNC(sub_8300F6C8);
PPC_FUNC_IMPL(__imp__sub_8300F6C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8300f6d8
	if (cr6.lt) goto loc_8300F6D8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8300F6D8:
	// b 0x8300f5e0
	sub_8300F5E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300F6DC"))) PPC_WEAK_FUNC(sub_8300F6DC);
PPC_FUNC_IMPL(__imp__sub_8300F6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F6E0"))) PPC_WEAK_FUNC(sub_8300F6E0);
PPC_FUNC_IMPL(__imp__sub_8300F6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8300F6E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x8300F6F4;
	sub_8311E3D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300f764
	if (cr6.eq) goto loc_8300F764;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,26020
	ctx.r31.s64 = ctx.r11.s64 + 26020;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x837b0c10
	ctx.lr = 0x8300F714;
	sub_837B0C10(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8311d4d8
	ctx.lr = 0x8300F724;
	sub_8311D4D8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8300f744
	if (cr6.lt) goto loc_8300F744;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8300F744;
	sub_825952B8(ctx, base);
loc_8300F744:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// bne cr6,0x8300f770
	if (!cr6.eq) goto loc_8300F770;
loc_8300F764:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8300F770:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x837b0c10
	ctx.lr = 0x8300F780;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x8300F78C;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8300f7a8
	if (cr6.lt) goto loc_8300F7A8;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x8300F7A8;
	sub_825952B8(ctx, base);
loc_8300F7A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300F7B4"))) PPC_WEAK_FUNC(sub_8300F7B4);
PPC_FUNC_IMPL(__imp__sub_8300F7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F7B8"))) PPC_WEAK_FUNC(sub_8300F7B8);
PPC_FUNC_IMPL(__imp__sub_8300F7B8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8300F7E8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300f81c
	if (cr6.eq) goto loc_8300F81C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8300F7FC;
	sub_82F42220(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22920
	ctx.r9.s64 = ctx.r11.s64 + -22920;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8300f820
	goto loc_8300F820;
loc_8300F81C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8300F820:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F838"))) PPC_WEAK_FUNC(sub_8300F838);
PPC_FUNC_IMPL(__imp__sub_8300F838) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22920
	ctx.r9.s64 = ctx.r11.s64 + -22920;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x8300F870;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8300f888
	if (cr6.eq) goto loc_8300F888;
	// bl 0x82416268
	ctx.lr = 0x8300F884;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8300F888:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F8A0"))) PPC_WEAK_FUNC(sub_8300F8A0);
PPC_FUNC_IMPL(__imp__sub_8300F8A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8300f8b0
	if (cr6.lt) goto loc_8300F8B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8300F8B0:
	// b 0x8300f7b8
	sub_8300F7B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300F8B4"))) PPC_WEAK_FUNC(sub_8300F8B4);
PPC_FUNC_IMPL(__imp__sub_8300F8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300F8B8"))) PPC_WEAK_FUNC(sub_8300F8B8);
PPC_FUNC_IMPL(__imp__sub_8300F8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8300F8C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x8300F8D4;
	sub_8311E3D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r24,2
	ctx.r24.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300f990
	if (cr6.eq) goto loc_8300F990;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r30,r11,26172
	ctx.r30.s64 = ctx.r11.s64 + 26172;
loc_8300F8F4:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_8300F908:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8300f908
	if (!cr6.eq) goto loc_8300F908;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8300F92C;
	sub_8259CC28(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8311d4d8
	ctx.lr = 0x8300F93C;
	sub_8311D4D8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8300f958
	if (cr6.lt) goto loc_8300F958;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8300F958;
	sub_825952B8(ctx, base);
loc_8300F958:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bne cr6,0x8300f984
	if (!cr6.eq) goto loc_8300F984;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// blt cr6,0x8300f8f4
	if (cr6.lt) goto loc_8300F8F4;
	// b 0x8300f990
	goto loc_8300F990;
loc_8300F984:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// bge cr6,0x8300fa08
	if (!cr6.lt) goto loc_8300FA08;
loc_8300F990:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r9,r11,26160
	ctx.r9.s64 = ctx.r11.s64 + 26160;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8300F9B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8300f9b0
	if (!cr6.eq) goto loc_8300F9B0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8300F9D4;
	sub_8259CC28(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e88020
	ctx.lr = 0x8300F9E0;
	sub_82E88020(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8300fa6c
	if (cr6.lt) goto loc_8300FA6C;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8300F9FC;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8300FA08:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// lwz r4,26160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26160);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8300FA20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8300fa20
	if (!cr6.eq) goto loc_8300FA20;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8300FA44;
	sub_8259CC28(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e88020
	ctx.lr = 0x8300FA50;
	sub_82E88020(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8300fa6c
	if (cr6.lt) goto loc_8300FA6C;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8300FA6C;
	sub_825952B8(ctx, base);
loc_8300FA6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300FA78"))) PPC_WEAK_FUNC(sub_8300FA78);
PPC_FUNC_IMPL(__imp__sub_8300FA78) {
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
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8300fac4
	if (!cr6.eq) goto loc_8300FAC4;
	// bl 0x830ff290
	ctx.lr = 0x8300FAAC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8300FAB0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,23
	cr6.compare<uint32_t>(ctx.r3.u32, 23, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8300fac0
	if (cr6.eq) goto loc_8300FAC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8300FAC0:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8300FAC4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x8300FAD0;
	sub_83824D80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FAE8"))) PPC_WEAK_FUNC(sub_8300FAE8);
PPC_FUNC_IMPL(__imp__sub_8300FAE8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8300FB18;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300fb54
	if (cr6.eq) goto loc_8300FB54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8300FB2C;
	sub_82F42220(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22320
	ctx.r9.s64 = ctx.r11.s64 + -22320;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// b 0x8300fb58
	goto loc_8300FB58;
loc_8300FB54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8300FB58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FB70"))) PPC_WEAK_FUNC(sub_8300FB70);
PPC_FUNC_IMPL(__imp__sub_8300FB70) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22320
	ctx.r9.s64 = ctx.r11.s64 + -22320;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x8300FBA8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8300fbc0
	if (cr6.eq) goto loc_8300FBC0;
	// bl 0x82416268
	ctx.lr = 0x8300FBBC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8300FBC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FBD8"))) PPC_WEAK_FUNC(sub_8300FBD8);
PPC_FUNC_IMPL(__imp__sub_8300FBD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8300fbe8
	if (cr6.lt) goto loc_8300FBE8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8300FBE8:
	// b 0x8300fae8
	sub_8300FAE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300FBEC"))) PPC_WEAK_FUNC(sub_8300FBEC);
PPC_FUNC_IMPL(__imp__sub_8300FBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8300FBF0"))) PPC_WEAK_FUNC(sub_8300FBF0);
PPC_FUNC_IMPL(__imp__sub_8300FBF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8300FBF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// bl 0x830ff290
	ctx.lr = 0x8300FC0C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8300FC10;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,23
	cr6.compare<uint32_t>(ctx.r3.u32, 23, xer);
	// bne cr6,0x8300fc38
	if (!cr6.eq) goto loc_8300FC38;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8300FC1C:
	// bl 0x83763ef8
	ctx.lr = 0x8300FC20;
	sub_83763EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8300fd68
	if (!cr6.eq) goto loc_8300FD68;
loc_8300FC2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8300FC38:
	// bl 0x8311e3d0
	ctx.lr = 0x8300FC3C;
	sub_8311E3D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300fc1c
	if (cr6.eq) goto loc_8300FC1C;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r11,r11,26328
	ctx.r11.s64 = ctx.r11.s64 + 26328;
	// li r31,15
	ctx.r31.s64 = 15;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// li r26,2
	ctx.r26.s64 = 2;
loc_8300FC60:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r28.u8);
loc_8300FC74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8300fc74
	if (!cr6.eq) goto loc_8300FC74;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8300FC98;
	sub_8259CC28(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8311d4d8
	ctx.lr = 0x8300FCA8;
	sub_8311D4D8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8300fcc4
	if (cr6.lt) goto loc_8300FCC4;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8300FCC4;
	sub_825952B8(ctx, base);
loc_8300FCC4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r28.u8);
	// bne cr6,0x8300fcf0
	if (!cr6.eq) goto loc_8300FCF0;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, xer);
	// blt cr6,0x8300fc60
	if (cr6.lt) goto loc_8300FC60;
	// b 0x8300fc1c
	goto loc_8300FC1C;
loc_8300FCF0:
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r28.u32);
	// addi r8,r10,26312
	ctx.r8.s64 = ctx.r10.s64 + 26312;
	// stb r28,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r28.u8);
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8300FD10:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8300fd10
	if (!cr6.eq) goto loc_8300FD10;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8300FD34;
	sub_8259CC28(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e88020
	ctx.lr = 0x8300FD40;
	sub_82E88020(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8301012c
	if (cr6.lt) goto loc_8301012C;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x8300FD5C;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8300FD68:
	// lis r31,-31756
	ctx.r31.s64 = -2081161216;
	// lwz r11,-24520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24520);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8300fc2c
	if (cr6.eq) goto loc_8300FC2C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83763f08
	ctx.lr = 0x8300FD80;
	sub_83763F08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8300fc2c
	if (cr6.eq) goto loc_8300FC2C;
	// lwz r11,-24520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24520);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// ld r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 76);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// ld r10,160(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 160);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bl 0x831cdcf0
	ctx.lr = 0x8300FDB0;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x831cdcf0
	ctx.lr = 0x8300FDC0;
	sub_831CDCF0(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x8300FDC4;
	sub_830FF290(ctx, base);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// cmplwi cr6,r9,13
	cr6.compare<uint32_t>(ctx.r9.u32, 13, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x8300fde4
	if (!cr6.eq) goto loc_8300FDE4;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x83775138
	ctx.lr = 0x8300FDE0;
	sub_83775138(ctx, base);
	// b 0x8300fe24
	goto loc_8300FE24;
loc_8300FDE4:
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x83775138
	ctx.lr = 0x8300FDEC;
	sub_83775138(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x8300FDF0;
	sub_831156E8(ctx, base);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// bl 0x8311d290
	ctx.lr = 0x8300FDFC;
	sub_8311D290(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8300fe18
	if (cr6.eq) goto loc_8300FE18;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x8300FE14;
	sub_831CE980(ctx, base);
	// b 0x8300fe24
	goto loc_8300FE24;
loc_8300FE18:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x8373fae8
	ctx.lr = 0x8300FE24;
	sub_8373FAE8(ctx, base);
loc_8300FE24:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,548
	ctx.r3.s64 = ctx.r1.s64 + 548;
	// bl 0x831cdcf0
	ctx.lr = 0x8300FE34;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x831cdcf0
	ctx.lr = 0x8300FE44;
	sub_831CDCF0(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x83775138
	ctx.lr = 0x8300FE54;
	sub_83775138(ctx, base);
	// lwz r11,364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8300feac
	if (!cr6.eq) goto loc_8300FEAC;
	// lwz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8300feac
	if (!cr6.eq) goto loc_8300FEAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x837b7300
	ctx.lr = 0x8300FE7C;
	sub_837B7300(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8300feac
	if (cr6.eq) goto loc_8300FEAC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x82a76558
	ctx.lr = 0x8300FE9C;
	sub_82A76558(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825a10c0
	ctx.lr = 0x8300FEAC;
	sub_825A10C0(ctx, base);
loc_8300FEAC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82a78580
	ctx.lr = 0x8300FEBC;
	sub_82A78580(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x825a10c0
	ctx.lr = 0x8300FECC;
	sub_825A10C0(ctx, base);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82a72110
	ctx.lr = 0x8300FEE0;
	sub_82A72110(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82a78580
	ctx.lr = 0x8300FEF0;
	sub_82A78580(ctx, base);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x82a76558
	ctx.lr = 0x8300FF04;
	sub_82A76558(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8300ff3c
	if (!cr6.eq) goto loc_8300FF3C;
	// lwz r31,108(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x8378cba8
	ctx.lr = 0x8300FF18;
	sub_8378CBA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8378cd88
	ctx.lr = 0x8300FF20;
	sub_8378CD88(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8300ff3c
	if (cr6.eq) goto loc_8300FF3C;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x825a10c0
	ctx.lr = 0x8300FF3C;
	sub_825A10C0(ctx, base);
loc_8300FF3C:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82a72110
	ctx.lr = 0x8300FF4C;
	sub_82A72110(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8300ffa4
	if (!cr6.eq) goto loc_8300FFA4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x82a76558
	ctx.lr = 0x8300FF6C;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8300ffa4
	if (!cr6.eq) goto loc_8300FFA4;
	// lwz r31,108(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x8378cba8
	ctx.lr = 0x8300FF80;
	sub_8378CBA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8378cdf8
	ctx.lr = 0x8300FF88;
	sub_8378CDF8(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8300ffa4
	if (cr6.eq) goto loc_8300FFA4;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x825a10c0
	ctx.lr = 0x8300FFA4;
	sub_825A10C0(ctx, base);
loc_8300FFA4:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82a72110
	ctx.lr = 0x8300FFB8;
	sub_82A72110(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x83767ef8
	ctx.lr = 0x8300FFC4;
	sub_83767EF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// beq cr6,0x83010020
	if (cr6.eq) goto loc_83010020;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// beq cr6,0x8300fff0
	if (cr6.eq) goto loc_8300FFF0;
	// addi r10,r11,26312
	ctx.r10.s64 = ctx.r11.s64 + 26312;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8300fff4
	goto loc_8300FFF4;
loc_8300FFF0:
	// lwz r4,26312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26312);
loc_8300FFF4:
	// bl 0x837b0c10
	ctx.lr = 0x8300FFF8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e88020
	ctx.lr = 0x83010004;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8301000C;
	sub_8387E8E0(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82a78580
	ctx.lr = 0x8301001C;
	sub_82A78580(ctx, base);
	// b 0x83010054
	goto loc_83010054;
loc_83010020:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// beq cr6,0x83010038
	if (cr6.eq) goto loc_83010038;
	// addi r10,r11,26312
	ctx.r10.s64 = ctx.r11.s64 + 26312;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8301003c
	goto loc_8301003C;
loc_83010038:
	// lwz r4,26312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26312);
loc_8301003C:
	// bl 0x837b0c10
	ctx.lr = 0x83010040;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301004C;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83010054;
	sub_8387E8E0(ctx, base);
loc_83010054:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,13
	ctx.r5.s64 = 13;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82a72110
	ctx.lr = 0x83010070;
	sub_82A72110(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837782c0
	ctx.lr = 0x8301007C;
	sub_837782C0(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82a78580
	ctx.lr = 0x8301008C;
	sub_82A78580(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x837726f8
	ctx.lr = 0x83010098;
	sub_837726F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830100e0
	if (cr6.eq) goto loc_830100E0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83778070
	ctx.lr = 0x830100B0;
	sub_83778070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830100e0
	if (cr6.eq) goto loc_830100E0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83778148
	ctx.lr = 0x830100CC;
	sub_83778148(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82a78580
	ctx.lr = 0x830100DC;
	sub_82A78580(ctx, base);
	// b 0x830100e4
	goto loc_830100E4;
loc_830100E0:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_830100E4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83010100
	if (!cr6.eq) goto loc_83010100;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82a78580
	ctx.lr = 0x83010100;
	sub_82A78580(ctx, base);
loc_83010100:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8377b3a8
	ctx.lr = 0x8301010C;
	sub_8377B3A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x8377c9c8
	ctx.lr = 0x83010118;
	sub_8377C9C8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83777d30
	ctx.lr = 0x8301012C;
	sub_83777D30(ctx, base);
loc_8301012C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010138"))) PPC_WEAK_FUNC(sub_83010138);
PPC_FUNC_IMPL(__imp__sub_83010138) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83010168;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8301019c
	if (cr6.eq) goto loc_8301019C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8301017C;
	sub_82F42220(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21768
	ctx.r9.s64 = ctx.r11.s64 + -21768;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x830101a0
	goto loc_830101A0;
loc_8301019C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830101A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830101B8"))) PPC_WEAK_FUNC(sub_830101B8);
PPC_FUNC_IMPL(__imp__sub_830101B8) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21768
	ctx.r9.s64 = ctx.r11.s64 + -21768;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x830101F0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83010208
	if (cr6.eq) goto loc_83010208;
	// bl 0x82416268
	ctx.lr = 0x83010204;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83010208:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010220"))) PPC_WEAK_FUNC(sub_83010220);
PPC_FUNC_IMPL(__imp__sub_83010220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83010230
	if (cr6.lt) goto loc_83010230;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83010230:
	// b 0x83010138
	sub_83010138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010234"))) PPC_WEAK_FUNC(sub_83010234);
PPC_FUNC_IMPL(__imp__sub_83010234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010238"))) PPC_WEAK_FUNC(sub_83010238);
PPC_FUNC_IMPL(__imp__sub_83010238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83010240;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x8301024C;
	sub_8311E3D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830102fc
	if (cr6.eq) goto loc_830102FC;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r30,r11,26488
	ctx.r30.s64 = ctx.r11.s64 + 26488;
loc_83010270:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_83010284:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83010284
	if (!cr6.eq) goto loc_83010284;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830102A8;
	sub_8259CC28(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8311d4d8
	ctx.lr = 0x830102B8;
	sub_8311D4D8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830102d4
	if (cr6.lt) goto loc_830102D4;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x830102D4;
	sub_825952B8(ctx, base);
loc_830102D4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bne cr6,0x8301036c
	if (!cr6.eq) goto loc_8301036C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// blt cr6,0x83010270
	if (cr6.lt) goto loc_83010270;
loc_830102FC:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// lwz r4,26480(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26480);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83010314:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83010314
	if (!cr6.eq) goto loc_83010314;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83010338;
	sub_8259CC28(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88020
	ctx.lr = 0x83010344;
	sub_82E88020(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83010360
	if (cr6.lt) goto loc_83010360;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x83010360;
	sub_825952B8(ctx, base);
loc_83010360:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8301036C:
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// beq cr6,0x830102fc
	if (cr6.eq) goto loc_830102FC;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r9,r11,26480
	ctx.r9.s64 = ctx.r11.s64 + 26480;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83010394:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83010394
	if (!cr6.eq) goto loc_83010394;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830103B8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88020
	ctx.lr = 0x830103C4;
	sub_82E88020(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83010360
	if (cr6.lt) goto loc_83010360;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x830103E0;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830103EC"))) PPC_WEAK_FUNC(sub_830103EC);
PPC_FUNC_IMPL(__imp__sub_830103EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830103F0"))) PPC_WEAK_FUNC(sub_830103F0);
PPC_FUNC_IMPL(__imp__sub_830103F0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83010420;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83010454
	if (cr6.eq) goto loc_83010454;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x83010434;
	sub_82F42220(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21288
	ctx.r9.s64 = ctx.r11.s64 + -21288;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83010458
	goto loc_83010458;
loc_83010454:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83010458:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010470"))) PPC_WEAK_FUNC(sub_83010470);
PPC_FUNC_IMPL(__imp__sub_83010470) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21288
	ctx.r9.s64 = ctx.r11.s64 + -21288;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x830104A8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830104c0
	if (cr6.eq) goto loc_830104C0;
	// bl 0x82416268
	ctx.lr = 0x830104BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830104C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830104D8"))) PPC_WEAK_FUNC(sub_830104D8);
PPC_FUNC_IMPL(__imp__sub_830104D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830104e8
	if (cr6.lt) goto loc_830104E8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830104E8:
	// b 0x830103f0
	sub_830103F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830104EC"))) PPC_WEAK_FUNC(sub_830104EC);
PPC_FUNC_IMPL(__imp__sub_830104EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830104F0"))) PPC_WEAK_FUNC(sub_830104F0);
PPC_FUNC_IMPL(__imp__sub_830104F0) {
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
	// bl 0x83763ef8
	ctx.lr = 0x8301050C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83010568
	if (cr6.eq) goto loc_83010568;
	// bl 0x83763ef8
	ctx.lr = 0x83010518;
	sub_83763EF8(ctx, base);
	// ld r30,160(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// bl 0x83763ef8
	ctx.lr = 0x83010520;
	sub_83763EF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83767ef8
	ctx.lr = 0x83010528;
	sub_83767EF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// beq cr6,0x83010548
	if (cr6.eq) goto loc_83010548;
	// addi r10,r11,26600
	ctx.r10.s64 = ctx.r11.s64 + 26600;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8301054c
	goto loc_8301054C;
loc_83010548:
	// lwz r4,26600(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26600);
loc_8301054C:
	// bl 0x837b0c10
	ctx.lr = 0x83010550;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301055C;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83010564;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83010568:
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

__attribute__((alias("__imp__sub_83010580"))) PPC_WEAK_FUNC(sub_83010580);
PPC_FUNC_IMPL(__imp__sub_83010580) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830105B0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830105e4
	if (cr6.eq) goto loc_830105E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x830105C4;
	sub_82F42220(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20664
	ctx.r9.s64 = ctx.r11.s64 + -20664;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x830105e8
	goto loc_830105E8;
loc_830105E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830105E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010600"))) PPC_WEAK_FUNC(sub_83010600);
PPC_FUNC_IMPL(__imp__sub_83010600) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20664
	ctx.r9.s64 = ctx.r11.s64 + -20664;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x83010638;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83010650
	if (cr6.eq) goto loc_83010650;
	// bl 0x82416268
	ctx.lr = 0x8301064C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83010650:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010668"))) PPC_WEAK_FUNC(sub_83010668);
PPC_FUNC_IMPL(__imp__sub_83010668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83010678
	if (cr6.lt) goto loc_83010678;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83010678:
	// b 0x83010580
	sub_83010580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301067C"))) PPC_WEAK_FUNC(sub_8301067C);
PPC_FUNC_IMPL(__imp__sub_8301067C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010680"))) PPC_WEAK_FUNC(sub_83010680);
PPC_FUNC_IMPL(__imp__sub_83010680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83010688;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// bl 0x8311e3d0
	ctx.lr = 0x8301069C;
	sub_8311E3D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r24,2
	ctx.r24.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83010758
	if (cr6.eq) goto loc_83010758;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r30,r11,26756
	ctx.r30.s64 = ctx.r11.s64 + 26756;
loc_830106BC:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_830106D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830106d0
	if (!cr6.eq) goto loc_830106D0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830106F4;
	sub_8259CC28(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8311d4d8
	ctx.lr = 0x83010704;
	sub_8311D4D8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83010720
	if (cr6.lt) goto loc_83010720;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x83010720;
	sub_825952B8(ctx, base);
loc_83010720:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bne cr6,0x8301074c
	if (!cr6.eq) goto loc_8301074C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// blt cr6,0x830106bc
	if (cr6.lt) goto loc_830106BC;
	// b 0x83010758
	goto loc_83010758;
loc_8301074C:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// bge cr6,0x830107d0
	if (!cr6.lt) goto loc_830107D0;
loc_83010758:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r9,r11,26744
	ctx.r9.s64 = ctx.r11.s64 + 26744;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83010778:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83010778
	if (!cr6.eq) goto loc_83010778;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8301079C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e88020
	ctx.lr = 0x830107A8;
	sub_82E88020(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83010834
	if (cr6.lt) goto loc_83010834;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x830107C4;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830107D0:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// lwz r4,26744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26744);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830107E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830107e8
	if (!cr6.eq) goto loc_830107E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8301080C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e88020
	ctx.lr = 0x83010818;
	sub_82E88020(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83010834
	if (cr6.lt) goto loc_83010834;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x83010834;
	sub_825952B8(ctx, base);
loc_83010834:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010840"))) PPC_WEAK_FUNC(sub_83010840);
PPC_FUNC_IMPL(__imp__sub_83010840) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83010870;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830108a4
	if (cr6.eq) goto loc_830108A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x83010884;
	sub_82F42220(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20072
	ctx.r9.s64 = ctx.r11.s64 + -20072;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x830108a8
	goto loc_830108A8;
loc_830108A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830108A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830108C0"))) PPC_WEAK_FUNC(sub_830108C0);
PPC_FUNC_IMPL(__imp__sub_830108C0) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20072
	ctx.r9.s64 = ctx.r11.s64 + -20072;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x830108F8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83010910
	if (cr6.eq) goto loc_83010910;
	// bl 0x82416268
	ctx.lr = 0x8301090C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83010910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010928"))) PPC_WEAK_FUNC(sub_83010928);
PPC_FUNC_IMPL(__imp__sub_83010928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83010938
	if (cr6.lt) goto loc_83010938;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83010938:
	// b 0x83010840
	sub_83010840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301093C"))) PPC_WEAK_FUNC(sub_8301093C);
PPC_FUNC_IMPL(__imp__sub_8301093C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010940"))) PPC_WEAK_FUNC(sub_83010940);
PPC_FUNC_IMPL(__imp__sub_83010940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83010948;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x83010954;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83010958;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x830109ac
	if (!cr6.eq) goto loc_830109AC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-20176
	ctx.r11.s64 = ctx.r11.s64 + -20176;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83010974;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x83010980;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83010a50
	if (cr6.lt) goto loc_83010A50;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830109A0;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830109AC:
	// bl 0x830ff290
	ctx.lr = 0x830109B0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x830109B4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x830109cc
	if (!cr6.eq) goto loc_830109CC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r11,r11,-20176
	ctx.r11.s64 = ctx.r11.s64 + -20176;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// b 0x83010a34
	goto loc_83010A34;
loc_830109CC:
	// bl 0x830ff290
	ctx.lr = 0x830109D0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x830109D4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,23
	cr6.compare<uint32_t>(ctx.r3.u32, 23, xer);
	// bne cr6,0x830109e8
	if (!cr6.eq) goto loc_830109E8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-20176
	ctx.r4.s64 = ctx.r11.s64 + -20176;
	// b 0x83010a34
	goto loc_83010A34;
loc_830109E8:
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8311e3d0
	ctx.lr = 0x830109F0;
	sub_8311E3D0(ctx, base);
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r29,r11,26896
	ctx.r29.s64 = ctx.r11.s64 + 26896;
	// beq cr6,0x83010a2c
	if (cr6.eq) goto loc_83010A2C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x837b0c10
	ctx.lr = 0x83010A10;
	sub_837B0C10(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8311d4d8
	ctx.lr = 0x83010A20;
	sub_8311D4D8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83010A28;
	sub_8387E8E0(ctx, base);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_83010A2C:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
loc_83010A34:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83010A3C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x83010A48;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83010A50;
	sub_8387E8E0(ctx, base);
loc_83010A50:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010A5C"))) PPC_WEAK_FUNC(sub_83010A5C);
PPC_FUNC_IMPL(__imp__sub_83010A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010A60"))) PPC_WEAK_FUNC(sub_83010A60);
PPC_FUNC_IMPL(__imp__sub_83010A60) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82dcdd30
	sub_82DCDD30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010A6C"))) PPC_WEAK_FUNC(sub_83010A6C);
PPC_FUNC_IMPL(__imp__sub_83010A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010A70"))) PPC_WEAK_FUNC(sub_83010A70);
PPC_FUNC_IMPL(__imp__sub_83010A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82dcdde8
	sub_82DCDDE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010A7C"))) PPC_WEAK_FUNC(sub_83010A7C);
PPC_FUNC_IMPL(__imp__sub_83010A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010A80"))) PPC_WEAK_FUNC(sub_83010A80);
PPC_FUNC_IMPL(__imp__sub_83010A80) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83010ac4
	if (cr6.eq) goto loc_83010AC4;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x83010AB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_83010AC4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19920
	ctx.r4.s64 = ctx.r11.s64 + -19920;
	// bl 0x837b0c10
	ctx.lr = 0x83010AD4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83010AE0;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83010b00
	if (cr6.lt) goto loc_83010B00;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83010B00;
	sub_825952B8(ctx, base);
loc_83010B00:
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

__attribute__((alias("__imp__sub_83010B18"))) PPC_WEAK_FUNC(sub_83010B18);
PPC_FUNC_IMPL(__imp__sub_83010B18) {
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
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r5,7
	ctx.r5.s64 = 7;
	// std r8,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r8.u64);
	// addi r4,r9,-19912
	ctx.r4.s64 = ctx.r9.s64 + -19912;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x8259cc28
	ctx.lr = 0x83010B64;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83010B70;
	sub_82E88020(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x83010b90
	if (cr6.lt) goto loc_83010B90;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83010B90;
	sub_825952B8(ctx, base);
loc_83010B90:
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

__attribute__((alias("__imp__sub_83010BA8"))) PPC_WEAK_FUNC(sub_83010BA8);
PPC_FUNC_IMPL(__imp__sub_83010BA8) {
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
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r5,6
	ctx.r5.s64 = 6;
	// std r8,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r8.u64);
	// addi r4,r9,-19904
	ctx.r4.s64 = ctx.r9.s64 + -19904;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x8259cc28
	ctx.lr = 0x83010BF4;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83010C00;
	sub_82E88020(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x83010c20
	if (cr6.lt) goto loc_83010C20;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83010C20;
	sub_825952B8(ctx, base);
loc_83010C20:
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

__attribute__((alias("__imp__sub_83010C34"))) PPC_WEAK_FUNC(sub_83010C34);
PPC_FUNC_IMPL(__imp__sub_83010C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010C38"))) PPC_WEAK_FUNC(sub_83010C38);
PPC_FUNC_IMPL(__imp__sub_83010C38) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83010c70
	if (!cr6.eq) goto loc_83010C70;
loc_83010C54:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83010ba8
	ctx.lr = 0x83010C5C;
	sub_83010BA8(ctx, base);
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
loc_83010C70:
	// lbz r9,90(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 90);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83010ca4
	if (cr6.eq) goto loc_83010CA4;
	// lbz r11,91(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 91);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83010c54
	if (!cr6.eq) goto loc_83010C54;
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,2840
	ctx.r8.s64 = ctx.r11.s64 + 2840;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,88(r10)
	PPC_STORE_U64(ctx.r10.u32 + 88, ctx.r7.u64);
loc_83010CA4:
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

__attribute__((alias("__imp__sub_83010CB8"))) PPC_WEAK_FUNC(sub_83010CB8);
PPC_FUNC_IMPL(__imp__sub_83010CB8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83010CDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83010d08
	if (!cr6.eq) goto loc_83010D08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83010ba8
	ctx.lr = 0x83010CF0;
	sub_83010BA8(ctx, base);
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
loc_83010D08:
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3128
	ctx.r9.s64 = ctx.r11.s64 + 3128;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r8.u64);
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

__attribute__((alias("__imp__sub_83010D3C"))) PPC_WEAK_FUNC(sub_83010D3C);
PPC_FUNC_IMPL(__imp__sub_83010D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010D40"))) PPC_WEAK_FUNC(sub_83010D40);
PPC_FUNC_IMPL(__imp__sub_83010D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83010D48;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x83010D54;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83010d70
	if (!cr6.eq) goto loc_83010D70;
loc_83010D5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83010ba8
	ctx.lr = 0x83010D64;
	sub_83010BA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83010D70:
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r30,140(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da95f8
	ctx.lr = 0x83010D8C;
	sub_82DA95F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83010d5c
	if (cr6.eq) goto loc_83010D5C;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83010d5c
	if (!cr6.eq) goto loc_83010D5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dac738
	ctx.lr = 0x83010DAC;
	sub_82DAC738(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da8d18
	ctx.lr = 0x83010DB4;
	sub_82DA8D18(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da95e8
	ctx.lr = 0x83010DC0;
	sub_82DA95E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83010de8
	if (!cr6.eq) goto loc_83010DE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83010ba8
	ctx.lr = 0x83010DD4;
	sub_83010BA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82da8c38
	ctx.lr = 0x83010DDC;
	sub_82DA8C38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83010DE8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dac750
	ctx.lr = 0x83010DF4;
	sub_82DAC750(ctx, base);
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,3256
	ctx.r10.s64 = ctx.r11.s64 + 3256;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r29)
	PPC_STORE_U64(ctx.r29.u32 + 88, ctx.r9.u64);
	// stw r8,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r8.u32);
	// bl 0x82da8c38
	ctx.lr = 0x83010E1C;
	sub_82DA8C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010E28"))) PPC_WEAK_FUNC(sub_83010E28);
PPC_FUNC_IMPL(__imp__sub_83010E28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f42220
	ctx.lr = 0x83010E40;
	sub_82F42220(ctx, base);
	// lis r10,-31999
	ctx.r10.s64 = -2097086464;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,3392
	ctx.r7.s64 = ctx.r10.s64 + 3392;
	// addi r6,r9,-19696
	ctx.r6.s64 = ctx.r9.s64 + -19696;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r8,-17088
	ctx.r5.s64 = ctx.r8.s64 + -17088;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// std r4,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r4.u64);
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

__attribute__((alias("__imp__sub_83010E90"))) PPC_WEAK_FUNC(sub_83010E90);
PPC_FUNC_IMPL(__imp__sub_83010E90) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-19808
	ctx.r9.s64 = ctx.r11.s64 + -19808;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x83010EC8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83010ee0
	if (cr6.eq) goto loc_83010EE0;
	// bl 0x82416268
	ctx.lr = 0x83010EDC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83010EE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010EF8"))) PPC_WEAK_FUNC(sub_83010EF8);
PPC_FUNC_IMPL(__imp__sub_83010EF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f42220
	ctx.lr = 0x83010F10;
	sub_82F42220(ctx, base);
	// lis r10,-31999
	ctx.r10.s64 = -2097086464;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,3392
	ctx.r7.s64 = ctx.r10.s64 + 3392;
	// addi r6,r9,-19584
	ctx.r6.s64 = ctx.r9.s64 + -19584;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r8,-17088
	ctx.r5.s64 = ctx.r8.s64 + -17088;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// std r4,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r4.u64);
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

__attribute__((alias("__imp__sub_83010F60"))) PPC_WEAK_FUNC(sub_83010F60);
PPC_FUNC_IMPL(__imp__sub_83010F60) {
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
	// blt cr6,0x83010f84
	if (cr6.lt) goto loc_83010F84;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83010f88
	goto loc_83010F88;
loc_83010F84:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83010F88:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83010FA0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83010fc4
	if (cr6.eq) goto loc_83010FC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83010e28
	ctx.lr = 0x83010FB0;
	sub_83010E28(ctx, base);
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
loc_83010FC4:
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

__attribute__((alias("__imp__sub_83010FDC"))) PPC_WEAK_FUNC(sub_83010FDC);
PPC_FUNC_IMPL(__imp__sub_83010FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83010FE0"))) PPC_WEAK_FUNC(sub_83010FE0);
PPC_FUNC_IMPL(__imp__sub_83010FE0) {
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
	// blt cr6,0x83011004
	if (cr6.lt) goto loc_83011004;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83011008
	goto loc_83011008;
loc_83011004:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83011008:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83011020;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83011044
	if (cr6.eq) goto loc_83011044;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83010ef8
	ctx.lr = 0x83011030;
	sub_83010EF8(ctx, base);
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
loc_83011044:
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

__attribute__((alias("__imp__sub_8301105C"))) PPC_WEAK_FUNC(sub_8301105C);
PPC_FUNC_IMPL(__imp__sub_8301105C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011060"))) PPC_WEAK_FUNC(sub_83011060);
PPC_FUNC_IMPL(__imp__sub_83011060) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83011090;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830110cc
	if (cr6.eq) goto loc_830110CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x830110A4;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18976
	ctx.r9.s64 = ctx.r11.s64 + -18976;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x830110d0
	goto loc_830110D0;
loc_830110CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830110D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830110E8"))) PPC_WEAK_FUNC(sub_830110E8);
PPC_FUNC_IMPL(__imp__sub_830110E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830110f8
	if (cr6.lt) goto loc_830110F8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830110F8:
	// b 0x83011060
	sub_83011060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830110FC"))) PPC_WEAK_FUNC(sub_830110FC);
PPC_FUNC_IMPL(__imp__sub_830110FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011100"))) PPC_WEAK_FUNC(sub_83011100);
PPC_FUNC_IMPL(__imp__sub_83011100) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8301123c
	if (cr6.gt) goto loc_8301123C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83011144
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83011144;
	// bdzf 4*cr6+eq,0x830111d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830111D4;
	// bne cr6,0x83011208
	if (!cr6.eq) goto loc_83011208;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83011144:
	// bl 0x82d86078
	ctx.lr = 0x83011148;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83011160
	if (!cr6.eq) goto loc_83011160;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83011284
	goto loc_83011284;
loc_83011160:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r6,200
	ctx.r6.s64 = 200;
	// addi r11,r11,-19180
	ctx.r11.s64 = ctx.r11.s64 + -19180;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,-24
	ctx.r5.s64 = ctx.r11.s64 + -24;
	// bl 0x82da9890
	ctx.lr = 0x8301117C;
	sub_82DA9890(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82b5e118
	ctx.lr = 0x83011184;
	sub_82B5E118(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82da8838
	ctx.lr = 0x8301118C;
	sub_82DA8838(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830111b0
	if (!cr6.eq) goto loc_830111B0;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82da8c38
	ctx.lr = 0x830111A8;
	sub_82DA8C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83011284
	goto loc_83011284;
loc_830111B0:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82da9740
	ctx.lr = 0x830111BC;
	sub_82DA9740(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82da8c38
	ctx.lr = 0x830111CC;
	sub_82DA8C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83011284
	goto loc_83011284;
loc_830111D4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-19180
	ctx.r11.s64 = ctx.r11.s64 + -19180;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x830111E8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830111F4;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830111FC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83011280
	goto loc_83011280;
loc_83011208:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-19180
	ctx.r11.s64 = ctx.r11.s64 + -19180;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x8301121C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83011228;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83011230;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83011280
	goto loc_83011280;
loc_8301123C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19180
	ctx.r4.s64 = ctx.r11.s64 + -19180;
	// bl 0x837b0c10
	ctx.lr = 0x8301124C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83011258;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83011278
	if (cr6.lt) goto loc_83011278;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83011278;
	sub_825952B8(ctx, base);
loc_83011278:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_83011280:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83011284:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301129C"))) PPC_WEAK_FUNC(sub_8301129C);
PPC_FUNC_IMPL(__imp__sub_8301129C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830112A0"))) PPC_WEAK_FUNC(sub_830112A0);
PPC_FUNC_IMPL(__imp__sub_830112A0) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18720
	ctx.r9.s64 = ctx.r11.s64 + -18720;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x830112D8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830112f0
	if (cr6.eq) goto loc_830112F0;
	// bl 0x82416268
	ctx.lr = 0x830112EC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830112F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011308"))) PPC_WEAK_FUNC(sub_83011308);
PPC_FUNC_IMPL(__imp__sub_83011308) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83011338;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8301136c
	if (cr6.eq) goto loc_8301136C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x8301134C;
	sub_82F42220(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18720
	ctx.r9.s64 = ctx.r11.s64 + -18720;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x83011370
	goto loc_83011370;
loc_8301136C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83011370:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011388"))) PPC_WEAK_FUNC(sub_83011388);
PPC_FUNC_IMPL(__imp__sub_83011388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83011398
	if (cr6.lt) goto loc_83011398;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83011398:
	// b 0x83011308
	sub_83011308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301139C"))) PPC_WEAK_FUNC(sub_8301139C);
PPC_FUNC_IMPL(__imp__sub_8301139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830113A0"))) PPC_WEAK_FUNC(sub_830113A0);
PPC_FUNC_IMPL(__imp__sub_830113A0) {
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
	ctx.lr = 0x830113B8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830113c8
	if (cr6.eq) goto loc_830113C8;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x82dc0a30
	ctx.lr = 0x830113C8;
	sub_82DC0A30(ctx, base);
loc_830113C8:
	// bl 0x82d89740
	ctx.lr = 0x830113CC;
	sub_82D89740(ctx, base);
	// bl 0x82d89700
	ctx.lr = 0x830113D0;
	sub_82D89700(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r4,r9,-18816
	ctx.r4.s64 = ctx.r9.s64 + -18816;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x830113F8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83011404;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x83011424
	if (cr6.lt) goto loc_83011424;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83011424;
	sub_825952B8(ctx, base);
loc_83011424:
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

__attribute__((alias("__imp__sub_8301143C"))) PPC_WEAK_FUNC(sub_8301143C);
PPC_FUNC_IMPL(__imp__sub_8301143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011440"))) PPC_WEAK_FUNC(sub_83011440);
PPC_FUNC_IMPL(__imp__sub_83011440) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// ld r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,88(r10)
	PPC_STORE_U64(ctx.r10.u32 + 88, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011460"))) PPC_WEAK_FUNC(sub_83011460);
PPC_FUNC_IMPL(__imp__sub_83011460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,5184
	ctx.r9.s64 = ctx.r11.s64 + 5184;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// ld r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011480"))) PPC_WEAK_FUNC(sub_83011480);
PPC_FUNC_IMPL(__imp__sub_83011480) {
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
	// bl 0x82f42220
	ctx.lr = 0x8301149C;
	sub_82F42220(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18464
	ctx.r9.s64 = ctx.r11.s64 + -18464;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r6,23548
	ctx.r4.s64 = ctx.r6.s64 + 23548;
	// bl 0x8259cc28
	ctx.lr = 0x830114DC;
	sub_8259CC28(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r5.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011508"))) PPC_WEAK_FUNC(sub_83011508);
PPC_FUNC_IMPL(__imp__sub_83011508) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18464
	ctx.r9.s64 = ctx.r11.s64 + -18464;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// lwz r7,116(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8301155c
	if (cr6.lt) goto loc_8301155C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8301155C;
	sub_825952B8(ctx, base);
loc_8301155C:
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
	// bl 0x82f42278
	ctx.lr = 0x83011578;
	sub_82F42278(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011590"))) PPC_WEAK_FUNC(sub_83011590);
PPC_FUNC_IMPL(__imp__sub_83011590) {
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
	// bl 0x83011508
	ctx.lr = 0x830115B0;
	sub_83011508(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830115c8
	if (cr6.eq) goto loc_830115C8;
	// bl 0x82416268
	ctx.lr = 0x830115C4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830115C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830115E0"))) PPC_WEAK_FUNC(sub_830115E0);
PPC_FUNC_IMPL(__imp__sub_830115E0) {
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
	// blt cr6,0x83011604
	if (cr6.lt) goto loc_83011604;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83011608
	goto loc_83011608;
loc_83011604:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83011608:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83011620;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83011638
	if (cr6.eq) goto loc_83011638;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83011480
	ctx.lr = 0x83011630;
	sub_83011480(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8301163c
	if (!cr6.eq) goto loc_8301163C;
loc_83011638:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301163C:
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

__attribute__((alias("__imp__sub_83011650"))) PPC_WEAK_FUNC(sub_83011650);
PPC_FUNC_IMPL(__imp__sub_83011650) {
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
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r9,-18568
	ctx.r4.s64 = ctx.r9.s64 + -18568;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8301168C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83011698;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x830116b8
	if (cr6.lt) goto loc_830116B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830116B8;
	sub_825952B8(ctx, base);
loc_830116B8:
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

__attribute__((alias("__imp__sub_830116D0"))) PPC_WEAK_FUNC(sub_830116D0);
PPC_FUNC_IMPL(__imp__sub_830116D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,9
	ctx.r9.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83011720
	if (!cr6.eq) goto loc_83011720;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83011710
	if (!cr6.eq) goto loc_83011710;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x6;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// stw r7,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r7.u32);
	// b 0x83011720
	goto loc_83011720;
loc_83011710:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83011720
	if (!cr6.eq) goto loc_83011720;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_83011720:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011724"))) PPC_WEAK_FUNC(sub_83011724);
PPC_FUNC_IMPL(__imp__sub_83011724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011728"))) PPC_WEAK_FUNC(sub_83011728);
PPC_FUNC_IMPL(__imp__sub_83011728) {
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
	// bl 0x82d86078
	ctx.lr = 0x83011740;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83011760
	if (!cr6.eq) goto loc_83011760;
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
loc_83011760:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x83011768;
	sub_831F8200(ctx, base);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8301178C"))) PPC_WEAK_FUNC(sub_8301178C);
PPC_FUNC_IMPL(__imp__sub_8301178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011790"))) PPC_WEAK_FUNC(sub_83011790);
PPC_FUNC_IMPL(__imp__sub_83011790) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,-17992
	ctx.r3.s64 = ctx.r11.s64 + -17992;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x830117C4;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830117f0
	if (cr6.eq) goto loc_830117F0;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,300
	ctx.r4.u64 = ctx.r4.u64 | 300;
	// bl 0x82d2ada8
	ctx.lr = 0x830117E0;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x830117EC;
	sub_83103100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_830117F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011808"))) PPC_WEAK_FUNC(sub_83011808);
PPC_FUNC_IMPL(__imp__sub_83011808) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-17964
	ctx.r3.s64 = ctx.r11.s64 + -17964;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83011838;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,380
	ctx.r4.u64 = ctx.r4.u64 | 380;
	// bl 0x82d2ada8
	ctx.lr = 0x83011848;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83011854;
	sub_83103100(ctx, base);
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

__attribute__((alias("__imp__sub_83011870"))) PPC_WEAK_FUNC(sub_83011870);
PPC_FUNC_IMPL(__imp__sub_83011870) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830118A0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830118e8
	if (cr6.eq) goto loc_830118E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x830118B4;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-17848
	ctx.r8.s64 = ctx.r10.s64 + -17848;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x830118ec
	goto loc_830118EC;
loc_830118E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830118EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011904"))) PPC_WEAK_FUNC(sub_83011904);
PPC_FUNC_IMPL(__imp__sub_83011904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011908"))) PPC_WEAK_FUNC(sub_83011908);
PPC_FUNC_IMPL(__imp__sub_83011908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83011918
	if (cr6.lt) goto loc_83011918;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83011918:
	// b 0x83011870
	sub_83011870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301191C"))) PPC_WEAK_FUNC(sub_8301191C);
PPC_FUNC_IMPL(__imp__sub_8301191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011920"))) PPC_WEAK_FUNC(sub_83011920);
PPC_FUNC_IMPL(__imp__sub_83011920) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x83011c34
	if (cr6.gt) goto loc_83011C34;
	// lis r12,-31999
	ctx.r12.s64 = -2097086464;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6496
	ctx.r12.s64 = ctx.r12.s64 + 6496;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83011990;
	case 1:
		goto loc_830119B8;
	case 2:
		goto loc_83011A04;
	case 3:
		goto loc_83011A78;
	case 4:
		goto loc_83011BC4;
	case 5:
		goto loc_83011AA0;
	case 6:
		goto loc_83011AEC;
	case 7:
		goto loc_83011BA8;
	case 8:
		goto loc_83011BC4;
	case 9:
		goto loc_83011BCC;
	case 10:
		goto loc_83011C00;
	case 11:
		goto loc_83011BCC;
	default:
		return;
	}
	// lwz r24,6544(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6544);
	// lwz r24,6584(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6584);
	// lwz r24,6660(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6660);
	// lwz r24,6776(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6776);
	// lwz r24,7108(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 7108);
	// lwz r24,6816(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6816);
	// lwz r24,6892(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6892);
	// lwz r24,7080(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 7080);
	// lwz r24,7108(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 7108);
	// lwz r24,7116(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 7116);
	// lwz r24,7168(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 7168);
	// lwz r24,7116(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 7116);
loc_83011990:
	// bl 0x82d95ee0
	ctx.lr = 0x83011994;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830119b0
	if (cr6.eq) goto loc_830119B0;
loc_830119A0:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83011c7c
	goto loc_83011C7C;
loc_830119B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830119B8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-18000
	ctx.r11.s64 = ctx.r11.s64 + -18000;
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// bl 0x837b0c10
	ctx.lr = 0x830119CC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x830119D8;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x830119E4;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// addi r7,r11,9
	ctx.r7.s64 = ctx.r11.s64 + 9;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83011c7c
	goto loc_83011C7C;
loc_83011A04:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x83011A0C;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83011bc4
	if (cr6.eq) goto loc_83011BC4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83011a3c
	if (cr6.eq) goto loc_83011A3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011A34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_83011A3C:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83011a58
	if (!cr6.eq) goto loc_83011A58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83011728
	ctx.lr = 0x83011A4C;
	sub_83011728(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x83011a68
	if (cr6.lt) goto loc_83011A68;
	// beq cr6,0x830119a0
	if (cr6.eq) goto loc_830119A0;
loc_83011A58:
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83011c7c
	goto loc_83011C7C;
loc_83011A68:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83011c7c
	goto loc_83011C7C;
loc_83011A78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83011790
	ctx.lr = 0x83011A80;
	sub_83011790(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r8,r11,9
	ctx.r8.s64 = ctx.r11.s64 + 9;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x83011c7c
	goto loc_83011C7C;
loc_83011AA0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-18000
	ctx.r11.s64 = ctx.r11.s64 + -18000;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x837b0c10
	ctx.lr = 0x83011AB4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83011AC0;
	sub_82D894E0(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83011ACC;
	sub_8387E8E0(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r11,9
	ctx.r7.s64 = ctx.r11.s64 + 9;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83011c7c
	goto loc_83011C7C;
loc_83011AEC:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82ddcec8
	ctx.lr = 0x83011AF4;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83011bc4
	if (cr6.eq) goto loc_83011BC4;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x83574b00
	ctx.lr = 0x83011B08;
	sub_83574B00(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83011b1c
	if (cr6.lt) goto loc_83011B1C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83011b20
	goto loc_83011B20;
loc_83011B1C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_83011B20:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824209f8
	ctx.lr = 0x83011B28;
	sub_824209F8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83011b4c
	if (cr6.eq) goto loc_83011B4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83011B44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
loc_83011B4C:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83011b6c
	if (!cr6.eq) goto loc_83011B6C;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8241fe60
	ctx.lr = 0x83011B64;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83011c7c
	goto loc_83011C7C;
loc_83011B6C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-18000
	ctx.r11.s64 = ctx.r11.s64 + -18000;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x82450880
	ctx.lr = 0x83011B80;
	sub_82450880(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r7,r11,9
	ctx.r7.s64 = ctx.r11.s64 + 9;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// bl 0x8241fe60
	ctx.lr = 0x83011BA0;
	sub_8241FE60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83011c7c
	goto loc_83011C7C;
loc_83011BA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83011808
	ctx.lr = 0x83011BB0;
	sub_83011808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
loc_83011BC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83011c7c
	goto loc_83011C7C;
loc_83011BCC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-18000
	ctx.r11.s64 = ctx.r11.s64 + -18000;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83011BE0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83011BEC;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83011BF4;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83011c78
	goto loc_83011C78;
loc_83011C00:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-18000
	ctx.r11.s64 = ctx.r11.s64 + -18000;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83011C14;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83011C20;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x83011C28;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83011c78
	goto loc_83011C78;
loc_83011C34:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-18000
	ctx.r4.s64 = ctx.r11.s64 + -18000;
	// bl 0x837b0c10
	ctx.lr = 0x83011C44;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83011C50;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83011c70
	if (cr6.lt) goto loc_83011C70;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83011C70;
	sub_825952B8(ctx, base);
loc_83011C70:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_83011C78:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83011C7C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011C94"))) PPC_WEAK_FUNC(sub_83011C94);
PPC_FUNC_IMPL(__imp__sub_83011C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011C98"))) PPC_WEAK_FUNC(sub_83011C98);
PPC_FUNC_IMPL(__imp__sub_83011C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,9
	ctx.r9.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83011cc0
	if (!cr6.eq) goto loc_83011CC0;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83011cc0
	if (!cr6.eq) goto loc_83011CC0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_83011CC0:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011CC4"))) PPC_WEAK_FUNC(sub_83011CC4);
PPC_FUNC_IMPL(__imp__sub_83011CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011CC8"))) PPC_WEAK_FUNC(sub_83011CC8);
PPC_FUNC_IMPL(__imp__sub_83011CC8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83011CF8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83011d34
	if (cr6.eq) goto loc_83011D34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83011D0C;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-17328
	ctx.r9.s64 = ctx.r11.s64 + -17328;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83011d38
	goto loc_83011D38;
loc_83011D34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83011D38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011D50"))) PPC_WEAK_FUNC(sub_83011D50);
PPC_FUNC_IMPL(__imp__sub_83011D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83011d60
	if (cr6.lt) goto loc_83011D60;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83011D60:
	// b 0x83011cc8
	sub_83011CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011D64"))) PPC_WEAK_FUNC(sub_83011D64);
PPC_FUNC_IMPL(__imp__sub_83011D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83011D68"))) PPC_WEAK_FUNC(sub_83011D68);
PPC_FUNC_IMPL(__imp__sub_83011D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83011D70;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83011D80;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83011ddc
	if (!cr6.eq) goto loc_83011DDC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-17424
	ctx.r11.s64 = ctx.r11.s64 + -17424;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x83011D9C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83011DA8;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83011dc8
	if (cr6.lt) goto loc_83011DC8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83011DC8;
	sub_825952B8(ctx, base);
loc_83011DC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83011DDC:
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x83011f80
	if (cr6.gt) goto loc_83011F80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83011e94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83011E94;
	// bdzf 4*cr6+eq,0x83011f10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83011F10;
	// bdzf 4*cr6+eq,0x83011f1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83011F1C;
	// bne cr6,0x83011f58
	if (!cr6.eq) goto loc_83011F58;
	// bl 0x831f8200
	ctx.lr = 0x83011E08;
	sub_831F8200(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_83011E38:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9f020
	ctx.lr = 0x83011E4C;
	sub_82D9F020(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83011e5c
	if (cr6.eq) goto loc_83011E5C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_83011E5C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83011e74
	if (!cr6.eq) goto loc_83011E74;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bge cr6,0x83011e38
	if (!cr6.lt) goto loc_83011E38;
loc_83011E74:
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r9.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83011E94:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r30,r11,-17424
	ctx.r30.s64 = ctx.r11.s64 + -17424;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,-36
	ctx.r3.s64 = ctx.r30.s64 + -36;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83011EB0;
	sub_82D2FA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83011ecc
	if (!cr6.eq) goto loc_83011ECC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83011ECC:
	// addi r4,r30,-262
	ctx.r4.s64 = ctx.r30.s64 + -262;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x83011ED8;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,501
	ctx.r4.u64 = ctx.r4.u64 | 501;
	// bl 0x82d04220
	ctx.lr = 0x83011EE8;
	sub_82D04220(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83011EF4;
	sub_82D2AAB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x83011F00;
	sub_83103100(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83011F10;
	sub_8387E8E0(ctx, base);
loc_83011F10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83011F1C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-17424
	ctx.r11.s64 = ctx.r11.s64 + -17424;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83011F30;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83011F3C;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83011F44;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83011F58:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-17424
	ctx.r11.s64 = ctx.r11.s64 + -17424;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83011F6C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83011F78;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// b 0x83011fa0
	goto loc_83011FA0;
loc_83011F80:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-17424
	ctx.r4.s64 = ctx.r11.s64 + -17424;
	// bl 0x837b0c10
	ctx.lr = 0x83011F90;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x83011F9C;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
loc_83011FA0:
	// bl 0x8387e8e0
	ctx.lr = 0x83011FA4;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011FB8"))) PPC_WEAK_FUNC(sub_83011FB8);
PPC_FUNC_IMPL(__imp__sub_83011FB8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bge cr6,0x83011fd8
	if (!cr6.lt) goto loc_83011FD8;
	// subf r31,r4,r5
	ctx.r31.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_83011FD8:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83012028
	if (cr6.eq) goto loc_83012028;
	// li r3,276
	ctx.r3.s64 = 276;
	// bl 0x82d84728
	ctx.lr = 0x83011FF0;
	sub_82D84728(ctx, base);
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x82d84728
	ctx.lr = 0x83011FF8;
	sub_82D84728(ctx, base);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x83012008
	if (cr6.lt) goto loc_83012008;
	// li r3,278
	ctx.r3.s64 = 278;
	// bl 0x82d84728
	ctx.lr = 0x83012008;
	sub_82D84728(ctx, base);
loc_83012008:
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x83012018
	if (cr6.lt) goto loc_83012018;
	// li r3,279
	ctx.r3.s64 = 279;
	// bl 0x82d84728
	ctx.lr = 0x83012018;
	sub_82D84728(ctx, base);
loc_83012018:
	// cmplwi cr6,r31,30
	cr6.compare<uint32_t>(ctx.r31.u32, 30, xer);
	// blt cr6,0x83012028
	if (cr6.lt) goto loc_83012028;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x82d84728
	ctx.lr = 0x83012028;
	sub_82D84728(ctx, base);
loc_83012028:
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

__attribute__((alias("__imp__sub_8301203C"))) PPC_WEAK_FUNC(sub_8301203C);
PPC_FUNC_IMPL(__imp__sub_8301203C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012040"))) PPC_WEAK_FUNC(sub_83012040);
PPC_FUNC_IMPL(__imp__sub_83012040) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83012070;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830120b0
	if (cr6.eq) goto loc_830120B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83012084;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-16800
	ctx.r8.s64 = ctx.r10.s64 + -16800;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x830120b4
	goto loc_830120B4;
loc_830120B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830120B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830120CC"))) PPC_WEAK_FUNC(sub_830120CC);
PPC_FUNC_IMPL(__imp__sub_830120CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830120D0"))) PPC_WEAK_FUNC(sub_830120D0);
PPC_FUNC_IMPL(__imp__sub_830120D0) {
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
	// bl 0x82d86078
	ctx.lr = 0x830120E8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83012104
	if (!cr6.eq) goto loc_83012104;
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
loc_83012104:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82e877c8
	ctx.lr = 0x8301210C;
	sub_82E877C8(ctx, base);
	// addi r11,r3,1620
	ctx.r11.s64 = ctx.r3.s64 + 1620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83011fb8
	ctx.lr = 0x83012120;
	sub_83011FB8(ctx, base);
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

__attribute__((alias("__imp__sub_83012138"))) PPC_WEAK_FUNC(sub_83012138);
PPC_FUNC_IMPL(__imp__sub_83012138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83012148
	if (cr6.lt) goto loc_83012148;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83012148:
	// b 0x83012040
	sub_83012040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301214C"))) PPC_WEAK_FUNC(sub_8301214C);
PPC_FUNC_IMPL(__imp__sub_8301214C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012150"))) PPC_WEAK_FUNC(sub_83012150);
PPC_FUNC_IMPL(__imp__sub_83012150) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x830122d8
	if (cr6.gt) goto loc_830122D8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830121a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830121A4;
	// bdzf 4*cr6+eq,0x830121f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830121F0;
	// bdzf 4*cr6+eq,0x83012248
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83012248;
	// bdzf 4*cr6+eq,0x83012270
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83012270;
	// bne cr6,0x830122a4
	if (!cr6.eq) goto loc_830122A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83012320
	goto loc_83012320;
loc_830121A4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-16892
	ctx.r11.s64 = ctx.r11.s64 + -16892;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x837b0c10
	ctx.lr = 0x830121B8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x830121C4;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830121D0;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83012320
	goto loc_83012320;
loc_830121F0:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x830121F8;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83012268
	if (cr6.eq) goto loc_83012268;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83012228
	if (cr6.eq) goto loc_83012228;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83012220;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83012228:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x83012320
	goto loc_83012320;
loc_83012248:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830120d0
	ctx.lr = 0x83012250;
	sub_830120D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
loc_83012268:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83012320
	goto loc_83012320;
loc_83012270:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-16892
	ctx.r11.s64 = ctx.r11.s64 + -16892;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83012284;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83012290;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83012298;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8301231c
	goto loc_8301231C;
loc_830122A4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-16892
	ctx.r11.s64 = ctx.r11.s64 + -16892;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830122B8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830122C4;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x830122CC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x8301231c
	goto loc_8301231C;
loc_830122D8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-16892
	ctx.r4.s64 = ctx.r11.s64 + -16892;
	// bl 0x837b0c10
	ctx.lr = 0x830122E8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830122F4;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83012314
	if (cr6.lt) goto loc_83012314;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83012314;
	sub_825952B8(ctx, base);
loc_83012314:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8301231C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83012320:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012338"))) PPC_WEAK_FUNC(sub_83012338);
PPC_FUNC_IMPL(__imp__sub_83012338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8301234c
	if (!cr6.eq) goto loc_8301234C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_8301234C:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012350"))) PPC_WEAK_FUNC(sub_83012350);
PPC_FUNC_IMPL(__imp__sub_83012350) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-16404
	ctx.r3.s64 = ctx.r11.s64 + -16404;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83012380;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,359
	ctx.r4.u64 = ctx.r4.u64 | 359;
	// bl 0x82d2ada8
	ctx.lr = 0x83012390;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8301239C;
	sub_83103100(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830123B4"))) PPC_WEAK_FUNC(sub_830123B4);
PPC_FUNC_IMPL(__imp__sub_830123B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830123B8"))) PPC_WEAK_FUNC(sub_830123B8);
PPC_FUNC_IMPL(__imp__sub_830123B8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830123E8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83012424
	if (cr6.eq) goto loc_83012424;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x830123FC;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-16304
	ctx.r9.s64 = ctx.r11.s64 + -16304;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83012428
	goto loc_83012428;
loc_83012424:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83012428:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012440"))) PPC_WEAK_FUNC(sub_83012440);
PPC_FUNC_IMPL(__imp__sub_83012440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83012450
	if (cr6.lt) goto loc_83012450;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83012450:
	// b 0x830123b8
	sub_830123B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012454"))) PPC_WEAK_FUNC(sub_83012454);
PPC_FUNC_IMPL(__imp__sub_83012454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012458"))) PPC_WEAK_FUNC(sub_83012458);
PPC_FUNC_IMPL(__imp__sub_83012458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83012460;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x830124f0
	if (cr6.lt) goto loc_830124F0;
	// beq cr6,0x83012500
	if (cr6.eq) goto loc_83012500;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// blt cr6,0x830124bc
	if (cr6.lt) goto loc_830124BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16412
	ctx.r4.s64 = ctx.r11.s64 + -16412;
	// bl 0x837b0c10
	ctx.lr = 0x83012498;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830124A4;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x830124AC;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830124BC:
	// addi r11,r11,-16412
	ctx.r11.s64 = ctx.r11.s64 + -16412;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830124CC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830124D8;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x830124E0;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830124F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012350
	ctx.lr = 0x830124F8;
	sub_83012350(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83012500:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301250C"))) PPC_WEAK_FUNC(sub_8301250C);
PPC_FUNC_IMPL(__imp__sub_8301250C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012510"))) PPC_WEAK_FUNC(sub_83012510);
PPC_FUNC_IMPL(__imp__sub_83012510) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83012540;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8301257c
	if (cr6.eq) goto loc_8301257C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83012554;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15824
	ctx.r9.s64 = ctx.r11.s64 + -15824;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83012580
	goto loc_83012580;
loc_8301257C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83012580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012598"))) PPC_WEAK_FUNC(sub_83012598);
PPC_FUNC_IMPL(__imp__sub_83012598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830125a8
	if (cr6.lt) goto loc_830125A8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830125A8:
	// b 0x83012510
	sub_83012510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830125AC"))) PPC_WEAK_FUNC(sub_830125AC);
PPC_FUNC_IMPL(__imp__sub_830125AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830125B0"))) PPC_WEAK_FUNC(sub_830125B0);
PPC_FUNC_IMPL(__imp__sub_830125B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830125B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83012610
	if (cr6.lt) goto loc_83012610;
	// beq cr6,0x8301262c
	if (cr6.eq) goto loc_8301262C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-15916
	ctx.r4.s64 = ctx.r11.s64 + -15916;
	// bl 0x837b0c10
	ctx.lr = 0x830125E8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830125F4;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830125FC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83012610:
	// bl 0x82d86078
	ctx.lr = 0x83012614;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83012628
	if (cr6.eq) goto loc_83012628;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82e877c8
	ctx.lr = 0x83012624;
	sub_82E877C8(ctx, base);
	// bl 0x82da1278
	ctx.lr = 0x83012628;
	sub_82DA1278(ctx, base);
loc_83012628:
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_8301262C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r11,r9,-15916
	ctx.r11.s64 = ctx.r9.s64 + -15916;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x8259cc28
	ctx.lr = 0x83012658;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83012664;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x83012684
	if (cr6.lt) goto loc_83012684;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83012684;
	sub_825952B8(ctx, base);
loc_83012684:
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012694"))) PPC_WEAK_FUNC(sub_83012694);
PPC_FUNC_IMPL(__imp__sub_83012694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012698"))) PPC_WEAK_FUNC(sub_83012698);
PPC_FUNC_IMPL(__imp__sub_83012698) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bge cr6,0x830126b8
	if (!cr6.lt) goto loc_830126B8;
	// subf r31,r4,r5
	ctx.r31.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_830126B8:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83012700
	if (cr6.eq) goto loc_83012700;
	// li r3,276
	ctx.r3.s64 = 276;
	// bl 0x82d84728
	ctx.lr = 0x830126D0;
	sub_82D84728(ctx, base);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x830126e0
	if (cr6.lt) goto loc_830126E0;
	// li r3,278
	ctx.r3.s64 = 278;
	// bl 0x82d84728
	ctx.lr = 0x830126E0;
	sub_82D84728(ctx, base);
loc_830126E0:
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x830126f0
	if (cr6.lt) goto loc_830126F0;
	// li r3,279
	ctx.r3.s64 = 279;
	// bl 0x82d84728
	ctx.lr = 0x830126F0;
	sub_82D84728(ctx, base);
loc_830126F0:
	// cmplwi cr6,r31,30
	cr6.compare<uint32_t>(ctx.r31.u32, 30, xer);
	// blt cr6,0x83012700
	if (cr6.lt) goto loc_83012700;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x82d84728
	ctx.lr = 0x83012700;
	sub_82D84728(ctx, base);
loc_83012700:
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

__attribute__((alias("__imp__sub_83012714"))) PPC_WEAK_FUNC(sub_83012714);
PPC_FUNC_IMPL(__imp__sub_83012714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012718"))) PPC_WEAK_FUNC(sub_83012718);
PPC_FUNC_IMPL(__imp__sub_83012718) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83012748;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83012788
	if (cr6.eq) goto loc_83012788;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8301275C;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-15312
	ctx.r8.s64 = ctx.r10.s64 + -15312;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8301278c
	goto loc_8301278C;
loc_83012788:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301278C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830127A4"))) PPC_WEAK_FUNC(sub_830127A4);
PPC_FUNC_IMPL(__imp__sub_830127A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830127A8"))) PPC_WEAK_FUNC(sub_830127A8);
PPC_FUNC_IMPL(__imp__sub_830127A8) {
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
	// bl 0x82d86078
	ctx.lr = 0x830127C4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8301281c
	if (cr6.eq) goto loc_8301281C;
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e877c8
	ctx.lr = 0x830127D8;
	sub_82E877C8(ctx, base);
	// addi r11,r3,1620
	ctx.r11.s64 = ctx.r3.s64 + 1620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83012698
	ctx.lr = 0x830127EC;
	sub_83012698(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x830127F4;
	sub_82D8BB28(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83012818
	if (cr6.eq) goto loc_83012818;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831f8200
	ctx.lr = 0x83012810;
	sub_831F8200(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8312dcc0
	ctx.lr = 0x83012818;
	sub_8312DCC0(ctx, base);
loc_83012818:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8301281C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012834"))) PPC_WEAK_FUNC(sub_83012834);
PPC_FUNC_IMPL(__imp__sub_83012834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012838"))) PPC_WEAK_FUNC(sub_83012838);
PPC_FUNC_IMPL(__imp__sub_83012838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83012848
	if (cr6.lt) goto loc_83012848;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83012848:
	// b 0x83012718
	sub_83012718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301284C"))) PPC_WEAK_FUNC(sub_8301284C);
PPC_FUNC_IMPL(__imp__sub_8301284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012850"))) PPC_WEAK_FUNC(sub_83012850);
PPC_FUNC_IMPL(__imp__sub_83012850) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x830129d8
	if (cr6.gt) goto loc_830129D8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830128a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830128A4;
	// bdzf 4*cr6+eq,0x830128f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830128F0;
	// bdzf 4*cr6+eq,0x83012948
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83012948;
	// bdzf 4*cr6+eq,0x83012970
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83012970;
	// bne cr6,0x830129a4
	if (!cr6.eq) goto loc_830129A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83012a20
	goto loc_83012A20;
loc_830128A4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-15408
	ctx.r11.s64 = ctx.r11.s64 + -15408;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x837b0c10
	ctx.lr = 0x830128B8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x830128C4;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830128D0;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83012a20
	goto loc_83012A20;
loc_830128F0:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x830128F8;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83012968
	if (cr6.eq) goto loc_83012968;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83012928
	if (cr6.eq) goto loc_83012928;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83012920;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83012928:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x83012a20
	goto loc_83012A20;
loc_83012948:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830127a8
	ctx.lr = 0x83012950;
	sub_830127A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
loc_83012968:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83012a20
	goto loc_83012A20;
loc_83012970:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-15408
	ctx.r11.s64 = ctx.r11.s64 + -15408;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83012984;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83012990;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83012998;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83012a1c
	goto loc_83012A1C;
loc_830129A4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-15408
	ctx.r11.s64 = ctx.r11.s64 + -15408;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830129B8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830129C4;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x830129CC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83012a1c
	goto loc_83012A1C;
loc_830129D8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15408
	ctx.r4.s64 = ctx.r11.s64 + -15408;
	// bl 0x837b0c10
	ctx.lr = 0x830129E8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830129F4;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83012a14
	if (cr6.lt) goto loc_83012A14;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83012A14;
	sub_825952B8(ctx, base);
loc_83012A14:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_83012A1C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83012A20:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012A38"))) PPC_WEAK_FUNC(sub_83012A38);
PPC_FUNC_IMPL(__imp__sub_83012A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,9
	ctx.r9.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83012a60
	if (!cr6.eq) goto loc_83012A60;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x83012a60
	if (!cr6.eq) goto loc_83012A60;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
loc_83012A60:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012A64"))) PPC_WEAK_FUNC(sub_83012A64);
PPC_FUNC_IMPL(__imp__sub_83012A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012A68"))) PPC_WEAK_FUNC(sub_83012A68);
PPC_FUNC_IMPL(__imp__sub_83012A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83012A70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83012A94;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83012adc
	if (cr6.eq) goto loc_83012ADC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83012AA8;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-14776
	ctx.r8.s64 = ctx.r10.s64 + -14776;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83012ADC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012AE8"))) PPC_WEAK_FUNC(sub_83012AE8);
PPC_FUNC_IMPL(__imp__sub_83012AE8) {
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
	// bl 0x82d86078
	ctx.lr = 0x83012AF8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83012b10
	if (!cr6.eq) goto loc_83012B10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83012B10:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82e877c8
	ctx.lr = 0x83012B18;
	sub_82E877C8(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,96
	ctx.r11.s64 = 96;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012B44"))) PPC_WEAK_FUNC(sub_83012B44);
PPC_FUNC_IMPL(__imp__sub_83012B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012B48"))) PPC_WEAK_FUNC(sub_83012B48);
PPC_FUNC_IMPL(__imp__sub_83012B48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83012b58
	if (cr6.lt) goto loc_83012B58;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83012B58:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83012a68
	sub_83012A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012B60"))) PPC_WEAK_FUNC(sub_83012B60);
PPC_FUNC_IMPL(__imp__sub_83012B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83012b70
	if (cr6.lt) goto loc_83012B70;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83012B70:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83012a68
	sub_83012A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012B78"))) PPC_WEAK_FUNC(sub_83012B78);
PPC_FUNC_IMPL(__imp__sub_83012B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83012B80;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x83012dc0
	if (cr6.gt) goto loc_83012DC0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83012bd0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83012BD0;
	// bdzf 4*cr6+eq,0x83012c20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83012C20;
	// bdzf 4*cr6+eq,0x83012c88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83012C88;
	// bdzf 4*cr6+eq,0x83012cd0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83012CD0;
	// bdzf 4*cr6+eq,0x83012d3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83012D3C;
	// bdzf 4*cr6+eq,0x83012d48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83012D48;
	// bne cr6,0x83012d84
	if (!cr6.eq) goto loc_83012D84;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83012BD0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-14868
	ctx.r11.s64 = ctx.r11.s64 + -14868;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// bl 0x837b0c10
	ctx.lr = 0x83012BE4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83012BF0;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83012BFC;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83012C20:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x83012C28;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83012d3c
	if (cr6.eq) goto loc_83012D3C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83012c58
	if (cr6.eq) goto loc_83012C58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83012C50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_83012C58:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83012c74
	if (!cr6.eq) goto loc_83012C74;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83012C74:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83012C88:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83012cbc
	if (cr6.eq) goto loc_83012CBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012ae8
	ctx.lr = 0x83012C9C;
	sub_83012AE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83012cbc
	if (!cr6.eq) goto loc_83012CBC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83012CBC:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83012CD0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r29,r11,-14868
	ctx.r29.s64 = ctx.r11.s64 + -14868;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r29,-36
	ctx.r3.s64 = ctx.r29.s64 + -36;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83012CEC;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83012c74
	if (cr6.eq) goto loc_83012C74;
	// addi r4,r29,-282
	ctx.r4.s64 = ctx.r29.s64 + -282;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83012D04;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,305
	ctx.r4.u64 = ctx.r4.u64 | 305;
	// bl 0x82d04220
	ctx.lr = 0x83012D14;
	sub_82D04220(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83012D20;
	sub_82D2AAB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83012D2C;
	sub_83103100(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83012D3C;
	sub_8387E8E0(ctx, base);
loc_83012D3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83012D48:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-14868
	ctx.r11.s64 = ctx.r11.s64 + -14868;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83012D5C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83012D68;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83012D70;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83012D84:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-14868
	ctx.r11.s64 = ctx.r11.s64 + -14868;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83012D98;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83012DA4;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83012DAC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83012DC0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-14868
	ctx.r4.s64 = ctx.r11.s64 + -14868;
	// bl 0x837b0c10
	ctx.lr = 0x83012DD0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83012DDC;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83012dfc
	if (cr6.lt) goto loc_83012DFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83012DFC;
	sub_825952B8(ctx, base);
loc_83012DFC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012E10"))) PPC_WEAK_FUNC(sub_83012E10);
PPC_FUNC_IMPL(__imp__sub_83012E10) {
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
	// bl 0x82d86078
	ctx.lr = 0x83012E28;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83012e44
	if (!cr6.eq) goto loc_83012E44;
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
loc_83012E44:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82e877c8
	ctx.lr = 0x83012E4C;
	sub_82E877C8(ctx, base);
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83012e60
	if (cr6.eq) goto loc_83012E60;
	// bl 0x82da1230
	ctx.lr = 0x83012E5C;
	sub_82DA1230(ctx, base);
	// b 0x83012e64
	goto loc_83012E64;
loc_83012E60:
	// bl 0x82da1278
	ctx.lr = 0x83012E64;
	sub_82DA1278(ctx, base);
loc_83012E64:
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

__attribute__((alias("__imp__sub_83012E7C"))) PPC_WEAK_FUNC(sub_83012E7C);
PPC_FUNC_IMPL(__imp__sub_83012E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012E80"))) PPC_WEAK_FUNC(sub_83012E80);
PPC_FUNC_IMPL(__imp__sub_83012E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83012E88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83012EAC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83012ef0
	if (cr6.eq) goto loc_83012EF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83012EC0;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r29,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r29.u8);
	// addi r9,r11,-14288
	ctx.r9.s64 = ctx.r11.s64 + -14288;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83012EF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012EFC"))) PPC_WEAK_FUNC(sub_83012EFC);
PPC_FUNC_IMPL(__imp__sub_83012EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012F00"))) PPC_WEAK_FUNC(sub_83012F00);
PPC_FUNC_IMPL(__imp__sub_83012F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83012f10
	if (cr6.lt) goto loc_83012F10;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83012F10:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83012e80
	sub_83012E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012F18"))) PPC_WEAK_FUNC(sub_83012F18);
PPC_FUNC_IMPL(__imp__sub_83012F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83012f28
	if (cr6.lt) goto loc_83012F28;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83012F28:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83012e80
	sub_83012E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012F30"))) PPC_WEAK_FUNC(sub_83012F30);
PPC_FUNC_IMPL(__imp__sub_83012F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83012F38;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8301300c
	if (cr6.lt) goto loc_8301300C;
	// beq cr6,0x83012fd0
	if (cr6.eq) goto loc_83012FD0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// blt cr6,0x83012f98
	if (cr6.lt) goto loc_83012F98;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14380
	ctx.r4.s64 = ctx.r11.s64 + -14380;
	// bl 0x837b0c10
	ctx.lr = 0x83012F70;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83012F7C;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83012F84;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83012F98:
	// addi r11,r11,-14380
	ctx.r11.s64 = ctx.r11.s64 + -14380;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83012FA8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83012FB4;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83012FBC;
	sub_8387E8E0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83012FD0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-14380
	ctx.r11.s64 = ctx.r11.s64 + -14380;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83012FE4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83012FF0;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83012FF8;
	sub_8387E8E0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8301300C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012e10
	ctx.lr = 0x83013014;
	sub_83012E10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013038"))) PPC_WEAK_FUNC(sub_83013038);
PPC_FUNC_IMPL(__imp__sub_83013038) {
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
	// bl 0x82d86078
	ctx.lr = 0x83013050;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8301306c
	if (!cr6.eq) goto loc_8301306C;
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
loc_8301306C:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82e877c8
	ctx.lr = 0x83013074;
	sub_82E877C8(ctx, base);
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83013088
	if (cr6.eq) goto loc_83013088;
	// bl 0x82da11e0
	ctx.lr = 0x83013084;
	sub_82DA11E0(ctx, base);
	// b 0x8301308c
	goto loc_8301308C;
loc_83013088:
	// bl 0x82da1278
	ctx.lr = 0x8301308C;
	sub_82DA1278(ctx, base);
loc_8301308C:
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

__attribute__((alias("__imp__sub_830130A4"))) PPC_WEAK_FUNC(sub_830130A4);
PPC_FUNC_IMPL(__imp__sub_830130A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830130A8"))) PPC_WEAK_FUNC(sub_830130A8);
PPC_FUNC_IMPL(__imp__sub_830130A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830130B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830130D4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83013118
	if (cr6.eq) goto loc_83013118;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x830130E8;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r29,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r29.u8);
	// addi r9,r11,-13800
	ctx.r9.s64 = ctx.r11.s64 + -13800;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83013118:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013124"))) PPC_WEAK_FUNC(sub_83013124);
PPC_FUNC_IMPL(__imp__sub_83013124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83013128"))) PPC_WEAK_FUNC(sub_83013128);
PPC_FUNC_IMPL(__imp__sub_83013128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83013138
	if (cr6.lt) goto loc_83013138;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83013138:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830130a8
	sub_830130A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013140"))) PPC_WEAK_FUNC(sub_83013140);
PPC_FUNC_IMPL(__imp__sub_83013140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83013150
	if (cr6.lt) goto loc_83013150;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83013150:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x830130a8
	sub_830130A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013158"))) PPC_WEAK_FUNC(sub_83013158);
PPC_FUNC_IMPL(__imp__sub_83013158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83013160;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83013234
	if (cr6.lt) goto loc_83013234;
	// beq cr6,0x830131f8
	if (cr6.eq) goto loc_830131F8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// blt cr6,0x830131c0
	if (cr6.lt) goto loc_830131C0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13892
	ctx.r4.s64 = ctx.r11.s64 + -13892;
	// bl 0x837b0c10
	ctx.lr = 0x83013198;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830131A4;
	sub_82E88020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x830131AC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830131C0:
	// addi r11,r11,-13892
	ctx.r11.s64 = ctx.r11.s64 + -13892;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830131D0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830131DC;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x830131E4;
	sub_8387E8E0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830131F8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-13892
	ctx.r11.s64 = ctx.r11.s64 + -13892;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8301320C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83013218;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83013220;
	sub_8387E8E0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83013234:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83013038
	ctx.lr = 0x8301323C;
	sub_83013038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013260"))) PPC_WEAK_FUNC(sub_83013260);
PPC_FUNC_IMPL(__imp__sub_83013260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x83013288
	if (!cr6.eq) goto loc_83013288;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,9
	ctx.r9.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830132ac
	if (!cr6.eq) goto loc_830132AC;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x830132a8
	goto loc_830132A8;
loc_83013288:
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r8,r10,9
	ctx.r8.u64 = ctx.r10.u64 | 9;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x830132ac
	if (!cr6.eq) goto loc_830132AC;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x830132ac
	if (!cr6.eq) goto loc_830132AC;
	// li r11,14
	ctx.r11.s64 = 14;
loc_830132A8:
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_830132AC:
	// b 0x83824d80
	sub_83824D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830132B0"))) PPC_WEAK_FUNC(sub_830132B0);
PPC_FUNC_IMPL(__imp__sub_830132B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830132B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x830132C0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830132d4
	if (!cr6.eq) goto loc_830132D4;
loc_830132C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830132D4:
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e877c8
	ctx.lr = 0x830132E0;
	sub_82E877C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x830132EC;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x830132F0;
	sub_83102DB0(ctx, base);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83013334
	if (!cr6.gt) goto loc_83013334;
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
loc_83013308:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d9a8a8
	ctx.lr = 0x83013314;
	sub_82D9A8A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830132c8
	if (cr6.eq) goto loc_830132C8;
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83013308
	if (cr6.lt) goto loc_83013308;
loc_83013334:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da11e0
	ctx.lr = 0x8301333C;
	sub_82DA11E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013348"))) PPC_WEAK_FUNC(sub_83013348);
PPC_FUNC_IMPL(__imp__sub_83013348) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83013378;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830133bc
	if (cr6.eq) goto loc_830133BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8301338C;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-13200
	ctx.r8.s64 = ctx.r10.s64 + -13200;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x830133c0
	goto loc_830133C0;
loc_830133BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830133C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830133D8"))) PPC_WEAK_FUNC(sub_830133D8);
PPC_FUNC_IMPL(__imp__sub_830133D8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// bl 0x82d86078
	ctx.lr = 0x830133F8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8301341c
	if (!cr6.eq) goto loc_8301341C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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
loc_8301341C:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82e877c8
	ctx.lr = 0x83013424;
	sub_82E877C8(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,96
	ctx.r11.s64 = 96;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,15
	ctx.r10.s64 = 15;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r6,r7,r11
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r11.s32);
	// subfc r5,r10,r6
	xer.ca = ctx.r6.u32 >= ctx.r10.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
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

__attribute__((alias("__imp__sub_8301345C"))) PPC_WEAK_FUNC(sub_8301345C);
PPC_FUNC_IMPL(__imp__sub_8301345C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83013460"))) PPC_WEAK_FUNC(sub_83013460);
PPC_FUNC_IMPL(__imp__sub_83013460) {
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
	ctx.lr = 0x83013470;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830134c0
	if (cr6.eq) goto loc_830134C0;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82e877c8
	ctx.lr = 0x83013480;
	sub_82E877C8(ctx, base);
	// addi r3,r3,1524
	ctx.r3.s64 = ctx.r3.s64 + 1524;
	// bl 0x82da0bf8
	ctx.lr = 0x83013488;
	sub_82DA0BF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830134c0
	if (cr6.eq) goto loc_830134C0;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830134ac
	if (cr6.eq) goto loc_830134AC;
	// li r3,275
	ctx.r3.s64 = 275;
	// bl 0x82d84728
	ctx.lr = 0x830134AC;
	sub_82D84728(ctx, base);
loc_830134AC:
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
loc_830134C0:
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

__attribute__((alias("__imp__sub_830134D4"))) PPC_WEAK_FUNC(sub_830134D4);
PPC_FUNC_IMPL(__imp__sub_830134D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830134D8"))) PPC_WEAK_FUNC(sub_830134D8);
PPC_FUNC_IMPL(__imp__sub_830134D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830134e8
	if (cr6.lt) goto loc_830134E8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830134E8:
	// b 0x83013348
	sub_83013348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830134EC"))) PPC_WEAK_FUNC(sub_830134EC);
PPC_FUNC_IMPL(__imp__sub_830134EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830134F0"))) PPC_WEAK_FUNC(sub_830134F0);
PPC_FUNC_IMPL(__imp__sub_830134F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x830134F8;
	__savegprlr_21(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bgt cr6,0x83013a98
	if (cr6.gt) goto loc_83013A98;
	// lis r12,-31999
	ctx.r12.s64 = -2097086464;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,13616
	ctx.r12.s64 = ctx.r12.s64 + 13616;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8301356C;
	case 1:
		goto loc_830135E4;
	case 2:
		goto loc_83013638;
	case 3:
		goto loc_8301369C;
	case 4:
		goto loc_83013730;
	case 5:
		goto loc_83013744;
	case 6:
		goto loc_83013794;
	case 7:
		goto loc_830137E4;
	case 8:
		goto loc_83013840;
	case 9:
		goto loc_83013AE0;
	case 10:
		goto loc_83013AE0;
	case 11:
		goto loc_83013A20;
	case 12:
		goto loc_83013A5C;
	case 13:
		goto loc_83013A98;
	case 14:
		goto loc_830139E4;
	default:
		return;
	}
	// lwz r24,13676(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 13676);
	// lwz r24,13796(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 13796);
	// lwz r24,13880(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 13880);
	// lwz r24,13980(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 13980);
	// lwz r24,14128(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14128);
	// lwz r24,14148(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14148);
	// lwz r24,14228(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14228);
	// lwz r24,14308(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14308);
	// lwz r24,14400(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14400);
	// lwz r24,15072(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15072);
	// lwz r24,15072(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15072);
	// lwz r24,14880(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14880);
	// lwz r24,14940(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14940);
	// lwz r24,15000(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15000);
	// lwz r24,14820(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14820);
loc_8301356C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830132b0
	ctx.lr = 0x83013574;
	sub_830132B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83013594
	if (cr6.eq) goto loc_83013594;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83013594:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-13304
	ctx.r3.s64 = ctx.r11.s64 + -13304;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x830135AC;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83013ae0
	if (cr6.eq) goto loc_83013AE0;
	// lis r4,507
	ctx.r4.s64 = 33226752;
	// ori r4,r4,62
	ctx.r4.u64 = ctx.r4.u64 | 62;
	// bl 0x82d2ada8
	ctx.lr = 0x830135C4;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x830135D0;
	sub_83103100(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830135E4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-13304
	ctx.r11.s64 = ctx.r11.s64 + -13304;
	// addi r4,r11,-116
	ctx.r4.s64 = ctx.r11.s64 + -116;
	// bl 0x837b0c10
	ctx.lr = 0x830135F8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83013604;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x83013610;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83013638:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83013640;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83013ae0
	if (cr6.eq) goto loc_83013AE0;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8301366c
	if (cr6.eq) goto loc_8301366C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83013668;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r23,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r23.u32);
loc_8301366C:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83013688
	if (!cr6.eq) goto loc_83013688;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83013688:
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8301369C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830133d8
	ctx.lr = 0x830136AC;
	sub_830133D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830136e0
	if (cr6.eq) goto loc_830136E0;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r11,r11,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830136E0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-13304
	ctx.r3.s64 = ctx.r11.s64 + -13304;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x830136F8;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83013ae0
	if (cr6.eq) goto loc_83013AE0;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,306
	ctx.r4.u64 = ctx.r4.u64 | 306;
	// bl 0x82d2ada8
	ctx.lr = 0x83013710;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8301371C;
	sub_83103100(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83013730:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83013744:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-13304
	ctx.r11.s64 = ctx.r11.s64 + -13304;
	// addi r4,r11,-88
	ctx.r4.s64 = ctx.r11.s64 + -88;
	// bl 0x837b0c10
	ctx.lr = 0x83013758;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83013764;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x83013770;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83013794:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x8301379C;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83013ae0
	if (cr6.eq) goto loc_83013AE0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830137c8
	if (cr6.eq) goto loc_830137C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830137C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r23,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r23.u32);
loc_830137C8:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83013688
	if (!cr6.eq) goto loc_83013688;
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830137E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83013460
	ctx.lr = 0x830137EC;
	sub_83013460(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83013688
	if (cr6.eq) goto loc_83013688;
	// bl 0x82d86078
	ctx.lr = 0x830137FC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8301389c
	if (cr6.eq) goto loc_8301389C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82e877c8
	ctx.lr = 0x8301380C;
	sub_82E877C8(ctx, base);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8301382c
	if (cr6.eq) goto loc_8301382C;
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8301382C:
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83013840:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r28,r11,-13304
	ctx.r28.s64 = ctx.r11.s64 + -13304;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r28,-64
	ctx.r3.s64 = ctx.r28.s64 + -64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x8301385C;
	sub_82D2FA90(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r4,r28,-334
	ctx.r4.s64 = ctx.r28.s64 + -334;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x8301386C;
	sub_837B0C10(ctx, base);
	// addi r4,r28,-333
	ctx.r4.s64 = ctx.r28.s64 + -333;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83013878;
	sub_837B0C10(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x8301387C;
	sub_831156E8(ctx, base);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82d86078
	ctx.lr = 0x83013884;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830138a8
	if (!cr6.eq) goto loc_830138A8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83013894;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8301389C;
	sub_8387E8E0(ctx, base);
loc_8301389C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830138A8:
	// lwz r26,116(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e877c8
	ctx.lr = 0x830138B4;
	sub_82E877C8(ctx, base);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83013954
	if (!cr6.gt) goto loc_83013954;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
loc_830138CC:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r23,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r23.u16);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x825832d8
	ctx.lr = 0x830138E0;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x830138E4;
	sub_83102DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d9a868
	ctx.lr = 0x830138EC;
	sub_82D9A868(ctx, base);
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83013940
	if (!cr6.eq) goto loc_83013940;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311bd68
	ctx.lr = 0x83013904;
	sub_8311BD68(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8301390C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8301390c
	if (!cr6.eq) goto loc_8301390C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x83013930;
	sub_825A1EB8(ctx, base);
	// addi r4,r28,-48
	ctx.r4.s64 = ctx.r28.s64 + -48;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x83013940;
	sub_825A1EB8(ctx, base);
loc_83013940:
	// lwz r11,76(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 76);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x830138cc
	if (cr6.lt) goto loc_830138CC;
loc_83013954:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83013968
	if (!cr6.lt) goto loc_83013968;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_83013968:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,496
	ctx.r4.u64 = ctx.r4.u64 | 496;
	// bl 0x82d042a8
	ctx.lr = 0x83013978;
	sub_82D042A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8301398c
	if (!cr6.lt) goto loc_8301398C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_8301398C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x83013994;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x830139A0;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x830139A8;
	sub_8387E8E0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x830139B4;
	sub_83103100(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x830139B8;
	sub_82D26ED8(ctx, base);
	// li r4,75
	ctx.r4.s64 = 75;
	// bl 0x82d26b18
	ctx.lr = 0x830139C0;
	sub_82D26B18(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x830139D0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830139D8;
	sub_8387E8E0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830139E4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-13304
	ctx.r11.s64 = ctx.r11.s64 + -13304;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x830139F8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83013A04;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83013A0C;
	sub_8387E8E0(ctx, base);
	// li r21,1
	ctx.r21.s64 = 1;
	// stb r21,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r21.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83013A20:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-13304
	ctx.r11.s64 = ctx.r11.s64 + -13304;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x837b0c10
	ctx.lr = 0x83013A34;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83013A40;
	sub_82E88020(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x83013A48;
	sub_8387E8E0(ctx, base);
	// li r21,1
	ctx.r21.s64 = 1;
	// stb r21,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r21.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83013A5C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-13304
	ctx.r11.s64 = ctx.r11.s64 + -13304;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x83013A70;
	sub_837B0C10(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83013A7C;
	sub_82E88020(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x83013A84;
	sub_8387E8E0(ctx, base);
	// li r21,1
	ctx.r21.s64 = 1;
	// stb r21,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r21.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83013A98:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-13304
	ctx.r11.s64 = ctx.r11.s64 + -13304;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83013AAC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83013AB8;
	sub_82E88020(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83013ad8
	if (cr6.lt) goto loc_83013AD8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83013AD8;
	sub_825952B8(ctx, base);
loc_83013AD8:
	// li r21,1
	ctx.r21.s64 = 1;
	// stb r23,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r23.u8);
loc_83013AE0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013AEC"))) PPC_WEAK_FUNC(sub_83013AEC);
PPC_FUNC_IMPL(__imp__sub_83013AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83013AF0"))) PPC_WEAK_FUNC(sub_83013AF0);
PPC_FUNC_IMPL(__imp__sub_83013AF0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83013B20;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83013b64
	if (cr6.eq) goto loc_83013B64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83013B34;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-12608
	ctx.r8.s64 = ctx.r10.s64 + -12608;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x83013b68
	goto loc_83013B68;
loc_83013B64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83013B68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013B80"))) PPC_WEAK_FUNC(sub_83013B80);
PPC_FUNC_IMPL(__imp__sub_83013B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83013b90
	if (cr6.lt) goto loc_83013B90;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83013B90:
	// b 0x83013af0
	sub_83013AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013B94"))) PPC_WEAK_FUNC(sub_83013B94);
PPC_FUNC_IMPL(__imp__sub_83013B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83013B98"))) PPC_WEAK_FUNC(sub_83013B98);
PPC_FUNC_IMPL(__imp__sub_83013B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83013BA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83013BB0;
	sub_82D86078(ctx, base);
	// li r29,9
	ctx.r29.s64 = 9;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83013bc0
	if (!cr6.eq) goto loc_83013BC0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_83013BC0:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x83013BC8;
	sub_82DAB6D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// bl 0x82aa00e0
	ctx.lr = 0x83013BD8;
	sub_82AA00E0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x83013fb0
	if (cr6.gt) goto loc_83013FB0;
	// lis r12,-31999
	ctx.r12.s64 = -2097086464;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,15356
	ctx.r12.s64 = ctx.r12.s64 + 15356;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83013C24;
	case 1:
		goto loc_83013CB0;
	case 2:
		goto loc_83013D1C;
	case 3:
		goto loc_83013DEC;
	case 4:
		goto loc_83013E44;
	case 5:
		goto loc_83013FB4;
	case 6:
		goto loc_83013EA4;
	case 7:
		goto loc_83013EE8;
	case 8:
		goto loc_83013F2C;
	case 9:
		goto loc_83013F70;
	default:
		return;
	}
	// lwz r24,15396(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15396);
	// lwz r24,15536(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15536);
	// lwz r24,15644(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15644);
	// lwz r24,15852(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15852);
	// lwz r24,15940(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15940);
	// lwz r24,16308(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16308);
	// lwz r24,16036(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16036);
	// lwz r24,16104(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16104);
	// lwz r24,16172(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16172);
	// lwz r24,16240(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16240);
loc_83013C24:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83013c58
	if (!cr6.eq) goto loc_83013C58;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83013c58
	if (cr6.eq) goto loc_83013C58;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8378e240
	ctx.lr = 0x83013C4C;
	sub_8378E240(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83013C58:
	// bl 0x82d86078
	ctx.lr = 0x83013C5C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83013c94
	if (cr6.eq) goto loc_83013C94;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x83013C6C;
	sub_831F8200(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83013c94
	if (!cr6.eq) goto loc_83013C94;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8378e240
	ctx.lr = 0x83013C88;
	sub_8378E240(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83013C94:
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8378e240
	ctx.lr = 0x83013CA4;
	sub_8378E240(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83013CB0:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,1352
	ctx.r4.s64 = 1352;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x83013CC8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83013cec
	if (cr6.eq) goto loc_83013CEC;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83013ce4
	if (!cr6.lt) goto loc_83013CE4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_83013CE4:
	// bl 0x82e712a8
	ctx.lr = 0x83013CE8;
	sub_82E712A8(ctx, base);
	// b 0x83013cf0
	goto loc_83013CF0;
loc_83013CEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83013CF0:
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// bl 0x8378e240
	ctx.lr = 0x83013D10;
	sub_8378E240(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83013D1C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82e716d8
	ctx.lr = 0x83013D24;
	sub_82E716D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83013fb4
	if (cr6.eq) goto loc_83013FB4;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82e716d8
	ctx.lr = 0x83013D34;
	sub_82E716D8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83013d80
	if (cr6.eq) goto loc_83013D80;
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83013D58;
	sub_82595150(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83013d78
	if (cr6.eq) goto loc_83013D78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83013D78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83013D78:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83013D80;
	sub_82595170(ctx, base);
loc_83013D80:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x83013c58
	if (cr6.eq) goto loc_83013C58;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-12704
	ctx.r11.s64 = ctx.r11.s64 + -12704;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-68
	ctx.r3.s64 = ctx.r11.s64 + -68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83013DAC;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83013fb0
	if (cr6.eq) goto loc_83013FB0;
	// lis r4,501
	ctx.r4.s64 = 32833536;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// bl 0x82d2ada8
	ctx.lr = 0x83013DC4;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83013DD0;
	sub_83103100(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8378e240
	ctx.lr = 0x83013DE0;
	sub_8378E240(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83013DEC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-12704
	ctx.r11.s64 = ctx.r11.s64 + -12704;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x837b0c10
	ctx.lr = 0x83013E00;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83013E0C;
	sub_82D894E0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x83013E18;
	sub_8387E8E0(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r7,r11,9
	ctx.r7.s64 = ctx.r11.s64 + 9;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// bl 0x8378e240
	ctx.lr = 0x83013E38;
	sub_8378E240(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83013E44:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ddcec8
	ctx.lr = 0x83013E4C;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83013fb4
	if (cr6.eq) goto loc_83013FB4;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83013e68
	if (!cr6.eq) goto loc_83013E68;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83013e6c
	goto loc_83013E6C;
loc_83013E68:
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_83013E6C:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83013fb4
	if (cr6.eq) goto loc_83013FB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83013E88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// bl 0x8378e240
	ctx.lr = 0x83013E98;
	sub_8378E240(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83013EA4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-12704
	ctx.r11.s64 = ctx.r11.s64 + -12704;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x83013EB8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83013EC4;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83013ECC;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// bl 0x8378e240
	ctx.lr = 0x83013EDC;
	sub_8378E240(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83013EE8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-12704
	ctx.r11.s64 = ctx.r11.s64 + -12704;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x837b0c10
	ctx.lr = 0x83013EFC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83013F08;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x83013F10;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// bl 0x8378e240
	ctx.lr = 0x83013F20;
	sub_8378E240(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83013F2C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-12704
	ctx.r11.s64 = ctx.r11.s64 + -12704;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x837b0c10
	ctx.lr = 0x83013F40;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83013F4C;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83013F54;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// bl 0x8378e240
	ctx.lr = 0x83013F64;
	sub_8378E240(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83013F70:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-12704
	ctx.r4.s64 = ctx.r11.s64 + -12704;
	// bl 0x837b0c10
	ctx.lr = 0x83013F80;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83013F8C;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83013F94;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// bl 0x8378e240
	ctx.lr = 0x83013FA4;
	sub_8378E240(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83013FB0:
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_83013FB4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8378e240
	ctx.lr = 0x83013FBC;
	sub_8378E240(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013FC8"))) PPC_WEAK_FUNC(sub_83013FC8);
PPC_FUNC_IMPL(__imp__sub_83013FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83013FD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83013FF4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83014038
	if (cr6.eq) goto loc_83014038;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83014008;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// addi r9,r11,-12112
	ctx.r9.s64 = ctx.r11.s64 + -12112;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83014038:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83014044"))) PPC_WEAK_FUNC(sub_83014044);
PPC_FUNC_IMPL(__imp__sub_83014044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83014048"))) PPC_WEAK_FUNC(sub_83014048);
PPC_FUNC_IMPL(__imp__sub_83014048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83014058
	if (cr6.lt) goto loc_83014058;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83014058:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83013fc8
	sub_83013FC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83014060"))) PPC_WEAK_FUNC(sub_83014060);
PPC_FUNC_IMPL(__imp__sub_83014060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83014070
	if (cr6.lt) goto loc_83014070;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83014070:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83013fc8
	sub_83013FC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83014078"))) PPC_WEAK_FUNC(sub_83014078);
PPC_FUNC_IMPL(__imp__sub_83014078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83014080;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x830140f0
	if (cr6.gt) goto loc_830140F0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830140bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830140BC;
	// bdzf 4*cr6+eq,0x830140fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830140FC;
	// bdzf 4*cr6+eq,0x830141b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830141B8;
	// bdzf 4*cr6+eq,0x830141d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830141D8;
	// bne cr6,0x83014214
	if (!cr6.eq) goto loc_83014214;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830140BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82da4040
	ctx.lr = 0x830140D8;
	sub_82DA4040(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
loc_830140F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830140FC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-12204
	ctx.r11.s64 = ctx.r11.s64 + -12204;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x83014118;
	sub_82D2FA90(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r4,506
	ctx.r4.s64 = 33161216;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// ori r4,r4,244
	ctx.r4.u64 = ctx.r4.u64 | 244;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04220
	ctx.lr = 0x83014140;
	sub_82D04220(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83014184
	if (!cr6.eq) goto loc_83014184;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// ori r4,r4,526
	ctx.r4.u64 = ctx.r4.u64 | 526;
	// bl 0x82d04220
	ctx.lr = 0x83014168;
	sub_82D04220(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x8301417C;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83014184;
	sub_8387E8E0(ctx, base);
loc_83014184:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83014190;
	sub_82D2AAB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8301419C;
	sub_83103100(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x830141AC;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830141B8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830140f0
	if (!cr6.eq) goto loc_830140F0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830141D8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-12204
	ctx.r11.s64 = ctx.r11.s64 + -12204;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830141EC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830141F8;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83014200;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83014214:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-12204
	ctx.r4.s64 = ctx.r11.s64 + -12204;
	// bl 0x837b0c10
	ctx.lr = 0x83014224;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83014230;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83014238;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301424C"))) PPC_WEAK_FUNC(sub_8301424C);
PPC_FUNC_IMPL(__imp__sub_8301424C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83014250"))) PPC_WEAK_FUNC(sub_83014250);
PPC_FUNC_IMPL(__imp__sub_83014250) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83014280;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830142c0
	if (cr6.eq) goto loc_830142C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83014294;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-11584
	ctx.r8.s64 = ctx.r10.s64 + -11584;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x830142c4
	goto loc_830142C4;
loc_830142C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830142C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830142DC"))) PPC_WEAK_FUNC(sub_830142DC);
PPC_FUNC_IMPL(__imp__sub_830142DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830142E0"))) PPC_WEAK_FUNC(sub_830142E0);
PPC_FUNC_IMPL(__imp__sub_830142E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830142f0
	if (cr6.lt) goto loc_830142F0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830142F0:
	// b 0x83014250
	sub_83014250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830142F4"))) PPC_WEAK_FUNC(sub_830142F4);
PPC_FUNC_IMPL(__imp__sub_830142F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830142F8"))) PPC_WEAK_FUNC(sub_830142F8);
PPC_FUNC_IMPL(__imp__sub_830142F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83014300;
	__savegprlr_26(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x830143d4
	if (cr6.gt) goto loc_830143D4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8301433c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8301433C;
	// bdzf 4*cr6+eq,0x83014388
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83014388;
	// bdzf 4*cr6+eq,0x830143f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830143F8;
	// bdzf 4*cr6+eq,0x8301440c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8301440C;
	// bne cr6,0x83014448
	if (!cr6.eq) goto loc_83014448;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8301433C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-11676
	ctx.r11.s64 = ctx.r11.s64 + -11676;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x837b0c10
	ctx.lr = 0x83014350;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x8301435C;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83014368;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83014388:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83014390;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830143d4
	if (cr6.eq) goto loc_830143D4;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830143c0
	if (cr6.eq) goto loc_830143C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830143B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_830143C0:
	// li r11,5
	ctx.r11.s64 = 5;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x830143e0
	if (!cr6.eq) goto loc_830143E0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830143D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830143E0:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830143F8:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8301440C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-11676
	ctx.r11.s64 = ctx.r11.s64 + -11676;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83014420;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301442C;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83014434;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83014448:
	// bl 0x82d86078
	ctx.lr = 0x8301444C;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8301448c
	if (!cr6.eq) goto loc_8301448C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-11676
	ctx.r11.s64 = ctx.r11.s64 + -11676;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x8301446C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83014478;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83014480;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8301448C:
	// bl 0x831156e8
	ctx.lr = 0x83014490;
	sub_831156E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830144d0
	if (!cr6.eq) goto loc_830144D0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-11676
	ctx.r11.s64 = ctx.r11.s64 + -11676;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x830144B0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830144BC;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x830144C4;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830144D0:
	// lwz r29,116(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f8200
	ctx.lr = 0x830144DC;
	sub_831F8200(ctx, base);
	// bl 0x82d9e470
	ctx.lr = 0x830144E0;
	sub_82D9E470(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x830144EC;
	sub_82DAB6D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832d8
	ctx.lr = 0x830144F8;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x830144FC;
	sub_82D99C08(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b57f10
	ctx.lr = 0x83014504;
	sub_82B57F10(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82df16a0
	ctx.lr = 0x8301450C;
	sub_82DF16A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r3,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r3.u32);
	// stw r11,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x82df16a0
	ctx.lr = 0x83014530;
	sub_82DF16A0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x83014540;
	sub_8311C260(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x83014554;
	sub_8259D6C0(ctx, base);
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// ori r4,r4,179
	ctx.r4.u64 = ctx.r4.u64 | 179;
	// bl 0x82d042a8
	ctx.lr = 0x83014564;
	sub_82D042A8(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,297
	ctx.r4.u64 = ctx.r4.u64 | 297;
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// bl 0x82d042a8
	ctx.lr = 0x83014578;
	sub_82D042A8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d9fc48
	ctx.lr = 0x83014580;
	sub_82D9FC48(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82da0318
	ctx.lr = 0x8301458C;
	sub_82DA0318(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d975f0
	ctx.lr = 0x83014598;
	sub_82D975F0(ctx, base);
	// lis r9,-31758
	ctx.r9.s64 = -2081292288;
	// lwz r11,24080(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830145b0
	if (cr6.eq) goto loc_830145B0;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x82d84728
	ctx.lr = 0x830145B0;
	sub_82D84728(ctx, base);
loc_830145B0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-11676
	ctx.r4.s64 = ctx.r11.s64 + -11676;
	// bl 0x837b0c10
	ctx.lr = 0x830145C0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830145CC;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x830145D4;
	sub_8387E8E0(ctx, base);
	// stb r29,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r29.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82c16c98
	ctx.lr = 0x830145E0;
	sub_82C16C98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830145EC"))) PPC_WEAK_FUNC(sub_830145EC);
PPC_FUNC_IMPL(__imp__sub_830145EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830145F0"))) PPC_WEAK_FUNC(sub_830145F0);
PPC_FUNC_IMPL(__imp__sub_830145F0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83014620;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8301465c
	if (cr6.eq) goto loc_8301465C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83014634;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-11088
	ctx.r9.s64 = ctx.r11.s64 + -11088;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83014660
	goto loc_83014660;
loc_8301465C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83014660:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014678"))) PPC_WEAK_FUNC(sub_83014678);
PPC_FUNC_IMPL(__imp__sub_83014678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83014688
	if (cr6.lt) goto loc_83014688;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83014688:
	// b 0x830145f0
	sub_830145F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301468C"))) PPC_WEAK_FUNC(sub_8301468C);
PPC_FUNC_IMPL(__imp__sub_8301468C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83014690"))) PPC_WEAK_FUNC(sub_83014690);
PPC_FUNC_IMPL(__imp__sub_83014690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83014698;
	__savegprlr_20(ctx, base);
	// stwu r1,-2896(r1)
	ea = -2896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x830146A8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830146fc
	if (!cr6.eq) goto loc_830146FC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-11180
	ctx.r11.s64 = ctx.r11.s64 + -11180;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x830146C4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e88020
	ctx.lr = 0x830146D0;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830146f0
	if (cr6.lt) goto loc_830146F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830146F0;
	sub_825952B8(ctx, base);
loc_830146F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2896
	ctx.r1.s64 = ctx.r1.s64 + 2896;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830146FC:
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x831156e8
	ctx.lr = 0x83014704;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83014740
	if (!cr6.eq) goto loc_83014740;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-11180
	ctx.r11.s64 = ctx.r11.s64 + -11180;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83014720;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301472C;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83014734;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2896
	ctx.r1.s64 = ctx.r1.s64 + 2896;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83014740:
	// lwz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x830147d8
	if (cr6.gt) goto loc_830147D8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83014770
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83014770;
	// bdzf 4*cr6+eq,0x830147e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830147E4;
	// bdzf 4*cr6+eq,0x8301482c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8301482C;
	// bdzf 4*cr6+eq,0x83014840
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83014840;
	// bne cr6,0x8301487c
	if (!cr6.eq) goto loc_8301487C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r21)
	PPC_STORE_U32(ctx.r21.u32 + 96, ctx.r11.u32);
loc_83014770:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83014778;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d97538
	ctx.lr = 0x83014780;
	sub_82D97538(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df16a0
	ctx.lr = 0x8301478C;
	sub_82DF16A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83014798;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82b54cc0
	ctx.lr = 0x830147A4;
	sub_82B54CC0(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r29.u32);
	// stw r11,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 728, ctx.r30.u32);
	// stb r10,732(r1)
	PPC_STORE_U8(ctx.r1.u32 + 732, ctx.r10.u8);
	// bl 0x82da44b8
	ctx.lr = 0x830147C4;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da4370
	ctx.lr = 0x830147D0;
	sub_82DA4370(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,96(r21)
	PPC_STORE_U32(ctx.r21.u32 + 96, ctx.r9.u32);
loc_830147D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2896
	ctx.r1.s64 = ctx.r1.s64 + 2896;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830147E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x830147EC;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x830147F4;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830147d8
	if (cr6.eq) goto loc_830147D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da43b8
	ctx.lr = 0x83014808;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// stw r8,96(r21)
	PPC_STORE_U32(ctx.r21.u32 + 96, ctx.r8.u32);
	// addi r1,r1,2896
	ctx.r1.s64 = ctx.r1.s64 + 2896;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_8301482C:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r21)
	PPC_STORE_U32(ctx.r21.u32 + 96, ctx.r11.u32);
	// addi r1,r1,2896
	ctx.r1.s64 = ctx.r1.s64 + 2896;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83014840:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-11180
	ctx.r11.s64 = ctx.r11.s64 + -11180;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83014854;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e88020
	ctx.lr = 0x83014860;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83014868;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2896
	ctx.r1.s64 = ctx.r1.s64 + 2896;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_8301487C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83014884;
	sub_825832D8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d99c10
	ctx.lr = 0x8301488C;
	sub_82D99C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83014898;
	sub_82DAB6D0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d99c08
	ctx.lr = 0x830148A4;
	sub_82D99C08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825832f0
	ctx.lr = 0x830148B0;
	sub_825832F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d98930
	ctx.lr = 0x830148B8;
	sub_82D98930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x830148C8;
	sub_831CE980(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d97538
	ctx.lr = 0x830148D0;
	sub_82D97538(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82df16a0
	ctx.lr = 0x830148DC;
	sub_82DF16A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9a978
	ctx.lr = 0x830148E8;
	sub_82D9A978(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83102db0
	ctx.lr = 0x830148F4;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// beq cr6,0x830149bc
	if (cr6.eq) goto loc_830149BC;
loc_83014908:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x825832e0
	ctx.lr = 0x83014910;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d9aa60
	ctx.lr = 0x8301491C;
	sub_82D9AA60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83133f38
	ctx.lr = 0x83014924;
	sub_83133F38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830149ac
	if (!cr6.eq) goto loc_830149AC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83014934:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d98848
	ctx.lr = 0x83014940;
	sub_82D98848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830149a0
	if (cr6.eq) goto loc_830149A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// bne cr6,0x830149a0
	if (!cr6.eq) goto loc_830149A0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d995f8
	ctx.lr = 0x83014964;
	sub_82D995F8(ctx, base);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x83014994
	if (cr6.eq) goto loc_83014994;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x830149a0
	if (!cr6.lt) goto loc_830149A0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8301499c
	goto loc_8301499C;
loc_83014994:
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
loc_8301499C:
	// bl 0x82abfda0
	ctx.lr = 0x830149A0;
	sub_82ABFDA0(ctx, base);
loc_830149A0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83014934
	if (cr6.lt) goto loc_83014934;
loc_830149AC:
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x83014908
	if (!cr6.eq) goto loc_83014908;
loc_830149BC:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d9b368
	ctx.lr = 0x830149C8;
	sub_82D9B368(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825832e0
	ctx.lr = 0x830149D0;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d9aab8
	ctx.lr = 0x830149DC;
	sub_82D9AAB8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_830149E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d987f8
	ctx.lr = 0x830149EC;
	sub_82D987F8(ctx, base);
	// bl 0x82a47dc0
	ctx.lr = 0x830149F0;
	sub_82A47DC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d987f8
	ctx.lr = 0x83014A00;
	sub_82D987F8(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x83014A04;
	sub_825832E0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stb r30,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r30.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d97588
	ctx.lr = 0x83014A1C;
	sub_82D97588(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x830149e0
	if (cr6.lt) goto loc_830149E0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d97698
	ctx.lr = 0x83014A34;
	sub_82D97698(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-11180
	ctx.r4.s64 = ctx.r11.s64 + -11180;
	// bl 0x837b0c10
	ctx.lr = 0x83014A44;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e88020
	ctx.lr = 0x83014A50;
	sub_82E88020(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83014a70
	if (cr6.lt) goto loc_83014A70;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83014A70;
	sub_825952B8(ctx, base);
loc_83014A70:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r11.u8);
	// addi r1,r1,2896
	ctx.r1.s64 = ctx.r1.s64 + 2896;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83014A84"))) PPC_WEAK_FUNC(sub_83014A84);
PPC_FUNC_IMPL(__imp__sub_83014A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83014A88"))) PPC_WEAK_FUNC(sub_83014A88);
PPC_FUNC_IMPL(__imp__sub_83014A88) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-19088
	ctx.r9.s64 = ctx.r11.s64 + -19088;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x83014AC0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83014ad8
	if (cr6.eq) goto loc_83014AD8;
	// bl 0x82416268
	ctx.lr = 0x83014AD4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83014AD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014AF0"))) PPC_WEAK_FUNC(sub_83014AF0);
PPC_FUNC_IMPL(__imp__sub_83014AF0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83014B20;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83014b60
	if (cr6.eq) goto loc_83014B60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83014B34;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-10592
	ctx.r8.s64 = ctx.r10.s64 + -10592;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x83014b64
	goto loc_83014B64;
loc_83014B60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83014B64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014B7C"))) PPC_WEAK_FUNC(sub_83014B7C);
PPC_FUNC_IMPL(__imp__sub_83014B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83014B80"))) PPC_WEAK_FUNC(sub_83014B80);
PPC_FUNC_IMPL(__imp__sub_83014B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83014b90
	if (cr6.lt) goto loc_83014B90;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83014B90:
	// b 0x83014af0
	sub_83014AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83014B94"))) PPC_WEAK_FUNC(sub_83014B94);
PPC_FUNC_IMPL(__imp__sub_83014B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83014B98"))) PPC_WEAK_FUNC(sub_83014B98);
PPC_FUNC_IMPL(__imp__sub_83014B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83014BA0;
	__savegprlr_17(ctx, base);
	// stwu r1,-3088(r1)
	ea = -3088 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x83014BB0;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83014c08
	if (!cr6.eq) goto loc_83014C08;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-10684
	ctx.r11.s64 = ctx.r11.s64 + -10684;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83014BD0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82e88020
	ctx.lr = 0x83014BDC;
	sub_82E88020(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83014bfc
	if (cr6.lt) goto loc_83014BFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83014BFC;
	sub_825952B8(ctx, base);
loc_83014BFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,3088
	ctx.r1.s64 = ctx.r1.s64 + 3088;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83014C08:
	// lwz r29,116(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x831156e8
	ctx.lr = 0x83014C10;
	sub_831156E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83014c50
	if (!cr6.eq) goto loc_83014C50;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-10684
	ctx.r11.s64 = ctx.r11.s64 + -10684;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83014C30;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82e88020
	ctx.lr = 0x83014C3C;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83014C44;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,3088
	ctx.r1.s64 = ctx.r1.s64 + 3088;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83014C50:
	// lwz r11,96(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 96);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x83014c80
	if (cr6.gt) goto loc_83014C80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83014c8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83014C8C;
	// bdzf 4*cr6+eq,0x83014d00
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83014D00;
	// bdzf 4*cr6+eq,0x83014d48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83014D48;
	// bdzf 4*cr6+eq,0x83014d5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83014D5C;
	// bne cr6,0x83014d98
	if (!cr6.eq) goto loc_83014D98;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r18)
	PPC_STORE_U32(ctx.r18.u32 + 96, ctx.r11.u32);
loc_83014C80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3088
	ctx.r1.s64 = ctx.r1.s64 + 3088;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83014C8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83014C94;
	sub_82DAB6D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d97538
	ctx.lr = 0x83014C9C;
	sub_82D97538(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df16a0
	ctx.lr = 0x83014CA8;
	sub_82DF16A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e8
	ctx.lr = 0x83014CB4;
	sub_825832E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x82b54cc0
	ctx.lr = 0x83014CC0;
	sub_82B54CC0(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r30.u32);
	// stw r11,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 904, ctx.r31.u32);
	// stb r10,908(r1)
	PPC_STORE_U8(ctx.r1.u32 + 908, ctx.r10.u8);
	// bl 0x82da44b8
	ctx.lr = 0x83014CE0;
	sub_82DA44B8(ctx, base);
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da4370
	ctx.lr = 0x83014CEC;
	sub_82DA4370(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,96(r18)
	PPC_STORE_U32(ctx.r18.u32 + 96, ctx.r9.u32);
	// addi r1,r1,3088
	ctx.r1.s64 = ctx.r1.s64 + 3088;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83014D00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e8
	ctx.lr = 0x83014D08;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da4348
	ctx.lr = 0x83014D10;
	sub_82DA4348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83014c80
	if (cr6.eq) goto loc_83014C80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da43b8
	ctx.lr = 0x83014D24;
	sub_82DA43B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// stw r8,96(r18)
	PPC_STORE_U32(ctx.r18.u32 + 96, ctx.r8.u32);
	// addi r1,r1,3088
	ctx.r1.s64 = ctx.r1.s64 + 3088;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83014D48:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r18)
	PPC_STORE_U32(ctx.r18.u32 + 96, ctx.r11.u32);
	// addi r1,r1,3088
	ctx.r1.s64 = ctx.r1.s64 + 3088;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83014D5C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-10684
	ctx.r11.s64 = ctx.r11.s64 + -10684;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83014D70;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82e88020
	ctx.lr = 0x83014D7C;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83014D84;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r17)
	PPC_STORE_U8(ctx.r17.u32 + 0, ctx.r10.u8);
	// addi r1,r1,3088
	ctx.r1.s64 = ctx.r1.s64 + 3088;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83014D98:
	// lwz r31,116(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x83014DA4;
	sub_831F8200(ctx, base);
	// bl 0x82d9e470
	ctx.lr = 0x83014DA8;
	sub_82D9E470(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83014DB4;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83014DC0;
	sub_825832D8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d99c08
	ctx.lr = 0x83014DC8;
	sub_82D99C08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d99c10
	ctx.lr = 0x83014DD4;
	sub_82D99C10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x825832f0
	ctx.lr = 0x83014DDC;
	sub_825832F0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82d98930
	ctx.lr = 0x83014DE4;
	sub_82D98930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x83014DF4;
	sub_831CE980(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82b57f10
	ctx.lr = 0x83014DFC;
	sub_82B57F10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82df16a0
	ctx.lr = 0x83014E04;
	sub_82DF16A0(ctx, base);
	// li r19,2
	ctx.r19.s64 = 2;
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// stw r19,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r19.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r20,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r20.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// bl 0x82df16a0
	ctx.lr = 0x83014E28;
	sub_82DF16A0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311c260
	ctx.lr = 0x83014E38;
	sub_8311C260(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// bl 0x8259d6c0
	ctx.lr = 0x83014E48;
	sub_8259D6C0(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ori r4,r4,207
	ctx.r4.u64 = ctx.r4.u64 | 207;
	// bl 0x82d042a8
	ctx.lr = 0x83014E58;
	sub_82D042A8(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// ori r4,r4,233
	ctx.r4.u64 = ctx.r4.u64 | 233;
	// bl 0x82d042a8
	ctx.lr = 0x83014E68;
	sub_82D042A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9fc48
	ctx.lr = 0x83014E70;
	sub_82D9FC48(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da0318
	ctx.lr = 0x83014E7C;
	sub_82DA0318(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d975f0
	ctx.lr = 0x83014E88;
	sub_82D975F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97538
	ctx.lr = 0x83014E90;
	sub_82D97538(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82df16a0
	ctx.lr = 0x83014E9C;
	sub_82DF16A0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82d9a978
	ctx.lr = 0x83014EAC;
	sub_82D9A978(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83102db0
	ctx.lr = 0x83014EB8;
	sub_83102DB0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// beq cr6,0x83014f80
	if (cr6.eq) goto loc_83014F80;
loc_83014ECC:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x825832e0
	ctx.lr = 0x83014ED4;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d9aa60
	ctx.lr = 0x83014EE0;
	sub_82D9AA60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83133f38
	ctx.lr = 0x83014EE8;
	sub_83133F38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83014f70
	if (!cr6.eq) goto loc_83014F70;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83014EF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d98848
	ctx.lr = 0x83014F04;
	sub_82D98848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83014f64
	if (cr6.eq) goto loc_83014F64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// bne cr6,0x83014f64
	if (!cr6.eq) goto loc_83014F64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d995f8
	ctx.lr = 0x83014F28;
	sub_82D995F8(ctx, base);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x83014f58
	if (cr6.eq) goto loc_83014F58;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x83014f64
	if (!cr6.lt) goto loc_83014F64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x83014f60
	goto loc_83014F60;
loc_83014F58:
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
loc_83014F60:
	// bl 0x82abfda0
	ctx.lr = 0x83014F64;
	sub_82ABFDA0(ctx, base);
loc_83014F64:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83014ef8
	if (cr6.lt) goto loc_83014EF8;
loc_83014F70:
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x83014ecc
	if (!cr6.eq) goto loc_83014ECC;
loc_83014F80:
	// cmplw cr6,r22,r21
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, xer);
	// beq cr6,0x83014f94
	if (cr6.eq) goto loc_83014F94;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d9b368
	ctx.lr = 0x83014F94;
	sub_82D9B368(ctx, base);
loc_83014F94:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825832e0
	ctx.lr = 0x83014F9C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d9aab8
	ctx.lr = 0x83014FA8;
	sub_82D9AAB8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_83014FAC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d987f8
	ctx.lr = 0x83014FB8;
	sub_82D987F8(ctx, base);
	// bl 0x82a47dc0
	ctx.lr = 0x83014FBC;
	sub_82A47DC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d987f8
	ctx.lr = 0x83014FCC;
	sub_82D987F8(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x83014FD0;
	sub_825832E0(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97588
	ctx.lr = 0x83014FE8;
	sub_82D97588(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x83014fac
	if (cr6.lt) goto loc_83014FAC;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97698
	ctx.lr = 0x83015000;
	sub_82D97698(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82c16c98
	ctx.lr = 0x83015008;
	sub_82C16C98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-10684
	ctx.r4.s64 = ctx.r11.s64 + -10684;
	// bl 0x837b0c10
	ctx.lr = 0x83015018;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82e88020
	ctx.lr = 0x83015024;
	sub_82E88020(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83015040
	if (cr6.lt) goto loc_83015040;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x83015040;
	sub_825952B8(ctx, base);
loc_83015040:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r20,0(r17)
	PPC_STORE_U8(ctx.r17.u32 + 0, ctx.r20.u8);
	// addi r1,r1,3088
	ctx.r1.s64 = ctx.r1.s64 + 3088;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83015050"))) PPC_WEAK_FUNC(sub_83015050);
PPC_FUNC_IMPL(__imp__sub_83015050) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83015080;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830150c0
	if (cr6.eq) goto loc_830150C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83015094;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-10080
	ctx.r8.s64 = ctx.r10.s64 + -10080;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x830150c4
	goto loc_830150C4;
loc_830150C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830150C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830150DC"))) PPC_WEAK_FUNC(sub_830150DC);
PPC_FUNC_IMPL(__imp__sub_830150DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830150E0"))) PPC_WEAK_FUNC(sub_830150E0);
PPC_FUNC_IMPL(__imp__sub_830150E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830150f0
	if (cr6.lt) goto loc_830150F0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830150F0:
	// b 0x83015050
	sub_83015050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830150F4"))) PPC_WEAK_FUNC(sub_830150F4);
PPC_FUNC_IMPL(__imp__sub_830150F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830150F8"))) PPC_WEAK_FUNC(sub_830150F8);
PPC_FUNC_IMPL(__imp__sub_830150F8) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x830151d4
	if (cr6.gt) goto loc_830151D4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83015148
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83015148;
	// bdzf 4*cr6+eq,0x8301518c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8301518C;
	// bdzf 4*cr6+eq,0x830151f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830151F8;
	// bdzf 4*cr6+eq,0x83015200
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83015200;
	// bdzf 4*cr6+eq,0x830151d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830151D4;
	// bne cr6,0x83015238
	if (!cr6.eq) goto loc_83015238;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83015148:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-10176
	ctx.r11.s64 = ctx.r11.s64 + -10176;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x837b0c10
	ctx.lr = 0x8301515C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83015168;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83015174;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x830151d4
	goto loc_830151D4;
loc_8301518C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83015194;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830151d4
	if (cr6.eq) goto loc_830151D4;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830151c4
	if (cr6.eq) goto loc_830151C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830151BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_830151C4:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x830151f0
	if (!cr6.eq) goto loc_830151F0;
	// li r11,6
	ctx.r11.s64 = 6;
loc_830151D0:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830151D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830151D8:
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
loc_830151F0:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x830151d0
	goto loc_830151D0;
loc_830151F8:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x830151d0
	goto loc_830151D0;
loc_83015200:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-10176
	ctx.r11.s64 = ctx.r11.s64 + -10176;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83015214;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83015220;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83015228;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x830151d8
	goto loc_830151D8;
loc_83015238:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-10176
	ctx.r4.s64 = ctx.r11.s64 + -10176;
	// bl 0x837b0c10
	ctx.lr = 0x83015248;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83015254;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8301525C;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x830151d8
	goto loc_830151D8;
}

__attribute__((alias("__imp__sub_8301526C"))) PPC_WEAK_FUNC(sub_8301526C);
PPC_FUNC_IMPL(__imp__sub_8301526C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83015270"))) PPC_WEAK_FUNC(sub_83015270);
PPC_FUNC_IMPL(__imp__sub_83015270) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830152c8
	if (!cr6.eq) goto loc_830152C8;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830152f8
	if (!cr6.eq) goto loc_830152F8;
	// bl 0x82d17d90
	ctx.lr = 0x830152B0;
	sub_82D17D90(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x830152f8
	goto loc_830152F8;
loc_830152C8:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// ori r9,r11,5
	ctx.r9.u64 = ctx.r11.u64 | 5;
	// bne cr6,0x830152e8
	if (!cr6.eq) goto loc_830152E8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830152f8
	if (!cr6.eq) goto loc_830152F8;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x830152f4
	goto loc_830152F4;
loc_830152E8:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830152f8
	if (!cr6.eq) goto loc_830152F8;
	// li r11,6
	ctx.r11.s64 = 6;
loc_830152F4:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830152F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x83015304;
	sub_83824D80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301531C"))) PPC_WEAK_FUNC(sub_8301531C);
PPC_FUNC_IMPL(__imp__sub_8301531C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83015320"))) PPC_WEAK_FUNC(sub_83015320);
PPC_FUNC_IMPL(__imp__sub_83015320) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83015350;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8301538c
	if (cr6.eq) goto loc_8301538C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83015364;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-9528
	ctx.r9.s64 = ctx.r11.s64 + -9528;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83015390
	goto loc_83015390;
loc_8301538C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83015390:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830153A8"))) PPC_WEAK_FUNC(sub_830153A8);
PPC_FUNC_IMPL(__imp__sub_830153A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830153b8
	if (cr6.lt) goto loc_830153B8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830153B8:
	// b 0x83015320
	sub_83015320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830153BC"))) PPC_WEAK_FUNC(sub_830153BC);
PPC_FUNC_IMPL(__imp__sub_830153BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830153C0"))) PPC_WEAK_FUNC(sub_830153C0);
PPC_FUNC_IMPL(__imp__sub_830153C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830153C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x830153D8;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83015438
	if (!cr6.eq) goto loc_83015438;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-9624
	ctx.r11.s64 = ctx.r11.s64 + -9624;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bl 0x837b0c10
	ctx.lr = 0x830153F8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83015404;
	sub_82E88020(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83015424
	if (cr6.lt) goto loc_83015424;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83015424;
	sub_825952B8(ctx, base);
loc_83015424:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83015438:
	// bl 0x831156e8
	ctx.lr = 0x8301543C;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83015480
	if (!cr6.eq) goto loc_83015480;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-9624
	ctx.r11.s64 = ctx.r11.s64 + -9624;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x837b0c10
	ctx.lr = 0x83015458;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83015464;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8301546C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83015480:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r30,116(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x83015688
	if (cr6.gt) goto loc_83015688;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83015618
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83015618;
	// bdzf 4*cr6+eq,0x830155b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830155B0;
	// bdzf 4*cr6+eq,0x830155d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830155D8;
	// bdzf 4*cr6+eq,0x83015618
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83015618;
	// bdzf 4*cr6+eq,0x83015624
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83015624;
	// bne cr6,0x8301564c
	if (!cr6.eq) goto loc_8301564C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x830154BC;
	sub_82DAB6D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x830154C8;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x830154CC;
	sub_82D99C08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82df16a0
	ctx.lr = 0x830154D8;
	sub_82DF16A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d9a978
	ctx.lr = 0x830154E8;
	sub_82D9A978(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311c260
	ctx.lr = 0x83015500;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x83015510;
	sub_831CE980(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r30,r10,-9624
	ctx.r30.s64 = ctx.r10.s64 + -9624;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r30,-60
	ctx.r3.s64 = ctx.r30.s64 + -60;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x83015530;
	sub_82D2F6D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-294
	ctx.r4.s64 = ctx.r30.s64 + -294;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83015540;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r6,r1,372
	ctx.r6.s64 = ctx.r1.s64 + 372;
	// addi r5,r1,372
	ctx.r5.s64 = ctx.r1.s64 + 372;
	// ori r4,r4,292
	ctx.r4.u64 = ctx.r4.u64 | 292;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x83015558;
	sub_82D042A8(ctx, base);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x8301556c
	if (!cr6.lt) goto loc_8301556C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_8301556C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83015574;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x83015580;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83015588;
	sub_8387E8E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83015594;
	sub_83103100(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8301559C;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830155B0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-9624
	ctx.r11.s64 = ctx.r11.s64 + -9624;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x830155C4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830155D0;
	sub_82E88020(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// b 0x830156a8
	goto loc_830156A8;
loc_830155D8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-9624
	ctx.r11.s64 = ctx.r11.s64 + -9624;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x830155F4;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,544
	ctx.r4.u64 = ctx.r4.u64 | 544;
	// bl 0x82d2ada8
	ctx.lr = 0x83015604;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83015610;
	sub_83103100(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_83015618:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83015624:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-9624
	ctx.r11.s64 = ctx.r11.s64 + -9624;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x837b0c10
	ctx.lr = 0x83015638;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83015644;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// b 0x830156a8
	goto loc_830156A8;
loc_8301564C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-9624
	ctx.r11.s64 = ctx.r11.s64 + -9624;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83015660;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x8301566C;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x83015674;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83015688:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-9624
	ctx.r4.s64 = ctx.r11.s64 + -9624;
	// bl 0x837b0c10
	ctx.lr = 0x83015698;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830156A4;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
loc_830156A8:
	// bl 0x8387e8e0
	ctx.lr = 0x830156AC;
	sub_8387E8E0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830156C0"))) PPC_WEAK_FUNC(sub_830156C0);
PPC_FUNC_IMPL(__imp__sub_830156C0) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830156F0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8301572c
	if (cr6.eq) goto loc_8301572C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83015704;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-8992
	ctx.r9.s64 = ctx.r11.s64 + -8992;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83015730
	goto loc_83015730;
loc_8301572C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83015730:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015748"))) PPC_WEAK_FUNC(sub_83015748);
PPC_FUNC_IMPL(__imp__sub_83015748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83015758
	if (cr6.lt) goto loc_83015758;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83015758:
	// b 0x830156c0
	sub_830156C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301575C"))) PPC_WEAK_FUNC(sub_8301575C);
PPC_FUNC_IMPL(__imp__sub_8301575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83015760"))) PPC_WEAK_FUNC(sub_83015760);
PPC_FUNC_IMPL(__imp__sub_83015760) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x830ff290
	ctx.lr = 0x83015778;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-53
	ctx.r11.s64 = ctx.r11.s64 + -53;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x830157f8
	if (cr6.gt) goto loc_830157F8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830157f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830157F8;
	// bdzf 4*cr6+eq,0x830157f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830157F8;
	// bdzf 4*cr6+eq,0x830157f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830157F8;
	// bdzf 4*cr6+eq,0x830157d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830157D4;
	// bdzf 4*cr6+eq,0x830157d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830157D4;
	// bdzf 4*cr6+eq,0x830157d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830157D4;
	// bdzf 4*cr6+eq,0x830157b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830157B0;
	// bne cr6,0x830157b0
	if (!cr6.eq) goto loc_830157B0;
loc_830157B0:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,29632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29632);
	// bl 0x8259d6c0
	ctx.lr = 0x830157C0;
	sub_8259D6C0(ctx, base);
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
loc_830157D4:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,29636(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29636);
	// bl 0x8259d6c0
	ctx.lr = 0x830157E4;
	sub_8259D6C0(ctx, base);
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
loc_830157F8:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// lwz r4,29640(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29640);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83015804:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83015804
	if (!cr6.eq) goto loc_83015804;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83015828;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_8301583C"))) PPC_WEAK_FUNC(sub_8301583C);
PPC_FUNC_IMPL(__imp__sub_8301583C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83015840"))) PPC_WEAK_FUNC(sub_83015840);
PPC_FUNC_IMPL(__imp__sub_83015840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83015848;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83015868
	if (!cr6.eq) goto loc_83015868;
	// stw r30,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
loc_83015868:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r4,r9,-9366
	ctx.r4.s64 = ctx.r9.s64 + -9366;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x83015890;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83015760
	ctx.lr = 0x8301589C;
	sub_83015760(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x830158A8;
	sub_82E88020(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x830158c8
	if (cr6.lt) goto loc_830158C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830158C8;
	sub_825952B8(ctx, base);
loc_830158C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830158D8"))) PPC_WEAK_FUNC(sub_830158D8);
PPC_FUNC_IMPL(__imp__sub_830158D8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83015908;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83015948
	if (cr6.eq) goto loc_83015948;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x8301591C;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-8472
	ctx.r8.s64 = ctx.r10.s64 + -8472;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8301594c
	goto loc_8301594C;
loc_83015948:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301594C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015964"))) PPC_WEAK_FUNC(sub_83015964);
PPC_FUNC_IMPL(__imp__sub_83015964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83015968"))) PPC_WEAK_FUNC(sub_83015968);
PPC_FUNC_IMPL(__imp__sub_83015968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83015978
	if (cr6.lt) goto loc_83015978;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83015978:
	// b 0x830158d8
	sub_830158D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301597C"))) PPC_WEAK_FUNC(sub_8301597C);
PPC_FUNC_IMPL(__imp__sub_8301597C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83015980"))) PPC_WEAK_FUNC(sub_83015980);
PPC_FUNC_IMPL(__imp__sub_83015980) {
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
	// bl 0x82d86078
	ctx.lr = 0x83015998;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830159e4
	if (!cr6.eq) goto loc_830159E4;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// lwz r4,29780(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29780);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830159AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830159ac
	if (!cr6.eq) goto loc_830159AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830159D0;
	sub_8259CC28(ctx, base);
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
loc_830159E4:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x830159EC;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x830159F0;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x830159F4;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83015a08
	if (!cr6.eq) goto loc_83015A08;
loc_830159FC:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// lwz r4,29780(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29780);
	// b 0x83015a2c
	goto loc_83015A2C;
loc_83015A08:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d98848
	ctx.lr = 0x83015A10;
	sub_82D98848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830159fc
	if (cr6.eq) goto loc_830159FC;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x830159fc
	if (!cr6.gt) goto loc_830159FC;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// lwz r4,29776(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29776);
loc_83015A2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x83015A34;
	sub_8259D6C0(ctx, base);
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

__attribute__((alias("__imp__sub_83015A48"))) PPC_WEAK_FUNC(sub_83015A48);
PPC_FUNC_IMPL(__imp__sub_83015A48) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x83015b78
	if (cr6.gt) goto loc_83015B78;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83015a90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83015A90;
	// bdzf 4*cr6+eq,0x83015ad8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83015AD8;
	// bdzf 4*cr6+eq,0x83015b38
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83015B38;
	// bne cr6,0x83015b48
	if (!cr6.eq) goto loc_83015B48;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83015A90:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-8830
	ctx.r11.s64 = ctx.r11.s64 + -8830;
	// addi r4,r11,242
	ctx.r4.s64 = ctx.r11.s64 + 242;
	// bl 0x837b0c10
	ctx.lr = 0x83015AA4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x83015AB0;
	sub_82D894E0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83015ABC;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x83015bcc
	goto loc_83015BCC;
loc_83015AD8:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82ddcec8
	ctx.lr = 0x83015AE0;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83015b40
	if (cr6.eq) goto loc_83015B40;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83015b10
	if (cr6.eq) goto loc_83015B10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83015B08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_83015B10:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83015b28
	if (!cr6.eq) goto loc_83015B28;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83015bcc
	goto loc_83015BCC;
loc_83015B28:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x83015bcc
	goto loc_83015BCC;
loc_83015B38:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83015B40:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83015bcc
	goto loc_83015BCC;
loc_83015B48:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,29784(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29784);
	// bl 0x837b0c10
	ctx.lr = 0x83015B58;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83015B64;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83015B6C;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x83015bc8
	goto loc_83015BC8;
loc_83015B78:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8830
	ctx.r4.s64 = ctx.r11.s64 + -8830;
	// bl 0x837b0c10
	ctx.lr = 0x83015B88;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83015980
	ctx.lr = 0x83015B94;
	sub_83015980(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83015BA0;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83015bc0
	if (cr6.lt) goto loc_83015BC0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83015BC0;
	sub_825952B8(ctx, base);
loc_83015BC0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_83015BC8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83015BCC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015BE4"))) PPC_WEAK_FUNC(sub_83015BE4);
PPC_FUNC_IMPL(__imp__sub_83015BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83015BE8"))) PPC_WEAK_FUNC(sub_83015BE8);
PPC_FUNC_IMPL(__imp__sub_83015BE8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83015C18;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83015c54
	if (cr6.eq) goto loc_83015C54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83061e98
	ctx.lr = 0x83015C2C;
	sub_83061E98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-7976
	ctx.r9.s64 = ctx.r11.s64 + -7976;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x83015c58
	goto loc_83015C58;
loc_83015C54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83015C58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015C70"))) PPC_WEAK_FUNC(sub_83015C70);
PPC_FUNC_IMPL(__imp__sub_83015C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83015c80
	if (cr6.lt) goto loc_83015C80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83015C80:
	// b 0x83015be8
	sub_83015BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83015C84"))) PPC_WEAK_FUNC(sub_83015C84);
PPC_FUNC_IMPL(__imp__sub_83015C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83015C88"))) PPC_WEAK_FUNC(sub_83015C88);
PPC_FUNC_IMPL(__imp__sub_83015C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83015C90;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d897b0
	ctx.lr = 0x83015CA0;
	sub_82D897B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83015cb4
	if (cr6.eq) goto loc_83015CB4;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
loc_83015CB4:
	// bl 0x82d86078
	ctx.lr = 0x83015CB8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83015d14
	if (!cr6.eq) goto loc_83015D14;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-8068
	ctx.r11.s64 = ctx.r11.s64 + -8068;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83015CD4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83015CE0;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83015d00
	if (cr6.lt) goto loc_83015D00;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83015D00;
	sub_825952B8(ctx, base);
loc_83015D00:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83015D14:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83015dd4
	if (cr6.lt) goto loc_83015DD4;
	// beq cr6,0x83015d98
	if (cr6.eq) goto loc_83015D98;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// blt cr6,0x83015d64
	if (cr6.lt) goto loc_83015D64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-8068
	ctx.r4.s64 = ctx.r11.s64 + -8068;
	// bl 0x837b0c10
	ctx.lr = 0x83015D40;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83015D4C;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83015D54;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83015D64:
	// addi r11,r11,-8068
	ctx.r11.s64 = ctx.r11.s64 + -8068;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x83015D74;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83015D80;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83015D88;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83015D98:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-8068
	ctx.r11.s64 = ctx.r11.s64 + -8068;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x83015DAC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x83015DB8;
	sub_82E88020(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83015DC0;
	sub_8387E8E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83015DD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83015DDC;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x83015DE8;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x83015DEC;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x83015DF0;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83015e3c
	if (cr6.eq) goto loc_83015E3C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d98848
	ctx.lr = 0x83015E00;
	sub_82D98848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83015e3c
	if (cr6.eq) goto loc_83015E3C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x83015e3c
	if (cr6.gt) goto loc_83015E3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d976e8
	ctx.lr = 0x83015E1C;
	sub_82D976E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83015e3c
	if (!cr6.eq) goto loc_83015E3C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83015E3C:
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83015E4C"))) PPC_WEAK_FUNC(sub_83015E4C);
PPC_FUNC_IMPL(__imp__sub_83015E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83015E50"))) PPC_WEAK_FUNC(sub_83015E50);
PPC_FUNC_IMPL(__imp__sub_83015E50) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83061e98
	ctx.lr = 0x83015E70;
	sub_83061E98(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-7376
	ctx.r8.s64 = ctx.r10.s64 + -7376;
	// addi r7,r9,-7380
	ctx.r7.s64 = ctx.r9.s64 + -7380;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015EB8"))) PPC_WEAK_FUNC(sub_83015EB8);
PPC_FUNC_IMPL(__imp__sub_83015EB8) {
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
	// bl 0x82d86078
	ctx.lr = 0x83015ED0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83015ef4
	if (!cr6.eq) goto loc_83015EF4;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
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
loc_83015EF4:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x83015EFC;
	sub_83815CB0(ctx, base);
	// bl 0x82d9db60
	ctx.lr = 0x83015F00;
	sub_82D9DB60(ctx, base);
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

__attribute__((alias("__imp__sub_83015F18"))) PPC_WEAK_FUNC(sub_83015F18);
PPC_FUNC_IMPL(__imp__sub_83015F18) {
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
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83015f4c
	if (!cr6.eq) goto loc_83015F4C;
loc_83015F3C:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x83015fa8
	goto loc_83015FA8;
loc_83015F4C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83015F5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83015f70
	if (!cr6.eq) goto loc_83015F70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83015fa8
	goto loc_83015FA8;
loc_83015F70:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lbz r30,108(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// beq cr6,0x83015f98
	if (cr6.eq) goto loc_83015F98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83015F90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_83015F98:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83015f3c
	if (!cr6.eq) goto loc_83015F3C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_83015FA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015FC0"))) PPC_WEAK_FUNC(sub_83015FC0);
PPC_FUNC_IMPL(__imp__sub_83015FC0) {
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83015ff4
	if (!cr6.eq) goto loc_83015FF4;
loc_83015FE4:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x83016050
	goto loc_83016050;
loc_83015FF4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83016004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83016018
	if (!cr6.eq) goto loc_83016018;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83016050
	goto loc_83016050;
loc_83016018:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lbz r30,108(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// beq cr6,0x83016040
	if (cr6.eq) goto loc_83016040;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83016038;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
loc_83016040:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83015fe4
	if (!cr6.eq) goto loc_83015FE4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_83016050:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016068"))) PPC_WEAK_FUNC(sub_83016068);
PPC_FUNC_IMPL(__imp__sub_83016068) {
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
	// blt cr6,0x8301608c
	if (cr6.lt) goto loc_8301608C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83016090
	goto loc_83016090;
loc_8301608C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83016090:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830160A8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830160c4
	if (cr6.eq) goto loc_830160C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83015e50
	ctx.lr = 0x830160BC;
	sub_83015E50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830160c8
	if (!cr6.eq) goto loc_830160C8;
loc_830160C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830160C8:
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

__attribute__((alias("__imp__sub_830160DC"))) PPC_WEAK_FUNC(sub_830160DC);
PPC_FUNC_IMPL(__imp__sub_830160DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830160E0"))) PPC_WEAK_FUNC(sub_830160E0);
PPC_FUNC_IMPL(__imp__sub_830160E0) {
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
	// blt cr6,0x83016104
	if (cr6.lt) goto loc_83016104;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83016108
	goto loc_83016108;
loc_83016104:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83016108:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83016120;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8301613c
	if (cr6.eq) goto loc_8301613C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83015e50
	ctx.lr = 0x83016134;
	sub_83015E50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83016140
	if (!cr6.eq) goto loc_83016140;
loc_8301613C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83016140:
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

__attribute__((alias("__imp__sub_83016154"))) PPC_WEAK_FUNC(sub_83016154);
PPC_FUNC_IMPL(__imp__sub_83016154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83016158"))) PPC_WEAK_FUNC(sub_83016158);
PPC_FUNC_IMPL(__imp__sub_83016158) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83016184;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x830161ac
	if (cr6.eq) goto loc_830161AC;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r9,r10,-7268
	ctx.r9.s64 = ctx.r10.s64 + -7268;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x830161b0
	goto loc_830161B0;
loc_830161AC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_830161B0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83878e28
	ctx.lr = 0x830161C8;
	sub_83878E28(ctx, base);
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

